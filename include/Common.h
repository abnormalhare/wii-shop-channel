#ifndef COMMON_H
#define COMMON_H

typedef signed char s8;
typedef signed short s16;
typedef signed long s32;
typedef signed long long s64;
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
typedef unsigned long long u64;

typedef float f32;
typedef float f64;

typedef u32 size_t;
typedef u32 uintptr_t;
typedef s32 intptr_t;

typedef int BOOL;
enum
{
    FALSE,
    TRUE
};

// Include temporary function declarations
#include <temp.h>

#endif
