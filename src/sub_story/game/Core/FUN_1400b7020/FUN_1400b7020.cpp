// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b7020  size: 169 bytes
// Name:    FUN_1400b7020
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400b82d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_1400b7020(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined8 unaff_RBP;
  ulonglong uVar4;
  undefined8 unaff_R14;
  ulonglong uVar5;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),3);
  uVar2 = *(ushort *)((longlong)param_1 + 0x96) & 0xf;
  if (uVar2 == 1) {
    uVar5 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1);
    cVar1 = FUN_1400b82d0(1,param_1);
    if (cVar1 == '\0') goto LAB_1400b70bc;
    puVar3 = &UNK_146781fd5;
  }
  else {
    if (((*(ushort *)((longlong)param_1 + 0x96) & 0xf) != 0) && (uVar2 != 5)) goto LAB_1400b70bc;
    uVar5 = 0;
    cVar1 = FUN_1400b82d0(0,param_1);
    if (cVar1 == '\0') goto LAB_1400b70bc;
    puVar3 = &UNK_146781fe1;
  }
  *param_2 = puVar3;
  (**(code **)(*param_1 + 0x208))(param_1,auStack_48);
  func_0x000140ac04e0(&uStack_38);
  uVar4 = uVar5 & 0xffffffff;
  *param_3 = uStack_38;
  param_3[1] = uStack_30;
LAB_1400b70bc:
  return uVar4 & 0xffffffff;
}

