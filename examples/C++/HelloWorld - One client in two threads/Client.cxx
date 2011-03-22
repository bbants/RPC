/** 
 * Generated by DDSCS                                                    *
 * Example client. Method params should be initialized before execution  *
 */

#include "RateGenProxy.h"
#include "RateGenRequestReplyPlugin.h"
#include "osapi/osapi_threadFactory.h"

void* fthread1(void *args)
{
	RateGenProxy *proxy = (RateGenProxy*)args;
    DDS_Duration_t period = {0,300};

	tickConsumer *c = tickConsumerPluginSupport_create_data();    
    DDS_Long  i = 1;       
    DDS_Long  kk = 2;       
    DDS_Octet  ret1;    
    Cookie *subscribe_Pulse_ret = CookiePluginSupport_create_data();       
    DDSCSMessages  subscribe_PulseRetValue;  
    
	for(int i = 0; i < 1000; i++)
	{      
		/**
		 * Dynamic memory passed to the proxy will be freed before return *
		 * Pass a copy if you want to keep it                             *
		 */
		subscribe_PulseRetValue = proxy->subscribe_Pulse(*c , i ,kk , ret1, *subscribe_Pulse_ret);
		printf("<thread1>: kk = %d, ret1 = %hhu\n", kk, ret1);
		NDDSUtility::sleep(period);
	}

	return NULL;
}

void* fthread2(void *args)
{
    RateGenProxy *proxy = (RateGenProxy*)args;
    DDS_Duration_t period = {0,200};

	tickConsumer *c = tickConsumerPluginSupport_create_data();    
    DDS_Long  i = 1;       
    DDS_Long  kk = 2;       
    DDS_Octet  ret1;    
    Cookie *subscribe_Pulse_ret = CookiePluginSupport_create_data();       
    DDSCSMessages  subscribe_PulseRetValue;  
    
	for(int i = 0; i < 1000; i++)
	{      
		/**
		 * Dynamic memory passed to the proxy will be freed before return *
		 * Pass a copy if you want to keep it                             *
		 */
		subscribe_PulseRetValue = proxy->subscribe_Pulse(*c , i ,kk , ret1, *subscribe_Pulse_ret);
		printf("<thread2>: kk = %d, ret1 = %hhu\n", kk, ret1);
		NDDSUtility::sleep(period);
	}

	return NULL;
}

int main()
{
	int domainId = 0;
    unsigned int timeoutInMillis = 4000;
	RTIOsapiThreadFactory *factory = RTIOsapiThreadFactory_newDefault();
	RTIOsapiThread *thread1 = NULL, *thread2 = NULL;
	DDS_Duration_t period = {0,200};
	RateGenProxy *proxy = new RateGenProxy(domainId, timeoutInMillis);

	thread1 = RTIOsapiThreadFactory_createThread(factory, "thread1", RTI_OSAPI_THREAD_PRIORITY_NORMAL,
		RTI_OSAPI_THREAD_OPTION_DEFAULT, 4096, (void*(*)(void*))fthread1, (void*)proxy);

	if(thread1 != NULL)
	{
		NDDSUtility::sleep(period);
		thread2 = RTIOsapiThreadFactory_createThread(factory, "thread1", RTI_OSAPI_THREAD_PRIORITY_NORMAL,
			RTI_OSAPI_THREAD_OPTION_DEFAULT, 4096, (void*(*)(void*))fthread2, (void*)proxy);

		if(thread2 != NULL)
		{
			for(int i = 0; i < 2000; i++)
				NDDSUtility::sleep(period);
		}
	}

	delete(proxy);
}