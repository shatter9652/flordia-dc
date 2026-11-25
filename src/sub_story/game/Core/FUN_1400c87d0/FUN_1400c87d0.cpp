// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c87d0  size: 244 bytes
// Name:    FUN_1400c87d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144de6230, FUN_1400cbe90, FUN_145234ca0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400c87d0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  lVar2 = FUN_144de6230();
  if (lVar2 == 0) {
    bVar5 = false;
  }
  else {
    bVar5 = *(char *)(lVar2 + 0x30) == '\x02';
  }
  bVar4 = *(byte *)(param_2 + 0x14c);
  *(byte *)(param_2 + 0x14c) = bVar4 & 0xfc | bVar5;
  lVar2 = *(longlong *)(param_2 + 0x20);
  if (lVar2 == 0) {
    bVar3 = bVar4 & 0xf8 | bVar5;
  }
  else {
    cVar1 = FUN_145234ca0(lVar2,0);
    if (cVar1 == '\0') {
      bVar3 = bVar4 & 0xf8 | bVar5;
    }
    else {
      if (*(longlong *)(param_2 + 8) == 0) {
        bVar3 = 0;
      }
      else {
        cVar1 = FUN_1400cbe90(*(undefined8 *)(*(longlong *)(param_2 + 8) + 8));
        bVar3 = cVar1 << 2;
      }
      bVar3 = bVar4 & 0xf8 | bVar5 | bVar3;
    }
    *(byte *)(param_2 + 0x14c) = bVar3;
    if (((*(byte *)(lVar2 + 0x12) & 0x20) != 0) && (*(longlong *)(param_2 + 8) != 0)) {
      cVar1 = FUN_1400cbe90(*(undefined8 *)(*(longlong *)(param_2 + 8) + 8));
      bVar4 = cVar1 << 3;
      goto LAB_1400c8809;
    }
  }
  bVar4 = 0;
LAB_1400c8809:
  bVar4 = bVar3 & 0xf7 | bVar4;
  *(byte *)(param_2 + 0x14c) = bVar4;
  if (*(longlong *)(param_2 + 8) == 0) {
    bVar3 = 0;
  }
  else {
    auVar7._8_8_ = _DAT_14615ba50;
    auVar7._0_8_ = _DAT_14615ba50;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = *(ulonglong *)(*(longlong *)(param_2 + 8) + 0x234);
    auVar6 = vpand_avx(auVar6,auVar7);
    auVar6 = vpcmpeqd_avx(auVar6,auVar7);
    auVar6 = vpmovsxdq_avx(auVar6);
    bVar3 = ((SUB161(auVar6 >> 0x3f,0) & 1) != 0 || auVar6[0xf] < '\0') << 4;
  }
  *(byte *)(param_2 + 0x14c) = bVar4 & 0xef | bVar3;
  return;
}

