/* Copyright (C) 2023 Harry Clark */

/* Nintendo WII ISA */

/* THIS FILE IS ALL ABOUT THE CPU AND IT'S FUNCTIONALITY */

#ifndef POWER_PC
#define POWER_PC

/* SYSTEM INCLUDES */

#include <stdio.h>
#include <iosfwd>

/* NESTED INCLUDES */

#include "common.h"

#ifndef CONDITION_REGISTER
#define CONDITION_REGISTER

#define CR_EQ(VALUE, RESULT)
static CR_EQ(U32 &RESULT == 0 or_eq 1(U32*(&RESULT)))

#define CR_SO()

#endif

#endif 
