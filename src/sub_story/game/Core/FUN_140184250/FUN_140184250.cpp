// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140184250  size: 325 bytes
// Name:    FUN_140184250
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140183190
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_140184250(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             longlong param_5,undefined2 param_6)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 *puVar3;
  ushort uVar4;
  undefined1 auVar5 [16];
  
  puVar3 = *(undefined8 **)(param_5 + 0x28);
  if (puVar3 != (undefined8 *)0x0) goto LAB_14018433c;
  uVar1 = *(ushort *)(param_1 + 10);
  if (param_3 == 0) {
    uVar2 = 4;
LAB_14018429f:
    uVar4 = uVar1 & 0xc;
    if ((uVar1 & 0xc) == 0) {
      uVar4 = uVar2;
    }
  }
  else {
    uVar2 = *(ushort *)(param_3 + 0x4a) & 0xc;
    if (uVar2 != 0xc) goto LAB_14018429f;
    uVar4 = 0xc;
  }
  puVar3 = (undefined8 *)(**(code **)(*_DAT_14abcc310 + 0x70))(_DAT_14abcc310,param_3,0xa0);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)(param_5 + 0x28) = 0;
    return (undefined8 *)0x0;
  }
  uVar4 = uVar4 | uVar1 & 1;
  uVar2 = uVar4 + 0x60;
  if ((uVar1 & 0x20) == 0) {
    uVar2 = uVar4;
  }
  func_0x000140182d50(puVar3,param_5,uVar1 & 0x200 | uVar2);
  auVar5._0_12_ = ZEXT812(0);
  auVar5._12_4_ = 0;
  *puVar3 = &UNK_146632810;
  puVar3[0xe] = puVar3 + 0xc;
  puVar3[0xf] = puVar3 + 0xc;
  *(undefined1 (*) [16])(puVar3 + 0x10) = auVar5;
  *(undefined4 *)(puVar3 + 0x12) = 0x80000000;
  *(undefined8 **)(param_5 + 0x28) = puVar3;
LAB_14018433c:
  FUN_140183190(puVar3,param_2,param_3,param_4,param_1,param_6);
  return puVar3;
}

