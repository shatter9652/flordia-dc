// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401167c0  size: 614 bytes
// Name:    FUN_1401167c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401167c0(int *param_1,uint param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  longlong *plVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  
  uVar10 = param_2 >> 4;
  param_2 = param_2 & 0xf;
  uVar5 = uVar10;
  do {
    lVar6 = *(longlong *)(param_1 + 2);
    lVar17 = (ulonglong)uVar10 * 400;
    lVar9 = lVar6 + lVar17;
    auVar4 = vpsignb_avx(*(undefined1 (*) [16])(lVar6 + lVar17),
                         *(undefined1 (*) [16])(lVar6 + lVar17));
    uVar18 = 0;
    uVar7 = (uint)(ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar4[0xf] >> 7) << 0xf);
    for (uVar11 = uVar7; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
      uVar18 = uVar18 + 1;
    }
    if (uVar7 == 0) {
      uVar18 = 0x10;
    }
    if (uVar10 != uVar5) {
      if (uVar18 != 0) {
        iVar1 = *param_1;
        plVar12 = (longlong *)(lVar9 + 0x10);
        uVar16 = 0;
LAB_1401168ff:
        uVar14 = (*plVar12 + 0x651e95c4d06fbfb1U ^ (ulonglong)*(uint *)(plVar12 + 1)) *
                 -0x622015f714c7d297;
        lVar15 = (uVar14 >> 0x2f ^ *(uint *)(plVar12 + 1) ^ uVar14) * -0x622015f714c7d297;
        uVar11 = ((uint)((ulonglong)lVar15 >> 0x2f) ^ (uint)lVar15) * -0x14c7d297 >> 7 & iVar1 - 1U;
        iVar13 = 0;
        if (uVar5 < uVar11) {
          iVar13 = iVar1;
        }
        iVar8 = 0;
        if (uVar10 < uVar11) {
          iVar8 = iVar1;
        }
        if (iVar8 + (uVar10 - uVar11) < iVar13 + (uVar5 - uVar11)) break;
        uVar14 = (ulonglong)param_2;
        lVar6 = lVar6 + (ulonglong)uVar5 * 400;
        *(undefined1 *)(uVar14 + lVar6) = *(undefined1 *)(lVar9 + uVar16);
        *(longlong *)(lVar6 + 0x10 + uVar14 * 0x18) = *plVar12;
        *(int *)(lVar6 + 0x18 + uVar14 * 0x18) = (int)plVar12[1];
        puVar2 = *(undefined8 **)(lVar6 + 0x20 + uVar14 * 0x18);
        puVar3 = (undefined8 *)plVar12[2];
        if (puVar2 != puVar3) {
          plVar12[2] = 0;
          *(undefined8 **)(lVar6 + uVar14 * 0x18 + 0x20) = puVar3;
          if (puVar2 != (undefined8 *)0x0) {
            (**(code **)*puVar2)(puVar2,1);
          }
        }
        auVar4 = *(undefined1 (*) [16])(*(longlong *)(param_1 + 2) + lVar17);
        lVar9 = *(longlong *)(param_1 + 2) + lVar17;
        auVar4 = vpsignb_avx(auVar4,auVar4);
        uVar5 = 0;
        uVar11 = (uint)(ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar4[0xf] >> 7) << 0xf);
        for (uVar18 = uVar11; (uVar18 & 1) == 0; uVar18 = uVar18 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar18 = 0x10;
        if (uVar11 != 0) {
          uVar18 = uVar5;
        }
        goto LAB_140116822;
      }
      goto LAB_14011689e;
    }
    uVar16 = (ulonglong)param_2;
LAB_140116822:
    uVar11 = uVar18 - 1;
    param_2 = (uint)uVar16;
    uVar5 = uVar10;
    if (uVar11 != (uint)uVar16) {
      uVar14 = (ulonglong)uVar11;
      uVar16 = uVar16 & 0xffffffff;
      *(undefined1 *)(lVar9 + uVar16) = *(undefined1 *)(lVar9 + uVar14);
      *(undefined8 *)(lVar9 + 0x10 + uVar16 * 0x18) = *(undefined8 *)(lVar9 + 0x10 + uVar14 * 0x18);
      *(undefined4 *)(lVar9 + 0x18 + uVar16 * 0x18) = *(undefined4 *)(lVar9 + 0x18 + uVar14 * 0x18);
      puVar2 = *(undefined8 **)(lVar9 + 0x20 + uVar16 * 0x18);
      puVar3 = *(undefined8 **)(lVar9 + 0x20 + uVar14 * 0x18);
      param_2 = uVar11;
      if (puVar2 != puVar3) {
        *(undefined8 *)(lVar9 + uVar14 * 0x18 + 0x20) = 0;
        *(undefined8 **)(lVar9 + uVar16 * 0x18 + 0x20) = puVar3;
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
    }
LAB_140116888:
    if (uVar18 != 0x10) {
      lVar6 = *(longlong *)(param_1 + 2);
LAB_14011689e:
      lVar6 = (ulonglong)uVar5 * 400 + lVar6;
      *(undefined1 *)((ulonglong)param_2 + lVar6) = 0x80;
      puVar2 = *(undefined8 **)(lVar6 + 0x20 + (ulonglong)param_2 * 0x18);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      param_1[1] = param_1[1] + -1;
      return;
    }
    uVar10 = uVar10 + 1 & *param_1 - 1U;
  } while( true );
  uVar16 = uVar16 + 1;
  plVar12 = plVar12 + 3;
  if (uVar18 == uVar16) goto LAB_140116888;
  goto LAB_1401168ff;
}

