/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This generated file is licensed to you under the terms described in the
 * rpcdds_LICENSE file included in this rpcdds distribution.
 *
 *************************************************************************
 * 
 * @file CalculatorTopicsPlugin.h
 * This header file contains the declaration of methods used by DDS middleware.
 *
 * This file was generated by the tool rpcddsgen.
 */

#ifndef _Calculator_TOPICS_PLUGIN_H_
#define _Calculator_TOPICS_PLUGIN_H_

#include "CalculatorTopics.h"

#include "ndds/ndds_cpp.h"

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define user_cpp_DllExport __declspec( dllexport )
#else
#define user_cpp_DllExport
#endif
#else
#define user_cpp_DllExport
#endif

/*!
 * @brief This class encapsulates the methods used on DDS topics by DDS middleware.
 */
class user_cpp_DllExport CalculatorPlugin
{
    public:

        /*!
         * @brief This class encapsulates the methods used on DDS topics by DDS middleware.
         */
        class user_cpp_DllExport additionRequestPlugin
        {
            public:

                static DDS_TypeCode* get_typecode();
        };

        /*!
         * @brief This class encapsulates the methods used on DDS topics by DDS middleware.
         */
        class user_cpp_DllExport additionReplyPlugin : public DDSTypeSupport
        {
            public:

                static DDS_TypeCode* get_typecode();
        };

        /*!
         * @brief This class encapsulates the methods used on DDS topics by DDS middleware.
         */
        class user_cpp_DllExport subtractionRequestPlugin
        {
            public:

                static DDS_TypeCode* get_typecode();
        };

        /*!
         * @brief This class encapsulates the methods used on DDS topics by DDS middleware.
         */
        class user_cpp_DllExport subtractionReplyPlugin : public DDSTypeSupport
        {
            public:

                static DDS_TypeCode* get_typecode();
        };


    private:

        CalculatorPlugin(){}
};

/*!
 * @brief Request DataReader.
 */
class user_cpp_DllExport CalculatorRequestDataReader : public DDSDataReader
{
    public:

        CalculatorRequestDataReader(DDSDataReader *impl) : DDSDataReader(impl){}
};

/*!
 * @brief Request DataWriter.
 */
class user_cpp_DllExport CalculatorRequestDataWriter : public DDSDataWriter
{
    public:

        CalculatorRequestDataWriter(DDSDataWriter *impl) : DDSDataWriter(impl){}
};

/*!
 * @brief This class encapsulates the methods used on DDS topics by DDS middleware.
 */
class user_cpp_DllExport CalculatorRequest_unionPlugin
{
    public:

        static DDS_TypeCode* get_typecode();
};

/*!
 * @brief This class encapsulates the methods used on DDS topics by DDS middleware.
 */
class user_cpp_DllExport CalculatorRequestPlugin : public DDSTypeSupport
{
    public:

        static const char* get_typename();

        static CalculatorRequest* create_data(void);
        
        static void destroy_data(CalculatorRequest *sample);
        
        static void copy_data(CalculatorRequest *dst,
            const CalculatorRequest *src);
        
        static unsigned int get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);
        
        static unsigned int get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const CalculatorRequest * sample);
        
        static unsigned int get_serialized_sample_min_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);
        
        static PRESTypePluginParticipantData on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);
        
        static void on_participant_detached(
            PRESTypePluginParticipantData participant_data);
        
        static PRESTypePluginEndpointData on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);
        
        static void on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);
        
        static RTIBool copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            CalculatorRequest *dst,
            const CalculatorRequest *src);
        
        static RTIBool serialize(PRESTypePluginEndpointData endpoint_data,
            const CalculatorRequest *sample, 
            struct RTICdrStream *stream,    
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_sample, 
            void *endpoint_plugin_qos);
        
        static RTIBool deserialize(PRESTypePluginEndpointData endpoint_data,
            CalculatorRequest **sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,   
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);
        
        static PRESTypePluginKeyKind get_key_kind(void);
        
        static DDS_TypeCode* get_typecode();
        
        static struct PRESTypePlugin *new_plugin(void);
        
        static void delete_plugin(struct PRESTypePlugin *plugin);
        
        // TODO cambiar a isDDS.
        /*! TODO Mover al transporte */
        static bool register_type(DDSDomainParticipant *participant, const char *type_name);
        
        // TODO unregister_type.

        DDSDataReader* create_datareaderI(DDSDataReader* dataReader);

        DDS_ReturnCode_t destroy_datareaderI(DDSDataReader* dataReader);

        DDSDataWriter* create_datawriterI(DDSDataWriter* dataWriter);

        DDS_ReturnCode_t destroy_datawriterI(DDSDataWriter* dataWriter);
        
    private:

        static const char *m_typename;
};

