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
struct RenderBuffer_t1942909411;
struct RenderBuffer_t1942909411_marshaled;

extern "C" void RenderBuffer_t1942909411_marshal(const RenderBuffer_t1942909411& unmarshaled, RenderBuffer_t1942909411_marshaled& marshaled);
extern "C" void RenderBuffer_t1942909411_marshal_back(const RenderBuffer_t1942909411_marshaled& marshaled, RenderBuffer_t1942909411& unmarshaled);
extern "C" void RenderBuffer_t1942909411_marshal_cleanup(RenderBuffer_t1942909411_marshaled& marshaled);
