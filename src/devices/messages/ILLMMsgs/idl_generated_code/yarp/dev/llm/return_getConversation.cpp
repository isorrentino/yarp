/*
 * SPDX-FileCopyrightText: 2006-2021 Istituto Italiano di Tecnologia (IIT)
 * SPDX-License-Identifier: BSD-3-Clause
 */

// Autogenerated by Thrift Compiler (0.14.1-yarped)
//
// This is an automatically generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#include <yarp/dev/llm/return_getConversation.h>

namespace yarp::dev::llm {

// Constructor with field values
return_getConversation::return_getConversation(const bool ret,
                                               const std::vector<yarp::dev::LLM_Message>& conversation) :
        WirePortable(),
        ret(ret),
        conversation(conversation)
{
}

// Read structure on a Wire
bool return_getConversation::read(yarp::os::idl::WireReader& reader)
{
    if (!read_ret(reader)) {
        return false;
    }
    if (!read_conversation(reader)) {
        return false;
    }
    if (reader.isError()) {
        return false;
    }
    return true;
}

// Read structure on a Connection
bool return_getConversation::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListHeader(2)) {
        return false;
    }
    if (!read(reader)) {
        return false;
    }
    return true;
}

// Write structure on a Wire
bool return_getConversation::write(const yarp::os::idl::WireWriter& writer) const
{
    if (!write_ret(writer)) {
        return false;
    }
    if (!write_conversation(writer)) {
        return false;
    }
    if (writer.isError()) {
        return false;
    }
    return true;
}

// Write structure on a Connection
bool return_getConversation::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(2)) {
        return false;
    }
    if (!write(writer)) {
        return false;
    }
    return true;
}

// Convert to a printable string
std::string return_getConversation::toString() const
{
    yarp::os::Bottle b;
    if (!yarp::os::Portable::copyPortable(*this, b)) {
        return {};
    }
    return b.toString();
}

// read ret field
bool return_getConversation::read_ret(yarp::os::idl::WireReader& reader)
{
    if (!reader.readBool(ret)) {
        ret = false;
    }
    return true;
}

// write ret field
bool return_getConversation::write_ret(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeBool(ret)) {
        return false;
    }
    return true;
}

// read (nested) ret field
bool return_getConversation::nested_read_ret(yarp::os::idl::WireReader& reader)
{
    if (!reader.readBool(ret)) {
        ret = false;
    }
    return true;
}

// write (nested) ret field
bool return_getConversation::nested_write_ret(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeBool(ret)) {
        return false;
    }
    return true;
}

// read conversation field
bool return_getConversation::read_conversation(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    size_t _csize;
    yarp::os::idl::WireState _etype;
    reader.readListBegin(_etype, _csize);
    // WireReader removes BOTTLE_TAG_LIST from the tag
    constexpr int expected_tag = ((BOTTLE_TAG_LIST) & (~BOTTLE_TAG_LIST));
    if constexpr (expected_tag != 0) {
        if (_csize != 0 && _etype.code != expected_tag) {
            return false;
        }
    }
    conversation.resize(_csize);
    for (size_t _i = 0; _i < _csize; ++_i) {
        if (reader.noMore()) {
            reader.fail();
            return false;
        }
        if (!reader.readNested(conversation[_i])) {
            reader.fail();
            return false;
        }
    }
    reader.readListEnd();
    return true;
}

// write conversation field
bool return_getConversation::write_conversation(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeListBegin(BOTTLE_TAG_LIST, conversation.size())) {
        return false;
    }
    for (const auto& _item : conversation) {
        if (!writer.writeNested(_item)) {
            return false;
        }
    }
    if (!writer.writeListEnd()) {
        return false;
    }
    return true;
}

// read (nested) conversation field
bool return_getConversation::nested_read_conversation(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    size_t _csize;
    yarp::os::idl::WireState _etype;
    reader.readListBegin(_etype, _csize);
    // WireReader removes BOTTLE_TAG_LIST from the tag
    constexpr int expected_tag = ((BOTTLE_TAG_LIST) & (~BOTTLE_TAG_LIST));
    if constexpr (expected_tag != 0) {
        if (_csize != 0 && _etype.code != expected_tag) {
            return false;
        }
    }
    conversation.resize(_csize);
    for (size_t _i = 0; _i < _csize; ++_i) {
        if (reader.noMore()) {
            reader.fail();
            return false;
        }
        if (!reader.readNested(conversation[_i])) {
            reader.fail();
            return false;
        }
    }
    reader.readListEnd();
    return true;
}

// write (nested) conversation field
bool return_getConversation::nested_write_conversation(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeListBegin(BOTTLE_TAG_LIST, conversation.size())) {
        return false;
    }
    for (const auto& _item : conversation) {
        if (!writer.writeNested(_item)) {
            return false;
        }
    }
    if (!writer.writeListEnd()) {
        return false;
    }
    return true;
}

} // namespace yarp::dev::llm