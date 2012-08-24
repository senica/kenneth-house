#ifndef __S2_LIB_XML_H__
#define __S2_LIB_XML_H__


#include "S2_lib_xml.h"



/*
* DIGITAL_INPUT
*/


/*
* ANALOG_INPUT
*/




/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/



/*
* Direct Socket Variables
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

START_GLOBAL_VAR_STRUCT( S2_lib_xml )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

};

START_NVRAM_VAR_STRUCT( S2_lib_xml )
{
};


unsigned short S2_lib_xml__XMLROOTENDTAGFOUND ( struct StringHdr_s* __XML_FEED ) ;
void S2_lib_xml__XMLFINDELEMENT ( struct StringArrayHdr_s* __ELEMENT_NAMES , unsigned short *__BREADTH , struct StringHdr_s* __XML_FEED , unsigned short *__START_POS , unsigned short *__END_POS ) ;
struct StringHdr_s* S2_lib_xml__XMLGETATTRIBUTEDATA ( struct StringHdr_s*  __FN_DSTRET_STR__  , struct StringHdr_s* __ATTRIBUTE_NAME , struct StringHdr_s* __ATTRIBUTES ) ;
void S2_lib_xml__XMLGETELEMENTDATA ( struct StringArrayHdr_s* __ELEMENT_NAMES , unsigned short __BREADTH , struct StringHdr_s* __XML_FEED , struct StringHdr_s* __CONTENT , struct StringHdr_s* __ATTRIBUTES ) ;

#endif //__S2_YAHOO__WEATHER_LOGIC_H__

