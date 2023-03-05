/* Copyright (C) 2023 Harry Clark */

/* Nintendo WII ISA */

/* THIS FILE IS ABOUT COMMON DATA TYPES USED THROUGHOUT THE PROJECT */
/* CREATING TYPE DEFINED METHODS TO INSTANTIATE RAW POINTERS FOR MY */
/* METHODS, FUNCTIONS, ETC */

#ifndef COMMON
#define COMMON

#include <stdint.h>
#include <stdio.h>

#ifndef UNSIGNED_TYPES
#define UNSIGNED_TYPES

typedef uint8_t U8;
typedef uint16_t U16;
typedef uint32_t U32;
typedef uint64_t U64;

#endif 

#ifndef SIGNED_TYPES
#define SIGNED_TYPES

typedef int8_t S8;
typedef int16_t S16;
typedef int32_t S32;
typedef int64_t S64;

#endif 

#ifndef UNKNOWN_TYPES
#define UNKNOWN_TYPES

typedef unsigned char UNK_8;
typedef unsigned short UNK_16;
typedef unsigned int UNK_32;
typedef unsigned long UNK_64;
typedef unsigned long UNK_;

#endif

#ifndef FLOATING_POINT
#define FLOATING_POINT 

typedef float F32;
typedef double F64;
typedef volatile F32 VF32;
typedef volatile F64 VF64;

#endif

/* DECOMP OF ASSEMBLY TYPES */
/* THESE ARE STAITCALLY DECLARED OBJECTS */
/* THAT DETERMINE THE INDEXING MODES OF THE INSTRUCTION */

#ifndef CPU_TYPES
#define CPU_TYPES

#define INSTRUCTION_ALIGN_UP(POINT_A, POINT_B)((UNK_*(POINT_A + UNK_*(POINT_B))
#define INSTRUCTION_ALIGN_DOWN(POINT_A, POINT_B)((UNK_*(POINT_A + UNK_*(POINT_B) -1))
#define INSTRUCTION_ALIGNED(POINT_A) __declspec(aligned(POINT_A))
#define BIT_SIZE(X)(sizeof(X))

#endif

#endif
