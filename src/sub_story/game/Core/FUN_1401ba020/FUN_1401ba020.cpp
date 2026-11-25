// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401ba020  size: 190 bytes
// Name:    FUN_1401ba020
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14039a010, FUN_1401ba120, FUN_1401ba1b0, FUN_1401ba0e0, FUN_14436fab0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_1401ba020(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined1 uStack_41;
  undefined4 uStack_40;
  undefined4 uStack_38;
  uint uStack_34;
  undefined1 auStack_30 [32];
  
  uStack_40 = 0x275822c4;
  FUN_1401ba120(*(undefined8 *)(*param_2 + 0x20));
  FUN_14039a010(auStack_30,*(undefined8 *)(*param_2 + 0x230),*(undefined8 *)(param_2[2] + 0x2a0));
  uVar1 = FUN_1401ba1b0(*(undefined8 *)(*param_2 + 0x20),&uStack_34);
  if (uStack_34 < 2) {
    uVar1 = FUN_1401ba0e0(auStack_30,&uStack_41,param_1,uStack_40,uStack_38);
  }
  else {
    if (uStack_34 == 0xffffffff) {
      uVar2 = 0;
      goto LAB_1401ba0a1;
    }
    uVar2 = CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
    if (uStack_34 != 2) goto LAB_1401ba0a1;
    uVar1 = FUN_14436fab0(auStack_30,&uStack_41,param_1,uStack_40,uStack_38);
  }
  uVar2 = CONCAT71((int7)((ulonglong)uVar1 >> 8),uStack_41);
LAB_1401ba0a1:
  return uVar2 & 0xffffffffffffff01;
}

