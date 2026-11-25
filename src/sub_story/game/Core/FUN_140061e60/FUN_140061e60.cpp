// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140061e60  size: 803 bytes
// Name:    FUN_140061e60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140061e60(undefined4 *param_1,longlong *param_2,longlong param_3,int param_4,byte param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong *puVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar18 [64];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auVar17 [64];
  
  if (*(char *)((longlong)param_2 + 0x84) == '\x01') {
    uVar8 = param_1[0x533c] - (uint)(param_5 ^ 1);
    if ((0 < (int)uVar8) && (cVar4 = (**(code **)(*param_2 + 0x80))(param_2), cVar4 == '\0')) {
      auVar11._8_8_ = 0;
      auVar11._0_8_ = *(ulonglong *)(param_1 + 0x4a45);
      uVar1 = *param_1;
      auVar14._4_4_ = uVar1;
      auVar14._0_4_ = uVar1;
      auVar14._8_4_ = uVar1;
      auVar14._12_4_ = uVar1;
      auVar16._0_12_ = ZEXT812(0);
      auVar16._12_4_ = 0;
      auVar17 = ZEXT1664(auVar16);
      auVar13 = vmaxps_avx(auVar11,auVar16);
      auVar13 = vminps_avx(auVar13,auVar14);
      auVar18 = ZEXT1664(auVar13);
      uVar2 = vmovlps_avx(auVar13);
      *(undefined8 *)(param_1 + 0x4a45) = uVar2;
      param_1[0x4a3f] = param_4;
      uStack_78 = *(undefined8 *)(param_1 + 0x4a3c);
      uStack_70 = *(undefined8 *)(param_1 + 0x4a3e);
      uVar2 = *(undefined8 *)(param_3 + 0x104);
      uVar5 = (**(code **)(*param_2 + 0x78))(param_2);
      uVar1 = vextractps_avx(auVar18._0_16_,1);
      (**(code **)(*param_2 + 8))
                (param_2,uVar5,&uStack_78,0,param_1 + 0x4a40,auVar18._0_4_,uVar1,uVar2);
      if (uVar8 != 1) {
        puVar10 = (ulonglong *)(param_1 + 0x4a51);
        lVar9 = (ulonglong)uVar8 - 1;
        do {
          cVar4 = (**(code **)(*param_2 + 0x80))(param_2);
          if (cVar4 != '\0') {
            return;
          }
          auVar12._8_8_ = 0;
          auVar12._0_8_ = *puVar10;
          uVar1 = *param_1;
          auVar15._4_4_ = uVar1;
          auVar15._0_4_ = uVar1;
          auVar15._8_4_ = uVar1;
          auVar15._12_4_ = uVar1;
          uVar6 = 0;
          auVar13 = vmaxps_avx(auVar12,auVar17._0_16_);
          auVar13 = vminps_avx(auVar13,auVar15);
          auVar18 = ZEXT1664(auVar13);
          uVar3 = vmovlps_avx(auVar13);
          *puVar10 = uVar3;
          *(int *)(puVar10 + -3) = param_4;
          uVar8 = *(uint *)(param_3 + 0x104);
          if ((uVar8 >> 8 & 1) != 0) {
            uVar6 = *(uint *)(param_3 + 0x10c) & 0x100;
          }
          if ((uVar8 >> 9 & 1) != 0) {
            uVar6 = uVar6 | *(uint *)(param_3 + 0x10c) & 0x200;
          }
          if ((uVar8 >> 0xe & 1) != 0) {
            uVar6 = uVar6 | *(uint *)(param_3 + 0x10c) & 0x4000;
          }
          if ((uVar8 >> 10 & 1) != 0) {
            uVar6 = uVar6 | *(uint *)(param_3 + 0x10c) & 0x400;
          }
          if ((uVar8 >> 0xb & 1) != 0) {
            uVar6 = uVar6 | *(uint *)(param_3 + 0x10c) & 0x800;
          }
          if ((uVar8 >> 0xd & 1) != 0) {
            uVar6 = uVar6 | *(uint *)(param_3 + 0x10c) & 0x2000;
          }
          uStack_78 = *(undefined8 *)((longlong)puVar10 + -0x24);
          uStack_70 = *(undefined8 *)((longlong)puVar10 + -0x1c);
          uVar5 = (**(code **)(*param_2 + 0x78))(param_2);
          uVar1 = vextractps_avx(auVar18._0_16_,1);
          (**(code **)(*param_2 + 8))
                    (param_2,uVar5,&uStack_78,0,(undefined4 *)((longlong)puVar10 + -0x14),
                     auVar18._0_4_,uVar1,uVar6);
          puVar10 = puVar10 + 6;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
    }
  }
  else {
    iVar7 = (**(code **)(*param_2 + 0x78))();
    if (param_4 < iVar7) {
      uVar1 = *param_1;
      auVar17 = ZEXT1664(CONCAT412(uVar1,CONCAT48(uVar1,CONCAT44(uVar1,uVar1))));
      if (0 < (longlong)(int)param_1[0x533c]) {
        lVar9 = 0;
        do {
          auVar13._8_8_ = 0;
          auVar13._0_8_ = *(ulonglong *)((longlong)param_1 + lVar9 + 0x12914);
          lVar9 = lVar9 + 0x30;
          auVar13 = vminps_avx(auVar17._0_16_,auVar13);
          auVar17 = ZEXT1664(auVar13);
        } while ((longlong)(int)param_1[0x533c] * 0x30 != lVar9);
      }
      (**(code **)(*param_2 + 0x58))(param_2,param_4,auVar17._0_8_);
      auVar13 = vmovshdup_avx(auVar17._0_16_);
      auVar18 = ZEXT1664(auVar13);
      (**(code **)(*param_2 + 0x60))(param_2,param_4,auVar13._0_8_);
      if ((param_5 != 0) && (iVar7 = (**(code **)(*param_2 + 0x78))(param_2), param_4 < iVar7 + -1))
      {
        (**(code **)(*param_2 + 0x58))(param_2,param_4 + 1,auVar17._0_8_);
                    /* WARNING: Could not recover jumptable at 0x000140062180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_2 + 0x60))(param_2,param_4 + 1,auVar18._0_8_);
        return;
      }
    }
  }
  return;
}

