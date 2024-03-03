#include <cvirte.h>		
#include <userint.h>
#include "Incdec.h"

static int panelHandle;
int number;

int main (int argc, char *argv[])
{
	if (InitCVIRTE (0, argv, 0) == 0)
		return -1;	/* out of memory */
	if ((panelHandle = LoadPanel (0, "Incdec.uir", PANEL)) < 0)
		return -1;
	DisplayPanel (panelHandle);
	RunUserInterface ();
	DiscardPanel (panelHandle);
	return 0;
}

int CVICALLBACK AddOne (int panel, int control, int event,
						void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			SetCtrlVal(panel,PANEL_COUNT,++number);
			break;
		case EVENT_RIGHT_CLICK:
			MessagePopup("Add one","Increment the count");
			break;
		case EVENT_GOT_FOCUS:

			break;
		case EVENT_LOST_FOCUS:

			break;
	}
	return 0;
}

int CVICALLBACK QuitProgram (int panel, int control, int event,
							 void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			QuitUserInterface (0);
			break;
		case EVENT_RIGHT_CLICK:

			break;
		case EVENT_GOT_FOCUS:

			break;
		case EVENT_LOST_FOCUS:

			break;
	}
	return 0;
}

int CVICALLBACK SetToZeto (int panel, int control, int event,
						   void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			number = 0;
			SetCtrlVal(panel, PANEL_COUNT,number);
			break;
		case EVENT_RIGHT_CLICK:
			MessagePopup("Set Zero","Reset the counter");
			break;
		case EVENT_GOT_FOCUS:

			break;
		case EVENT_LOST_FOCUS:

			break;
	}
	return 0;
}

int CVICALLBACK SubsctractOne (int panel, int control, int event,
							   void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			SetCtrlVal(panel,PANEL_COUNT, --number);
			break;
		case EVENT_RIGHT_CLICK:
			MessagePopup("Subtract One","Decrement the counter");
			break;
		case EVENT_GOT_FOCUS:

			break;
		case EVENT_LOST_FOCUS:

			break;
	}
	return 0;
}
