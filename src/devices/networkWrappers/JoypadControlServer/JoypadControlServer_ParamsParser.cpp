/*
 * SPDX-FileCopyrightText: 2023-2023 Istituto Italiano di Tecnologia (IIT)
 * SPDX-License-Identifier: LGPL-2.1-or-later
 */


// Generated by yarpDeviceParamParserGenerator (1.0)
// This is an automatically generated file. Please do not edit it.
// It will be re-generated if the cmake flag ALLOW_DEVICE_PARAM_PARSER_GERNERATION is ON.

// Generated on: Thu Mar  7 17:59:50 2024


#include "JoypadControlServer_ParamsParser.h"
#include <yarp/os/LogStream.h>
#include <yarp/os/Value.h>

namespace {
    YARP_LOG_COMPONENT(JoypadControlServerParamsCOMPONENT, "yarp.device.JoypadControlServer")
}


JoypadControlServer_ParamsParser::JoypadControlServer_ParamsParser()
{
}


std::vector<std::string> JoypadControlServer_ParamsParser::getListOfParams() const
{
    std::vector<std::string> params;
    params.push_back("period");
    params.push_back("name");
    params.push_back("use_separate_ports");
    params.push_back("profile");
    return params;
}


bool      JoypadControlServer_ParamsParser::parseParams(const yarp::os::Searchable & config)
{
    //Check for --help option
    if (config.check("help"))
    {
        yCInfo(JoypadControlServerParamsCOMPONENT) << getDocumentationOfDeviceParams();
    }

    std::string config_string = config.toString();
    yarp::os::Property prop_check(config_string.c_str());
    //Parser of parameter period
    {
        if (config.check("period"))
        {
            m_period = config.find("period").asFloat64();
            yCInfo(JoypadControlServerParamsCOMPONENT) << "Parameter 'period' using value:" << m_period;
        }
        else
        {
            yCInfo(JoypadControlServerParamsCOMPONENT) << "Parameter 'period' using DEFAULT value:" << m_period;
        }
        prop_check.unput("period");
    }

    //Parser of parameter name
    {
        if (config.check("name"))
        {
            m_name = config.find("name").asString();
            yCInfo(JoypadControlServerParamsCOMPONENT) << "Parameter 'name' using value:" << m_name;
        }
        else
        {
            yCError(JoypadControlServerParamsCOMPONENT) << "Mandatory parameter 'name' not found!";
            yCError(JoypadControlServerParamsCOMPONENT) << "Description of the parameter: Prefix name of the ports opened by the JoypadControlServer";
            return false;
        }
        prop_check.unput("name");
    }

    //Parser of parameter use_separate_ports
    {
        if (config.check("use_separate_ports"))
        {
            m_use_separate_ports = config.find("use_separate_ports").asBool();
            yCInfo(JoypadControlServerParamsCOMPONENT) << "Parameter 'use_separate_ports' using value:" << m_use_separate_ports;
        }
        else
        {
            yCInfo(JoypadControlServerParamsCOMPONENT) << "Parameter 'use_separate_ports' using DEFAULT value:" << m_use_separate_ports;
        }
        prop_check.unput("use_separate_ports");
    }

    //Parser of parameter profile
    {
        if (config.check("profile"))
        {
            m_profile = config.find("profile").asBool();
            yCInfo(JoypadControlServerParamsCOMPONENT) << "Parameter 'profile' using value:" << m_profile;
        }
        else
        {
            yCInfo(JoypadControlServerParamsCOMPONENT) << "Parameter 'profile' using DEFAULT value:" << m_profile;
        }
        prop_check.unput("profile");
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
                yCError(JoypadControlServerParamsCOMPONENT) << "User asking for parameter: "<<it->name <<" which is unknown to this parser!";
                extra_params_found = true;
            }
            else
            {
                yCWarning(JoypadControlServerParamsCOMPONENT) << "User asking for parameter: "<< it->name <<" which is unknown to this parser!";
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


std::string      JoypadControlServer_ParamsParser::getDocumentationOfDeviceParams() const
{
    std::string doc;
    doc = doc + std::string("\n=============================================\n");
    doc = doc + std::string("This is the help for device: JoypadControlServer\n");
    doc = doc + std::string("\n");
    doc = doc + std::string("This is the list of the parameters accepted by the device:\n");
    doc = doc + std::string("'period': Refresh period (in s) of the broadcasted values through yarp ports\n");
    doc = doc + std::string("'name': Prefix name of the ports opened by the JoypadControlServer\n");
    doc = doc + std::string("'use_separate_ports': set it to 1 to use separate ports (buttons, axes, trackballs, hats) and 0 to stream all in one single port\n");
    doc = doc + std::string("'profile': print the joypad data for debugging purpose\n");
    doc = doc + std::string("\n");
    doc = doc + std::string("Here are some examples of invocation command with yarpdev, with all params:\n");
    doc = doc + " yarpdev --device JoypadControlServer --period 0.01 --name /robotName/joypad --use_separate_ports true --profile false\n";
    doc = doc + std::string("Using only mandatory params:\n");
    doc = doc + " yarpdev --device JoypadControlServer --name /robotName/joypad\n";
    doc = doc + std::string("=============================================\n\n");    return doc;
}