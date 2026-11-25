// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140034470  size: 944 bytes
// Name:    FUN_140034470
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144da5ae0, FUN_144dac930, FUN_140250850, FUN_140a61320, FUN_1400746e0, FUN_144dacc50, FUN_142698440, FUN_144ec9110
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140034470(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auVar4 [32];
  bool bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  longlong unaff_GS_OFFSET;
  undefined1 auVar15 [16];
  int iStack_148;
  undefined4 uStack_144;
  longlong lStack_140;
  longlong lStack_138;
  longlong lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [32];
  undefined1 auStack_c8 [32];
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [32];
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x100) + 0x1a0);
  if (*(longlong *)(param_1 + 0x460) != 0) {
    FUN_140250850(param_1);
  }
  plVar3 = *(longlong **)(param_1 + 0x110);
  if (plVar3 != (longlong *)0x0) {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    if (*(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1448) == 0) {
      auVar15._0_12_ = ZEXT812(0);
      auVar15._12_4_ = 0;
      auStack_68 = ZEXT1632(auVar15);
      auStack_88 = ZEXT1632(auVar15);
      auStack_a8 = ZEXT1632(auVar15);
      auStack_c8 = ZEXT1632(auVar15);
    }
    if ((*(byte *)(param_1 + 0x51a) & 2) != 0) {
      FUN_142698440(auStack_c8,param_1);
      lVar12 = *(longlong *)(param_1 + 0x450);
      if (lVar12 != 0) {
        do {
          FUN_142698440(auStack_c8,lVar12);
          lVar12 = *(longlong *)(lVar12 + 0x438);
        } while (lVar12 != 0);
      }
    }
    iVar13 = *(int *)((longlong)plVar2 + 0x1d4);
    if (0 < iVar13) {
      uVar14 = 0;
      do {
        lVar12 = *(longlong *)(param_1 + 0x1c8);
        if ((*(byte *)(lVar12 + 4 + uVar14 * 6) & 1) == 0) {
          iVar7 = func_0x000144e33d10(plVar2[0x33],(int)plVar2[0x3a],uVar14 & 0xffffffff);
          if (iVar7 != 0) goto LAB_1400345ab;
        }
        else {
LAB_1400345ab:
          iVar13 = *(int *)(param_1 + 0x1c4);
          uVar9 = uVar14;
          if ((longlong)uVar14 < (longlong)iVar13) {
LAB_1400345ba:
            uVar8 = (uint)*(short *)(lVar12 + 2 + uVar9 * 6);
            if ((uVar8 == 0xffffffff) ||
               ((*(uint *)(auStack_c8 + (ulonglong)(uVar8 >> 5) * 4) >> (uVar8 & 0x1f) & 1) == 0))
            goto LAB_14003469e;
            FUN_144ec9110(param_1,uVar14 & 0xffffffff,4);
            bVar5 = false;
          }
          else {
            lStack_130 = *(longlong *)(param_1 + 0x100);
            lStack_138 = *(longlong *)(lStack_130 + 0x1a0);
            lVar11 = lStack_130;
            if (lStack_138 == 0) {
              lVar11 = *(longlong *)(param_1 + 0x468);
              if (lVar11 == 0) {
                lVar11 = *(longlong *)(param_1 + 0x4a0);
              }
              lVar11 = *(longlong *)(lVar11 + 0x100);
            }
            if ((longlong)uVar14 < (longlong)*(int *)(*(longlong *)(lVar11 + 0x178) + 0x1d4)) {
              lStack_140 = *(longlong *)(param_1 + 0x468);
              if (lStack_140 == 0) {
                lStack_140 = *(longlong *)(param_1 + 0x4a0);
              }
              uVar9 = uVar14 & 0xffffffff;
              do {
                lVar11 = lStack_130;
                if (lStack_138 == 0) {
                  lVar11 = *(longlong *)(lStack_140 + 0x100);
                }
                uVar9 = func_0x000144e2c200(*(undefined8 *)(lVar11 + 0x178),uVar9 & 0xffffffff);
                if ((int)uVar9 == -1) goto LAB_14003469e;
              } while (iVar13 <= (int)uVar9);
              uVar9 = uVar9 & 0xffffffff;
              goto LAB_1400345ba;
            }
LAB_14003469e:
            FUN_144dacc50(param_1,uVar14 & 0xffffffff,4);
            bVar5 = true;
          }
          uStack_144 = 0;
          cVar6 = FUN_140a61320(plVar2,uVar14 & 0xffffffff,&uStack_144);
          if (cVar6 != '\0') {
            iStack_148 = -1;
            cVar6 = FUN_1400746e0(plVar3,uStack_144,&iStack_148);
            if (cVar6 != '\0') {
              cVar6 = func_0x0001450261f0(param_1,uVar14 & 0xffffffff,0xfb);
              lVar12 = (longlong)iStack_148;
              if (bVar5 || cVar6 != '\0') {
                func_0x000144f43dd0();
              }
              else {
                func_0x000140007d30(plVar3,iStack_148);
              }
              lVar11 = (longlong)
                       *(short *)((longlong)(int)*(uint *)(plVar2 + 0x3b) * 0x60 + *plVar2 + 0x30 +
                                 uVar14 * 2);
              if (lVar11 == -1) {
                FUN_144da5ae0(plVar2,&uStack_128,uVar14 & 0xffffffff);
              }
              else {
                lVar11 = lVar11 * 0x30;
                lVar10 = *plVar2 + (ulonglong)*(uint *)(plVar2 + 0x3b) * 0x30;
                puVar1 = (undefined8 *)(lVar11 + 0x30 + lVar10);
                uStack_128 = *puVar1;
                uStack_120 = puVar1[1];
                uStack_118 = puVar1[2];
                uStack_110 = puVar1[3];
                lVar10 = lVar11 + 0x40 + lVar10;
                uStack_108 = *(undefined8 *)(lVar10 + 0x10);
                uStack_100 = *(undefined8 *)(lVar10 + 0x18);
              }
              auVar4._8_8_ = uStack_110;
              auVar4._0_8_ = uStack_118;
              auVar4._16_8_ = uStack_108;
              auVar4._24_8_ = uStack_100;
              uStack_f8 = uStack_128;
              uStack_f0 = uStack_120;
              auStack_e8._16_16_ = auVar4._16_16_;
              auStack_e8._8_8_ = uStack_110;
              auStack_e8._0_8_ = uStack_118;
              lVar12 = (longlong)
                       *(short *)((longlong)(int)*(uint *)(plVar3 + 0x3b) * 0x60 + *plVar3 + 0x30 +
                                 lVar12 * 2);
              if (lVar12 != -1) {
                lVar12 = lVar12 * 0x30;
                lVar11 = *plVar3 + (ulonglong)*(uint *)(plVar3 + 0x3b) * 0x30;
                *(undefined1 (*) [32])(lVar12 + 0x40 + lVar11) = auStack_e8;
                puVar1 = (undefined8 *)(lVar12 + 0x30 + lVar11);
                *puVar1 = uStack_128;
                puVar1[1] = uStack_120;
                puVar1[2] = uStack_118;
                puVar1[3] = uStack_110;
              }
            }
          }
          iVar13 = *(int *)((longlong)plVar2 + 0x1d4);
        }
        uVar14 = uVar14 + 1;
      } while ((longlong)uVar14 < (longlong)iVar13);
    }
  }
  FUN_144dac930(param_1);
  *(byte *)(param_1 + 0x51c) = *(byte *)(param_1 + 0x51c) & 0x8f;
  return;
}

