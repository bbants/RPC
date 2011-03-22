/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "RateGenServer.h"
#include "RateGenRequestReplyPlugin.h"
#include "RateGenServerRemoteServiceSupport.h"

RateGenServer::RateGenServer(int domainId, unsigned int threadCount) : DDSCSServer(domainId, threadCount)
{
    _impl = new RateGenImpl();
    

        this->setRemoteService(new sumaServerRemoteService("suma", this,
                sumaRequestUtils::registerType(getParticipant()),
                sumaReplyUtils::registerType(getParticipant()),
                &RateGenServer::suma, getParticipant()));

}
RateGenServer::~RateGenServer()
{
    delete _impl;    
}

void RateGenServer::suma(DDSCSServer *server, void *requestData, ServerRemoteService *service) 
{ 
    RateGenServer *srv = (RateGenServer*)server;
    DDS_Long  id1;    
    DDS_Long  id2;       
   
    DDS_Long  suma_ret;       
    DDSCSMessages  returnedValue;        
    sumaReply *replyData = NULL;

    sumaRequestUtils::extractTypeData((sumaRequest*)requestData, id1    , id2    );
                                         
    returnedValue = srv->_impl->suma(id1    , id2    ,suma_ret    );
           
    replyData = sumaReplyUtils::createTypeData(suma_ret    );
                                                  
    // sendReply takes care of deleting the data
    service->sendReply(requestData, replyData, returnedValue);
}