/*!
 * @brief Reply DataReader.
 */
class user_cpp_DllExport CalculatorReplyDataReader : public DDSDataReader
{
    public:

        CalculatorReplyDataReader(DDSDataReader *impl) : DDSDataReader(impl){}
};

/*!
 * @brief Reply DataWriter.
 */
class user_cpp_DllExport CalculatorReplyDataWriter : public DDSDataWriter
{
    public:

        CalculatorReplyDataWriter(DDSDataWriter *impl) : DDSDataWriter(impl){}
};

/*!
 * @brief This class encapsulates the methods used on DDS topics by DDS middleware.
 */
class user_cpp_DllExport CalculatorReply_unionPlugin
{
    public:

        static DDS_TypeCode* get_typecode();
};

/*!
 * @brief This class encapsulates the methods used on DDS topics by DDS middleware.
 */
class user_cpp_DllExport CalculatorReplyPlugin : public DDSTypeSupport
{
    public:

        static const char* get_typename();
        
        static CalculatorReply* create_data(void);
        
        static void destroy_data(CalculatorReply *sample);
        
        static void copy_data(CalculatorReply *dst,
            const CalculatorReply *src);
        
        static unsigned int get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);
        
        static unsigned int get_serialized_sample_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment,
            const CalculatorReply * sample);
        
        static unsigned int get_serialized_sample_min_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);
        
        static PRESTypePluginParticipantData on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);
        
        static void on_participant_detached(PRESTypePluginParticipantData participant_data);
        
        static PRESTypePluginEndpointData on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);
        
        static void on_endpoint_detached(PRESTypePluginEndpointData endpoint_data);
        
        static RTIBool copy_sample(PRESTypePluginEndpointData endpoint_data,
            CalculatorReply *dst,
            const CalculatorReply *src);
        
        static RTIBool serialize(PRESTypePluginEndpointData endpoint_data,
            const CalculatorReply *sample, 
            struct RTICdrStream *stream,    
            RTIBool serialize_encapsulation,
            RTIEncapsulationId encapsulation_id,
            RTIBool serialize_sample, 
            void *endpoint_plugin_qos);
        
        static RTIBool deserialize(PRESTypePluginEndpointData endpoint_data,
            CalculatorReply **sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,   
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_sample, 
            void *endpoint_plugin_qos);
        
        static PRESTypePluginKeyKind get_key_kind(void);
        
        static DDS_TypeCode* get_typecode();
        
        static struct PRESTypePlugin* new_plugin(void);
        
        static void delete_plugin(struct PRESTypePlugin *plugin);
        
        // TODO cambiar a isDDS.
        /*! TODO Mover al transporte */
        static bool register_type(DDSDomainParticipant *participant, const char *type_name);
        
        // TODO unregister_type.

        DDSDataReader* create_datareaderI(DDSDataReader* dataReader);

        DDS_ReturnCode_t destroy_datareaderI(DDSDataReader* dataReader);

        DDSDataWriter* create_datawriterI(DDSDataWriter* dataWriter);

        DDS_ReturnCode_t destroy_datawriterI(DDSDataWriter* dataWriter);

    private:

        static const char *m_typename;
};


#endif // _Calculator_TOPICS_PLUGIN_H_