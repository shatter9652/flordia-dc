// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b6830  size: 491 bytes
// Name:    FUN_1400b6830
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e8f2f0, FUN_1452ed8c0, FUN_144e91330
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400b6830(longlong param_1,longlong param_2,longlong param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  byte bVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  byte bVar13;
  bool bVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  if ((*(ushort *)(param_2 + 0x96) & 0x70) != 0x30) {
    *(ushort *)(param_2 + 0x96) = *(ushort *)(param_2 + 0x96) & 0xff8f | 0x30;
    if (param_3 != 0) {
      *(byte *)(param_3 + 0x125) = *(byte *)(param_3 + 0x125) | 4;
    }
    if (*(longlong *)(param_2 + 0x20) != 0) {
      pbVar1 = (byte *)(*(longlong *)(param_2 + 0x20) + 0x52);
      *pbVar1 = *pbVar1 | 1;
      lVar9 = FUN_144e91330();
      lVar9 = *(longlong *)(lVar9 + 0x10);
      uVar12 = (ulonglong)*(ushort *)(lVar9 + 0x18);
      if (uVar12 == 0) {
        uVar8 = 0;
      }
      else {
        bVar6 = FUN_1452ed8c0();
        uVar10 = (ulonglong)bVar6;
        uVar11 = 0;
        bVar13 = 0;
        bVar6 = 0;
        do {
          plVar4 = *(longlong **)(*(longlong *)(lVar9 + 0x10) + uVar11 * 8);
          if ((*(byte *)((longlong)plVar4 + 0x39) & 0x7f) == 3) {
            lVar5 = *plVar4;
            uVar2 = *(undefined8 *)(lVar5 + 0x10 + uVar10 * 0x14);
            auVar15._8_8_ = uVar2;
            auVar15._0_8_ = uVar2;
            auVar15 = vpand_avx(auVar15,*(undefined1 (*) [16])(lVar5 + 8 + uVar10 * 0x14));
            auVar17 = vpshufd_avx(auVar15,0x55);
            auVar15 = vpand_avx(auVar15,auVar17);
            auVar17 = vpsrld_avx(auVar15,0x10);
            auVar15 = vpand_avx(auVar15,auVar17);
            auVar17 = vpsrlw_avx(auVar15,8);
            auVar15 = vpand_avx(auVar15,auVar17);
            auVar17 = ZEXT416(*(uint *)(lVar5 + 0x18 + uVar10 * 0x14));
            auVar16 = vpsrld_avx(auVar17,0x10);
            auVar17 = vpand_avx(auVar17,auVar16);
            auVar16 = vpsrlw_avx(auVar17,8);
            auVar17 = vpand_avx(auVar17,auVar16);
            bVar14 = (byte)(auVar17[0] & auVar15[0]) == 0xff;
            bVar13 = bVar13 | !bVar14;
            bVar6 = bVar6 | bVar14;
          }
          uVar11 = uVar11 + 1;
        } while (uVar12 != uVar11);
        uVar8 = (uint)bVar6 << 0x17 | (uint)bVar13 << 0x16;
      }
      *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xff3fffff | uVar8;
    }
  }
  if ((param_3 == 0) || (-1 < *(short *)(param_3 + 0x14))) {
    cVar7 = FUN_144e8f2f0(param_2,0x148fc7180);
    if (cVar7 != '\0') {
      *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) | 1;
    }
  }
  if (((*(byte *)(param_2 + 0xb0) & 0x10) != 0) &&
     ((((*(char *)(param_2 + 0x30) != '\x04' && (*(char *)(param_2 + 0x30) != '\x01')) ||
       (uVar8 = *(uint *)(param_2 + 0xb4) >> 1, 0x17 < (uVar8 & 0x1f))) ||
      (((0x820100U >> (uVar8 & 0x1f) & 1) == 0 || ((*(byte *)(param_2 + 0xd2) & 2) == 0)))))) {
    *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) | 2;
  }
  lVar9 = *(longlong *)(param_2 + 0x20);
  if ((*(byte *)(lVar9 + 0xa4) & 4) != 0) {
    *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) | 4;
  }
  auVar15 = vsubps_avx(*(undefined1 (*) [16])(lVar9 + 0x40),*(undefined1 (*) [16])(lVar9 + 0x30));
  uVar2 = vmovlps_avx(auVar15);
  *(undefined8 *)(param_1 + 0x44) = uVar2;
  uVar3 = vextractps_avx(auVar15,2);
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  plVar4 = *(longlong **)(param_2 + 0x38);
  if (plVar4 != (longlong *)0x0) {
    cVar7 = (**(code **)(*plVar4 + 200))(plVar4,0,0);
    if (cVar7 != '\0') {
      *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) | 8;
    }
  }
  return;
}

