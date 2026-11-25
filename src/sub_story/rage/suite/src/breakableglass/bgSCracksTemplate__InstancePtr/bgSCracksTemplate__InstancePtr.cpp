// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 144b97f30  size: 71 bytes
// Name:    bgSCracksTemplate::InstancePtr
// Subsystem: core
// Class:   bgSCracksTemplate
//
// Evidence:
//   GTAVSRC: bgSCracksTemplate::InstancePtr  (rage/suite/src/breakableglass/crackstemplate.cpp)
//   literal: bgSCracksTemplate not instantiated!
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/bgSCracksTemplate.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 bgSCracksTemplate__InstancePtr(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  
  *param_1 = 0;
  lVar1 = _DAT_14a95dd88;
  if (_DAT_14a95dd88 == 0) {
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = &UNK_14678a1d5;
    }
  }
  else {
    cVar2 = func_0x000144b97f80(_DAT_14a95dd88);
    if (cVar2 != '\0') {
      *param_1 = lVar1;
      return 1;
    }
  }
  return 0;
}

