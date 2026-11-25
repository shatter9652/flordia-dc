// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140004ce0  size: 843 bytes
// Name:    FUN_140004ce0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145561860, FUN_140004b40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140004ce0(longlong param_1,undefined8 *param_2,undefined2 param_3,byte param_4)

{
  int *piVar1;
  ulonglong *puVar2;
  char *pcVar3;
  byte *pbVar4;
  uint *puVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  longlong lVar10;
  uint *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  ulonglong uVar17;
  uint *puVar18;
  uint *puVar19;
  bool bVar20;
  
  if (*(int *)(param_2 + 1) == 0) {
    return;
  }
  puVar2 = (ulonglong *)(param_1 + 0x16860);
  FUN_140004b40(puVar2);
  if ((ulonglong)*(uint *)(param_2 + 1) != 0) {
    puVar19 = (uint *)*param_2;
    puVar5 = puVar19 + *(uint *)(param_2 + 1);
    do {
      uVar7 = *puVar19;
      uVar14 = uVar7 & 0xfffffff;
      uVar8 = uVar14 % 0x1f7;
      if (uVar14 == 0xfffffff) {
        uVar8 = 0xbd;
      }
      lVar10 = (ulonglong)uVar8 * 0xa0;
      uVar6 = *(ushort *)(param_1 + 0x50 + lVar10);
      uVar15 = (ulonglong)uVar6;
      puVar18 = *(uint **)(param_1 + 0x48 + lVar10);
      puVar11 = puVar18;
      uVar13 = uVar15;
      if (uVar15 == 0) {
LAB_140004e33:
        pcVar3 = (char *)(param_1 + 0x40 + lVar10);
        *pcVar3 = '\0';
        if (uVar6 == *(ushort *)(pcVar3 + 0x12)) {
          puVar11 = (uint *)func_0x000144d9c140(4,(uint)uVar6 * 8 + 0x80);
          func_0x000145f40560(puVar11,puVar18,(uint)uVar6 * 8);
          if (puVar11 != (uint *)0x0) {
            puVar11[uVar15 * 2] = 0xfffffff;
            *(undefined2 *)(puVar11 + uVar15 * 2 + 1) = 0;
            *(undefined1 *)((longlong)puVar11 + uVar15 * 8 + 6) = 0;
          }
          puVar11[uVar15 * 2 + 2] = 0xfffffff;
          *(undefined2 *)(puVar11 + uVar15 * 2 + 3) = 0;
          *(undefined1 *)((longlong)puVar11 + uVar15 * 8 + 0xe) = 0;
          puVar11[uVar15 * 2 + 4] = 0xfffffff;
          *(undefined2 *)(puVar11 + uVar15 * 2 + 5) = 0;
          *(undefined1 *)((longlong)puVar11 + uVar15 * 8 + 0x16) = 0;
          puVar11[uVar15 * 2 + 6] = 0xfffffff;
          *(undefined2 *)(puVar11 + uVar15 * 2 + 7) = 0;
          *(undefined1 *)((longlong)puVar11 + uVar15 * 8 + 0x1e) = 0;
          puVar11[uVar15 * 2 + 8] = 0xfffffff;
          *(undefined2 *)(puVar11 + uVar15 * 2 + 9) = 0;
          *(undefined1 *)((longlong)puVar11 + uVar15 * 8 + 0x26) = 0;
          puVar11[uVar15 * 2 + 10] = 0xfffffff;
          *(undefined2 *)(puVar11 + uVar15 * 2 + 0xb) = 0;
          *(undefined1 *)((longlong)puVar11 + uVar15 * 8 + 0x2e) = 0;
          puVar11[uVar15 * 2 + 0xc] = 0xfffffff;
          *(undefined2 *)(puVar11 + uVar15 * 2 + 0xd) = 0;
          *(undefined1 *)((longlong)puVar11 + uVar15 * 8 + 0x36) = 0;
          puVar11[uVar15 * 2 + 0xe] = 0xfffffff;
          *(undefined2 *)(puVar11 + uVar15 * 2 + 0xf) = 0;
          *(undefined1 *)((longlong)puVar11 + uVar15 * 8 + 0x3e) = 0;
          puVar11[uVar15 * 2 + 0x10] = 0xfffffff;
          *(undefined2 *)(puVar11 + uVar15 * 2 + 0x11) = 0;
          *(undefined1 *)((longlong)puVar11 + uVar15 * 8 + 0x46) = 0;
          puVar11[uVar15 * 2 + 0x12] = 0xfffffff;
          *(undefined2 *)(puVar11 + uVar15 * 2 + 0x13) = 0;
          *(undefined1 *)((longlong)puVar11 + uVar15 * 8 + 0x4e) = 0;
          puVar11[uVar15 * 2 + 0x14] = 0xfffffff;
          *(undefined2 *)(puVar11 + uVar15 * 2 + 0x15) = 0;
          *(undefined1 *)((longlong)puVar11 + uVar15 * 8 + 0x56) = 0;
          puVar11[uVar15 * 2 + 0x16] = 0xfffffff;
          *(undefined2 *)(puVar11 + uVar15 * 2 + 0x17) = 0;
          *(undefined1 *)((longlong)puVar11 + uVar15 * 8 + 0x5e) = 0;
          puVar11[uVar15 * 2 + 0x18] = 0xfffffff;
          *(undefined2 *)(puVar11 + uVar15 * 2 + 0x19) = 0;
          *(undefined1 *)((longlong)puVar11 + uVar15 * 8 + 0x66) = 0;
          puVar11[uVar15 * 2 + 0x1a] = 0xfffffff;
          *(undefined2 *)(puVar11 + uVar15 * 2 + 0x1b) = 0;
          *(undefined1 *)((longlong)puVar11 + uVar15 * 8 + 0x6e) = 0;
          puVar11[uVar15 * 2 + 0x1c] = 0xfffffff;
          *(undefined2 *)(puVar11 + uVar15 * 2 + 0x1d) = 0;
          *(undefined1 *)((longlong)puVar11 + uVar15 * 8 + 0x76) = 0;
          puVar11[uVar15 * 2 + 0x1e] = 0xfffffff;
          *(undefined2 *)(puVar11 + uVar15 * 2 + 0x1f) = 0;
          *(undefined1 *)((longlong)puVar11 + uVar15 * 8 + 0x7e) = 0;
          if (puVar18 != (uint *)0x0) {
            func_0x000144d9c130(puVar18);
          }
          *(ushort *)(pcVar3 + 0x12) = uVar6 + 0x10;
          *(uint **)(pcVar3 + 8) = puVar11;
          uVar15 = (ulonglong)*(ushort *)(pcVar3 + 0x10);
          puVar18 = puVar11;
        }
        *(short *)(pcVar3 + 0x10) = (short)uVar15 + 1;
        puVar18[uVar15 * 2] = uVar7;
        pbVar4 = (byte *)((longlong)puVar18 + uVar15 * 8 + 6);
        *pbVar4 = *pbVar4 | param_4;
        *(undefined2 *)(puVar18 + uVar15 * 2 + 1) = param_3;
        if (*pcVar3 == '\0') {
          if ((ulonglong)*(ushort *)(pcVar3 + 0x10) != 0) {
            FUN_145561860(*(longlong *)(pcVar3 + 8),
                          *(longlong *)(pcVar3 + 8) + (ulonglong)*(ushort *)(pcVar3 + 0x10) * 8);
          }
          *pcVar3 = '\x01';
        }
      }
      else {
        do {
          uVar17 = uVar13 >> 1;
          if ((puVar11[uVar17 * 2] & 0xfffffff) != 0xfffffff &&
              ((puVar11[uVar17 * 2] & 0xfffffff) < uVar14 || uVar14 == 0xfffffff)) {
            puVar11 = puVar11 + uVar17 * 2 + 2;
            uVar17 = ~uVar17 + uVar13;
          }
          uVar13 = uVar17;
        } while (0 < (longlong)uVar17);
        if (puVar11 == puVar18 + uVar15 * 2) {
LAB_140004e24:
          if (uVar6 != 0x10) goto LAB_140004e33;
        }
        else {
          bVar20 = uVar14 == 0xfffffff;
          if ((*puVar11 & 0xfffffff) != 0xfffffff) {
            bVar20 = uVar14 == (*puVar11 & 0xfffffff) && uVar14 != 0xfffffff;
          }
          if (!bVar20) goto LAB_140004e24;
          *(byte *)((longlong)puVar11 + 6) = *(byte *)((longlong)puVar11 + 6) | param_4;
          *(undefined2 *)(puVar11 + 1) = param_3;
        }
      }
      puVar19 = puVar19 + 1;
    } while (puVar19 != puVar5);
  }
  piVar1 = (int *)(param_1 + 0x16870);
  *piVar1 = *piVar1 + -1;
  uVar13 = *puVar2;
  if (*piVar1 == 0) {
    do {
      uVar15 = uVar13;
      LOCK();
      uVar13 = *puVar2;
      if (uVar15 == uVar13) {
        *puVar2 = (ulonglong)((int)uVar15 - 1) | 0xffffffff00000000;
        uVar13 = uVar15;
      }
      UNLOCK();
    } while (uVar15 != uVar13);
    if ((uVar15 & 0xfffffffe) != 0) {
      plVar16 = (longlong *)(param_1 + 0x16868);
      lVar10 = *(longlong *)(param_1 + 0x16868);
      do {
        while (lVar10 < 0) {
          cVar9 = FUN_1400062d0(plVar16,1,&stack0xffffffffffffffe0);
          if (cVar9 != '\0') {
            return;
          }
        }
        LOCK();
        lVar12 = *plVar16;
        if (lVar10 == lVar12) {
          *plVar16 = lVar10 + 0x100000000;
          lVar12 = lVar10;
        }
        UNLOCK();
        bVar20 = lVar10 != lVar12;
        lVar10 = lVar12;
      } while (bVar20);
      return;
    }
  }
  return;
}

