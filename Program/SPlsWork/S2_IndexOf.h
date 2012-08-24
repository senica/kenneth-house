#ifndef __S2_INDEXOF_H__
#define __S2_INDEXOF_H__


#include "S2_lib_xml.h"


/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/


/*
* ANALOG_INPUT
*/

#define __S2_IndexOf_SEARCH$_STRING_INPUT 0
#define __S2_IndexOf_SEARCH$_STRING_MAX_LEN 16
CREATE_STRING_STRUCT( S2_IndexOf, __SEARCH$, __S2_IndexOf_SEARCH$_STRING_MAX_LEN );



/*
* DIGITAL_OUTPUT
*/
#define __S2_IndexOf_FOUND_FIRST_DIG_OUTPUT 0
#define __S2_IndexOf_FOUND_OTHER_DIG_OUTPUT 1


/*
* ANALOG_OUTPUT
*/
#define __S2_IndexOf_INDEX_ANALOG_OUTPUT 0

#define __S2_IndexOf_INDEX$_STRING_OUTPUT 1


/*
* Direct Socket Variables
*/




/*
* INTEGER_PARAMETER
*/
#define __S2_IndexOf_SEARCH_TYPE_INTEGER_PARAMETER 10
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
#define __S2_IndexOf_ELEMENTS_STRING_PARAMETER 11
#define __S2_IndexOf_ELEMENTS_ARRAY_NUM_ELEMS 73
#define __S2_IndexOf_ELEMENTS_ARRAY_NUM_CHARS 16
CREATE_STRING_ARRAY( S2_IndexOf, __ELEMENTS, __S2_IndexOf_ELEMENTS_ARRAY_NUM_ELEMS, __S2_IndexOf_ELEMENTS_ARRAY_NUM_CHARS );


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
#define __S2_IndexOf___SEARCHSTRING___STRING_MAX_LEN 16
CREATE_STRING_STRUCT( S2_IndexOf, ____SEARCHSTRING__, __S2_IndexOf___SEARCHSTRING___STRING_MAX_LEN );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_IndexOf )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   unsigned short ____INITIALIZED__;
   unsigned short ____ELEMENTSSIZE__;
   DECLARE_STRING_STRUCT( S2_IndexOf, ____SEARCHSTRING__ );
   DECLARE_STRING_STRUCT( S2_IndexOf, __SEARCH$ );
   DECLARE_STRING_ARRAY( S2_IndexOf, __ELEMENTS );
};

START_NVRAM_VAR_STRUCT( S2_IndexOf )
{
};



#endif //__S2_INDEXOF_H__

