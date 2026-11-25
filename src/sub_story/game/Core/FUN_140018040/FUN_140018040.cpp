// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140018040  size: 209 bytes
// Name:    FUN_140018040
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ddb760, FUN_144fb8c70, FUN_144ddb6f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140018040(longlong param_1)

{
  undefined8 uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  
  FUN_144fb8c70(param_1,&iStack_3c,&iStack_40,auStack_4c,&iStack_44,auStack_48);
  iVar3 = FUN_144ddb760(param_1);
  uVar2 = *(ushort *)(param_1 + 0x8c);
  iVar4 = FUN_144ddb6f0(param_1);
  iVar5 = func_0x000140018120(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  iVar5 = (iVar4 + iVar3 + (uint)uVar2) - iVar5;
  auVar6._4_4_ = _DAT_145fc6ed8;
  auVar6._0_4_ = _DAT_145fc6ed8;
  auVar6._8_4_ = _DAT_145fc6ed8;
  auVar6._12_4_ = _DAT_145fc6ed8;
  iVar3 = 0;
  if (0x1e < iVar5) {
    iVar3 = iVar5;
  }
  *(int *)(param_1 + 0x1c4) = iVar3;
  *(int *)(param_1 + 0x1c8) = iVar3 + iStack_3c;
  iStack_40 = iVar3 + iStack_3c + iStack_40;
  *(int *)(param_1 + 0x1cc) = iStack_40;
  iVar3 = -1;
  if (-1 < iStack_44) {
    iVar3 = iStack_40 + iStack_44;
  }
  *(int *)(param_1 + 0x1d0) = iVar3;
  uVar1 = vmovlps_avx(auVar6);
  *(undefined8 *)(param_1 + 0x1b8) = uVar1;
  *(undefined4 *)(param_1 + 0x1c0) = 0x3f800000;
  return;
}

