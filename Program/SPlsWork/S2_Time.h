#ifndef __S2_TIME_H__
#define __S2_TIME_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_Time_IN_CONNECT_FB_DIG_INPUT 0
#define __S2_Time_IN_REFRESH_DIG_INPUT 1


/*
* ANALOG_INPUT
*/
#define __S2_Time_IN_STATUS_ANALOG_INPUT 0

#define __S2_Time_IN_RX$_STRING_INPUT 1
#define __S2_Time_IN_RX$_STRING_MAX_LEN 255
CREATE_STRING_STRUCT( S2_Time, __IN_RX$, __S2_Time_IN_RX$_STRING_MAX_LEN );



/*
* DIGITAL_OUTPUT
*/
#define __S2_Time_OUT_TIME_PM_DIG_OUTPUT 0
#define __S2_Time_OUT_CONNECT_DIG_OUTPUT 1


/*
* ANALOG_OUTPUT
*/
#define __S2_Time_OUT_24_HOUR_TIME_ANALOG_OUTPUT 0
#define __S2_Time_OUT_12_HOUR_TIME_ANALOG_OUTPUT 1
#define __S2_Time_OUT_HOUR_HAND_ANALOG_OUTPUT 2
#define __S2_Time_OUT_MINUTE_HAND_ANALOG_OUTPUT 3

#define __S2_Time_OUT_TOD$_STRING_OUTPUT 4
#define __S2_Time_OUT_DATE_STRING_OUTPUT 5
#define __S2_Time_OUT_TX$_STRING_OUTPUT 6


/*
* Direct Socket Variables
*/




/*
* INTEGER_PARAMETER
*/
#define __S2_Time_PARAM_DAYLIGHT_SAVING_INTEGER_PARAMETER 10
#define __S2_Time_PARAM_DATE_FORMAT_INTEGER_PARAMETER 11
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

START_GLOBAL_VAR_STRUCT( S2_Time )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   unsigned short __WAITDAYTIME;
   DECLARE_STRING_STRUCT( S2_Time, __IN_RX$ );
};

START_NVRAM_VAR_STRUCT( S2_Time )
{
};

DEFINE_WAITEVENT( S2_Time, DAYTIME );


#endif //__S2_TIME_H__

