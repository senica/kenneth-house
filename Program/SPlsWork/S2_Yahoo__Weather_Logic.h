#ifndef __S2_YAHOO__WEATHER_LOGIC_H__
#define __S2_YAHOO__WEATHER_LOGIC_H__


#include "S2_lib_xml.h"


/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_Yahoo__Weather_Logic_IN_TCP_CONNECTED_DIG_INPUT 0
#define __S2_Yahoo__Weather_Logic_IN_UPDATE_DIG_INPUT 1
#define __S2_Yahoo__Weather_Logic_IN_TEMPERATURE_SENSOR_ENABLE_DIG_INPUT 2
#define __S2_Yahoo__Weather_Logic_IN_ENTER_DIG_INPUT 3
#define __S2_Yahoo__Weather_Logic_IN_CLEAR_DIG_INPUT 4
#define __S2_Yahoo__Weather_Logic_IN_BACKSPACE_DIG_INPUT 5

#define __S2_Yahoo__Weather_Logic_IN_NUMPAD_DIG_INPUT 6
#define __S2_Yahoo__Weather_Logic_IN_NUMPAD_ARRAY_LENGTH 10
#define __S2_Yahoo__Weather_Logic_IN_PRESET_DIG_INPUT 16
#define __S2_Yahoo__Weather_Logic_IN_PRESET_ARRAY_LENGTH 12

/*
* ANALOG_INPUT
*/
#define __S2_Yahoo__Weather_Logic_IN_TCP_STATUS_ANALOG_INPUT 0
#define __S2_Yahoo__Weather_Logic_IN_TIME_ANALOG_INPUT 2
#define __S2_Yahoo__Weather_Logic_IN_TEMPERATURE_SENSOR_ANALOG_INPUT 3


#define __S2_Yahoo__Weather_Logic_IN_TCP_RX$_BUFFER_INPUT 1
#define __S2_Yahoo__Weather_Logic_IN_TCP_RX$_BUFFER_MAX_LEN 6143
CREATE_STRING_STRUCT( S2_Yahoo__Weather_Logic, __IN_TCP_RX$, __S2_Yahoo__Weather_Logic_IN_TCP_RX$_BUFFER_MAX_LEN );


/*
* DIGITAL_OUTPUT
*/
#define __S2_Yahoo__Weather_Logic_OUT_TCP_CONNECT_DIG_OUTPUT 0
#define __S2_Yahoo__Weather_Logic_OUT_LAT_IS_NORTH_DIG_OUTPUT 1
#define __S2_Yahoo__Weather_Logic_OUT_LONG_IS_EAST_DIG_OUTPUT 2
#define __S2_Yahoo__Weather_Logic_OUT_NUMPAD_OPEN_DIG_OUTPUT 3


/*
* ANALOG_OUTPUT
*/
#define __S2_Yahoo__Weather_Logic_OUT_LAT_DEGREES_ANALOG_OUTPUT 1
#define __S2_Yahoo__Weather_Logic_OUT_LAT_MINUTES_ANALOG_OUTPUT 2
#define __S2_Yahoo__Weather_Logic_OUT_LONG_DEGREES_ANALOG_OUTPUT 3
#define __S2_Yahoo__Weather_Logic_OUT_LONG_MINUTES_ANALOG_OUTPUT 4

#define __S2_Yahoo__Weather_Logic_OUT_TCP_TX$_STRING_OUTPUT 0
#define __S2_Yahoo__Weather_Logic_OUT_NUMPAD_STRING_OUTPUT 5

