/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************
 * 
 * @file CalculatorServer.cxx
 * This source file contains the definition of the server for interface Calculator.
 *
 * This file was generated by the tool rpcddsgen.
 */

#include "CalculatorServer.h"
#include "transports/UDPTransport.h"
#include "transports/TCPTransport.h"
#include "exceptions/ServerInternalException.h"
#include "CalculatorRequestReplyTypeSupportImpl.h"

#include "CalculatorServerRPCSupport.h"

CalculatorServer::CalculatorServer(std::string serviceName, eProsima::RPCDDS::ServerStrategy *strategy,
    int domainId) :
    Server(serviceName, strategy, NULL, domainId)
{
    _impl = new CalculatorServerImpl();

    createRPCs();
}

CalculatorServer::CalculatorServer(std::string serviceName, eProsima::RPCDDS::ServerStrategy *strategy,
    eProsima::RPCDDS::Transport *transport, int domainId) :
    Server(serviceName, strategy, transport, domainId)
{
    _impl = new CalculatorServerImpl();
    
    createRPCs();
}

CalculatorServer::~CalculatorServer()
{
    delete _impl;    
}

void CalculatorServer::createRPCs()
{
    this->setRPC(new Calculator_additionServerRPC("addition", this,
                Calculator_additionRequestUtils::registerType(getParticipant()),
                Calculator_additionReplyUtils::registerType(getParticipant()),
                &CalculatorServer::addition));
    this->setRPC(new Calculator_substractionServerRPC("substraction", this,
                Calculator_substractionRequestUtils::registerType(getParticipant()),
                Calculator_substractionReplyUtils::registerType(getParticipant()),
                &CalculatorServer::substraction));
    this->setRPC(new Calculator_multiplicationServerRPC("multiplication", this,
                Calculator_multiplicationRequestUtils::registerType(getParticipant()),
                Calculator_multiplicationReplyUtils::registerType(getParticipant()),
                &CalculatorServer::multiplication));
    this->setRPC(new Calculator_divisionServerRPC("division", this,
                Calculator_divisionRequestUtils::registerType(getParticipant()),
                Calculator_divisionReplyUtils::registerType(getParticipant()),
                &CalculatorServer::division));

}

void CalculatorServer::addition(eProsima::RPCDDS::Server *server, void *requestData, eProsima::RPCDDS::ServerRPC *service) 
{ 
    CalculatorServer *srv = dynamic_cast<CalculatorServer*>(server);
    CORBA::Long  x = 0;
    CORBA::Long  y = 0;
    CORBA::Long  addition_ret = 0;   
    Calculator_additionReply replyData;
    

    Calculator_additionRequestUtils::extractTypeData(*(Calculator_additionRequest*)requestData, x, y);

    try
    {
        addition_ret = srv->_impl->addition(x, y);

        Calculator_additionReplyUtils::setTypeData(replyData, addition_ret);
        replyData.header.rpcddsRetCode = eProsima::RPCDDS::OPERATION_SUCCESSFUL;
        replyData.header.rpcddsRetMsg = "";

        service->sendReply(requestData, &replyData);
    }
    catch(const eProsima::RPCDDS::ServerInternalException &ex)
    {
        replyData.header.rpcddsRetCode = eProsima::RPCDDS::SERVER_INTERNAL_ERROR;
        replyData.header.rpcddsRetMsg = ex.what();
        
        service->sendReply(requestData, &replyData);
    }
    
    delete (Calculator_additionRequest*)requestData;
    
}
void CalculatorServer::substraction(eProsima::RPCDDS::Server *server, void *requestData, eProsima::RPCDDS::ServerRPC *service) 
{ 
    CalculatorServer *srv = dynamic_cast<CalculatorServer*>(server);
    CORBA::Long  x = 0;
    CORBA::Long  y = 0;
    CORBA::Long  substraction_ret = 0;   
    Calculator_substractionReply replyData;
    

    Calculator_substractionRequestUtils::extractTypeData(*(Calculator_substractionRequest*)requestData, x, y);

    try
    {
        substraction_ret = srv->_impl->substraction(x, y);

        Calculator_substractionReplyUtils::setTypeData(replyData, substraction_ret);
        replyData.header.rpcddsRetCode = eProsima::RPCDDS::OPERATION_SUCCESSFUL;
        replyData.header.rpcddsRetMsg = "";

        service->sendReply(requestData, &replyData);
    }
    catch(const eProsima::RPCDDS::ServerInternalException &ex)
    {
        replyData.header.rpcddsRetCode = eProsima::RPCDDS::SERVER_INTERNAL_ERROR;
        replyData.header.rpcddsRetMsg = ex.what();
        
        service->sendReply(requestData, &replyData);
    }
    
    delete (Calculator_substractionRequest*)requestData;
    
}
void CalculatorServer::multiplication(eProsima::RPCDDS::Server *server, void *requestData, eProsima::RPCDDS::ServerRPC *service) 
{ 
    CalculatorServer *srv = dynamic_cast<CalculatorServer*>(server);
    CORBA::Long  x = 0;
    CORBA::Long  y = 0;
    CORBA::Long  multiplication_ret = 0;   
    Calculator_multiplicationReply replyData;
    

    Calculator_multiplicationRequestUtils::extractTypeData(*(Calculator_multiplicationRequest*)requestData, x, y);

    try
    {
        multiplication_ret = srv->_impl->multiplication(x, y);

        Calculator_multiplicationReplyUtils::setTypeData(replyData, multiplication_ret);
        replyData.header.rpcddsRetCode = eProsima::RPCDDS::OPERATION_SUCCESSFUL;
        replyData.header.rpcddsRetMsg = "";

        service->sendReply(requestData, &replyData);
    }
    catch(const eProsima::RPCDDS::ServerInternalException &ex)
    {
        replyData.header.rpcddsRetCode = eProsima::RPCDDS::SERVER_INTERNAL_ERROR;
        replyData.header.rpcddsRetMsg = ex.what();
        
        service->sendReply(requestData, &replyData);
    }
    
    delete (Calculator_multiplicationRequest*)requestData;
    
}
void CalculatorServer::division(eProsima::RPCDDS::Server *server, void *requestData, eProsima::RPCDDS::ServerRPC *service) 
{ 
    CalculatorServer *srv = dynamic_cast<CalculatorServer*>(server);
    CORBA::Long  x = 0;
    CORBA::Long  y = 0;
    CORBA::Long  division_ret = 0;   
    Calculator_divisionReply replyData;
    

    Calculator_divisionRequestUtils::extractTypeData(*(Calculator_divisionRequest*)requestData, x, y);

    try
    {
        division_ret = srv->_impl->division(x, y);

        Calculator_divisionReplyUtils::setTypeData(replyData, division_ret);
        replyData.header.rpcddsRetCode = eProsima::RPCDDS::OPERATION_SUCCESSFUL;
        replyData.header.rpcddsRetMsg = "";

        service->sendReply(requestData, &replyData);
    }
    catch(const eProsima::RPCDDS::ServerInternalException &ex)
    {
        replyData.header.rpcddsRetCode = eProsima::RPCDDS::SERVER_INTERNAL_ERROR;
        replyData.header.rpcddsRetMsg = ex.what();
        
        service->sendReply(requestData, &replyData);
    }
    
    delete (Calculator_divisionRequest*)requestData;
    
}