/*
 * SPDX-FileCopyrightText: 2023-2023 Istituto Italiano di Tecnologia (IIT)
 * SPDX-License-Identifier: LGPL-2.1-or-later
 */


// Generated by yarpDeviceParamParserGenerator (1.0)
// This is an automatically generated file. Please do not edit it.
// It will be re-generated if the cmake flag ALLOW_DEVICE_PARAM_PARSER_GERNERATION is ON.

// Generated on: Thu Mar  7 17:59:45 2024


#include "MobileBaseVelocityControl_nws_yarp_ParamsParser.h"
#include <yarp/os/LogStream.h>
#include <yarp/os/Value.h>

namespace {
    YARP_LOG_COMPONENT(MobileBaseVelocityControl_nws_yarpParamsCOMPONENT, "yarp.device.MobileBaseVelocityControl_nws_yarp")
}


MobileBaseVelocityControl_nws_yarp_ParamsParser::MobileBaseVelocityControl_nws_yarp_ParamsParser()
{
}


std::vector<std::string> MobileBaseVelocityControl_nws_yarp_ParamsParser::getListOfParams() const
{
    std::vector<std::string> params;
    params.push_back("local");
    return params;
}


bool      MobileBaseVelocityControl_nws_yarp_ParamsParser::parseParams(const yarp::os::Searchable & config)
{
    //Check for --help option
    if (config.check("help"))
    {
        yCInfo(MobileBaseVelocityControl_nws_yarpParamsCOMPONENT) << getDocumentationOfDeviceParams();
    }

    std::string config_string = config.toString();
    yarp::os::Property prop_check(config_string.c_str());
    //Parser of parameter local
    {
        if (config.check("local"))
        {
            m_local = config.find("local").asString();
            yCInfo(MobileBaseVelocityControl_nws_yarpParamsCOMPONENT) << "Parameter 'local' using value:" << m_local;
        }
        else
        {
            yCError(MobileBaseVelocityControl_nws_yarpParamsCOMPONENT) << "Mandatory parameter 'local' not found!";
            yCError(MobileBaseVelocityControl_nws_yarpParamsCOMPONENT) << "Description of the parameter: Name of the port opened by the device. For both ports (i.e. /rpc:i, /data:i) the corresponding suffix is automatically added";
            return false;
        }
        prop_check.unput("local");
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
                yCError(MobileBaseVelocityControl_nws_yarpParamsCOMPONENT) << "User asking for parameter: "<<it->name <<" which is unknown to this parser!";
                extra_params_found = true;
            }
            else
            {
                yCWarning(MobileBaseVelocityControl_nws_yarpParamsCOMPONENT) << "User asking for parameter: "<< it->name <<" which is unknown to this parser!";
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


std::string      MobileBaseVelocityControl_nws_yarp_ParamsParser::getDocumentationOfDeviceParams() const
{
    std::string doc;
    doc = doc + std::string("\n=============================================\n");
    doc = doc + std::string("This is the help for device: MobileBaseVelocityControl_nws_yarp\n");
    doc = doc + std::string("\n");
    doc = doc + std::string("This is the list of the parameters accepted by the device:\n");
    doc = doc + std::string("'local': Name of the port opened by the device. For both ports (i.e. /rpc:i, /data:i) the corresponding suffix is automatically added\n");
    doc = doc + std::string("\n");
    doc = doc + std::string("Here are some examples of invocation command with yarpdev, with all params:\n");
    doc = doc + " yarpdev --device mobileBaseVelocityControl_nws_yarp --local /MobileBaseVelocityControl_nws\n";
    doc = doc + std::string("Using only mandatory params:\n");
    doc = doc + " yarpdev --device mobileBaseVelocityControl_nws_yarp --local /MobileBaseVelocityControl_nws\n";
    doc = doc + std::string("=============================================\n\n");    return doc;
}