// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140148540  size: 555 bytes
// Name:    FUN_140148540
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140148540(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  byte bVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  bool bVar15;
  bool bVar16;
  bool bStack_82;
  bool bStack_81;
  ulonglong uStack_78;
  ulonglong uStack_70;
  
  uVar8 = 0;
  do {
    uVar6 = uVar8 >> 6 & 0x3ffffff;
    if ((*(ulonglong *)(param_1 + uVar6 * 8) >> (uVar8 & 0x3f) & 1) != 0) {
      uVar1 = *(ulonglong *)(param_1 + 0x80 + uVar6 * 8);
      uVar13 = 0;
      puVar9 = (ulonglong *)(param_2 + (uVar8 >> 6) * 8);
      uVar2 = *(ulonglong *)(param_1 + 0x40 + uVar6 * 8);
      uVar10 = 1L << (uVar8 & 0x3f);
      uVar3 = *(ulonglong *)(param_1 + 0xc0 + uVar6 * 8);
      uVar6 = *(ulonglong *)(param_1 + 0x100 + uVar6 * 8);
      do {
        if ((*puVar9 & uVar10) != 0) {
          uVar14 = uVar13 >> 6 & 0x3ffffff;
          uVar12 = 1L << (uVar13 & 0x3f);
          uVar4 = *(ulonglong *)(param_1 + uVar14 * 8);
          uVar5 = *(ulonglong *)(param_1 + 0x40 + uVar14 * 8);
          bVar15 = (uVar4 >> (uVar13 & 0x3f) & 1) == 0;
          if (bVar15) {
            uStack_78 = *(ulonglong *)(param_1 + 0xc0 + uVar14 * 8);
            uVar7 = *(ulonglong *)(param_1 + 0x80 + uVar14 * 8);
            bVar16 = false;
            bStack_82 = true;
            bStack_81 = true;
            uStack_70 = *(ulonglong *)(param_1 + 0x100 + uVar14 * 8);
          }
          else {
            uVar7 = *(ulonglong *)(param_1 + 0x80 + uVar14 * 8);
            uStack_78 = *(ulonglong *)(param_1 + 0xc0 + uVar14 * 8);
            uStack_70 = *(ulonglong *)(param_1 + 0x100 + uVar14 * 8);
            bStack_82 = (uVar7 & uVar12) == 0;
            bStack_81 = (uStack_78 & uVar12) == 0;
            bVar16 = (uStack_70 & uVar12) != 0;
          }
          bVar11 = (uVar6 & uVar10) != 0 | bVar16;
          bVar15 = !bVar15 && (uVar5 & uVar12) != 0 || (uVar2 & uVar10) != 0;
          *(ulonglong *)(param_1 + uVar14 * 8) = uVar4 | uVar12;
          *(ulonglong *)(param_1 + 0x40 + uVar14 * 8) =
               -(ulonglong)bVar15 & uVar12 | ~uVar12 & uVar5;
          *(ulonglong *)(param_1 + 0x80 + uVar14 * 8) =
               (ulonglong)(byte)((uVar1 & uVar10) == 0 & bStack_82) - 1 & uVar12 | ~uVar12 & uVar7;
          *(ulonglong *)(param_1 + 0xc0 + uVar14 * 8) =
               (ulonglong)(byte)((uVar3 & uVar10) == 0 & bStack_81) - 1 & uVar12 |
               ~uVar12 & uStack_78;
          *(ulonglong *)(param_1 + 0x100 + uVar14 * 8) =
               -(ulonglong)bVar11 & uVar12 | ~uVar12 & uStack_70;
          *(ulonglong *)(param_1 + 0x140 + uVar14 * 8) =
               -(ulonglong)(bVar11 & bVar15) & uVar12 |
               ~uVar12 & *(ulonglong *)(param_1 + 0x140 + uVar14 * 8);
        }
        uVar13 = uVar13 + 1;
        puVar9 = puVar9 + 8;
      } while (uVar13 != 0x1d3);
    }
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 != 0x1d3);
  return;
}

