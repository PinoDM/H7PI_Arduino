/*********************************************************************
*                                                                    *
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
*                                                                    *
**********************************************************************
*                                                                    *
* C-file generated by:                                               *
*                                                                    *
*        GUI_Builder for emWin version 5.32                          *
*        Compiled Oct  8 2015, 11:59:02                              *
*        (c) 2015 Segger Microcontroller GmbH & Co. KG               *
*                                                                    *
**********************************************************************
*                                                                    *
*        Internet: www.segger.com  Support: support@segger.com       *
*                                                                    *
**********************************************************************
*/

// USER START (Optionally insert additional includes)
#include "app_config.h"
// USER END

#include "DIALOG.h"

/*********************************************************************
*
*       Defines
*
**********************************************************************
*/
#define ID_FRAMEWIN_0  (GUI_ID_USER + 0x00)
#define ID_BUTTON_0  (GUI_ID_USER + 0x01)
#define ID_BUTTON_1  (GUI_ID_USER + 0x02)
#define ID_BUTTON_2  (GUI_ID_USER + 0x03)
#define ID_BUTTON_3  (GUI_ID_USER + 0x04)
#define ID_BUTTON_4  (GUI_ID_USER + 0x05)
#define ID_BUTTON_5  (GUI_ID_USER + 0x06)


// USER START (Optionally insert additional defines)
WM_HWIN hMainWin;
// USER END

/*********************************************************************
*
*       Static data
*
**********************************************************************
*/

// USER START (Optionally insert additional static data)
// USER END

/*********************************************************************
*
*       _aDialogCreate
*/
static const GUI_WIDGET_CREATE_INFO _aDialogCreate[] = {
  { FRAMEWIN_CreateIndirect, "My Home", ID_FRAMEWIN_0, 0, 0, 240, 135, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "Temper", ID_BUTTON_0, 10, 10, 60, 40, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "Altitude", ID_BUTTON_1, 85, 10, 60, 40, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "Pressure", ID_BUTTON_2, 85, 68, 60, 40, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "Humidity", ID_BUTTON_3, 10, 68, 60, 40, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "Lux", ID_BUTTON_4, 162, 10, 60, 40, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "RES", ID_BUTTON_5, 162, 68, 60, 40, 0, 0x0, 0 },
  // USER START (Optionally insert additional widgets)
  // USER END
};

/*********************************************************************
*
*       Static code
*
**********************************************************************
*/

// USER START (Optionally insert additional static code)
void mainWin_Init(void);
void temperatureWin_Init(WM_HWIN hWin);
// USER END

/*********************************************************************
*
*       _cbDialog
*/
static void _cbDialog(WM_MESSAGE * pMsg) {
  WM_HWIN hItem;
  int     NCode;
  int     Id;
  // USER START (Optionally insert additional variables)
  // USER END

  switch (pMsg->MsgId) {
  case WM_INIT_DIALOG:
    //
    // Initialization of 'My Home'
    //
    hItem = pMsg->hWin;
    FRAMEWIN_SetTitleHeight(hItem, 8);
    FRAMEWIN_SetFont(hItem, GUI_FONT_8_ASCII);
    FRAMEWIN_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER);
    // USER START (Optionally insert additional code for further widget initialization)
    // USER END
    break;
  case WM_NOTIFY_PARENT:
    Id    = WM_GetId(pMsg->hWinSrc);
    NCode = pMsg->Data.v;
    switch(Id) {
    case ID_BUTTON_0: // Notifications sent by 'Temper'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_1: // Notifications sent by 'Altitude'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_2: // Notifications sent by 'Pressure'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_3: // Notifications sent by 'Humidity'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_4: // Notifications sent by 'Lux'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_5: // Notifications sent by 'RES'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    // USER START (Optionally insert additional code for further Ids)
    // USER END
    }
    break;
  // USER START (Optionally insert additional message handling)
  // USER END
  default:
    WM_DefaultProc(pMsg);
    break;
  }
}

/*********************************************************************
*
*       Public code
*
**********************************************************************
*/
/*********************************************************************
*
*       CreateMy Home
*/
WM_HWIN CreateMain(void);
WM_HWIN CreateMain(void) {
  WM_HWIN hWin;

  hWin = GUI_CreateDialogBox(_aDialogCreate, GUI_COUNTOF(_aDialogCreate), _cbDialog, WM_HBKWIN, 0, 0);
  return hWin;
}

// USER START (Optionally insert additional public code)
void mainWin_Init(void)
{
	hMainWin = CreateMain();
}



void mainRefresh(void)
{
	char tmp[32]={0};
	WM_HWIN hItem;
	
	hItem = WM_GetDialogItem(hMainWin,ID_BUTTON_0);
	sprintf(tmp,"%5.1fC",hp203b_GetTemperature());
	BUTTON_SetText(hItem,tmp);
	memset(tmp,0,sizeof tmp);
	hItem = WM_GetDialogItem(hMainWin,ID_BUTTON_1);
	sprintf(tmp,"%5.0fkPa",hp203b_GetPressure());
	BUTTON_SetText(hItem,tmp);
	memset(tmp,0,sizeof tmp);
	hItem = WM_GetDialogItem(hMainWin,ID_BUTTON_2);
	sprintf(tmp,"%5.0fm",hp203b_GetAltitude());
	BUTTON_SetText(hItem,tmp);
	memset(tmp,0,sizeof tmp);
	hItem = WM_GetDialogItem(hMainWin,ID_BUTTON_3);
	sprintf(tmp,"%5.0fRH%%",aht10_GetHumidity());
	BUTTON_SetText(hItem,tmp);
	memset(tmp,0,sizeof tmp);
	hItem = WM_GetDialogItem(hMainWin,ID_BUTTON_4);
	sprintf(tmp,"%5.0fLux",bh1730_GetLux());
	BUTTON_SetText(hItem,tmp);
	memset(tmp,0,sizeof tmp);
	
	
}
// USER END

/*************************** End of file ****************************/
