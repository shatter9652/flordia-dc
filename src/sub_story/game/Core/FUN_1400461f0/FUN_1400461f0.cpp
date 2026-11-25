// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400461f0  size: 971 bytes
// Name:    FUN_1400461f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1403c9e80, FUN_144835f10, FUN_144de5900, FUN_144dee390
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1400461f0(longlong param_1,undefined1 (*param_2) [16],float *param_3,char param_4)

{
  uint *puVar1;
  undefined1 auVar2 [16];
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong unaff_GS_OFFSET;
  undefined1 auVar9 [16];
  undefined1 extraout_var [56];
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_168 [16];
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [16];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [16];
  undefined1 aauStack_98 [6] [16];
  
  uStack_b8 = *(undefined8 *)param_3;
  uStack_b0 = *(undefined8 *)(param_3 + 2);
  uStack_c8 = *(undefined8 *)*param_2;
  uStack_c0 = *(undefined8 *)(*param_2 + 8);
  auVar10._0_8_ = FUN_144dee390();
  auVar10._8_56_ = extraout_var;
  auVar9 = vinsertps_avx(auVar10._0_16_,auVar10._0_16_,0x2b);
  auStack_d8 = vsubps_avx(*param_2,auVar9);
  auVar10 = ZEXT1664(auStack_d8);
  auVar2 = vshufpd_avx(auStack_d8,auStack_d8,1);
  if (*(float *)(param_1 + 0x14) < auVar2._0_4_) {
    return 0;
  }
  auStack_e8._0_4_ = auVar9._0_4_ + *param_3;
  auStack_e8._4_4_ = auVar9._4_4_ + param_3[1];
  auStack_e8._8_4_ = auVar9._8_4_ + param_3[2];
  auStack_e8._12_4_ = auVar9._12_4_ + param_3[3];
  auVar11 = ZEXT1664(auStack_e8);
  auVar9 = vshufpd_avx(auStack_e8,auStack_e8,1);
  if (auVar9._0_4_ < *(float *)(param_1 + 0x10)) {
    return 0;
  }
  iVar4 = FUN_144de5900(auStack_d8,auStack_e8,param_1 + 0x20,param_1 + 0x60);
  if (iVar4 == 0) {
    return 0;
  }
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  lVar8 = 0x5c;
  puVar1 = (uint *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12d8);
  uVar5 = *puVar1;
  if ((uVar5 & 6) == 0) {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
      uVar5 = *puVar1;
    }
    if ((uVar5 & 0x20) == 0) {
      lVar8 = 0x58;
    }
  }
  uVar6 = *(undefined4 *)((longlong)*(int *)(lVar8 + 0x14a210cb8) * 8 + 0x1492d7940);
  auVar12 = ZEXT1664(CONCAT412(uVar6,CONCAT48(uVar6,CONCAT44(uVar6,uVar6))));
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    uVar5 = *puVar1;
  }
  lVar8 = 0x5c;
  if ((uVar5 & 6) == 0) {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
      uVar5 = *puVar1;
    }
    if ((uVar5 & 0x20) == 0) {
      lVar8 = 0x58;
    }
  }
  uVar6 = *(undefined4 *)((longlong)*(int *)(lVar8 + 0x14a210cb8) * 0x10 + 0x14928e5c0);
  uStack_148 = *(undefined4 *)(_DAT_14928e5e0 + 0x1d30);
  uStack_158 = *(undefined8 *)(_DAT_14928e5e0 + 0x1d20);
  uStack_150 = *(undefined8 *)(_DAT_14928e5e0 + 0x1d28);
  auStack_168 = ZEXT816(0) << 0x20;
  uStack_144 = uStack_148;
  uStack_140 = uStack_148;
  uStack_13c = uStack_148;
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    uVar5 = *puVar1;
  }
  if ((uVar5 & 6) == 0) {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
      uVar5 = *puVar1;
    }
    lVar8 = 0x58;
    if ((uVar5 & 0x20) == 0) goto LAB_140046436;
  }
  lVar8 = 0x5c;
LAB_140046436:
  lVar8 = (longlong)*(int *)(lVar8 + 0x14a210cb8) * 0x730;
  uVar13 = *(undefined8 *)(lVar8 + 0x14a94bca0);
  uVar14 = *(undefined8 *)(lVar8 + 0x14a94bca8);
  uVar7 = func_0x000144dd4320(0);
  auStack_a8 = auVar12._0_16_;
  auStack_118 = auVar11._0_16_;
  auStack_108 = auVar10._0_16_;
  uStack_f8 = uVar13;
  uStack_f0 = uVar14;
  FUN_144835f10(aauStack_98,0,&DAT_1492d7950,auStack_a8,uVar6,uVar7,&uStack_f8,auStack_108,
                auStack_118,auStack_168,&uStack_158,&uStack_148);
  auVar9._0_12_ = ZEXT812(0);
  auVar9._12_4_ = 0;
  auVar9 = vcmpps_avx(auVar9,aauStack_98[0],5);
  uVar6 = vmovmskps_avx(auVar9);
  if (((iVar4 == 2) || (param_4 == '\0')) || ((char)uVar6 != '\0')) {
    if ((char)uVar6 != '\0') {
      return 0;
    }
  }
  else {
    auStack_138 = auVar11._0_16_;
    auStack_128 = auVar10._0_16_;
    cVar3 = FUN_1403c9e80(param_1 + 0x188);
    if (cVar3 == '\0') {
      return 0;
    }
  }
  return iVar4;
}

