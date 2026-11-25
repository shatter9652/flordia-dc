// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401845a0  size: 461 bytes
// Name:    FUN_1401845a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14503e0d0, FUN_14503e1d0, FUN_14456a050
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1401845a0(longlong param_1,undefined1 (*param_2) [16],longlong param_3)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 unaff_RBX;
  longlong lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lVar7 = *(longlong *)(param_3 + 0x40);
  lVar3 = FUN_14503e0d0(*(undefined8 *)(lVar7 + 0x28));
  auVar9._8_8_ = 0;
  auVar9._0_8_ = *(ulonglong *)(lVar3 + 0x80);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = *(ulonglong *)(lVar3 + 0x88);
  auVar9 = vcmpps_avx(auVar12,auVar9,6);
  auVar12 = vpcmpeqd_avx(auVar12,auVar12);
  auVar9 = vshufps_avx(auVar9,auVar9,0x50);
  bVar1 = (SUB161((auVar12 & ~auVar9) >> 0x3f,0) & 1) == 0;
  bVar2 = -1 < SUB161(auVar12 & ~auVar9,0xf);
  if (bVar1 && bVar2) {
    lVar8 = param_1;
    if ((*(byte *)(lVar3 + 0xb) & 2) == 0) {
      do {
        lVar4 = FUN_14503e0d0(*(undefined8 *)(lVar8 + 0x28));
        if (*(longlong *)(lVar8 + 0x30) == 0) break;
        lVar8 = *(longlong *)(lVar8 + 0x30);
      } while ((*(ushort *)(lVar4 + 10) & 0x200) == 0);
      if ((*(ushort *)(lVar4 + 10) >> 9 & 1) == 0) {
        uVar5 = FUN_14503e0d0(*(undefined8 *)(param_3 + 0x28));
        puVar6 = (undefined8 *)func_0x000144e3bfa0(lVar3);
        uStack_a8 = *puVar6;
        uStack_a0 = puVar6[1];
        uStack_98 = puVar6[2];
        uStack_90 = puVar6[3];
        if (*(longlong *)(lVar7 + 0x30) != param_1) {
          if (*(longlong *)(lVar7 + 0x30) == param_3) {
            puVar6 = (undefined8 *)func_0x000144e3bfa0(uVar5);
          }
          else {
            FUN_14456a050(lVar7,&uStack_a8);
            puVar6 = &uStack_58;
            func_0x00014538eaf0(puVar6);
            FUN_14456a050(param_1,puVar6);
          }
          FUN_14503e1d0(&uStack_a8,puVar6);
        }
        uStack_88 = *(undefined8 *)(lVar3 + 0x70);
        uStack_80 = *(undefined8 *)(lVar3 + 0x78);
        uStack_78 = uStack_98;
        uStack_70 = uStack_90;
        uStack_68 = uStack_a8;
        uStack_60 = uStack_a0;
        func_0x000145183200(&uStack_68,&uStack_78,&uStack_58);
        *(undefined8 *)*param_2 = uStack_58;
        *(undefined8 *)(*param_2 + 8) = uStack_50;
        goto LAB_1401846bc;
      }
    }
    lVar7 = FUN_14503e0d0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x28));
    if ((~*(uint *)(lVar7 + 200) & 0x10) == 0) {
      auVar10._8_8_ = 0;
      auVar10._0_8_ = *(ulonglong *)(lVar7 + 0xb0);
      auVar9 = vcvtdq2ps_avx(auVar10);
      auVar9 = vshufps_avx(auVar9,auVar9,0xe1);
    }
    else {
      auVar11._8_8_ = 0;
      auVar11._0_8_ = *(ulonglong *)(lVar7 + 0xb0);
      auVar9 = vcvtdq2ps_avx(auVar11);
    }
    auVar13._0_4_ = (float)(auVar9._0_4_ & _DAT_145fc6f10) * _DAT_145fc6edc;
    auVar13._4_4_ = (float)(auVar9._4_4_ & _DAT_145fc6f10) * _DAT_145fc6edc;
    auVar13._8_4_ = (float)(auVar9._8_4_ & _DAT_145fc6f10) * _DAT_145fc6edc;
    auVar13._12_4_ = (float)(auVar9._12_4_ & _DAT_145fc6f10) * _DAT_145fc6edc;
    auVar9 = vmovlhps_avx(auVar13,auVar9);
    *param_2 = auVar9;
  }
LAB_1401846bc:
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar1 && bVar2) & 0xffffffff;
}

