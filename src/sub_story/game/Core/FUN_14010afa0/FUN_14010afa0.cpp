// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14010afa0  size: 486 bytes
// Name:    FUN_14010afa0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_142bb3d70, FUN_144eb0a10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14010afa0(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  char *pcVar1;
  int *piVar2;
  char cVar3;
  byte bVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  iVar9 = -0x1000000;
  while (((uVar10 = (ulonglong)
                    *(byte *)(param_4 +
                             (longlong)(iVar9 >> 0x18) +
                             (ulonglong)((uint)DAT_14abbe8d0 * 2) * 3 + 0x19), uVar10 == 0x1e ||
          (lVar7 = *(longlong *)(param_4 + 0xa0 + uVar10 * 8), lVar7 == 0)) ||
         ((*(byte *)(lVar7 + 0x12) & 4) != 0))) {
    iVar9 = iVar9 + 0x1000000;
  }
  uVar10 = CONCAT71((int7)((ulonglong)lVar7 >> 8),*(undefined1 *)(lVar7 + 0x11a)) &
           0xffffffffffffff10;
  uVar15 = func_0x000142bb3cb0(lVar7 + 0xf0,
                               CONCAT71((int7)(uVar10 >> 8),
                                        (byte)uVar10 >> 4 & (*(byte *)(lVar7 + 0xe8) & 9) != 0),
                               _DAT_14abbef44,*(undefined4 *)(param_1 + 0x10),
                               *(undefined4 *)(param_1 + 0x14));
  uVar14 = FUN_142bb3d70(param_3,uVar15,*(undefined4 *)(param_1 + 0x18),
                         *(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),
                         *(undefined4 *)(param_1 + 0x24));
  uVar16 = (undefined4)param_3;
  *(undefined4 *)(param_1 + 8) = uVar14;
  uVar17 = (undefined4)uVar15;
  *(undefined4 *)(param_1 + 0xc) = uVar17;
  lVar7 = func_0x000144db7870(param_4);
  lVar7 = *(longlong *)
           (lVar7 + 0x10 + (ulonglong)*(byte *)(lVar7 + 0xc0 + (ulonglong)DAT_149fee6b8) * 8);
  uVar5 = *(undefined4 *)(lVar7 + 0x20);
  uVar15 = *(undefined8 *)(lVar7 + 0x28);
  lVar7 = FUN_144eb0a10(uVar5,uVar15,0x1fbfb701,0);
  lVar8 = FUN_144eb0a10(uVar5,uVar15,0x1fbfb701);
  if (lVar8 == 0 || lVar7 == 0) {
    return;
  }
  *(code **)(param_1 + 0x28) = FUN_142bb3e70;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined2 *)(param_1 + 0x34) = 0x500;
  *(longlong *)(param_1 + 0x40) = lVar8;
  *(longlong *)(param_1 + 0x48) = lVar7;
  *(undefined4 *)(param_1 + 0x50) = uVar17;
  *(undefined4 *)(param_1 + 0x58) = uVar14;
  *(undefined4 *)(param_1 + 0x60) = uVar16;
  *(longlong *)(param_1 + 0x68) = param_4;
  *(longlong *)(param_1 + 0x70) = param_1 + 0xa8;
  if (param_2 != 0) {
    LOCK();
    pcVar1 = (char *)(param_1 + 0x32);
    cVar3 = *pcVar1;
    *pcVar1 = *pcVar1 + '\x01';
    UNLOCK();
    *(longlong *)(param_1 + 0x30 + (ulonglong)(byte)(cVar3 + 1) * 8) = param_2;
    LOCK();
    *(short *)(param_2 + 8) = *(short *)(param_2 + 8) + 1;
    UNLOCK();
  }
  lVar7 = (ulonglong)*(byte *)(param_1 + 0x33) * 0x40;
  bVar4 = *(byte *)(param_1 + 0x35);
  func_0x000144da41a0(*(undefined8 *)(lVar7 + 0x1471bfd08));
  LOCK();
  piVar2 = (int *)(lVar7 + 0x1471bfd1c);
  iVar9 = *piVar2;
  *piVar2 = *piVar2 + (uint)bVar4;
  UNLOCK();
  uVar12 = iVar9 + (uint)bVar4 + 0xf >> 4;
  FUN_144da4240(lVar7 + 0x1471bfd00,uVar12);
  uVar12 = uVar12 - *(int *)(lVar7 + 0x1471bfd14);
  if ((0 < (int)uVar12) && (plVar6 = *(longlong **)(lVar7 + 0x1471bfd28), plVar6 != (longlong *)0x0)
     ) {
    uVar10 = (ulonglong)*(uint *)((longlong)plVar6 + 0x14);
    if (uVar10 != 0) {
      uVar11 = (ulonglong)uVar12;
      if ((int)*(uint *)((longlong)plVar6 + 0x14) <= (int)uVar12) {
        uVar11 = uVar10;
      }
      lVar7 = 0;
      do {
        piVar2 = (int *)(*plVar6 + 0x10 + lVar7);
        lVar7 = lVar7 + 0x40;
        uVar12 = (int)uVar11 - *piVar2;
        uVar11 = (ulonglong)uVar12;
      } while (uVar10 << 6 != lVar7);
      if (0 < (int)uVar12) {
        uVar13 = 1;
        lVar7 = 0x10;
        do {
          lVar8 = *plVar6;
          if (*(int *)(lVar8 + lVar7) == 0) {
            *(undefined4 *)(lVar8 + lVar7) = 1;
            func_0x000140005930(*(undefined8 *)(lVar8 + 8 + lVar7));
            uVar11 = (ulonglong)((int)uVar11 - 1);
          }
          if (uVar10 <= uVar13) {
            return;
          }
          uVar13 = uVar13 + 1;
          lVar7 = lVar7 + 0x40;
        } while (0 < (int)uVar11);
      }
    }
    return;
  }
  return;
}

