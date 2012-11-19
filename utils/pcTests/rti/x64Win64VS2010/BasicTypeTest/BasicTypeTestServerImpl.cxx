/** 
 * Generated by RPCDDS                                              *
 * Empty interface implementation to be filled with your own code.  *
 */
 
#include "BasicTypeTestServerImpl.h"
 
DDS_Octet BasicTypeTestServerImpl::getOctet(/*in*/ DDS_Octet oc1, /*inout*/ DDS_Octet& oc2, /*out*/ DDS_Octet& oc3) 
{
    DDS_Octet returnedValue;
        
    oc3 = oc2;
    returnedValue = oc1;
    oc2 = oc1 + oc2;
   
    return returnedValue;
} 
 
DDS_Char BasicTypeTestServerImpl::getChar(/*in*/ DDS_Char ch1, /*inout*/ DDS_Char& ch2, /*out*/ DDS_Char& ch3) 
{
    DDS_Char returnedValue;
        
    ch3 = ch2;
    returnedValue = ch1;
    ch2 = ch1 + ch2;
   
    return returnedValue;
} 
 
DDS_Wchar BasicTypeTestServerImpl::getWChar(/*in*/ DDS_Wchar wch1, /*inout*/ DDS_Wchar& wch2, /*out*/ DDS_Wchar& wch3) 
{
    DDS_Wchar returnedValue;
        
    wch3 = wch2;
    returnedValue = wch1;
    wch2 = wch1 + wch2;
   
    return returnedValue;
} 
 
DDS_Short BasicTypeTestServerImpl::getShort(/*in*/ DDS_Short sh1, /*inout*/ DDS_Short& sh2, /*out*/ DDS_Short& sh3) 
{
    DDS_Short returnedValue;
        
    sh3 = sh2;
    returnedValue = sh1;
    sh2 = sh1 + sh2;
   
    return returnedValue;
} 
 
DDS_UnsignedShort BasicTypeTestServerImpl::getUShort(/*in*/ DDS_UnsignedShort ush1, /*inout*/ DDS_UnsignedShort& ush2, /*out*/ DDS_UnsignedShort& ush3) 
{
    DDS_UnsignedShort returnedValue;
        
    ush3 = ush2;
    returnedValue = ush1;
    ush2 = ush1 + ush2;
   
    return returnedValue;
} 
 
DDS_Long BasicTypeTestServerImpl::getLong(/*in*/ DDS_Long lo1, /*inout*/ DDS_Long& lo2, /*out*/ DDS_Long& lo3) 
{
    DDS_Long returnedValue;
        
    lo3 = lo2;
    returnedValue = lo1;
    lo2 = lo1 + lo2;
   
    return returnedValue;
} 
 
DDS_UnsignedLong BasicTypeTestServerImpl::getULong(/*in*/ DDS_UnsignedLong ulo1, /*inout*/ DDS_UnsignedLong& ulo2, /*out*/ DDS_UnsignedLong& ulo3) 
{
    DDS_UnsignedLong returnedValue;
        
    ulo3 = ulo2;
    returnedValue = ulo1;
    ulo2 = ulo1 + ulo2;
   
    return returnedValue;
} 
 
DDS_LongLong BasicTypeTestServerImpl::getLLong(/*in*/ DDS_LongLong llo1, /*inout*/ DDS_LongLong& llo2, /*out*/ DDS_LongLong& llo3) 
{
    DDS_LongLong returnedValue;
        
    llo3 = llo2;
    returnedValue = llo1;
    llo2 = llo1 + llo2;
   
    return returnedValue;
} 
 
DDS_UnsignedLongLong BasicTypeTestServerImpl::getULLong(/*in*/ DDS_UnsignedLongLong ullo1, /*inout*/ DDS_UnsignedLongLong& ullo2, /*out*/ DDS_UnsignedLongLong& ullo3) 
{
    DDS_UnsignedLongLong returnedValue;
        
    ullo3 = ullo2;
    returnedValue = ullo1;
    ullo2 = ullo1 + ullo2;
   
    return returnedValue;
} 
 
DDS_Float BasicTypeTestServerImpl::getFloat(/*in*/ DDS_Float fl1, /*inout*/ DDS_Float& fl2, /*out*/ DDS_Float& fl3) 
{
    DDS_Float returnedValue;
        
    fl3 = fl2;
    returnedValue = fl1;
    fl2 = fl1 + fl2;
   
    return returnedValue;
} 
 
DDS_Double BasicTypeTestServerImpl::getDouble(/*in*/ DDS_Double do1, /*inout*/ DDS_Double& do2, /*out*/ DDS_Double& do3) 
{
    DDS_Double returnedValue;
        
    do3 = do2;
    returnedValue = do1;
    do2 = do1 + do2;
   
    return returnedValue;
} 
 
DDS_Boolean BasicTypeTestServerImpl::getBoolean(/*in*/ DDS_Boolean bo1, /*inout*/ DDS_Boolean& bo2, /*out*/ DDS_Boolean& bo3) 
{
    DDS_Boolean returnedValue;
        
    bo3 = bo2;
    returnedValue = bo1;
    bo2 = bo1 | bo2;
   
    return returnedValue;
} 
