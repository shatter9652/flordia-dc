// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401288e0  size: 637 bytes
// Name:    FUN_1401288e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f54fe0, FUN_14534c870, FUN_144e23920, FUN_144ef6470, FUN_144db7b40, FUN_144eb1320, FUN_142786e40, FUN_1453ff9c0, FUN_144e3fa30, FUN_1404c8310
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401288e0(longlong param_1,longlong param_2,uint *param_3,undefined4 param_4,
                  undefined1 param_5,undefined1 param_6,char param_7,undefined8 param_8)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  float fVar5;
  undefined1 auVar6 [16];
  
  if ((*(byte *)(param_1 + 0x214) & 0x20) == 0) {
    *(byte *)(param_1 + 0x215) = *(byte *)(param_1 + 0x215) & 0xcf;
  }
  *(byte *)(param_1 + 0x214) = *(byte *)(param_1 + 0x214) | 0x20;
  if ((char)param_4 == '\0' && param_7 == '\0') {
    param_7 = FUN_142786e40(param_1,param_8);
  }
  FUN_1453ff9c0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  auVar6._0_12_ = ZEXT812(0);
  auVar6._12_4_ = 0;
  auVar6 = vcmpps_avx(auVar6,*(undefined1 (*) [16])(param_1 + 400),0);
  uVar3 = vmovmskps_avx(auVar6);
  if ((~(byte)uVar3 & 7) == 0) {
    *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_1 + 0x18);
  }
  if ((char)param_4 == '\0') goto LAB_140128b04;
  if (*(char *)(param_2 + 0x30) == '\x04') {
    if ((*param_3 & 0x40) != 0) {
      if (((*(byte *)(param_2 + 0xb0) & 2) == 0) && ((*(uint *)(param_2 + 0x34) & 1) != 0)) {
        uVar4 = *(uint *)(param_1 + 0x20c) & 0xffffffbf;
      }
      else {
        uVar4 = *(uint *)(param_1 + 0x20c) | 0x40;
      }
      *(uint *)(param_1 + 0x20c) = uVar4;
    }
    goto LAB_140128b04;
  }
  if (*(char *)(param_2 + 0x30) != '\x03') goto LAB_140128b04;
  uVar4 = *param_3;
  if ((uVar4 & 8) != 0) {
    bVar1 = FUN_144e3fa30(*(undefined4 *)(param_2 + 0x9c));
    *(uint *)(param_1 + 0x20c) = (*(uint *)(param_1 + 0x20c) & 0xfffffff7) + (uint)bVar1 * 8;
    uVar4 = *param_3;
  }
  if ((uVar4 & 0x20) != 0) {
    cVar2 = FUN_144e23920(*(undefined4 *)(param_2 + 0x9c));
    if (cVar2 == '\0') {
      cVar2 = FUN_144f54fe0(param_2);
      if (cVar2 == '\0') {
        *(byte *)(param_1 + 0x20c) = *(byte *)(param_1 + 0x20c) & 0xdf;
        goto LAB_140128a32;
      }
    }
    *(byte *)(param_1 + 0x20c) = *(byte *)(param_1 + 0x20c) | 0x20;
  }
LAB_140128a32:
  uVar4 = *param_3;
  if ((uVar4 & 0x10) != 0) {
    bVar1 = FUN_144eb1320(*(undefined4 *)(param_2 + 0x9c));
    *(uint *)(param_1 + 0x20c) = (uint)bVar1 << 4 | *(uint *)(param_1 + 0x20c) & 0xffffffef;
    uVar4 = *param_3;
  }
  if ((uVar4 & 4) != 0) {
    bVar1 = FUN_144db7b40(*(undefined4 *)(param_2 + 0x9c));
    *(uint *)(param_1 + 0x20c) = (*(uint *)(param_1 + 0x20c) & 0xfffffffb) + (uint)bVar1 * 4;
    uVar4 = *param_3;
  }
  if ((uVar4 & 2) != 0) {
    fVar5 = (float)FUN_1404c8310(param_2);
    *(uint *)(param_1 + 0x20c) =
         (*(uint *)(param_1 + 0x20c) & 0xfffffffd) + (uint)(0.0 <= fVar5) * 2;
    uVar4 = *param_3;
  }
  if ((uVar4 >> 0xb & 1) != 0) {
    bVar1 = FUN_14534c870(param_2);
    *(uint *)(param_1 + 0x20c) = (uint)bVar1 << 0xb | *(uint *)(param_1 + 0x20c) & 0xfffff7ff;
    uVar4 = *param_3;
  }
  if ((uVar4 >> 0xd & 1) != 0) {
    cVar2 = FUN_144ef6470(param_2);
    if (cVar2 == '\0') {
      uVar4 = *(uint *)(param_1 + 0x20c) & 0xffffdfff;
    }
    else {
      uVar4 = *(uint *)(param_1 + 0x20c) | 0x2000;
    }
    *(uint *)(param_1 + 0x20c) = uVar4;
  }
LAB_140128b04:
  uVar4 = *param_3;
  if ((uVar4 >> 8 & 1) != 0) {
    *(uint *)(param_1 + 0x20c) =
         (*(byte *)(param_1 + 0x5c) & 4) << 6 | *(uint *)(param_1 + 0x20c) & 0xfffffeff;
    uVar4 = *param_3;
  }
  if ((uVar4 >> 0xc & 1) != 0) {
    *(uint *)(param_1 + 0x20c) =
         (*(byte *)(param_1 + 0x5c) & 8) << 9 | *(uint *)(param_1 + 0x20c) & 0xffffefff;
  }
  return;
}

