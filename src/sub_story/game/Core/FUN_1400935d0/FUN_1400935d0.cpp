// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400935d0  size: 93 bytes
// Name:    FUN_1400935d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1402e5b80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400935d0(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  byte bVar8;
  undefined8 uVar9;
  undefined1 auVar10 [64];
  char cStack_40;
  char cStack_3f;
  char cStack_3e;
  char cStack_3d;
  uint auStack_3c [3];
  undefined *puStack_30;
  
  if ((*(byte *)(param_1 + 0xe9) & 0x20) != 0) {
    FUN_1402e5b80(4);
    return;
  }
  puStack_30 = &UNK_144e68799;
  plVar7 = (longlong *)func_0x000144e688c0(*(undefined4 *)(param_1 + 0x9c));
  if (plVar7 == (longlong *)0x0) {
    return;
  }
  puStack_30 = &UNK_144e687c5;
  cVar5 = FUN_144e68800(plVar7[1],plVar7[6]);
  if (cVar5 == '\0') {
    return;
  }
  uVar4 = *(undefined8 *)(_DAT_14ab760a0 + 0x4f8);
  auVar10 = ZEXT464(_DAT_14abbef4c);
  cStack_3d = '\x01';
  cStack_3f = '\x01';
  auStack_3c[0] = _DAT_14abbef4c;
  cStack_3e = '\0';
  cStack_40 = '\0';
  (**(code **)(*plVar7 + 0x100))(plVar7,0,&cStack_3d,&cStack_3f,auStack_3c,&cStack_40,&cStack_3e);
  uVar1 = plVar7[1];
  lVar2 = plVar7[6];
  if (lVar2 != 0) {
    func_0x000142bc60c0(lVar2 + 0x438,auVar10._0_8_);
  }
  if (cStack_3d == '\0') {
    if (cStack_3f == '\0') {
      if (cStack_3e != '\0') {
        return;
      }
      if (plVar7[7] != 0) {
        FUN_1453d32f0(plVar7[7],0);
      }
      uVar9 = auVar10._0_8_;
      if (plVar7[8] != 0) {
        FUN_1452bde40();
        uVar9 = auVar10._0_8_;
      }
      if (lVar2 == 0) {
        return;
      }
      if (cStack_40 != '\x01') {
        if (*(char *)((uVar1 & 0xfffffffffffffff0) + 0x30) != '\x03') {
          return;
        }
        FUN_144fb2310(lVar2,uVar9,uVar4);
        return;
      }
      goto LAB_14004b882;
    }
  }
  else {
    *(undefined1 (*) [32])(plVar7 + 2) = ZEXT1232(ZEXT812(0));
  }
  if (lVar2 == 0) {
    return;
  }
  if (cStack_3f == '\x01') {
    lVar6 = (ulonglong)((uint)DAT_14ab83ab0 * 2) * 3;
    bVar8 = *(byte *)(lVar2 + 0x18 + lVar6);
    if (((((bVar8 != 0x1e) || (bVar8 = *(byte *)(lVar2 + 0x19 + lVar6), bVar8 != 0x1e)) ||
         (bVar8 = *(byte *)(lVar2 + 0x1a + lVar6), bVar8 != 0x1e)) ||
        (((bVar8 = *(byte *)(lVar2 + 0x1b + lVar6), bVar8 != 0x1e ||
          (bVar8 = *(byte *)(lVar2 + 0x1c + lVar6), bVar8 != 0x1e)) ||
         (bVar8 = *(byte *)(lVar2 + 0x1d + lVar6), bVar8 != 0x1e)))) &&
       (lVar6 = *(longlong *)(lVar2 + 0xa0 + (ulonglong)bVar8 * 8), lVar6 != 0)) {
      FUN_143400990(lVar6,0);
    }
    lVar6 = func_0x000144fc4f80(plVar7[0x36],0);
    if ((lVar6 != 0) && (lVar6 = FUN_144d9fa40(*(undefined4 *)(lVar6 + 0x9c)), lVar6 != 0)) {
      lVar3 = (ulonglong)((uint)DAT_1492e3528 * 2) * 3;
      bVar8 = *(byte *)(lVar2 + 0x18 + lVar3);
      if (((bVar8 != 0x1e) ||
          ((((bVar8 = *(byte *)(lVar2 + 0x19 + lVar3), bVar8 != 0x1e ||
             (bVar8 = *(byte *)(lVar2 + 0x1a + lVar3), bVar8 != 0x1e)) ||
            (bVar8 = *(byte *)(lVar2 + 0x1b + lVar3), bVar8 != 0x1e)) ||
           ((bVar8 = *(byte *)(lVar2 + 0x1c + lVar3), bVar8 != 0x1e ||
            (bVar8 = *(byte *)(lVar2 + 0x1d + lVar3), bVar8 != 0x1e)))))) &&
         (lVar3 = *(longlong *)(lVar2 + 0xa0 + (ulonglong)bVar8 * 8), lVar3 != 0)) {
        FUN_14013f4b0(lVar3,plVar7 + 10,lVar6,0);
      }
    }
    FUN_144ff5010(lVar2,auStack_3c[0],0,uVar4);
    return;
  }
  if (cStack_40 != '\x01') {
    return;
  }
LAB_14004b882:
  lVar6 = func_0x000144fc4f80(plVar7[0x36],0);
  if ((lVar6 != 0) && (lVar6 = FUN_144d9fa40(*(undefined4 *)(lVar6 + 0x9c)), lVar6 != 0)) {
    lVar3 = (ulonglong)((uint)DAT_1492e3528 * 2) * 3;
    bVar8 = *(byte *)(lVar2 + 0x18 + lVar3);
    if ((((bVar8 != 0x1e) ||
         (((bVar8 = *(byte *)(lVar2 + 0x19 + lVar3), bVar8 != 0x1e ||
           (bVar8 = *(byte *)(lVar2 + 0x1a + lVar3), bVar8 != 0x1e)) ||
          (bVar8 = *(byte *)(lVar2 + 0x1b + lVar3), bVar8 != 0x1e)))) ||
        ((bVar8 = *(byte *)(lVar2 + 0x1c + lVar3), bVar8 != 0x1e ||
         (bVar8 = *(byte *)(lVar2 + 0x1d + lVar3), bVar8 != 0x1e)))) &&
       (lVar3 = *(longlong *)(lVar2 + 0xa0 + (ulonglong)bVar8 * 8), lVar3 != 0)) {
      FUN_14013f4b0(lVar3,plVar7 + 10,lVar6,0);
    }
  }
  FUN_141fcac10(lVar2,auStack_3c[0],0,uVar4);
  return;
}

