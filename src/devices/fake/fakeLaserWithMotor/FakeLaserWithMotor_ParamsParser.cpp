/*
 * SPDX-FileCopyrightText: 2023-2023 Istituto Italiano di Tecnologia (IIT)
 * SPDX-License-Identifier: LGPL-2.1-or-later
 */


// Generated by yarpDeviceParamParserGenerator (1.0)
// This is an automatically generated file. Please do not edit it.
// It will be re-generated if the cmake flag ALLOW_DEVICE_PARAM_PARSER_GERNERATION is ON.

// Generated on: Thu Mar  7 17:59:42 2024


#include "FakeLaserWithMotor_ParamsParser.h"
#include <yarp/os/LogStream.h>
#include <yarp/os/Value.h>

namespace {
    YARP_LOG_COMPONENT(FakeLaserWithMotorParamsCOMPONENT, "yarp.device.FakeLaserWithMotor")
}


FakeLaserWithMotor_ParamsParser::FakeLaserWithMotor_ParamsParser()
{
}


std::vector<std::string> FakeLaserWithMotor_ParamsParser::getListOfParams() const
{
    std::vector<std::string> params;
    params.push_back("test");
    params.push_back("localization_port");
    params.push_back("localization_server");
    params.push_back("localization_client");
    params.push_back("localization_device");
    params.push_back("MAP_MODE::map_file");
    params.push_back("MAP_MODE::map_context");
    params.push_back("clip_max");
    params.push_back("clip_min");
    params.push_back("GENERAL::period");
    params.push_back("CONSTANT_MODE::const_distance");
    return params;
}


