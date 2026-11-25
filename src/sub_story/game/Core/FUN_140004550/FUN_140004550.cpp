// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140004550  size: 696 bytes
// Name:    FUN_140004550
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f894a0, FUN_144e63390, FUN_144d9e5f0, FUN_1425a8f00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140004550(undefined1 (*param_1) [16],ulonglong *param_2,undefined8 param_3)

{
  char cVar1;
  ulonglong uVar2;
  longlong unaff_GS_OFFSET;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 in_register_00001304 [12];
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  undefined1 auVar12 [16];
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  undefined1 auStack_298 [16];
  undefined1 auStack_288 [16];
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 auStack_268 [16];
  undefined1 auStack_258 [160];
  undefined1 aauStack_1b8 [10] [16];
  undefined1 auStack_118 [248];
  
  func_0x000144d9e610(param_3);
  auVar3._4_4_ = _DAT_145fc6f4c;
  auVar3._0_4_ = _DAT_145fc6f4c;
  auVar3._8_4_ = _DAT_145fc6f4c;
  auVar3._12_4_ = _DAT_145fc6f4c;
  auVar7._4_4_ = _DAT_145fc6f70;
  auVar7._0_4_ = _DAT_145fc6f70;
  auVar7._8_4_ = _DAT_145fc6f70;
  auVar7._12_4_ = _DAT_145fc6f70;
  auVar6 = vpand_avx(auVar3,*param_1);
  auVar5 = vcmpps_avx(auVar6,auVar7,0x11);
  auVar6 = vpcmpeqd_avx(auVar6,auVar6);
  auVar5 = auVar6 & ~auVar5;
  if ((((SUB161(auVar5 >> 0x1f,0) & 1) == 0 && (SUB161(auVar5 >> 0x3f,0) & 1) == 0) &&
      (SUB161(auVar5 >> 0x5f,0) & 1) == 0) && -1 < auVar5[0xf]) {
    auVar15 = ZEXT1664(param_1[1]);
    auVar5 = vpand_avx(param_1[1],auVar3);
    auVar5 = vcmpps_avx(auVar5,auVar7,0x11);
    auVar6 = auVar6 & ~auVar5;
    if ((((SUB161(auVar6 >> 0x1f,0) & 1) == 0 && (SUB161(auVar6 >> 0x3f,0) & 1) == 0) &&
        (SUB161(auVar6 >> 0x5f,0) & 1) == 0) && -1 < auVar6[0xf]) {
      auVar10 = ZEXT464(*(uint *)(*param_1 + 0xc));
      FUN_144d9e5f0(auStack_258);
      FUN_144d9e5f0(auStack_118);
      auVar5 = auVar10._0_16_;
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
        auVar15 = ZEXT1664(param_1[1]);
        auVar5 = ZEXT416(*(uint *)(*param_1 + 0xc));
      }
      auVar8._4_4_ = _DAT_145fc6ed8;
      auVar8._0_4_ = _DAT_145fc6ed8;
      auVar8._8_4_ = _DAT_145fc6ed8;
      auVar8._12_4_ = _DAT_145fc6ed8;
      uVar2 = *param_2;
      auVar6 = vpshufd_avx(auVar15._0_16_,0xff);
      auVar10 = ZEXT1664(auVar6);
      auVar4._0_12_ = ZEXT812(0);
      auVar4._12_4_ = 0;
      auVar12 = auVar8;
      if (1 < uVar2) {
        auVar12._0_12_ = ZEXT812(0);
        auVar12._12_4_ = 0;
      }
      auVar13 = ZEXT1664(auVar12);
      auVar3 = vsubps_avx(auVar8,auVar6);
      auVar14 = ZEXT1664(auVar3);
      auVar9._0_4_ = (float)((byte)param_2[1] & 0x7f);
      auVar9._4_12_ = in_register_00001304;
      auVar3 = vminss_avx(ZEXT416(_DAT_146cee0b0),auVar9);
      auVar5 = vminss_avx(auVar3,auVar5);
      auVar11 = ZEXT1664(auVar5);
      auVar3 = vroundss_avx(auVar5,auVar5,10);
      auVar5 = vcmpps_avx(auVar6,auVar4,4);
      if ((((SUB161(auVar5 >> 0x1f,0) & 1) != 0 || (SUB161(auVar5 >> 0x3f,0) & 1) != 0) ||
          (SUB161(auVar5 >> 0x5f,0) & 1) != 0) || auVar5[0xf] < '\0') {
        if (uVar2 == 0) {
          auStack_268 = vinsertps_avx(auVar15._0_16_,ZEXT416(_DAT_145fc6ed8),0x30);
          FUN_144f894a0(auStack_268,auStack_258,(longlong)auVar3._0_4_ & 0xffffffff);
        }
        else {
          if (*(char *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
              == '\0') {
            func_0x0001455db994();
            auVar15 = ZEXT1664(param_1[1]);
            uVar2 = *param_2;
          }
          func_0x0001425a8ef0(uVar2,auStack_258);
          auVar5._0_12_ = ZEXT812(0);
          auVar5._12_4_ = 0;
          aauStack_1b8[0] = vpblendd_avx2(auVar15._0_16_,auVar5,8);
          auVar5 = vcmpps_avx(aauStack_1b8[0],auVar5,4);
          if ((((SUB161(auVar5 >> 0x1f,0) & 1) != 0 || (SUB161(auVar5 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar5 >> 0x5f,0) & 1) != 0) || auVar5[0xf] < '\0') {
            FUN_1425a8f00(aauStack_1b8,auStack_258);
          }
        }
      }
      auVar7 = auVar13._0_16_;
      auVar6._0_12_ = ZEXT812(0);
      auVar6._12_4_ = 0;
      auVar12 = auVar14._0_16_;
      auVar5 = vcmpps_avx(auVar12,auVar6,4);
      if ((((SUB161(auVar5 >> 0x1f,0) & 1) != 0 || (SUB161(auVar5 >> 0x3f,0) & 1) != 0) ||
          (SUB161(auVar5 >> 0x5f,0) & 1) != 0) || auVar5[0xf] < '\0') {
        uStack_278 = *(undefined8 *)*param_1;
        uStack_270 = *(undefined8 *)(*param_1 + 8);
        FUN_144f894a0(&uStack_278,auStack_118,(longlong)auVar3._0_4_ & 0xffffffff);
        auVar7 = auVar13._0_16_;
        auVar12 = auVar14._0_16_;
      }
      auVar15 = ZEXT1664(CONCAT412(auVar7._12_4_ * auVar12._12_4_,
                                   CONCAT48(auVar7._8_4_ * auVar12._8_4_,
                                            CONCAT44(auVar7._4_4_ * auVar12._4_4_,
                                                     auVar7._0_4_ * auVar12._0_4_))));
      func_0x000145f40560(param_3,auStack_258,0xa0);
      auStack_288 = auVar10._0_16_;
      func_0x00014551d640(param_3);
      auStack_298 = auVar15._0_16_;
      func_0x000144d9e980(param_3,auStack_298,auStack_118);
      if (*param_2 == 0) {
        FUN_144d9e5f0(aauStack_1b8);
        FUN_144e63390(aauStack_1b8,auVar11._0_8_);
        func_0x0001455af1e0(param_3,aauStack_1b8);
      }
      func_0x0001455af1e0(param_3,0x1476500b0);
      cVar1 = func_0x0001455af270(param_3);
      if (cVar1 == '\0') {
        func_0x000144d9e610(param_3);
      }
    }
  }
  return;
}

