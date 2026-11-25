// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400cdf90  size: 813 bytes
// Name:    FUN_1400cdf90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400cf990, FUN_1400ce3c0, FUN_1400cedf0, FUN_1400e24b0, FUN_144f63830, FUN_1400dbe70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400cdf90(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
                  longlong param_5,byte param_6,uint param_7,int param_8,char param_9)

{
  float fVar1;
  undefined1 auVar2 [16];
  float fVar3;
  char cVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 in_stack_ffffffffffffff68;
  longlong lVar8;
  undefined4 uVar10;
  undefined8 uVar9;
  undefined4 in_stack_ffffffffffffff70;
  uint3 uVar12;
  undefined4 uVar11;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  if (((param_6 & 1) == 0) && (*(float *)(param_4 + 0x174) <= 0.0)) goto LAB_1400ce04f;
  uVar12 = (uint3)((uint)in_stack_ffffffffffffff70 >> 8);
  if (param_8 == 1) {
    if ((*(int *)(param_1 + 0x380) == 0) && ((*(byte *)(param_3 + 0x140) & 8) != 0)) {
      FUN_1400cf990(param_1,param_3,param_5,param_4,CONCAT44(uVar10,param_7),(uint)uVar12 << 8,0);
    }
    FUN_1400ce3c0(param_1,param_3,param_5,param_4,param_7);
    lVar8 = param_4;
    func_0x0001400ce2c0(*(undefined8 *)(param_1 + 0x188),param_2,*(undefined1 *)(param_3 + 0x140),
                        *(undefined1 *)(param_3 + 0x141),param_4,param_7);
    uVar10 = (undefined4)((ulonglong)lVar8 >> 0x20);
    uVar11 = 0;
  }
  else {
    if (param_8 != 2) goto LAB_1400ce04f;
    if (param_9 == '\0') {
      FUN_1400cf990(param_1,param_3,param_5,param_4,CONCAT44(uVar10,param_7),CONCAT31(uVar12,1),0);
      FUN_1400dbe70(param_1,param_3,param_5,param_4,param_7);
      goto LAB_1400ce04f;
    }
    if (0.0 < *(float *)(param_3 + 0xec)) {
      uVar9 = CONCAT44(uVar10,param_7);
      FUN_1400cedf0(param_1,param_3,*(undefined1 *)(param_5 + 0x110),param_4,uVar9);
      uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
    }
    uVar9 = CONCAT44(uVar10,param_7);
    FUN_1400dbe70(param_1,param_3,param_5,param_4,uVar9);
    uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
    uVar11 = 1;
  }
  FUN_1400cf990(param_1,param_3,param_5,param_4,CONCAT44(uVar10,param_7),uVar11,1);
LAB_1400ce04f:
  if ((((*(byte *)(param_1 + 0x90) & 0x10) != 0) && ((*(byte *)(param_3 + 0x140) & 0x48) == 0x40))
     && ((*(byte *)(param_3 + 0x141) & 4) == 0)) {
    cVar4 = func_0x0001400ca280(param_3);
    if (cVar4 == '\0') {
      (**(code **)(*param_2 + 0x60))
                (param_2,&uStack_78,*(undefined4 *)(&UNK_146401594 + (ulonglong)param_7 * 4));
      FUN_1400e24b0(param_2,param_5,&uStack_78);
    }
  }
  fVar1 = *(float *)(param_3 + 0xec);
  fVar3 = fVar1 * _DAT_146159fa8;
  if ((*(byte *)(param_3 + 0x141) & 8) == 0) {
    auVar5 = ZEXT416((uint)(*(float *)(param_1 + 0x368) - fVar3));
    auVar2 = vminss_avx(ZEXT416(_DAT_145fc6ed8),auVar5);
    auVar6 = ZEXT416(_DAT_145fc6f48);
    auVar5 = vcmpss_avx(auVar5,auVar6,1);
    auVar5 = vblendvps_avx(auVar2,auVar6,auVar5);
    auVar2 = vcmpss_avx(auVar5,ZEXT816(0) << 0x20,1);
    auVar5 = vblendvps_avx(auVar5,auVar6,auVar2);
    uVar10 = auVar5._0_4_;
  }
  else {
    auVar6._4_4_ = _DAT_145fc6f48;
    auVar6._0_4_ = _DAT_145fc6f48;
    auVar6._8_4_ = _DAT_145fc6f48;
    auVar6._12_4_ = _DAT_145fc6f48;
    auVar7._4_4_ = _DAT_145fc6ed8;
    auVar7._0_4_ = _DAT_145fc6ed8;
    auVar7._8_4_ = _DAT_145fc6ed8;
    auVar7._12_4_ = _DAT_145fc6ed8;
    auVar5 = ZEXT416((uint)(*(float *)(param_1 + 0x368) + fVar3));
    auVar2 = vminss_avx(ZEXT416(_DAT_145fc6ed8),auVar5);
    auVar5 = vcmpss_avx(auVar5,ZEXT416(_DAT_145fc6f48),1);
    auVar5 = vblendvps_avx(auVar2,auVar6,auVar5);
    auVar2 = vcmpss_avx(ZEXT816(0) << 0x20,auVar5,6);
    auVar5 = vblendvps_avx(auVar7,auVar5,auVar2);
    uVar10 = auVar5._0_4_;
  }
  *(undefined4 *)(param_1 + 0x368) = uVar10;
  uStack_48 = *(undefined8 *)(param_4 + 0xc0);
  uStack_40 = *(undefined8 *)(param_4 + 200);
  uStack_58 = *(undefined8 *)(param_5 + 0x100);
  uStack_50 = *(undefined8 *)(param_5 + 0x108);
  FUN_144f63830(&uStack_78,&uStack_58,&uStack_48,fVar1,(*(byte *)(param_1 + 0x91) & 4) >> 2);
  *(undefined8 *)(param_4 + 0xc0) = uStack_78;
  *(undefined8 *)(param_4 + 200) = uStack_70;
  uVar9 = *(undefined8 *)(param_5 + 0xf8);
  *(undefined8 *)(param_4 + 0xb0) = *(undefined8 *)(param_5 + 0xf0);
  *(undefined8 *)(param_4 + 0xb8) = uVar9;
  *(byte *)(param_4 + 0x1a4) =
       *(byte *)(param_4 + 0x1a4) & 0x7f | (*(byte *)(param_5 + 0x110) & 0x10) << 3;
  return;
}

