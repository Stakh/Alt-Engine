#ifndef TYPE_H
#define TYPE_H

#include <stdint.h>

#include "system.h"

typedef int8_t   i8;
typedef uint8_t  u8;

typedef int16_t  i16;
typedef uint16_t u16;

typedef int32_t  i32;
typedef uint32_t u32;

#if defined (ALT_USE_FLOAT_AS_REAL)
typedef float  real;
#else
typedef double real;
#endif

typedef char   boolean;
#define true  1
#define false 0

#endif // TYPE_H