#define __S2_Yahoo__Weather_Logic_OUT_CURRENT_TEMP_ANALOG_OUTPUT 30
#define __S2_Yahoo__Weather_Logic_OUT_CURRENT_TEMP_ARRAY_LENGTH 2
#define __S2_Yahoo__Weather_Logic_OUT_CURRENT_IMAGE_ANALOG_OUTPUT 32
#define __S2_Yahoo__Weather_Logic_OUT_CURRENT_IMAGE_ARRAY_LENGTH 2
#define __S2_Yahoo__Weather_Logic_OUT_TODAY_HIGH_ANALOG_OUTPUT 38
#define __S2_Yahoo__Weather_Logic_OUT_TODAY_HIGH_ARRAY_LENGTH 2
#define __S2_Yahoo__Weather_Logic_OUT_TODAY_LOW_ANALOG_OUTPUT 40
#define __S2_Yahoo__Weather_Logic_OUT_TODAY_LOW_ARRAY_LENGTH 2
#define __S2_Yahoo__Weather_Logic_OUT_TODAY_IMAGE_ANALOG_OUTPUT 42
#define __S2_Yahoo__Weather_Logic_OUT_TODAY_IMAGE_ARRAY_LENGTH 2
#define __S2_Yahoo__Weather_Logic_OUT_TOMORROW_HIGH_ANALOG_OUTPUT 50
#define __S2_Yahoo__Weather_Logic_OUT_TOMORROW_HIGH_ARRAY_LENGTH 2
#define __S2_Yahoo__Weather_Logic_OUT_TOMORROW_LOW_ANALOG_OUTPUT 52
#define __S2_Yahoo__Weather_Logic_OUT_TOMORROW_LOW_ARRAY_LENGTH 2
#define __S2_Yahoo__Weather_Logic_OUT_TOMORROW_IMAGE_ANALOG_OUTPUT 54
#define __S2_Yahoo__Weather_Logic_OUT_TOMORROW_IMAGE_ARRAY_LENGTH 2
#define __S2_Yahoo__Weather_Logic_OUT_WIND_CHILL_ANALOG_OUTPUT 62
#define __S2_Yahoo__Weather_Logic_OUT_WIND_CHILL_ARRAY_LENGTH 2
#define __S2_Yahoo__Weather_Logic_OUT_WIND_SPEED_ANALOG_OUTPUT 64
#define __S2_Yahoo__Weather_Logic_OUT_WIND_SPEED_ARRAY_LENGTH 2
#define __S2_Yahoo__Weather_Logic_OUT_WIND_DIRECTION_ANALOG_OUTPUT 66
#define __S2_Yahoo__Weather_Logic_OUT_WIND_DIRECTION_ARRAY_LENGTH 2
#define __S2_Yahoo__Weather_Logic_OUT_HUMIDITY_ANALOG_OUTPUT 76
#define __S2_Yahoo__Weather_Logic_OUT_HUMIDITY_ARRAY_LENGTH 2
#define __S2_Yahoo__Weather_Logic_OUT_PRESSURE_ANALOG_OUTPUT 78
#define __S2_Yahoo__Weather_Logic_OUT_PRESSURE_ARRAY_LENGTH 2
#define __S2_Yahoo__Weather_Logic_OUT_SUNRISE_ANALOG_OUTPUT 88
#define __S2_Yahoo__Weather_Logic_OUT_SUNRISE_ARRAY_LENGTH 2
#define __S2_Yahoo__Weather_Logic_OUT_SUNSET_ANALOG_OUTPUT 90
#define __S2_Yahoo__Weather_Logic_OUT_SUNSET_ARRAY_LENGTH 2
#define __S2_Yahoo__Weather_Logic_OUT_PRESET_ZIP_CODE_STRING_OUTPUT 6
#define __S2_Yahoo__Weather_Logic_OUT_PRESET_ZIP_CODE_ARRAY_LENGTH 12
#define __S2_Yahoo__Weather_Logic_OUT_PRESET_LOCATION_STRING_OUTPUT 18
#define __S2_Yahoo__Weather_Logic_OUT_PRESET_LOCATION_ARRAY_LENGTH 12
#define __S2_Yahoo__Weather_Logic_OUT_CURRENT_TEMP_TEXT_STRING_OUTPUT 34
#define __S2_Yahoo__Weather_Logic_OUT_CURRENT_TEMP_TEXT_ARRAY_LENGTH 2
#define __S2_Yahoo__Weather_Logic_OUT_CURRENT_CONDITIONS_STRING_OUTPUT 36
#define __S2_Yahoo__Weather_Logic_OUT_CURRENT_CONDITIONS_ARRAY_LENGTH 2
#define __S2_Yahoo__Weather_Logic_OUT_TODAY_HIGH_TEXT_STRING_OUTPUT 44
#define __S2_Yahoo__Weather_Logic_OUT_TODAY_HIGH_TEXT_ARRAY_LENGTH 2
#define __S2_Yahoo__Weather_Logic_OUT_TODAY_LOW_TEXT_STRING_OUTPUT 46
#define __S2_Yahoo__Weather_Logic_OUT_TODAY_LOW_TEXT_ARRAY_LENGTH 2
#define __S2_Yahoo__Weather_Logic_OUT_TODAY_FORECAST_STRING_OUTPUT 48
#define __S2_Yahoo__Weather_Logic_OUT_TODAY_FORECAST_ARRAY_LENGTH 2
#define __S2_Yahoo__Weather_Logic_OUT_TOMORROW_HIGH_TEXT_STRING_OUTPUT 56
#define __S2_Yahoo__Weather_Logic_OUT_TOMORROW_HIGH_TEXT_ARRAY_LENGTH 2
#define __S2_Yahoo__Weather_Logic_OUT_TOMORROW_LOW_TEXT_STRING_OUTPUT 58
#define __S2_Yahoo__Weather_Logic_OUT_TOMORROW_LOW_TEXT_ARRAY_LENGTH 2
#define __S2_Yahoo__Weather_Logic_OUT_TOMORROW_FORECAST_STRING_OUTPUT 60
#define __S2_Yahoo__Weather_Logic_OUT_TOMORROW_FORECAST_ARRAY_LENGTH 2
#define __S2_Yahoo__Weather_Logic_OUT_WIND_CHILL_TEXT_STRING_OUTPUT 68
#define __S2_Yahoo__Weather_Logic_OUT_WIND_CHILL_TEXT_ARRAY_LENGTH 2
#define __S2_Yahoo__Weather_Logic_OUT_WIND_SPEED_TEXT_STRING_OUTPUT 70
#define __S2_Yahoo__Weather_Logic_OUT_WIND_SPEED_TEXT_ARRAY_LENGTH 2
#define __S2_Yahoo__Weather_Logic_OUT_WIND_DIRECTION_TEXT_STRING_OUTPUT 72
#define __S2_Yahoo__Weather_Logic_OUT_WIND_DIRECTION_TEXT_ARRAY_LENGTH 2
#define __S2_Yahoo__Weather_Logic_OUT_WIND_FULL_DESCRIPTION_STRING_OUTPUT 74
#define __S2_Yahoo__Weather_Logic_OUT_WIND_FULL_DESCRIPTION_ARRAY_LENGTH 2
#define __S2_Yahoo__Weather_Logic_OUT_HUMIDITY_TEXT_STRING_OUTPUT 80
#define __S2_Yahoo__Weather_Logic_OUT_HUMIDITY_TEXT_ARRAY_LENGTH 2
#define __S2_Yahoo__Weather_Logic_OUT_PRESSURE_TEXT_STRING_OUTPUT 82
#define __S2_Yahoo__Weather_Logic_OUT_PRESSURE_TEXT_ARRAY_LENGTH 2
#define __S2_Yahoo__Weather_Logic_OUT_SUNRISE_TEXT_STRING_OUTPUT 84
#define __S2_Yahoo__Weather_Logic_OUT_SUNRISE_TEXT_ARRAY_LENGTH 2
#define __S2_Yahoo__Weather_Logic_OUT_SUNSET_TEXT_STRING_OUTPUT 86
#define __S2_Yahoo__Weather_Logic_OUT_SUNSET_TEXT_ARRAY_LENGTH 2
#define __S2_Yahoo__Weather_Logic_OUT_CITY_STRING_OUTPUT 92
#define __S2_Yahoo__Weather_Logic_OUT_CITY_ARRAY_LENGTH 2
#define __S2_Yahoo__Weather_Logic_OUT_STATE_STRING_OUTPUT 94
#define __S2_Yahoo__Weather_Logic_OUT_STATE_ARRAY_LENGTH 2
#define __S2_Yahoo__Weather_Logic_OUT_COUNTRY_STRING_OUTPUT 96
#define __S2_Yahoo__Weather_Logic_OUT_COUNTRY_ARRAY_LENGTH 2
#define __S2_Yahoo__Weather_Logic_OUT_LOCATION_STRING_OUTPUT 98
#define __S2_Yahoo__Weather_Logic_OUT_LOCATION_ARRAY_LENGTH 2
#define __S2_Yahoo__Weather_Logic_OUT_LAST_BUILD_STRING_OUTPUT 100
#define __S2_Yahoo__Weather_Logic_OUT_LAST_BUILD_ARRAY_LENGTH 2

