// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c00a0  size: 366 bytes
// Name:    FUN_1400c00a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140619950, FUN_140557080, FUN_14559a940
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400c00a0(undefined8 *param_1,ushort *param_2,undefined8 param_3,undefined8 param_4,
                  int *param_5)

{
  short *psVar1;
  short *psVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  ushort uVar8;
  short sVar9;
  ulonglong uVar10;
  short sVar11;
  byte bVar12;
  ulonglong uVar13;
  longlong unaff_GS_OFFSET;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  psVar1 = (short *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1370);
  psVar2 = (short *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12e8);
  sVar9 = *psVar1;
  sVar11 = *psVar2;
  *psVar1 = sVar9 + 1;
  *psVar2 = sVar11 + 1;
  if (param_2[1] != 0) {
    uVar14 = *param_1;
    uVar15 = param_1[1];
    lVar5 = param_1[5];
    uVar6 = param_1[2];
    uVar13 = 0;
    do {
      uVar3 = *(uint *)((ulonglong)*param_2 * 4 + *(longlong *)(lVar5 + 0x18) + uVar13 * 4);
      uVar10 = (ulonglong)((uVar3 & 0xffff) << 4);
      if ((*(short *)(*(longlong *)(_DAT_14abbf348 + 0x28) + 8 + uVar10) == (short)(uVar3 >> 0x10))
         && (lVar7 = *(longlong *)(*(longlong *)(_DAT_14abbf348 + 0x28) + uVar10), lVar7 != 0)) {
        iVar4 = *(int *)(lVar7 + 0x130);
        bVar12 = 0;
        do {
          uStack_68 = uVar14;
          uStack_60 = uVar15;
          FUN_140557080(lVar7,uVar6,param_4,&uStack_68,(ushort)(iVar4 << 8) | (ushort)bVar12);
          bVar12 = bVar12 + 1;
        } while (bVar12 <= (byte)iVar4);
        if (DAT_14a95dea8 != '\0') {
          FUN_14559a940(lVar7);
          uVar8 = FUN_140619950(lVar7,param_3);
          *param_5 = *param_5 + (uint)uVar8;
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < param_2[1]);
    sVar9 = *psVar1 + -1;
    sVar11 = *psVar2 + -1;
  }
  *psVar1 = sVar9;
  *psVar2 = sVar11;
  return;
}

