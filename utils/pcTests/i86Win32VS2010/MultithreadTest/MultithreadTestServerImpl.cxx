/** 
 * Generated by DDSCS                                               *
 * Empty interface implementation to be filled with your own code.  *
 */
 
#include "MultithreadTestServerImpl.h"

MultithreadTestImpl::MultithreadTestImpl()
{
}
MultithreadTestImpl::~MultithreadTestImpl()
{
}

 
DDSCSMessages
 MultithreadTestImpl::test(Dato & dato1 ,Dato  &dato2, DDS_Long &test_ret) 
{
  DDSCSMessages retCode = OPERATION_SUCCESSFUL;

  dato2.count = dato1.count;
  _snprintf(dato2.message, 255, "%s", dato1.message);
  test_ret = 0;
  
  return retCode;
} 