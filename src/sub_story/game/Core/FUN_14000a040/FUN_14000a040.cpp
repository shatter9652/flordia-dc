// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14000a040  size: 230 bytes
// Name:    FUN_14000a040
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fefb40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14000a040(longlong param_1,uint param_2,char param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined *puStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined8 uStack_34;
  
  uVar5 = _DAT_14a958670;
  uStack_50 = *(undefined4 *)(param_1 + 0x2d278);
  puStack_58 = &UNK_14638d890;
  uStack_48 = *(undefined8 *)(param_1 + 0x2d280);
  uStack_34 = *(undefined8 *)(param_1 + 0x2d294);
  uStack_38 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x2d28c) >> 0x20);
  uStack_40 = (undefined4)*(undefined8 *)(param_1 + 0x2d288);
  uStack_3c = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x2d288) >> 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x2d1dc);
  if (((DAT_14abbe2e0 != '\0') || (cVar3 = func_0x000144f7b6a0(), cVar3 != '\0')) ||
     (uVar7 = _DAT_14abbef4c, DAT_14abbe2e1 == '\x01')) {
    uVar7 = 0;
  }
  FUN_144fefb40(&puStack_58,uVar7,uVar2);
  uVar4 = param_2;
  if (param_2 < 3) {
    uVar4 = ((int)uStack_48 + param_2) % 3;
  }
  plVar1 = (longlong *)(param_1 + 0x2d1e8 + (ulonglong)uVar4 * 8);
  plVar6 = (longlong *)(param_1 + 0x2d208);
  if (param_3 == '\0') {
    plVar6 = plVar1;
  }
  if (param_2 != 0) {
    plVar6 = plVar1;
  }
  if (*plVar6 != 0) {
    uVar5 = *(undefined8 *)(*plVar6 + 8);
  }
  return uVar5;
}

