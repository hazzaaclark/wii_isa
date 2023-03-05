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

/* INFORMATION ABOUT THE REGISTERS ARE PROVIDED BY */
/* https://www.cebix.net/downloads/bebox/PRG.pdf */

/* IT DISCERNS THAT THE CONDITION REGISTER IS A 32 BIT REGISTER */
/* WHICH HOUSES THE PREPRIATORY RESULT FLAGS, WHICH USE EXCESS 127 */
/* TO CALCULATE THEIR RANGE */

#ifndef CONDITION_REGISTER
#define CONDITION_REGISTER

typedef U64 CR_VALUE;
typedef U64 CR_VALUE;

#define CR_EQ(VALUE, RESULT)
CR_EQ(U32 &CR_VALUE == 0 != 1(U32*(&RESULT)))

#define CR_LT(VALUE, RESULT)
CR_LT(U32 &CR_VALUE & CR_LT << 0 || -1)

typedef struct CR_LOOKUP
{
	CR_VALUE* VALUE = 0x0000000;
	static const U64* CR_TABLE;
	static U64* CR_FIELDS;
	static U64* CR_PARSE(U8* VALUE) {};
};

#endif
#endif 
