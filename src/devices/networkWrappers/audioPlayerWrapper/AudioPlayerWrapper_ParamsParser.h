/*
 * SPDX-FileCopyrightText: 2023-2023 Istituto Italiano di Tecnologia (IIT)
 * SPDX-License-Identifier: LGPL-2.1-or-later
 */


// Generated by yarpDeviceParamParserGenerator (1.0)
// This is an automatically generated file. Please do not edit it.
// It will be re-generated if the cmake flag ALLOW_DEVICE_PARAM_PARSER_GERNERATION is ON.

// Generated on: Thu Mar  7 17:59:43 2024


#ifndef AUDIOPLAYERWRAPPER_PARAMSPARSER_H
#define AUDIOPLAYERWRAPPER_PARAMSPARSER_H

#include <yarp/os/Searchable.h>
#include <yarp/dev/IDeviceDriverParams.h>
#include <string>
#include <cmath>

/**
* This class is the parameters parser for class AudioPlayerWrapper.
*
* These are the used parameters:
* | Group name | Parameter name               | Type   | Units | Default Value       | Required | Description                                                                                                                       | Notes                                                  |
* |:----------:|:----------------------------:|:------:|:-----:|:-------------------:|:--------:|:---------------------------------------------------------------------------------------------------------------------------------:|:------------------------------------------------------:|
* | -          | name                         | string | -     | /audioPlayerWrapper | 0        | prefix of the ports opened by the device                                                                                          | xxx/audio:i, xxx/rpc:i, xxx/status:o, ports are opened |
* | -          | period                       | float  | s     | 0.02                | 0        | period of the internal thread, in s                                                                                               | -                                                      |
* | -          | debug                        | bool   | -     | false               | 0        | developers use only                                                                                                               | -                                                      |
* | -          | playback_network_buffer_size | double | s     | 5.0                 | 0        | size of the audio buffer in seconds, increasing this value to robustify the real-time audio stream (it will increase latency too) | Audio playback will start when the buffer is full      |
* | -          | start                        | bool   | -     | false               | 0        | automatically activates the playback when the device is started                                                                   | if false, the playback is enabled via rpc port         |
*
* The device can be launched by yarpdev using one of the following examples (with and without all optional parameters):
* \code{.unparsed}
* yarpdev --device AudioPlayerWrapper --name /audioPlayerWrapper --period 0.02 --debug false --playback_network_buffer_size 5.0 --start false
* \endcode
*
* \code{.unparsed}
* yarpdev --device AudioPlayerWrapper
* \endcode
*
*/

class AudioPlayerWrapper_ParamsParser : public yarp::dev::IDeviceDriverParams
{
public:
    AudioPlayerWrapper_ParamsParser();
    ~AudioPlayerWrapper_ParamsParser() override = default;

public:
    const std::string m_device_classname = {"AudioPlayerWrapper"};
    const std::string m_device_name = {"AudioPlayerWrapper"};
    bool m_parser_is_strict = false;
    struct parser_version_type
    {
         int major = 1;
         int minor = 0;
    };
    const parser_version_type m_parser_version = {};

    const std::string m_name_defaultValue = {"/audioPlayerWrapper"};
    const std::string m_period_defaultValue = {"0.02"};
    const std::string m_debug_defaultValue = {"false"};
    const std::string m_playback_network_buffer_size_defaultValue = {"5.0"};
    const std::string m_start_defaultValue = {"false"};

    std::string m_name = {"/audioPlayerWrapper"};
    float m_period = {0.02};
    bool m_debug = {false};
    double m_playback_network_buffer_size = {5.0};
    bool m_start = {false};

    bool          parseParams(const yarp::os::Searchable & config) override;
    std::string   getDeviceClassName() const override { return m_device_classname; }
    std::string   getDeviceName() const override { return m_device_name; }
    std::string   getDocumentationOfDeviceParams() const override;
    std::vector<std::string> getListOfParams() const override;
};

#endif