bool      FakeLaserWithMotor_ParamsParser::parseParams(const yarp::os::Searchable & config)
{
    //Check for --help option
    if (config.check("help"))
    {
        yCInfo(FakeLaserWithMotorParamsCOMPONENT) << getDocumentationOfDeviceParams();
    }

    std::string config_string = config.toString();
    yarp::os::Property prop_check(config_string.c_str());
    //Parser of parameter test
    {
        if (config.check("test"))
        {
            m_test = config.find("test").asString();
            yCInfo(FakeLaserWithMotorParamsCOMPONENT) << "Parameter 'test' using value:" << m_test;
        }
        else
        {
            yCError(FakeLaserWithMotorParamsCOMPONENT) << "Mandatory parameter 'test' not found!";
            yCError(FakeLaserWithMotorParamsCOMPONENT) << "Description of the parameter: Choose the modality";
            return false;
        }
        prop_check.unput("test");
    }

    //Parser of parameter localization_port
    {
        if (config.check("localization_port"))
        {
            m_localization_port = config.find("localization_port").asString();
            yCInfo(FakeLaserWithMotorParamsCOMPONENT) << "Parameter 'localization_port' using value:" << m_localization_port;
        }
        else
        {
            yCInfo(FakeLaserWithMotorParamsCOMPONENT) << "Parameter 'localization_port' using DEFAULT value:" << m_localization_port;
        }
        prop_check.unput("localization_port");
    }

    //Parser of parameter localization_server
    {
        if (config.check("localization_server"))
        {
            m_localization_server = config.find("localization_server").asString();
            yCInfo(FakeLaserWithMotorParamsCOMPONENT) << "Parameter 'localization_server' using value:" << m_localization_server;
        }
        else
        {
            yCInfo(FakeLaserWithMotorParamsCOMPONENT) << "Parameter 'localization_server' using DEFAULT value:" << m_localization_server;
        }
        prop_check.unput("localization_server");
    }

    //Parser of parameter localization_client
    {
        if (config.check("localization_client"))
        {
            m_localization_client = config.find("localization_client").asString();
            yCInfo(FakeLaserWithMotorParamsCOMPONENT) << "Parameter 'localization_client' using value:" << m_localization_client;
        }
        else
        {
            yCInfo(FakeLaserWithMotorParamsCOMPONENT) << "Parameter 'localization_client' using DEFAULT value:" << m_localization_client;
        }
        prop_check.unput("localization_client");
    }

    //Parser of parameter localization_device
    {
        if (config.check("localization_device"))
        {
            m_localization_device = config.find("localization_device").asString();
            yCInfo(FakeLaserWithMotorParamsCOMPONENT) << "Parameter 'localization_device' using value:" << m_localization_device;
        }
        else
        {
            yCInfo(FakeLaserWithMotorParamsCOMPONENT) << "Parameter 'localization_device' using DEFAULT value:" << m_localization_device;
        }
        prop_check.unput("localization_device");
    }

    //Parser of parameter MAP_MODE::map_file
    {
        yarp::os::Bottle sectionp;
        sectionp = config.findGroup("MAP_MODE");
        if (sectionp.check("map_file"))
        {
            m_MAP_MODE_map_file = sectionp.find("map_file").asString();
            yCInfo(FakeLaserWithMotorParamsCOMPONENT) << "Parameter 'MAP_MODE::map_file' using value:" << m_MAP_MODE_map_file;
        }
        else
        {
            yCInfo(FakeLaserWithMotorParamsCOMPONENT) << "Parameter 'MAP_MODE::map_file' using DEFAULT value:" << m_MAP_MODE_map_file;
        }
        prop_check.unput("MAP_MODE::map_file");
    }

    //Parser of parameter MAP_MODE::map_context
    {
        yarp::os::Bottle sectionp;
        sectionp = config.findGroup("MAP_MODE");
        if (sectionp.check("map_context"))
        {
            m_MAP_MODE_map_context = sectionp.find("map_context").asString();
            yCInfo(FakeLaserWithMotorParamsCOMPONENT) << "Parameter 'MAP_MODE::map_context' using value:" << m_MAP_MODE_map_context;
        }
        else
        {
            yCInfo(FakeLaserWithMotorParamsCOMPONENT) << "Parameter 'MAP_MODE::map_context' using DEFAULT value:" << m_MAP_MODE_map_context;
        }
        prop_check.unput("MAP_MODE::map_context");
    }

    //Parser of parameter clip_max
    {
        if (config.check("clip_max"))
        {
            m_clip_max = config.find("clip_max").asFloat64();
            yCInfo(FakeLaserWithMotorParamsCOMPONENT) << "Parameter 'clip_max' using value:" << m_clip_max;
        }
        else
        {
            yCInfo(FakeLaserWithMotorParamsCOMPONENT) << "Parameter 'clip_max' using DEFAULT value:" << m_clip_max;
        }
        prop_check.unput("clip_max");
    }

    //Parser of parameter clip_min
    {
        if (config.check("clip_min"))
        {
            m_clip_min = config.find("clip_min").asFloat64();
            yCInfo(FakeLaserWithMotorParamsCOMPONENT) << "Parameter 'clip_min' using value:" << m_clip_min;
        }
        else
        {
            yCInfo(FakeLaserWithMotorParamsCOMPONENT) << "Parameter 'clip_min' using DEFAULT value:" << m_clip_min;
        }
        prop_check.unput("clip_min");
    }

    //Parser of parameter GENERAL::period
    {
        yarp::os::Bottle sectionp;
        sectionp = config.findGroup("GENERAL");
        if (sectionp.check("period"))
        {
            m_GENERAL_period = sectionp.find("period").asFloat64();
            yCInfo(FakeLaserWithMotorParamsCOMPONENT) << "Parameter 'GENERAL::period' using value:" << m_GENERAL_period;
        }
        else
        {
            yCInfo(FakeLaserWithMotorParamsCOMPONENT) << "Parameter 'GENERAL::period' using DEFAULT value:" << m_GENERAL_period;
        }
        prop_check.unput("GENERAL::period");
    }

    //Parser of parameter CONSTANT_MODE::const_distance
    {
        yarp::os::Bottle sectionp;
        sectionp = config.findGroup("CONSTANT_MODE");
        if (sectionp.check("const_distance"))
        {
            m_CONSTANT_MODE_const_distance = sectionp.find("const_distance").asFloat64();
            yCInfo(FakeLaserWithMotorParamsCOMPONENT) << "Parameter 'CONSTANT_MODE::const_distance' using value:" << m_CONSTANT_MODE_const_distance;
        }
        else
        {
            yCInfo(FakeLaserWithMotorParamsCOMPONENT) << "Parameter 'CONSTANT_MODE::const_distance' using DEFAULT value:" << m_CONSTANT_MODE_const_distance;
        }
        prop_check.unput("CONSTANT_MODE::const_distance");
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
                yCError(FakeLaserWithMotorParamsCOMPONENT) << "User asking for parameter: "<<it->name <<" which is unknown to this parser!";
                extra_params_found = true;
            }
            else
            {
                yCWarning(FakeLaserWithMotorParamsCOMPONENT) << "User asking for parameter: "<< it->name <<" which is unknown to this parser!";
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


std::string      FakeLaserWithMotor_ParamsParser::getDocumentationOfDeviceParams() const
{
    std::string doc;
    doc = doc + std::string("\n=============================================\n");
    doc = doc + std::string("This is the help for device: FakeLaserWithMotor\n");
    doc = doc + std::string("\n");
    doc = doc + std::string("This is the list of the parameters accepted by the device:\n");
    doc = doc + std::string("'test': Choose the modality\n");
    doc = doc + std::string("'localization_port': Full name of the port to which device connects to receive the localization data\n");
    doc = doc + std::string("'localization_server': Full name of the port to which device connects to receive the localization data\n");
    doc = doc + std::string("'localization_client': Full name of the local transformClient opened by the device\n");
    doc = doc + std::string("'localization_device': Type of localization device, e.g. localization2DClient, localization2D_nwc_yarp\n");
    doc = doc + std::string("'MAP_MODE::map_file': Full path to a .map file\n");
    doc = doc + std::string("'MAP_MODE::map_context': Full path to a .map file\n");
    doc = doc + std::string("'clip_max': Maximum detectable distance for an obstacle\n");
    doc = doc + std::string("'clip_min': Minimum detectable distance for an obstacle\n");
    doc = doc + std::string("'GENERAL::period': Thread period\n");
    doc = doc + std::string("'CONSTANT_MODE::const_distance': Default const distance for mode use_constant\n");
    doc = doc + std::string("\n");
    doc = doc + std::string("Here are some examples of invocation command with yarpdev, with all params:\n");
    doc = doc + " yarpdev --device fakeLaserWithMotor --test use_pattern --localization_port /fakeLaser/location:i --localization_server /localizationServer --localization_client /fakeLaser/localizationClient --localization_device localization2DClient --MAP_MODE::map_file <optional_value> --MAP_MODE::map_context <optional_value> --clip_max 3.5 --clip_min 0.1 --GENERAL::period 0.02 --CONSTANT_MODE::const_distance 1\n";
    doc = doc + std::string("Using only mandatory params:\n");
    doc = doc + " yarpdev --device fakeLaserWithMotor --test use_pattern\n";
    doc = doc + std::string("=============================================\n\n");    return doc;
}