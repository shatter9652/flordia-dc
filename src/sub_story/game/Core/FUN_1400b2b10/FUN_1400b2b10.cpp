// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b2b10  size: 180 bytes
// Name:    FUN_1400b2b10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f9fed0, FUN_140629100, FUN_1436c1770
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400b2b10(longlong param_1)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *apuStack_138 [29];
  undefined *puStack_50;
  longlong lStack_48;
  ulonglong uStack_40;
  longlong lStack_38;
  undefined *puStack_30;
  undefined1 uStack_28;
  undefined1 auStack_1c [4];
  
  uStack_40 = 0x1400b2b2b;
  lVar3 = FUN_140629100(_DAT_14a9b3e18,0xa549d9fc);
  if (lVar3 == 0) {
    return;
  }
  uStack_40 = 0x1400b2b44;
  cVar2 = FUN_1436c1770(*(undefined8 *)(param_1 + 8));
  uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x9c);
  if (cVar2 != '\0') {
    uStack_40 = 0x1400b2b59;
    lVar4 = func_0x000144da6540(uVar1);
    if ((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x1098), lVar4 != 0)) {
      uStack_40 = 0x1400b2b7b;
      lVar4 = func_0x0001404582a0(*(undefined4 *)(lVar4 + 0x5d0),*(undefined4 *)(lVar4 + 0x5d8));
      if (lVar4 != 0) {
        uStack_40 = 0x1400b2b88;
        cVar2 = FUN_144f9fed0(lVar3);
        if ((cVar2 != '\0') || (*(int *)(lVar3 + 0x70) - 2U < 5)) {
          lVar4 = *(longlong *)(param_1 + 8);
          FUN_14351a1a0(apuStack_138,lVar3 + 0x30);
          if ((*(int *)(lVar3 + 0x70) - 2U < 5) || ((*(byte *)(lVar3 + 0x8a) & 0x10) != 0)) {
            puStack_30 = (undefined *)((ulonglong)puStack_30 & 0xffe9ffffffffffff);
          }
          else {
            puStack_30 = (undefined *)((ulonglong)puStack_30 | 0x16000000000000);
          }
          FUN_143532990(*(undefined4 *)(lVar4 + 0x9c),apuStack_138,7,0x18);
          apuStack_138[0] = &UNK_1466e4b68;
          uStack_40 = uStack_40 & 0xffffffff;
          if (lStack_38 != 0) {
            func_0x000144d9c130();
          }
          uStack_40 = uStack_40 & 0xffffffff00000000;
          lStack_38 = 0;
          if (lStack_48 != 0) {
            FUN_1452e2b10(lStack_48,(ulonglong)puStack_50 & 0xffff);
          }
          return;
        }
        uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x9c);
      }
    }
  }
  puStack_30 = &UNK_14594d71c;
  lVar3 = func_0x000144da6540(uVar1);
  if ((lVar3 == 0) || (lVar3 = *(longlong *)(lVar3 + 0x10c0), lVar3 == 0)) {
    return;
  }
  if (*(char *)(lVar3 + 0x1280) == '\0') {
    return;
  }
  lVar4 = *(longlong *)(lVar3 + 8);
  puStack_50 = &UNK_14594d77e;
  FUN_144fdb460(lVar3 + 0xf20);
  *(undefined1 *)(lVar3 + 0x1281) = 0;
  puStack_50 = &UNK_14594d795;
  lVar5 = FUN_14012b420(lVar3,auStack_1c);
  if (lVar5 != 0) {
    puStack_50 = &UNK_14594d7ab;
    cVar2 = func_0x00014501bbd0(*(undefined4 *)(lVar5 + 0x60),*(undefined1 *)(lVar5 + 0xb0));
    if (cVar2 != '\0') {
      puStack_50 = &UNK_14594d7bb;
      cVar2 = FUN_1440f8250(*(undefined8 *)(lVar3 + 8),lVar5);
      if (cVar2 == '\0') {
        puStack_50 = &UNK_14594d7ca;
        lVar6 = func_0x000144da6540(*(undefined4 *)(lVar4 + 0x9c));
        uStack_28 = 0;
        puStack_50 = &UNK_14594d7e4;
        FUN_14352b920(*(undefined8 *)(lVar6 + 0x10c8),lVar5,0,0);
      }
      goto code_r0x00014594d7ed;
    }
  }
  *(undefined1 *)(lVar3 + 0x1280) = 0;
code_r0x00014594d7ed:
  if (*(char *)(lVar3 + 0x1280) == '\0') {
    puStack_50 = &UNK_14594d805;
    lVar3 = func_0x000144da6540(*(undefined4 *)(lVar4 + 0x9c));
    if (lVar3 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(lVar3 + 0x10c8);
    }
    puStack_50 = &UNK_14594d81b;
    uVar7 = FUN_144f3e760(lVar4,0);
    puStack_50 = &UNK_14594d826;
    FUN_14012afe0(uVar8,uVar7);
    puStack_50 = &UNK_14594d830;
    FUN_1407c89b0(uVar8,1);
  }
  return;
}

