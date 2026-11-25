// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14018e4d0  size: 212 bytes
// Name:    FUN_14018e4d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1407e3090
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14018e4d0(longlong param_1,float param_2)

{
  byte bVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 unaff_RBX;
  float fStack_54;
  uint uStack_50;
  int iStack_4c;
  float *pfStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  
  bVar1 = *(byte *)(param_1 + 0x30);
  lVar4 = func_0x0001453df200(CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar1) & 0xffffffff);
  if (lVar4 != 0) {
    plVar2 = *(longlong **)((ulonglong)bVar1 * 8 + 0x14abbe7c0);
    iStack_4c = (uint)(param_2 <= 0.0) * 2;
    uVar3 = (uint)((ulonglong)(param_1 - *plVar2) / (ulonglong)*(uint *)(plVar2 + 1)) & 0x1ffff;
    pfStack_48 = &fStack_54;
    uStack_50 = (bVar1 & 0x1f) << 0x11 | uVar3 |
                (*(uint *)(plVar2[5] + (ulonglong)uVar3 * 4) & 0x7fe0000) << 5;
    pcStack_40 = FUN_1407dd770;
    puStack_38 = &UNK_140ac0700;
    puStack_30 = &SUB_140004380;
    fStack_54 = param_2;
    FUN_1407e3090(lVar4,param_1,0xee42642a);
  }
  return;
}

