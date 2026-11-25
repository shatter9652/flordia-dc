// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14018f560  size: 232 bytes
// Name:    FUN_14018f560
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1409519a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14018f560(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  float fVar4;
  undefined1 auStack_3c8 [856];
  undefined8 uStack_70;
  undefined1 auStack_4e [6];
  undefined8 auStack_48 [2];
  ulonglong uStack_38;
  undefined8 uStack_30;
  
  uStack_70 = 0x14018f578;
  lVar1 = func_0x000144da3240(*(undefined8 *)(param_1 + 0x40));
  uStack_38 = *(ulonglong *)(lVar1 + 0x70);
  uStack_30 = *(undefined8 *)(lVar1 + 0x78);
  uStack_70 = 0x14018f593;
  func_0x000144dc3790(&uStack_38,auStack_48);
  uStack_70 = 0x14018f5a1;
  uVar2 = func_0x000144da3240(*(undefined8 *)(param_1 + 0x40));
  uStack_70 = 0x14018f5ad;
  fVar4 = (float)func_0x00014018f650(uVar2);
  *(float *)(param_1 + 0xafc) = fVar4;
  if (0.0 < fVar4) {
    lVar1 = param_1 + 0x1d0;
    *(undefined1 *)(param_1 + 0xaf8) = 1;
    uStack_70 = 0x14018f614;
    lVar3 = func_0x000144da31b0(lVar1);
    if ((lVar3 == 0) && (*(char *)(param_1 + 0x64e) == '\0')) {
      uVar2 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10) + 0x220);
      lVar3 = func_0x000144da31b0(lVar1);
      if (lVar3 == 0) {
        FUN_1452b3070(auStack_3c8);
        uStack_38 = uStack_38 & 0xffffffffffffff00 | 0x82000000000000;
        FUN_1404a72c0(param_1,uVar2,lVar1,auStack_3c8,1);
        func_0x000144de1380(auStack_4e);
      }
      return;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xaf8) = 0;
    auStack_48[0] = *(undefined8 *)(param_1 + 0x1d0);
    uStack_70 = 0x14018f5da;
    lVar1 = func_0x000144da31b0();
    if (lVar1 != 0) {
      uStack_70 = 0x14018f5fc;
      FUN_1409519a0(lVar1,1,0x7585d45d);
    }
  }
  return;
}

