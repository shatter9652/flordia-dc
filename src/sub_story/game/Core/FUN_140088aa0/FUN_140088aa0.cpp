// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140088aa0  size: 457 bytes
// Name:    FUN_140088aa0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144db6760
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140088aa0(undefined8 *param_1,int *param_2,uint *param_3)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  undefined1 auVar5 [32];
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auVar16 [16];
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  undefined8 uStack_6c;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  undefined1 auStack_54 [20];
  
  lVar12 = param_1[1];
  if (*(int *)(lVar12 + 0x5c) != 0) {
    uVar13 = 0;
    do {
      if (((*param_3 <= (uint)param_2[1]) &&
          ((*(byte *)(*(longlong *)(lVar12 + 0x50) + 0x22) & 2) == 0)) &&
         (lVar9 = func_0x000144db6910(*(undefined8 *)(lVar12 + 0x60),uVar13),
         -1 < (char)*(byte *)(lVar9 + 0xc) && (*(byte *)(lVar9 + 0xc) & 0x3e) < 0xe)) {
        return;
      }
      pauVar10 = (undefined1 (*) [16])func_0x000144e3bfa0(*param_1);
      pauVar11 = (undefined1 (*) [16])func_0x00014541eed0(*(undefined8 *)(lVar12 + 0x60),uVar13);
      auVar2 = vcmpps_avx(*pauVar10,pauVar11[1],2);
      auVar3 = vcmpps_avx(*pauVar11,pauVar10[1],2);
      auVar16._0_4_ = auVar3._0_4_ & auVar2._0_4_;
      auVar16._4_4_ = auVar3._4_4_ & auVar2._4_4_;
      auVar16._8_4_ = auVar3._8_4_ & auVar2._8_4_;
      auVar16._12_4_ = auVar3._12_4_ & auVar2._12_4_;
      uVar7 = vmovmskps_avx(auVar16);
      if ((~(byte)uVar7 & 7) == 0) {
        func_0x0001455cab60(&uStack_94);
        cVar6 = FUN_144db6760(&uStack_94,lVar12,uVar13);
        if (cVar6 != '\0') {
          lVar12 = *(longlong *)(param_2 + 2);
          iVar8 = param_2[1];
          lVar9 = (longlong)iVar8;
          if (lVar9 != 0) {
            lVar14 = lVar9 * 0x54;
            lVar15 = lVar12;
            do {
              cVar6 = func_0x0001455cab80(lVar15,&uStack_94);
              if (cVar6 != '\0') goto LAB_140088bce;
              lVar15 = lVar15 + 0x54;
              lVar14 = lVar14 + -0x54;
            } while (lVar14 != 0);
          }
          if (iVar8 == *param_2) {
            iVar4 = iVar8 / 2;
            if (iVar8 + 1U < 3) {
              iVar4 = 1;
            }
            lVar12 = func_0x000144d9c140(4,(longlong)(iVar4 + iVar8) * 0x54);
            if ((longlong)param_2[1] != 0) {
              func_0x000145f40560(lVar12,*(undefined8 *)(param_2 + 2),(longlong)param_2[1] * 0x54);
            }
            if (*(longlong *)(param_2 + 2) != 0) {
              func_0x000144d9c130();
            }
            *(longlong *)(param_2 + 2) = lVar12;
            *param_2 = iVar4 + iVar8;
            iVar8 = param_2[1];
            lVar9 = (longlong)iVar8;
          }
          param_2[1] = iVar8 + 1;
          lVar9 = lVar9 * 0x54;
          auVar5._4_8_ = uStack_5c;
          auVar5._0_4_ = uStack_60;
          auVar5._12_20_ = auStack_54;
          *(undefined1 (*) [32])(lVar12 + 0x34 + lVar9) = auVar5;
          puVar1 = (undefined8 *)(lVar12 + 0x20 + lVar9);
          *puVar1 = uStack_74;
          puVar1[1] = uStack_6c;
          puVar1[2] = CONCAT44(uStack_60,uStack_64);
          puVar1[3] = uStack_5c;
          puVar1 = (undefined8 *)(lVar12 + lVar9);
          *puVar1 = uStack_94;
          puVar1[1] = uStack_8c;
          puVar1[2] = uStack_84;
          puVar1[3] = uStack_7c;
        }
LAB_140088bce:
        lVar12 = param_1[1];
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < *(uint *)(lVar12 + 0x5c));
  }
  return;
}

