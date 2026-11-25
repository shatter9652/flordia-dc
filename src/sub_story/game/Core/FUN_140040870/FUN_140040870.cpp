// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140040870  size: 1601 bytes
// Name:    FUN_140040870
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140045f70, FUN_144dcd7d0, FUN_144dccdd0, FUN_1443c8620, FUN_1443c8520, FUN_1443c7ef0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140040870(longlong param_1,undefined8 *param_2)

{
  undefined1 (*pauVar1) [16];
  float fVar2;
  byte bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined8 uVar15;
  undefined1 auVar14 [16];
  undefined8 uVar16;
  undefined8 uVar18;
  undefined1 auVar17 [64];
  undefined1 auVar19 [64];
  undefined4 uVar20;
  undefined4 uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  undefined1 auVar26 [64];
  undefined1 in_ZMM13 [64];
  undefined1 auVar27 [64];
  undefined1 auVar28 [64];
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_68 [16];
  undefined1 auVar11 [64];
  
  auVar10 = in_ZMM13._0_16_;
  auStack_68 = auVar10;
  if (*(char *)(param_1 + 0x12) == '\0') {
    fVar2 = *(float *)(param_1 + 0x340);
    auVar9._0_12_ = ZEXT812(0);
    auVar11 = ZEXT1264(auVar9._0_12_);
    auVar9._12_4_ = 0;
    if (((((fVar2 != 0.0) || (NAN(fVar2))) || (0x11 < *(uint *)(param_1 + 0x350))) ||
        ((0x2000cU >> (*(uint *)(param_1 + 0x350) & 0x1f) & 1) == 0)) &&
       (((fVar2 < _DAT_14615bc50 || (0x10 < *(uint *)(param_1 + 0x350))) ||
        ((0x10003U >> (*(uint *)(param_1 + 0x350) & 0x1f) & 1) == 0)))) {
      *(undefined1 *)(param_1 + 0x356) = 0;
      if (*(char *)(param_1 + 0x355) == '\x01') {
        FUN_1443c7ef0(param_1);
        auVar9 = auVar11._0_16_;
        auVar10 = in_ZMM13._0_16_;
      }
      if (*(int *)((longlong)param_2 + 0x16c) != 0) {
        bVar3 = *(byte *)(param_1 + 0x10);
        if (bVar3 == 0) {
          return;
        }
        auVar11 = ZEXT464(*(uint *)(param_1 + 0x20));
        auVar17 = ZEXT464(*(uint *)(param_1 + 0x24));
        auVar19 = ZEXT464(*(uint *)(param_1 + 0x28));
        uVar20 = *(undefined4 *)(param_1 + 0x30);
        uVar21 = *(undefined4 *)(param_1 + 0x34);
        auVar26 = ZEXT1664(CONCAT412(_DAT_145fc6f70,
                                     CONCAT48(_DAT_145fc6f70,CONCAT44(_DAT_145fc6f70,_DAT_145fc6f70)
                                             )));
        auVar10 = vpcmpeqd_avx(auVar10,auVar10);
        auVar27 = ZEXT1664(auVar10);
        auVar28 = ZEXT1264(ZEXT812(0));
        uVar5 = 0;
        uVar4 = 0;
        uVar22 = _DAT_145fc6f4c;
        uVar23 = _DAT_145fc6f4c;
        uVar24 = _DAT_145fc6f4c;
        uVar25 = _DAT_145fc6f4c;
        do {
          if ((*(ulonglong *)(param_1 + 8 + (uVar5 >> 6) * 8) >> (uVar5 & 0x3f) & 1) != 0) {
            if (*(short *)((longlong)param_2 + uVar5 * 2 + 0x120) != -1) {
              pauVar1 = (undefined1 (*) [16])(param_1 + 0x140 + uVar4 * 0x10);
              if (*(char *)(param_1 + 0x354) == '\x01') {
                FUN_144dccdd0(param_2[uVar5],auVar11._0_8_,auVar17._0_8_,auVar19._0_8_,uVar20,uVar21
                              ,pauVar1);
              }
              else {
                FUN_144dcd7d0(param_2[uVar5],auVar11._0_8_,auVar17._0_8_,auVar19._0_8_,uVar20,uVar21
                              ,pauVar1);
              }
              auVar6._0_4_ = uVar22 & *(uint *)*pauVar1;
              auVar6._4_4_ = uVar23 & *(uint *)(*pauVar1 + 4);
              auVar6._8_4_ = uVar24 & *(uint *)(*pauVar1 + 8);
              auVar6._12_4_ = uVar25 & *(uint *)(*pauVar1 + 0xc);
              auVar10 = vcmpps_avx(auVar6,auVar26._0_16_,0x11);
              auVar10 = auVar27._0_16_ & ~auVar10;
              if ((((SUB161(auVar10 >> 0x1f,0) & 1) != 0 || (SUB161(auVar10 >> 0x3f,0) & 1) != 0) ||
                  (SUB161(auVar10 >> 0x5f,0) & 1) != 0) || auVar10[0xf] < '\0') {
                *(undefined1 (*) [16])(uVar4 * 0x10 + param_1 + 0x240) = auVar28._0_16_;
                *pauVar1 = auVar28._0_16_;
                func_0x000145f40580(param_2[uVar5],0,0x400);
              }
            }
            bVar3 = *(byte *)(param_1 + 0x10);
            uVar4 = (ulonglong)((int)uVar4 + 1);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < bVar3);
        return;
      }
      auVar10 = vpcmpeqd_avx(auVar9,auVar9);
      auVar7._8_8_ = 0;
      auVar7._0_8_ = param_2[0x24];
      auVar10 = vpcmpeqw_avx(auVar7,auVar10);
      auVar10 = vpmovsxwd_avx(auVar10);
      if ((((SUB161(auVar10 >> 0x1f,0) & 1) != 0 || (SUB161(auVar10 >> 0x3f,0) & 1) != 0) ||
          (SUB161(auVar10 >> 0x5f,0) & 1) != 0) || auVar10[0xf] < '\0') {
        return;
      }
      uStack_288 = *(undefined8 *)(param_1 + 0x40);
      uStack_280 = *(undefined8 *)(param_1 + 0x48);
      uVar16 = *(undefined8 *)(param_1 + 0x20);
      uVar18 = *(undefined8 *)(param_1 + 0x28);
      uVar13 = *(undefined8 *)(param_1 + 0x30);
      uVar15 = *(undefined8 *)(param_1 + 0x38);
      uStack_298 = *(undefined8 *)(param_1 + 0xc0);
      uStack_290 = *(undefined8 *)(param_1 + 200);
      if (*(char *)(param_1 + 0x354) == '\x01') {
        uStack_e8 = *(undefined8 *)(param_1 + 0x80);
        uStack_e0 = *(undefined8 *)(param_1 + 0x88);
        uStack_f8 = *(undefined8 *)(param_1 + 0x100);
        uStack_f0 = *(undefined8 *)(param_1 + 0x108);
        uStack_1c8 = *(undefined8 *)(param_1 + 0x34c);
        uStack_1c0 = *(undefined8 *)(param_1 + 0x354);
        uStack_1e8 = uVar13;
        uStack_1e0 = uVar15;
        uStack_1d8 = uVar16;
        uStack_1d0 = uVar18;
        FUN_1443c8520(&uStack_1c8,&uStack_1d8,&uStack_1e8,&uStack_288,&uStack_e8,&uStack_298,
                      &uStack_f8,*param_2,*param_2);
        uStack_1f8 = *(undefined8 *)(param_1 + 0x34c);
        uStack_1f0 = *(undefined8 *)(param_1 + 0x354);
        uStack_218 = uVar13;
        uStack_210 = uVar15;
        uStack_208 = uVar16;
        uStack_200 = uVar18;
        FUN_1443c8520(&uStack_1f8,&uStack_208,&uStack_218,&uStack_288,&uStack_e8,&uStack_298,
                      &uStack_f8,param_2[1],param_2[1]);
        uStack_228 = *(undefined8 *)(param_1 + 0x34c);
        uStack_220 = *(undefined8 *)(param_1 + 0x354);
        uStack_248 = uVar13;
        uStack_240 = uVar15;
        uStack_238 = uVar16;
        uStack_230 = uVar18;
        FUN_1443c8520(&uStack_228,&uStack_238,&uStack_248,&uStack_288,&uStack_e8,&uStack_298,
                      &uStack_f8,param_2[2],param_2[2]);
        uStack_258 = *(undefined8 *)(param_1 + 0x34c);
        uStack_250 = *(undefined8 *)(param_1 + 0x354);
        uStack_278 = uVar13;
        uStack_270 = uVar15;
        uStack_268 = uVar16;
        uStack_260 = uVar18;
        FUN_1443c8520(&uStack_258,&uStack_268,&uStack_278,&uStack_288,&uStack_e8,&uStack_298,
                      &uStack_f8,param_2[3],param_2[3]);
        *(undefined8 *)(param_1 + 0x80) = uStack_e8;
        *(undefined8 *)(param_1 + 0x88) = uStack_e0;
        *(undefined8 *)(param_1 + 0x100) = uStack_f8;
        *(undefined8 *)(param_1 + 0x108) = uStack_f0;
      }
      else {
        uStack_108 = *(undefined8 *)(param_1 + 0x34c);
        uStack_100 = *(undefined8 *)(param_1 + 0x354);
        uStack_128 = uVar13;
        uStack_120 = uVar15;
        uStack_118 = uVar16;
        uStack_110 = uVar18;
        FUN_1443c8620(&uStack_108,&uStack_118,&uStack_128,&uStack_288,&uStack_298,*param_2,*param_2)
        ;
        uStack_138 = *(undefined8 *)(param_1 + 0x34c);
        uStack_130 = *(undefined8 *)(param_1 + 0x354);
        uStack_158 = uVar13;
        uStack_150 = uVar15;
        uStack_148 = uVar16;
        uStack_140 = uVar18;
        FUN_1443c8620(&uStack_138,&uStack_148,&uStack_158,&uStack_288,&uStack_298,param_2[1],
                      param_2[1]);
        uStack_168 = *(undefined8 *)(param_1 + 0x34c);
        uStack_160 = *(undefined8 *)(param_1 + 0x354);
        uStack_188 = uVar13;
        uStack_180 = uVar15;
        uStack_178 = uVar16;
        uStack_170 = uVar18;
        FUN_1443c8620(&uStack_168,&uStack_178,&uStack_188,&uStack_288,&uStack_298,param_2[2],
                      param_2[2]);
        uStack_198 = *(undefined8 *)(param_1 + 0x34c);
        uStack_190 = *(undefined8 *)(param_1 + 0x354);
        uStack_1b8 = uVar13;
        uStack_1b0 = uVar15;
        uStack_1a8 = uVar16;
        uStack_1a0 = uVar18;
        FUN_1443c8620(&uStack_198,&uStack_1a8,&uStack_1b8,&uStack_288,&uStack_298,param_2[3],
                      param_2[3]);
      }
      auVar14._8_8_ = uStack_290;
      auVar14._0_8_ = uStack_298;
      auVar8._8_8_ = uStack_280;
      auVar8._0_8_ = uStack_288;
      auVar10._0_4_ = (uint)((float)uStack_288 * (float)uStack_298) & _DAT_145fc6f4c;
      auVar10._4_4_ =
           (uint)((float)((ulonglong)uStack_288 >> 0x20) * (float)((ulonglong)uStack_298 >> 0x20)) &
           _DAT_145fc6f4c;
      auVar10._8_4_ = (uint)((float)uStack_280 * (float)uStack_290) & _DAT_145fc6f4c;
      auVar10._12_4_ =
           (uint)((float)((ulonglong)uStack_280 >> 0x20) * (float)((ulonglong)uStack_290 >> 0x20)) &
           _DAT_145fc6f4c;
      auVar12._4_4_ = _DAT_145fc6f70;
      auVar12._0_4_ = _DAT_145fc6f70;
      auVar12._8_4_ = _DAT_145fc6f70;
      auVar12._12_4_ = _DAT_145fc6f70;
      auVar10 = vcmpps_avx(auVar10,auVar12,0x11);
      auVar9 = vpcmpeqd_avx(auVar12,auVar12);
      auVar9 = auVar9 & ~auVar10;
      if ((((SUB161(auVar9 >> 0x1f,0) & 1) != 0 || (SUB161(auVar9 >> 0x3f,0) & 1) != 0) ||
          (SUB161(auVar9 >> 0x5f,0) & 1) != 0) || auVar9[0xf] < '\0') {
        auVar11 = ZEXT864(0) << 0x20;
        *(undefined1 (*) [16])(param_1 + 0x80) = ZEXT816(0) << 0x20;
        *(undefined1 (*) [16])(param_1 + 0x100) = ZEXT816(0) << 0x20;
        func_0x000145f40580(*param_2,0,0x400);
        func_0x000145f40580(param_2[1],0,0x400);
        func_0x000145f40580(param_2[2],0,0x400);
        func_0x000145f40580(param_2[3],0,0x400);
        auVar14 = auVar11._0_16_;
        auVar8._0_12_ = ZEXT812(0);
        auVar8._12_4_ = 0;
      }
      *(undefined1 (*) [16])(param_1 + 0x40) = auVar8;
      *(undefined1 (*) [16])(param_1 + 0xc0) = auVar14;
      return;
    }
  }
  if (*(char *)(param_1 + 0x356) == '\0') {
    FUN_140045f70(param_1);
    *(undefined1 *)(param_1 + 0x356) = 1;
  }
  return;
}

