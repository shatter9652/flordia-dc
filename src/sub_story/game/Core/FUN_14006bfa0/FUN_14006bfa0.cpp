// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006bfa0  size: 1318 bytes
// Name:    FUN_14006bfa0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140004b40, FUN_14006c4f0, FUN_14006bd80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14006bfa0(longlong param_1,byte param_2,undefined8 param_3,ulonglong param_4)

{
  code *pcVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  uint uVar7;
  code *pcVar8;
  undefined7 uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined1 auVar15 [64];
  byte bStack_21e;
  byte bStack_21d;
  uint uStack_21c;
  code *pcStack_218;
  longlong lStack_210;
  byte bStack_208;
  undefined1 auStack_200 [80];
  code *pcStack_1b0;
  code *pcStack_1a8;
  code *pcStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [80];
  undefined1 auStack_140 [16];
  undefined8 uStack_130;
  undefined1 auStack_128 [80];
  undefined1 auStack_d8 [16];
  undefined8 uStack_c8;
  undefined1 auStack_c0 [80];
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  
  lStack_210 = param_1 + 200;
  FUN_140004b40();
  if (*(int *)(param_1 + 0x14) != 0) {
    auVar15 = ZEXT1264(ZEXT812(0));
    uVar13 = 0;
    uStack_21c = _DAT_14abbef40;
    bStack_21d = param_2;
    do {
      iVar10 = (int)uVar13;
      lVar12 = *(longlong *)(param_1 + 0x18);
      lVar11 = uVar13 * 0x78;
      bStack_208 = *(byte *)(lVar12 + lVar11);
      lVar4 = lVar12 + lVar11;
      pcVar8 = *(code **)(lVar12 + 0x60 + lVar11);
      if (pcVar8 != (code *)0x0) {
        (*pcVar8)(auStack_200,lVar4 + 0x17U & 0xfffffffffffffff0);
      }
      pcVar1 = *(code **)(lVar4 + 0x58);
      pcStack_1a0 = *(code **)(lVar4 + 0x68);
      uStack_198 = *(ulonglong *)(lVar4 + 0x70);
      uVar7 = (uint)uStack_198;
      pcStack_1b0 = pcVar1;
      pcStack_1a8 = pcVar8;
      if (param_2 == 0) {
        if ((bStack_208 & 8) == 0) {
          if (uVar7 <= uStack_21c) {
            bVar14 = false;
            goto LAB_14006c092;
          }
        }
        else if (uVar7 <= uStack_21c) {
          uVar7 = *(uint *)(param_1 + 0x14);
          lVar4 = *(longlong *)(param_1 + 0x18);
          puVar6 = (undefined1 *)(lVar4 + 0x78 + lVar11);
          puVar5 = (undefined1 *)((ulonglong)uVar7 * 0x78 + lVar4);
          if (puVar6 != puVar5) {
            uVar13 = lVar4 + 0x8f + lVar11;
            do {
              puVar6[-0x78] = *puVar6;
              if (*(code **)(puVar6 + -0x10) != (code *)0x0) {
                (**(code **)(puVar6 + -0x10))(uVar13 - 0x78 & 0xfffffffffffffff0);
              }
              pcVar8 = *(code **)(puVar6 + 0x60);
              if (pcVar8 != (code *)0x0) {
                (*pcVar8)(uVar13 - 0x78 & 0xfffffffffffffff0,uVar13 & 0xfffffffffffffff0);
              }
              uVar13 = uVar13 + 0x78;
              *(undefined8 *)(puVar6 + -0x20) = *(undefined8 *)(puVar6 + 0x58);
              *(code **)(puVar6 + -0x18) = pcVar8;
              *(undefined8 *)(puVar6 + -0x10) = *(undefined8 *)(puVar6 + 0x68);
              *(undefined8 *)(puVar6 + -8) = *(undefined8 *)(puVar6 + 0x70);
              puVar6 = puVar6 + 0x78;
            } while (puVar6 != puVar5);
            lVar4 = *(longlong *)(param_1 + 0x18);
            uVar7 = *(uint *)(param_1 + 0x14);
          }
          iVar10 = iVar10 + -1;
          lVar12 = (ulonglong)(uVar7 - 1) * 0x78;
          *(uint *)(param_1 + 0x14) = uVar7 - 1;
          pcVar8 = *(code **)(lVar4 + 0x68 + lVar12);
          if (pcVar8 != (code *)0x0) {
            (*pcVar8)(lVar4 + lVar12 + 0x17U & 0xfffffffffffffff0);
          }
        }
      }
      else if ((bStack_208 & 8) != 0) {
        bVar14 = uStack_21c < uVar7;
LAB_14006c092:
        lVar4 = func_0x00014006bd30(*(undefined4 *)(param_1 + 0x6c),*(undefined8 *)(param_1 + 0x70),
                                    uStack_198 >> 0x20);
        bVar2 = 0;
        bStack_21e = 0;
        if ((bStack_21d & lVar4 == 0) == 0) {
          if (pcVar1 == (code *)0x0) {
            bVar2 = 1;
          }
          else {
            bVar2 = (*pcVar1)(auStack_200,&bStack_21e);
          }
        }
        bVar2 = bStack_21e == 0 & bVar2;
        if (bVar14) {
          if (bVar2 != 0) goto LAB_14006c154;
LAB_14006c14f:
          if ((bStack_21e & 1) != 0) goto LAB_14006c154;
        }
        else {
          if (pcStack_1b0 != (code *)0x0 && bVar2 == 0) goto LAB_14006c14f;
LAB_14006c154:
          uVar7 = *(uint *)(param_1 + 0x14);
          lVar12 = *(longlong *)(param_1 + 0x18);
          puVar6 = (undefined1 *)(lVar12 + 0x78 + lVar11);
          puVar5 = (undefined1 *)((ulonglong)uVar7 * 0x78 + lVar12);
          if (puVar6 != puVar5) {
            uVar13 = lVar12 + 0x8f + lVar11;
            do {
              puVar6[-0x78] = *puVar6;
              if (*(code **)(puVar6 + -0x10) != (code *)0x0) {
                (**(code **)(puVar6 + -0x10))(uVar13 - 0x78 & 0xfffffffffffffff0);
              }
              pcVar8 = *(code **)(puVar6 + 0x60);
              if (pcVar8 != (code *)0x0) {
                pcStack_218 = pcVar8;
                (*pcVar8)(uVar13 - 0x78 & 0xfffffffffffffff0,uVar13 & 0xfffffffffffffff0);
                pcVar8 = pcStack_218;
              }
              uVar13 = uVar13 + 0x78;
              *(undefined8 *)(puVar6 + -0x20) = *(undefined8 *)(puVar6 + 0x58);
              *(code **)(puVar6 + -0x18) = pcVar8;
              *(undefined8 *)(puVar6 + -0x10) = *(undefined8 *)(puVar6 + 0x68);
              *(undefined8 *)(puVar6 + -8) = *(undefined8 *)(puVar6 + 0x70);
              puVar6 = puVar6 + 0x78;
            } while (puVar6 != puVar5);
            lVar12 = *(longlong *)(param_1 + 0x18);
            uVar7 = *(uint *)(param_1 + 0x14);
          }
          iVar10 = iVar10 + -1;
          lVar11 = (ulonglong)(uVar7 - 1) * 0x78;
          *(uint *)(param_1 + 0x14) = uVar7 - 1;
          pcVar8 = *(code **)(lVar11 + lVar12 + 0x68);
          if (pcVar8 != (code *)0x0) {
            (*pcVar8)(lVar11 + lVar12 + 0x17 & 0xfffffffffffffff0);
          }
        }
        if (uStack_198._4_4_ == -0x76f1df1d) {
          cVar3 = FUN_14006bd80(*(undefined8 *)(param_1 + 8),*(undefined1 *)(param_1 + 0x61));
          if (cVar3 == '\0') {
            uVar7 = *(uint *)(param_1 + 0x6c);
            if ((ulonglong)uVar7 != 0) {
              lVar4 = *(longlong *)(param_1 + 0x70);
              lVar12 = 0;
              do {
                bVar2 = *(byte *)(lVar4 + 0x25 + lVar12) & 0xf;
                if ((bVar2 != 1) && (bVar2 != 4)) {
                  param_4 = 0;
                  auStack_d8 = auVar15._0_16_;
                  uStack_c8 = 0;
                  FUN_14006c4f0(param_1,*(longlong *)(lVar4 + 8 + lVar12) + 0x10,10,0,0,0,0,0,
                                auStack_128,0);
                }
                lVar12 = lVar12 + 0x28;
              } while ((ulonglong)uVar7 * 0x28 != lVar12);
            }
            uVar7 = *(uint *)(param_1 + 0x14);
            if ((ulonglong)uVar7 != 0) {
              lVar4 = *(longlong *)(param_1 + 0x18);
              lVar12 = 0;
              do {
                pcVar8 = *(code **)(lVar4 + 0x68 + lVar12);
                if (pcVar8 != (code *)0x0) {
                  (*pcVar8)(lVar4 + 0x17 + lVar12 & 0xfffffffffffffff0);
                }
                lVar12 = lVar12 + 0x78;
              } while ((ulonglong)uVar7 * 0x78 - lVar12 != 0);
            }
            *(undefined4 *)(param_1 + 0x14) = 0;
            *(byte *)(param_1 + 0x61) = *(byte *)(param_1 + 0x61) | 0x80;
          }
          else {
LAB_14006c220:
            if (bVar2 == 1 && lVar4 != 0) {
              uVar9 = (undefined7)(param_4 >> 8);
              auStack_140 = auVar15._0_16_;
              uStack_130 = 0;
              uVar13 = CONCAT71(uVar9,bStack_208) & 0xffffffff;
              param_4 = CONCAT71(uVar9,bStack_208) & 0xffffffffffffff01;
              FUN_14006c4f0(param_1,(longlong)&uStack_198 + 4,
                            CONCAT71((int7)(uVar13 >> 8),(byte)uVar13 >> 4),param_4,
                            (bStack_208 & 2) >> 1,(bStack_208 & 4) >> 2,0,0,auStack_190,0);
            }
          }
        }
        else if (uStack_198._4_4_ == 0x1d9fe65) {
          *(byte *)(param_1 + 0x62) = *(byte *)(param_1 + 0x62) & 0xfd;
        }
        else {
          if (uStack_198._4_4_ != 0x35d5d599) goto LAB_14006c220;
          *(byte *)(param_1 + 0x62) = *(byte *)(param_1 + 0x62) & 0xfe;
          auStack_70 = auVar15._0_16_;
          uStack_60 = 0;
          param_4 = CONCAT71((int7)(param_4 >> 8),bStack_208) & 0xffffffffffffff01;
          FUN_14006c4f0(param_1,&UNK_146700b8c,10,param_4,0,0,0,0,auStack_c0,0);
        }
      }
      if (pcStack_1a0 != (code *)0x0) {
        (*pcStack_1a0)(auStack_200);
      }
      uVar13 = (ulonglong)(iVar10 + 1U);
    } while (iVar10 + 1U < *(uint *)(param_1 + 0x14));
  }
  *(byte *)(param_1 + 0x61) = *(byte *)(param_1 + 0x61) & 0xfe;
  func_0x000144d9dab0(lStack_210);
  return;
}

