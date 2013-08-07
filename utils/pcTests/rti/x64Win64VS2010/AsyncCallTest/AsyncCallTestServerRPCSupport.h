/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************
 * 
 * @file AsyncCallTestServerRPCSupport.h
 * This header file contains the declaration of the server's RPC endpoints for interface AsyncCallTest.
 *
 * This file was generated by the tool rpcddsgen.
 */

#ifndef _AsyncCallTest_SERVER_RPC_SUPPORT_H_
#define _AsyncCallTest_SERVER_RPC_SUPPORT_H_

#include "utils/GenericServerRPC.h"
#include "AsyncCallTestRequestReplySupport.h"



GENERIC_SERVER_RPC(AsyncCallTest_getLongServerRPC, AsyncCallTest_getLongReplyDataWriter, AsyncCallTest_getLongRequestDataReader);


GENERIC_SERVER_RPC(AsyncCallTest_getBooleanServerRPC, AsyncCallTest_getBooleanReplyDataWriter, AsyncCallTest_getBooleanRequestDataReader);


GENERIC_SERVER_RPC(AsyncCallTest_getStringServerRPC, AsyncCallTest_getStringReplyDataWriter, AsyncCallTest_getStringRequestDataReader);


GENERIC_SERVER_RPC(AsyncCallTest_duplicateServerRPC, AsyncCallTest_duplicateReplyDataWriter, AsyncCallTest_duplicateRequestDataReader);


#endif  // _AsyncCallTest_SERVER_RPC_SUPPORT_H_