/*
* Direct Socket Variables
*/




/*
* INTEGER_PARAMETER
*/
#define __S2_Yahoo__Weather_Logic_PARAM_HOLD_TIME_INTEGER_PARAMETER 12
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
#define __S2_Yahoo__Weather_Logic_PARAM_LOCAL_ZIP_CODE_STRING_PARAMETER 10
#define __S2_Yahoo__Weather_Logic_PARAM_UNITS_STRING_PARAMETER 11
#define __S2_Yahoo__Weather_Logic_PARAM_LOCAL_ZIP_CODE_PARAM_MAX_LEN 5
CREATE_STRING_STRUCT( S2_Yahoo__Weather_Logic, __PARAM_LOCAL_ZIP_CODE, __S2_Yahoo__Weather_Logic_PARAM_LOCAL_ZIP_CODE_PARAM_MAX_LEN );
#define __S2_Yahoo__Weather_Logic_PARAM_UNITS_PARAM_MAX_LEN 1
CREATE_STRING_STRUCT( S2_Yahoo__Weather_Logic, __PARAM_UNITS, __S2_Yahoo__Weather_Logic_PARAM_UNITS_PARAM_MAX_LEN );


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
#define __S2_Yahoo__Weather_Logic_DYNAMICZIPCODE_STRING_MAX_LEN 5
CREATE_STRING_STRUCT( S2_Yahoo__Weather_Logic, __DYNAMICZIPCODE, __S2_Yahoo__Weather_Logic_DYNAMICZIPCODE_STRING_MAX_LEN );
#define __S2_Yahoo__Weather_Logic_LASTMODIFIED_STRING_MAX_LEN 32
CREATE_STRING_STRUCT( S2_Yahoo__Weather_Logic, __LASTMODIFIED, __S2_Yahoo__Weather_Logic_LASTMODIFIED_STRING_MAX_LEN );
#define __S2_Yahoo__Weather_Logic_NUMPAD_STRING_MAX_LEN 5
CREATE_STRING_STRUCT( S2_Yahoo__Weather_Logic, __NUMPAD, __S2_Yahoo__Weather_Logic_NUMPAD_STRING_MAX_LEN );
#define __S2_Yahoo__Weather_Logic_LOCATIONS_ARRAY_NUM_ELEMS 2
#define __S2_Yahoo__Weather_Logic_LOCATIONS_ARRAY_NUM_CHARS 26
CREATE_STRING_ARRAY( S2_Yahoo__Weather_Logic, __LOCATIONS, __S2_Yahoo__Weather_Logic_LOCATIONS_ARRAY_NUM_ELEMS, __S2_Yahoo__Weather_Logic_LOCATIONS_ARRAY_NUM_CHARS );
#define __S2_Yahoo__Weather_Logic_PRESETZIPCODES_ARRAY_NUM_ELEMS 12
#define __S2_Yahoo__Weather_Logic_PRESETZIPCODES_ARRAY_NUM_CHARS 5
CREATE_STRING_ARRAY( S2_Yahoo__Weather_Logic, __PRESETZIPCODES, __S2_Yahoo__Weather_Logic_PRESETZIPCODES_ARRAY_NUM_ELEMS, __S2_Yahoo__Weather_Logic_PRESETZIPCODES_ARRAY_NUM_CHARS );
#define __S2_Yahoo__Weather_Logic_PRESETLOCATIONS_ARRAY_NUM_ELEMS 12
#define __S2_Yahoo__Weather_Logic_PRESETLOCATIONS_ARRAY_NUM_CHARS 26
CREATE_STRING_ARRAY( S2_Yahoo__Weather_Logic, __PRESETLOCATIONS, __S2_Yahoo__Weather_Logic_PRESETLOCATIONS_ARRAY_NUM_ELEMS, __S2_Yahoo__Weather_Logic_PRESETLOCATIONS_ARRAY_NUM_CHARS );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_Yahoo__Weather_Logic )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __IN_NUMPAD );
   DECLARE_IO_ARRAY( __IN_PRESET );
   DECLARE_IO_ARRAY( __OUT_CURRENT_TEMP );
   DECLARE_IO_ARRAY( __OUT_CURRENT_IMAGE );
   DECLARE_IO_ARRAY( __OUT_TODAY_HIGH );
   DECLARE_IO_ARRAY( __OUT_TODAY_LOW );
   DECLARE_IO_ARRAY( __OUT_TODAY_IMAGE );
   DECLARE_IO_ARRAY( __OUT_TOMORROW_HIGH );
   DECLARE_IO_ARRAY( __OUT_TOMORROW_LOW );
   DECLARE_IO_ARRAY( __OUT_TOMORROW_IMAGE );
   DECLARE_IO_ARRAY( __OUT_WIND_CHILL );
   DECLARE_IO_ARRAY( __OUT_WIND_SPEED );
   DECLARE_IO_ARRAY( __OUT_WIND_DIRECTION );
   DECLARE_IO_ARRAY( __OUT_HUMIDITY );
   DECLARE_IO_ARRAY( __OUT_PRESSURE );
   DECLARE_IO_ARRAY( __OUT_SUNRISE );
   DECLARE_IO_ARRAY( __OUT_SUNSET );
   DECLARE_IO_ARRAY( __OUT_PRESET_ZIP_CODE );
   DECLARE_IO_ARRAY( __OUT_PRESET_LOCATION );
   DECLARE_IO_ARRAY( __OUT_CURRENT_TEMP_TEXT );
   DECLARE_IO_ARRAY( __OUT_CURRENT_CONDITIONS );
   DECLARE_IO_ARRAY( __OUT_TODAY_HIGH_TEXT );
   DECLARE_IO_ARRAY( __OUT_TODAY_LOW_TEXT );
   DECLARE_IO_ARRAY( __OUT_TODAY_FORECAST );
   DECLARE_IO_ARRAY( __OUT_TOMORROW_HIGH_TEXT );
   DECLARE_IO_ARRAY( __OUT_TOMORROW_LOW_TEXT );
   DECLARE_IO_ARRAY( __OUT_TOMORROW_FORECAST );
   DECLARE_IO_ARRAY( __OUT_WIND_CHILL_TEXT );
   DECLARE_IO_ARRAY( __OUT_WIND_SPEED_TEXT );
   DECLARE_IO_ARRAY( __OUT_WIND_DIRECTION_TEXT );
   DECLARE_IO_ARRAY( __OUT_WIND_FULL_DESCRIPTION );
   DECLARE_IO_ARRAY( __OUT_HUMIDITY_TEXT );
   DECLARE_IO_ARRAY( __OUT_PRESSURE_TEXT );
   DECLARE_IO_ARRAY( __OUT_SUNRISE_TEXT );
   DECLARE_IO_ARRAY( __OUT_SUNSET_TEXT );
   DECLARE_IO_ARRAY( __OUT_CITY );
   DECLARE_IO_ARRAY( __OUT_STATE );
   DECLARE_IO_ARRAY( __OUT_COUNTRY );
   DECLARE_IO_ARRAY( __OUT_LOCATION );
   DECLARE_IO_ARRAY( __OUT_LAST_BUILD );
   unsigned short __ACTIVEZIPCODE;
   unsigned short __CONNECTWAITACTIVE;
   unsigned short __PRESETWAITACTIVE;
   unsigned short __PRESETINDEX;
   DECLARE_STRING_STRUCT( S2_Yahoo__Weather_Logic, __DYNAMICZIPCODE );
   DECLARE_STRING_STRUCT( S2_Yahoo__Weather_Logic, __LASTMODIFIED );
   DECLARE_STRING_STRUCT( S2_Yahoo__Weather_Logic, __NUMPAD );
   DECLARE_STRING_ARRAY( S2_Yahoo__Weather_Logic, __LOCATIONS );
   DECLARE_STRING_STRUCT( S2_Yahoo__Weather_Logic, __IN_TCP_RX$ );
   DECLARE_STRING_STRUCT( S2_Yahoo__Weather_Logic, __PARAM_LOCAL_ZIP_CODE );
   DECLARE_STRING_STRUCT( S2_Yahoo__Weather_Logic, __PARAM_UNITS );
};

START_NVRAM_VAR_STRUCT( S2_Yahoo__Weather_Logic )
{
   DECLARE_STRING_ARRAY( S2_Yahoo__Weather_Logic, __PRESETZIPCODES );
   DECLARE_STRING_ARRAY( S2_Yahoo__Weather_Logic, __PRESETLOCATIONS );
};

DEFINE_WAITEVENT( S2_Yahoo__Weather_Logic, CONNECT_WAIT );
DEFINE_WAITEVENT( S2_Yahoo__Weather_Logic, PRESET_WAIT );


#endif //__S2_YAHOO__WEATHER_LOGIC_H__
