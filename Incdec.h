/**************************************************************************/
/* LabWindows/CVI User Interface Resource (UIR) Include File              */
/*                                                                        */
/* WARNING: Do not add to, delete from, or otherwise modify the contents  */
/*          of this include file.                                         */
/**************************************************************************/

#include <userint.h>

#ifdef __cplusplus
    extern "C" {
#endif

     /* Panels and Controls: */

#define  PANEL                            1
#define  PANEL_COUNT                      2       /* control type: numeric, callback function: (none) */
#define  PANEL_INCREMENT                  3       /* control type: command, callback function: AddOne */
#define  PANEL_QUIT                       4       /* control type: command, callback function: QuitProgram */
#define  PANEL_RESET                      5       /* control type: command, callback function: SetToZeto */
#define  PANEL_DECREMENT                  6       /* control type: command, callback function: SubsctractOne */


     /* Control Arrays: */

          /* (no control arrays in the resource file) */


     /* Menu Bars, Menus, and Menu Items: */

          /* (no menu bars in the resource file) */


     /* Callback Prototypes: */

int  CVICALLBACK AddOne(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK QuitProgram(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK SetToZeto(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK SubsctractOne(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);


#ifdef __cplusplus
    }
#endif