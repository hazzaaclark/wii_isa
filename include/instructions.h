/* Copyright (C) 2023 Harry Clark */

/* Nintendo WII ISA */

/* THIS FILE IS ABOUT COMMON DATA TYPES USED THROUGHOUT THE PROJECT */
/* CREATING TYPE DEFINED METHODS TO INSTANTIATE RAW POINTERS FOR MY */
/* METHODS, FUNCTIONS, ETC */

#ifndef INSTRUCTIONS
#define INSTRUCTIONS

#include "common.h"
#include <stdint.h>
#include <stdio.h>

/* DECOMP OF ASSEMBLY TYPES */
/* THESE ARE STAITCALLY DECLARED OBJECTS */
/* THAT DETERMINE THE INDEXING MODES OF THE INSTRUCTION */

#ifndef INSTRUCTION_TYPES
#define INSTRUCTION_TYPES

#define INSTRUCTION_ALIGN_UP(POINT_A, POINT_B)((UNK_(POINT_A + UNK_*(POINT_B))
#define INSTRUCTION_ALIGN_DOWN(POINT_A, POINT_B)((UNK_*(POINT_A + UNK_*(POINT_B) -1))
#define INSTRUCTION_ALIGNED(POINT_A) __declspec(aligned(POINT_A))
#define BIT_SIZE(X)(sizeof(X))

#endif

#ifndef SUBROUTINES
#define SUBROUTINES

#define ARGS(...)(__VA_ARGS__)
#define NUM_ARGS(N)(UNK_*(&N))

#endif

#ifndef REGISTER_FUNCTIONS
#define REGISTER_FUNCTIONS

typedef void(*UPDATE_CR0(void));
typedef void(*SET_SEGMENT_REGISTER(void));
typedef void(*SET_CARRY_FLAG(void));

#endif
#endif
