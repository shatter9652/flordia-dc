// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f7d20  size: 112 bytes
// Name:    FUN_1400f7d20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400f7d20(longlong *param_1,undefined1 (*param_2) [16],undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [64];
  undefined1 aauStack_48 [2] [16];
  
  uVar1 = param_3[1];
  *(undefined8 *)*param_2 = *param_3;
  *(undefined8 *)(*param_2 + 8) = uVar1;
  auVar4 = *param_2;
  if ((short)param_1[1] != 0) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      auVar5 = ZEXT1664(auVar4);
      func_0x000144f902b0(*param_1 + lVar2,aauStack_48);
      auVar4 = vmaxps_avx(auVar5._0_16_,aauStack_48[0]);
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x30;
    } while (uVar3 < *(ushort *)(param_1 + 1));
  }
  *param_2 = auVar4;
  return;
}

