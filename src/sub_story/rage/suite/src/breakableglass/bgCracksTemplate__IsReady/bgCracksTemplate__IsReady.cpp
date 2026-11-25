// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 144ba5130  size: 79 bytes
// Name:    bgCracksTemplate::IsReady
// Subsystem: core
// Class:   bgCracksTemplate
//
// Evidence:
//   GTAVSRC: bgCracksTemplate::IsReady  (rage/suite/src/breakableglass/crackstemplate.cpp)
//   literal: Crack types failed to load
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/bgCracksTemplate.h"


undefined8 bgCracksTemplate__IsReady(longlong param_1,undefined8 *param_2)

{
  ushort uVar1;
  char cVar2;
  longlong lVar3;
  
  cVar2 = func_0x000144b97f80();
  if (cVar2 != '\0') {
    uVar1 = *(ushort *)(param_1 + 0x88);
    lVar3 = func_0x00014073b020(param_1);
    if ((uint)*(ushort *)(param_1 + 8) * (uint)*(ushort *)(lVar3 + 8) == (uint)uVar1) {
      return CONCAT71((uint7)(byte)(*(ushort *)(lVar3 + 8) >> 8),1);
    }
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = &UNK_146784bff;
    }
  }
  return 0;
}

