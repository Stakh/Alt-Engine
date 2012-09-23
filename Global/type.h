#ifndef TYPE_H
#define TYPE_H

#include <stdint.h>

#include "system.h"

// Basic type(s)

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

// Logic type(s)

typedef char   boolean;
#define true  1
#define false 0

// Compound type(s)

typedef struct
{
    u32 x;
    u32 y;
} Coordinate2;

typedef struct
{
    real x;
    real y;
} Vector2;

typedef struct
{
    u32 x;
    u32 y;
    u32 z;
} Coordinate3;

typedef struct
{
    real x;
    real y;
    real z;
} Vector3;

#endif // TYPE_H
