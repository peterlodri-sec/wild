//#Object:runtime.c
//#ExpectSym:_main
//#TestUpdateInPlace:true
//#TestIncremental:true
//#DiffIgnore:section.__unwind_info

#include "../common/runtime.h"

void main(void) { exit_syscall(42); }
