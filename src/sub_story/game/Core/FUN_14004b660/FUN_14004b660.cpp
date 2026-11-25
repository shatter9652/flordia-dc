// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14004b660  size: 728 bytes
// Name:    FUN_14004b660
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fb2310, FUN_1453d32f0, FUN_141fcac10, FUN_143400990, FUN_144d9fa40, FUN_1452bde40, FUN_144ff5010, FUN_14013f4b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14004b660(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  char cStack_40;
  char cStack_3f;
  char cStack_3e;
  char cStack_3d;
  undefined4 auStack_3c [5];
  
  cStack_3d = '\x01';
  cStack_3f = '\x01';
  auStack_3c[0] = (undefined4)param_2;
  cStack_3e = '\0';
  cStack_40 = '\0';
  (**(code **)(*param_1 + 0x100))
            (param_1,param_3,&cStack_3d,&cStack_3f,auStack_3c,&cStack_40,&cStack_3e);
  uVar1 = param_1[1];
  lVar2 = param_1[6];
  if (lVar2 != 0) {
    func_0x000142bc60c0(lVar2 + 0x438,param_2);
  }
  if (cStack_3d == '\0') {
    if (cStack_3f == '\0') {
      if (cStack_3e != '\0') {
        return;
      }
      if (param_1[7] != 0) {
        FUN_1453d32f0(param_1[7],0);
      }
      if (param_1[8] != 0) {
        FUN_1452bde40();
      }
      if (lVar2 == 0) {
        return;
      }
      if (cStack_40 != '\x01') {
        if (*(char *)((uVar1 & 0xfffffffffffffff0) + 0x30) != '\x03') {
          return;
        }
        FUN_144fb2310(lVar2,param_2,param_4);
        return;
      }
      goto LAB_14004b882;
    }
  }
  else {
    *(undefined1 (*) [32])(param_1 + 2) = ZEXT1232(ZEXT812(0));
  }
  if (lVar2 == 0) {
    return;
  }
  if (cStack_3f == '\x01') {
    lVar4 = (ulonglong)((uint)DAT_14ab83ab0 * 2) * 3;
    bVar5 = *(byte *)(lVar2 + 0x18 + lVar4);
    if (((((bVar5 != 0x1e) || (bVar5 = *(byte *)(lVar2 + 0x19 + lVar4), bVar5 != 0x1e)) ||
         (bVar5 = *(byte *)(lVar2 + 0x1a + lVar4), bVar5 != 0x1e)) ||
        (((bVar5 = *(byte *)(lVar2 + 0x1b + lVar4), bVar5 != 0x1e ||
          (bVar5 = *(byte *)(lVar2 + 0x1c + lVar4), bVar5 != 0x1e)) ||
         (bVar5 = *(byte *)(lVar2 + 0x1d + lVar4), bVar5 != 0x1e)))) &&
       (lVar4 = *(longlong *)(lVar2 + 0xa0 + (ulonglong)bVar5 * 8), lVar4 != 0)) {
      FUN_143400990(lVar4,0);
    }
    lVar4 = func_0x000144fc4f80(param_1[0x36],0);
    if ((lVar4 != 0) && (lVar4 = FUN_144d9fa40(*(undefined4 *)(lVar4 + 0x9c)), lVar4 != 0)) {
      lVar3 = (ulonglong)((uint)DAT_1492e3528 * 2) * 3;
      bVar5 = *(byte *)(lVar2 + 0x18 + lVar3);
      if (((bVar5 != 0x1e) ||
          ((((bVar5 = *(byte *)(lVar2 + 0x19 + lVar3), bVar5 != 0x1e ||
             (bVar5 = *(byte *)(lVar2 + 0x1a + lVar3), bVar5 != 0x1e)) ||
            (bVar5 = *(byte *)(lVar2 + 0x1b + lVar3), bVar5 != 0x1e)) ||
           ((bVar5 = *(byte *)(lVar2 + 0x1c + lVar3), bVar5 != 0x1e ||
            (bVar5 = *(byte *)(lVar2 + 0x1d + lVar3), bVar5 != 0x1e)))))) &&
         (lVar3 = *(longlong *)(lVar2 + 0xa0 + (ulonglong)bVar5 * 8), lVar3 != 0)) {
        FUN_14013f4b0(lVar3,param_1 + 10,lVar4,0);
      }
    }
    FUN_144ff5010(lVar2,auStack_3c[0],param_3,param_4);
    return;
  }
  if (cStack_40 != '\x01') {
    return;
  }
LAB_14004b882:
  lVar4 = func_0x000144fc4f80(param_1[0x36],0);
  if ((lVar4 != 0) && (lVar4 = FUN_144d9fa40(*(undefined4 *)(lVar4 + 0x9c)), lVar4 != 0)) {
    lVar3 = (ulonglong)((uint)DAT_1492e3528 * 2) * 3;
    bVar5 = *(byte *)(lVar2 + 0x18 + lVar3);
    if ((((bVar5 != 0x1e) ||
         (((bVar5 = *(byte *)(lVar2 + 0x19 + lVar3), bVar5 != 0x1e ||
           (bVar5 = *(byte *)(lVar2 + 0x1a + lVar3), bVar5 != 0x1e)) ||
          (bVar5 = *(byte *)(lVar2 + 0x1b + lVar3), bVar5 != 0x1e)))) ||
        ((bVar5 = *(byte *)(lVar2 + 0x1c + lVar3), bVar5 != 0x1e ||
         (bVar5 = *(byte *)(lVar2 + 0x1d + lVar3), bVar5 != 0x1e)))) &&
       (lVar3 = *(longlong *)(lVar2 + 0xa0 + (ulonglong)bVar5 * 8), lVar3 != 0)) {
      FUN_14013f4b0(lVar3,param_1 + 10,lVar4,0);
    }
  }
  FUN_141fcac10(lVar2,auStack_3c[0],param_3,param_4);
  return;
}

