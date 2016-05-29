#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>


#include "codegen/il2cpp-codegen.h"


// Methods for marshaling
struct InternalMsg_t3882040164;
struct InternalMsg_t3882040164_marshaled;

extern "C" void InternalMsg_t3882040164_marshal(const InternalMsg_t3882040164& unmarshaled, InternalMsg_t3882040164_marshaled& marshaled);
extern "C" void InternalMsg_t3882040164_marshal_back(const InternalMsg_t3882040164_marshaled& marshaled, InternalMsg_t3882040164& unmarshaled);
extern "C" void InternalMsg_t3882040164_marshal_cleanup(InternalMsg_t3882040164_marshaled& marshaled);
