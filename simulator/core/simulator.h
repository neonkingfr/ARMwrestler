/* Mulator - An extensible {e,si}mulator
 * Copyright 2011-2020 Pat Pannuto <pat.pannuto@gmail.com>
 *
 * Licensed under either of the Apache License, Version 2.0
 * or the MIT license, at your option.
 */

#ifndef SIMULATOR_H
#define SIMULATOR_H

#include "common.h"

#ifndef PP_STRING
#define PP_STRING "---"
#include "pretty_print.h"
#endif

/////////////////////////////
// SIMULATOR CONFIGURATION //
/////////////////////////////

#include MEMMAP_HEADER

/////////////////
// ERROR CODES //
/////////////////

#define E_BAD_FLASH	10
#define E_READONLY	11
#define E_WRITEONLY	12

//////////////////////
// EXPORTED SYMBOLS //
//////////////////////

// The simulator core
void simulator(const char* flash_file);
void sim_terminate(bool should_exit);
bool state_handle_exceptions(void);

// Simulator config
extern int gdb_port;
extern struct timespec cycle_time;
extern int printcycles;
#ifdef HAVE_DECOMPILE
extern int decompile_flag;
#endif
#ifdef HAVE_MEMTRACE
extern int memtrace_flag;
#endif
extern unsigned dumpatpc;
extern int dumpatcycle;
extern int dumpallcycles;
extern int limitcycles;
extern int returnr0;
extern int usetestflash;

// Simulator state
extern int cycle;
#ifdef HAVE_REPLAY
bool simulator_state_seek(int target);
#endif
void sim_sleep(void);
void sim_wakeup(void);

// XXX: Oh.. so hacky. Thrown in as stopgap while removing unnecessary
// references to simulator.h
#ifdef STAGE
// Head of the registered opcodes list
extern struct op *ops;
void state_write_op(struct op **loc, struct op *val) __attribute__ ((nonnull (1)));
#endif

#endif // SIMULATOR_H
