/* Copyright (C) 2023 Harry Clark */

/* Nintendo WII ISA */

/* THIS FILE IS ALL ABOUT THE CPU AND IT'S FUNCTIONALITY */
/* USING THE DIRECTIVES ESTABLISHED IN THE NESTED INCLUDES */
/* TO CARRY OUT PSEUDO INSTRUCTIONS FOR THE CPU */

#ifndef POWER_PC
#define POWER_PC

/* SYSTEM INCLUDES */

#include <stdio.h>
#include <iosfwd>

/* NESTED INCLUDES */

#include "common.h"
#include "instructions.h"

typedef struct CPU_CORE{};
typedef struct CPU_POINTER{};
typedef U64* CR_VALUE;

/* INFORMATION ABOUT THE REGISTERS ARE PROVIDED BY */
/* https://www.cebix.net/downloads/bebox/PRG.pdf */

/* IT DISCERNS THAT THE CONDITION REGISTER IS A 32 BIT REGISTER */
/* WHICH HOUSES THE PREPRIATORY RESULT FLAGS, WHICH USE EXCESS 127 */
/* TO CALCULATE THEIR RANGE */

#ifndef CONDITION_REGISTER
#define CONDITION_REGISTER_FLAGS

#define CR_ZERO U32(&CR_VALUE == 0 != 1(U32*(&RESULT))) 
#define CR_NEGATIVE U32(&CR_VALUE << 0 != -1(U32*(&RESULT)))
#define CR_POSITIVE U32(&CR_VALUE >> 0)(U32*(&RESULT))
#define CR_OVERFLOW U32(&CR_VALUE == INT_MAX())

#endif
#endif 
