/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "OnewayCallTestServer.h"
#include "transports/UDPTransport.h"
#include "transports/TCPTransport.h"
#include "exceptions/ServerInternalException.h"
#include "OnewayCallTestRequestReplyPlugin.h"

#include "OnewayCallTestServerRPCSupport.h"

OnewayCallTestServer::OnewayCallTestServer(std::string serviceName, eProsima::RPCDDS::ServerStrategy *strategy,
    int domainId) :
    Server(serviceName, strategy, NULL, domainId)
{
    _impl = new OnewayCallTestServerImpl();

    createRPCs();
}

OnewayCallTestServer::OnewayCallTestServer(std::string serviceName, eProsima::RPCDDS::ServerStrategy *strategy,
    eProsima::RPCDDS::Transport *transport, int domainId) :
    Server(serviceName, strategy, transport, domainId)
{
    _impl = new OnewayCallTestServerImpl();
    
    createRPCs();
}

OnewayCallTestServer::~OnewayCallTestServer()
{
    delete _impl;    
}

void OnewayCallTestServer::createRPCs()
{
    this->setRPC(new OnewayCallTest_setLongServerRPC("setLong", this,
                OnewayCallTest_setLongRequestUtils::registerType(getParticipant()),
                &OnewayCallTestServer::setLong));
    this->setRPC(new OnewayCallTest_getLongServerRPC("getLong", this,
                OnewayCallTest_getLongRequestUtils::registerType(getParticipant()),
                OnewayCallTest_getLongReplyUtils::registerType(getParticipant()),
                &OnewayCallTestServer::getLong));
    this->setRPC(new OnewayCallTest_setBooleanServerRPC("setBoolean", this,
                OnewayCallTest_setBooleanRequestUtils::registerType(getParticipant()),
                &OnewayCallTestServer::setBoolean));
    this->setRPC(new OnewayCallTest_getBooleanServerRPC("getBoolean", this,
                OnewayCallTest_getBooleanRequestUtils::registerType(getParticipant()),
                OnewayCallTest_getBooleanReplyUtils::registerType(getParticipant()),
                &OnewayCallTestServer::getBoolean));
    this->setRPC(new OnewayCallTest_setStringServerRPC("setString", this,
                OnewayCallTest_setStringRequestUtils::registerType(getParticipant()),
                &OnewayCallTestServer::setString));
    this->setRPC(new OnewayCallTest_getStringServerRPC("getString", this,
                OnewayCallTest_getStringRequestUtils::registerType(getParticipant()),
                OnewayCallTest_getStringReplyUtils::registerType(getParticipant()),
                &OnewayCallTestServer::getString));
    this->setRPC(new OnewayCallTest_setStructServerRPC("setStruct", this,
                OnewayCallTest_setStructRequestUtils::registerType(getParticipant()),
                &OnewayCallTestServer::setStruct));
    this->setRPC(new OnewayCallTest_getStructServerRPC("getStruct", this,
                OnewayCallTest_getStructRequestUtils::registerType(getParticipant()),
                OnewayCallTest_getStructReplyUtils::registerType(getParticipant()),
                &OnewayCallTestServer::getStruct));

}

