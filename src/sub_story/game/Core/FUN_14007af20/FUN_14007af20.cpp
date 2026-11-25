// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14007af20  size: 60 bytes
// Name:    FUN_14007af20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144dd3330
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


uint * FUN_14007af20(undefined4 param_1)

{
  code *pcVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  uint *puVar5;
  undefined4 uStack_1c;
  
  lVar4 = func_0x000144ddb100(4);
  FUN_144dd3330(param_1,&uStack_1c);
  puVar5 = (uint *)func_0x000144dd3390(lVar4,uStack_1c);
  if (puVar5 != (uint *)0x0) {
    uVar2 = *puVar5 & 0xff;
    if (*(char *)(lVar4 + 0xd4) != '\0') {
      uVar2 = *puVar5;
    }
    pcVar1 = *(code **)(lVar4 + 0x38);
    if (pcVar1 == FUN_144dd3480) {
      cVar3 = FUN_144dd3480(uVar2,3);
    }
    else if (pcVar1 == FUN_144dd36f0) {
      cVar3 = FUN_144dd36f0(uVar2,3);
    }
    else if (pcVar1 == FUN_144dd36a0) {
      cVar3 = FUN_144dd36a0(uVar2,3);
    }
    else {
      cVar3 = (*pcVar1)(uVar2,3);
    }
    if (cVar3 != '\0') {
      return puVar5;
    }
  }
  return (uint *)0x0;
}

