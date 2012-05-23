/** 
 * Generated by DDSCS                                               *
 * Empty interface implementation to be filled with your own code.  *
 */
 
#include "BasicTypeTestServerImpl.h"

BasicTypeTestImpl::BasicTypeTestImpl()
{
}
BasicTypeTestImpl::~BasicTypeTestImpl()
{
}

 
DDSCSMessages
 BasicTypeTestImpl::getOctet(DDS_Octet oc1 ,DDS_Octet &oc2,DDS_Octet &oc3, DDS_Octet &getOctet_ret) 
{
  DDSCSMessages retCode = OPERATION_SUCCESSFUL;

  oc3 = oc2;
  getOctet_ret = oc1;
  oc2 = oc1 + oc2;
  
  return retCode;
} 
 
DDSCSMessages
 BasicTypeTestImpl::getChar(DDS_Char ch1 ,DDS_Char &ch2,DDS_Char &ch3, DDS_Char &getChar_ret) 
{
  DDSCSMessages retCode = OPERATION_SUCCESSFUL;

  ch3 = ch2;
  getChar_ret = ch1;
  ch2 = ch1 + ch2;
  
  return retCode;
} 
 
DDSCSMessages
 BasicTypeTestImpl::getWChar(DDS_Wchar wch1 ,DDS_Wchar &wch2,DDS_Wchar &wch3, DDS_Wchar &getWChar_ret) 
{
  DDSCSMessages retCode = OPERATION_SUCCESSFUL;

  wch3 = wch2;
  getWChar_ret = wch1;
  wch2 = wch1 + wch2;
  
  return retCode;
} 
 
DDSCSMessages
 BasicTypeTestImpl::getShort(DDS_Short sh1 ,DDS_Short &sh2,DDS_Short &sh3, DDS_Short &getShort_ret) 
{
  DDSCSMessages retCode = OPERATION_SUCCESSFUL;

  sh3 = sh2;
  getShort_ret = sh1;
  sh2 = sh1 + sh2;
  
  return retCode;
} 
 
DDSCSMessages
 BasicTypeTestImpl::getUShort(DDS_UnsignedShort ush1 ,DDS_UnsignedShort &ush2,DDS_UnsignedShort &ush3, DDS_UnsignedShort &getUShort_ret) 
{
  DDSCSMessages retCode = OPERATION_SUCCESSFUL;

  ush3 = ush2;
  getUShort_ret = ush1;
  ush2 = ush1 + ush2;
  
  return retCode;
} 
 
DDSCSMessages
 BasicTypeTestImpl::getLong(DDS_Long lo1 ,DDS_Long &lo2,DDS_Long &lo3, DDS_Long &getLong_ret) 
{
  DDSCSMessages retCode = OPERATION_SUCCESSFUL;

  lo3 = lo2;
  getLong_ret = lo1;
  lo2 = lo1 + lo2;
  
  return retCode;
} 
 
DDSCSMessages
 BasicTypeTestImpl::getULong(DDS_UnsignedLong ulo1 ,DDS_UnsignedLong &ulo2,DDS_UnsignedLong &ulo3, DDS_UnsignedLong &getULong_ret) 
{
  DDSCSMessages retCode = OPERATION_SUCCESSFUL;

  ulo3 = ulo2;
  getULong_ret = ulo1;
  ulo2 = ulo1 + ulo2;
  
  return retCode;
} 
 
DDSCSMessages
 BasicTypeTestImpl::getLLong(DDS_LongLong llo1 ,DDS_LongLong &llo2,DDS_LongLong &llo3, DDS_LongLong &getLLong_ret) 
{
  DDSCSMessages retCode = OPERATION_SUCCESSFUL;

  llo3 = llo2;
  getLLong_ret = llo1;
  llo2 = llo1 + llo2;
  
  return retCode;
} 
 
DDSCSMessages
 BasicTypeTestImpl::getULLong(DDS_UnsignedLongLong ullo1 ,DDS_UnsignedLongLong &ullo2,DDS_UnsignedLongLong &ullo3, DDS_UnsignedLongLong &getULLong_ret) 
{
  DDSCSMessages retCode = OPERATION_SUCCESSFUL;

  ullo3 = ullo2;
  getULLong_ret = ullo1;
  ullo2 = ullo1 + ullo2;
  
  return retCode;
} 
 
DDSCSMessages
 BasicTypeTestImpl::getFloat(DDS_Float fl1 ,DDS_Float &fl2,DDS_Float &fl3, DDS_Float &getFloat_ret) 
{
  DDSCSMessages retCode = OPERATION_SUCCESSFUL;

  fl3 = fl2;
  getFloat_ret = fl1;
  fl2 = fl1 + fl2;
  
  return retCode;
} 
 
DDSCSMessages
 BasicTypeTestImpl::getDouble(DDS_Double do1 ,DDS_Double &do2,DDS_Double &do3, DDS_Double &getDouble_ret) 
{
  DDSCSMessages retCode = OPERATION_SUCCESSFUL;

  do3 = do2;
  getDouble_ret = do1;
  do2 = do1 + do2;
  
  return retCode;
} 
 
DDSCSMessages
 BasicTypeTestImpl::getBoolean(DDS_Boolean bo1 ,DDS_Boolean &bo2,DDS_Boolean &bo3, DDS_Boolean &getBoolean_ret) 
{
  DDSCSMessages retCode = OPERATION_SUCCESSFUL;

  bo3 = bo2;
  getBoolean_ret = bo1;
  bo2 = bo1 | bo2;
  
  return retCode;
} 