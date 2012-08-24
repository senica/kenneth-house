#ifndef __S2_MENU_CONTROLLER_H__
#define __S2_MENU_CONTROLLER_H__


#include "S2_lib_xml.h"


/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_Menu_Controller_IS_CONNECTED_DIG_INPUT 0
#define __S2_Menu_Controller_PAGE_UP_DIG_INPUT 1
#define __S2_Menu_Controller_PAGE_DOWN_DIG_INPUT 2

#define __S2_Menu_Controller_SELECT_ITEM_DIG_INPUT 3
#define __S2_Menu_Controller_SELECT_ITEM_ARRAY_LENGTH 48

/*
* ANALOG_INPUT
*/
#define __S2_Menu_Controller_CONTENT_ANALOG_INPUT 0



#define __S2_Menu_Controller_HIGHLIGHT_ROUTE_ANALOG_INPUT 1
#define __S2_Menu_Controller_HIGHLIGHT_ROUTE_ARRAY_LENGTH 15
#define __S2_Menu_Controller_ITEM_ROUTE_A_ANALOG_INPUT 16
#define __S2_Menu_Controller_ITEM_ROUTE_A_ARRAY_LENGTH 48
#define __S2_Menu_Controller_ITEM_ROUTE_B_ANALOG_INPUT 64
#define __S2_Menu_Controller_ITEM_ROUTE_B_ARRAY_LENGTH 48

/*
* DIGITAL_OUTPUT
*/
#define __S2_Menu_Controller_PAGE_UP_VISIBLE_DIG_OUTPUT 0
#define __S2_Menu_Controller_PAGE_DOWN_VISIBLE_DIG_OUTPUT 1

#define __S2_Menu_Controller_FOCUSED_PAGE_DIG_OUTPUT 2
#define __S2_Menu_Controller_FOCUSED_PAGE_ARRAY_LENGTH 16
#define __S2_Menu_Controller_HIGHLIGHTED_ITEM_DIG_OUTPUT 18
#define __S2_Menu_Controller_HIGHLIGHTED_ITEM_ARRAY_LENGTH 48

/*
* ANALOG_OUTPUT
*/
#define __S2_Menu_Controller_PAGES_COUNT_ANALOG_OUTPUT 0
#define __S2_Menu_Controller_ITEMS_COUNT_ANALOG_OUTPUT 1

#define __S2_Menu_Controller_CAPTION_STRING_OUTPUT 2

#define __S2_Menu_Controller_SET_ROUTE_STRING_OUTPUT 3
#define __S2_Menu_Controller_SET_ROUTE_ARRAY_LENGTH 15

/*
* Direct Socket Variables
*/




/*
* INTEGER_PARAMETER
*/
#define __S2_Menu_Controller_ITEMS_PER_PAGE_INTEGER_PARAMETER 10
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* INTEGER_PARAMETER
*/
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* STRING_PARAMETER
*/


/*
* INTEGER
*/


/*
* LONG_INTEGER
*/


/*
* SIGNED_INTEGER
*/


/*
* SIGNED_LONG_INTEGER
*/


/*
* STRING
*/

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_Menu_Controller )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __SELECT_ITEM );
   DECLARE_IO_ARRAY( __FOCUSED_PAGE );
   DECLARE_IO_ARRAY( __HIGHLIGHTED_ITEM );
   DECLARE_IO_ARRAY( __HIGHLIGHT_ROUTE );
   DECLARE_IO_ARRAY( __ITEM_ROUTE_A );
   DECLARE_IO_ARRAY( __ITEM_ROUTE_B );
   DECLARE_IO_ARRAY( __SET_ROUTE );
   unsigned short __FOCUSEDPAGE;
   unsigned short __HIGHLIGHTEDITEM;
};

START_NVRAM_VAR_STRUCT( S2_Menu_Controller )
{
};



#endif //__S2_MENU_CONTROLLER_H__

