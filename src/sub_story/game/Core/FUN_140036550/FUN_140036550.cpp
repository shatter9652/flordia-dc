// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140036550  size: 346 bytes
// Name:    FUN_140036550
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400366b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140036550(longlong param_1,uint param_2,uint param_3)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  uint uVar3;
  ushort uVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  undefined8 unaff_R14;
  ulonglong uVar7;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  uint uStack_64;
  undefined8 uStack_60;
  uint *puStack_58;
  undefined4 *puStack_50;
  undefined4 *puStack_48;
  undefined4 *puStack_40;
  undefined8 *puStack_38;
  longlong lStack_30;
  
  uVar4 = (ushort)(param_2 & 0x3f);
  if ((uVar4 < 0xe) && ((0x3018U >> (param_2 & 0x1f) & 1) != 0)) {
    uVar6 = CONCAT62((int6)((ulonglong)unaff_RDI >> 0x10),1);
    if (1 < (ushort)(uVar4 - 3)) {
      uVar6 = (ulonglong)(uVar4 == 0xc ^ 9);
    }
  }
  else {
    uVar6 = (ulonglong)(param_2 & 0x3f);
  }
  uVar4 = (ushort)(param_3 & 0x3f);
  if ((uVar4 < 0xe) && ((0x3018U >> (param_3 & 0x1f) & 1) != 0)) {
    uVar5 = CONCAT62((int6)((ulonglong)unaff_RBX >> 0x10),1);
    if (1 < (ushort)(uVar4 - 3)) {
      uVar5 = (ulonglong)(uVar4 == 0xc ^ 9);
    }
  }
  else {
    uVar5 = (ulonglong)(param_3 & 0x3f);
  }
  uStack_60 = 0x1475df0e8;
  uVar7 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),*(undefined1 *)(param_1 + -0x4eb));
  uVar3 = func_0x000144e3a780(uVar6 & 0xffffffff,uVar7 & 0xffffffff,0);
  uStack_64 = uVar3;
  uStack_68 = func_0x000144e3a780(uVar5 & 0xffffffff,uVar7 & 0xffffffff,0);
  uStack_6c = func_0x000144e3a820(uVar6 & 0xffffffff,0);
  uStack_70 = func_0x000144e3a820(uVar5 & 0xffffffff,0);
  pauVar1 = *(undefined1 (**) [16])(param_1 + 0x1b1b0);
  if (pauVar1 == (undefined1 (*) [16])0x0) {
    puStack_58 = &uStack_64;
    puStack_50 = &uStack_68;
    puStack_48 = &uStack_6c;
    puStack_40 = &uStack_70;
    puStack_38 = &uStack_60;
    lStack_30 = param_1;
    FUN_1400366b0(param_1);
  }
  else {
    auVar2 = vpor_avx(ZEXT416(uVar3),*pauVar1);
    *pauVar1 = auVar2;
  }
  return;
}

