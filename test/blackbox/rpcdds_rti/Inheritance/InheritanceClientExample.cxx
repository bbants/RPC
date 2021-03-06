/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This generated file is licensed to you under the terms described in the
 * fastrpc_LICENSE file included in this fastrpc distribution.
 *
 *************************************************************************
 * 
 * @file InheritanceClientExample.cxx
 * This source file shows a simple example of how to create a proxy for an interface.
 *
 * This file was generated by the tool fastrpcgen.
 */

#include "InheritanceProxy.h"
#include "Inheritance.h"
#include "InheritanceDDSProtocol.h"
#include <transports/dds/UDPProxyTransport.h>
#include <exceptions/Exceptions.h>

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
    InheritanceProtocol *protocol = NULL;
    UDPProxyTransport *transport = NULL;
    ModuleA::Interface1Proxy *proxy1 = NULL;
    ModuleA::Interface2Proxy *proxy2 = NULL;
    ModuleB::Interface3Proxy *proxy3 = NULL;
    
    // Creation of the proxy for interface "ModuleB::Interface3".
    try
    {
        protocol = new InheritanceProtocol();
        transport = new UDPProxyTransport("InheritanceService", "Instance");
        proxy1 = new ModuleA::Interface1Proxy(*transport, *protocol);
        proxy2 = new ModuleA::Interface2Proxy(*transport, *protocol);
        proxy3 = new ModuleB::Interface3Proxy(*transport, *protocol);
    }
    catch(InitializeException &ex)
    {
        std::cout << ex.what() << std::endl;
        return -1;
    }
    
    // Create and initialize parameters.
    ModuleA::Interface1::Dato  data;
    data.count = 2;
    ModuleA::Interface1::Dato  data2;
    data2.count = 3;

    try
    {
        ModuleA::Interface1::Dato ret = proxy1->function1(data);

        if(ret.count != 3)
        {
            std::cout << "TEST FAILED<ModuleA::Interface1::function1>: Wrong value" << std::endl;
            _exit(-1);
        }
    }
    catch(SystemException &ex)
    {
        std::cout << "TEST FAILED<ModuleA::Interface1::function1>: " << ex.what() << std::endl;
        _exit(-1);
    }

    try
    {
        proxy1->function1_set(data2);
    }
    catch(SystemException &ex)
    {
        std::cout << "TEST FAILED<ModuleA::Interface1::function1_set>: " << ex.what() << std::endl;
        _exit(-1);
    }

    try
    {
        ModuleA::Interface1::Dato ret = proxy1->function1_get();

        if(ret.count != 4)
        {
            std::cout << "TEST FAILED<ModuleA::Interface1::function1_get>: Wrong value" << std::endl;
            _exit(-1);
        }
    }
    catch(SystemException &ex)
    {
        std::cout << "TEST FAILED<ModuleA::Interface1::function1_get>: " << ex.what() << std::endl;
        _exit(-1);
    }
    
    try
    {
        ModuleA::Interface1::Dato ret = proxy2->function1(data);

        if(ret.count != 2)
        {
            std::cout << "TEST FAILED<ModuleA::Interface2::function1>: Wrong value" << std::endl;
            _exit(-1);
        }
    }
    catch(SystemException &ex)
    {
        std::cout << "TEST FAILED<ModuleA::Interface2::function1>: " << ex.what() << std::endl;
        _exit(-1);
    }

    try
    {
        proxy2->function1_set(data2);
    }
    catch(SystemException &ex)
    {
        std::cout << "TEST FAILED<ModuleA::Interface2::function1_set>: " << ex.what() << std::endl;
        _exit(-1);
    }

    try
    {
        ModuleA::Interface1::Dato ret = proxy2->function1_get();

        if(ret.count != 3)
        {
            std::cout << "TEST FAILED<ModuleA::Interface2::function1_get>: Wrong value" << std::endl;
            _exit(-1);
        }
    }
    catch(SystemException &ex)
    {
        std::cout << "TEST FAILED<ModuleA::Interface2::function1_get>: " << ex.what() << std::endl;
        _exit(-1);
    }

    // Call to remote procedure "function2".
    try
    {
        int32_t ret = proxy2->function2(4);

        if(ret != 4)
        {
            std::cout << "TEST FAILED<ModuleA::Interface2::function2>: Wrong value" << std::endl;
            _exit(-1);
        }
    }
    catch(SystemException &ex)
    {
        std::cout << "TEST FAILED<ModuleA::Interface2::function2>: " << ex.what() << std::endl;
        _exit(-1);
    }

    try
    {
        ModuleA::Interface1::Dato ret = proxy3->function1(data);

        if(ret.count != 4)
        {
            std::cout << "TEST FAILED<ModuleB::Interface3::function1>: Wrong value" << std::endl;
            _exit(-1);
        }
    }
    catch(SystemException &ex)
    {
        std::cout << "TEST FAILED<ModuleB::Interface3::function1>: " << ex.what() << std::endl;
        _exit(-1);
    }

    try
    {
        proxy3->function1_set(data2);
    }
    catch(SystemException &ex)
    {
        std::cout << "TEST FAILED<ModuleB::Interface3::function1_set>: " << ex.what() << std::endl;
        _exit(-1);
    }

    try
    {
        ModuleA::Interface1::Dato ret = proxy3->function1_get();

        if(ret.count != 5)
        {
            std::cout << "TEST FAILED<ModuleB::Interface3::function1_get>: Wrong value" << std::endl;
            _exit(-1);
        }
    }
    catch(SystemException &ex)
    {
        std::cout << "TEST FAILED<ModuleB::Interface3::function1_get>: " << ex.what() << std::endl;
        _exit(-1);
    }

    ModuleB::Interface3::Dato datas;
    datas.str = DDS_String_dup("HOLA");

    try
    {
        ModuleB::Interface3::Dato ret = proxy3->function3(datas);

        if(strcmp(ret.str, datas.str) != 0)
        {
            std::cout << "TEST FAILED<ModuleB::Interface3::function3>: Wrong value" << std::endl;
            _exit(-1);
        }
    }
    catch(SystemException &ex)
    {
        std::cout << "TEST FAILED<ModuleB::Interface3::function1_get>: " << ex.what() << std::endl;
        _exit(-1);
    }

    std::cout << "TEST SUCCESFULLY" << std::endl;
    
    delete proxy1;
    delete proxy2;
    delete proxy3;
    delete transport ;
    delete protocol ;
   
    _exit(0);
    return 0;
}