void OnewayCallTestServer::setLong(eProsima::RPCDDS::Server *server, void *requestData, eProsima::RPCDDS::ServerRPC *service) 
{ 
    OnewayCallTestServer *srv = dynamic_cast<OnewayCallTestServer*>(server);
    DDS_Long  lo1 = 0;    
   
    

    OnewayCallTest_setLongRequestUtils::extractTypeData(*(OnewayCallTest_setLongRequest*)requestData, lo1);

    try
    {
srv->_impl->setLong(lo1);

    }
    catch(const eProsima::RPCDDS::ServerInternalException &ex)
    {
    }
    
    OnewayCallTest_setLongRequestTypeSupport::delete_data((OnewayCallTest_setLongRequest*)requestData);
    
}
void OnewayCallTestServer::getLong(eProsima::RPCDDS::Server *server, void *requestData, eProsima::RPCDDS::ServerRPC *service) 
{ 
    OnewayCallTestServer *srv = dynamic_cast<OnewayCallTestServer*>(server);
    DDS_Long  getLong_ret = 0;       
    OnewayCallTest_getLongReply replyData;
    

    OnewayCallTest_getLongRequestUtils::extractTypeData(*(OnewayCallTest_getLongRequest*)requestData);

    try
    {
        getLong_ret = srv->_impl->getLong();

        OnewayCallTest_getLongReplyUtils::setTypeData(replyData, getLong_ret);
        replyData.header.rpcddsRetCode = eProsima::RPCDDS::OPERATION_SUCCESSFUL;
        replyData.header.rpcddsRetMsg = NULL;

        service->sendReply(requestData, &replyData);
    }
    catch(const eProsima::RPCDDS::ServerInternalException &ex)
    {
        memset(&replyData, 0, sizeof(replyData));
        replyData.header.rpcddsRetCode = eProsima::RPCDDS::SERVER_INTERNAL_ERROR;
        replyData.header.rpcddsRetMsg = (char*)ex.what();
        
        service->sendReply(requestData, &replyData);
    }
    
    OnewayCallTest_getLongRequestTypeSupport::delete_data((OnewayCallTest_getLongRequest*)requestData);
    
        
}
void OnewayCallTestServer::setBoolean(eProsima::RPCDDS::Server *server, void *requestData, eProsima::RPCDDS::ServerRPC *service) 
{ 
    OnewayCallTestServer *srv = dynamic_cast<OnewayCallTestServer*>(server);
    DDS_Boolean  bo1 = RTI_FALSE;    
   
    

    OnewayCallTest_setBooleanRequestUtils::extractTypeData(*(OnewayCallTest_setBooleanRequest*)requestData, bo1);

    try
    {
srv->_impl->setBoolean(bo1);

    }
    catch(const eProsima::RPCDDS::ServerInternalException &ex)
    {
    }
    
    OnewayCallTest_setBooleanRequestTypeSupport::delete_data((OnewayCallTest_setBooleanRequest*)requestData);
    
}
void OnewayCallTestServer::getBoolean(eProsima::RPCDDS::Server *server, void *requestData, eProsima::RPCDDS::ServerRPC *service) 
{ 
    OnewayCallTestServer *srv = dynamic_cast<OnewayCallTestServer*>(server);
    DDS_Boolean  getBoolean_ret = RTI_FALSE;       
    OnewayCallTest_getBooleanReply replyData;
    

    OnewayCallTest_getBooleanRequestUtils::extractTypeData(*(OnewayCallTest_getBooleanRequest*)requestData);

    try
    {
        getBoolean_ret = srv->_impl->getBoolean();

        OnewayCallTest_getBooleanReplyUtils::setTypeData(replyData, getBoolean_ret);
        replyData.header.rpcddsRetCode = eProsima::RPCDDS::OPERATION_SUCCESSFUL;
        replyData.header.rpcddsRetMsg = NULL;

        service->sendReply(requestData, &replyData);
    }
    catch(const eProsima::RPCDDS::ServerInternalException &ex)
    {
        memset(&replyData, 0, sizeof(replyData));
        replyData.header.rpcddsRetCode = eProsima::RPCDDS::SERVER_INTERNAL_ERROR;
        replyData.header.rpcddsRetMsg = (char*)ex.what();
        
        service->sendReply(requestData, &replyData);
    }
    
    OnewayCallTest_getBooleanRequestTypeSupport::delete_data((OnewayCallTest_getBooleanRequest*)requestData);
    
        
}
void OnewayCallTestServer::setString(eProsima::RPCDDS::Server *server, void *requestData, eProsima::RPCDDS::ServerRPC *service) 
{ 
    OnewayCallTestServer *srv = dynamic_cast<OnewayCallTestServer*>(server);
    char*  s1 = NULL;    
   
    

    OnewayCallTest_setStringRequestUtils::extractTypeData(*(OnewayCallTest_setStringRequest*)requestData, s1);

    try
    {
srv->_impl->setString(s1);

    }
    catch(const eProsima::RPCDDS::ServerInternalException &ex)
    {
    }
    
    OnewayCallTest_setStringRequestTypeSupport::delete_data((OnewayCallTest_setStringRequest*)requestData);
    
}
void OnewayCallTestServer::getString(eProsima::RPCDDS::Server *server, void *requestData, eProsima::RPCDDS::ServerRPC *service) 
{ 
    OnewayCallTestServer *srv = dynamic_cast<OnewayCallTestServer*>(server);
    char*  getString_ret = NULL;       
    OnewayCallTest_getStringReply replyData;
    

    OnewayCallTest_getStringRequestUtils::extractTypeData(*(OnewayCallTest_getStringRequest*)requestData);

    try
    {
        getString_ret = srv->_impl->getString();

        OnewayCallTest_getStringReplyUtils::setTypeData(replyData, getString_ret);
        replyData.header.rpcddsRetCode = eProsima::RPCDDS::OPERATION_SUCCESSFUL;
        replyData.header.rpcddsRetMsg = NULL;

        service->sendReply(requestData, &replyData);
    }
    catch(const eProsima::RPCDDS::ServerInternalException &ex)
    {
        memset(&replyData, 0, sizeof(replyData));
        replyData.header.rpcddsRetCode = eProsima::RPCDDS::SERVER_INTERNAL_ERROR;
        replyData.header.rpcddsRetMsg = (char*)ex.what();
        
        service->sendReply(requestData, &replyData);
    }
    
    OnewayCallTest_getStringRequestTypeSupport::delete_data((OnewayCallTest_getStringRequest*)requestData);
    
    if(getString_ret != NULL) free(getString_ret);    
}
void OnewayCallTestServer::setStruct(eProsima::RPCDDS::Server *server, void *requestData, eProsima::RPCDDS::ServerRPC *service) 
{ 
    OnewayCallTestServer *srv = dynamic_cast<OnewayCallTestServer*>(server);
    Structure ev;
        
   
    

    OnewayCallTest_setStructRequestUtils::extractTypeData(*(OnewayCallTest_setStructRequest*)requestData, ev);

    try
    {
srv->_impl->setStruct(ev);

    }
    catch(const eProsima::RPCDDS::ServerInternalException &ex)
    {
    }
    
    OnewayCallTest_setStructRequestTypeSupport::delete_data((OnewayCallTest_setStructRequest*)requestData);
    
}
void OnewayCallTestServer::getStruct(eProsima::RPCDDS::Server *server, void *requestData, eProsima::RPCDDS::ServerRPC *service) 
{ 
    OnewayCallTestServer *srv = dynamic_cast<OnewayCallTestServer*>(server);
    Structure getStruct_ret;
    memset(&getStruct_ret, 0, sizeof(Structure));       
    OnewayCallTest_getStructReply replyData;
    

    OnewayCallTest_getStructRequestUtils::extractTypeData(*(OnewayCallTest_getStructRequest*)requestData);

    try
    {
        getStruct_ret = srv->_impl->getStruct();

        OnewayCallTest_getStructReplyUtils::setTypeData(replyData, getStruct_ret);
        replyData.header.rpcddsRetCode = eProsima::RPCDDS::OPERATION_SUCCESSFUL;
        replyData.header.rpcddsRetMsg = NULL;

        service->sendReply(requestData, &replyData);
    }
    catch(const eProsima::RPCDDS::ServerInternalException &ex)
    {
        memset(&replyData, 0, sizeof(replyData));
        replyData.header.rpcddsRetCode = eProsima::RPCDDS::SERVER_INTERNAL_ERROR;
        replyData.header.rpcddsRetMsg = (char*)ex.what();
        
        service->sendReply(requestData, &replyData);
    }
    
    OnewayCallTest_getStructRequestTypeSupport::delete_data((OnewayCallTest_getStructRequest*)requestData);
    
    Structure_finalize(&getStruct_ret);    
}