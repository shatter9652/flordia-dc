// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 145df2a80  size: 66 bytes
// Name:    netHttpRequest::MakeDateString
// Subsystem: core
// Class:   netHttpRequest
//
// Evidence:
//   GTAVSRC: netHttpRequest::MakeDateString  (rage/base/src/net/http.cpp)
//   literal: %a, %d %b %Y %H:%M:%S GMT
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141a32620
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/netHttpRequest.h"


undefined1 * netHttpRequest__MakeDateString(undefined8 param_1,undefined1 *param_2)

{
  long lVar1;
  undefined4 extraout_var;
  void *in_stack_ffffffffffffffc8;
  void *in_stack_ffffffffffffffd0;
  void *in_stack_ffffffffffffffd8;
  void *in_stack_ffffffffffffffe0;
  
  FUN_141a32620(param_1,&stack0xffffffffffffffcc);
  lVar1 = strftime(param_2,(void *)0xff,&UNK_1467868e4,&stack0xffffffffffffffcc,
                   in_stack_ffffffffffffffc8,in_stack_ffffffffffffffd0,in_stack_ffffffffffffffd8,
                   in_stack_ffffffffffffffe0);
  if (CONCAT44(extraout_var,lVar1) == 0) {
    *param_2 = 0;
  }
  return param_2;
}

