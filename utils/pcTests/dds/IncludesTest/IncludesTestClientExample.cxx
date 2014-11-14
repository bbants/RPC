/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************
 * 
 * @file Client.cxx
 * This source file shows a simple example of how to create a proxy for an interface.
 *
 * This file was generated by the tool rpcddsgen.
 */

#include "IncludesTestProxy.h"
#include "IncludesTest.h"
#include "IncludesTestDDSProtocol.h"
#include "fastrpc/transports/dds/UDPProxyTransport.h"
#include "fastrpc/exceptions/Exceptions.h"

#include <iostream>
#ifdef __linux
#include <unistd.h>
#endif

using namespace eprosima::rpc;
using namespace ::exception;
using namespace ::transport::dds;
using namespace ::protocol::dds;

int main(int argc, char **argv)
{
    IncludesTestProtocol *protocol = NULL;
    UDPProxyTransport *transport = NULL;
    IncludesTestNS::IncludesTestIfcProxy *proxy = NULL;
    
    // Creation of the proxy for interface "IncludesTestNS::IncludesTestIfc".
    try
    {
        protocol = new IncludesTestProtocol();
        transport = new UDPProxyTransport("IncludesTestService");
        proxy = new IncludesTestNS::IncludesTestIfcProxy(*transport, *protocol);
    }
    catch(InitializeException &ex)
    {
        std::cout << ex.what() << std::endl;
        _exit(-1);
    }
    
    // Create and initialize parameters.
    SameDirectoryNS::SameDirectory sd;
    Level2NS::Level2 lvl;
    IncludesTestNS::IncludesTest incl;

    // Create and initialize return value.
    IncludesTestNS::IncludesTest set_ret;

    lvl.count(3);
    sd.count(100);

    // Call to remote procedure "set".
    try
    {
        set_ret = proxy->set(sd, lvl, incl);

        if(incl.count() != 3 ||
                incl.level().count() != 3 ||
                incl.sd().count() != 3 ||
                incl.sd().level().count() != 3 ||
                lvl.count() != 100 ||
                set_ret.count() != 100 ||
                set_ret.level().count() != 100 ||
                set_ret.sd().count() != 100 ||
                set_ret.sd().level().count() != 100)
        {
            std::cout << "TEST FAILED<set>: Wrong values" << std::endl;
            _exit(-1);
        }
    }
    catch(SystemException &ex)
    {
        std::cout << ex.what() << std::endl;
        _exit(-1);
    }
    
    UtilNS::Util get_ret;

    try
    {
        get_ret = proxy->get();

        if(get_ret.count() != 1010)
        {
            std::cout << "TEST FAILED<get>: Wrong values" << std::endl;
            _exit(-1);
        }
    }
    catch(SystemException &ex)
    {
        std::cout << ex.what() << std::endl;
        _exit(-1);
    }
    
    HideNS::Hide h;
    HideNS::Hide ho;

    h.count(3043);

    try
    {
        proxy->hide(h, ho);

        if(ho.count() != 3043)
        {
            std::cout << "TEST FAILED<hide>: Wrong values" << std::endl;
            _exit(-1);
        }
    }
    catch(Exception &ex)
    {
        std::cout << ex.what() << std::endl;
        _exit(-1);
    }

    ZetaNS::Zeta z, zeta_ret;

    z.count(1021);

    try
    {
        zeta_ret = proxy->zeta(z);

        if(zeta_ret.count() != 1021)
        {
            std::cout << "TEST FAILED<zeta>: Wrong values" << std::endl;
            _exit(-1);
        }
    }
    catch(Exception &ex)
    {
        std::cout << ex.what() << std::endl;
        _exit(-1);
    }
    
    delete proxy;
    delete transport;
    delete protocol;
   
    return 0;
}




