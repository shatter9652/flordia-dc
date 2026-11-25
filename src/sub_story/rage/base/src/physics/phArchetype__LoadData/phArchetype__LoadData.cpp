// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 144454be0  size: 546 bytes
// Name:    phArchetype::LoadData
// Subsystem: physics
// Class:   phArchetype
//
// Evidence:
//   GTAVSRC: phArchetype::LoadData  (rage/base/src/physics/archetype.cpp)
//   literal: gravityFactor:
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: phBound::Load, FUN_1428ca7b0, FUN_1428ca730
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/phArchetype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phArchetype__LoadData(longlong *param_1,longlong *param_2,undefined2 param_3)

{
  longlong lVar1;
  char cVar2;
  undefined2 uVar3;
  undefined1 uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  
  uVar4 = (undefined1)((ushort)param_3 >> 8);
  phBound__Load();
  uVar3 = CONCAT11(uVar4,1);
  cVar2 = FUN_1428ca7b0(param_2,&UNK_1467888b8,uVar3);
  uVar4 = (undefined1)((ushort)uVar3 >> 8);
  if (cVar2 == '\0') {
    uVar3 = CONCAT11(uVar4,1);
    cVar2 = FUN_1428ca7b0(param_2,&UNK_14678880c,uVar3);
    uVar4 = (undefined1)((ushort)uVar3 >> 8);
    if (cVar2 == '\0') {
      if (param_1[4] != 0) {
        fVar5 = *(float *)(param_1[4] + 0x6c) * _DAT_146159e20;
        goto LAB_144454c64;
      }
    }
    else {
      fVar5 = (float)(**(code **)(*param_2 + 0x40))(param_2,1);
      if (param_1[4] != 0) {
        fVar5 = fVar5 * _DAT_146159c28 * *(float *)(param_1[4] + 0x6c);
        goto LAB_144454c64;
      }
    }
  }
  else {
    fVar5 = (float)(**(code **)(*param_2 + 0x40))(param_2,1);
LAB_144454c64:
    *(float *)((longlong)param_1 + 0x4c) = fVar5;
  }
  func_0x0001453808b0(param_1,*(undefined4 *)((longlong)param_1 + 0x4c));
  uVar3 = CONCAT11(uVar4,1);
  cVar2 = FUN_1428ca7b0(param_2,&UNK_146788acd,uVar3);
  uVar4 = (undefined1)((ushort)uVar3 >> 8);
  if (cVar2 == '\0') {
    uVar3 = CONCAT11(uVar4,1);
    cVar2 = FUN_1428ca7b0(param_2,&UNK_146788829,uVar3);
    uVar4 = (undefined1)((ushort)uVar3 >> 8);
    if (cVar2 != '\0') {
      (**(code **)(*param_2 + 0x50))(param_2,&fStack_58,CONCAT11(uVar4,1));
      fVar5 = *(float *)((longlong)param_1 + 0x4c) * _DAT_14615a234;
      auVar10._0_4_ = fStack_58 * fStack_58;
      auVar10._4_4_ = fStack_54 * fStack_54;
      auVar10._8_4_ = fStack_50 * fStack_50;
      auVar10._12_4_ = fStack_4c * fStack_4c;
      auVar8 = vhaddps_avx(auVar10,auVar10);
      auVar9 = vshufps_avx(auVar10,auVar10,0xaa);
      auVar10 = vshufps_avx(auVar10,auVar10,0xe1);
      auVar7._0_4_ = (auVar10._0_4_ + auVar9._0_4_) * fVar5;
      auVar7._4_4_ = (auVar10._4_4_ + auVar9._4_4_) * fVar5;
      auVar7._8_4_ = (auVar10._8_4_ + auVar9._8_4_) * fVar5;
      auVar7._12_4_ = (auVar10._12_4_ + auVar9._12_4_) * fVar5;
      auVar8 = vinsertps_avx(auVar7,ZEXT416((uint)(auVar8._0_4_ * fVar5)),0x20);
      goto LAB_144454d0e;
    }
    lVar1 = param_1[4];
    if (lVar1 != 0) {
      uStack_48 = *(undefined8 *)(lVar1 + 0x60);
      uStack_40 = *(undefined8 *)(lVar1 + 0x68);
      func_0x000144f5b760(&uStack_48,auStack_28,*(undefined4 *)((longlong)param_1 + 0x4c));
      auVar8 = vblendps_avx(auStack_28,*(undefined1 (*) [16])(param_1 + 8),8);
      *(undefined1 (*) [16])(param_1 + 8) = auVar8;
    }
    cVar2 = FUN_1428ca7b0(param_2,&UNK_146788a73,CONCAT11(uVar4,1));
    if (cVar2 == '\0') {
      auStack_38 = *(undefined1 (*) [16])(param_1 + 8);
      goto LAB_144454d1a;
    }
    fVar5 = (float)(**(code **)(*param_2 + 0x40))(param_2,1);
    auVar8 = *(undefined1 (*) [16])(param_1 + 8);
    auVar9._0_4_ = fVar5 * auVar8._0_4_;
    auVar9._4_4_ = fVar5 * auVar8._4_4_;
    auVar9._8_4_ = fVar5 * auVar8._8_4_;
    auVar9._12_4_ = fVar5 * auVar8._12_4_;
    auStack_38 = vblendps_avx(auVar9,auVar8,8);
  }
  else {
    (**(code **)(*param_2 + 0x50))(param_2,&fStack_58,CONCAT11(uVar4,1));
    auVar8._4_4_ = fStack_54;
    auVar8._0_4_ = fStack_58;
    auVar8._8_4_ = fStack_50;
    auVar8._12_4_ = fStack_4c;
LAB_144454d0e:
    auStack_38 = vblendps_avx(auVar8,*(undefined1 (*) [16])(param_1 + 8),8);
  }
  *(undefined1 (*) [16])(param_1 + 8) = auStack_38;
LAB_144454d1a:
  uVar4 = 0xff;
  (**(code **)(*param_1 + 0x70))(param_1,auStack_38,0xffff);
  uVar3 = CONCAT11(uVar4,1);
  cVar2 = FUN_1428ca7b0(param_2,&UNK_146788949,uVar3);
  uVar4 = (undefined1)((ushort)uVar3 >> 8);
  if (cVar2 != '\0') {
    uVar6 = (**(code **)(*param_2 + 0x40))(param_2,1);
    *(undefined4 *)(param_1 + 0xc) = uVar6;
  }
  cVar2 = FUN_1428ca730(param_2,&UNK_146788958,CONCAT11(uVar4,1));
  if (cVar2 != '\0') {
    uVar6 = (**(code **)(*param_2 + 0x40))(param_2,1);
    *(undefined4 *)((longlong)param_1 + 0x6c) = uVar6;
  }
  return;
}

