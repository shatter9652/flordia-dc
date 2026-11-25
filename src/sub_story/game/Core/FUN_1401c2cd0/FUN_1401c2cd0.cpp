// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401c2cd0  size: 896 bytes
// Name:    FUN_1401c2cd0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_143e1c290
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401c2cd0(longlong *param_1,longlong param_2,uint param_3)

{
  uint *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  int *piVar13;
  uint uVar14;
  longlong lVar15;
  int iVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  byte bVar19;
  ulonglong uVar20;
  longlong unaff_GS_OFFSET;
  bool bVar21;
  int aiStack_c8 [2];
  undefined8 uStack_c0;
  char acStack_b6 [6];
  uint *puStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  int *piStack_98;
  ulonglong uStack_90;
  ulonglong uStack_88;
  longlong lStack_80;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  
  puVar1 = (uint *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0xff4);
  *puVar1 = param_3;
  if (param_3 == 0) {
    do {
      cVar6 = (**(code **)(*param_1 + 0x10))(param_1[1],param_1[2]);
    } while (cVar6 == '\0');
    lVar10 = param_1[2];
    lVar15 = *(longlong *)(lVar10 + 0x3a48);
    lVar8 = *(longlong *)(lVar10 + 0x3a50);
    auVar2 = vpaddq_avx(*(undefined1 (*) [16])(lVar10 + 0x3a20),
                        *(undefined1 (*) [16])(lVar10 + 0x3a30));
    auVar3 = vpshufd_avx(auVar2,0xee);
    auVar2 = vpaddq_avx(auVar2,auVar3);
    lVar12 = *(longlong *)(lVar10 + 0x3a40);
    *(undefined8 *)(lVar10 + 0x3a38) = 0;
    *(undefined8 *)(lVar10 + 0x3a40) = 0;
    *(undefined8 *)(lVar10 + 0x3a48) = 0;
    *(undefined8 *)(lVar10 + 0x3a50) = 0;
    *(undefined8 *)(lVar10 + 0x3a28) = 0;
    *(undefined8 *)(lVar10 + 0x3a30) = 0;
    *(undefined8 *)(lVar10 + 0x3a38) = 0;
    *(undefined8 *)(lVar10 + 0x3a40) = 0;
    *(longlong *)(lVar10 + 0x3a20) = lVar15 + lVar8 + auVar2._0_8_ + lVar12;
    *puVar1 = 0;
    return;
  }
  aiStack_c8[0] = 0;
  puStack_b0 = puVar1;
  uStack_c0 = func_0x0001419ecd00();
  uVar17 = (ulonglong)param_3;
  lVar10 = param_2 + 8;
  piStack_98 = (int *)(param_2 + 0x58);
  uVar20 = 0;
  lVar15 = uVar17 * 0x58;
  lStack_a8 = lVar15;
  lStack_a0 = param_2;
  uStack_88 = uVar17;
  lStack_80 = lVar10;
  do {
    bVar5 = (**(code **)(*param_1 + 0x10))();
    bVar19 = (byte)uVar20 | bVar5;
    uVar20 = CONCAT71((int7)(uVar20 >> 8),bVar19);
    if ((bVar19 & 1) != 0) {
      if (bVar5 != 0) {
        uVar11 = 1;
        lVar12 = 0;
        lVar8 = 0;
        do {
          uVar7 = *(uint *)(*(longlong *)(param_2 + 0x30 + lVar12) + 0x10);
          bVar21 = uVar11 < uVar7;
          if (uVar11 <= uVar7) {
            uVar11 = uVar7;
          }
          if (bVar21) {
            lVar8 = lVar10 + lVar12;
          }
          lVar12 = lVar12 + 0x58;
        } while (lVar15 != lVar12);
        if ((lVar8 == 0) || (lVar8 = FUN_143e1c290(*(undefined8 *)(lVar8 + 0x28)), lVar8 == 0)) {
          if (aiStack_c8[0] != 0) {
            LOCK();
            UNLOCK();
            if (aiStack_c8[0] != 0) {
              aiStack_c8[0] = aiStack_c8[0] + -0x80000000;
              func_0x0001401784d0(uStack_c0);
            }
            aiStack_c8[0] = 0;
          }
          lVar10 = param_1[2];
          lVar15 = *(longlong *)(lVar10 + 0x3a48);
          lVar8 = *(longlong *)(lVar10 + 0x3a50);
          auVar2 = vpaddq_avx(*(undefined1 (*) [16])(lVar10 + 0x3a20),
                              *(undefined1 (*) [16])(lVar10 + 0x3a30));
          auVar3 = vpshufd_avx(auVar2,0xee);
          auVar2 = vpaddq_avx(auVar2,auVar3);
          lVar12 = *(longlong *)(lVar10 + 0x3a40);
          *(undefined8 *)(lVar10 + 0x3a38) = 0;
          *(undefined8 *)(lVar10 + 0x3a40) = 0;
          *(undefined8 *)(lVar10 + 0x3a48) = 0;
          *(undefined8 *)(lVar10 + 0x3a50) = 0;
          *(undefined8 *)(lVar10 + 0x3a28) = 0;
          *(undefined8 *)(lVar10 + 0x3a30) = 0;
          *(undefined8 *)(lVar10 + 0x3a38) = 0;
          *(undefined8 *)(lVar10 + 0x3a40) = 0;
          *(longlong *)(lVar10 + 0x3a20) = lVar15 + lVar8 + auVar2._0_8_ + lVar12;
          *puStack_b0 = 0;
          func_0x000141534710(uStack_c0);
          return;
        }
        func_0x000143e1c2f0(param_1[1],lVar8);
      }
      if (2 < *(ulonglong *)(param_1[1] + 0x10)) {
        uVar9 = 0;
        uVar11 = 0;
        piVar13 = piStack_98;
        do {
          if (*(longlong *)(param_1[1] + 0x10) == 0) break;
          iVar16 = *piVar13;
          acStack_b6[uVar9] = iVar16 == 0;
          uVar9 = uVar9 + 1;
          piVar13 = piVar13 + 0x16;
          uVar11 = uVar11 + (iVar16 == 0);
        } while (uVar17 != uVar9);
        if (uVar11 != 0) {
          uStack_90 = uVar20;
          auStack_58 = (undefined1  [16])0x0;
          auStack_78._12_4_ = 0;
          auStack_78._0_12_ = ZEXT812(0);
          auStack_68 = (undefined1  [16])0x0;
          uVar7 = *(uint *)(param_1[1] + 0x10);
          uVar4 = uVar7 - 1;
          if (3 < uVar7) {
            uVar4 = uVar7 >> 2;
          }
          uVar7 = uVar7 - uVar4;
          if (uVar7 < uVar11) {
            uVar11 = uVar7;
          }
          uVar20 = 0;
          iVar16 = 0;
          do {
            if (*(ulonglong *)(param_1[1] + 0x10) <= (ulonglong)uVar4) break;
            if (acStack_b6[uVar20] == '\x01') {
              uVar14 = 0;
              puVar18 = (undefined8 *)(uVar20 * 0x58 + lVar10);
              lVar10 = 0;
              do {
                lVar15 = lVar10;
                if (*(uint *)(param_1[1] + 0x10) <= uVar4) break;
                lVar15 = func_0x000143e1c390();
                if (lVar10 != 0) {
                  *(longlong *)(lVar15 + 8) = lVar10;
                }
                uVar14 = uVar14 + 1;
                lVar10 = lVar15;
              } while (uVar14 < uVar7 / uVar11);
              func_0x000143e1c2f0(puVar18[5],lVar15);
              LOCK();
              if (*(int *)(puVar18 + 10) == 0) {
                *(int *)(puVar18 + 10) = 1;
              }
              UNLOCK();
              *puVar18 = FUN_143e1c320;
              *(undefined2 *)((longlong)puVar18 + 0xc) = 0x1000;
              *(undefined4 *)(puVar18 + 1) = 0;
              puVar18[2] = puVar18;
              puVar18[3] = aiStack_c8;
              lVar10 = (longlong)iVar16;
              iVar16 = iVar16 + 1;
              *(undefined8 **)(auStack_78 + lVar10 * 8) = puVar18;
              uVar17 = uStack_88;
              lVar10 = lStack_80;
            }
            uVar20 = uVar20 + 1;
          } while (uVar20 != uVar17);
          lVar15 = lStack_a8;
          param_2 = lStack_a0;
          uVar20 = uStack_90;
          if (iVar16 != 0) {
            LOCK();
            aiStack_c8[0] = aiStack_c8[0] + iVar16;
            UNLOCK();
            func_0x000144da40e0(auStack_78,iVar16);
            lVar15 = lStack_a8;
            param_2 = lStack_a0;
            uVar20 = uStack_90;
          }
        }
      }
    }
    uVar20 = uVar20 ^ 1;
  } while( true );
}

