/*
 * SPDX-FileCopyrightText: 2023-2023 Istituto Italiano di Tecnologia (IIT)
 * SPDX-License-Identifier: LGPL-2.1-or-later
 */


// Generated by yarpDeviceParamParserGenerator (1.0)
// This is an automatically generated file. Please do not edit it.
// It will be re-generated if the cmake flag ALLOW_DEVICE_PARAM_PARSER_GERNERATION is ON.

// Generated on: Thu Mar  7 17:59:45 2024


#include "ChatBot_nws_yarp_ParamsParser.h"
#include <yarp/os/LogStream.h>
#include <yarp/os/Value.h>

namespace {
    YARP_LOG_COMPONENT(ChatBot_nws_yarpParamsCOMPONENT, "yarp.device.ChatBot_nws_yarp")
}


ChatBot_nws_yarp_ParamsParser::ChatBot_nws_yarp_ParamsParser()
{
}


std::vector<std::string> ChatBot_nws_yarp_ParamsParser::getListOfParams() const
{
    std::vector<std::string> params;
    params.push_back("name");
    params.push_back("streaming_name");
    return params;
}


bool      ChatBot_nws_yarp_ParamsParser::parseParams(const yarp::os::Searchable & config)
{
    //Check for --help option
    if (config.check("help"))
    {
        yCInfo(ChatBot_nws_yarpParamsCOMPONENT) << getDocumentationOfDeviceParams();
    }

    std::string config_string = config.toString();
    yarp::os::Property prop_check(config_string.c_str());
    //Parser of parameter name
    {
        if (config.check("name"))
        {
            m_name = config.find("name").asString();
            yCInfo(ChatBot_nws_yarpParamsCOMPONENT) << "Parameter 'name' using value:" << m_name;
        }
        else
        {
            yCInfo(ChatBot_nws_yarpParamsCOMPONENT) << "Parameter 'name' using DEFAULT value:" << m_name;
        }
        prop_check.unput("name");
    }

    //Parser of parameter streaming_name
    {
        if (config.check("streaming_name"))
        {
            m_streaming_name = config.find("streaming_name").asString();
            yCInfo(ChatBot_nws_yarpParamsCOMPONENT) << "Parameter 'streaming_name' using value:" << m_streaming_name;
        }
        else
        {
            yCInfo(ChatBot_nws_yarpParamsCOMPONENT) << "Parameter 'streaming_name' using DEFAULT value:" << m_streaming_name;
        }
        prop_check.unput("streaming_name");
    }

    /*
    //This code check if the user set some parameter which are not check by the parser
    //If the parser is set in strict mode, this will generate an error
    if (prop_check.size() > 0)
    {
        bool extra_params_found = false;
        for (auto it=prop_check.begin(); it!=prop_check.end(); it++)
        {
            if (m_parser_is_strict)
            {
                yCError(ChatBot_nws_yarpParamsCOMPONENT) << "User asking for parameter: "<<it->name <<" which is unknown to this parser!";
                extra_params_found = true;
            }
            else
            {
                yCWarning(ChatBot_nws_yarpParamsCOMPONENT) << "User asking for parameter: "<< it->name <<" which is unknown to this parser!";
            }
        }

       if (m_parser_is_strict && extra_params_found)
       {
           return false;
       }
    }
    */
    return true;
}


std::string      ChatBot_nws_yarp_ParamsParser::getDocumentationOfDeviceParams() const
{
    std::string doc;
    doc = doc + std::string("\n=============================================\n");
    doc = doc + std::string("This is the help for device: ChatBot_nws_yarp\n");
    doc = doc + std::string("\n");
    doc = doc + std::string("This is the list of the parameters accepted by the device:\n");
    doc = doc + std::string("'name': prefix for all ports opened by the device\n");
    doc = doc + std::string("'streaming_name': \n");
    doc = doc + std::string("\n");
    doc = doc + std::string("Here are some examples of invocation command with yarpdev, with all params:\n");
    doc = doc + " yarpdev --device chatBot_nws_yarp --name /chatBot_nws --streaming_name <optional_value>\n";
    doc = doc + std::string("Using only mandatory params:\n");
    doc = doc + " yarpdev --device chatBot_nws_yarp\n";
    doc = doc + std::string("=============================================\n\n");    return doc;
}