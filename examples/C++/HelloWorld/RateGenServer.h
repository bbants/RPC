#ifndef _RateGenSKELETON_H_
#define _RateGenSKELETON_H_

/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "server/DDSCSServer.h"
#include "RateGenServerImpl.h"
#include "RateGenRequestReplyUtils.h"

class RateGenServer : public DDSCSServer
{
    private: 
      RateGenImpl *_impl;
    public:

        /// \brief The default constructor.
        RateGenServer(int domainId = 0, unsigned int threadCount = DDSCS_MIN_THREADS_DEFAULT);

        /// \brief The default destructor.
        virtual ~RateGenServer();

        static void suma(DDSCSServer *server, void *requestData, ServerRemoteService *service);
};

#endif // _RateGenSKELETON_H_