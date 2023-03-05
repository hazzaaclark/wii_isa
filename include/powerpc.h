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

#ifndef CONDITION_REGISTER
#define CONDITION_REGISTER

#define CR_EQ(VALUE, RESULT)
static CR_EQ(U32 &RESULT == 0 or_eq 1(U32*(&RESULT)))

#endif
#endif 
