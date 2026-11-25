// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140007b30  size: 70 bytes
// Name:    FUN_140007b30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_143e42300
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140007b30(short *param_1,undefined8 param_2,uint param_3,undefined4 param_4)

{
  longlong lVar1;
  short *psVar2;
  ushort uVar3;
  ushort uVar4;
  longlong lVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  undefined4 uVar9;
  ushort *puVar10;
  short sVar11;
  byte bVar12;
  short *psVar13;
  ushort *puVar14;
  byte bVar15;
  ulonglong uVar16;
  
  puVar10 = (ushort *)FUN_143e42300(param_2,param_4);
  if (puVar10 == (ushort *)0x0) {
    return;
  }
  *param_1 = (short)((uint)((int)puVar10 - _DAT_1498cc2d0) >> 4) + 1;
  uVar8 = (param_3 & 0xff) << 3;
  *(ulonglong *)(puVar10 + 4) =
       *(ulonglong *)(puVar10 + 4) & *(ulonglong *)(&UNK_14655bd60 + uVar8) |
       *(longlong *)(&UNK_14655bd20 + uVar8) + *(ulonglong *)(puVar10 + 4) &
       *(ulonglong *)(&UNK_14655bd40 + uVar8);
  uVar8 = *(uint *)(puVar10 + 2);
  uVar9 = FUN_144de7da0(uVar8);
  bVar7 = func_0x000144de7e10(*(undefined8 *)(puVar10 + 4),uVar9);
  *(uint *)(puVar10 + 2) = uVar8 & 0xfc7fffff | (uint)bVar7 << 0x17;
  if (uVar8 >> 0x1d == 5) {
    cVar6 = FUN_144dabe00();
    if (cVar6 == '\0') {
      uVar8 = *(uint *)(puVar10 + 2);
      bVar12 = 5;
      bVar7 = (byte)(uVar8 >> 0x17) & 7;
      bVar15 = (byte)(uVar8 >> 0x1a) & 7;
      if (bVar7 != bVar15) {
        bVar12 = ((uVar8 & 0x1c000000) != 0x10000000 && bVar7 < bVar15) + 1;
      }
      uVar8 = *(uint *)(puVar10 + 2);
      if ((byte)(uVar8 >> 0x1d) != bVar12) {
        if (uVar8 < 0xa0000000) {
          uVar3 = *puVar10;
          lVar5 = CONCAT44(uRam00000001498cc2d4,_DAT_1498cc2d0);
          uVar4 = puVar10[1];
          lVar1 = (ulonglong)(uVar8 >> 0x1d) * 4;
          puVar14 = (ushort *)(lVar5 + 2 + (ulonglong)(uVar3 - 1) * 0x10);
          if (uVar3 == 0) {
            puVar14 = (ushort *)(lVar1 + 0x1498d26a8);
          }
          *puVar14 = uVar4;
          if (uVar4 == 0) {
            *(ushort *)(lVar1 + 0x1498d26aa) = uVar3;
          }
          else {
            *(ushort *)(lVar5 + (ulonglong)(uVar4 - 1) * 0x10) = uVar3;
          }
          puVar10[0] = 0;
          puVar10[1] = 0;
          uVar8 = *(uint *)(puVar10 + 2);
        }
        uVar16 = (ulonglong)bVar12;
        *(uint *)(puVar10 + 2) = uVar8 & 0x1fffffff | (uint)bVar12 << 0x1d;
        if (bVar12 < 5) {
          psVar13 = (short *)(uVar16 * 4 + 0x1498d26a8);
          psVar2 = (short *)(uVar16 * 4 + 0x1498d26aa);
          uVar3 = *(ushort *)(uVar16 * 4 + 0x1498d26aa);
          *puVar10 = uVar3;
          sVar11 = (short)((uint)((int)puVar10 - _DAT_1498cc2d0) >> 4) + 1;
          if (uVar3 != 0) {
            psVar13 = psVar2;
            psVar2 = (short *)(CONCAT44(uRam00000001498cc2d4,_DAT_1498cc2d0) + 2 +
                              (ulonglong)(uVar3 - 1) * 0x10);
          }
          *psVar2 = sVar11;
          *psVar13 = sVar11;
        }
      }
      return;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000144de7d77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_14675b7e0 + *(int *)(&UNK_14675b7e0 + (ulonglong)(uVar8 >> 0x1d) * 4)))();
  return;
}

