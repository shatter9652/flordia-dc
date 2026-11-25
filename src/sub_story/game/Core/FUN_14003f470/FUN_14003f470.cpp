// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14003f470  size: 1046 bytes
// Name:    FUN_14003f470
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141b9b280
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14003f470(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  short sVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  
  sVar2 = *(short *)(param_2 + 0xce);
  uVar9 = *(uint *)(param_1 + 0x1864);
  if (uVar9 == *(uint *)(param_1 + 0x1860)) {
    uVar7 = 1;
    if (1 < uVar9) {
      uVar7 = uVar9 >> 1;
    }
    FUN_141b9b280(param_1 + 0x1860,uVar7 + uVar9);
    uVar9 = *(uint *)(param_1 + 0x1864);
  }
  *(uint *)(param_1 + 0x1864) = uVar9 + 1;
  *(short *)(*(longlong *)(param_1 + 0x1868) + (ulonglong)uVar9 * 2) = sVar2;
  lVar4 = *(longlong *)(param_1 + 0x1aa0);
  lVar8 = ((longlong)sVar2 & 0xffffffffU) * 0x220;
  uVar6 = ((ulonglong *)(lVar4 + lVar8))[1];
  *(ulonglong *)(param_1 + 0x1630) =
       *(ulonglong *)(param_1 + 0x1630) | *(ulonglong *)(lVar4 + lVar8);
  *(ulonglong *)(param_1 + 0x1638) = *(ulonglong *)(param_1 + 0x1638) | uVar6;
  puVar1 = (ulonglong *)(lVar4 + 0x10 + lVar8);
  uVar6 = puVar1[1];
  *(ulonglong *)(param_1 + 0x1640) = *(ulonglong *)(param_1 + 0x1640) | *puVar1;
  *(ulonglong *)(param_1 + 0x1648) = *(ulonglong *)(param_1 + 0x1648) | uVar6;
  puVar1 = (ulonglong *)(lVar4 + 0x20 + lVar8);
  uVar6 = puVar1[1];
  *(ulonglong *)(param_1 + 0x1650) = *(ulonglong *)(param_1 + 0x1650) | *puVar1;
  *(ulonglong *)(param_1 + 0x1658) = *(ulonglong *)(param_1 + 0x1658) | uVar6;
  puVar1 = (ulonglong *)(lVar4 + 0x30 + lVar8);
  uVar6 = puVar1[1];
  *(ulonglong *)(param_1 + 0x1660) = *(ulonglong *)(param_1 + 0x1660) | *puVar1;
  *(ulonglong *)(param_1 + 0x1668) = *(ulonglong *)(param_1 + 0x1668) | uVar6;
  puVar1 = (ulonglong *)(lVar4 + 0x40 + lVar8);
  uVar6 = puVar1[1];
  *(ulonglong *)(param_1 + 0x1670) = *(ulonglong *)(param_1 + 0x1670) | *puVar1;
  *(ulonglong *)(param_1 + 0x1678) = *(ulonglong *)(param_1 + 0x1678) | uVar6;
  puVar1 = (ulonglong *)(lVar4 + 0x50 + lVar8);
  uVar6 = puVar1[1];
  *(ulonglong *)(param_1 + 0x1680) = *(ulonglong *)(param_1 + 0x1680) | *puVar1;
  *(ulonglong *)(param_1 + 0x1688) = *(ulonglong *)(param_1 + 0x1688) | uVar6;
  puVar1 = (ulonglong *)(lVar4 + 0x60 + lVar8);
  uVar6 = puVar1[1];
  *(ulonglong *)(param_1 + 0x1690) = *(ulonglong *)(param_1 + 0x1690) | *puVar1;
  *(ulonglong *)(param_1 + 0x1698) = *(ulonglong *)(param_1 + 0x1698) | uVar6;
  puVar1 = (ulonglong *)(lVar4 + 0x70 + lVar8);
  uVar6 = puVar1[1];
  *(ulonglong *)(param_1 + 0x16a0) = *(ulonglong *)(param_1 + 0x16a0) | *puVar1;
  *(ulonglong *)(param_1 + 0x16a8) = *(ulonglong *)(param_1 + 0x16a8) | uVar6;
  puVar1 = (ulonglong *)(lVar4 + 0x80 + lVar8);
  uVar6 = puVar1[1];
  *(ulonglong *)(param_1 + 0x16b0) = *(ulonglong *)(param_1 + 0x16b0) | *puVar1;
  *(ulonglong *)(param_1 + 0x16b8) = *(ulonglong *)(param_1 + 0x16b8) | uVar6;
  puVar1 = (ulonglong *)(lVar4 + 0x90 + lVar8);
  uVar6 = puVar1[1];
  *(ulonglong *)(param_1 + 0x16c0) = *(ulonglong *)(param_1 + 0x16c0) | *puVar1;
  *(ulonglong *)(param_1 + 0x16c8) = *(ulonglong *)(param_1 + 0x16c8) | uVar6;
  puVar1 = (ulonglong *)(lVar4 + 0xa0 + lVar8);
  uVar6 = puVar1[1];
  *(ulonglong *)(param_1 + 0x16d0) = *(ulonglong *)(param_1 + 0x16d0) | *puVar1;
  *(ulonglong *)(param_1 + 0x16d8) = *(ulonglong *)(param_1 + 0x16d8) | uVar6;
  puVar1 = (ulonglong *)(lVar4 + 0xb0 + lVar8);
  uVar6 = puVar1[1];
  *(ulonglong *)(param_1 + 0x16e0) = *(ulonglong *)(param_1 + 0x16e0) | *puVar1;
  *(ulonglong *)(param_1 + 0x16e8) = *(ulonglong *)(param_1 + 0x16e8) | uVar6;
  puVar1 = (ulonglong *)(lVar4 + 0xc0 + lVar8);
  uVar6 = puVar1[1];
  *(ulonglong *)(param_1 + 0x16f0) = *(ulonglong *)(param_1 + 0x16f0) | *puVar1;
  *(ulonglong *)(param_1 + 0x16f8) = *(ulonglong *)(param_1 + 0x16f8) | uVar6;
  puVar1 = (ulonglong *)(lVar4 + 0xd0 + lVar8);
  uVar6 = puVar1[1];
  *(ulonglong *)(param_1 + 0x1700) = *(ulonglong *)(param_1 + 0x1700) | *puVar1;
  *(ulonglong *)(param_1 + 0x1708) = *(ulonglong *)(param_1 + 0x1708) | uVar6;
  puVar1 = (ulonglong *)(lVar4 + 0xe0 + lVar8);
  uVar6 = puVar1[1];
  *(ulonglong *)(param_1 + 0x1710) = *(ulonglong *)(param_1 + 0x1710) | *puVar1;
  *(ulonglong *)(param_1 + 0x1718) = *(ulonglong *)(param_1 + 0x1718) | uVar6;
  puVar1 = (ulonglong *)(lVar4 + 0xf0 + lVar8);
  uVar6 = puVar1[1];
  *(ulonglong *)(param_1 + 0x1720) = *(ulonglong *)(param_1 + 0x1720) | *puVar1;
  *(ulonglong *)(param_1 + 0x1728) = *(ulonglong *)(param_1 + 0x1728) | uVar6;
  puVar1 = (ulonglong *)(lVar4 + 0x100 + lVar8);
  uVar6 = puVar1[1];
  *(ulonglong *)(param_1 + 0x1730) = *(ulonglong *)(param_1 + 0x1730) | *puVar1;
  *(ulonglong *)(param_1 + 0x1738) = *(ulonglong *)(param_1 + 0x1738) | uVar6;
  puVar1 = (ulonglong *)(lVar4 + 0x110 + lVar8);
  uVar6 = puVar1[1];
  *(ulonglong *)(param_1 + 0x1740) = *(ulonglong *)(param_1 + 0x1740) | *puVar1;
  *(ulonglong *)(param_1 + 0x1748) = *(ulonglong *)(param_1 + 0x1748) | uVar6;
  puVar1 = (ulonglong *)(lVar4 + 0x120 + lVar8);
  uVar6 = puVar1[1];
  *(ulonglong *)(param_1 + 0x1750) = *(ulonglong *)(param_1 + 0x1750) | *puVar1;
  *(ulonglong *)(param_1 + 0x1758) = *(ulonglong *)(param_1 + 0x1758) | uVar6;
  puVar1 = (ulonglong *)(lVar4 + 0x130 + lVar8);
  uVar6 = puVar1[1];
  *(ulonglong *)(param_1 + 0x1760) = *(ulonglong *)(param_1 + 0x1760) | *puVar1;
  *(ulonglong *)(param_1 + 0x1768) = *(ulonglong *)(param_1 + 0x1768) | uVar6;
  puVar1 = (ulonglong *)(lVar4 + 0x140 + lVar8);
  uVar6 = puVar1[1];
  *(ulonglong *)(param_1 + 6000) = *(ulonglong *)(param_1 + 6000) | *puVar1;
  *(ulonglong *)(param_1 + 0x1778) = *(ulonglong *)(param_1 + 0x1778) | uVar6;
  puVar1 = (ulonglong *)(lVar4 + 0x150 + lVar8);
  uVar6 = puVar1[1];
  *(ulonglong *)(param_1 + 0x1780) = *(ulonglong *)(param_1 + 0x1780) | *puVar1;
  *(ulonglong *)(param_1 + 0x1788) = *(ulonglong *)(param_1 + 0x1788) | uVar6;
  puVar1 = (ulonglong *)(lVar4 + 0x160 + lVar8);
  uVar6 = puVar1[1];
  *(ulonglong *)(param_1 + 0x1790) = *(ulonglong *)(param_1 + 0x1790) | *puVar1;
  *(ulonglong *)(param_1 + 0x1798) = *(ulonglong *)(param_1 + 0x1798) | uVar6;
  puVar1 = (ulonglong *)(lVar4 + 0x170 + lVar8);
  uVar6 = puVar1[1];
  *(ulonglong *)(param_1 + 0x17a0) = *(ulonglong *)(param_1 + 0x17a0) | *puVar1;
  *(ulonglong *)(param_1 + 0x17a8) = *(ulonglong *)(param_1 + 0x17a8) | uVar6;
  puVar1 = (ulonglong *)(lVar4 + 0x180 + lVar8);
  uVar6 = puVar1[1];
  *(ulonglong *)(param_1 + 0x17b0) = *(ulonglong *)(param_1 + 0x17b0) | *puVar1;
  *(ulonglong *)(param_1 + 0x17b8) = *(ulonglong *)(param_1 + 0x17b8) | uVar6;
  puVar1 = (ulonglong *)(lVar4 + 400 + lVar8);
  uVar6 = puVar1[1];
  *(ulonglong *)(param_1 + 0x17c0) = *(ulonglong *)(param_1 + 0x17c0) | *puVar1;
  *(ulonglong *)(param_1 + 0x17c8) = *(ulonglong *)(param_1 + 0x17c8) | uVar6;
  puVar1 = (ulonglong *)(lVar4 + 0x1a0 + lVar8);
  uVar6 = puVar1[1];
  *(ulonglong *)(param_1 + 0x17d0) = *(ulonglong *)(param_1 + 0x17d0) | *puVar1;
  *(ulonglong *)(param_1 + 0x17d8) = *(ulonglong *)(param_1 + 0x17d8) | uVar6;
  puVar1 = (ulonglong *)(lVar4 + 0x1b0 + lVar8);
  uVar6 = puVar1[1];
  *(ulonglong *)(param_1 + 0x17e0) = *(ulonglong *)(param_1 + 0x17e0) | *puVar1;
  *(ulonglong *)(param_1 + 0x17e8) = *(ulonglong *)(param_1 + 0x17e8) | uVar6;
  puVar1 = (ulonglong *)(lVar4 + 0x1c0 + lVar8);
  uVar6 = puVar1[1];
  *(ulonglong *)(param_1 + 0x17f0) = *(ulonglong *)(param_1 + 0x17f0) | *puVar1;
  *(ulonglong *)(param_1 + 0x17f8) = *(ulonglong *)(param_1 + 0x17f8) | uVar6;
  puVar1 = (ulonglong *)(lVar4 + 0x1d0 + lVar8);
  uVar6 = puVar1[1];
  *(ulonglong *)(param_1 + 0x1800) = *(ulonglong *)(param_1 + 0x1800) | *puVar1;
  *(ulonglong *)(param_1 + 0x1808) = *(ulonglong *)(param_1 + 0x1808) | uVar6;
  puVar1 = (ulonglong *)(lVar4 + 0x1e0 + lVar8);
  uVar6 = puVar1[1];
  *(ulonglong *)(param_1 + 0x1810) = *(ulonglong *)(param_1 + 0x1810) | *puVar1;
  *(ulonglong *)(param_1 + 0x1818) = *(ulonglong *)(param_1 + 0x1818) | uVar6;
  puVar1 = (ulonglong *)(lVar4 + 0x1f0 + lVar8);
  uVar6 = puVar1[1];
  *(ulonglong *)(param_1 + 0x1820) = *(ulonglong *)(param_1 + 0x1820) | *puVar1;
  *(ulonglong *)(param_1 + 0x1828) = *(ulonglong *)(param_1 + 0x1828) | uVar6;
  puVar1 = (ulonglong *)(lVar4 + 0x200 + lVar8);
  uVar6 = puVar1[1];
  *(ulonglong *)(param_1 + 0x1830) = *(ulonglong *)(param_1 + 0x1830) | *puVar1;
  *(ulonglong *)(param_1 + 0x1838) = *(ulonglong *)(param_1 + 0x1838) | uVar6;
  puVar1 = (ulonglong *)(lVar4 + 0x210 + lVar8);
  uVar6 = puVar1[1];
  *(ulonglong *)(param_1 + 0x1840) = *(ulonglong *)(param_1 + 0x1840) | *puVar1;
  *(ulonglong *)(param_1 + 0x1848) = *(ulonglong *)(param_1 + 0x1848) | uVar6;
  iVar3 = *(int *)(param_1 + 0x1864);
  if (0 < (longlong)iVar3) {
    lVar4 = *(longlong *)(param_1 + 0x1868);
    lVar8 = 0;
    do {
      sVar2 = *(short *)(lVar4 + lVar8 * 2);
      lVar8 = lVar8 + 1;
      bVar5 = ~(byte)sVar2 & 0x3f;
      puVar1 = (ulonglong *)(param_1 + 0x1630 + (ulonglong)((uint)(int)sVar2 >> 6) * 8);
      *puVar1 = *puVar1 & (-2L << bVar5 | 0xfffffffffffffffeU >> 0x40 - bVar5);
    } while (iVar3 != lVar8);
  }
  *(undefined2 *)(param_1 + 0x1850) = 0x101;
  *(undefined1 *)(param_2 + 0xf8) = 1;
  return;
}

