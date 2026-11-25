// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140152780  size: 156 bytes
// Name:    FUN_140152780
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140152820, FUN_140152a40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140152780(longlong param_1)

{
  uint *puVar1;
  byte bVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 unaff_RBX;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  uint uStack_1c;
  
  uVar6 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0;
  FUN_140152820();
  if (*_DAT_149975a58 != 0) {
    uVar5 = func_0x00014501d700();
    FUN_140152a40(uVar5,uVar6);
  }
  *(undefined4 *)(param_1 + 0x27c) = 0x1ffff;
  bVar2 = *(byte *)(uVar6 + 0x30);
  cVar4 = func_0x000144dd12a0(CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar2) & 0xffffffff,
                              *(undefined4 *)(uVar6 + 0x9c),&uStack_1c);
  if (cVar4 != '\0') {
    auVar7._0_12_ = ZEXT812(0);
    auVar7._12_4_ = 0;
    lVar3 = *(longlong *)((ulonglong)bVar2 * 8 + 0x14a951468);
    bVar2 = (byte)uStack_1c & 0x1f;
    LOCK();
    puVar1 = (uint *)(*(longlong *)(lVar3 + 0x10) + (ulonglong)(uStack_1c >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
    UNLOCK();
    *(undefined1 (*) [16])(*(longlong *)(lVar3 + 8) + (ulonglong)uStack_1c * 0x10) = auVar7;
  }
  return;
}

