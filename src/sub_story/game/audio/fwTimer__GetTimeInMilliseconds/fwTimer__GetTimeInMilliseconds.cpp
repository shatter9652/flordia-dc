// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 144182720  size: 8700 bytes
// Name:    fwTimer::GetTimeInMilliseconds
// Subsystem: rage
// Class:   fwTimer
//
// Evidence:
//   GTAVSRC: fwTimer::GetTimeInMilliseconds  (game/audio/vehicleaudioentity.cpp)
//   literal: ACQUIRING_TARGET
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1459cd3f0, FUN_144185ea0, FUN_1459cd420, FUN_144a2a3e0, FUN_144185e30, FUN_144187be0, FUN_144187c60, FUN_14416fe50, FUN_1441716e0, FUN_144187a40, FUN_14417a170, FUN_144188600, FUN_144a29f70, FUN_14416ecd0, FUN_145e8a0c0, FUN_145e89ba0, FUN_144e76200, FUN_144a20400, FUN_144187ec0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/fwTimer.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong fwTimer__GetTimeInMilliseconds(longlong *param_1,ulonglong param_2)

{
  float *pfVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  char cVar8;
  char cVar9;
  ushort uVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  longlong *plVar16;
  longlong lVar17;
  undefined8 uVar18;
  longlong lVar19;
  undefined1 (*pauVar20) [16];
  void *pvVar21;
  longlong lVar22;
  void *pvVar23;
  undefined1 *puVar24;
  ulonglong unaff_RBX;
  float *pfVar25;
  undefined7 uVar27;
  ulonglong uVar26;
  ulonglong unaff_RBP;
  uint7 uVar28;
  ulonglong uVar29;
  byte bVar30;
  bool bVar31;
  float fVar32;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  uint uVar33;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  uint uVar60;
  uint uVar61;
  undefined1 extraout_var [56];
  undefined1 auVar58 [64];
  uint uVar62;
  undefined1 auVar59 [64];
  undefined1 extraout_var_01 [56];
  undefined1 extraout_var_02 [56];
  short sVar63;
  short sVar86;
  float fVar87;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar88;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  float fVar119;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  float fVar120;
  float fVar145;
  float fVar146;
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  float fVar147;
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  float fVar158;
  float fVar160;
  float fVar161;
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  float fVar159;
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  float fVar162;
  float fVar176;
  undefined1 auVar163 [16];
  float fVar173;
  float fVar175;
  float fVar177;
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  float fVar172;
  float fVar174;
  undefined1 auVar170 [64];
  undefined1 auVar171 [64];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  float fVar186;
  uint uVar187;
  float fVar188;
  float fVar192;
  float fVar194;
  undefined1 auVar189 [16];
  float fVar195;
  undefined1 auVar190 [16];
  float fVar193;
  undefined1 auVar191 [16];
  uint uVar196;
  undefined1 auVar197 [16];
  undefined1 auVar198 [16];
  float fVar200;
  undefined1 auVar199 [16];
  undefined1 auVar201 [16];
  undefined1 auVar202 [16];
  undefined1 auVar203 [16];
  undefined1 auVar204 [16];
  undefined1 auVar205 [16];
  undefined1 auVar206 [16];
  undefined1 auVar207 [16];
  undefined1 auVar208 [16];
  undefined1 auVar209 [64];
  undefined1 auVar210 [16];
  undefined1 auVar211 [16];
  undefined1 auVar212 [16];
  undefined1 auVar213 [16];
  undefined1 auVar214 [16];
  undefined1 auVar215 [16];
  uint uVar217;
  uint uVar218;
  undefined1 auVar216 [64];
  undefined1 auVar219 [16];
  undefined1 auVar221 [64];
  undefined8 in_stack_fffffffffffffd68;
  undefined1 auStack_288 [8];
  undefined8 uStack_280;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  uint uStack_264;
  uint uStack_260;
  uint uStack_25c;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  undefined1 auStack_248 [16];
  longlong lStack_238;
  longlong lStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  longlong lStack_218;
  longlong lStack_210;
  longlong lStack_208;
  longlong lStack_200;
  undefined1 auStack_1f8 [8];
  float fStack_1f0;
  float fStack_1ec;
  longlong lStack_1e8;
  longlong lStack_1e0;
  float fStack_1d8;
  float fStack_1d4;
  longlong lStack_1d0;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 auStack_198 [16];
  longlong lStack_188;
  longlong lStack_180;
  undefined1 auStack_178 [16];
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [16];
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  undefined1 extraout_var_00 [56];
  undefined1 auVar220 [64];
  
  uVar15 = (undefined4)((ulonglong)in_stack_fffffffffffffd68 >> 0x20);
  cVar8 = func_0x000141cb4230(*(undefined4 *)((longlong)param_1 + 0x1c));
  if (cVar8 == '\0') {
    unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),(char)param_1[0x58]);
    cVar8 = func_0x000140005970(unaff_RBX & 0xffffffff);
    if (cVar8 == '\0') goto LAB_1441827be;
    param_2 = (ulonglong)*(uint *)((longlong)param_1 + 0x2c4);
    cVar8 = FUN_1459cd3f0(unaff_RBX & 0xffffffff,param_2);
    if (cVar8 != '\0') goto LAB_1441827be;
  }
  else {
LAB_1441827be:
    uVar11 = func_0x000144ed0ab0(1);
    *(undefined4 *)((longlong)param_1 + 0x4ec) = uVar11;
    uVar11 = func_0x000144ed0ab0(0);
    *(undefined4 *)((longlong)param_1 + 0x4c4) = uVar11;
  }
  if (param_1[0x4d] == 0) {
LAB_144184547:
    *(byte *)(param_1 + 0xaf) = *(byte *)(param_1 + 0xaf) & 0xfe;
  }
  else {
    lStack_208 = param_1[0x96];
    lStack_200 = param_1[0x97];
    pvVar23 = (void *)CONCAT71((int7)(param_2 >> 8),*(undefined1 *)(param_1[0x5a] + 0x2bd));
    FUN_144185e30(param_1[0x4d],pvVar23,auStack_128);
    auVar64 = vpunpckhwd_avx(auStack_f8,auStack_f8);
    auVar64 = vpsrad_avx(auVar64,0x10);
    auVar64 = vcvtdq2ps_avx(auVar64);
    auVar64 = vshufpd_avx(auVar64,auVar64,3);
    auVar71._0_4_ = auVar64._0_4_ * _DAT_146159c90 + auStack_f8._0_4_;
    auVar71._4_4_ = auVar64._4_4_ * _UNK_146159c94 + auStack_f8._4_4_;
    auVar71._8_4_ = auVar64._8_4_ * _UNK_146159c98 + auStack_f8._8_4_;
    auVar71._12_4_ = auVar64._12_4_ * _UNK_146159c9c + auStack_f8._12_4_;
    auVar209 = ZEXT1664(auVar71);
    *(undefined1 (*) [16])(param_1 + 0x96) = auVar71;
    if ((*(byte *)(param_1 + 0xaf) & 1) == 0) {
      FUN_144185ea0(param_1);
      lVar17 = param_1[0x5a];
      if (*(char *)(lVar17 + 0x20b) == '\x01') {
        cVar8 = func_0x000141cb4230(*(undefined4 *)((longlong)param_1 + 0x1c));
        if ((cVar8 != '\0') || (cVar8 = func_0x000140005970((char)param_1[0x58]), cVar8 == '\0')) {
          fVar32 = *(float *)(lVar17 + 0x268);
          auVar125 = vminss_avx(ZEXT416(*(uint *)((longlong)param_1 + 0x424)),
                                ZEXT416(*(uint *)((longlong)param_1 + 0x434)));
          auVar178 = vminss_avx(ZEXT416(*(uint *)(param_1 + 0x84)),
                                ZEXT416(*(uint *)(param_1 + 0x86)));
          auVar64 = vmaxss_avx(ZEXT416(*(uint *)(param_1 + 0x84)),ZEXT416(*(uint *)(param_1 + 0x86))
                              );
          auVar71 = vmaxss_avx(ZEXT416(*(uint *)((longlong)param_1 + 0x424)),
                               ZEXT416(*(uint *)((longlong)param_1 + 0x434)));
          fVar32 = (float)func_0x0001408aedb0(auVar178._0_4_ - fVar32,auVar125._0_4_ - fVar32,
                                              fVar32 + auVar64._0_4_,auVar71._0_4_ + fVar32);
          fVar32 = fVar32 + *(float *)(lVar17 + 0x26c);
          if ((*(float *)(param_1 + 0x97) < fVar32) ||
             ((*(float *)(param_1 + 0x85) < fVar32 || (*(float *)(param_1 + 0x87) < fVar32)))) {
            *(byte *)(param_1 + 0xaf) = *(byte *)(param_1 + 0xaf) & 0xfe;
          }
        }
      }
      if ((*(byte *)(param_1 + 0xaf) & 1) != 0) goto LAB_14418290c;
    }
    else {
LAB_14418290c:
      auVar170 = ZEXT464((uint)_DAT_145fc6ed8);
      auVar125 = ZEXT416((uint)_DAT_145fc6ed8);
      auVar64 = auVar125;
      if (*(uint *)(param_1 + 0x98) != 0) {
        fVar32 = (float)*(uint *)(param_1 + 0x98);
        plVar16 = (longlong *)FUN_144e76200();
        pvVar23 = (void *)*plVar16;
        cVar8 = (**(code **)((longlong)pvVar23 + 0x28))(plVar16);
        if (cVar8 != '\0') {
          (**(code **)(*param_1 + 0x140))(param_1);
          auVar64 = vmaxss_avx(ZEXT416(*(uint *)(param_1[0x5a] + 0x2b8)),
                               ZEXT416((uint)_DAT_145fc6f00));
          fVar32 = fVar32 / auVar64._0_4_;
        }
        iVar12 = func_0x000144ed0ab0(0);
        auVar64 = auVar170._0_16_;
        uVar13 = iVar12 - *(int *)((longlong)param_1 + 0x4c4);
        if ((uVar13 < (uint)(int)fVar32) || ((*(byte *)((longlong)param_1 + 0x579) & 0x10) == 0)) {
          auVar125._0_4_ = (float)uVar13 / fVar32;
          auVar125._4_8_ = SUB128(ZEXT812(0),4);
          auVar125._12_4_ = 0;
        }
        else {
          pvVar23 = (void *)param_1[0x5a];
          auVar125 = ZEXT416((uint)(_DAT_145fc6ed8 -
                                   (float)(int)(uVar13 - ((int)param_1[0x98] +
                                                         *(int *)((longlong)pvVar23 + 0x2a4))) /
                                   fVar32));
        }
      }
      auVar178._0_12_ = ZEXT812(0);
      auVar178._12_4_ = 0;
      auVar170 = ZEXT1664(auVar178);
      auVar71 = vminss_avx(auVar64,auVar125);
      auVar64 = vcmpss_avx(auVar125,auVar178,1);
      fVar32 = (float)(~auVar64._0_4_ & auVar71._0_4_);
      uVar13 = ~auVar64._4_4_ & auVar71._4_4_;
      uVar217 = ~auVar64._8_4_ & auVar71._8_4_;
      uVar218 = ~auVar64._12_4_ & auVar71._12_4_;
      if ((0.0 < fVar32) && (auVar170 = ZEXT464((uint)_DAT_145fc6ed8), fVar32 < _DAT_145fc6ed8)) {
        auVar170._0_8_ = func_0x000145f407b0(fVar32 * _DAT_146159bdc);
        auVar170._8_56_ = extraout_var;
        auVar170 = ZEXT1664(auVar170._0_16_);
      }
      uVar29 = CONCAT71((int7)(unaff_RBX >> 8),(char)param_1[0x58]);
      cVar8 = func_0x000140005970(uVar29 & 0xffffffff);
      fStack_268 = fVar32;
      uStack_264 = uVar13;
      uStack_260 = uVar217;
      uStack_25c = uVar218;
      if (((cVar8 == '\0') || (*(char *)(param_1[0x5a] + 0x20a) != '\0')) ||
         ((*(byte *)((longlong)param_1 + 0x579) & 1) != 0)) {
        auStack_248 = auVar170._0_16_;
        auVar216 = ZEXT1664(auStack_118);
        auVar170 = ZEXT1664(auStack_108);
        pvVar21 = (void *)(ulonglong)*(uint *)((longlong)param_1 + 0x1c);
        cVar9 = func_0x000141cb4230();
        if (cVar8 == '\x01' && cVar9 == '\0') {
          pvVar23 = (void *)(ulonglong)*(uint *)((longlong)param_1 + 0x2c4);
          pvVar21 = (void *)(uVar29 & 0xffffffff);
          cVar8 = FUN_1459cd3f0();
          auVar64 = auVar209._0_16_;
          if (cVar8 != '\0') goto LAB_144182a84;
          auVar71 = *(undefined1 (*) [16])(param_1 + 0x8e);
        }
        else {
LAB_144182a84:
          auVar171 = ZEXT1664(CONCAT412(_DAT_145fc6f10,
                                        CONCAT48(_DAT_145fc6f10,
                                                 CONCAT44(_DAT_145fc6f10,_DAT_145fc6f10))));
          vmovshdup_avx(auVar216._0_16_);
          auVar58 = ZEXT1664(CONCAT412(auVar216._12_4_ ^ _DAT_145fc6f10,
                                       CONCAT48(auVar216._8_4_ ^ _DAT_145fc6f10,
                                                CONCAT44(auVar216._4_4_ ^ _DAT_145fc6f10,
                                                         auVar216._0_4_ ^ _DAT_145fc6f10))));
          atan2f(pvVar21,pvVar23);
          auVar58 = ZEXT1664(auVar58._0_16_);
          auVar170 = ZEXT1664(auVar170._0_16_);
          atan2f(pvVar21,pvVar23);
          auVar64 = vshufpd_avx(auVar216._0_16_,auVar216._0_16_,1);
          auVar71 = auVar209._0_16_;
          auVar36._0_8_ = auVar64._0_8_ ^ auVar171._0_8_;
          auVar36._8_8_ = auVar64._8_8_ ^ auVar171._8_8_;
          auVar64 = vmaxss_avx(auVar36,auVar64);
          auVar64 = vcmpss_avx(ZEXT816(0) << 0x20,ZEXT416((uint)(auVar64._0_4_ + _DAT_145fc6f48)),2)
          ;
          auVar64 = vblendvps_avx(auVar58._0_16_,auVar170._0_16_,auVar64);
          fVar32 = auVar64._0_4_;
          auVar125 = vcmpss_avx(ZEXT816(0) << 0x20,ZEXT416((uint)(fVar32 + _DAT_145fc6f80)),2);
          auVar125 = vblendvps_avx(ZEXT416((uint)(fVar32 + _DAT_145fc6f84)),auVar64,auVar125);
          auVar64 = vcmpss_avx(auVar64,ZEXT416((uint)_DAT_145fc6f80),2);
          auVar64 = vblendvps_avx(ZEXT416((uint)(fVar32 + _DAT_14615a920)),auVar125,auVar64);
          *(int *)((longlong)param_1 + 0x524) = auVar64._0_4_;
          *(undefined1 (*) [16])(param_1 + 0x8e) = auVar71;
          auVar64 = auVar71;
        }
        fVar32 = *(float *)((longlong)param_1 + 0x524);
        fVar158 = *(float *)((longlong)param_1 + 0x524) * _DAT_146159c48;
        auVar189._0_4_ =
             (uint)(fVar158 + (float)((uint)fVar158 & _DAT_145fc6f10 | (uint)_DAT_145fc6edc));
        auVar189._4_4_ =
             (uint)(fVar158 + (float)((uint)fVar158 & _DAT_145fc6f10 | (uint)_DAT_145fc6edc));
        auVar189._8_4_ =
             (uint)(fVar158 + (float)((uint)fVar158 & _DAT_145fc6f10 | (uint)_DAT_145fc6edc));
        auVar189._12_4_ =
             (uint)(fVar158 + (float)((uint)fVar158 & _DAT_145fc6f10 | (uint)_DAT_145fc6edc));
        auVar125 = vcvtdq2ps_avx(auVar189);
        fVar162 = auVar125._0_4_ * _DAT_146159b50 + auVar125._0_4_ * _DAT_146159b4c + fVar32;
        fVar172 = auVar125._4_4_ * _DAT_146159b50 + auVar125._4_4_ * _DAT_146159b4c + fVar32;
        fVar174 = auVar125._8_4_ * _DAT_146159b50 + auVar125._8_4_ * _DAT_146159b4c + fVar32;
        fVar176 = auVar125._12_4_ * _DAT_146159b50 + auVar125._12_4_ * _DAT_146159b4c + fVar32;
        fVar32 = fVar162 * fVar162;
        fVar158 = fVar172 * fVar172;
        fVar160 = fVar174 * fVar174;
        fVar161 = fVar176 * fVar176;
        auVar210._0_4_ =
             fVar32 * (fVar32 * (fVar32 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
             _DAT_145fc6ed8;
        auVar210._4_4_ =
             fVar158 * (fVar158 * (fVar158 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
             _DAT_145fc6ed8;
        auVar210._8_4_ =
             fVar160 * (fVar160 * (fVar160 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
             _DAT_145fc6ed8;
        auVar210._12_4_ =
             fVar161 * (fVar161 * (fVar161 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
             _DAT_145fc6ed8;
        auVar214._0_4_ =
             fVar32 * fVar162 *
             (fVar32 * (fVar32 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) + fVar162;
        auVar214._4_4_ =
             fVar158 * fVar172 *
             (fVar158 * (fVar158 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) + fVar172;
        auVar214._8_4_ =
             fVar160 * fVar174 *
             (fVar160 * (fVar160 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) + fVar174;
        auVar214._12_4_ =
             fVar161 * fVar176 *
             (fVar161 * (fVar161 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) + fVar176;
        auVar163._0_4_ = auVar189._0_4_ & _DAT_145f43778;
        auVar163._4_4_ = auVar189._4_4_ & _DAT_145f43778;
        auVar163._8_4_ = auVar189._8_4_ & _DAT_145f43778;
        auVar163._12_4_ = auVar189._12_4_ & _DAT_145f43778;
        auVar68 = ZEXT416(0) << 0x20;
        auVar125 = vpcmpeqd_avx(auVar163,auVar68);
        auVar178 = vpsubd_avx(auVar68,auVar163);
        auVar125 = vblendvps_avx(auVar210,auVar214,auVar125);
        auVar178 = vblendvps_avx(auVar210,auVar214,auVar178);
        auVar215._4_4_ = _DAT_145f43774;
        auVar215._0_4_ = _DAT_145f43774;
        auVar215._8_4_ = _DAT_145f43774;
        auVar215._12_4_ = _DAT_145f43774;
        auVar197._0_4_ = auVar125._0_4_ ^ _DAT_145fc6f10;
        auVar197._4_4_ = auVar125._4_4_ ^ _DAT_145fc6f10;
        auVar197._8_4_ = auVar125._8_4_ ^ _DAT_145fc6f10;
        auVar197._12_4_ = auVar125._12_4_ ^ _DAT_145fc6f10;
        auVar211._0_4_ = auVar189._0_4_ & _DAT_145f43774;
        auVar211._4_4_ = auVar189._4_4_ & _DAT_145f43774;
        auVar211._8_4_ = auVar189._8_4_ & _DAT_145f43774;
        auVar211._12_4_ = auVar189._12_4_ & _DAT_145f43774;
        auVar36 = vpcmpeqd_avx(auVar211,auVar68);
        auVar125 = vblendvps_avx(auVar197,auVar125,auVar36);
        auVar163 = vpcmpeqd_avx(auVar36,auVar36);
        auVar198._0_4_ = auVar178._0_4_ ^ _DAT_145fc6f10;
        auVar198._4_4_ = auVar178._4_4_ ^ _DAT_145fc6f10;
        auVar198._8_4_ = auVar178._8_4_ ^ _DAT_145fc6f10;
        auVar198._12_4_ = auVar178._12_4_ ^ _DAT_145fc6f10;
        auVar36 = vpsubd_avx(auVar189,auVar163);
        auVar36 = vpand_avx(auVar36,auVar215);
        auVar36 = vpcmpeqd_avx(auVar36,auVar68);
        auVar178 = vblendvps_avx(auVar198,auVar178,auVar36);
        fVar32 = (float)((ulonglong)_DAT_146159bc0 >> 0x20);
        fVar158 = -(auVar125._0_4_ * _DAT_145fc6ed8) + auVar178._0_4_ * (float)_DAT_146159bc0;
        fVar173 = -(auVar125._4_4_ * 0.0) + auVar178._4_4_ * fVar32;
        fVar175 = -(auVar125._8_4_ * 0.0) + auVar178._8_4_ * 0.0;
        fVar177 = -(auVar125._12_4_ * 0.0) + auVar178._12_4_ * 0.0;
        fVar186 = auVar125._0_4_ * (float)_DAT_146159bc0 + _DAT_145fc6ed8 * auVar178._0_4_;
        fVar192 = auVar125._4_4_ * fVar32 + auVar178._4_4_ * 0.0;
        fVar194 = auVar125._8_4_ * 0.0 + auVar178._8_4_ * 0.0;
        fVar195 = auVar125._12_4_ * 0.0 + auVar178._12_4_ * 0.0;
        auVar34._0_4_ = (uint)_DAT_145fc6edc;
        auVar34._4_4_ = (uint)_DAT_145fc6edc;
        auVar34._8_4_ = (uint)_DAT_145fc6edc;
        auVar34._12_4_ = (uint)_DAT_145fc6edc;
        auVar125 = vcvtdq2ps_avx(auVar34);
        auVar89._0_4_ = auVar34._0_4_ & _DAT_145f43778;
        auVar89._4_4_ = auVar34._4_4_ & _DAT_145f43778;
        auVar89._8_4_ = auVar34._8_4_ & _DAT_145f43778;
        auVar89._12_4_ = auVar34._12_4_ & _DAT_145f43778;
        fVar32 = _DAT_14615a1a0 * auVar125._0_4_;
        fVar160 = _DAT_14615a1a0 * auVar125._4_4_;
        fVar161 = _DAT_14615a1a0 * auVar125._8_4_;
        fVar162 = _DAT_14615a1a0 * auVar125._12_4_;
        fVar172 = fVar32 * fVar32;
        fVar174 = fVar160 * fVar160;
        fVar176 = fVar161 * fVar161;
        fVar200 = fVar162 * fVar162;
        auVar101._0_4_ =
             fVar172 * (fVar172 * (fVar172 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
             _DAT_145fc6ed8;
        auVar101._4_4_ =
             fVar174 * (fVar174 * (fVar174 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
             _DAT_145fc6ed8;
        auVar101._8_4_ =
             fVar176 * (fVar176 * (fVar176 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
             _DAT_145fc6ed8;
        auVar101._12_4_ =
             fVar200 * (fVar200 * (fVar200 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
             _DAT_145fc6ed8;
        auVar121._0_4_ =
             fVar172 * fVar32 *
             (fVar172 * (fVar172 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) + fVar32;
        auVar121._4_4_ =
             fVar174 * fVar160 *
             (fVar174 * (fVar174 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) + fVar160;
        auVar121._8_4_ =
             fVar176 * fVar161 *
             (fVar176 * (fVar176 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) + fVar161;
        auVar121._12_4_ =
             fVar200 * fVar162 *
             (fVar200 * (fVar200 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) + fVar162;
        auVar125 = vpcmpeqd_avx(auVar89,auVar68);
        auVar178 = vpsubd_avx(auVar68,auVar89);
        auVar125 = vblendvps_avx(auVar101,auVar121,auVar125);
        auVar178 = vblendvps_avx(auVar101,auVar121,auVar178);
        auVar102._0_4_ = _DAT_145f43774 & auVar34._0_4_;
        auVar102._4_4_ = _DAT_145f43774 & auVar34._4_4_;
        auVar102._8_4_ = _DAT_145f43774 & auVar34._8_4_;
        auVar102._12_4_ = _DAT_145f43774 & auVar34._12_4_;
        auVar36 = vpsubd_avx(auVar34,auVar163);
        auVar36 = vpand_avx(auVar215,auVar36);
        auVar122._0_4_ = auVar125._0_4_ ^ _DAT_145fc6f10;
        auVar122._4_4_ = auVar125._4_4_ ^ _DAT_145fc6f10;
        auVar122._8_4_ = auVar125._8_4_ ^ _DAT_145fc6f10;
        auVar122._12_4_ = auVar125._12_4_ ^ _DAT_145fc6f10;
        auVar65._0_4_ = auVar178._0_4_ ^ _DAT_145fc6f10;
        auVar65._4_4_ = auVar178._4_4_ ^ _DAT_145fc6f10;
        auVar65._8_4_ = auVar178._8_4_ ^ _DAT_145fc6f10;
        auVar65._12_4_ = auVar178._12_4_ ^ _DAT_145fc6f10;
        auVar163 = vpcmpeqd_avx(auVar102,auVar68);
        auVar36 = vpcmpeqd_avx(auVar36,auVar68);
        auVar125 = vblendvps_avx(auVar122,auVar125,auVar163);
        fVar32 = *(float *)((longlong)param_1 + 0x454);
        auVar178 = vblendvps_avx(auVar65,auVar178,auVar36);
        fVar160 = auVar178._0_4_;
        fVar161 = auVar178._4_4_;
        fVar162 = auVar178._8_4_;
        fVar172 = auVar178._12_4_;
        fVar119 = auVar125._0_4_;
        fVar176 = fVar119 * _DAT_14614f7f0 + fVar158 * fVar160;
        fVar159 = auVar125._4_4_;
        fVar200 = fVar159 * _UNK_14614f7f4 + fVar173 * fVar161;
        fVar188 = auVar125._8_4_;
        fVar87 = fVar188 * _UNK_14614f7f8 + fVar175 * fVar162;
        fVar193 = auVar125._12_4_;
        fVar88 = fVar193 * _UNK_14614f7fc + fVar177 * fVar172;
        fVar174 = -(fVar119 * fVar158) + fVar160 * _DAT_14614f7f0;
        fVar173 = -(fVar159 * fVar173) + fVar161 * _UNK_14614f7f4;
        fVar175 = -(fVar188 * fVar175) + fVar162 * _UNK_14614f7f8;
        fVar177 = -(fVar193 * fVar177) + fVar172 * _UNK_14614f7fc;
        fVar158 = *(float *)(param_1 + 0x8b);
        fVar120 = -(fVar174 * fVar119) + fVar186 * fVar160;
        fVar145 = -(fVar173 * fVar159) + fVar192 * fVar161;
        fVar146 = -(fVar175 * fVar188) + fVar194 * fVar162;
        fVar147 = -(fVar177 * fVar193) + fVar195 * fVar172;
        auVar64 = vsubps_avx(auVar64,auVar71);
        fVar174 = fVar119 * fVar186 + fVar174 * fVar160;
        fVar161 = fVar159 * fVar192 + fVar173 * fVar161;
        fVar162 = fVar188 * fVar194 + fVar175 * fVar162;
        fVar172 = fVar193 * fVar195 + fVar177 * fVar172;
        fVar160 = *(float *)(param_1 + 0xa5);
        fVar173 = auVar64._0_4_ * fVar160 + auVar71._0_4_;
        fVar175 = auVar64._4_4_ * fVar160 + auVar71._4_4_;
        fVar177 = auVar64._8_4_ * fVar160 + auVar71._8_4_;
        fVar119 = auVar64._12_4_ * fVar160 + auVar71._12_4_;
        fVar160 = *(float *)(param_1 + 0x8a);
        *(float *)(param_1 + 0x84) =
             fVar174 * fVar158 + fVar176 * fVar32 + fVar120 * fVar160 + fVar173;
        *(float *)((longlong)param_1 + 0x424) =
             fVar161 * fVar158 + fVar200 * fVar32 + fVar145 * fVar160 + fVar175;
        *(float *)(param_1 + 0x85) =
             fVar162 * fVar158 + fVar87 * fVar32 + fVar146 * fVar160 + fVar177;
        *(float *)((longlong)param_1 + 0x42c) =
             fVar172 * fVar158 + fVar88 * fVar32 + fVar147 * fVar160 + fVar119;
        fVar32 = *(float *)(param_1 + 0x8c);
        fVar158 = *(float *)((longlong)param_1 + 0x464);
        fVar160 = *(float *)(param_1 + 0x8d);
        *(float *)(param_1 + 0x86) =
             fVar174 * fVar160 + fVar176 * fVar158 + fVar120 * fVar32 + fVar173;
        *(float *)((longlong)param_1 + 0x434) =
             fVar161 * fVar160 + fVar200 * fVar158 + fVar145 * fVar32 + fVar175;
        *(float *)(param_1 + 0x87) =
             fVar162 * fVar160 + fVar87 * fVar158 + fVar146 * fVar32 + fVar177;
        *(float *)((longlong)param_1 + 0x43c) =
             fVar172 * fVar160 + fVar88 * fVar158 + fVar147 * fVar32 + fVar119;
        fVar158 = (float)auStack_248._0_4_;
        fVar32 = fStack_268;
      }
      else {
        lVar17 = func_0x00014510c5f0();
        lVar17 = *(longlong *)(lVar17 + 0x28);
        lVar19 = func_0x000144ea4d00();
        plVar16 = _DAT_14abbe8c8;
        fVar161 = _UNK_146159c94;
        fVar160 = _DAT_146159c90;
        fVar158 = auVar170._0_4_;
        if (lVar17 == 0) {
LAB_144183829:
          uVar13 = *(uint *)(param_1 + 0x82);
          if (uVar13 != 0x1ffff) {
            uVar14 = uVar13 & 0x1ffff;
            uVar29 = (ulonglong)uVar14;
            lVar17 = _DAT_14abbe8c8[5];
            uVar217 = *(uint *)(_DAT_14abbe8c8 + 6);
            uVar218 = *(uint *)(lVar17 + (ulonglong)uVar14 * 4);
            if (((~uVar218 & uVar217) != 0) || ((uVar218 & 0x7fe0000) != (uVar13 & 0xfffe0000)))
            goto LAB_14418394a;
            if (*_DAT_14abbe8c8 == 0) goto LAB_14418394d;
            *(undefined4 *)(param_1 + 0x82) = 0x1ffff;
            auVar64 = *(undefined1 (*) [16])(param_1 + 10);
            auVar71 = vpunpckhwd_avx(auVar64,auVar64);
            auVar71 = vpsrad_avx(auVar71,0x10);
            auVar71 = vcvtdq2ps_avx(auVar71);
            auVar71 = vshufpd_avx(auVar71,auVar71,3);
            fVar160 = auVar71._0_4_ * _DAT_146159c90 + auVar64._0_4_;
            fVar161 = auVar71._4_4_ * _UNK_146159c94 + auVar64._4_4_;
            fVar162 = auVar71._8_4_ * _UNK_146159c98 + auVar64._8_4_;
            fVar172 = auVar71._12_4_ * _UNK_146159c9c + auVar64._12_4_;
            *(float *)(param_1 + 0x7a) = fVar160;
            *(float *)((longlong)param_1 + 0x3d4) = fVar161;
            *(float *)(param_1 + 0x7b) = fVar162;
            *(float *)((longlong)param_1 + 0x3dc) = fVar172;
            *(float *)(param_1 + 0x76) = fVar160;
            *(float *)((longlong)param_1 + 0x3b4) = fVar161;
            *(float *)(param_1 + 0x77) = fVar162;
            *(float *)((longlong)param_1 + 0x3bc) = fVar172;
            param_1[0x78] = param_1[0x7c];
            param_1[0x79] = param_1[0x7d];
          }
        }
        else {
          bVar30 = *(char *)(lVar19 + 0x132) < '\0' & *(byte *)(lVar19 + 0x133);
          lVar19 = 0;
          if (bVar30 == 0) {
            lVar19 = lVar17;
          }
          if ((*(char *)(lVar17 + 0x30) != '\x02') || (bVar30 != 0)) goto LAB_144183829;
          uVar13 = *(uint *)(param_1 + 0x82);
          if (uVar13 == 0x1ffff) {
LAB_144182f97:
            auVar64 = *(undefined1 (*) [16])(lVar19 + 0x70);
            auVar71 = vpunpckhwd_avx(auVar64,auVar64);
            auVar71 = vpsrad_avx(auVar71,0x10);
            auVar71 = vcvtdq2ps_avx(auVar71);
            auVar71 = vshufpd_avx(auVar71,auVar71,3);
            fVar162 = (-(_DAT_146159c90 * auVar71._0_4_) - auVar64._0_4_) +
                      *(float *)(param_1 + 0x84);
            fVar172 = (-(_UNK_146159c94 * auVar71._4_4_) - auVar64._4_4_) +
                      *(float *)((longlong)param_1 + 0x424);
            fVar174 = (-(auVar71._8_4_ * 0.0) - auVar64._8_4_) + *(float *)(param_1 + 0x85);
            fVar176 = (-(auVar71._12_4_ * 0.0) - auVar64._12_4_) +
                      *(float *)((longlong)param_1 + 0x42c);
            auVar36 = ZEXT816(0) << 0x20;
            auVar104._0_4_ = fVar162 * *(float *)(lVar19 + 0x40);
            auVar104._4_4_ = fVar172 * *(float *)(lVar19 + 0x44);
            auVar104._8_4_ = fVar174 * *(float *)(lVar19 + 0x48);
            auVar104._12_4_ = fVar176 * *(float *)(lVar19 + 0x4c);
            auVar123._0_4_ = fVar162 * *(float *)(lVar19 + 0x50);
            auVar123._4_4_ = fVar172 * *(float *)(lVar19 + 0x54);
            auVar123._8_4_ = fVar174 * *(float *)(lVar19 + 0x58);
            auVar123._12_4_ = fVar176 * *(float *)(lVar19 + 0x5c);
            auVar91._0_4_ = fVar162 * *(float *)(lVar19 + 0x60);
            auVar91._4_4_ = fVar172 * *(float *)(lVar19 + 100);
            auVar91._8_4_ = fVar174 * *(float *)(lVar19 + 0x68);
            auVar91._12_4_ = fVar176 * *(float *)(lVar19 + 0x6c);
            auVar64 = vblendps_avx(auVar104,auVar36,8);
            auVar71 = vblendps_avx(auVar123,auVar36,8);
            auVar125 = vblendps_avx(auVar91,auVar36,8);
            auVar125 = vhaddps_avx(auVar125,auVar71);
            auVar64 = vhaddps_avx(auVar64,auVar71);
            auVar64 = vhaddps_avx(auVar64,auVar125);
            *(undefined1 (*) [16])(param_1 + 0x8a) = auVar64;
            auVar64 = *(undefined1 (*) [16])(lVar19 + 0x70);
            auVar71 = vpunpckhwd_avx(auVar64,auVar64);
            auVar71 = vpsrad_avx(auVar71,0x10);
            auVar71 = vcvtdq2ps_avx(auVar71);
            auVar71 = vshufpd_avx(auVar71,auVar71,3);
            fVar162 = (-(fVar160 * auVar71._0_4_) - auVar64._0_4_) + *(float *)(param_1 + 0x86);
            fVar172 = (-(fVar161 * auVar71._4_4_) - auVar64._4_4_) +
                      *(float *)((longlong)param_1 + 0x434);
            fVar174 = (-(auVar71._8_4_ * 0.0) - auVar64._8_4_) + *(float *)(param_1 + 0x87);
            fVar176 = (-(auVar71._12_4_ * 0.0) - auVar64._12_4_) +
                      *(float *)((longlong)param_1 + 0x43c);
            auVar105._0_4_ = fVar162 * *(float *)(lVar19 + 0x40);
            auVar105._4_4_ = fVar172 * *(float *)(lVar19 + 0x44);
            auVar105._8_4_ = fVar174 * *(float *)(lVar19 + 0x48);
            auVar105._12_4_ = fVar176 * *(float *)(lVar19 + 0x4c);
            auVar124._0_4_ = fVar162 * *(float *)(lVar19 + 0x50);
            auVar124._4_4_ = fVar172 * *(float *)(lVar19 + 0x54);
            auVar124._8_4_ = fVar174 * *(float *)(lVar19 + 0x58);
            auVar124._12_4_ = fVar176 * *(float *)(lVar19 + 0x5c);
            auVar92._0_4_ = fVar162 * *(float *)(lVar19 + 0x60);
            auVar92._4_4_ = fVar172 * *(float *)(lVar19 + 100);
            auVar92._8_4_ = fVar174 * *(float *)(lVar19 + 0x68);
            auVar92._12_4_ = fVar176 * *(float *)(lVar19 + 0x6c);
            auVar64 = vblendps_avx(auVar105,auVar36,8);
            auVar71 = vblendps_avx(auVar124,auVar36,8);
            auVar125 = vblendps_avx(auVar92,auVar36,8);
            auVar125 = vhaddps_avx(auVar125,auVar71);
            auVar64 = vhaddps_avx(auVar64,auVar71);
            auVar64 = vhaddps_avx(auVar64,auVar125);
            *(undefined1 (*) [16])(param_1 + 0x8c) = auVar64;
            uVar217 = (uint)((ulonglong)(lVar19 - *plVar16) / (ulonglong)*(uint *)(plVar16 + 1));
            uVar14 = uVar217 & 0x1ffff;
            uVar13 = *(uint *)(plVar16[5] + (ulonglong)uVar14 * 4) & 0xfffe0000 | uVar14;
            *(uint *)(param_1 + 0x82) = uVar13;
            auVar64 = *(undefined1 (*) [16])(param_1 + 10);
            auVar71 = vpunpckhwd_avx(auVar64,auVar64);
            auVar71 = vpsrad_avx(auVar71,0x10);
            auVar71 = vcvtdq2ps_avx(auVar71);
            auVar178 = vshufpd_avx(auVar71,auVar71,3);
            auVar71 = *(undefined1 (*) [16])(lVar19 + 0x70);
            auVar125 = vpunpckhwd_avx(auVar71,auVar71);
            auVar125 = vpsrad_avx(auVar125,0x10);
            auVar125 = vcvtdq2ps_avx(auVar125);
            auVar125 = vshufpd_avx(auVar125,auVar125,3);
            fVar160 = fVar160 * auVar178._0_4_ + auVar64._0_4_ +
                      (-(fVar160 * auVar125._0_4_) - auVar71._0_4_);
            fVar161 = fVar161 * auVar178._4_4_ + auVar64._4_4_ +
                      (-(fVar161 * auVar125._4_4_) - auVar71._4_4_);
            fVar162 = auVar178._8_4_ * 0.0 + auVar64._8_4_ +
                      (-(auVar125._8_4_ * 0.0) - auVar71._8_4_);
            fVar172 = auVar178._12_4_ * 0.0 + auVar64._12_4_ +
                      (-(auVar125._12_4_ * 0.0) - auVar71._12_4_);
            auVar64._0_4_ = fVar160 * *(float *)(lVar19 + 0x40);
            auVar64._4_4_ = fVar161 * *(float *)(lVar19 + 0x44);
            auVar64._8_4_ = fVar162 * *(float *)(lVar19 + 0x48);
            auVar64._12_4_ = fVar172 * *(float *)(lVar19 + 0x4c);
            auVar106._0_4_ = fVar160 * *(float *)(lVar19 + 0x50);
            auVar106._4_4_ = fVar161 * *(float *)(lVar19 + 0x54);
            auVar106._8_4_ = fVar162 * *(float *)(lVar19 + 0x58);
            auVar106._12_4_ = fVar172 * *(float *)(lVar19 + 0x5c);
            auVar68._0_4_ = fVar160 * *(float *)(lVar19 + 0x60);
            auVar68._4_4_ = fVar161 * *(float *)(lVar19 + 100);
            auVar68._8_4_ = fVar162 * *(float *)(lVar19 + 0x68);
            auVar68._12_4_ = fVar172 * *(float *)(lVar19 + 0x6c);
            auVar64 = vblendps_avx(auVar64,auVar36,8);
            auVar71 = vblendps_avx(auVar106,auVar36,8);
            auVar125 = vblendps_avx(auVar68,auVar36,8);
            auVar125 = vhaddps_avx(auVar125,auVar71);
            auVar64 = vhaddps_avx(auVar64,auVar71);
            auVar64 = vhaddps_avx(auVar64,auVar125);
            *(undefined1 (*) [16])(param_1 + 0x7a) = auVar64;
            *(undefined1 (*) [16])(param_1 + 0x76) = auVar64;
            param_1[0x78] = param_1[0x7c];
            param_1[0x79] = param_1[0x7d];
            if (uVar13 == 0x1ffff) goto LAB_144182dbf;
            uVar29 = (ulonglong)(uVar217 & 0x1ffff);
            lVar17 = _DAT_14abbe8c8[5];
            uVar217 = *(uint *)(_DAT_14abbe8c8 + 6);
          }
          else {
            lVar17 = _DAT_14abbe8c8[5];
            uVar217 = *(uint *)(_DAT_14abbe8c8 + 6);
            uVar14 = uVar13 & 0x1ffff;
            uVar29 = (ulonglong)uVar14;
            uVar218 = *(uint *)(lVar17 + (ulonglong)uVar14 * 4);
            if ((((~uVar218 & uVar217) != 0) || ((uVar218 & 0x7fe0000) != (uVar13 & 0xfffe0000))) ||
               (lVar19 != (ulonglong)((int)_DAT_14abbe8c8[1] * uVar14) + *_DAT_14abbe8c8))
            goto LAB_144182f97;
LAB_14418394a:
            uVar14 = (uint)uVar29;
          }
LAB_14418394d:
          fVar162 = _DAT_14615a290;
          fVar161 = _UNK_146159c94;
          fVar160 = _DAT_146159c90;
          uVar218 = *(uint *)(lVar17 + uVar29 * 4);
          if ((((~uVar218 & uVar217) == 0) && ((uVar218 & 0x7fe0000) == (uVar13 & 0xfffe0000))) &&
             (lVar17 = *_DAT_14abbe8c8, lVar17 != 0)) {
            uVar29 = (ulonglong)(uVar14 * (int)_DAT_14abbe8c8[1]);
            fVar172 = *(float *)(param_1 + 0x8a);
            fVar174 = *(float *)((longlong)param_1 + 0x454);
            fVar176 = *(float *)(param_1 + 0x8b);
            auVar64 = *(undefined1 (*) [16])(lVar17 + 0x70 + uVar29);
            pfVar25 = (float *)(lVar17 + 0x40 + uVar29);
            pfVar1 = (float *)(lVar17 + 0x50 + uVar29);
            auVar41._4_4_ = _DAT_14615a290;
            auVar41._0_4_ = _DAT_14615a290;
            auVar41._8_4_ = _DAT_14615a290;
            auVar41._12_4_ = _DAT_14615a290;
            pfVar2 = (float *)(lVar17 + 0x60 + uVar29);
            auVar97._0_4_ =
                 fVar176 * *pfVar2 + fVar174 * *pfVar1 + fVar172 * *pfVar25 + auVar64._0_4_;
            auVar97._4_4_ =
                 fVar176 * pfVar2[1] + fVar174 * pfVar1[1] + fVar172 * pfVar25[1] + auVar64._4_4_;
            auVar97._8_4_ =
                 fVar176 * pfVar2[2] + fVar174 * pfVar1[2] + fVar172 * pfVar25[2] + auVar64._8_4_;
            auVar97._12_4_ =
                 fVar176 * pfVar2[3] + fVar174 * pfVar1[3] + fVar172 * pfVar25[3] + auVar64._12_4_;
            auVar71 = vrcpps_avx(auVar41);
            fVar200 = auVar71._0_4_;
            fVar87 = auVar71._4_4_;
            fVar88 = auVar71._8_4_;
            fVar173 = auVar71._12_4_;
            auVar71 = vblendps_avx(auVar97,auVar64,8);
            fVar200 = (-(fVar200 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar200 + fVar200;
            fVar87 = (-(fVar87 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar87 + fVar87;
            fVar88 = (-(fVar88 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar88 + fVar88;
            fVar173 = (-(fVar173 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar173 + fVar173;
            auVar148._0_4_ = fVar200 * auVar71._0_4_;
            auVar148._4_4_ = fVar87 * auVar71._4_4_;
            auVar148._8_4_ = fVar88 * auVar71._8_4_;
            auVar148._12_4_ = fVar173 * auVar71._12_4_;
            auVar125 = vroundps_avx(auVar148,3);
            auVar126._0_4_ = -(auVar125._0_4_ * _DAT_14615a290) + auVar71._0_4_;
            auVar126._4_4_ = -(auVar125._4_4_ * _DAT_14615a290) + auVar71._4_4_;
            auVar126._8_4_ = -(auVar125._8_4_ * _DAT_14615a290) + auVar71._8_4_;
            auVar126._12_4_ = -(auVar125._12_4_ * _DAT_14615a290) + auVar71._12_4_;
            auVar71 = vblendps_avx(auVar97,auVar126,3);
            auVar127._0_4_ = (int)auVar125._0_4_;
            auVar127._4_4_ = (int)auVar125._4_4_;
            auVar127._8_4_ = (int)auVar125._8_4_;
            auVar127._12_4_ = (int)auVar125._12_4_;
            auVar125 = vpackssdw_avx(auVar127,auVar127);
            sVar63 = auVar125._0_2_;
            auVar3._0_2_ = sVar63 + auVar64._0_2_;
            sVar86 = auVar125._2_2_;
            auVar3._2_2_ = sVar86 + auVar64._2_2_;
            auVar3._4_2_ = sVar63 + auVar64._4_2_;
            auVar3._6_2_ = sVar86 + auVar64._6_2_;
            auVar3._8_2_ = sVar63 + auVar64._8_2_;
            auVar3._10_2_ = sVar86 + auVar64._10_2_;
            auVar3._12_2_ = sVar63 + auVar64._12_2_;
            auVar3._14_2_ = sVar86 + auVar64._14_2_;
            auVar64 = vblendps_avx(auVar71,auVar3,8);
            auVar71 = vpunpckhwd_avx(auVar64,auVar64);
            auVar71 = vpsrad_avx(auVar71,0x10);
            auVar71 = vcvtdq2ps_avx(auVar71);
            auVar71 = vshufpd_avx(auVar71,auVar71,3);
            fVar172 = _UNK_146159c94 * auVar71._4_4_;
            *(float *)(param_1 + 0x84) = _DAT_146159c90 * auVar71._0_4_ + auVar64._0_4_;
            *(float *)((longlong)param_1 + 0x424) = fVar172 + auVar64._4_4_;
            *(float *)(param_1 + 0x85) = auVar71._8_4_ * 0.0 + auVar64._8_4_;
            *(float *)((longlong)param_1 + 0x42c) = auVar71._12_4_ * 0.0 + auVar64._12_4_;
            fVar172 = *(float *)(param_1 + 0x8c);
            auVar64 = *(undefined1 (*) [16])(lVar17 + 0x70 + uVar29);
            fVar174 = *(float *)((longlong)param_1 + 0x464);
            fVar176 = *(float *)(param_1 + 0x8d);
            pfVar25 = (float *)(lVar17 + 0x40 + uVar29);
            pfVar1 = (float *)(lVar17 + 0x50 + uVar29);
            pfVar2 = (float *)(lVar17 + 0x60 + uVar29);
            auVar98._0_4_ =
                 fVar176 * *pfVar2 + fVar174 * *pfVar1 + fVar172 * *pfVar25 + auVar64._0_4_;
            auVar98._4_4_ =
                 fVar176 * pfVar2[1] + fVar174 * pfVar1[1] + fVar172 * pfVar25[1] + auVar64._4_4_;
            auVar98._8_4_ =
                 fVar176 * pfVar2[2] + fVar174 * pfVar1[2] + fVar172 * pfVar25[2] + auVar64._8_4_;
            auVar98._12_4_ =
                 fVar176 * pfVar2[3] + fVar174 * pfVar1[3] + fVar172 * pfVar25[3] + auVar64._12_4_;
            auVar71 = vblendps_avx(auVar98,auVar64,8);
            auVar73._0_4_ = auVar71._0_4_ * fVar200;
            auVar73._4_4_ = auVar71._4_4_ * fVar87;
            auVar73._8_4_ = auVar71._8_4_ * fVar88;
            auVar73._12_4_ = auVar71._12_4_ * fVar173;
            auVar125 = vroundps_avx(auVar73,3);
            auVar42._0_4_ = -(auVar125._0_4_ * fVar162) + auVar71._0_4_;
            auVar42._4_4_ = -(auVar125._4_4_ * fVar162) + auVar71._4_4_;
            auVar42._8_4_ = -(auVar125._8_4_ * fVar162) + auVar71._8_4_;
            auVar42._12_4_ = -(auVar125._12_4_ * fVar162) + auVar71._12_4_;
            auVar74._0_4_ = (int)auVar125._0_4_;
            auVar74._4_4_ = (int)auVar125._4_4_;
            auVar74._8_4_ = (int)auVar125._8_4_;
            auVar74._12_4_ = (int)auVar125._12_4_;
            auVar71 = vblendps_avx(auVar98,auVar42,3);
            auVar125 = vpackssdw_avx(auVar74,auVar74);
            sVar63 = auVar125._0_2_;
            auVar4._0_2_ = sVar63 + auVar64._0_2_;
            sVar86 = auVar125._2_2_;
            auVar4._2_2_ = sVar86 + auVar64._2_2_;
            auVar4._4_2_ = sVar63 + auVar64._4_2_;
            auVar4._6_2_ = sVar86 + auVar64._6_2_;
            auVar4._8_2_ = sVar63 + auVar64._8_2_;
            auVar4._10_2_ = sVar86 + auVar64._10_2_;
            auVar4._12_2_ = sVar63 + auVar64._12_2_;
            auVar4._14_2_ = sVar86 + auVar64._14_2_;
            auVar71 = vpblendd_avx2(auVar71,auVar4,8);
            auVar64 = vpunpckhwd_avx(auVar71,auVar71);
            auVar64 = vpsrad_avx(auVar64,0x10);
            auVar64 = vcvtdq2ps_avx(auVar64);
            auVar64 = vshufpd_avx(auVar64,auVar64,3);
            *(float *)(param_1 + 0x86) = fVar160 * auVar64._0_4_ + auVar71._0_4_;
            *(float *)((longlong)param_1 + 0x434) = fVar161 * auVar64._4_4_ + auVar71._4_4_;
            *(float *)(param_1 + 0x87) = auVar64._8_4_ * 0.0 + auVar71._8_4_;
            *(float *)((longlong)param_1 + 0x43c) = auVar64._12_4_ * 0.0 + auVar71._12_4_;
          }
        }
      }
LAB_144182dbf:
      auVar64 = *(undefined1 (*) [16])(param_1 + 0x84);
      auVar71 = vsubps_avx(*(undefined1 (*) [16])(param_1 + 0x86),auVar64);
      auStack_288._0_4_ = fVar158 * auVar71._0_4_ + auVar64._0_4_;
      auStack_288._4_4_ = fVar158 * auVar71._4_4_ + auVar64._4_4_;
      uStack_280._0_4_ = fVar158 * auVar71._8_4_ + auVar64._8_4_;
      uStack_280._4_4_ = fVar158 * auVar71._12_4_ + auVar64._12_4_;
      lVar17 = param_1[0x96];
      fStack_278 = (float)lVar17;
      fStack_274 = (float)((ulonglong)lVar17 >> 0x20);
      fStack_270 = (float)param_1[0x97];
      fStack_26c = (float)((ulonglong)param_1[0x97] >> 0x20);
      lStack_218 = param_1[0x96];
      lStack_210 = param_1[0x97];
      plVar16 = param_1;
      puVar24 = auStack_288;
      cVar8 = FUN_144187a40(param_1,auStack_288,&lStack_208);
      if (cVar8 != '\0') {
        auVar6._4_4_ = fStack_274;
        auVar6._0_4_ = fStack_278;
        auVar6._8_4_ = fStack_270;
        auVar6._12_4_ = fStack_26c;
        auVar221 = ZEXT1664(auVar6);
        auVar90._0_12_ = ZEXT812(0);
        auVar90._12_4_ = 0;
        auVar171 = ZEXT1664(CONCAT412(_DAT_145fc6f08,
                                      CONCAT48(_DAT_145fc6f08,
                                               CONCAT44(_DAT_145fc6f08,_DAT_145fc6f08))));
        auVar219._4_4_ = _DAT_146159bfc;
        auVar219._0_4_ = _DAT_146159bfc;
        auVar219._8_4_ = _DAT_146159bfc;
        auVar219._12_4_ = _DAT_146159bfc;
        auVar220 = ZEXT1664(auVar219);
        auVar64 = vsubps_avx(auVar6,_auStack_288);
        fVar158 = auVar64._0_4_;
        auVar66._0_4_ = fVar158 * fVar158;
        fVar161 = auVar64._4_4_;
        auVar66._4_4_ = fVar161 * fVar161;
        fVar172 = auVar64._8_4_;
        auVar66._8_4_ = fVar172 * fVar172;
        fVar176 = auVar64._12_4_;
        auVar66._12_4_ = fVar176 * fVar176;
        auVar64 = vblendps_avx(auVar66,auVar90,8);
        auVar64 = vhaddps_avx(auVar64,auVar64);
        auVar71 = vhaddps_avx(auVar64,auVar64);
        auVar125 = vrsqrtps_avx(auVar71);
        auVar64 = vcmpps_avx(auVar219,auVar71,2);
        auVar58 = ZEXT1664(auVar64);
        fVar160 = auVar125._0_4_;
        fVar162 = auVar125._4_4_;
        fVar174 = auVar125._8_4_;
        fVar200 = auVar125._12_4_;
        fVar160 = (_DAT_145fc6f08 * fVar160 * fVar160 * auVar71._0_4_ - _DAT_145fc6f08) * fVar160 +
                  fVar160;
        fVar174 = (_DAT_145fc6f08 * fVar174 * fVar174 * auVar71._8_4_ - _DAT_145fc6f08) * fVar174 +
                  fVar174;
        fVar200 = (_DAT_145fc6f08 * fVar200 * fVar200 * auVar71._12_4_ - _DAT_145fc6f08) * fVar200 +
                  fVar200;
        auVar216 = ZEXT1664(CONCAT412(fVar200 * auVar71._12_4_,
                                      CONCAT48(fVar174 * auVar71._8_4_,
                                               (ulonglong)(uint)(fVar160 * auVar71._0_4_))));
        auVar64 = vcmpps_avx(auVar90,auVar71,1);
        auVar35._0_4_ = auVar64._0_4_ & (uint)(fVar160 * fVar158);
        auVar35._4_4_ =
             auVar64._4_4_ &
             (uint)(((_DAT_145fc6f08 * fVar162 * fVar162 * auVar71._4_4_ - _DAT_145fc6f08) * fVar162
                    + fVar162) * fVar161);
        auVar35._8_4_ = auVar64._8_4_ & (uint)(fVar174 * fVar172);
        auVar35._12_4_ = auVar64._12_4_ & (uint)(fVar200 * fVar176);
        vshufps_avx(auVar35,auVar35,0xf5);
        auVar64 = vshufps_avx(auVar35,auVar35,0x4e);
        auVar170 = ZEXT1664(auVar64);
        uVar33 = auVar35._0_4_ ^ _DAT_145fc6f10;
        uVar60 = auVar35._4_4_ ^ _DAT_145fc6f10;
        uVar61 = auVar35._8_4_ ^ _DAT_145fc6f10;
        uVar62 = auVar35._12_4_ ^ _DAT_145fc6f10;
        uVar13 = _DAT_145fc6f10;
        uVar217 = _DAT_145fc6f10;
        uVar218 = _DAT_145fc6f10;
        uVar14 = _DAT_145fc6f10;
        atan2f(plVar16,puVar24);
        uVar196 = auVar58._0_4_;
        uVar187 = auVar216._0_4_;
        fVar158 = auVar170._0_4_;
        auVar67._0_4_ = (uint)fVar158 ^ uVar13;
        auVar67._4_4_ = auVar170._4_4_ ^ uVar217;
        auVar67._8_4_ = auVar170._8_4_ ^ uVar218;
        auVar67._12_4_ = auVar170._12_4_ ^ uVar14;
        auVar103._0_12_ = ZEXT812(0);
        auVar103._12_4_ = 0;
        auVar64 = vmaxss_avx(auVar67,auVar170._0_16_);
        auVar64 = vcmpss_avx(auVar103,ZEXT416((uint)(auVar64._0_4_ + _DAT_145fc6f48)),2);
        auVar209 = ZEXT1664(CONCAT412(~auVar64._12_4_ & uVar62,
                                      CONCAT48(~auVar64._8_4_ & uVar61,
                                               CONCAT44(~auVar64._4_4_ & uVar60,
                                                        ~auVar64._0_4_ & uVar33))));
        if (fVar158 <= _DAT_145fc6f48) {
          auVar64 = ZEXT416((uint)_DAT_14615a1a0);
        }
        else if (_DAT_145fc6ed8 <= fVar158) {
          auVar64 = ZEXT416((uint)_DAT_146159bdc);
        }
        else {
          auVar59._0_8_ = func_0x000145f40890(auVar170._0_8_);
          uVar196 = auVar58._0_4_;
          uVar187 = auVar216._0_4_;
          auVar59._8_56_ = extraout_var_00;
          auVar64 = auVar59._0_16_;
        }
        lVar17 = param_1[0x5a];
        fVar161 = (float)(uVar196 & uVar187);
        fVar158 = *(float *)(lVar17 + 0x22c) - *(float *)(lVar17 + 0x228);
        fVar160 = _DAT_145fc6edc;
        if (_DAT_145fc6f00 <= fVar158) {
          auVar69._0_4_ = (fVar32 - *(float *)(lVar17 + 0x228)) / fVar158;
          auVar69._4_12_ = SUB6012((undefined1  [60])0x0,0);
          if (auVar69._0_4_ < 0.0) goto LAB_14418319e;
          auVar71 = *(undefined1 (*) [16])(lVar17 + 0x218);
          auVar170 = ZEXT1664(auVar71);
          auVar125 = vminss_avx(ZEXT416((uint)_DAT_145fc6ed8),auVar69);
          fVar32 = auVar125._0_4_;
          if ((0.0 < fVar32) && (fVar160 = _DAT_145fc6f08, fVar32 < _DAT_145fc6ed8)) {
            auVar216 = ZEXT1664(auVar64);
            fVar32 = (float)func_0x000145f40770(fVar32 * _DAT_145fc6f80);
            auVar71 = auVar170._0_16_;
            auVar64 = auVar216._0_16_;
            fVar160 = fVar32 * _DAT_145fc6edc;
          }
        }
        else if (fVar32 < *(float *)(lVar17 + 0x22c)) {
LAB_14418319e:
          auVar71 = *(undefined1 (*) [16])(lVar17 + 0x218);
        }
        else {
          auVar71 = *(undefined1 (*) [16])(lVar17 + 0x218);
          fVar160 = _DAT_145fc6f08;
        }
        auVar178 = vshufpd_avx(auVar71,auVar71,1);
        auVar125 = vmovshdup_avx(auVar71);
        auVar36 = vshufps_avx(auVar71,auVar71,0xff);
        fVar32 = ((_DAT_145fc6edc - fVar160) * (auVar178._0_4_ - auVar71._0_4_) + auVar71._0_4_) *
                 _DAT_146159b38;
        auVar71 = vminss_avx(ZEXT416((uint)(((_DAT_145fc6edc - fVar160) *
                                             (auVar36._0_4_ - auVar125._0_4_) + auVar125._0_4_) *
                                           _DAT_146159b38)),auVar64);
        auVar64 = vcmpss_avx(auVar64,ZEXT416((uint)fVar32),1);
        auVar64 = vblendvps_avx(auVar71,ZEXT416((uint)fVar32),auVar64);
        auVar170 = ZEXT1664(auVar64);
        fVar158 = _DAT_145fc6edc;
        uVar13 = func_0x000145f407b0(auVar209._0_8_,fVar32,auVar71._0_8_);
        fVar32 = (float)func_0x000145f40770(auVar209._0_8_);
        auVar209._0_8_ = func_0x000145f407b0(auVar170._0_8_);
        auVar209._8_56_ = extraout_var_01;
        auVar209 = ZEXT1664(auVar209._0_16_);
        fVar160 = (float)func_0x000145f40770(auVar170._0_8_);
        auVar71 = ZEXT416((uint)(fVar160 * (float)(uVar13 ^ _DAT_145fc6f10)));
        auVar64 = vinsertps_avx(auVar71,ZEXT416((uint)(fVar160 * fVar32)),0x10);
        auVar64 = vinsertps_avx(auVar64,auVar209._0_16_,0x20);
        auVar64 = vinsertps_avx(auVar64,auVar71,0x30);
        pfVar25 = &fStack_258;
        fVar32 = -(auVar64._0_4_ * fVar161) + auVar221._0_4_;
        fVar160 = -(auVar64._4_4_ * fVar161) + auVar221._4_4_;
        fVar162 = -(auVar64._8_4_ * fVar161) + auVar221._8_4_;
        fVar161 = -(auVar64._12_4_ * fVar161) + auVar221._12_4_;
        uVar13 = _DAT_145fc6f10;
        uVar217 = _DAT_145fc6f10;
        uVar218 = _DAT_145fc6f10;
        uVar14 = _DAT_145fc6f10;
        uVar18 = FUN_144a20400(pfVar25,(longlong)param_1 + 0x38c,*(undefined4 *)(lVar17 + 0x280),
                               *(undefined4 *)(lVar17 + 0x284),
                               CONCAT44(uVar15,*(undefined4 *)(lVar17 + 0x27c)));
        auVar71 = auVar220._0_16_;
        auVar64 = *(undefined1 (*) [16])(param_1 + 4);
        auVar70._0_4_ =
             fStack_250 * *(float *)(param_1 + 8) +
             fStack_254 * *(float *)(param_1 + 6) +
             auVar64._0_4_ * fStack_258 + *(float *)(param_1 + 0x92);
        auVar70._4_4_ =
             fStack_250 * *(float *)((longlong)param_1 + 0x44) +
             fStack_254 * *(float *)((longlong)param_1 + 0x34) +
             auVar64._4_4_ * fStack_258 + *(float *)((longlong)param_1 + 0x494);
        auVar70._8_4_ =
             fStack_250 * *(float *)(param_1 + 9) +
             fStack_254 * *(float *)(param_1 + 7) +
             auVar64._8_4_ * fStack_258 + *(float *)(param_1 + 0x93);
        auVar70._12_4_ =
             fStack_250 * *(float *)((longlong)param_1 + 0x4c) +
             fStack_254 * *(float *)((longlong)param_1 + 0x3c) +
             auVar64._12_4_ * fStack_258 + *(float *)((longlong)param_1 + 0x49c);
        auVar164._0_4_ = auVar70._0_4_ + fVar32;
        auVar164._4_4_ = auVar70._4_4_ + fVar160;
        auVar164._8_4_ = auVar70._8_4_ + fVar162;
        auVar164._12_4_ = auVar70._12_4_ + fVar161;
        auVar209 = ZEXT1664(auVar164);
        *(undefined1 (*) [16])(param_1 + 0x92) = auVar70;
        plVar16 = (longlong *)param_1[0x4d];
        _auStack_288 = auVar164;
        if ((plVar16 == (longlong *)0x0) || ((char)plVar16[6] != '\x02')) {
LAB_144183309:
          auVar7._4_4_ = fStack_274;
          auVar7._0_4_ = fStack_278;
          auVar7._8_4_ = fStack_270;
          auVar7._12_4_ = fStack_26c;
          auVar64 = vsubps_avx(auVar7,auVar164);
          fVar32 = auVar64._0_4_;
          auVar93._0_4_ = fVar32 * fVar32;
          fVar161 = auVar64._4_4_;
          auVar93._4_4_ = fVar161 * fVar161;
          fVar162 = auVar64._8_4_;
          auVar93._8_4_ = fVar162 * fVar162;
          fVar172 = auVar64._12_4_;
          auVar93._12_4_ = fVar172 * fVar172;
          auVar64 = vhaddps_avx(auVar93,auVar93);
          auVar94._0_4_ = auVar64._0_4_;
          auVar94._4_4_ = auVar94._0_4_;
          auVar94._8_4_ = auVar94._0_4_;
          auVar94._12_4_ = auVar94._0_4_;
          auVar64 = vrsqrtps_avx(auVar94);
          fVar160 = auVar64._0_4_;
          auVar64 = vcmpps_avx(auVar71,auVar94,2);
          auVar107._0_4_ =
               (float)(auVar64._0_4_ &
                      (uint)(((auVar171._0_4_ * fVar160 * fVar160 * auVar94._0_4_ - auVar171._0_4_)
                              * fVar160 + fVar160) * auVar94._0_4_));
          if ((0.0 < auVar107._0_4_) &&
             (fVar160 = *(float *)(param_1[0x5a] + 0x50), auVar107._0_4_ < fVar160)) {
            auVar107._4_4_ = auVar107._0_4_;
            auVar107._8_4_ = auVar107._0_4_;
            auVar107._12_4_ = auVar107._0_4_;
            auVar64 = vrcpps_avx(auVar107);
            fVar174 = auVar64._0_4_;
            fVar176 = auVar64._4_4_;
            fVar200 = auVar64._8_4_;
            fVar87 = auVar64._12_4_;
            auVar95._0_4_ =
                 -((-((fVar174 * auVar107._0_4_ - _DAT_145fc6ed8) * fVar174) + fVar174) * fVar32 *
                  fVar160) + fStack_278;
            auVar95._4_4_ =
                 -((-((fVar176 * auVar107._0_4_ - _DAT_145fc6ed8) * fVar176) + fVar176) * fVar161 *
                  fVar160) + fStack_274;
            auVar95._8_4_ =
                 -((-((fVar200 * auVar107._0_4_ - _DAT_145fc6ed8) * fVar200) + fVar200) * fVar162 *
                  fVar160) + fStack_270;
            auVar95._12_4_ =
                 -((-((fVar87 * auVar107._0_4_ - _DAT_145fc6ed8) * fVar87) + fVar87) * fVar172 *
                  fVar160) + fStack_26c;
            uVar18 = vmovlps_avx(auVar95);
            auStack_288 = (undefined1  [8])uVar18;
          }
        }
        else {
          cVar8 = *(char *)((longlong)plVar16 + 0xfa);
          iVar12 = (int)CONCAT71((int7)((ulonglong)uVar18 >> 8),cVar8) + -5;
          bVar31 = (byte)iVar12 < 2;
          pfVar25 = (float *)CONCAT71((int7)((ulonglong)pfVar25 >> 8),bVar31);
          uVar28 = (uint7)(unaff_RBP >> 8);
          unaff_RBP = CONCAT71(uVar28,cVar8 == '\x01');
          cVar9 = (**(code **)(*plVar16 + 0x480))
                            (plVar16,CONCAT71((uint7)(uint3)((uint)iVar12 >> 8),1));
          auVar164 = auVar209._0_16_;
          auVar71 = auVar220._0_16_;
          if ((cVar9 == '\0') || (unaff_RBP = (ulonglong)uVar28 << 8, cVar8 != '\x01' && !bVar31))
          goto LAB_144183309;
        }
        auVar216._0_8_ = FUN_144187be0(param_1);
        auVar216._8_56_ = extraout_var_02;
        uVar33 = *(uint *)(param_1 + 0x82);
        auVar209 = ZEXT1664(auVar216._0_16_);
        uVar27 = (undefined7)((ulonglong)pfVar25 >> 8);
        if (uVar33 == 0x1ffff) {
LAB_144183541:
          fVar32 = _DAT_14a958364;
          cVar8 = func_0x000141cb4230(*(undefined4 *)((longlong)param_1 + 0x1c));
          if (cVar8 == '\0') {
            uVar29 = CONCAT71(uVar27,(char)param_1[0x58]);
            cVar8 = func_0x000140005970(uVar29 & 0xffffffff);
            if (cVar8 == '\0') goto LAB_144183577;
            cVar8 = FUN_1459cd3f0(uVar29 & 0xffffffff,*(undefined4 *)((longlong)param_1 + 0x2c4));
            auVar166 = auVar209._0_16_;
            if (cVar8 != '\0') goto LAB_144183577;
          }
          else {
LAB_144183577:
            auVar166._0_12_ = ZEXT812(0);
            auVar166._12_4_ = 0;
          }
          fVar160 = auVar166._0_4_;
          auVar39._0_4_ = uVar13 ^ (uint)fVar160;
          auVar39._4_4_ = uVar217 ^ auVar166._4_4_;
          auVar39._8_4_ = uVar218 ^ auVar166._8_4_;
          auVar39._12_4_ = uVar14 ^ auVar166._12_4_;
          auVar64 = vmaxss_avx(auVar39,auVar166);
          bVar31 = auVar64._0_4_ <= _DAT_145fc6f00;
          *(undefined1 (*) [16])(param_1 + 0x7a) = _auStack_288;
          *(float *)(param_1 + 0x7e) = fVar160;
          *(undefined4 *)((longlong)param_1 + 0x3f4) = 0x3f800000;
          if (bVar31) {
            param_1[0x78] = param_1[0x7c];
            param_1[0x79] = param_1[0x7d];
          }
          else {
            auVar64 = *(undefined1 (*) [16])(param_1 + 0x76);
            fVar172 = fVar32 * fVar160 * fVar160;
            fVar174 = fVar32 * fVar172;
            fVar176 = fVar160 * (fVar32 + fVar32) + _DAT_145fc6ed8;
            fVar160 = auStack_288._4_4_;
            fVar161 = auStack_288._8_4_;
            fVar162 = auStack_288._12_4_;
            fVar200 = _DAT_145fc6ed8 / (fVar174 + fVar176);
            auVar71 = vsubps_avx(_auStack_288,auVar64);
            auStack_288._0_4_ =
                 (*(float *)(param_1 + 0x78) * fVar32 +
                 auVar64._0_4_ * fVar176 + fVar174 * auStack_288._0_4_) * fVar200;
            auStack_288._4_4_ =
                 (*(float *)((longlong)param_1 + 0x3c4) * fVar32 +
                 auVar64._4_4_ * fVar176 + fVar174 * fVar160) * fVar200;
            uStack_280._0_4_ =
                 (*(float *)(param_1 + 0x79) * fVar32 + auVar64._8_4_ * fVar176 + fVar174 * fVar161)
                 * fVar200;
            uStack_280._4_4_ =
                 (*(float *)((longlong)param_1 + 0x3cc) * fVar32 +
                 auVar64._12_4_ * fVar176 + fVar174 * fVar162) * fVar200;
            auVar40._0_4_ = (auVar71._0_4_ * fVar172 + *(float *)(param_1 + 0x78)) * fVar200;
            auVar40._4_4_ =
                 (auVar71._4_4_ * fVar172 + *(float *)((longlong)param_1 + 0x3c4)) * fVar200;
            auVar40._8_4_ = (auVar71._8_4_ * fVar172 + *(float *)(param_1 + 0x79)) * fVar200;
            auVar40._12_4_ =
                 (auVar71._12_4_ * fVar172 + *(float *)((longlong)param_1 + 0x3cc)) * fVar200;
            *(undefined1 (*) [16])(param_1 + 0x78) = auVar40;
          }
          *(undefined1 (*) [16])(param_1 + 0x76) = _auStack_288;
        }
        else {
          uVar60 = *(uint *)(_DAT_14abbe8c8[5] + (ulonglong)(uVar33 & 0x1ffff) * 4);
          if ((((~uVar60 & *(uint *)(_DAT_14abbe8c8 + 6)) != 0) ||
              (uVar60 = uVar60 & 0x7fe0000, uVar60 != (uVar33 & 0xfffe0000))) ||
             (lVar17 = *_DAT_14abbe8c8, lVar17 == 0)) goto LAB_144183541;
          uVar29 = (ulonglong)((uVar33 & 0x1ffff) * (int)_DAT_14abbe8c8[1]);
          auVar96._0_12_ = ZEXT812(0);
          auVar96._12_4_ = 0;
          auVar64 = *(undefined1 (*) [16])(lVar17 + 0x70 + uVar29);
          auVar71 = vpunpckhwd_avx(auVar64,auVar64);
          auVar71 = vpsrad_avx(auVar71,0x10);
          auVar71 = vcvtdq2ps_avx(auVar71);
          auVar71 = vshufpd_avx(auVar71,auVar71,3);
          fVar32 = (-(auVar71._0_4_ * _DAT_146159c90) - auVar64._0_4_) + (float)auStack_288._0_4_;
          fVar160 = (-(auVar71._4_4_ * _UNK_146159c94) - auVar64._4_4_) + (float)auStack_288._4_4_;
          fVar161 = (-(auVar71._8_4_ * _UNK_146159c98) - auVar64._8_4_) + (float)uStack_280;
          fVar162 = (-(auVar71._12_4_ * _UNK_146159c9c) - auVar64._12_4_) + uStack_280._4_4_;
          pfVar25 = (float *)(lVar17 + 0x40 + uVar29);
          auVar72._0_4_ = fVar32 * *pfVar25;
          auVar72._4_4_ = fVar160 * pfVar25[1];
          auVar72._8_4_ = fVar161 * pfVar25[2];
          auVar72._12_4_ = fVar162 * pfVar25[3];
          pfVar25 = (float *)(lVar17 + 0x50 + uVar29);
          auVar108._0_4_ = fVar32 * *pfVar25;
          auVar108._4_4_ = fVar160 * pfVar25[1];
          auVar108._8_4_ = fVar161 * pfVar25[2];
          auVar108._12_4_ = fVar162 * pfVar25[3];
          pfVar25 = (float *)(lVar17 + 0x60 + uVar29);
          auVar37._0_4_ = fVar32 * *pfVar25;
          auVar37._4_4_ = fVar160 * pfVar25[1];
          auVar37._8_4_ = fVar161 * pfVar25[2];
          auVar37._12_4_ = fVar162 * pfVar25[3];
          auVar64 = vblendps_avx(auVar72,auVar96,8);
          auVar71 = vblendps_avx(auVar108,auVar96,8);
          auVar125 = vblendps_avx(auVar37,auVar96,8);
          auVar125 = vhaddps_avx(auVar125,auVar71);
          auVar64 = vhaddps_avx(auVar64,auVar71);
          auVar64 = vhaddps_avx(auVar64,auVar125);
          auVar170 = ZEXT1664(auVar64);
          fVar32 = _DAT_14a958364;
          cVar8 = func_0x000141cb4230(*(undefined4 *)((longlong)param_1 + 0x1c),uVar60,0);
          auVar179 = auVar170._0_16_;
          if (cVar8 == '\0') {
            uVar26 = CONCAT71(uVar27,(char)param_1[0x58]);
            cVar8 = func_0x000140005970(uVar26 & 0xffffffff);
            auVar179 = auVar170._0_16_;
            if (cVar8 == '\0') goto LAB_14418348d;
            cVar8 = FUN_1459cd3f0(uVar26 & 0xffffffff,*(undefined4 *)((longlong)param_1 + 0x2c4));
            auVar165 = auVar209._0_16_;
            auVar179 = auVar170._0_16_;
            if (cVar8 != '\0') goto LAB_14418348d;
          }
          else {
LAB_14418348d:
            auVar165._0_12_ = ZEXT812(0);
            auVar165._12_4_ = 0;
          }
          fVar161 = _DAT_145fc6f00;
          fVar160 = auVar165._0_4_;
          auVar38._0_4_ = uVar13 ^ (uint)fVar160;
          auVar38._4_4_ = uVar217 ^ auVar165._4_4_;
          auVar38._8_4_ = uVar218 ^ auVar165._8_4_;
          auVar38._12_4_ = uVar14 ^ auVar165._12_4_;
          *(undefined1 (*) [16])(param_1 + 0x7a) = auVar179;
          *(float *)(param_1 + 0x7e) = fVar160;
          *(undefined4 *)((longlong)param_1 + 0x3f4) = 0x3f800000;
          auVar64 = vmaxss_avx(auVar38,auVar165);
          if (auVar64._0_4_ <= fVar161) {
            param_1[0x78] = param_1[0x7c];
            param_1[0x79] = param_1[0x7d];
          }
          else {
            auVar64 = *(undefined1 (*) [16])(param_1 + 0x76);
            fVar172 = fVar32 * fVar160 * fVar160;
            fVar174 = fVar32 * fVar172;
            fVar176 = fVar160 * (fVar32 + fVar32) + _DAT_145fc6ed8;
            fVar160 = auVar179._4_4_;
            fVar161 = auVar179._8_4_;
            fVar162 = auVar179._12_4_;
            fVar200 = _DAT_145fc6ed8 / (fVar174 + fVar176);
            auVar71 = vsubps_avx(auVar179,auVar64);
            auVar179._0_4_ =
                 (*(float *)(param_1 + 0x78) * fVar32 +
                 auVar64._0_4_ * fVar176 + fVar174 * auVar179._0_4_) * fVar200;
            auVar179._4_4_ =
                 (*(float *)((longlong)param_1 + 0x3c4) * fVar32 +
                 auVar64._4_4_ * fVar176 + fVar174 * fVar160) * fVar200;
            auVar179._8_4_ =
                 (*(float *)(param_1 + 0x79) * fVar32 + auVar64._8_4_ * fVar176 + fVar174 * fVar161)
                 * fVar200;
            auVar179._12_4_ =
                 (*(float *)((longlong)param_1 + 0x3cc) * fVar32 +
                 auVar64._12_4_ * fVar176 + fVar174 * fVar162) * fVar200;
            *(float *)(param_1 + 0x78) =
                 (auVar71._0_4_ * fVar172 + *(float *)(param_1 + 0x78)) * fVar200;
            *(float *)((longlong)param_1 + 0x3c4) =
                 (auVar71._4_4_ * fVar172 + *(float *)((longlong)param_1 + 0x3c4)) * fVar200;
            *(float *)(param_1 + 0x79) =
                 (auVar71._8_4_ * fVar172 + *(float *)(param_1 + 0x79)) * fVar200;
            *(float *)((longlong)param_1 + 0x3cc) =
                 (auVar71._12_4_ * fVar172 + *(float *)((longlong)param_1 + 0x3cc)) * fVar200;
          }
          *(undefined1 (*) [16])(param_1 + 0x76) = auVar179;
          auVar167._4_4_ = _DAT_14615a290;
          auVar167._0_4_ = _DAT_14615a290;
          auVar167._8_4_ = _DAT_14615a290;
          auVar167._12_4_ = _DAT_14615a290;
          fVar32 = auVar179._0_4_;
          auVar125 = vshufps_avx(auVar179,auVar179,0x55);
          auVar178 = vshufps_avx(auVar179,auVar179,0xaa);
          auVar64 = *(undefined1 (*) [16])(lVar17 + 0x70 + uVar29);
          pfVar25 = (float *)(lVar17 + 0x40 + uVar29);
          pfVar1 = (float *)(lVar17 + 0x50 + uVar29);
          auVar71 = vrcpps_avx(auVar167);
          pfVar2 = (float *)(lVar17 + 0x60 + uVar29);
          auVar43._0_4_ =
               auVar178._0_4_ * *pfVar2 +
               auVar125._0_4_ * *pfVar1 + fVar32 * *pfVar25 + auVar64._0_4_;
          auVar43._4_4_ =
               auVar178._4_4_ * pfVar2[1] +
               auVar125._4_4_ * pfVar1[1] + fVar32 * pfVar25[1] + auVar64._4_4_;
          auVar43._8_4_ =
               auVar178._8_4_ * pfVar2[2] +
               auVar125._8_4_ * pfVar1[2] + fVar32 * pfVar25[2] + auVar64._8_4_;
          auVar43._12_4_ =
               auVar178._12_4_ * pfVar2[3] +
               auVar125._12_4_ * pfVar1[3] + fVar32 * pfVar25[3] + auVar64._12_4_;
          fVar32 = auVar71._0_4_;
          fVar160 = auVar71._4_4_;
          fVar161 = auVar71._8_4_;
          fVar162 = auVar71._12_4_;
          auVar71 = vblendps_avx(auVar43,auVar64,8);
          auVar128._0_4_ =
               ((-(fVar32 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar32 + fVar32) * auVar71._0_4_;
          auVar128._4_4_ =
               ((-(fVar160 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar160 + fVar160) * auVar71._4_4_;
          auVar128._8_4_ =
               ((-(fVar161 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar161 + fVar161) * auVar71._8_4_;
          auVar128._12_4_ =
               ((-(fVar162 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar162 + fVar162) * auVar71._12_4_
          ;
          auVar125 = vroundps_avx(auVar128,3);
          auVar168._0_4_ = -(auVar125._0_4_ * _DAT_14615a290) + auVar71._0_4_;
          auVar168._4_4_ = -(auVar125._4_4_ * _DAT_14615a290) + auVar71._4_4_;
          auVar168._8_4_ = -(auVar125._8_4_ * _DAT_14615a290) + auVar71._8_4_;
          auVar168._12_4_ = -(auVar125._12_4_ * _DAT_14615a290) + auVar71._12_4_;
          auVar75._0_4_ = (int)auVar125._0_4_;
          auVar75._4_4_ = (int)auVar125._4_4_;
          auVar75._8_4_ = (int)auVar125._8_4_;
          auVar75._12_4_ = (int)auVar125._12_4_;
          auVar71 = vblendps_avx(auVar43,auVar168,3);
          auVar125 = vpackssdw_avx(auVar75,auVar75);
          sVar63 = auVar125._0_2_;
          auVar5._0_2_ = sVar63 + auVar64._0_2_;
          sVar86 = auVar125._2_2_;
          auVar5._2_2_ = sVar86 + auVar64._2_2_;
          auVar5._4_2_ = sVar63 + auVar64._4_2_;
          auVar5._6_2_ = sVar86 + auVar64._6_2_;
          auVar5._8_2_ = sVar63 + auVar64._8_2_;
          auVar5._10_2_ = sVar86 + auVar64._10_2_;
          auVar5._12_2_ = sVar63 + auVar64._12_2_;
          auVar5._14_2_ = sVar86 + auVar64._14_2_;
          auVar71 = vpblendd_avx2(auVar71,auVar5,8);
          auVar64 = vpunpckhwd_avx(auVar71,auVar71);
          auVar64 = vpsrad_avx(auVar64,0x10);
          auVar64 = vcvtdq2ps_avx(auVar64);
          auVar64 = vshufpd_avx(auVar64,auVar64,3);
          auStack_288._0_4_ = auVar64._0_4_ * _DAT_146159c90 + auVar71._0_4_;
          auStack_288._4_4_ = auVar64._4_4_ * _UNK_146159c94 + auVar71._4_4_;
          uStack_280._0_4_ = auVar64._8_4_ * _UNK_146159c98 + auVar71._8_4_;
          uStack_280._4_4_ = auVar64._12_4_ * _UNK_146159c9c + auVar71._12_4_;
        }
        auVar209 = ZEXT1664(_auStack_288);
        lVar17 = param_1[0x5a];
        if (((*(char *)(lVar17 + 0x20a) != '\0') ||
            ((*(byte *)((longlong)param_1 + 0x579) & 1) != 0)) &&
           (iVar12 = FUN_1459cd420((char)param_1[0x58],*(undefined4 *)((longlong)param_1 + 0x2c4)),
           iVar12 != 0)) {
          uStack_138 = auStack_288;
          uStack_130 = uStack_280;
          auVar64 = *(undefined1 (*) [16])(param_1 + 10);
          auVar71 = vpunpckhwd_avx(auVar64,auVar64);
          auVar71 = vpsrad_avx(auVar71,0x10);
          auVar71 = vcvtdq2ps_avx(auVar71);
          auVar71 = vshufpd_avx(auVar71,auVar71,3);
          auStack_148._0_4_ = auVar71._0_4_ * _DAT_146159c90 + auVar64._0_4_;
          auStack_148._4_4_ = auVar71._4_4_ * _UNK_146159c94 + auVar64._4_4_;
          auStack_148._8_4_ = auVar71._8_4_ * _UNK_146159c98 + auVar64._8_4_;
          auStack_148._12_4_ = auVar71._12_4_ * _UNK_146159c9c + auVar64._12_4_;
          cVar8 = FUN_144187c60();
          if (cVar8 != '\0') goto LAB_144184547;
          lVar17 = param_1[0x5a];
        }
        if (*(char *)(lVar17 + 0x20d) == '\x01') {
          cVar8 = func_0x000141cb4230(*(undefined4 *)((longlong)param_1 + 0x1c));
          if (((cVar8 != '\0') || (cVar8 = func_0x000140005970((char)param_1[0x58]), cVar8 == '\0'))
             && (-1 < (char)param_1[0xaf])) {
            uStack_158 = auStack_288;
            uStack_150 = uStack_280;
            cVar8 = FUN_14416ecd0(param_1[0x4d]);
            if (cVar8 == '\0') goto LAB_144184547;
          }
        }
        if ((*(byte *)((longlong)param_1 + 0x579) & 4) != 0) {
          fStack_278 = (float)param_1[0x94];
          fStack_274 = (float)((ulonglong)param_1[0x94] >> 0x20);
          fStack_270 = (float)param_1[0x95];
          fStack_26c = (float)((ulonglong)param_1[0x95] >> 0x20);
        }
        uStack_168 = auStack_288;
        uStack_160 = uStack_280;
        cVar8 = (**(code **)(*param_1 + 0x130))(param_1,&uStack_168,&fStack_278);
        if (cVar8 != '\0') {
LAB_144183724:
          bVar30 = *(byte *)((longlong)param_1 + 0x579);
          if (((bVar30 & 2) == 0) && (*(char *)(param_1[0x5a] + 0x230) != '\x01')) {
LAB_144183780:
            bVar30 = 0;
          }
          else {
            lVar17 = param_1[0x4d];
            if ((0x1cU >> (*(uint *)(lVar17 + 0x30) & 0x1f) & 1) == 0) goto LAB_144183780;
            if ((char)*(uint *)(lVar17 + 0x30) == '\x03') {
              lVar19 = func_0x000144f03110(*(undefined4 *)(lVar17 + 0x9c));
              lVar22 = 0x560;
              if (lVar19 == 0) goto LAB_14418376e;
            }
            else {
LAB_14418376e:
              lVar22 = 0x558;
            }
            lVar19 = *(longlong *)((longlong)param_1 + lVar22);
            if (lVar19 == 0) goto LAB_144183780;
            bVar30 = bVar30 & 8;
            auVar170 = ZEXT1264(ZEXT812(0));
            if (bVar30 != 0) {
              lVar22 = param_1[0x5a];
              fVar160 = *(float *)(lVar22 + 0x2b0) - *(float *)(lVar22 + 0x2ac);
              fVar32 = _DAT_145fc6edc;
              if (_DAT_145fc6f00 <= fVar160) {
                auVar53._0_4_ = (fStack_268 - *(float *)(lVar22 + 0x2ac)) / fVar160;
                auVar53._4_12_ = SUB6012((undefined1  [60])0x0,0);
                if (0.0 <= auVar53._0_4_) {
                  auVar64 = vminss_avx(ZEXT416((uint)_DAT_145fc6ed8),auVar53);
                  fVar160 = auVar64._0_4_;
                  if (0.0 < fVar160) {
                    if (_DAT_145fc6ed8 <= fVar160) goto LAB_144183f15;
                    fVar32 = (float)func_0x000145f40770(fVar160 * _DAT_145fc6f80);
                    fVar32 = fVar32 * _DAT_145fc6edc;
                  }
                }
              }
              else if (*(float *)(lVar22 + 0x2b0) <= fStack_268) {
LAB_144183f15:
                fVar32 = _DAT_145fc6f08;
              }
              auVar170 = ZEXT464((uint)((_DAT_145fc6edc - fVar32) * *(float *)(lVar22 + 0x2a8)));
            }
            _auStack_1f8 = ZEXT812(0);
            fStack_1ec = 0.0;
            cVar8 = func_0x000141cb4230(*(undefined4 *)((longlong)param_1 + 0x1c));
            uVar11 = auVar170._0_4_;
            uVar15 = 1;
            if (cVar8 == '\0') {
              unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),(char)param_1[0x58]);
              cVar8 = func_0x000140005970(unaff_RBP & 0xffffffff);
              uVar11 = auVar170._0_4_;
              uVar15 = 1;
              if (cVar8 != '\0') {
                uVar15 = FUN_1459cd3f0(unaff_RBP & 0xffffffff,
                                       *(undefined4 *)((longlong)param_1 + 0x2c4));
                uVar11 = auVar170._0_4_;
              }
            }
            auVar54._4_4_ = _DAT_14615a290;
            auVar54._0_4_ = _DAT_14615a290;
            auVar54._8_4_ = _DAT_14615a290;
            auVar54._12_4_ = _DAT_14615a290;
            bVar30 = bVar30 >> 3;
            auVar64 = vrcpps_avx(auVar54);
            fVar32 = auVar64._0_4_;
            fVar160 = auVar64._4_4_;
            fVar161 = auVar64._8_4_;
            fVar162 = auVar64._12_4_;
            auVar83._0_4_ =
                 ((-(fVar32 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar32 + fVar32) * auVar209._0_4_;
            auVar83._4_4_ =
                 ((-(fVar160 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar160 + fVar160) *
                 auVar209._4_4_;
            auVar83._8_4_ =
                 ((-(fVar161 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar161 + fVar161) *
                 auVar209._8_4_;
            auVar83._12_4_ =
                 ((-(fVar162 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar162 + fVar162) *
                 auVar209._12_4_;
            auVar64 = vroundps_avx(auVar83,3);
            auVar55._0_4_ = -(auVar64._0_4_ * _DAT_14615a290) + auVar209._0_4_;
            auVar55._4_4_ = -(auVar64._4_4_ * _DAT_14615a290) + auVar209._4_4_;
            auVar55._8_4_ = -(auVar64._8_4_ * _DAT_14615a290) + auVar209._8_4_;
            auVar55._12_4_ = -(auVar64._12_4_ * _DAT_14615a290) + auVar209._12_4_;
            auVar84._0_4_ = (int)auVar64._0_4_;
            auVar84._4_4_ = (int)auVar64._4_4_;
            auVar84._8_4_ = (int)auVar64._8_4_;
            auVar84._12_4_ = (int)auVar64._12_4_;
            auVar64 = vblendps_avx(auVar209._0_16_,auVar55,3);
            auVar71 = vpackssdw_avx(auVar84,auVar84);
            auStack_178 = vinsertps_avx(auVar64,auVar71,0x30);
            FUN_145e89ba0(lVar19,lVar17,auStack_178,uVar15,auStack_1f8,uVar11);
            fStack_278 = fStack_278 + (float)auStack_1f8._0_4_;
            fStack_274 = fStack_274 + (float)auStack_1f8._4_4_;
            fStack_270 = fStack_270 + fStack_1f0;
            fStack_26c = fStack_26c + fStack_1ec;
          }
          param_1[0x90] = CONCAT44(fStack_274,fStack_278);
          param_1[0x91] = CONCAT44(fStack_26c,fStack_270);
          lVar17 = param_1[0x5a];
          fVar32 = *(float *)(lVar17 + 0x200) - *(float *)(lVar17 + 0x1fc);
          fVar160 = fVar158;
          if (_DAT_145fc6f00 <= fVar32) {
            auVar44._0_4_ = (fStack_268 - *(float *)(lVar17 + 0x1fc)) / fVar32;
            auVar44._4_12_ = SUB6012((undefined1  [60])0x0,0);
            if (0.0 <= auVar44._0_4_) {
              auVar64 = vminss_avx(ZEXT416((uint)_DAT_145fc6ed8),auVar44);
              fVar32 = auVar64._0_4_;
              if (0.0 < fVar32) {
                if (_DAT_145fc6ed8 <= fVar32) goto LAB_1441837ca;
                fVar32 = (float)func_0x000145f40770(fVar32 * _DAT_145fc6f80);
                fVar160 = fVar32 * _DAT_145fc6edc;
              }
            }
          }
          else if (*(float *)(lVar17 + 0x200) <= fStack_268) {
LAB_1441837ca:
            fVar160 = _DAT_145fc6f08;
          }
          *(float *)(param_1 + 0x91) =
               (fVar158 - fVar160) * (*(float *)(lVar17 + 0x1f8) - *(float *)(lVar17 + 500)) +
               *(float *)(lVar17 + 500) + *(float *)(param_1 + 0x91);
          if (bVar30 == 0 && (*(byte *)((longlong)param_1 + 0x579) & 8) != 0) {
            fVar158 = *(float *)(lVar17 + 0x2b0) - *(float *)(lVar17 + 0x2ac);
            fVar32 = _DAT_145fc6edc;
            if (_DAT_145fc6f00 <= fVar158) {
              auVar45._0_4_ = (fStack_268 - *(float *)(lVar17 + 0x2ac)) / fVar158;
              auVar45._4_12_ = SUB6012((undefined1  [60])0x0,0);
              if (0.0 <= auVar45._0_4_) {
                auVar64 = vminss_avx(ZEXT416((uint)_DAT_145fc6ed8),auVar45);
                fVar158 = auVar64._0_4_;
                if (0.0 < fVar158) {
                  if (_DAT_145fc6ed8 <= fVar158) goto LAB_144183bfc;
                  fVar32 = (float)func_0x000145f40770(fVar158 * _DAT_145fc6f80);
                  fVar32 = fVar32 * _DAT_145fc6edc;
                }
              }
            }
            else if (*(float *)(lVar17 + 0x2b0) <= fStack_268) {
LAB_144183bfc:
              fVar32 = _DAT_145fc6f08;
            }
            auVar170 = ZEXT464((uint)((_DAT_145fc6edc - fVar32) * *(float *)(lVar17 + 0x2a8)));
            FUN_1441716e0(auStack_1f8,param_1[0x4d]);
            fVar32 = auVar170._0_4_;
            auVar76._0_4_ = fVar32 * (float)auStack_1f8._0_4_ + *(float *)(param_1 + 0x90);
            auVar76._4_4_ =
                 fVar32 * (float)auStack_1f8._4_4_ + *(float *)((longlong)param_1 + 0x484);
            auVar76._8_4_ = fVar32 * fStack_1f0 + *(float *)(param_1 + 0x91);
            auVar76._12_4_ = fVar32 * fStack_1ec + *(float *)((longlong)param_1 + 0x48c);
            *(undefined1 (*) [16])(param_1 + 0x90) = auVar76;
          }
          plVar16 = param_1 + 0x90;
          iVar12 = FUN_1459cd420((char)param_1[0x58],*(undefined4 *)((longlong)param_1 + 0x2c4));
          if (iVar12 != 0) {
            fStack_1d4 = (float)((uint)fStack_1d4 & 0xffffff00);
            _auStack_1f8 = _auStack_288;
            lStack_1e8 = CONCAT44(fStack_274,fStack_278);
            lStack_1e0 = CONCAT44(fStack_26c,fStack_270);
            fStack_1d8 = (float)param_1[0xe];
            FUN_14417a170(param_1[0x5a] + 0x2c0,auStack_1f8,param_1 + 0x5c,plVar16);
          }
          uVar10 = *(ushort *)(param_1 + 0x81);
          if (uVar10 != 0) {
            uVar29 = 0;
            do {
              lVar17 = *(longlong *)(param_1[0x80] + uVar29 * 8);
              if (lVar17 != 0) {
                uStack_228 = auStack_288;
                uStack_220 = uStack_280;
                lVar19 = param_1[0x4d];
                cVar8 = func_0x000141cb4230(*(undefined4 *)((longlong)param_1 + 0x1c));
                uVar15 = 1;
                if (cVar8 == '\0') {
                  unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),(char)param_1[0x58]);
                  cVar8 = func_0x000140005970(unaff_RBP & 0xffffffff,1);
                  uVar15 = 1;
                  if (cVar8 != '\0') {
                    uVar15 = FUN_1459cd3f0(unaff_RBP & 0xffffffff,
                                           *(undefined4 *)((longlong)param_1 + 0x2c4));
                  }
                }
                FUN_144a29f70(lVar17,uVar15,lVar19,&uStack_228,plVar16);
                uVar10 = *(ushort *)(param_1 + 0x81);
              }
              uVar29 = uVar29 + 1;
            } while (uVar29 < uVar10);
          }
          lVar17 = param_1[0xad];
          if (lVar17 != 0) {
            lStack_238 = *plVar16;
            lStack_230 = param_1[0x91];
            lVar19 = param_1[0x4d];
            cVar8 = func_0x000141cb4230(*(undefined4 *)((longlong)param_1 + 0x1c));
            uVar15 = 1;
            if (cVar8 == '\0') {
              uVar29 = CONCAT71((int7)(unaff_RBP >> 8),(char)param_1[0x58]);
              cVar8 = func_0x000140005970(uVar29 & 0xffffffff,1);
              uVar15 = 1;
              if (cVar8 != '\0') {
                uVar15 = FUN_1459cd3f0(uVar29 & 0xffffffff,
                                       *(undefined4 *)((longlong)param_1 + 0x2c4));
              }
            }
            FUN_144a2a3e0(lVar17,uVar15,lVar19,&lStack_238,auStack_288);
            auVar209 = ZEXT1664(_auStack_288);
          }
          auVar99._0_12_ = ZEXT812(0);
          auVar99._12_4_ = 0;
          lVar17 = param_1[0x5a];
          auVar64 = vsubps_avx(*(undefined1 (*) [16])(param_1 + 0x90),auVar209._0_16_);
          fVar32 = auVar64._0_4_;
          auVar77._0_4_ = fVar32 * fVar32;
          fVar160 = auVar64._4_4_;
          auVar77._4_4_ = fVar160 * fVar160;
          fVar162 = auVar64._8_4_;
          auVar77._8_4_ = fVar162 * fVar162;
          fVar174 = auVar64._12_4_;
          auVar77._12_4_ = fVar174 * fVar174;
          auVar64 = vblendps_avx(auVar77,auVar99,8);
          auVar64 = vhaddps_avx(auVar64,auVar64);
          auVar71 = vhaddps_avx(auVar64,auVar64);
          auVar64 = vrsqrtps_avx(auVar71);
          fVar158 = auVar64._0_4_;
          fVar161 = auVar64._4_4_;
          fVar172 = auVar64._8_4_;
          fVar176 = auVar64._12_4_;
          auVar64 = vcmpps_avx(auVar99,auVar71,1);
          auVar169._0_4_ =
               auVar64._0_4_ &
               (uint)(((auVar171._0_4_ * fVar158 * fVar158 * auVar71._0_4_ - auVar171._0_4_) *
                       fVar158 + fVar158) * fVar32);
          auVar169._4_4_ =
               auVar64._4_4_ &
               (uint)(((auVar171._4_4_ * fVar161 * fVar161 * auVar71._4_4_ - auVar171._4_4_) *
                       fVar161 + fVar161) * fVar160);
          auVar169._8_4_ =
               auVar64._8_4_ &
               (uint)(((auVar171._8_4_ * fVar172 * fVar172 * auVar71._8_4_ - auVar171._8_4_) *
                       fVar172 + fVar172) * fVar162);
          auVar169._12_4_ =
               auVar64._12_4_ &
               (uint)(((auVar171._12_4_ * fVar176 * fVar176 * auVar71._12_4_ - auVar171._12_4_) *
                       fVar176 + fVar176) * fVar174);
          auVar170 = ZEXT1664(auVar169);
          if (*(char *)(lVar17 + 0x214) == '\x01') {
            auVar64 = vshufpd_avx(auVar169,auVar169,1);
            fVar32 = _DAT_14615a1a0;
            if ((_DAT_145fc6f48 < auVar64._0_4_) &&
               (fVar32 = _DAT_146159bdc, auVar64._0_4_ < _DAT_145fc6ed8)) {
              fVar32 = (float)func_0x000145f40890();
            }
            if ((fVar32 < *(float *)(lVar17 + 0x218) * _DAT_146159b38) ||
               (*(float *)(lVar17 + 0x21c) * _DAT_146159b38 < fVar32)) {
              *(byte *)(param_1 + 0xaf) = *(byte *)(param_1 + 0xaf) & 0xfe;
              cVar8 = func_0x000141cb4230(*(undefined4 *)((longlong)param_1 + 0x1c));
              if ((cVar8 != '\0') ||
                 (cVar8 = func_0x000140005970((char)param_1[0x58]), cVar8 == '\0'))
              goto LAB_14418454e;
            }
          }
          cVar8 = func_0x000141cb4230(*(undefined4 *)((longlong)param_1 + 0x1c));
          if (cVar8 == '\0') {
            cVar8 = func_0x000140005970((char)param_1[0x58]);
            auVar64 = auVar170._0_16_;
            auVar71 = auVar209._0_16_;
            auVar125 = auVar171._0_16_;
            if (cVar8 == '\0') goto LAB_144183f9b;
          }
          else {
LAB_144183f9b:
            lStack_188 = param_1[6];
            lStack_180 = param_1[7];
            auVar64 = *(undefined1 (*) [16])(param_1 + 10);
            auVar71 = vpunpckhwd_avx(auVar64,auVar64);
            auVar71 = vpsrad_avx(auVar71,0x10);
            auVar71 = vcvtdq2ps_avx(auVar71);
            auVar71 = vshufpd_avx(auVar71,auVar71,3);
            auStack_198._0_4_ = auVar71._0_4_ * _DAT_146159c90 + auVar64._0_4_;
            auStack_198._4_4_ = auVar71._4_4_ * _UNK_146159c94 + auVar64._4_4_;
            auStack_198._8_4_ = auVar71._8_4_ * _UNK_146159c98 + auVar64._8_4_;
            auStack_198._12_4_ = auVar71._12_4_ * _UNK_146159c9c + auVar64._12_4_;
            cVar8 = FUN_14416fe50();
            auVar64 = auVar170._0_16_;
            auVar71 = auVar209._0_16_;
            auVar125 = auVar171._0_16_;
            if (cVar8 != '\0') goto LAB_144184547;
          }
          fVar200 = _DAT_145fc6f48;
          auVar46._4_4_ = _DAT_14615a290;
          auVar46._0_4_ = _DAT_14615a290;
          auVar46._8_4_ = _DAT_14615a290;
          auVar46._12_4_ = _DAT_14615a290;
          auVar216 = ZEXT1664(CONCAT412(_DAT_145fc6f48,
                                        CONCAT48(_DAT_145fc6f48,
                                                 CONCAT44(_DAT_145fc6f48,_DAT_145fc6f48))));
          auVar178 = vrcpps_avx(auVar46);
          fVar32 = auVar178._0_4_;
          fVar158 = auVar178._4_4_;
          fVar160 = auVar178._8_4_;
          fVar161 = auVar178._12_4_;
          auVar78._0_4_ =
               ((-(fVar32 * _DAT_14615a290) - _DAT_145fc6f48) * fVar32 + fVar32) * auVar71._0_4_;
          auVar78._4_4_ =
               ((-(fVar158 * _DAT_14615a290) - _DAT_145fc6f48) * fVar158 + fVar158) * auVar71._4_4_;
          auVar78._8_4_ =
               ((-(fVar160 * _DAT_14615a290) - _DAT_145fc6f48) * fVar160 + fVar160) * auVar71._8_4_;
          auVar78._12_4_ =
               ((-(fVar161 * _DAT_14615a290) - _DAT_145fc6f48) * fVar161 + fVar161) * auVar71._12_4_
          ;
          auVar178 = vroundps_avx(auVar78,3);
          auVar47._0_4_ = -(auVar178._0_4_ * _DAT_14615a290) + auVar71._0_4_;
          auVar47._4_4_ = -(auVar178._4_4_ * _DAT_14615a290) + auVar71._4_4_;
          auVar47._8_4_ = -(auVar178._8_4_ * _DAT_14615a290) + auVar71._8_4_;
          auVar47._12_4_ = -(auVar178._12_4_ * _DAT_14615a290) + auVar71._12_4_;
          auVar79._0_4_ = (int)auVar178._0_4_;
          auVar79._4_4_ = (int)auVar178._4_4_;
          auVar79._8_4_ = (int)auVar178._8_4_;
          auVar79._12_4_ = (int)auVar178._12_4_;
          auVar71 = vblendps_avx(auVar71,auVar47,3);
          auVar180._4_4_ = _DAT_145fc6f0c;
          auVar180._0_4_ = _DAT_145fc6f0c;
          auVar180._8_4_ = _DAT_145fc6f0c;
          auVar180._12_4_ = _DAT_145fc6f0c;
          auVar178 = vpackssdw_avx(auVar79,auVar79);
          auVar71 = vinsertps_avx(auVar71,auVar178,0x30);
          auVar34 = ZEXT816(0) << 0x20;
          *(undefined1 (*) [16])(param_1 + 10) = auVar71;
          fVar32 = auVar64._0_4_;
          auVar48._0_4_ = fVar32 * fVar32;
          fVar160 = auVar64._4_4_;
          auVar48._4_4_ = fVar160 * fVar160;
          fVar162 = auVar64._8_4_;
          auVar48._8_4_ = fVar162 * fVar162;
          fVar174 = auVar64._12_4_;
          auVar48._12_4_ = fVar174 * fVar174;
          auVar64 = vblendps_avx(auVar48,auVar34,8);
          auVar64 = vhaddps_avx(auVar64,auVar64);
          auVar71 = vhaddps_avx(auVar64,auVar64);
          auVar64 = vrsqrtps_avx(auVar71);
          fVar158 = auVar64._0_4_;
          fVar161 = auVar64._4_4_;
          fVar172 = auVar64._8_4_;
          fVar176 = auVar64._12_4_;
          auVar64 = vcmpps_avx(auVar34,auVar71,1);
          fVar193 = auVar125._0_4_;
          fVar120 = auVar125._4_4_;
          fVar145 = auVar125._8_4_;
          fVar146 = auVar125._12_4_;
          auVar209 = ZEXT1664(CONCAT412(_DAT_145fc6f4c,
                                        CONCAT48(_DAT_145fc6f4c,
                                                 CONCAT44(_DAT_145fc6f4c,_DAT_145fc6f4c))));
          auVar49._0_4_ =
               auVar64._0_4_ &
               (uint)(((fVar193 * fVar158 * fVar158 * auVar71._0_4_ - fVar193) * fVar158 + fVar158)
                     * fVar32);
          auVar49._4_4_ =
               auVar64._4_4_ &
               (uint)(((fVar120 * fVar161 * fVar161 * auVar71._4_4_ - fVar120) * fVar161 + fVar161)
                     * fVar160);
          auVar49._8_4_ =
               auVar64._8_4_ &
               (uint)(((fVar145 * fVar172 * fVar172 * auVar71._8_4_ - fVar145) * fVar172 + fVar172)
                     * fVar162);
          auVar49._12_4_ =
               auVar64._12_4_ &
               (uint)(((fVar146 * fVar176 * fVar176 * auVar71._12_4_ - fVar146) * fVar176 + fVar176)
                     * fVar174);
          auVar64 = vshufps_avx(auVar49,auVar49,0xc9);
          auVar71 = vshufps_avx(auVar49,auVar49,0xd2);
          auVar178 = vshufps_avx(auVar49,auVar49,0xaa);
          fVar87 = auVar64._0_4_;
          fVar88 = auVar64._4_4_;
          fVar173 = auVar64._8_4_;
          fVar175 = auVar64._12_4_;
          fVar177 = auVar71._0_4_;
          auVar129._0_4_ = fVar177 * _DAT_14615bd00 + fVar87 * _DAT_145fc6ed8;
          fVar119 = auVar71._4_4_;
          auVar129._4_4_ = fVar119 * _UNK_14615bd04 + fVar88 * 0.0;
          fVar159 = auVar71._8_4_;
          auVar129._8_4_ = fVar159 * _UNK_14615bd08 + fVar173 * 0.0;
          fVar188 = auVar71._12_4_;
          auVar129._12_4_ = fVar188 * _UNK_14615bd0c + fVar175 * 0.0;
          auVar50._0_4_ = auVar178._0_4_ & _DAT_145fc6f4c;
          auVar50._4_4_ = auVar178._4_4_ & _DAT_145fc6f4c;
          auVar50._8_4_ = auVar178._8_4_ & _DAT_145fc6f4c;
          auVar50._12_4_ = auVar178._12_4_ & _DAT_145fc6f4c;
          auVar64 = vcmpps_avx(auVar180,auVar50,1);
          auVar64 = vblendvps_avx(auVar129,ZEXT416((uint)_DAT_145fc6ed8),auVar64);
          auVar71 = vshufps_avx(auVar64,auVar64,0xc9);
          auVar64 = vshufps_avx(auVar64,auVar64,0xd2);
          fVar162 = -(fVar87 * auVar64._0_4_) + auVar71._0_4_ * fVar177;
          fVar172 = -(fVar88 * auVar64._4_4_) + auVar71._4_4_ * fVar119;
          fVar174 = -(fVar173 * auVar64._8_4_) + auVar71._8_4_ * fVar159;
          fVar176 = -(fVar175 * auVar64._12_4_) + auVar71._12_4_ * fVar188;
          auVar109._0_4_ = fVar162 * fVar162;
          auVar109._4_4_ = fVar172 * fVar172;
          auVar109._8_4_ = fVar174 * fVar174;
          auVar109._12_4_ = fVar176 * fVar176;
          auVar64 = vblendps_avx(auVar109,auVar34,8);
          auVar64 = vhaddps_avx(auVar64,auVar64);
          auVar64 = vhaddps_avx(auVar64,auVar64);
          auVar71 = vrsqrtps_avx(auVar64);
          fVar32 = auVar71._0_4_;
          fVar158 = auVar71._4_4_;
          fVar160 = auVar71._8_4_;
          fVar161 = auVar71._12_4_;
          auVar51._0_4_ =
               fVar162 * ((fVar193 * fVar32 * fVar32 * auVar64._0_4_ - fVar193) * fVar32 + fVar32);
          auVar51._4_4_ =
               fVar172 * ((fVar120 * fVar158 * fVar158 * auVar64._4_4_ - fVar120) * fVar158 +
                         fVar158);
          auVar51._8_4_ =
               fVar174 * ((fVar145 * fVar160 * fVar160 * auVar64._8_4_ - fVar145) * fVar160 +
                         fVar160);
          auVar51._12_4_ =
               fVar176 * ((fVar146 * fVar161 * fVar161 * auVar64._12_4_ - fVar146) * fVar161 +
                         fVar161);
          auVar178 = vshufps_avx(auVar51,auVar51,0xd2);
          auVar36 = vshufps_avx(auVar51,auVar51,0xc9);
          fVar162 = -(auVar36._0_4_ * fVar177) + auVar178._0_4_ * fVar87;
          fVar172 = -(auVar36._4_4_ * fVar119) + auVar178._4_4_ * fVar88;
          fVar174 = -(auVar36._8_4_ * fVar159) + auVar178._8_4_ * fVar173;
          fVar176 = -(auVar36._12_4_ * fVar188) + auVar178._12_4_ * fVar175;
          auVar149._0_4_ = fVar162 * fVar162;
          auVar149._4_4_ = fVar172 * fVar172;
          auVar149._8_4_ = fVar174 * fVar174;
          auVar149._12_4_ = fVar176 * fVar176;
          auVar64 = vblendps_avx(auVar149,auVar34,8);
          auVar64 = vhaddps_avx(auVar64,auVar64);
          auVar64 = vhaddps_avx(auVar64,auVar64);
          auVar71 = vrsqrtps_avx(auVar64);
          fVar32 = auVar71._0_4_;
          fVar158 = auVar71._4_4_;
          fVar160 = auVar71._8_4_;
          fVar161 = auVar71._12_4_;
          auVar100._0_4_ =
               fVar162 * ((fVar193 * fVar32 * fVar32 * auVar64._0_4_ - fVar193) * fVar32 + fVar32);
          auVar100._4_4_ =
               fVar172 * ((fVar120 * fVar158 * fVar158 * auVar64._4_4_ - fVar120) * fVar158 +
                         fVar158);
          auVar100._8_4_ =
               fVar174 * ((fVar145 * fVar160 * fVar160 * auVar64._8_4_ - fVar145) * fVar160 +
                         fVar160);
          auVar100._12_4_ =
               fVar176 * ((fVar146 * fVar161 * fVar161 * auVar64._12_4_ - fVar146) * fVar161 +
                         fVar161);
          auVar64 = vshufps_avx(auVar100,auVar100,0xd2);
          auVar71 = vshufps_avx(auVar100,auVar100,0xc9);
          auVar110._0_4_ = -(auVar178._0_4_ * auVar71._0_4_) + auVar64._0_4_ * auVar36._0_4_;
          auVar110._4_4_ = -(auVar178._4_4_ * auVar71._4_4_) + auVar64._4_4_ * auVar36._4_4_;
          auVar110._8_4_ = -(auVar178._8_4_ * auVar71._8_4_) + auVar64._8_4_ * auVar36._8_4_;
          auVar110._12_4_ = -(auVar178._12_4_ * auVar71._12_4_) + auVar64._12_4_ * auVar36._12_4_;
          auVar130._0_4_ = auVar51._0_4_ * auVar51._0_4_;
          auVar130._4_4_ = auVar51._4_4_ * auVar51._4_4_;
          auVar130._8_4_ = auVar51._8_4_ * auVar51._8_4_;
          auVar130._12_4_ = auVar51._12_4_ * auVar51._12_4_;
          auVar64 = vblendps_avx(auVar130,auVar34,8);
          auVar71 = vhaddps_avx(auVar64,auVar64);
          auVar181._0_4_ = auVar110._0_4_ * auVar110._0_4_;
          auVar181._4_4_ = auVar110._4_4_ * auVar110._4_4_;
          auVar181._8_4_ = auVar110._8_4_ * auVar110._8_4_;
          auVar181._12_4_ = auVar110._12_4_ * auVar110._12_4_;
          auVar64 = vblendps_avx(auVar181,auVar34,8);
          auVar64 = vhaddps_avx(auVar64,auVar64);
          auVar71 = vhaddps_avx(auVar71,auVar71);
          auVar36 = vhaddps_avx(auVar64,auVar64);
          auVar131._0_4_ = (uint)(fVar200 + auVar71._0_4_) & _DAT_145fc6f4c;
          auVar131._4_4_ = (uint)(fVar200 + auVar71._4_4_) & _DAT_145fc6f4c;
          auVar131._8_4_ = (uint)(fVar200 + auVar71._8_4_) & _DAT_145fc6f4c;
          auVar131._12_4_ = (uint)(fVar200 + auVar71._12_4_) & _DAT_145fc6f4c;
          auVar182._0_4_ = (uint)(auVar36._0_4_ + fVar200) & _DAT_145fc6f4c;
          auVar182._4_4_ = (uint)(auVar36._4_4_ + fVar200) & _DAT_145fc6f4c;
          auVar182._8_4_ = (uint)(auVar36._8_4_ + fVar200) & _DAT_145fc6f4c;
          auVar182._12_4_ = (uint)(auVar36._12_4_ + fVar200) & _DAT_145fc6f4c;
          auVar178 = vmaxps_avx(auVar182,auVar131);
          auVar183._0_4_ = auVar100._0_4_ * auVar100._0_4_;
          auVar183._4_4_ = auVar100._4_4_ * auVar100._4_4_;
          auVar183._8_4_ = auVar100._8_4_ * auVar100._8_4_;
          auVar183._12_4_ = auVar100._12_4_ * auVar100._12_4_;
          auVar64 = vblendps_avx(auVar183,auVar34,8);
          auVar64 = vhaddps_avx(auVar64,auVar64);
          auVar64 = vhaddps_avx(auVar64,auVar64);
          auVar163 = vrsqrtps_avx(auVar64);
          auVar184._0_4_ = (uint)(auVar64._0_4_ + fVar200) & _DAT_145fc6f4c;
          auVar184._4_4_ = (uint)(auVar64._4_4_ + fVar200) & _DAT_145fc6f4c;
          auVar184._8_4_ = (uint)(auVar64._8_4_ + fVar200) & _DAT_145fc6f4c;
          auVar184._12_4_ = (uint)(auVar64._12_4_ + fVar200) & _DAT_145fc6f4c;
          auVar178 = vmaxps_avx(auVar184,auVar178);
          auVar185._4_4_ = _DAT_146159ef4;
          auVar185._0_4_ = _DAT_146159ef4;
          auVar185._8_4_ = _DAT_146159ef4;
          auVar185._12_4_ = _DAT_146159ef4;
          auVar170 = ZEXT1664(auVar185);
          fVar32 = auVar163._0_4_;
          fVar160 = auVar163._4_4_;
          fVar162 = auVar163._8_4_;
          fVar174 = auVar163._12_4_;
          auVar178 = vcmpps_avx(auVar178,auVar185,2);
          auVar163 = vrsqrtps_avx(auVar36);
          fVar158 = auVar163._0_4_;
          fVar161 = auVar163._4_4_;
          fVar172 = auVar163._8_4_;
          fVar176 = auVar163._12_4_;
          fVar88 = ((fVar193 * fVar32 * fVar32 * auVar64._0_4_ - fVar193) * fVar32 + fVar32) *
                   auVar100._0_4_;
          fVar173 = ((fVar120 * fVar160 * fVar160 * auVar64._4_4_ - fVar120) * fVar160 + fVar160) *
                    auVar100._4_4_;
          fVar175 = ((fVar145 * fVar162 * fVar162 * auVar64._8_4_ - fVar145) * fVar162 + fVar162) *
                    auVar100._8_4_;
          fVar177 = ((fVar146 * fVar174 * fVar174 * auVar64._12_4_ - fVar146) * fVar174 + fVar174) *
                    auVar100._12_4_;
          auVar64 = vrsqrtps_avx(auVar71);
          fVar32 = auVar64._0_4_;
          fVar160 = auVar64._4_4_;
          fVar162 = auVar64._8_4_;
          fVar174 = auVar64._12_4_;
          fVar200 = ((fVar193 * fVar158 * fVar158 * auVar36._0_4_ - fVar193) * fVar158 + fVar158) *
                    auVar110._0_4_;
          fVar87 = ((fVar120 * fVar161 * fVar161 * auVar36._4_4_ - fVar120) * fVar161 + fVar161) *
                   auVar110._4_4_;
          fVar172 = ((fVar145 * fVar172 * fVar172 * auVar36._8_4_ - fVar145) * fVar172 + fVar172) *
                    auVar110._8_4_;
          fVar176 = ((fVar146 * fVar176 * fVar176 * auVar36._12_4_ - fVar146) * fVar176 + fVar176) *
                    auVar110._12_4_;
          auVar58 = ZEXT1664(auVar125);
          fVar32 = ((fVar193 * fVar32 * fVar32 * auVar71._0_4_ - fVar193) * fVar32 + fVar32) *
                   auVar51._0_4_;
          fVar158 = ((fVar120 * fVar160 * fVar160 * auVar71._4_4_ - fVar120) * fVar160 + fVar160) *
                    auVar51._4_4_;
          fVar160 = ((fVar145 * fVar162 * fVar162 * auVar71._8_4_ - fVar145) * fVar162 + fVar162) *
                    auVar51._8_4_;
          fVar161 = ((fVar146 * fVar174 * fVar174 * auVar71._12_4_ - fVar146) * fVar174 + fVar174) *
                    auVar51._12_4_;
          auVar212._0_4_ = fVar200 * fVar32;
          auVar212._4_4_ = fVar87 * fVar158;
          auVar212._8_4_ = fVar172 * fVar160;
          auVar212._12_4_ = fVar176 * fVar161;
          auVar150._0_4_ = fVar88 * fVar32;
          auVar150._4_4_ = fVar173 * fVar158;
          auVar150._8_4_ = fVar175 * fVar160;
          auVar150._12_4_ = fVar177 * fVar161;
          auVar199._0_4_ = fVar200 * fVar88;
          auVar199._4_4_ = fVar87 * fVar173;
          auVar199._8_4_ = fVar172 * fVar175;
          auVar199._12_4_ = fVar176 * fVar177;
          auVar64 = vblendps_avx(auVar212,auVar34,8);
          auVar71 = vblendps_avx(auVar150,auVar34,8);
          auVar125 = vblendps_avx(auVar199,auVar34,8);
          auVar64 = vhaddps_avx(auVar64,auVar64);
          auVar71 = vhaddps_avx(auVar71,auVar71);
          auVar125 = vhaddps_avx(auVar125,auVar125);
          auVar64 = vhaddps_avx(auVar64,auVar64);
          auVar71 = vhaddps_avx(auVar71,auVar71);
          auVar125 = vhaddps_avx(auVar125,auVar125);
          auVar213._0_4_ = auVar64._0_4_ & _DAT_145fc6f4c;
          auVar213._4_4_ = auVar64._4_4_ & _DAT_145fc6f4c;
          auVar213._8_4_ = auVar64._8_4_ & _DAT_145fc6f4c;
          auVar213._12_4_ = auVar64._12_4_ & _DAT_145fc6f4c;
          auVar151._0_4_ = auVar71._0_4_ & _DAT_145fc6f4c;
          auVar151._4_4_ = auVar71._4_4_ & _DAT_145fc6f4c;
          auVar151._8_4_ = auVar71._8_4_ & _DAT_145fc6f4c;
          auVar151._12_4_ = auVar71._12_4_ & _DAT_145fc6f4c;
          auVar80._0_4_ = auVar125._0_4_ & _DAT_145fc6f4c;
          auVar80._4_4_ = auVar125._4_4_ & _DAT_145fc6f4c;
          auVar80._8_4_ = auVar125._8_4_ & _DAT_145fc6f4c;
          auVar80._12_4_ = auVar125._12_4_ & _DAT_145fc6f4c;
          auVar64 = vmaxps_avx(auVar151,auVar213);
          auVar64 = vmaxps_avx(auVar80,auVar64);
          auVar64 = vcmpps_avx(auVar64,auVar185,2);
          auVar81._0_4_ = auVar64._0_4_ & auVar178._0_4_;
          auVar81._4_4_ = auVar64._4_4_ & auVar178._4_4_;
          auVar81._8_4_ = auVar64._8_4_ & auVar178._8_4_;
          auVar81._12_4_ = auVar64._12_4_ & auVar178._12_4_;
          auVar64 = vpcmpeqd_avx(auVar178,auVar178);
          if ((auVar64 & ~auVar81) == (undefined1  [16])0x0) {
            auVar82._4_4_ = _DAT_145fc6f70;
            auVar82._0_4_ = _DAT_145fc6f70;
            auVar82._8_4_ = _DAT_145fc6f70;
            auVar82._12_4_ = _DAT_145fc6f70;
            auVar132._0_4_ = (uint)auVar100._0_4_ & _DAT_145fc6f4c;
            auVar132._4_4_ = (uint)auVar100._4_4_ & _DAT_145fc6f4c;
            auVar132._8_4_ = (uint)auVar100._8_4_ & _DAT_145fc6f4c;
            auVar132._12_4_ = (uint)auVar100._12_4_ & _DAT_145fc6f4c;
            auVar64 = vcmpps_avx(auVar132,auVar82,0x11);
            uVar15 = vmovmskps_avx(auVar64);
            if ((~(byte)uVar15 & 7) == 0) {
              auVar133._0_4_ = (uint)auVar110._0_4_ & _DAT_145fc6f4c;
              auVar133._4_4_ = (uint)auVar110._4_4_ & _DAT_145fc6f4c;
              auVar133._8_4_ = (uint)auVar110._8_4_ & _DAT_145fc6f4c;
              auVar133._12_4_ = (uint)auVar110._12_4_ & _DAT_145fc6f4c;
              auVar64 = vcmpps_avx(auVar133,auVar82,0x11);
              uVar15 = vmovmskps_avx(auVar64);
              if ((~(byte)uVar15 & 7) == 0) {
                auVar134._0_4_ = (uint)auVar51._0_4_ & _DAT_145fc6f4c;
                auVar134._4_4_ = (uint)auVar51._4_4_ & _DAT_145fc6f4c;
                auVar134._8_4_ = (uint)auVar51._8_4_ & _DAT_145fc6f4c;
                auVar134._12_4_ = (uint)auVar51._12_4_ & _DAT_145fc6f4c;
                auVar64 = vcmpps_avx(auVar134,auVar82,0x11);
                uVar15 = vmovmskps_avx(auVar64);
                if ((~(byte)uVar15 & 7) == 0) {
                  *(undefined1 (*) [16])(param_1 + 4) = auVar100;
                  auVar64 = vblendps_avx(auVar110,*(undefined1 (*) [16])(param_1 + 6),8);
                  *(undefined1 (*) [16])(param_1 + 6) = auVar64;
                  auVar64 = vblendps_avx(auVar51,*(undefined1 (*) [16])(param_1 + 8),8);
                  *(undefined1 (*) [16])(param_1 + 8) = auVar64;
                }
              }
            }
          }
          uStack_1a8 = CONCAT44(fStack_274,fStack_278);
          uStack_1a0 = CONCAT44(fStack_26c,fStack_270);
          uStack_1b8 = auStack_288;
          uStack_1b0 = uStack_280;
          FUN_144187ec0(param_1);
          cVar8 = FUN_144188600(param_1,auStack_288,&lStack_218);
          if (cVar8 != '\0') {
            pauVar20 = (undefined1 (*) [16])param_1[0x5a];
            auVar64 = vmaxss_avx(ZEXT416(*(uint *)((longlong)pauVar20[0x20] + 4)),
                                 ZEXT416(_DAT_146159ef4));
            *(int *)((longlong)param_1 + 0x74) = auVar64._0_4_;
            if (((*(byte *)(param_1 + 0xaf) & 4) != 0) ||
               (*(char *)((longlong)pauVar20[0x23] + 1) == '\x01')) {
              pauVar20 = (undefined1 (*) [16])(param_1 + 4);
              if (*(char *)(param_1[0x4d] + 0x30) == '\x02') {
                if (param_1[0xa9] != 0) {
                  _auStack_1f8 = *pauVar20;
                  lStack_1e8 = param_1[6];
                  lStack_1e0 = param_1[7];
                  lStack_1d0 = param_1[9];
                  fStack_1d8 = (float)param_1[8];
                  fStack_1d4 = (float)((ulonglong)param_1[8] >> 0x20);
                  auVar64 = *(undefined1 (*) [16])(param_1 + 10);
                  auVar71 = vpunpckhwd_avx(auVar64,auVar64);
                  auVar71 = vpsrad_avx(auVar71,0x10);
                  auVar71 = vcvtdq2ps_avx(auVar71);
                  auVar71 = vshufpd_avx(auVar71,auVar71,3);
                  fStack_1c8 = auVar71._0_4_ * _DAT_146159c90 + auVar64._0_4_;
                  fStack_1c4 = auVar71._4_4_ * _UNK_146159c94 + auVar64._4_4_;
                  fStack_1c0 = auVar71._8_4_ * _UNK_146159c98 + auVar64._8_4_;
                  fStack_1bc = auVar71._12_4_ * _UNK_146159c9c + auVar64._12_4_;
                  auVar52._0_4_ = fStack_258 * fStack_258;
                  auVar52._4_4_ = fStack_254 * fStack_254;
                  auVar52._8_4_ = fStack_250 * fStack_250;
                  auVar52._12_4_ = fStack_24c * fStack_24c;
                  auVar64 = vblendps_avx(auVar52,ZEXT816(0),8);
                  auVar64 = vhaddps_avx(auVar64,auVar64);
                  auVar64 = vhaddps_avx(auVar64,auVar64);
                  auVar209 = ZEXT1664(auVar209._0_16_);
                  auVar170 = ZEXT1664(auVar170._0_16_);
                  auVar216 = ZEXT1664(auVar216._0_16_);
                  auVar171 = ZEXT1664(ZEXT816(0));
                  auVar58 = ZEXT1664(auVar58._0_16_);
                  pauVar20 = (undefined1 (*) [16])
                             FUN_145e8a0c0(param_1[0xa9],auStack_1f8,_DAT_14615a034 <= auVar64._0_4_
                                          );
                  auVar85._8_8_ = lStack_1e0;
                  auVar85._0_8_ = lStack_1e8;
                  auVar57._4_4_ = fStack_1d4;
                  auVar57._0_4_ = fStack_1d8;
                  auVar57._8_8_ = lStack_1d0;
                  auVar111._0_4_ = fStack_1d8 * fStack_1d8;
                  auVar111._4_4_ = fStack_1d4 * fStack_1d4;
                  fVar174 = (float)lStack_1d0;
                  auVar111._8_4_ = fVar174 * fVar174;
                  fVar88 = (float)((ulonglong)lStack_1d0 >> 0x20);
                  auVar111._12_4_ = fVar88 * fVar88;
                  fVar32 = (float)lStack_1e8;
                  auVar152._0_4_ = fVar32 * fVar32;
                  fVar161 = (float)((ulonglong)lStack_1e8 >> 0x20);
                  auVar152._4_4_ = fVar161 * fVar161;
                  fVar176 = (float)lStack_1e0;
                  auVar152._8_4_ = fVar176 * fVar176;
                  fVar173 = (float)((ulonglong)lStack_1e0 >> 0x20);
                  auVar152._12_4_ = fVar173 * fVar173;
                  auVar163 = auVar171._0_16_;
                  auVar64 = vblendps_avx(auVar111,auVar163,8);
                  auVar71 = vblendps_avx(auVar152,auVar163,8);
                  auVar71 = vhaddps_avx(auVar71,auVar71);
                  auVar64 = vhaddps_avx(auVar64,auVar64);
                  auVar125 = vhaddps_avx(auVar64,auVar64);
                  auVar71 = vhaddps_avx(auVar71,auVar71);
                  fVar158 = auVar216._0_4_;
                  fVar160 = auVar216._4_4_;
                  fVar162 = auVar216._8_4_;
                  fVar172 = auVar216._12_4_;
                  uVar13 = auVar209._0_4_;
                  auVar112._0_4_ = (uint)(fVar158 + auVar125._0_4_) & uVar13;
                  uVar217 = auVar209._4_4_;
                  auVar112._4_4_ = (uint)(fVar160 + auVar125._4_4_) & uVar217;
                  uVar218 = auVar209._8_4_;
                  auVar112._8_4_ = (uint)(fVar162 + auVar125._8_4_) & uVar218;
                  uVar14 = auVar209._12_4_;
                  auVar112._12_4_ = (uint)(fVar172 + auVar125._12_4_) & uVar14;
                  auVar201._0_4_ = (uint)(fVar158 + auVar71._0_4_) & uVar13;
                  auVar201._4_4_ = (uint)(fVar160 + auVar71._4_4_) & uVar217;
                  auVar201._8_4_ = (uint)(fVar162 + auVar71._8_4_) & uVar218;
                  auVar201._12_4_ = (uint)(fVar172 + auVar71._12_4_) & uVar14;
                  auVar178 = vmaxps_avx(auVar201,auVar112);
                  auVar202._0_4_ = (float)auStack_1f8._0_4_ * (float)auStack_1f8._0_4_;
                  auVar202._4_4_ = (float)auStack_1f8._4_4_ * (float)auStack_1f8._4_4_;
                  auVar202._8_4_ = fStack_1f0 * fStack_1f0;
                  auVar202._12_4_ = fStack_1ec * fStack_1ec;
                  auVar64 = vblendps_avx(auVar202,auVar163,8);
                  auVar64 = vhaddps_avx(auVar64,auVar64);
                  auVar64 = vhaddps_avx(auVar64,auVar64);
                  auVar190._0_4_ = (uint)(auVar64._0_4_ + fVar158) & uVar13;
                  auVar190._4_4_ = (uint)(auVar64._4_4_ + fVar160) & uVar217;
                  auVar190._8_4_ = (uint)(auVar64._8_4_ + fVar162) & uVar218;
                  auVar190._12_4_ = (uint)(auVar64._12_4_ + fVar172) & uVar14;
                  auVar178 = vmaxps_avx(auVar190,auVar178);
                  auVar36 = vrsqrtps_avx(auVar64);
                  auVar178 = vcmpps_avx(auVar178,auVar170._0_16_,2);
                  fVar158 = auVar36._0_4_;
                  fVar160 = auVar36._4_4_;
                  fVar162 = auVar36._8_4_;
                  fVar172 = auVar36._12_4_;
                  fVar146 = auVar58._0_4_;
                  fVar147 = auVar58._4_4_;
                  fVar186 = auVar58._8_4_;
                  fVar192 = auVar58._12_4_;
                  fVar188 = ((fVar146 * fVar158 * fVar158 * auVar64._0_4_ - fVar146) * fVar158 +
                            fVar158) * (float)auStack_1f8._0_4_;
                  fVar193 = ((fVar147 * fVar160 * fVar160 * auVar64._4_4_ - fVar147) * fVar160 +
                            fVar160) * (float)auStack_1f8._4_4_;
                  fVar120 = ((fVar186 * fVar162 * fVar162 * auVar64._8_4_ - fVar186) * fVar162 +
                            fVar162) * fStack_1f0;
                  fVar145 = ((fVar192 * fVar172 * fVar172 * auVar64._12_4_ - fVar192) * fVar172 +
                            fVar172) * fStack_1ec;
                  auVar64 = vrsqrtps_avx(auVar71);
                  fVar158 = auVar64._0_4_;
                  fVar162 = auVar64._4_4_;
                  fVar200 = auVar64._8_4_;
                  fVar175 = auVar64._12_4_;
                  auVar64 = vrsqrtps_avx(auVar125);
                  fVar160 = auVar64._0_4_;
                  fVar172 = auVar64._4_4_;
                  fVar87 = auVar64._8_4_;
                  fVar177 = auVar64._12_4_;
                  fVar119 = ((fVar146 * fVar158 * fVar158 * auVar71._0_4_ - fVar146) * fVar158 +
                            fVar158) * fVar32;
                  fVar159 = ((fVar147 * fVar162 * fVar162 * auVar71._4_4_ - fVar147) * fVar162 +
                            fVar162) * fVar161;
                  fVar200 = ((fVar186 * fVar200 * fVar200 * auVar71._8_4_ - fVar186) * fVar200 +
                            fVar200) * fVar176;
                  fVar175 = ((fVar192 * fVar175 * fVar175 * auVar71._12_4_ - fVar192) * fVar175 +
                            fVar175) * fVar173;
                  fVar158 = ((fVar146 * fVar160 * fVar160 * auVar125._0_4_ - fVar146) * fVar160 +
                            fVar160) * fStack_1d8;
                  fVar160 = ((fVar147 * fVar172 * fVar172 * auVar125._4_4_ - fVar147) * fVar172 +
                            fVar172) * fStack_1d4;
                  fVar162 = ((fVar186 * fVar87 * fVar87 * auVar125._8_4_ - fVar186) * fVar87 +
                            fVar87) * fVar174;
                  fVar172 = ((fVar192 * fVar177 * fVar177 * auVar125._12_4_ - fVar192) * fVar177 +
                            fVar177) * fVar88;
                  auVar203._0_4_ = fVar158 * fVar119;
                  auVar203._4_4_ = fVar160 * fVar159;
                  auVar203._8_4_ = fVar162 * fVar200;
                  auVar203._12_4_ = fVar172 * fVar175;
                  auVar135._0_4_ = fVar188 * fVar158;
                  auVar135._4_4_ = fVar193 * fVar160;
                  auVar135._8_4_ = fVar120 * fVar162;
                  auVar135._12_4_ = fVar145 * fVar172;
                  auVar153._0_4_ = fVar188 * fVar119;
                  auVar153._4_4_ = fVar193 * fVar159;
                  auVar153._8_4_ = fVar120 * fVar200;
                  auVar153._12_4_ = fVar145 * fVar175;
                  auVar64 = vblendps_avx(auVar203,auVar163,8);
                  auVar71 = vblendps_avx(auVar135,auVar163,8);
                  auVar125 = vblendps_avx(auVar153,auVar163,8);
                  auVar64 = vhaddps_avx(auVar64,auVar64);
                  auVar71 = vhaddps_avx(auVar71,auVar71);
                  auVar125 = vhaddps_avx(auVar125,auVar125);
                  auVar64 = vhaddps_avx(auVar64,auVar64);
                  auVar71 = vhaddps_avx(auVar71,auVar71);
                  auVar125 = vhaddps_avx(auVar125,auVar125);
                  auVar204._0_4_ = auVar64._0_4_ & uVar13;
                  auVar204._4_4_ = auVar64._4_4_ & uVar217;
                  auVar204._8_4_ = auVar64._8_4_ & uVar218;
                  auVar204._12_4_ = auVar64._12_4_ & uVar14;
                  auVar136._0_4_ = auVar71._0_4_ & uVar13;
                  auVar136._4_4_ = auVar71._4_4_ & uVar217;
                  auVar136._8_4_ = auVar71._8_4_ & uVar218;
                  auVar136._12_4_ = auVar71._12_4_ & uVar14;
                  auVar154._0_4_ = auVar125._0_4_ & uVar13;
                  auVar154._4_4_ = auVar125._4_4_ & uVar217;
                  auVar154._8_4_ = auVar125._8_4_ & uVar218;
                  auVar154._12_4_ = auVar125._12_4_ & uVar14;
                  auVar64 = vmaxps_avx(auVar136,auVar204);
                  auVar64 = vmaxps_avx(auVar154,auVar64);
                  auVar64 = vcmpps_avx(auVar64,auVar170._0_16_,2);
                  auVar113._0_4_ = auVar64._0_4_ & auVar178._0_4_;
                  auVar113._4_4_ = auVar64._4_4_ & auVar178._4_4_;
                  auVar113._8_4_ = auVar64._8_4_ & auVar178._8_4_;
                  auVar113._12_4_ = auVar64._12_4_ & auVar178._12_4_;
                  auVar64 = vpcmpeqd_avx(auVar64,auVar64);
                  if ((auVar64 & ~auVar113) == (undefined1  [16])0x0) {
                    auVar114._4_4_ = _DAT_145fc6f70;
                    auVar114._0_4_ = _DAT_145fc6f70;
                    auVar114._8_4_ = _DAT_145fc6f70;
                    auVar114._12_4_ = _DAT_145fc6f70;
                    auVar137._0_4_ = auStack_1f8._0_4_ & uVar13;
                    auVar137._4_4_ = auStack_1f8._4_4_ & uVar217;
                    auVar137._8_4_ = (uint)fStack_1f0 & uVar218;
                    auVar137._12_4_ = (uint)fStack_1ec & uVar14;
                    auVar64 = vcmpps_avx(auVar137,auVar114,0x11);
                    uVar15 = vmovmskps_avx(auVar64);
                    pauVar20 = (undefined1 (*) [16])
                               (ulonglong)CONCAT31((int3)((uint)uVar15 >> 8),~(byte)uVar15);
                    if ((~(byte)uVar15 & 7) == 0) {
                      auVar138._0_4_ = (uint)fVar32 & uVar13;
                      auVar138._4_4_ = (uint)fVar161 & uVar217;
                      auVar138._8_4_ = (uint)fVar176 & uVar218;
                      auVar138._12_4_ = (uint)fVar173 & uVar14;
                      auVar64 = vcmpps_avx(auVar138,auVar114,0x11);
                      uVar15 = vmovmskps_avx(auVar64);
                      pauVar20 = (undefined1 (*) [16])
                                 (ulonglong)CONCAT31((int3)((uint)uVar15 >> 8),~(byte)uVar15);
                      if ((~(byte)uVar15 & 7) == 0) {
                        auVar139._0_4_ = (uint)fStack_1d8 & uVar13;
                        auVar139._4_4_ = (uint)fStack_1d4 & uVar217;
                        auVar139._8_4_ = (uint)fVar174 & uVar218;
                        auVar139._12_4_ = (uint)fVar88 & uVar14;
                        auVar64 = vcmpps_avx(auVar139,auVar114,0x11);
LAB_1441848ec:
                        uVar15 = vmovmskps_avx(auVar64);
                        pauVar20 = (undefined1 (*) [16])
                                   (ulonglong)CONCAT31((int3)((uint)uVar15 >> 8),~(byte)uVar15);
                        if ((~(byte)uVar15 & 7) == 0) {
                          *(undefined4 *)(param_1 + 4) = auStack_1f8._0_4_;
                          *(undefined4 *)((longlong)param_1 + 0x24) = auStack_1f8._4_4_;
                          *(float *)(param_1 + 5) = fStack_1f0;
                          *(float *)((longlong)param_1 + 0x2c) = fStack_1ec;
                          auVar64 = vblendps_avx(auVar85,*(undefined1 (*) [16])(param_1 + 6),8);
                          *(undefined1 (*) [16])(param_1 + 6) = auVar64;
                          auVar64 = vblendps_avx(auVar57,*(undefined1 (*) [16])(param_1 + 8),8);
                          *(undefined1 (*) [16])(param_1 + 8) = auVar64;
                        }
                      }
                    }
                  }
                }
              }
              else if (param_1[0xaa] != 0) {
                _auStack_1f8 = *pauVar20;
                lStack_1e8 = param_1[6];
                lStack_1e0 = param_1[7];
                lStack_1d0 = param_1[9];
                fStack_1d8 = (float)param_1[8];
                fStack_1d4 = (float)((ulonglong)param_1[8] >> 0x20);
                auVar64 = *(undefined1 (*) [16])(param_1 + 10);
                auVar71 = vpunpckhwd_avx(auVar64,auVar64);
                auVar71 = vpsrad_avx(auVar71,0x10);
                auVar71 = vcvtdq2ps_avx(auVar71);
                auVar71 = vshufpd_avx(auVar71,auVar71,3);
                fStack_1c8 = auVar71._0_4_ * _DAT_146159c90 + auVar64._0_4_;
                fStack_1c4 = auVar71._4_4_ * _UNK_146159c94 + auVar64._4_4_;
                fStack_1c0 = auVar71._8_4_ * _UNK_146159c98 + auVar64._8_4_;
                fStack_1bc = auVar71._12_4_ * _UNK_146159c9c + auVar64._12_4_;
                auVar56._0_4_ = fStack_258 * fStack_258;
                auVar56._4_4_ = fStack_254 * fStack_254;
                auVar56._8_4_ = fStack_250 * fStack_250;
                auVar56._12_4_ = fStack_24c * fStack_24c;
                auVar64 = vblendps_avx(auVar56,ZEXT816(0),8);
                auVar64 = vhaddps_avx(auVar64,auVar64);
                auVar64 = vhaddps_avx(auVar64,auVar64);
                auVar209 = ZEXT1664(auVar209._0_16_);
                auVar170 = ZEXT1664(auVar170._0_16_);
                auVar216 = ZEXT1664(auVar216._0_16_);
                auVar171 = ZEXT1664(ZEXT816(0));
                auVar58 = ZEXT1664(auVar58._0_16_);
                pauVar20 = (undefined1 (*) [16])
                           FUN_145e8a0c0(param_1[0xaa],auStack_1f8,_DAT_14615a034 <= auVar64._0_4_);
                auVar85._8_8_ = lStack_1e0;
                auVar85._0_8_ = lStack_1e8;
                auVar57._4_4_ = fStack_1d4;
                auVar57._0_4_ = fStack_1d8;
                auVar57._8_8_ = lStack_1d0;
                auVar115._0_4_ = fStack_1d8 * fStack_1d8;
                auVar115._4_4_ = fStack_1d4 * fStack_1d4;
                fVar174 = (float)lStack_1d0;
                auVar115._8_4_ = fVar174 * fVar174;
                fVar88 = (float)((ulonglong)lStack_1d0 >> 0x20);
                auVar115._12_4_ = fVar88 * fVar88;
                fVar32 = (float)lStack_1e8;
                auVar155._0_4_ = fVar32 * fVar32;
                fVar161 = (float)((ulonglong)lStack_1e8 >> 0x20);
                auVar155._4_4_ = fVar161 * fVar161;
                fVar176 = (float)lStack_1e0;
                auVar155._8_4_ = fVar176 * fVar176;
                fVar173 = (float)((ulonglong)lStack_1e0 >> 0x20);
                auVar155._12_4_ = fVar173 * fVar173;
                auVar163 = auVar171._0_16_;
                auVar64 = vblendps_avx(auVar115,auVar163,8);
                auVar71 = vblendps_avx(auVar155,auVar163,8);
                auVar71 = vhaddps_avx(auVar71,auVar71);
                auVar64 = vhaddps_avx(auVar64,auVar64);
                auVar125 = vhaddps_avx(auVar64,auVar64);
                auVar71 = vhaddps_avx(auVar71,auVar71);
                fVar158 = auVar216._0_4_;
                fVar160 = auVar216._4_4_;
                fVar162 = auVar216._8_4_;
                fVar172 = auVar216._12_4_;
                uVar13 = auVar209._0_4_;
                auVar116._0_4_ = (uint)(fVar158 + auVar125._0_4_) & uVar13;
                uVar217 = auVar209._4_4_;
                auVar116._4_4_ = (uint)(fVar160 + auVar125._4_4_) & uVar217;
                uVar218 = auVar209._8_4_;
                auVar116._8_4_ = (uint)(fVar162 + auVar125._8_4_) & uVar218;
                uVar14 = auVar209._12_4_;
                auVar116._12_4_ = (uint)(fVar172 + auVar125._12_4_) & uVar14;
                auVar205._0_4_ = (uint)(fVar158 + auVar71._0_4_) & uVar13;
                auVar205._4_4_ = (uint)(fVar160 + auVar71._4_4_) & uVar217;
                auVar205._8_4_ = (uint)(fVar162 + auVar71._8_4_) & uVar218;
                auVar205._12_4_ = (uint)(fVar172 + auVar71._12_4_) & uVar14;
                auVar178 = vmaxps_avx(auVar205,auVar116);
                auVar206._0_4_ = (float)auStack_1f8._0_4_ * (float)auStack_1f8._0_4_;
                auVar206._4_4_ = (float)auStack_1f8._4_4_ * (float)auStack_1f8._4_4_;
                auVar206._8_4_ = fStack_1f0 * fStack_1f0;
                auVar206._12_4_ = fStack_1ec * fStack_1ec;
                auVar64 = vblendps_avx(auVar206,auVar163,8);
                auVar64 = vhaddps_avx(auVar64,auVar64);
                auVar64 = vhaddps_avx(auVar64,auVar64);
                auVar191._0_4_ = (uint)(auVar64._0_4_ + fVar158) & uVar13;
                auVar191._4_4_ = (uint)(auVar64._4_4_ + fVar160) & uVar217;
                auVar191._8_4_ = (uint)(auVar64._8_4_ + fVar162) & uVar218;
                auVar191._12_4_ = (uint)(auVar64._12_4_ + fVar172) & uVar14;
                auVar178 = vmaxps_avx(auVar191,auVar178);
                auVar36 = vrsqrtps_avx(auVar64);
                auVar178 = vcmpps_avx(auVar178,auVar170._0_16_,2);
                fVar158 = auVar36._0_4_;
                fVar160 = auVar36._4_4_;
                fVar162 = auVar36._8_4_;
                fVar172 = auVar36._12_4_;
                fVar146 = auVar58._0_4_;
                fVar147 = auVar58._4_4_;
                fVar186 = auVar58._8_4_;
                fVar192 = auVar58._12_4_;
                fVar188 = ((fVar146 * fVar158 * fVar158 * auVar64._0_4_ - fVar146) * fVar158 +
                          fVar158) * (float)auStack_1f8._0_4_;
                fVar193 = ((fVar147 * fVar160 * fVar160 * auVar64._4_4_ - fVar147) * fVar160 +
                          fVar160) * (float)auStack_1f8._4_4_;
                fVar120 = ((fVar186 * fVar162 * fVar162 * auVar64._8_4_ - fVar186) * fVar162 +
                          fVar162) * fStack_1f0;
                fVar145 = ((fVar192 * fVar172 * fVar172 * auVar64._12_4_ - fVar192) * fVar172 +
                          fVar172) * fStack_1ec;
                auVar64 = vrsqrtps_avx(auVar71);
                fVar158 = auVar64._0_4_;
                fVar162 = auVar64._4_4_;
                fVar200 = auVar64._8_4_;
                fVar175 = auVar64._12_4_;
                auVar64 = vrsqrtps_avx(auVar125);
                fVar160 = auVar64._0_4_;
                fVar172 = auVar64._4_4_;
                fVar87 = auVar64._8_4_;
                fVar177 = auVar64._12_4_;
                fVar119 = ((fVar146 * fVar158 * fVar158 * auVar71._0_4_ - fVar146) * fVar158 +
                          fVar158) * fVar32;
                fVar159 = ((fVar147 * fVar162 * fVar162 * auVar71._4_4_ - fVar147) * fVar162 +
                          fVar162) * fVar161;
                fVar200 = ((fVar186 * fVar200 * fVar200 * auVar71._8_4_ - fVar186) * fVar200 +
                          fVar200) * fVar176;
                fVar175 = ((fVar192 * fVar175 * fVar175 * auVar71._12_4_ - fVar192) * fVar175 +
                          fVar175) * fVar173;
                fVar158 = ((fVar146 * fVar160 * fVar160 * auVar125._0_4_ - fVar146) * fVar160 +
                          fVar160) * fStack_1d8;
                fVar160 = ((fVar147 * fVar172 * fVar172 * auVar125._4_4_ - fVar147) * fVar172 +
                          fVar172) * fStack_1d4;
                fVar162 = ((fVar186 * fVar87 * fVar87 * auVar125._8_4_ - fVar186) * fVar87 + fVar87)
                          * fVar174;
                fVar172 = ((fVar192 * fVar177 * fVar177 * auVar125._12_4_ - fVar192) * fVar177 +
                          fVar177) * fVar88;
                auVar207._0_4_ = fVar158 * fVar119;
                auVar207._4_4_ = fVar160 * fVar159;
                auVar207._8_4_ = fVar162 * fVar200;
                auVar207._12_4_ = fVar172 * fVar175;
                auVar140._0_4_ = fVar188 * fVar158;
                auVar140._4_4_ = fVar193 * fVar160;
                auVar140._8_4_ = fVar120 * fVar162;
                auVar140._12_4_ = fVar145 * fVar172;
                auVar156._0_4_ = fVar188 * fVar119;
                auVar156._4_4_ = fVar193 * fVar159;
                auVar156._8_4_ = fVar120 * fVar200;
                auVar156._12_4_ = fVar145 * fVar175;
                auVar64 = vblendps_avx(auVar207,auVar163,8);
                auVar71 = vblendps_avx(auVar140,auVar163,8);
                auVar125 = vblendps_avx(auVar156,auVar163,8);
                auVar64 = vhaddps_avx(auVar64,auVar64);
                auVar71 = vhaddps_avx(auVar71,auVar71);
                auVar125 = vhaddps_avx(auVar125,auVar125);
                auVar64 = vhaddps_avx(auVar64,auVar64);
                auVar71 = vhaddps_avx(auVar71,auVar71);
                auVar125 = vhaddps_avx(auVar125,auVar125);
                auVar208._0_4_ = auVar64._0_4_ & uVar13;
                auVar208._4_4_ = auVar64._4_4_ & uVar217;
                auVar208._8_4_ = auVar64._8_4_ & uVar218;
                auVar208._12_4_ = auVar64._12_4_ & uVar14;
                auVar141._0_4_ = auVar71._0_4_ & uVar13;
                auVar141._4_4_ = auVar71._4_4_ & uVar217;
                auVar141._8_4_ = auVar71._8_4_ & uVar218;
                auVar141._12_4_ = auVar71._12_4_ & uVar14;
                auVar157._0_4_ = auVar125._0_4_ & uVar13;
                auVar157._4_4_ = auVar125._4_4_ & uVar217;
                auVar157._8_4_ = auVar125._8_4_ & uVar218;
                auVar157._12_4_ = auVar125._12_4_ & uVar14;
                auVar64 = vmaxps_avx(auVar141,auVar208);
                auVar64 = vmaxps_avx(auVar157,auVar64);
                auVar64 = vcmpps_avx(auVar64,auVar170._0_16_,2);
                auVar117._0_4_ = auVar64._0_4_ & auVar178._0_4_;
                auVar117._4_4_ = auVar64._4_4_ & auVar178._4_4_;
                auVar117._8_4_ = auVar64._8_4_ & auVar178._8_4_;
                auVar117._12_4_ = auVar64._12_4_ & auVar178._12_4_;
                auVar64 = vpcmpeqd_avx(auVar64,auVar64);
                if ((auVar64 & ~auVar117) == (undefined1  [16])0x0) {
                  auVar118._4_4_ = _DAT_145fc6f70;
                  auVar118._0_4_ = _DAT_145fc6f70;
                  auVar118._8_4_ = _DAT_145fc6f70;
                  auVar118._12_4_ = _DAT_145fc6f70;
                  auVar142._0_4_ = auStack_1f8._0_4_ & uVar13;
                  auVar142._4_4_ = auStack_1f8._4_4_ & uVar217;
                  auVar142._8_4_ = (uint)fStack_1f0 & uVar218;
                  auVar142._12_4_ = (uint)fStack_1ec & uVar14;
                  auVar64 = vcmpps_avx(auVar142,auVar118,0x11);
                  uVar15 = vmovmskps_avx(auVar64);
                  pauVar20 = (undefined1 (*) [16])
                             (ulonglong)CONCAT31((int3)((uint)uVar15 >> 8),~(byte)uVar15);
                  if ((~(byte)uVar15 & 7) == 0) {
                    auVar143._0_4_ = (uint)fVar32 & uVar13;
                    auVar143._4_4_ = (uint)fVar161 & uVar217;
                    auVar143._8_4_ = (uint)fVar176 & uVar218;
                    auVar143._12_4_ = (uint)fVar173 & uVar14;
                    auVar64 = vcmpps_avx(auVar143,auVar118,0x11);
                    uVar15 = vmovmskps_avx(auVar64);
                    pauVar20 = (undefined1 (*) [16])
                               (ulonglong)CONCAT31((int3)((uint)uVar15 >> 8),~(byte)uVar15);
                    if ((~(byte)uVar15 & 7) == 0) {
                      auVar144._0_4_ = (uint)fStack_1d8 & uVar13;
                      auVar144._4_4_ = (uint)fStack_1d4 & uVar217;
                      auVar144._8_4_ = (uint)fVar174 & uVar218;
                      auVar144._12_4_ = (uint)fVar88 & uVar14;
                      auVar64 = vcmpps_avx(auVar144,auVar118,0x11);
                      goto LAB_1441848ec;
                    }
                  }
                }
              }
            }
            *(byte *)((longlong)param_1 + 0x579) = *(byte *)((longlong)param_1 + 0x579) & 0xfb;
            uVar29 = CONCAT71((int7)((ulonglong)pauVar20 >> 8),(char)param_1[0xaf]);
            goto LAB_144184550;
          }
          goto LAB_144184547;
        }
        *(byte *)(param_1 + 0xaf) = *(byte *)(param_1 + 0xaf) & 0xfe;
        cVar8 = func_0x000141cb4230(*(undefined4 *)((longlong)param_1 + 0x1c));
        if (cVar8 == '\0') {
          cVar8 = func_0x000140005970((char)param_1[0x58]);
          if (cVar8 != '\0') goto LAB_144183724;
        }
      }
    }
  }
LAB_14418454e:
  uVar29 = 0;
LAB_144184550:
  return uVar29 & 0xffffffffffffff01;
}

