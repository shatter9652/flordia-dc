// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140040ec0  size: 20562 bytes
// Name:    FUN_140040ec0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144d9f670, FUN_1425a8640, FUN_144e59e00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140040ec0(int *param_1,longlong param_2,longlong param_3)

{
  float *pfVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  undefined2 uVar6;
  float *pfVar7;
  byte bVar8;
  char cVar9;
  int iVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined1 (*pauVar13) [16];
  undefined8 uVar14;
  longlong lVar15;
  uint *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint *puVar19;
  uint *puVar20;
  uint uVar21;
  uint uVar22;
  ulonglong uVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined8 uVar30;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [64];
  undefined1 auVar44 [64];
  undefined1 auVar45 [64];
  undefined1 auVar46 [64];
  undefined1 auVar47 [64];
  undefined1 auVar48 [64];
  undefined1 auVar49 [64];
  undefined1 auVar50 [64];
  undefined1 auVar51 [64];
  undefined1 auVar52 [64];
  undefined1 auVar53 [64];
  undefined1 extraout_var_10 [56];
  undefined1 extraout_var_11 [56];
  undefined1 extraout_var_12 [56];
  undefined1 extraout_var_13 [56];
  undefined1 auVar54 [64];
  undefined1 auVar55 [64];
  undefined1 auVar56 [64];
  undefined1 auVar57 [64];
  undefined1 auVar58 [64];
  undefined1 auVar59 [64];
  undefined1 extraout_var_20 [56];
  undefined1 auVar60 [64];
  undefined1 auVar61 [64];
  undefined1 auVar62 [64];
  undefined1 auVar63 [64];
  undefined1 auVar64 [64];
  undefined1 auVar65 [64];
  undefined1 auVar66 [64];
  undefined1 auVar67 [64];
  undefined1 auVar68 [64];
  undefined1 auVar69 [64];
  undefined1 auVar31 [16];
  undefined1 auVar70 [64];
  undefined1 auVar71 [64];
  undefined1 auVar72 [64];
  undefined1 auVar73 [64];
  undefined1 auVar74 [64];
  undefined1 auVar75 [64];
  undefined1 auVar76 [64];
  undefined1 auVar77 [64];
  undefined1 auVar78 [64];
  undefined1 auVar79 [64];
  undefined1 auVar80 [64];
  undefined1 auVar81 [64];
  undefined1 auVar82 [64];
  undefined1 auVar83 [64];
  undefined1 auVar84 [64];
  undefined1 auVar85 [64];
  undefined1 auVar86 [64];
  undefined1 auVar87 [64];
  undefined1 auVar88 [64];
  undefined1 auVar89 [64];
  undefined1 auVar90 [64];
  undefined1 auVar91 [64];
  undefined1 auVar92 [64];
  undefined1 auVar93 [64];
  undefined1 auVar94 [64];
  undefined1 auVar95 [64];
  undefined1 auVar96 [64];
  undefined1 auVar97 [64];
  undefined1 auVar98 [64];
  undefined1 auVar99 [64];
  undefined1 auVar100 [64];
  undefined1 auVar101 [64];
  undefined1 auVar102 [64];
  undefined1 auVar103 [64];
  undefined1 auVar104 [64];
  undefined1 auVar105 [64];
  undefined1 auVar106 [64];
  undefined1 auVar107 [64];
  undefined1 auVar108 [64];
  undefined1 auVar109 [64];
  undefined1 auVar110 [64];
  undefined1 auVar111 [64];
  undefined1 auVar112 [64];
  undefined1 auVar113 [64];
  undefined1 auVar114 [64];
  undefined1 auVar115 [64];
  undefined1 auVar116 [64];
  undefined1 auVar117 [64];
  undefined1 auVar118 [64];
  undefined1 auVar119 [64];
  undefined1 auVar120 [64];
  undefined1 auVar121 [64];
  undefined1 auVar122 [64];
  undefined1 auVar123 [64];
  undefined1 auVar124 [64];
  undefined1 auVar125 [64];
  undefined1 auVar126 [64];
  undefined1 auVar127 [64];
  undefined1 auVar128 [64];
  undefined1 auVar129 [64];
  undefined1 auVar130 [64];
  undefined1 auVar131 [64];
  undefined1 auVar132 [64];
  float fVar142;
  float fVar143;
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar144 [16];
  float fVar149;
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 in_ZMM6 [64];
  undefined1 auVar153 [64];
  undefined1 in_ZMM7 [64];
  undefined1 auVar154 [64];
  undefined1 in_ZMM8 [64];
  undefined1 auVar155 [64];
  undefined1 in_ZMM9 [64];
  undefined1 auVar156 [64];
  undefined1 in_ZMM10 [64];
  undefined1 auVar157 [64];
  float *in_stack_fffffffffffffc48;
  float *in_stack_fffffffffffffc50;
  float *in_stack_fffffffffffffc58;
  undefined4 uVar158;
  float *in_stack_fffffffffffffc60;
  undefined4 uVar159;
  ulonglong uStack_370;
  float afStack_368 [48];
  undefined1 auStack_2a8 [32];
  undefined1 auStack_288 [32];
  undefined1 auStack_268 [32];
  undefined1 auStack_248 [32];
  longlong lStack_228;
  longlong lStack_220;
  ulonglong uStack_218;
  ulonglong uStack_210;
  undefined8 uStack_208;
  float fStack_200;
  float afStack_1fc [13];
  undefined4 uStack_1c8;
  undefined4 uStack_188;
  int aiStack_17c [16];
  int iStack_13c;
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 extraout_var_01 [56];
  undefined1 extraout_var_02 [56];
  undefined1 extraout_var_03 [56];
  undefined1 extraout_var_04 [56];
  undefined1 extraout_var_05 [56];
  undefined1 extraout_var_06 [56];
  undefined1 extraout_var_07 [56];
  undefined1 extraout_var_08 [56];
  undefined1 extraout_var_09 [56];
  undefined1 extraout_var_14 [56];
  undefined1 extraout_var_15 [56];
  undefined1 extraout_var_16 [56];
  undefined1 extraout_var_17 [56];
  undefined1 extraout_var_18 [56];
  undefined1 extraout_var_19 [56];
  undefined1 extraout_var_21 [56];
  undefined1 extraout_var_22 [56];
  undefined1 extraout_var_23 [56];
  undefined1 extraout_var_24 [56];
  undefined1 extraout_var_25 [56];
  undefined1 extraout_var_26 [56];
  undefined1 extraout_var_27 [56];
  undefined1 extraout_var_28 [56];
  undefined1 extraout_var_29 [56];
  undefined1 extraout_var_30 [56];
  undefined1 extraout_var_31 [56];
  undefined1 extraout_var_32 [56];
  undefined1 extraout_var_33 [56];
  undefined1 extraout_var_34 [56];
  undefined1 extraout_var_35 [56];
  undefined1 extraout_var_36 [56];
  undefined1 extraout_var_37 [56];
  undefined1 extraout_var_38 [56];
  undefined1 extraout_var_39 [56];
  undefined1 extraout_var_40 [56];
  undefined1 extraout_var_41 [56];
  undefined1 extraout_var_42 [56];
  undefined1 extraout_var_43 [56];
  undefined1 extraout_var_44 [56];
  undefined1 extraout_var_45 [56];
  undefined1 extraout_var_46 [56];
  undefined1 extraout_var_47 [56];
  undefined1 extraout_var_48 [56];
  undefined1 extraout_var_49 [56];
  undefined1 extraout_var_50 [56];
  undefined1 extraout_var_51 [56];
  undefined1 extraout_var_52 [56];
  undefined1 extraout_var_53 [56];
  undefined1 extraout_var_54 [56];
  undefined1 extraout_var_55 [56];
  undefined1 extraout_var_56 [56];
  undefined1 extraout_var_57 [56];
  undefined1 extraout_var_58 [56];
  undefined1 extraout_var_59 [56];
  undefined1 extraout_var_60 [56];
  undefined1 extraout_var_61 [56];
  undefined1 extraout_var_62 [56];
  undefined1 extraout_var_63 [56];
  undefined1 extraout_var_64 [56];
  undefined1 extraout_var_65 [56];
  undefined1 extraout_var_66 [56];
  undefined1 extraout_var_67 [56];
  undefined1 extraout_var_68 [56];
  undefined1 extraout_var_69 [56];
  undefined1 extraout_var_70 [56];
  undefined1 extraout_var_71 [56];
  undefined1 extraout_var_72 [56];
  undefined1 extraout_var_73 [56];
  undefined1 extraout_var_74 [56];
  undefined1 extraout_var_75 [56];
  undefined1 extraout_var_76 [56];
  undefined1 extraout_var_77 [56];
  undefined1 extraout_var_78 [56];
  undefined1 extraout_var_79 [56];
  undefined1 extraout_var_80 [56];
  undefined1 extraout_var_81 [56];
  undefined1 extraout_var_82 [56];
  undefined1 extraout_var_83 [56];
  undefined1 extraout_var_84 [56];
  undefined1 extraout_var_85 [56];
  undefined1 extraout_var_86 [56];
  undefined1 extraout_var_87 [56];
  undefined1 extraout_var_88 [56];
  undefined1 extraout_var_89 [56];
  undefined1 extraout_var_90 [56];
  undefined1 extraout_var_91 [56];
  undefined1 extraout_var_92 [56];
  undefined1 extraout_var_93 [56];
  
  auStack_78 = in_ZMM10._0_16_;
  auStack_88 = in_ZMM9._0_16_;
  auStack_98 = in_ZMM8._0_16_;
  auStack_a8 = in_ZMM7._0_16_;
  auStack_b8 = in_ZMM6._0_16_;
  auVar31._0_12_ = ZEXT812(0);
  auVar31._12_4_ = 0;
  iStack_13c = 0;
  auStack_268 = ZEXT1632(auVar31);
  auStack_2a8 = ZEXT1632(auVar31);
  bVar8 = *(byte *)((longlong)param_1 + 0x27d);
  auStack_288 = auStack_2a8;
  auStack_248 = auStack_268;
  lStack_228 = param_2;
  if (bVar8 != 0) {
    uVar17 = 0;
    do {
      sVar5 = *(short *)(param_3 + uVar17 * 2);
      if (sVar5 != -1) {
        FUN_144d9f670(*(undefined8 *)(_DAT_14a923120 + 0x28),sVar5);
        uVar11 = func_0x000144d9f6a0(*(undefined8 *)(_DAT_14a923120 + 0x28));
        *(undefined8 *)(auStack_2a8 + (ulonglong)*(byte *)((longlong)param_1 + uVar17 + 0x10) * 8) =
             uVar11;
        bVar8 = *(byte *)((longlong)param_1 + 0x27d);
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 < bVar8);
  }
  lVar12 = func_0x000144ddb100(4);
  if (*(int *)(lVar12 + 0xcc) != 0) {
    uVar11 = func_0x000144ddb100(4);
    cVar9 = FUN_1425a8640(uVar11);
    if (cVar9 != '\0') {
      *(undefined1 *)((longlong)param_1 + 0x27e) = 1;
    }
  }
  lVar12 = _DAT_14a923120;
  if ((*(char *)((longlong)param_1 + 0x27e) != '\0') ||
     ((*(char *)((longlong)param_1 + 0x27f) == '\x01' &&
      ((*(char *)((longlong)param_1 + 0x281) != '\0' || ((char)param_1[0xa0] != '\0')))))) {
    return;
  }
  bVar8 = *(byte *)((longlong)param_1 + 0x279);
  if (bVar8 != 0) {
    uVar17 = 0;
    do {
      if (*(longlong *)(auStack_2a8 + uVar17 * 8) == 0) {
        iVar10 = FUN_144e59e00(lVar12);
        lVar18 = (longlong)iStack_13c;
        if (iVar10 == 0xffff) {
          if (iStack_13c == 0) {
            return;
          }
          lVar12 = 0;
          do {
            func_0x000144e59e70(_DAT_14a923120,*(undefined4 *)((longlong)aiStack_17c + lVar12));
            lVar12 = lVar12 + 4;
          } while (lVar18 * 4 != lVar12);
          return;
        }
        iStack_13c = iStack_13c + 1;
        aiStack_17c[lVar18] = iVar10;
        uVar11 = func_0x000144d9f6a0(*(undefined8 *)(lVar12 + 0x28));
        *(undefined8 *)(auStack_2a8 + uVar17 * 8) = uVar11;
        bVar8 = *(byte *)((longlong)param_1 + 0x279);
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 < bVar8);
  }
  lVar12 = _DAT_14a923120;
  lStack_220 = param_3;
  puVar19 = *(uint **)(param_1 + 2);
  iVar10 = param_1[0x97];
  if (0 < (longlong)iVar10) {
    lVar18 = 0;
    do {
      uVar11 = func_0x000144d9f6a0(*(undefined8 *)(lVar12 + 0x28));
      *(undefined8 *)(param_1 + lVar18 * 2 + 0x92) = uVar11;
      lVar18 = lVar18 + 1;
    } while (iVar10 != lVar18);
  }
LAB_140045d9a:
  puVar20 = puVar19;
  lVar18 = lStack_220;
  lVar12 = _DAT_14a923120;
  fVar143 = _DAT_146159bd4;
  fVar142 = _DAT_145fc6f48;
  fVar25 = _DAT_145fc6edc;
  uVar158 = (undefined4)((ulonglong)in_stack_fffffffffffffc58 >> 0x20);
  uVar159 = (undefined4)((ulonglong)in_stack_fffffffffffffc60 >> 0x20);
  uVar27 = (undefined4)((ulonglong)in_stack_fffffffffffffc50 >> 0x20);
  uVar24 = (undefined4)((ulonglong)in_stack_fffffffffffffc48 >> 0x20);
  uVar30 = 0;
  uVar22 = *puVar20;
  uVar11 = 2;
  uVar21 = uVar22 >> 8 & 0xff;
  puVar19 = (uint *)((longlong)puVar20 + 2);
  switch(uVar21) {
  case 0:
    bVar8 = *(byte *)((longlong)puVar20 + 2);
    puVar20 = puVar20 + 1;
    if (bVar8 < *(byte *)((longlong)param_1 + 0x279)) {
      uVar22 = uVar22 & 0xf;
      while (uVar22 = uVar22 - 1, uVar22 != 0) {
        bVar4 = (byte)*puVar20;
        if ((((bVar4 != bVar8) && (bVar4 < *(byte *)((longlong)param_1 + 0x279))) &&
            (*(longlong *)(auStack_2a8 + (ulonglong)bVar4 * 8) != 0)) &&
           (*(longlong *)(auStack_2a8 + (ulonglong)bVar8 * 8) != 0)) {
          func_0x000145f40560(*(longlong *)(auStack_2a8 + (ulonglong)bVar4 * 8),
                              *(longlong *)(auStack_2a8 + (ulonglong)bVar8 * 8),0x400);
        }
        puVar20 = (uint *)((longlong)puVar20 + 2);
      }
    }
    puVar19 = (uint *)((longlong)puVar20 + 2);
    goto LAB_140045d9a;
  case 1:
    puVar19 = puVar20 + 1;
    iVar10 = (uVar22 & 0xf) - 1;
    if (iVar10 != 0) {
      fVar25 = afStack_368[*(byte *)((longlong)puVar20 + 2)];
      do {
        uVar22 = *puVar19;
        puVar19 = (uint *)((longlong)puVar19 + 2);
        iVar10 = iVar10 + -1;
        afStack_368[(byte)uVar22] = fVar25;
      } while (iVar10 != 0);
    }
    puVar19 = (uint *)((longlong)puVar19 + 2);
    goto LAB_140045d9a;
  case 2:
    pfVar7 = *(float **)(auStack_2a8 + (ulonglong)*(byte *)((longlong)puVar20 + 2) * 8);
    puVar19 = puVar20 + 1;
    if (pfVar7 != (float *)0x0) {
      fVar25 = pfVar7[1] * _DAT_146159bd4 + _DAT_145fc6f48;
      fVar26 = pfVar7[2] * _DAT_146159bd4 + _DAT_145fc6f48;
      fVar149 = pfVar7[3] * _DAT_146159bd4 + _DAT_145fc6f48;
      *pfVar7 = *pfVar7 * _DAT_146159bd4 + _DAT_145fc6f48;
      pfVar7[1] = fVar25;
      pfVar7[2] = fVar26;
      pfVar7[3] = fVar149;
      pfVar7[4] = pfVar7[4] * fVar143 + fVar142;
      pfVar7[5] = pfVar7[5] * fVar143 + fVar142;
      pfVar7[6] = pfVar7[6] * fVar143 + fVar142;
      pfVar7[7] = pfVar7[7] * fVar143 + fVar142;
      pfVar7[8] = pfVar7[8] * fVar143 + fVar142;
      pfVar7[9] = pfVar7[9] * fVar143 + fVar142;
      pfVar7[10] = pfVar7[10] * fVar143 + fVar142;
      pfVar7[0xb] = pfVar7[0xb] * fVar143 + fVar142;
      pfVar7[0xc] = pfVar7[0xc] * fVar143 + fVar142;
      pfVar7[0xd] = pfVar7[0xd] * fVar143 + fVar142;
      pfVar7[0xe] = pfVar7[0xe] * fVar143 + fVar142;
      pfVar7[0xf] = pfVar7[0xf] * fVar143 + fVar142;
      pfVar7[0x10] = pfVar7[0x10] * fVar143 + fVar142;
      pfVar7[0x11] = pfVar7[0x11] * fVar143 + fVar142;
      pfVar7[0x12] = pfVar7[0x12] * fVar143 + fVar142;
      pfVar7[0x13] = pfVar7[0x13] * fVar143 + fVar142;
      pfVar7[0x14] = pfVar7[0x14] * fVar143 + fVar142;
      pfVar7[0x15] = pfVar7[0x15] * fVar143 + fVar142;
      pfVar7[0x16] = pfVar7[0x16] * fVar143 + fVar142;
      pfVar7[0x17] = pfVar7[0x17] * fVar143 + fVar142;
      pfVar7[0x18] = pfVar7[0x18] * fVar143 + fVar142;
      pfVar7[0x19] = pfVar7[0x19] * fVar143 + fVar142;
      pfVar7[0x1a] = pfVar7[0x1a] * fVar143 + fVar142;
      pfVar7[0x1b] = pfVar7[0x1b] * fVar143 + fVar142;
      pfVar7[0x1c] = pfVar7[0x1c] * fVar143 + fVar142;
      pfVar7[0x1d] = pfVar7[0x1d] * fVar143 + fVar142;
      pfVar7[0x1e] = pfVar7[0x1e] * fVar143 + fVar142;
      pfVar7[0x1f] = pfVar7[0x1f] * fVar143 + fVar142;
      pfVar7[0x20] = pfVar7[0x20] * fVar143 + fVar142;
      pfVar7[0x21] = pfVar7[0x21] * fVar143 + fVar142;
      pfVar7[0x22] = pfVar7[0x22] * fVar143 + fVar142;
      pfVar7[0x23] = pfVar7[0x23] * fVar143 + fVar142;
      pfVar7[0x24] = pfVar7[0x24] * fVar143 + fVar142;
      pfVar7[0x25] = pfVar7[0x25] * fVar143 + fVar142;
      pfVar7[0x26] = pfVar7[0x26] * fVar143 + fVar142;
      pfVar7[0x27] = pfVar7[0x27] * fVar143 + fVar142;
      pfVar7[0x28] = pfVar7[0x28] * fVar143 + fVar142;
      pfVar7[0x29] = pfVar7[0x29] * fVar143 + fVar142;
      pfVar7[0x2a] = pfVar7[0x2a] * fVar143 + fVar142;
      pfVar7[0x2b] = pfVar7[0x2b] * fVar143 + fVar142;
      pfVar7[0x2c] = pfVar7[0x2c] * fVar143 + fVar142;
      pfVar7[0x2d] = pfVar7[0x2d] * fVar143 + fVar142;
      pfVar7[0x2e] = pfVar7[0x2e] * fVar143 + fVar142;
      pfVar7[0x2f] = pfVar7[0x2f] * fVar143 + fVar142;
      pfVar7[0x30] = pfVar7[0x30] * fVar143 + fVar142;
      pfVar7[0x31] = pfVar7[0x31] * fVar143 + fVar142;
      pfVar7[0x32] = pfVar7[0x32] * fVar143 + fVar142;
      pfVar7[0x33] = pfVar7[0x33] * fVar143 + fVar142;
      pfVar7[0x34] = pfVar7[0x34] * fVar143 + fVar142;
      pfVar7[0x35] = pfVar7[0x35] * fVar143 + fVar142;
      pfVar7[0x36] = pfVar7[0x36] * fVar143 + fVar142;
      pfVar7[0x37] = pfVar7[0x37] * fVar143 + fVar142;
      pfVar7[0x38] = pfVar7[0x38] * fVar143 + fVar142;
      pfVar7[0x39] = pfVar7[0x39] * fVar143 + fVar142;
      pfVar7[0x3a] = pfVar7[0x3a] * fVar143 + fVar142;
      pfVar7[0x3b] = pfVar7[0x3b] * fVar143 + fVar142;
      pfVar7[0x3c] = pfVar7[0x3c] * fVar143 + fVar142;
      pfVar7[0x3d] = pfVar7[0x3d] * fVar143 + fVar142;
      pfVar7[0x3e] = pfVar7[0x3e] * fVar143 + fVar142;
      pfVar7[0x3f] = pfVar7[0x3f] * fVar143 + fVar142;
      pfVar7[0x40] = pfVar7[0x40] * fVar143 + fVar142;
      pfVar7[0x41] = pfVar7[0x41] * fVar143 + fVar142;
      pfVar7[0x42] = pfVar7[0x42] * fVar143 + fVar142;
      pfVar7[0x43] = pfVar7[0x43] * fVar143 + fVar142;
      pfVar7[0x44] = pfVar7[0x44] * fVar143 + fVar142;
      pfVar7[0x45] = pfVar7[0x45] * fVar143 + fVar142;
      pfVar7[0x46] = pfVar7[0x46] * fVar143 + fVar142;
      pfVar7[0x47] = pfVar7[0x47] * fVar143 + fVar142;
      pfVar7[0x48] = pfVar7[0x48] * fVar143 + fVar142;
      pfVar7[0x49] = pfVar7[0x49] * fVar143 + fVar142;
      pfVar7[0x4a] = pfVar7[0x4a] * fVar143 + fVar142;
      pfVar7[0x4b] = pfVar7[0x4b] * fVar143 + fVar142;
      pfVar7[0x4c] = pfVar7[0x4c] * fVar143 + fVar142;
      pfVar7[0x4d] = pfVar7[0x4d] * fVar143 + fVar142;
      pfVar7[0x4e] = pfVar7[0x4e] * fVar143 + fVar142;
      pfVar7[0x4f] = pfVar7[0x4f] * fVar143 + fVar142;
      pfVar7[0x50] = pfVar7[0x50] * fVar143 + fVar142;
      pfVar7[0x51] = pfVar7[0x51] * fVar143 + fVar142;
      pfVar7[0x52] = pfVar7[0x52] * fVar143 + fVar142;
      pfVar7[0x53] = pfVar7[0x53] * fVar143 + fVar142;
      pfVar7[0x54] = pfVar7[0x54] * fVar143 + fVar142;
      pfVar7[0x55] = pfVar7[0x55] * fVar143 + fVar142;
      pfVar7[0x56] = pfVar7[0x56] * fVar143 + fVar142;
      pfVar7[0x57] = pfVar7[0x57] * fVar143 + fVar142;
      pfVar7[0x58] = pfVar7[0x58] * fVar143 + fVar142;
      pfVar7[0x59] = pfVar7[0x59] * fVar143 + fVar142;
      pfVar7[0x5a] = pfVar7[0x5a] * fVar143 + fVar142;
      pfVar7[0x5b] = pfVar7[0x5b] * fVar143 + fVar142;
      pfVar7[0x5c] = pfVar7[0x5c] * fVar143 + fVar142;
      pfVar7[0x5d] = pfVar7[0x5d] * fVar143 + fVar142;
      pfVar7[0x5e] = pfVar7[0x5e] * fVar143 + fVar142;
      pfVar7[0x5f] = pfVar7[0x5f] * fVar143 + fVar142;
      pfVar7[0x60] = pfVar7[0x60] * fVar143 + fVar142;
      pfVar7[0x61] = pfVar7[0x61] * fVar143 + fVar142;
      pfVar7[0x62] = pfVar7[0x62] * fVar143 + fVar142;
      pfVar7[99] = pfVar7[99] * fVar143 + fVar142;
      pfVar7[100] = pfVar7[100] * fVar143 + fVar142;
      pfVar7[0x65] = pfVar7[0x65] * fVar143 + fVar142;
      pfVar7[0x66] = pfVar7[0x66] * fVar143 + fVar142;
      pfVar7[0x67] = pfVar7[0x67] * fVar143 + fVar142;
      pfVar7[0x68] = pfVar7[0x68] * fVar143 + fVar142;
      pfVar7[0x69] = pfVar7[0x69] * fVar143 + fVar142;
      pfVar7[0x6a] = pfVar7[0x6a] * fVar143 + fVar142;
      pfVar7[0x6b] = pfVar7[0x6b] * fVar143 + fVar142;
      pfVar7[0x6c] = pfVar7[0x6c] * fVar143 + fVar142;
      pfVar7[0x6d] = pfVar7[0x6d] * fVar143 + fVar142;
      pfVar7[0x6e] = pfVar7[0x6e] * fVar143 + fVar142;
      pfVar7[0x6f] = pfVar7[0x6f] * fVar143 + fVar142;
      pfVar7[0x70] = pfVar7[0x70] * fVar143 + fVar142;
      pfVar7[0x71] = pfVar7[0x71] * fVar143 + fVar142;
      pfVar7[0x72] = pfVar7[0x72] * fVar143 + fVar142;
      pfVar7[0x73] = pfVar7[0x73] * fVar143 + fVar142;
      pfVar7[0x74] = pfVar7[0x74] * fVar143 + fVar142;
      pfVar7[0x75] = pfVar7[0x75] * fVar143 + fVar142;
      pfVar7[0x76] = pfVar7[0x76] * fVar143 + fVar142;
      pfVar7[0x77] = pfVar7[0x77] * fVar143 + fVar142;
      pfVar7[0x78] = pfVar7[0x78] * fVar143 + fVar142;
      pfVar7[0x79] = pfVar7[0x79] * fVar143 + fVar142;
      pfVar7[0x7a] = pfVar7[0x7a] * fVar143 + fVar142;
      pfVar7[0x7b] = pfVar7[0x7b] * fVar143 + fVar142;
      pfVar7[0x7c] = pfVar7[0x7c] * fVar143 + fVar142;
      pfVar7[0x7d] = pfVar7[0x7d] * fVar143 + fVar142;
      pfVar7[0x7e] = pfVar7[0x7e] * fVar143 + fVar142;
      pfVar7[0x7f] = pfVar7[0x7f] * fVar143 + fVar142;
      pfVar7[0x80] = pfVar7[0x80] * fVar143 + fVar142;
      pfVar7[0x81] = pfVar7[0x81] * fVar143 + fVar142;
      pfVar7[0x82] = pfVar7[0x82] * fVar143 + fVar142;
      pfVar7[0x83] = pfVar7[0x83] * fVar143 + fVar142;
      pfVar7[0x84] = pfVar7[0x84] * fVar143 + fVar142;
      pfVar7[0x85] = pfVar7[0x85] * fVar143 + fVar142;
      pfVar7[0x86] = pfVar7[0x86] * fVar143 + fVar142;
      pfVar7[0x87] = pfVar7[0x87] * fVar143 + fVar142;
      pfVar7[0x88] = pfVar7[0x88] * fVar143 + fVar142;
      pfVar7[0x89] = pfVar7[0x89] * fVar143 + fVar142;
      pfVar7[0x8a] = pfVar7[0x8a] * fVar143 + fVar142;
      pfVar7[0x8b] = pfVar7[0x8b] * fVar143 + fVar142;
      pfVar7[0x8c] = pfVar7[0x8c] * fVar143 + fVar142;
      pfVar7[0x8d] = pfVar7[0x8d] * fVar143 + fVar142;
      pfVar7[0x8e] = pfVar7[0x8e] * fVar143 + fVar142;
      pfVar7[0x8f] = pfVar7[0x8f] * fVar143 + fVar142;
      pfVar7[0x90] = pfVar7[0x90] * fVar143 + fVar142;
      pfVar7[0x91] = pfVar7[0x91] * fVar143 + fVar142;
      pfVar7[0x92] = pfVar7[0x92] * fVar143 + fVar142;
      pfVar7[0x93] = pfVar7[0x93] * fVar143 + fVar142;
      pfVar7[0x94] = pfVar7[0x94] * fVar143 + fVar142;
      pfVar7[0x95] = pfVar7[0x95] * fVar143 + fVar142;
      pfVar7[0x96] = pfVar7[0x96] * fVar143 + fVar142;
      pfVar7[0x97] = pfVar7[0x97] * fVar143 + fVar142;
      pfVar7[0x98] = pfVar7[0x98] * fVar143 + fVar142;
      pfVar7[0x99] = pfVar7[0x99] * fVar143 + fVar142;
      pfVar7[0x9a] = pfVar7[0x9a] * fVar143 + fVar142;
      pfVar7[0x9b] = pfVar7[0x9b] * fVar143 + fVar142;
      pfVar7[0x9c] = pfVar7[0x9c] * fVar143 + fVar142;
      pfVar7[0x9d] = pfVar7[0x9d] * fVar143 + fVar142;
      pfVar7[0x9e] = pfVar7[0x9e] * fVar143 + fVar142;
      pfVar7[0x9f] = pfVar7[0x9f] * fVar143 + fVar142;
      pfVar7[0xa0] = pfVar7[0xa0] * fVar143 + fVar142;
      pfVar7[0xa1] = pfVar7[0xa1] * fVar143 + fVar142;
      pfVar7[0xa2] = pfVar7[0xa2] * fVar143 + fVar142;
      pfVar7[0xa3] = pfVar7[0xa3] * fVar143 + fVar142;
      pfVar7[0xa4] = pfVar7[0xa4] * fVar143 + fVar142;
      pfVar7[0xa5] = pfVar7[0xa5] * fVar143 + fVar142;
      pfVar7[0xa6] = pfVar7[0xa6] * fVar143 + fVar142;
      pfVar7[0xa7] = pfVar7[0xa7] * fVar143 + fVar142;
      pfVar7[0xa8] = pfVar7[0xa8] * fVar143 + fVar142;
      pfVar7[0xa9] = pfVar7[0xa9] * fVar143 + fVar142;
      pfVar7[0xaa] = pfVar7[0xaa] * fVar143 + fVar142;
      pfVar7[0xab] = pfVar7[0xab] * fVar143 + fVar142;
      pfVar7[0xac] = pfVar7[0xac] * fVar143 + fVar142;
      pfVar7[0xad] = pfVar7[0xad] * fVar143 + fVar142;
      pfVar7[0xae] = pfVar7[0xae] * fVar143 + fVar142;
      pfVar7[0xaf] = pfVar7[0xaf] * fVar143 + fVar142;
      pfVar7[0xb0] = pfVar7[0xb0] * fVar143 + fVar142;
      pfVar7[0xb1] = pfVar7[0xb1] * fVar143 + fVar142;
      pfVar7[0xb2] = pfVar7[0xb2] * fVar143 + fVar142;
      pfVar7[0xb3] = pfVar7[0xb3] * fVar143 + fVar142;
      pfVar7[0xb4] = pfVar7[0xb4] * fVar143 + fVar142;
      pfVar7[0xb5] = pfVar7[0xb5] * fVar143 + fVar142;
      pfVar7[0xb6] = pfVar7[0xb6] * fVar143 + fVar142;
      pfVar7[0xb7] = pfVar7[0xb7] * fVar143 + fVar142;
      pfVar7[0xb8] = pfVar7[0xb8] * fVar143 + fVar142;
      pfVar7[0xb9] = pfVar7[0xb9] * fVar143 + fVar142;
      pfVar7[0xba] = pfVar7[0xba] * fVar143 + fVar142;
      pfVar7[0xbb] = pfVar7[0xbb] * fVar143 + fVar142;
      pfVar7[0xbc] = pfVar7[0xbc] * fVar143 + fVar142;
      pfVar7[0xbd] = pfVar7[0xbd] * fVar143 + fVar142;
      pfVar7[0xbe] = pfVar7[0xbe] * fVar143 + fVar142;
      pfVar7[0xbf] = pfVar7[0xbf] * fVar143 + fVar142;
      pfVar7[0xc0] = pfVar7[0xc0] * fVar143 + fVar142;
      pfVar7[0xc1] = pfVar7[0xc1] * fVar143 + fVar142;
      pfVar7[0xc2] = pfVar7[0xc2] * fVar143 + fVar142;
      pfVar7[0xc3] = pfVar7[0xc3] * fVar143 + fVar142;
      pfVar7[0xc4] = pfVar7[0xc4] * fVar143 + fVar142;
      pfVar7[0xc5] = pfVar7[0xc5] * fVar143 + fVar142;
      pfVar7[0xc6] = pfVar7[0xc6] * fVar143 + fVar142;
      pfVar7[199] = pfVar7[199] * fVar143 + fVar142;
      pfVar7[200] = pfVar7[200] * fVar143 + fVar142;
      pfVar7[0xc9] = pfVar7[0xc9] * fVar143 + fVar142;
      pfVar7[0xca] = pfVar7[0xca] * fVar143 + fVar142;
      pfVar7[0xcb] = pfVar7[0xcb] * fVar143 + fVar142;
      pfVar7[0xcc] = pfVar7[0xcc] * fVar143 + fVar142;
      pfVar7[0xcd] = pfVar7[0xcd] * fVar143 + fVar142;
      pfVar7[0xce] = pfVar7[0xce] * fVar143 + fVar142;
      pfVar7[0xcf] = pfVar7[0xcf] * fVar143 + fVar142;
      pfVar7[0xd0] = pfVar7[0xd0] * fVar143 + fVar142;
      pfVar7[0xd1] = pfVar7[0xd1] * fVar143 + fVar142;
      pfVar7[0xd2] = pfVar7[0xd2] * fVar143 + fVar142;
      pfVar7[0xd3] = pfVar7[0xd3] * fVar143 + fVar142;
      pfVar7[0xd4] = pfVar7[0xd4] * fVar143 + fVar142;
      pfVar7[0xd5] = pfVar7[0xd5] * fVar143 + fVar142;
      pfVar7[0xd6] = pfVar7[0xd6] * fVar143 + fVar142;
      pfVar7[0xd7] = pfVar7[0xd7] * fVar143 + fVar142;
      pfVar7[0xd8] = pfVar7[0xd8] * fVar143 + fVar142;
      pfVar7[0xd9] = pfVar7[0xd9] * fVar143 + fVar142;
      pfVar7[0xda] = pfVar7[0xda] * fVar143 + fVar142;
      pfVar7[0xdb] = pfVar7[0xdb] * fVar143 + fVar142;
      pfVar7[0xdc] = pfVar7[0xdc] * fVar143 + fVar142;
      pfVar7[0xdd] = pfVar7[0xdd] * fVar143 + fVar142;
      pfVar7[0xde] = pfVar7[0xde] * fVar143 + fVar142;
      pfVar7[0xdf] = pfVar7[0xdf] * fVar143 + fVar142;
      pfVar7[0xe0] = pfVar7[0xe0] * fVar143 + fVar142;
      pfVar7[0xe1] = pfVar7[0xe1] * fVar143 + fVar142;
      pfVar7[0xe2] = pfVar7[0xe2] * fVar143 + fVar142;
      pfVar7[0xe3] = pfVar7[0xe3] * fVar143 + fVar142;
      pfVar7[0xe4] = pfVar7[0xe4] * fVar143 + fVar142;
      pfVar7[0xe5] = pfVar7[0xe5] * fVar143 + fVar142;
      pfVar7[0xe6] = pfVar7[0xe6] * fVar143 + fVar142;
      pfVar7[0xe7] = pfVar7[0xe7] * fVar143 + fVar142;
      pfVar7[0xe8] = pfVar7[0xe8] * fVar143 + fVar142;
      pfVar7[0xe9] = pfVar7[0xe9] * fVar143 + fVar142;
      pfVar7[0xea] = pfVar7[0xea] * fVar143 + fVar142;
      pfVar7[0xeb] = pfVar7[0xeb] * fVar143 + fVar142;
      pfVar7[0xec] = pfVar7[0xec] * fVar143 + fVar142;
      pfVar7[0xed] = pfVar7[0xed] * fVar143 + fVar142;
      pfVar7[0xee] = pfVar7[0xee] * fVar143 + fVar142;
      pfVar7[0xef] = pfVar7[0xef] * fVar143 + fVar142;
      pfVar7[0xf0] = pfVar7[0xf0] * fVar143 + fVar142;
      pfVar7[0xf1] = pfVar7[0xf1] * fVar143 + fVar142;
      pfVar7[0xf2] = pfVar7[0xf2] * fVar143 + fVar142;
      pfVar7[0xf3] = pfVar7[0xf3] * fVar143 + fVar142;
      pfVar7[0xf4] = pfVar7[0xf4] * fVar143 + fVar142;
      pfVar7[0xf5] = pfVar7[0xf5] * fVar143 + fVar142;
      pfVar7[0xf6] = pfVar7[0xf6] * fVar143 + fVar142;
      pfVar7[0xf7] = pfVar7[0xf7] * fVar143 + fVar142;
      auVar145._0_4_ = pfVar7[0xf8] * fVar143 + fVar142;
      auVar145._4_4_ = pfVar7[0xf9] * fVar143 + fVar142;
      auVar145._8_4_ = pfVar7[0xfa] * fVar143 + fVar142;
      auVar145._12_4_ = pfVar7[0xfb] * fVar143 + fVar142;
      *(undefined1 (*) [16])(pfVar7 + 0xf8) = auVar145;
      auVar137._0_4_ = fVar143 * pfVar7[0xfc] + fVar142;
      auVar137._4_4_ = fVar143 * pfVar7[0xfd] + fVar142;
      auVar137._8_4_ = fVar143 * pfVar7[0xfe] + fVar142;
      auVar137._12_4_ = fVar143 * pfVar7[0xff] + fVar142;
      *(undefined1 (*) [16])(pfVar7 + 0xfc) = auVar137;
    }
    goto LAB_140045d9a;
  case 3:
    bVar8 = *(byte *)((longlong)puVar20 + 2);
    fVar25 = (float)func_0x0001455d59d0(*(undefined8 *)(param_1 + 2),
                                        *(undefined2 *)((longlong)param_1 + 0x276),(short)puVar20[1]
                                        ,afStack_368);
    fVar25 = fVar25 * _DAT_146159bd4 + _DAT_145fc6f48;
    goto code_r0x0001400444bd;
  case 4:
    puVar19 = puVar20 + 1;
    pauVar13 = *(undefined1 (**) [16])
                (auStack_2a8 + (ulonglong)*(byte *)((longlong)puVar20 + 2) * 8);
    if (pauVar13 != (undefined1 (*) [16])0x0) {
      fVar142 = *(float *)(*pauVar13 + 4) * _DAT_145fc6edc + _DAT_145fc6edc;
      fVar143 = *(float *)(*pauVar13 + 8) * _DAT_145fc6edc + _DAT_145fc6edc;
      fVar26 = *(float *)(*pauVar13 + 0xc) * _DAT_145fc6edc + _DAT_145fc6edc;
      *(float *)*pauVar13 = *(float *)*pauVar13 * _DAT_145fc6edc + _DAT_145fc6edc;
      *(float *)(*pauVar13 + 4) = fVar142;
      *(float *)(*pauVar13 + 8) = fVar143;
      *(float *)(*pauVar13 + 0xc) = fVar26;
      fVar142 = *(float *)(pauVar13[1] + 4);
      fVar143 = *(float *)(pauVar13[1] + 8);
      fVar26 = *(float *)(pauVar13[1] + 0xc);
      *(float *)pauVar13[1] = *(float *)pauVar13[1] * fVar25 + fVar25;
      *(float *)(pauVar13[1] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[1] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[1] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[2] + 4);
      fVar143 = *(float *)(pauVar13[2] + 8);
      fVar26 = *(float *)(pauVar13[2] + 0xc);
      *(float *)pauVar13[2] = *(float *)pauVar13[2] * fVar25 + fVar25;
      *(float *)(pauVar13[2] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[2] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[2] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[3] + 4);
      fVar143 = *(float *)(pauVar13[3] + 8);
      fVar26 = *(float *)(pauVar13[3] + 0xc);
      *(float *)pauVar13[3] = *(float *)pauVar13[3] * fVar25 + fVar25;
      *(float *)(pauVar13[3] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[3] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[3] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[4] + 4);
      fVar143 = *(float *)(pauVar13[4] + 8);
      fVar26 = *(float *)(pauVar13[4] + 0xc);
      *(float *)pauVar13[4] = *(float *)pauVar13[4] * fVar25 + fVar25;
      *(float *)(pauVar13[4] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[4] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[4] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[5] + 4);
      fVar143 = *(float *)(pauVar13[5] + 8);
      fVar26 = *(float *)(pauVar13[5] + 0xc);
      *(float *)pauVar13[5] = *(float *)pauVar13[5] * fVar25 + fVar25;
      *(float *)(pauVar13[5] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[5] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[5] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[6] + 4);
      fVar143 = *(float *)(pauVar13[6] + 8);
      fVar26 = *(float *)(pauVar13[6] + 0xc);
      *(float *)pauVar13[6] = *(float *)pauVar13[6] * fVar25 + fVar25;
      *(float *)(pauVar13[6] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[6] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[6] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[7] + 4);
      fVar143 = *(float *)(pauVar13[7] + 8);
      fVar26 = *(float *)(pauVar13[7] + 0xc);
      *(float *)pauVar13[7] = *(float *)pauVar13[7] * fVar25 + fVar25;
      *(float *)(pauVar13[7] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[7] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[7] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[8] + 4);
      fVar143 = *(float *)(pauVar13[8] + 8);
      fVar26 = *(float *)(pauVar13[8] + 0xc);
      *(float *)pauVar13[8] = *(float *)pauVar13[8] * fVar25 + fVar25;
      *(float *)(pauVar13[8] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[8] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[8] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[9] + 4);
      fVar143 = *(float *)(pauVar13[9] + 8);
      fVar26 = *(float *)(pauVar13[9] + 0xc);
      *(float *)pauVar13[9] = *(float *)pauVar13[9] * fVar25 + fVar25;
      *(float *)(pauVar13[9] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[9] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[9] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[10] + 4);
      fVar143 = *(float *)(pauVar13[10] + 8);
      fVar26 = *(float *)(pauVar13[10] + 0xc);
      *(float *)pauVar13[10] = *(float *)pauVar13[10] * fVar25 + fVar25;
      *(float *)(pauVar13[10] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[10] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[10] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[0xb] + 4);
      fVar143 = *(float *)(pauVar13[0xb] + 8);
      fVar26 = *(float *)(pauVar13[0xb] + 0xc);
      *(float *)pauVar13[0xb] = *(float *)pauVar13[0xb] * fVar25 + fVar25;
      *(float *)(pauVar13[0xb] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[0xb] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[0xb] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[0xc] + 4);
      fVar143 = *(float *)(pauVar13[0xc] + 8);
      fVar26 = *(float *)(pauVar13[0xc] + 0xc);
      *(float *)pauVar13[0xc] = *(float *)pauVar13[0xc] * fVar25 + fVar25;
      *(float *)(pauVar13[0xc] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[0xc] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[0xc] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[0xd] + 4);
      fVar143 = *(float *)(pauVar13[0xd] + 8);
      fVar26 = *(float *)(pauVar13[0xd] + 0xc);
      *(float *)pauVar13[0xd] = *(float *)pauVar13[0xd] * fVar25 + fVar25;
      *(float *)(pauVar13[0xd] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[0xd] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[0xd] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[0xe] + 4);
      fVar143 = *(float *)(pauVar13[0xe] + 8);
      fVar26 = *(float *)(pauVar13[0xe] + 0xc);
      *(float *)pauVar13[0xe] = *(float *)pauVar13[0xe] * fVar25 + fVar25;
      *(float *)(pauVar13[0xe] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[0xe] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[0xe] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[0xf] + 4);
      fVar143 = *(float *)(pauVar13[0xf] + 8);
      fVar26 = *(float *)(pauVar13[0xf] + 0xc);
      *(float *)pauVar13[0xf] = *(float *)pauVar13[0xf] * fVar25 + fVar25;
      *(float *)(pauVar13[0xf] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[0xf] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[0xf] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[0x10] + 4);
      fVar143 = *(float *)(pauVar13[0x10] + 8);
      fVar26 = *(float *)(pauVar13[0x10] + 0xc);
      *(float *)pauVar13[0x10] = *(float *)pauVar13[0x10] * fVar25 + fVar25;
      *(float *)(pauVar13[0x10] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[0x10] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[0x10] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[0x11] + 4);
      fVar143 = *(float *)(pauVar13[0x11] + 8);
      fVar26 = *(float *)(pauVar13[0x11] + 0xc);
      *(float *)pauVar13[0x11] = *(float *)pauVar13[0x11] * fVar25 + fVar25;
      *(float *)(pauVar13[0x11] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[0x11] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[0x11] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[0x12] + 4);
      fVar143 = *(float *)(pauVar13[0x12] + 8);
      fVar26 = *(float *)(pauVar13[0x12] + 0xc);
      *(float *)pauVar13[0x12] = *(float *)pauVar13[0x12] * fVar25 + fVar25;
      *(float *)(pauVar13[0x12] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[0x12] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[0x12] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[0x13] + 4);
      fVar143 = *(float *)(pauVar13[0x13] + 8);
      fVar26 = *(float *)(pauVar13[0x13] + 0xc);
      *(float *)pauVar13[0x13] = *(float *)pauVar13[0x13] * fVar25 + fVar25;
      *(float *)(pauVar13[0x13] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[0x13] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[0x13] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[0x14] + 4);
      fVar143 = *(float *)(pauVar13[0x14] + 8);
      fVar26 = *(float *)(pauVar13[0x14] + 0xc);
      *(float *)pauVar13[0x14] = *(float *)pauVar13[0x14] * fVar25 + fVar25;
      *(float *)(pauVar13[0x14] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[0x14] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[0x14] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[0x15] + 4);
      fVar143 = *(float *)(pauVar13[0x15] + 8);
      fVar26 = *(float *)(pauVar13[0x15] + 0xc);
      *(float *)pauVar13[0x15] = *(float *)pauVar13[0x15] * fVar25 + fVar25;
      *(float *)(pauVar13[0x15] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[0x15] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[0x15] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[0x16] + 4);
      fVar143 = *(float *)(pauVar13[0x16] + 8);
      fVar26 = *(float *)(pauVar13[0x16] + 0xc);
      *(float *)pauVar13[0x16] = *(float *)pauVar13[0x16] * fVar25 + fVar25;
      *(float *)(pauVar13[0x16] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[0x16] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[0x16] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[0x17] + 4);
      fVar143 = *(float *)(pauVar13[0x17] + 8);
      fVar26 = *(float *)(pauVar13[0x17] + 0xc);
      *(float *)pauVar13[0x17] = *(float *)pauVar13[0x17] * fVar25 + fVar25;
      *(float *)(pauVar13[0x17] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[0x17] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[0x17] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[0x18] + 4);
      fVar143 = *(float *)(pauVar13[0x18] + 8);
      fVar26 = *(float *)(pauVar13[0x18] + 0xc);
      *(float *)pauVar13[0x18] = *(float *)pauVar13[0x18] * fVar25 + fVar25;
      *(float *)(pauVar13[0x18] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[0x18] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[0x18] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[0x19] + 4);
      fVar143 = *(float *)(pauVar13[0x19] + 8);
      fVar26 = *(float *)(pauVar13[0x19] + 0xc);
      *(float *)pauVar13[0x19] = *(float *)pauVar13[0x19] * fVar25 + fVar25;
      *(float *)(pauVar13[0x19] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[0x19] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[0x19] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[0x1a] + 4);
      fVar143 = *(float *)(pauVar13[0x1a] + 8);
      fVar26 = *(float *)(pauVar13[0x1a] + 0xc);
      *(float *)pauVar13[0x1a] = *(float *)pauVar13[0x1a] * fVar25 + fVar25;
      *(float *)(pauVar13[0x1a] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[0x1a] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[0x1a] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[0x1b] + 4);
      fVar143 = *(float *)(pauVar13[0x1b] + 8);
      fVar26 = *(float *)(pauVar13[0x1b] + 0xc);
      *(float *)pauVar13[0x1b] = *(float *)pauVar13[0x1b] * fVar25 + fVar25;
      *(float *)(pauVar13[0x1b] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[0x1b] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[0x1b] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[0x1c] + 4);
      fVar143 = *(float *)(pauVar13[0x1c] + 8);
      fVar26 = *(float *)(pauVar13[0x1c] + 0xc);
      *(float *)pauVar13[0x1c] = *(float *)pauVar13[0x1c] * fVar25 + fVar25;
      *(float *)(pauVar13[0x1c] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[0x1c] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[0x1c] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[0x1d] + 4);
      fVar143 = *(float *)(pauVar13[0x1d] + 8);
      fVar26 = *(float *)(pauVar13[0x1d] + 0xc);
      *(float *)pauVar13[0x1d] = *(float *)pauVar13[0x1d] * fVar25 + fVar25;
      *(float *)(pauVar13[0x1d] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[0x1d] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[0x1d] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[0x1e] + 4);
      fVar143 = *(float *)(pauVar13[0x1e] + 8);
      fVar26 = *(float *)(pauVar13[0x1e] + 0xc);
      *(float *)pauVar13[0x1e] = *(float *)pauVar13[0x1e] * fVar25 + fVar25;
      *(float *)(pauVar13[0x1e] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[0x1e] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[0x1e] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[0x1f] + 4);
      fVar143 = *(float *)(pauVar13[0x1f] + 8);
      fVar26 = *(float *)(pauVar13[0x1f] + 0xc);
      *(float *)pauVar13[0x1f] = *(float *)pauVar13[0x1f] * fVar25 + fVar25;
      *(float *)(pauVar13[0x1f] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[0x1f] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[0x1f] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[0x20] + 4);
      fVar143 = *(float *)(pauVar13[0x20] + 8);
      fVar26 = *(float *)(pauVar13[0x20] + 0xc);
      *(float *)pauVar13[0x20] = *(float *)pauVar13[0x20] * fVar25 + fVar25;
      *(float *)(pauVar13[0x20] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[0x20] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[0x20] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[0x21] + 4);
      fVar143 = *(float *)(pauVar13[0x21] + 8);
      fVar26 = *(float *)(pauVar13[0x21] + 0xc);
      *(float *)pauVar13[0x21] = *(float *)pauVar13[0x21] * fVar25 + fVar25;
      *(float *)(pauVar13[0x21] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[0x21] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[0x21] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[0x22] + 4);
      fVar143 = *(float *)(pauVar13[0x22] + 8);
      fVar26 = *(float *)(pauVar13[0x22] + 0xc);
      *(float *)pauVar13[0x22] = *(float *)pauVar13[0x22] * fVar25 + fVar25;
      *(float *)(pauVar13[0x22] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[0x22] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[0x22] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[0x23] + 4);
      fVar143 = *(float *)(pauVar13[0x23] + 8);
      fVar26 = *(float *)(pauVar13[0x23] + 0xc);
      *(float *)pauVar13[0x23] = *(float *)pauVar13[0x23] * fVar25 + fVar25;
      *(float *)(pauVar13[0x23] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[0x23] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[0x23] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[0x24] + 4);
      fVar143 = *(float *)(pauVar13[0x24] + 8);
      fVar26 = *(float *)(pauVar13[0x24] + 0xc);
      *(float *)pauVar13[0x24] = *(float *)pauVar13[0x24] * fVar25 + fVar25;
      *(float *)(pauVar13[0x24] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[0x24] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[0x24] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[0x25] + 4);
      fVar143 = *(float *)(pauVar13[0x25] + 8);
      fVar26 = *(float *)(pauVar13[0x25] + 0xc);
      *(float *)pauVar13[0x25] = *(float *)pauVar13[0x25] * fVar25 + fVar25;
      *(float *)(pauVar13[0x25] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[0x25] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[0x25] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[0x26] + 4);
      fVar143 = *(float *)(pauVar13[0x26] + 8);
      fVar26 = *(float *)(pauVar13[0x26] + 0xc);
      *(float *)pauVar13[0x26] = *(float *)pauVar13[0x26] * fVar25 + fVar25;
      *(float *)(pauVar13[0x26] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[0x26] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[0x26] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[0x27] + 4);
      fVar143 = *(float *)(pauVar13[0x27] + 8);
      fVar26 = *(float *)(pauVar13[0x27] + 0xc);
      *(float *)pauVar13[0x27] = *(float *)pauVar13[0x27] * fVar25 + fVar25;
      *(float *)(pauVar13[0x27] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[0x27] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[0x27] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[0x28] + 4);
      fVar143 = *(float *)(pauVar13[0x28] + 8);
      fVar26 = *(float *)(pauVar13[0x28] + 0xc);
      *(float *)pauVar13[0x28] = *(float *)pauVar13[0x28] * fVar25 + fVar25;
      *(float *)(pauVar13[0x28] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[0x28] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[0x28] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[0x29] + 4);
      fVar143 = *(float *)(pauVar13[0x29] + 8);
      fVar26 = *(float *)(pauVar13[0x29] + 0xc);
      *(float *)pauVar13[0x29] = *(float *)pauVar13[0x29] * fVar25 + fVar25;
      *(float *)(pauVar13[0x29] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[0x29] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[0x29] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[0x2a] + 4);
      fVar143 = *(float *)(pauVar13[0x2a] + 8);
      fVar26 = *(float *)(pauVar13[0x2a] + 0xc);
      *(float *)pauVar13[0x2a] = *(float *)pauVar13[0x2a] * fVar25 + fVar25;
      *(float *)(pauVar13[0x2a] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[0x2a] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[0x2a] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[0x2b] + 4);
      fVar143 = *(float *)(pauVar13[0x2b] + 8);
      fVar26 = *(float *)(pauVar13[0x2b] + 0xc);
      *(float *)pauVar13[0x2b] = *(float *)pauVar13[0x2b] * fVar25 + fVar25;
      *(float *)(pauVar13[0x2b] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[0x2b] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[0x2b] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[0x2c] + 4);
      fVar143 = *(float *)(pauVar13[0x2c] + 8);
      fVar26 = *(float *)(pauVar13[0x2c] + 0xc);
      *(float *)pauVar13[0x2c] = *(float *)pauVar13[0x2c] * fVar25 + fVar25;
      *(float *)(pauVar13[0x2c] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[0x2c] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[0x2c] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[0x2d] + 4);
      fVar143 = *(float *)(pauVar13[0x2d] + 8);
      fVar26 = *(float *)(pauVar13[0x2d] + 0xc);
      *(float *)pauVar13[0x2d] = *(float *)pauVar13[0x2d] * fVar25 + fVar25;
      *(float *)(pauVar13[0x2d] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[0x2d] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[0x2d] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[0x2e] + 4);
      fVar143 = *(float *)(pauVar13[0x2e] + 8);
      fVar26 = *(float *)(pauVar13[0x2e] + 0xc);
      *(float *)pauVar13[0x2e] = *(float *)pauVar13[0x2e] * fVar25 + fVar25;
      *(float *)(pauVar13[0x2e] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[0x2e] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[0x2e] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[0x2f] + 4);
      fVar143 = *(float *)(pauVar13[0x2f] + 8);
      fVar26 = *(float *)(pauVar13[0x2f] + 0xc);
      *(float *)pauVar13[0x2f] = *(float *)pauVar13[0x2f] * fVar25 + fVar25;
      *(float *)(pauVar13[0x2f] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[0x2f] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[0x2f] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[0x30] + 4);
      fVar143 = *(float *)(pauVar13[0x30] + 8);
      fVar26 = *(float *)(pauVar13[0x30] + 0xc);
      *(float *)pauVar13[0x30] = *(float *)pauVar13[0x30] * fVar25 + fVar25;
      *(float *)(pauVar13[0x30] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[0x30] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[0x30] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[0x31] + 4);
      fVar143 = *(float *)(pauVar13[0x31] + 8);
      fVar26 = *(float *)(pauVar13[0x31] + 0xc);
      *(float *)pauVar13[0x31] = *(float *)pauVar13[0x31] * fVar25 + fVar25;
      *(float *)(pauVar13[0x31] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[0x31] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[0x31] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[0x32] + 4);
      fVar143 = *(float *)(pauVar13[0x32] + 8);
      fVar26 = *(float *)(pauVar13[0x32] + 0xc);
      *(float *)pauVar13[0x32] = *(float *)pauVar13[0x32] * fVar25 + fVar25;
      *(float *)(pauVar13[0x32] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[0x32] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[0x32] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[0x33] + 4);
      fVar143 = *(float *)(pauVar13[0x33] + 8);
      fVar26 = *(float *)(pauVar13[0x33] + 0xc);
      *(float *)pauVar13[0x33] = *(float *)pauVar13[0x33] * fVar25 + fVar25;
      *(float *)(pauVar13[0x33] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[0x33] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[0x33] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[0x34] + 4);
      fVar143 = *(float *)(pauVar13[0x34] + 8);
      fVar26 = *(float *)(pauVar13[0x34] + 0xc);
      *(float *)pauVar13[0x34] = *(float *)pauVar13[0x34] * fVar25 + fVar25;
      *(float *)(pauVar13[0x34] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[0x34] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[0x34] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[0x35] + 4);
      fVar143 = *(float *)(pauVar13[0x35] + 8);
      fVar26 = *(float *)(pauVar13[0x35] + 0xc);
      *(float *)pauVar13[0x35] = *(float *)pauVar13[0x35] * fVar25 + fVar25;
      *(float *)(pauVar13[0x35] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[0x35] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[0x35] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[0x36] + 4);
      fVar143 = *(float *)(pauVar13[0x36] + 8);
      fVar26 = *(float *)(pauVar13[0x36] + 0xc);
      *(float *)pauVar13[0x36] = *(float *)pauVar13[0x36] * fVar25 + fVar25;
      *(float *)(pauVar13[0x36] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[0x36] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[0x36] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[0x37] + 4);
      fVar143 = *(float *)(pauVar13[0x37] + 8);
      fVar26 = *(float *)(pauVar13[0x37] + 0xc);
      *(float *)pauVar13[0x37] = *(float *)pauVar13[0x37] * fVar25 + fVar25;
      *(float *)(pauVar13[0x37] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[0x37] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[0x37] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[0x38] + 4);
      fVar143 = *(float *)(pauVar13[0x38] + 8);
      fVar26 = *(float *)(pauVar13[0x38] + 0xc);
      *(float *)pauVar13[0x38] = *(float *)pauVar13[0x38] * fVar25 + fVar25;
      *(float *)(pauVar13[0x38] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[0x38] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[0x38] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[0x39] + 4);
      fVar143 = *(float *)(pauVar13[0x39] + 8);
      fVar26 = *(float *)(pauVar13[0x39] + 0xc);
      *(float *)pauVar13[0x39] = *(float *)pauVar13[0x39] * fVar25 + fVar25;
      *(float *)(pauVar13[0x39] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[0x39] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[0x39] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[0x3a] + 4);
      fVar143 = *(float *)(pauVar13[0x3a] + 8);
      fVar26 = *(float *)(pauVar13[0x3a] + 0xc);
      *(float *)pauVar13[0x3a] = *(float *)pauVar13[0x3a] * fVar25 + fVar25;
      *(float *)(pauVar13[0x3a] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[0x3a] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[0x3a] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[0x3b] + 4);
      fVar143 = *(float *)(pauVar13[0x3b] + 8);
      fVar26 = *(float *)(pauVar13[0x3b] + 0xc);
      *(float *)pauVar13[0x3b] = *(float *)pauVar13[0x3b] * fVar25 + fVar25;
      *(float *)(pauVar13[0x3b] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[0x3b] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[0x3b] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[0x3c] + 4);
      fVar143 = *(float *)(pauVar13[0x3c] + 8);
      fVar26 = *(float *)(pauVar13[0x3c] + 0xc);
      *(float *)pauVar13[0x3c] = *(float *)pauVar13[0x3c] * fVar25 + fVar25;
      *(float *)(pauVar13[0x3c] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[0x3c] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[0x3c] + 0xc) = fVar26 * fVar25 + fVar25;
      fVar142 = *(float *)(pauVar13[0x3d] + 4);
      fVar143 = *(float *)(pauVar13[0x3d] + 8);
      fVar26 = *(float *)(pauVar13[0x3d] + 0xc);
      *(float *)pauVar13[0x3d] = *(float *)pauVar13[0x3d] * fVar25 + fVar25;
      *(float *)(pauVar13[0x3d] + 4) = fVar142 * fVar25 + fVar25;
      *(float *)(pauVar13[0x3d] + 8) = fVar143 * fVar25 + fVar25;
      *(float *)(pauVar13[0x3d] + 0xc) = fVar26 * fVar25 + fVar25;
      auVar136._0_4_ = *(float *)pauVar13[0x3e] * fVar25 + fVar25;
      auVar136._4_4_ = *(float *)(pauVar13[0x3e] + 4) * fVar25 + fVar25;
      auVar136._8_4_ = *(float *)(pauVar13[0x3e] + 8) * fVar25 + fVar25;
      auVar136._12_4_ = *(float *)(pauVar13[0x3e] + 0xc) * fVar25 + fVar25;
      pauVar13[0x3e] = auVar136;
      auVar33._0_4_ = fVar25 * *(float *)pauVar13[0x3f] + fVar25;
      auVar33._4_4_ = fVar25 * *(float *)(pauVar13[0x3f] + 4) + fVar25;
      auVar33._8_4_ = fVar25 * *(float *)(pauVar13[0x3f] + 8) + fVar25;
      auVar33._12_4_ = fVar25 * *(float *)(pauVar13[0x3f] + 0xc) + fVar25;
      goto code_r0x00014004328f;
    }
    goto LAB_140045d9a;
  case 5:
    bVar8 = *(byte *)((longlong)puVar20 + 2);
    fVar25 = (float)func_0x0001455d59d0(*(undefined8 *)(param_1 + 2),
                                        *(undefined2 *)((longlong)param_1 + 0x276),(short)puVar20[1]
                                        ,afStack_368);
    fVar25 = fVar25 * _DAT_145fc6edc + _DAT_145fc6edc;
code_r0x0001400444bd:
    afStack_368[bVar8] = fVar25;
    puVar19 = (uint *)((longlong)puVar20 + 6);
    goto LAB_140045d9a;
  case 6:
    afStack_368[*(byte *)((longlong)puVar20 + 2)] =
         **(float **)(auStack_2a8 + (ulonglong)(byte)puVar20[1] * 8);
    puVar19 = (uint *)((longlong)puVar20 + 6);
    goto LAB_140045d9a;
  case 7:
    puVar19 = (uint *)((longlong)puVar20 + 6);
    lVar12 = *(longlong *)(auStack_2a8 + (ulonglong)*(byte *)((longlong)puVar20 + 2) * 8);
    if ((lVar12 != 0) &&
       (lVar18 = *(longlong *)(auStack_2a8 + (ulonglong)(byte)puVar20[1] * 8), lVar18 != 0)) {
      lVar15 = 0;
      do {
        pfVar7 = (float *)(lVar12 + lVar15);
        pfVar1 = (float *)(lVar18 + lVar15);
        auVar35._0_4_ = *pfVar7 * *pfVar1;
        auVar35._4_4_ = pfVar7[1] * pfVar1[1];
        auVar35._8_4_ = pfVar7[2] * pfVar1[2];
        auVar35._12_4_ = pfVar7[3] * pfVar1[3];
        *(undefined1 (*) [16])(lVar12 + lVar15) = auVar35;
        lVar15 = lVar15 + 0x10;
      } while ((int)lVar15 != 0x400);
    }
    goto LAB_140045d9a;
  case 8:
    bVar8 = *(byte *)((longlong)puVar20 + 2);
    puVar19 = (uint *)((longlong)puVar20 + 6);
    auVar41._0_4_ =
         (float)func_0x0001455d59d0(*(undefined8 *)(param_1 + 2),
                                    *(undefined2 *)((longlong)param_1 + 0x276),(short)puVar20[1],
                                    afStack_368);
    pfVar7 = *(float **)(auStack_2a8 + (ulonglong)bVar8 * 8);
    if (pfVar7 != (float *)0x0) {
      auVar139._4_4_ = _DAT_145fc6ed8;
      auVar139._0_4_ = _DAT_145fc6ed8;
      auVar139._8_4_ = _DAT_145fc6ed8;
      auVar139._12_4_ = _DAT_145fc6ed8;
      auVar41._4_4_ = auVar41._0_4_;
      auVar41._8_4_ = auVar41._0_4_;
      auVar41._12_4_ = auVar41._0_4_;
      auVar31 = vcmpps_avx(auVar41,auVar139,4);
      uVar24 = vmovmskps_avx(auVar31);
      if ((char)uVar24 != '\0') {
        auVar31 = vcmpps_avx(auVar41,ZEXT816(0) << 0x20,4);
        if ((((SUB161(auVar31 >> 0x1f,0) & 1) == 0 && (SUB161(auVar31 >> 0x3f,0) & 1) == 0) &&
            (SUB161(auVar31 >> 0x5f,0) & 1) == 0) && -1 < auVar31[0xf]) {
          func_0x000144d9f6c0();
        }
        else {
          *pfVar7 = auVar41._0_4_ * *pfVar7;
          pfVar7[1] = auVar41._0_4_ * pfVar7[1];
          pfVar7[2] = auVar41._0_4_ * pfVar7[2];
          pfVar7[3] = auVar41._0_4_ * pfVar7[3];
          pfVar7[4] = auVar41._0_4_ * pfVar7[4];
          pfVar7[5] = auVar41._0_4_ * pfVar7[5];
          pfVar7[6] = auVar41._0_4_ * pfVar7[6];
          pfVar7[7] = auVar41._0_4_ * pfVar7[7];
          pfVar7[8] = auVar41._0_4_ * pfVar7[8];
          pfVar7[9] = auVar41._0_4_ * pfVar7[9];
          pfVar7[10] = auVar41._0_4_ * pfVar7[10];
          pfVar7[0xb] = auVar41._0_4_ * pfVar7[0xb];
          pfVar7[0xc] = auVar41._0_4_ * pfVar7[0xc];
          pfVar7[0xd] = auVar41._0_4_ * pfVar7[0xd];
          pfVar7[0xe] = auVar41._0_4_ * pfVar7[0xe];
          pfVar7[0xf] = auVar41._0_4_ * pfVar7[0xf];
          pfVar7[0x10] = auVar41._0_4_ * pfVar7[0x10];
          pfVar7[0x11] = auVar41._0_4_ * pfVar7[0x11];
          pfVar7[0x12] = auVar41._0_4_ * pfVar7[0x12];
          pfVar7[0x13] = auVar41._0_4_ * pfVar7[0x13];
          pfVar7[0x14] = auVar41._0_4_ * pfVar7[0x14];
          pfVar7[0x15] = auVar41._0_4_ * pfVar7[0x15];
          pfVar7[0x16] = auVar41._0_4_ * pfVar7[0x16];
          pfVar7[0x17] = auVar41._0_4_ * pfVar7[0x17];
          pfVar7[0x18] = auVar41._0_4_ * pfVar7[0x18];
          pfVar7[0x19] = auVar41._0_4_ * pfVar7[0x19];
          pfVar7[0x1a] = auVar41._0_4_ * pfVar7[0x1a];
          pfVar7[0x1b] = auVar41._0_4_ * pfVar7[0x1b];
          pfVar7[0x1c] = auVar41._0_4_ * pfVar7[0x1c];
          pfVar7[0x1d] = auVar41._0_4_ * pfVar7[0x1d];
          pfVar7[0x1e] = auVar41._0_4_ * pfVar7[0x1e];
          pfVar7[0x1f] = auVar41._0_4_ * pfVar7[0x1f];
          pfVar7[0x20] = auVar41._0_4_ * pfVar7[0x20];
          pfVar7[0x21] = auVar41._0_4_ * pfVar7[0x21];
          pfVar7[0x22] = auVar41._0_4_ * pfVar7[0x22];
          pfVar7[0x23] = auVar41._0_4_ * pfVar7[0x23];
          pfVar7[0x24] = auVar41._0_4_ * pfVar7[0x24];
          pfVar7[0x25] = auVar41._0_4_ * pfVar7[0x25];
          pfVar7[0x26] = auVar41._0_4_ * pfVar7[0x26];
          pfVar7[0x27] = auVar41._0_4_ * pfVar7[0x27];
          pfVar7[0x28] = auVar41._0_4_ * pfVar7[0x28];
          pfVar7[0x29] = auVar41._0_4_ * pfVar7[0x29];
          pfVar7[0x2a] = auVar41._0_4_ * pfVar7[0x2a];
          pfVar7[0x2b] = auVar41._0_4_ * pfVar7[0x2b];
          pfVar7[0x2c] = auVar41._0_4_ * pfVar7[0x2c];
          pfVar7[0x2d] = auVar41._0_4_ * pfVar7[0x2d];
          pfVar7[0x2e] = auVar41._0_4_ * pfVar7[0x2e];
          pfVar7[0x2f] = auVar41._0_4_ * pfVar7[0x2f];
          pfVar7[0x30] = auVar41._0_4_ * pfVar7[0x30];
          pfVar7[0x31] = auVar41._0_4_ * pfVar7[0x31];
          pfVar7[0x32] = auVar41._0_4_ * pfVar7[0x32];
          pfVar7[0x33] = auVar41._0_4_ * pfVar7[0x33];
          pfVar7[0x34] = auVar41._0_4_ * pfVar7[0x34];
          pfVar7[0x35] = auVar41._0_4_ * pfVar7[0x35];
          pfVar7[0x36] = auVar41._0_4_ * pfVar7[0x36];
          pfVar7[0x37] = auVar41._0_4_ * pfVar7[0x37];
          pfVar7[0x38] = auVar41._0_4_ * pfVar7[0x38];
          pfVar7[0x39] = auVar41._0_4_ * pfVar7[0x39];
          pfVar7[0x3a] = auVar41._0_4_ * pfVar7[0x3a];
          pfVar7[0x3b] = auVar41._0_4_ * pfVar7[0x3b];
          pfVar7[0x3c] = auVar41._0_4_ * pfVar7[0x3c];
          pfVar7[0x3d] = auVar41._0_4_ * pfVar7[0x3d];
          pfVar7[0x3e] = auVar41._0_4_ * pfVar7[0x3e];
          pfVar7[0x3f] = auVar41._0_4_ * pfVar7[0x3f];
          pfVar7[0x40] = auVar41._0_4_ * pfVar7[0x40];
          pfVar7[0x41] = auVar41._0_4_ * pfVar7[0x41];
          pfVar7[0x42] = auVar41._0_4_ * pfVar7[0x42];
          pfVar7[0x43] = auVar41._0_4_ * pfVar7[0x43];
          pfVar7[0x44] = auVar41._0_4_ * pfVar7[0x44];
          pfVar7[0x45] = auVar41._0_4_ * pfVar7[0x45];
          pfVar7[0x46] = auVar41._0_4_ * pfVar7[0x46];
          pfVar7[0x47] = auVar41._0_4_ * pfVar7[0x47];
          pfVar7[0x48] = auVar41._0_4_ * pfVar7[0x48];
          pfVar7[0x49] = auVar41._0_4_ * pfVar7[0x49];
          pfVar7[0x4a] = auVar41._0_4_ * pfVar7[0x4a];
          pfVar7[0x4b] = auVar41._0_4_ * pfVar7[0x4b];
          pfVar7[0x4c] = auVar41._0_4_ * pfVar7[0x4c];
          pfVar7[0x4d] = auVar41._0_4_ * pfVar7[0x4d];
          pfVar7[0x4e] = auVar41._0_4_ * pfVar7[0x4e];
          pfVar7[0x4f] = auVar41._0_4_ * pfVar7[0x4f];
          pfVar7[0x50] = auVar41._0_4_ * pfVar7[0x50];
          pfVar7[0x51] = auVar41._0_4_ * pfVar7[0x51];
          pfVar7[0x52] = auVar41._0_4_ * pfVar7[0x52];
          pfVar7[0x53] = auVar41._0_4_ * pfVar7[0x53];
          pfVar7[0x54] = auVar41._0_4_ * pfVar7[0x54];
          pfVar7[0x55] = auVar41._0_4_ * pfVar7[0x55];
          pfVar7[0x56] = auVar41._0_4_ * pfVar7[0x56];
          pfVar7[0x57] = auVar41._0_4_ * pfVar7[0x57];
          pfVar7[0x58] = auVar41._0_4_ * pfVar7[0x58];
          pfVar7[0x59] = auVar41._0_4_ * pfVar7[0x59];
          pfVar7[0x5a] = auVar41._0_4_ * pfVar7[0x5a];
          pfVar7[0x5b] = auVar41._0_4_ * pfVar7[0x5b];
          pfVar7[0x5c] = auVar41._0_4_ * pfVar7[0x5c];
          pfVar7[0x5d] = auVar41._0_4_ * pfVar7[0x5d];
          pfVar7[0x5e] = auVar41._0_4_ * pfVar7[0x5e];
          pfVar7[0x5f] = auVar41._0_4_ * pfVar7[0x5f];
          pfVar7[0x60] = auVar41._0_4_ * pfVar7[0x60];
          pfVar7[0x61] = auVar41._0_4_ * pfVar7[0x61];
          pfVar7[0x62] = auVar41._0_4_ * pfVar7[0x62];
          pfVar7[99] = auVar41._0_4_ * pfVar7[99];
          pfVar7[100] = auVar41._0_4_ * pfVar7[100];
          pfVar7[0x65] = auVar41._0_4_ * pfVar7[0x65];
          pfVar7[0x66] = auVar41._0_4_ * pfVar7[0x66];
          pfVar7[0x67] = auVar41._0_4_ * pfVar7[0x67];
          pfVar7[0x68] = auVar41._0_4_ * pfVar7[0x68];
          pfVar7[0x69] = auVar41._0_4_ * pfVar7[0x69];
          pfVar7[0x6a] = auVar41._0_4_ * pfVar7[0x6a];
          pfVar7[0x6b] = auVar41._0_4_ * pfVar7[0x6b];
          pfVar7[0x6c] = auVar41._0_4_ * pfVar7[0x6c];
          pfVar7[0x6d] = auVar41._0_4_ * pfVar7[0x6d];
          pfVar7[0x6e] = auVar41._0_4_ * pfVar7[0x6e];
          pfVar7[0x6f] = auVar41._0_4_ * pfVar7[0x6f];
          pfVar7[0x70] = auVar41._0_4_ * pfVar7[0x70];
          pfVar7[0x71] = auVar41._0_4_ * pfVar7[0x71];
          pfVar7[0x72] = auVar41._0_4_ * pfVar7[0x72];
          pfVar7[0x73] = auVar41._0_4_ * pfVar7[0x73];
          pfVar7[0x74] = auVar41._0_4_ * pfVar7[0x74];
          pfVar7[0x75] = auVar41._0_4_ * pfVar7[0x75];
          pfVar7[0x76] = auVar41._0_4_ * pfVar7[0x76];
          pfVar7[0x77] = auVar41._0_4_ * pfVar7[0x77];
          pfVar7[0x78] = auVar41._0_4_ * pfVar7[0x78];
          pfVar7[0x79] = auVar41._0_4_ * pfVar7[0x79];
          pfVar7[0x7a] = auVar41._0_4_ * pfVar7[0x7a];
          pfVar7[0x7b] = auVar41._0_4_ * pfVar7[0x7b];
          pfVar7[0x7c] = auVar41._0_4_ * pfVar7[0x7c];
          pfVar7[0x7d] = auVar41._0_4_ * pfVar7[0x7d];
          pfVar7[0x7e] = auVar41._0_4_ * pfVar7[0x7e];
          pfVar7[0x7f] = auVar41._0_4_ * pfVar7[0x7f];
          pfVar7[0x80] = auVar41._0_4_ * pfVar7[0x80];
          pfVar7[0x81] = auVar41._0_4_ * pfVar7[0x81];
          pfVar7[0x82] = auVar41._0_4_ * pfVar7[0x82];
          pfVar7[0x83] = auVar41._0_4_ * pfVar7[0x83];
          pfVar7[0x84] = auVar41._0_4_ * pfVar7[0x84];
          pfVar7[0x85] = auVar41._0_4_ * pfVar7[0x85];
          pfVar7[0x86] = auVar41._0_4_ * pfVar7[0x86];
          pfVar7[0x87] = auVar41._0_4_ * pfVar7[0x87];
          pfVar7[0x88] = auVar41._0_4_ * pfVar7[0x88];
          pfVar7[0x89] = auVar41._0_4_ * pfVar7[0x89];
          pfVar7[0x8a] = auVar41._0_4_ * pfVar7[0x8a];
          pfVar7[0x8b] = auVar41._0_4_ * pfVar7[0x8b];
          pfVar7[0x8c] = auVar41._0_4_ * pfVar7[0x8c];
          pfVar7[0x8d] = auVar41._0_4_ * pfVar7[0x8d];
          pfVar7[0x8e] = auVar41._0_4_ * pfVar7[0x8e];
          pfVar7[0x8f] = auVar41._0_4_ * pfVar7[0x8f];
          pfVar7[0x90] = auVar41._0_4_ * pfVar7[0x90];
          pfVar7[0x91] = auVar41._0_4_ * pfVar7[0x91];
          pfVar7[0x92] = auVar41._0_4_ * pfVar7[0x92];
          pfVar7[0x93] = auVar41._0_4_ * pfVar7[0x93];
          pfVar7[0x94] = auVar41._0_4_ * pfVar7[0x94];
          pfVar7[0x95] = auVar41._0_4_ * pfVar7[0x95];
          pfVar7[0x96] = auVar41._0_4_ * pfVar7[0x96];
          pfVar7[0x97] = auVar41._0_4_ * pfVar7[0x97];
          pfVar7[0x98] = auVar41._0_4_ * pfVar7[0x98];
          pfVar7[0x99] = auVar41._0_4_ * pfVar7[0x99];
          pfVar7[0x9a] = auVar41._0_4_ * pfVar7[0x9a];
          pfVar7[0x9b] = auVar41._0_4_ * pfVar7[0x9b];
          pfVar7[0x9c] = auVar41._0_4_ * pfVar7[0x9c];
          pfVar7[0x9d] = auVar41._0_4_ * pfVar7[0x9d];
          pfVar7[0x9e] = auVar41._0_4_ * pfVar7[0x9e];
          pfVar7[0x9f] = auVar41._0_4_ * pfVar7[0x9f];
          pfVar7[0xa0] = auVar41._0_4_ * pfVar7[0xa0];
          pfVar7[0xa1] = auVar41._0_4_ * pfVar7[0xa1];
          pfVar7[0xa2] = auVar41._0_4_ * pfVar7[0xa2];
          pfVar7[0xa3] = auVar41._0_4_ * pfVar7[0xa3];
          pfVar7[0xa4] = auVar41._0_4_ * pfVar7[0xa4];
          pfVar7[0xa5] = auVar41._0_4_ * pfVar7[0xa5];
          pfVar7[0xa6] = auVar41._0_4_ * pfVar7[0xa6];
          pfVar7[0xa7] = auVar41._0_4_ * pfVar7[0xa7];
          pfVar7[0xa8] = auVar41._0_4_ * pfVar7[0xa8];
          pfVar7[0xa9] = auVar41._0_4_ * pfVar7[0xa9];
          pfVar7[0xaa] = auVar41._0_4_ * pfVar7[0xaa];
          pfVar7[0xab] = auVar41._0_4_ * pfVar7[0xab];
          pfVar7[0xac] = auVar41._0_4_ * pfVar7[0xac];
          pfVar7[0xad] = auVar41._0_4_ * pfVar7[0xad];
          pfVar7[0xae] = auVar41._0_4_ * pfVar7[0xae];
          pfVar7[0xaf] = auVar41._0_4_ * pfVar7[0xaf];
          pfVar7[0xb0] = auVar41._0_4_ * pfVar7[0xb0];
          pfVar7[0xb1] = auVar41._0_4_ * pfVar7[0xb1];
          pfVar7[0xb2] = auVar41._0_4_ * pfVar7[0xb2];
          pfVar7[0xb3] = auVar41._0_4_ * pfVar7[0xb3];
          pfVar7[0xb4] = auVar41._0_4_ * pfVar7[0xb4];
          pfVar7[0xb5] = auVar41._0_4_ * pfVar7[0xb5];
          pfVar7[0xb6] = auVar41._0_4_ * pfVar7[0xb6];
          pfVar7[0xb7] = auVar41._0_4_ * pfVar7[0xb7];
          pfVar7[0xb8] = auVar41._0_4_ * pfVar7[0xb8];
          pfVar7[0xb9] = auVar41._0_4_ * pfVar7[0xb9];
          pfVar7[0xba] = auVar41._0_4_ * pfVar7[0xba];
          pfVar7[0xbb] = auVar41._0_4_ * pfVar7[0xbb];
          pfVar7[0xbc] = auVar41._0_4_ * pfVar7[0xbc];
          pfVar7[0xbd] = auVar41._0_4_ * pfVar7[0xbd];
          pfVar7[0xbe] = auVar41._0_4_ * pfVar7[0xbe];
          pfVar7[0xbf] = auVar41._0_4_ * pfVar7[0xbf];
          pfVar7[0xc0] = auVar41._0_4_ * pfVar7[0xc0];
          pfVar7[0xc1] = auVar41._0_4_ * pfVar7[0xc1];
          pfVar7[0xc2] = auVar41._0_4_ * pfVar7[0xc2];
          pfVar7[0xc3] = auVar41._0_4_ * pfVar7[0xc3];
          pfVar7[0xc4] = auVar41._0_4_ * pfVar7[0xc4];
          pfVar7[0xc5] = auVar41._0_4_ * pfVar7[0xc5];
          pfVar7[0xc6] = auVar41._0_4_ * pfVar7[0xc6];
          pfVar7[199] = auVar41._0_4_ * pfVar7[199];
          pfVar7[200] = auVar41._0_4_ * pfVar7[200];
          pfVar7[0xc9] = auVar41._0_4_ * pfVar7[0xc9];
          pfVar7[0xca] = auVar41._0_4_ * pfVar7[0xca];
          pfVar7[0xcb] = auVar41._0_4_ * pfVar7[0xcb];
          pfVar7[0xcc] = auVar41._0_4_ * pfVar7[0xcc];
          pfVar7[0xcd] = auVar41._0_4_ * pfVar7[0xcd];
          pfVar7[0xce] = auVar41._0_4_ * pfVar7[0xce];
          pfVar7[0xcf] = auVar41._0_4_ * pfVar7[0xcf];
          pfVar7[0xd0] = auVar41._0_4_ * pfVar7[0xd0];
          pfVar7[0xd1] = auVar41._0_4_ * pfVar7[0xd1];
          pfVar7[0xd2] = auVar41._0_4_ * pfVar7[0xd2];
          pfVar7[0xd3] = auVar41._0_4_ * pfVar7[0xd3];
          pfVar7[0xd4] = auVar41._0_4_ * pfVar7[0xd4];
          pfVar7[0xd5] = auVar41._0_4_ * pfVar7[0xd5];
          pfVar7[0xd6] = auVar41._0_4_ * pfVar7[0xd6];
          pfVar7[0xd7] = auVar41._0_4_ * pfVar7[0xd7];
          pfVar7[0xd8] = auVar41._0_4_ * pfVar7[0xd8];
          pfVar7[0xd9] = auVar41._0_4_ * pfVar7[0xd9];
          pfVar7[0xda] = auVar41._0_4_ * pfVar7[0xda];
          pfVar7[0xdb] = auVar41._0_4_ * pfVar7[0xdb];
          pfVar7[0xdc] = auVar41._0_4_ * pfVar7[0xdc];
          pfVar7[0xdd] = auVar41._0_4_ * pfVar7[0xdd];
          pfVar7[0xde] = auVar41._0_4_ * pfVar7[0xde];
          pfVar7[0xdf] = auVar41._0_4_ * pfVar7[0xdf];
          pfVar7[0xe0] = auVar41._0_4_ * pfVar7[0xe0];
          pfVar7[0xe1] = auVar41._0_4_ * pfVar7[0xe1];
          pfVar7[0xe2] = auVar41._0_4_ * pfVar7[0xe2];
          pfVar7[0xe3] = auVar41._0_4_ * pfVar7[0xe3];
          pfVar7[0xe4] = auVar41._0_4_ * pfVar7[0xe4];
          pfVar7[0xe5] = auVar41._0_4_ * pfVar7[0xe5];
          pfVar7[0xe6] = auVar41._0_4_ * pfVar7[0xe6];
          pfVar7[0xe7] = auVar41._0_4_ * pfVar7[0xe7];
          pfVar7[0xe8] = auVar41._0_4_ * pfVar7[0xe8];
          pfVar7[0xe9] = auVar41._0_4_ * pfVar7[0xe9];
          pfVar7[0xea] = auVar41._0_4_ * pfVar7[0xea];
          pfVar7[0xeb] = auVar41._0_4_ * pfVar7[0xeb];
          pfVar7[0xec] = auVar41._0_4_ * pfVar7[0xec];
          pfVar7[0xed] = auVar41._0_4_ * pfVar7[0xed];
          pfVar7[0xee] = auVar41._0_4_ * pfVar7[0xee];
          pfVar7[0xef] = auVar41._0_4_ * pfVar7[0xef];
          pfVar7[0xf0] = auVar41._0_4_ * pfVar7[0xf0];
          pfVar7[0xf1] = auVar41._0_4_ * pfVar7[0xf1];
          pfVar7[0xf2] = auVar41._0_4_ * pfVar7[0xf2];
          pfVar7[0xf3] = auVar41._0_4_ * pfVar7[0xf3];
          pfVar7[0xf4] = auVar41._0_4_ * pfVar7[0xf4];
          pfVar7[0xf5] = auVar41._0_4_ * pfVar7[0xf5];
          pfVar7[0xf6] = auVar41._0_4_ * pfVar7[0xf6];
          pfVar7[0xf7] = auVar41._0_4_ * pfVar7[0xf7];
          auVar140._0_4_ = auVar41._0_4_ * pfVar7[0xf8];
          auVar140._4_4_ = auVar41._0_4_ * pfVar7[0xf9];
          auVar140._8_4_ = auVar41._0_4_ * pfVar7[0xfa];
          auVar140._12_4_ = auVar41._0_4_ * pfVar7[0xfb];
          *(undefined1 (*) [16])(pfVar7 + 0xf8) = auVar140;
          auVar42._0_4_ = auVar41._0_4_ * pfVar7[0xfc];
          auVar42._4_4_ = auVar41._0_4_ * pfVar7[0xfd];
          auVar42._8_4_ = auVar41._0_4_ * pfVar7[0xfe];
          auVar42._12_4_ = auVar41._0_4_ * pfVar7[0xff];
          *(undefined1 (*) [16])(pfVar7 + 0xfc) = auVar42;
        }
      }
    }
    goto LAB_140045d9a;
  case 9:
    uVar6 = *(undefined2 *)((longlong)param_1 + 0x276);
    uVar11 = *(undefined8 *)(param_1 + 2);
    uVar17 = (ulonglong)*(byte *)((longlong)puVar20 + 2);
    auVar81._0_8_ = func_0x0001455d59d0(uVar11,uVar6,(short)puVar20[1],afStack_368);
    auVar81._8_56_ = extraout_var_42;
    auVar153 = ZEXT1664(auVar81._0_16_);
    puVar19 = puVar20 + 2;
    fVar25 = (float)func_0x0001455d59d0(uVar11,uVar6,*(undefined2 *)((longlong)puVar20 + 6),
                                        afStack_368);
    fVar25 = fVar25 * auVar153._0_4_;
    break;
  case 10:
    puVar19 = (uint *)((longlong)puVar20 + 6);
    lVar12 = *(longlong *)(auStack_2a8 + (ulonglong)*(byte *)((longlong)puVar20 + 2) * 8);
    if ((lVar12 != 0) &&
       (lVar18 = *(longlong *)(auStack_2a8 + (ulonglong)(byte)puVar20[1] * 8), lVar18 != 0)) {
      lVar15 = 0;
      do {
        pfVar7 = (float *)(lVar12 + lVar15);
        pfVar1 = (float *)(lVar18 + lVar15);
        auVar40._0_4_ = *pfVar7 + *pfVar1;
        auVar40._4_4_ = pfVar7[1] + pfVar1[1];
        auVar40._8_4_ = pfVar7[2] + pfVar1[2];
        auVar40._12_4_ = pfVar7[3] + pfVar1[3];
        *(undefined1 (*) [16])(lVar12 + lVar15) = auVar40;
        lVar15 = lVar15 + 0x10;
      } while ((int)lVar15 != 0x400);
    }
    goto LAB_140045d9a;
  case 0xb:
    bVar8 = *(byte *)((longlong)puVar20 + 2);
    puVar19 = (uint *)((longlong)puVar20 + 6);
    fVar25 = (float)func_0x0001455d59d0(*(undefined8 *)(param_1 + 2),
                                        *(undefined2 *)((longlong)param_1 + 0x276),(short)puVar20[1]
                                        ,afStack_368);
    pauVar13 = *(undefined1 (**) [16])(auStack_2a8 + (ulonglong)bVar8 * 8);
    if (pauVar13 != (undefined1 (*) [16])0x0) {
      fVar142 = *(float *)(*pauVar13 + 4);
      fVar143 = *(float *)(*pauVar13 + 8);
      fVar26 = *(float *)(*pauVar13 + 0xc);
      *(float *)*pauVar13 = fVar25 + *(float *)*pauVar13;
      *(float *)(*pauVar13 + 4) = fVar25 + fVar142;
      *(float *)(*pauVar13 + 8) = fVar25 + fVar143;
      *(float *)(*pauVar13 + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[1] + 4);
      fVar143 = *(float *)(pauVar13[1] + 8);
      fVar26 = *(float *)(pauVar13[1] + 0xc);
      *(float *)pauVar13[1] = fVar25 + *(float *)pauVar13[1];
      *(float *)(pauVar13[1] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[1] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[1] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[2] + 4);
      fVar143 = *(float *)(pauVar13[2] + 8);
      fVar26 = *(float *)(pauVar13[2] + 0xc);
      *(float *)pauVar13[2] = fVar25 + *(float *)pauVar13[2];
      *(float *)(pauVar13[2] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[2] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[2] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[3] + 4);
      fVar143 = *(float *)(pauVar13[3] + 8);
      fVar26 = *(float *)(pauVar13[3] + 0xc);
      *(float *)pauVar13[3] = fVar25 + *(float *)pauVar13[3];
      *(float *)(pauVar13[3] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[3] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[3] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[4] + 4);
      fVar143 = *(float *)(pauVar13[4] + 8);
      fVar26 = *(float *)(pauVar13[4] + 0xc);
      *(float *)pauVar13[4] = fVar25 + *(float *)pauVar13[4];
      *(float *)(pauVar13[4] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[4] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[4] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[5] + 4);
      fVar143 = *(float *)(pauVar13[5] + 8);
      fVar26 = *(float *)(pauVar13[5] + 0xc);
      *(float *)pauVar13[5] = fVar25 + *(float *)pauVar13[5];
      *(float *)(pauVar13[5] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[5] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[5] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[6] + 4);
      fVar143 = *(float *)(pauVar13[6] + 8);
      fVar26 = *(float *)(pauVar13[6] + 0xc);
      *(float *)pauVar13[6] = fVar25 + *(float *)pauVar13[6];
      *(float *)(pauVar13[6] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[6] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[6] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[7] + 4);
      fVar143 = *(float *)(pauVar13[7] + 8);
      fVar26 = *(float *)(pauVar13[7] + 0xc);
      *(float *)pauVar13[7] = fVar25 + *(float *)pauVar13[7];
      *(float *)(pauVar13[7] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[7] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[7] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[8] + 4);
      fVar143 = *(float *)(pauVar13[8] + 8);
      fVar26 = *(float *)(pauVar13[8] + 0xc);
      *(float *)pauVar13[8] = fVar25 + *(float *)pauVar13[8];
      *(float *)(pauVar13[8] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[8] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[8] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[9] + 4);
      fVar143 = *(float *)(pauVar13[9] + 8);
      fVar26 = *(float *)(pauVar13[9] + 0xc);
      *(float *)pauVar13[9] = fVar25 + *(float *)pauVar13[9];
      *(float *)(pauVar13[9] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[9] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[9] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[10] + 4);
      fVar143 = *(float *)(pauVar13[10] + 8);
      fVar26 = *(float *)(pauVar13[10] + 0xc);
      *(float *)pauVar13[10] = fVar25 + *(float *)pauVar13[10];
      *(float *)(pauVar13[10] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[10] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[10] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[0xb] + 4);
      fVar143 = *(float *)(pauVar13[0xb] + 8);
      fVar26 = *(float *)(pauVar13[0xb] + 0xc);
      *(float *)pauVar13[0xb] = fVar25 + *(float *)pauVar13[0xb];
      *(float *)(pauVar13[0xb] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[0xb] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[0xb] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[0xc] + 4);
      fVar143 = *(float *)(pauVar13[0xc] + 8);
      fVar26 = *(float *)(pauVar13[0xc] + 0xc);
      *(float *)pauVar13[0xc] = fVar25 + *(float *)pauVar13[0xc];
      *(float *)(pauVar13[0xc] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[0xc] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[0xc] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[0xd] + 4);
      fVar143 = *(float *)(pauVar13[0xd] + 8);
      fVar26 = *(float *)(pauVar13[0xd] + 0xc);
      *(float *)pauVar13[0xd] = fVar25 + *(float *)pauVar13[0xd];
      *(float *)(pauVar13[0xd] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[0xd] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[0xd] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[0xe] + 4);
      fVar143 = *(float *)(pauVar13[0xe] + 8);
      fVar26 = *(float *)(pauVar13[0xe] + 0xc);
      *(float *)pauVar13[0xe] = fVar25 + *(float *)pauVar13[0xe];
      *(float *)(pauVar13[0xe] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[0xe] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[0xe] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[0xf] + 4);
      fVar143 = *(float *)(pauVar13[0xf] + 8);
      fVar26 = *(float *)(pauVar13[0xf] + 0xc);
      *(float *)pauVar13[0xf] = fVar25 + *(float *)pauVar13[0xf];
      *(float *)(pauVar13[0xf] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[0xf] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[0xf] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[0x10] + 4);
      fVar143 = *(float *)(pauVar13[0x10] + 8);
      fVar26 = *(float *)(pauVar13[0x10] + 0xc);
      *(float *)pauVar13[0x10] = fVar25 + *(float *)pauVar13[0x10];
      *(float *)(pauVar13[0x10] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[0x10] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[0x10] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[0x11] + 4);
      fVar143 = *(float *)(pauVar13[0x11] + 8);
      fVar26 = *(float *)(pauVar13[0x11] + 0xc);
      *(float *)pauVar13[0x11] = fVar25 + *(float *)pauVar13[0x11];
      *(float *)(pauVar13[0x11] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[0x11] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[0x11] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[0x12] + 4);
      fVar143 = *(float *)(pauVar13[0x12] + 8);
      fVar26 = *(float *)(pauVar13[0x12] + 0xc);
      *(float *)pauVar13[0x12] = fVar25 + *(float *)pauVar13[0x12];
      *(float *)(pauVar13[0x12] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[0x12] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[0x12] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[0x13] + 4);
      fVar143 = *(float *)(pauVar13[0x13] + 8);
      fVar26 = *(float *)(pauVar13[0x13] + 0xc);
      *(float *)pauVar13[0x13] = fVar25 + *(float *)pauVar13[0x13];
      *(float *)(pauVar13[0x13] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[0x13] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[0x13] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[0x14] + 4);
      fVar143 = *(float *)(pauVar13[0x14] + 8);
      fVar26 = *(float *)(pauVar13[0x14] + 0xc);
      *(float *)pauVar13[0x14] = fVar25 + *(float *)pauVar13[0x14];
      *(float *)(pauVar13[0x14] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[0x14] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[0x14] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[0x15] + 4);
      fVar143 = *(float *)(pauVar13[0x15] + 8);
      fVar26 = *(float *)(pauVar13[0x15] + 0xc);
      *(float *)pauVar13[0x15] = fVar25 + *(float *)pauVar13[0x15];
      *(float *)(pauVar13[0x15] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[0x15] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[0x15] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[0x16] + 4);
      fVar143 = *(float *)(pauVar13[0x16] + 8);
      fVar26 = *(float *)(pauVar13[0x16] + 0xc);
      *(float *)pauVar13[0x16] = fVar25 + *(float *)pauVar13[0x16];
      *(float *)(pauVar13[0x16] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[0x16] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[0x16] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[0x17] + 4);
      fVar143 = *(float *)(pauVar13[0x17] + 8);
      fVar26 = *(float *)(pauVar13[0x17] + 0xc);
      *(float *)pauVar13[0x17] = fVar25 + *(float *)pauVar13[0x17];
      *(float *)(pauVar13[0x17] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[0x17] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[0x17] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[0x18] + 4);
      fVar143 = *(float *)(pauVar13[0x18] + 8);
      fVar26 = *(float *)(pauVar13[0x18] + 0xc);
      *(float *)pauVar13[0x18] = fVar25 + *(float *)pauVar13[0x18];
      *(float *)(pauVar13[0x18] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[0x18] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[0x18] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[0x19] + 4);
      fVar143 = *(float *)(pauVar13[0x19] + 8);
      fVar26 = *(float *)(pauVar13[0x19] + 0xc);
      *(float *)pauVar13[0x19] = fVar25 + *(float *)pauVar13[0x19];
      *(float *)(pauVar13[0x19] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[0x19] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[0x19] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[0x1a] + 4);
      fVar143 = *(float *)(pauVar13[0x1a] + 8);
      fVar26 = *(float *)(pauVar13[0x1a] + 0xc);
      *(float *)pauVar13[0x1a] = fVar25 + *(float *)pauVar13[0x1a];
      *(float *)(pauVar13[0x1a] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[0x1a] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[0x1a] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[0x1b] + 4);
      fVar143 = *(float *)(pauVar13[0x1b] + 8);
      fVar26 = *(float *)(pauVar13[0x1b] + 0xc);
      *(float *)pauVar13[0x1b] = fVar25 + *(float *)pauVar13[0x1b];
      *(float *)(pauVar13[0x1b] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[0x1b] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[0x1b] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[0x1c] + 4);
      fVar143 = *(float *)(pauVar13[0x1c] + 8);
      fVar26 = *(float *)(pauVar13[0x1c] + 0xc);
      *(float *)pauVar13[0x1c] = fVar25 + *(float *)pauVar13[0x1c];
      *(float *)(pauVar13[0x1c] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[0x1c] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[0x1c] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[0x1d] + 4);
      fVar143 = *(float *)(pauVar13[0x1d] + 8);
      fVar26 = *(float *)(pauVar13[0x1d] + 0xc);
      *(float *)pauVar13[0x1d] = fVar25 + *(float *)pauVar13[0x1d];
      *(float *)(pauVar13[0x1d] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[0x1d] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[0x1d] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[0x1e] + 4);
      fVar143 = *(float *)(pauVar13[0x1e] + 8);
      fVar26 = *(float *)(pauVar13[0x1e] + 0xc);
      *(float *)pauVar13[0x1e] = fVar25 + *(float *)pauVar13[0x1e];
      *(float *)(pauVar13[0x1e] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[0x1e] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[0x1e] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[0x1f] + 4);
      fVar143 = *(float *)(pauVar13[0x1f] + 8);
      fVar26 = *(float *)(pauVar13[0x1f] + 0xc);
      *(float *)pauVar13[0x1f] = fVar25 + *(float *)pauVar13[0x1f];
      *(float *)(pauVar13[0x1f] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[0x1f] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[0x1f] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[0x20] + 4);
      fVar143 = *(float *)(pauVar13[0x20] + 8);
      fVar26 = *(float *)(pauVar13[0x20] + 0xc);
      *(float *)pauVar13[0x20] = fVar25 + *(float *)pauVar13[0x20];
      *(float *)(pauVar13[0x20] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[0x20] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[0x20] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[0x21] + 4);
      fVar143 = *(float *)(pauVar13[0x21] + 8);
      fVar26 = *(float *)(pauVar13[0x21] + 0xc);
      *(float *)pauVar13[0x21] = fVar25 + *(float *)pauVar13[0x21];
      *(float *)(pauVar13[0x21] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[0x21] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[0x21] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[0x22] + 4);
      fVar143 = *(float *)(pauVar13[0x22] + 8);
      fVar26 = *(float *)(pauVar13[0x22] + 0xc);
      *(float *)pauVar13[0x22] = fVar25 + *(float *)pauVar13[0x22];
      *(float *)(pauVar13[0x22] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[0x22] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[0x22] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[0x23] + 4);
      fVar143 = *(float *)(pauVar13[0x23] + 8);
      fVar26 = *(float *)(pauVar13[0x23] + 0xc);
      *(float *)pauVar13[0x23] = fVar25 + *(float *)pauVar13[0x23];
      *(float *)(pauVar13[0x23] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[0x23] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[0x23] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[0x24] + 4);
      fVar143 = *(float *)(pauVar13[0x24] + 8);
      fVar26 = *(float *)(pauVar13[0x24] + 0xc);
      *(float *)pauVar13[0x24] = fVar25 + *(float *)pauVar13[0x24];
      *(float *)(pauVar13[0x24] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[0x24] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[0x24] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[0x25] + 4);
      fVar143 = *(float *)(pauVar13[0x25] + 8);
      fVar26 = *(float *)(pauVar13[0x25] + 0xc);
      *(float *)pauVar13[0x25] = fVar25 + *(float *)pauVar13[0x25];
      *(float *)(pauVar13[0x25] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[0x25] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[0x25] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[0x26] + 4);
      fVar143 = *(float *)(pauVar13[0x26] + 8);
      fVar26 = *(float *)(pauVar13[0x26] + 0xc);
      *(float *)pauVar13[0x26] = fVar25 + *(float *)pauVar13[0x26];
      *(float *)(pauVar13[0x26] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[0x26] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[0x26] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[0x27] + 4);
      fVar143 = *(float *)(pauVar13[0x27] + 8);
      fVar26 = *(float *)(pauVar13[0x27] + 0xc);
      *(float *)pauVar13[0x27] = fVar25 + *(float *)pauVar13[0x27];
      *(float *)(pauVar13[0x27] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[0x27] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[0x27] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[0x28] + 4);
      fVar143 = *(float *)(pauVar13[0x28] + 8);
      fVar26 = *(float *)(pauVar13[0x28] + 0xc);
      *(float *)pauVar13[0x28] = fVar25 + *(float *)pauVar13[0x28];
      *(float *)(pauVar13[0x28] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[0x28] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[0x28] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[0x29] + 4);
      fVar143 = *(float *)(pauVar13[0x29] + 8);
      fVar26 = *(float *)(pauVar13[0x29] + 0xc);
      *(float *)pauVar13[0x29] = fVar25 + *(float *)pauVar13[0x29];
      *(float *)(pauVar13[0x29] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[0x29] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[0x29] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[0x2a] + 4);
      fVar143 = *(float *)(pauVar13[0x2a] + 8);
      fVar26 = *(float *)(pauVar13[0x2a] + 0xc);
      *(float *)pauVar13[0x2a] = fVar25 + *(float *)pauVar13[0x2a];
      *(float *)(pauVar13[0x2a] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[0x2a] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[0x2a] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[0x2b] + 4);
      fVar143 = *(float *)(pauVar13[0x2b] + 8);
      fVar26 = *(float *)(pauVar13[0x2b] + 0xc);
      *(float *)pauVar13[0x2b] = fVar25 + *(float *)pauVar13[0x2b];
      *(float *)(pauVar13[0x2b] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[0x2b] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[0x2b] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[0x2c] + 4);
      fVar143 = *(float *)(pauVar13[0x2c] + 8);
      fVar26 = *(float *)(pauVar13[0x2c] + 0xc);
      *(float *)pauVar13[0x2c] = fVar25 + *(float *)pauVar13[0x2c];
      *(float *)(pauVar13[0x2c] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[0x2c] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[0x2c] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[0x2d] + 4);
      fVar143 = *(float *)(pauVar13[0x2d] + 8);
      fVar26 = *(float *)(pauVar13[0x2d] + 0xc);
      *(float *)pauVar13[0x2d] = fVar25 + *(float *)pauVar13[0x2d];
      *(float *)(pauVar13[0x2d] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[0x2d] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[0x2d] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[0x2e] + 4);
      fVar143 = *(float *)(pauVar13[0x2e] + 8);
      fVar26 = *(float *)(pauVar13[0x2e] + 0xc);
      *(float *)pauVar13[0x2e] = fVar25 + *(float *)pauVar13[0x2e];
      *(float *)(pauVar13[0x2e] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[0x2e] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[0x2e] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[0x2f] + 4);
      fVar143 = *(float *)(pauVar13[0x2f] + 8);
      fVar26 = *(float *)(pauVar13[0x2f] + 0xc);
      *(float *)pauVar13[0x2f] = fVar25 + *(float *)pauVar13[0x2f];
      *(float *)(pauVar13[0x2f] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[0x2f] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[0x2f] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[0x30] + 4);
      fVar143 = *(float *)(pauVar13[0x30] + 8);
      fVar26 = *(float *)(pauVar13[0x30] + 0xc);
      *(float *)pauVar13[0x30] = fVar25 + *(float *)pauVar13[0x30];
      *(float *)(pauVar13[0x30] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[0x30] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[0x30] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[0x31] + 4);
      fVar143 = *(float *)(pauVar13[0x31] + 8);
      fVar26 = *(float *)(pauVar13[0x31] + 0xc);
      *(float *)pauVar13[0x31] = fVar25 + *(float *)pauVar13[0x31];
      *(float *)(pauVar13[0x31] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[0x31] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[0x31] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[0x32] + 4);
      fVar143 = *(float *)(pauVar13[0x32] + 8);
      fVar26 = *(float *)(pauVar13[0x32] + 0xc);
      *(float *)pauVar13[0x32] = fVar25 + *(float *)pauVar13[0x32];
      *(float *)(pauVar13[0x32] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[0x32] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[0x32] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[0x33] + 4);
      fVar143 = *(float *)(pauVar13[0x33] + 8);
      fVar26 = *(float *)(pauVar13[0x33] + 0xc);
      *(float *)pauVar13[0x33] = fVar25 + *(float *)pauVar13[0x33];
      *(float *)(pauVar13[0x33] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[0x33] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[0x33] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[0x34] + 4);
      fVar143 = *(float *)(pauVar13[0x34] + 8);
      fVar26 = *(float *)(pauVar13[0x34] + 0xc);
      *(float *)pauVar13[0x34] = fVar25 + *(float *)pauVar13[0x34];
      *(float *)(pauVar13[0x34] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[0x34] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[0x34] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[0x35] + 4);
      fVar143 = *(float *)(pauVar13[0x35] + 8);
      fVar26 = *(float *)(pauVar13[0x35] + 0xc);
      *(float *)pauVar13[0x35] = fVar25 + *(float *)pauVar13[0x35];
      *(float *)(pauVar13[0x35] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[0x35] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[0x35] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[0x36] + 4);
      fVar143 = *(float *)(pauVar13[0x36] + 8);
      fVar26 = *(float *)(pauVar13[0x36] + 0xc);
      *(float *)pauVar13[0x36] = fVar25 + *(float *)pauVar13[0x36];
      *(float *)(pauVar13[0x36] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[0x36] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[0x36] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[0x37] + 4);
      fVar143 = *(float *)(pauVar13[0x37] + 8);
      fVar26 = *(float *)(pauVar13[0x37] + 0xc);
      *(float *)pauVar13[0x37] = fVar25 + *(float *)pauVar13[0x37];
      *(float *)(pauVar13[0x37] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[0x37] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[0x37] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[0x38] + 4);
      fVar143 = *(float *)(pauVar13[0x38] + 8);
      fVar26 = *(float *)(pauVar13[0x38] + 0xc);
      *(float *)pauVar13[0x38] = fVar25 + *(float *)pauVar13[0x38];
      *(float *)(pauVar13[0x38] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[0x38] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[0x38] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[0x39] + 4);
      fVar143 = *(float *)(pauVar13[0x39] + 8);
      fVar26 = *(float *)(pauVar13[0x39] + 0xc);
      *(float *)pauVar13[0x39] = fVar25 + *(float *)pauVar13[0x39];
      *(float *)(pauVar13[0x39] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[0x39] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[0x39] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[0x3a] + 4);
      fVar143 = *(float *)(pauVar13[0x3a] + 8);
      fVar26 = *(float *)(pauVar13[0x3a] + 0xc);
      *(float *)pauVar13[0x3a] = fVar25 + *(float *)pauVar13[0x3a];
      *(float *)(pauVar13[0x3a] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[0x3a] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[0x3a] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[0x3b] + 4);
      fVar143 = *(float *)(pauVar13[0x3b] + 8);
      fVar26 = *(float *)(pauVar13[0x3b] + 0xc);
      *(float *)pauVar13[0x3b] = fVar25 + *(float *)pauVar13[0x3b];
      *(float *)(pauVar13[0x3b] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[0x3b] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[0x3b] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[0x3c] + 4);
      fVar143 = *(float *)(pauVar13[0x3c] + 8);
      fVar26 = *(float *)(pauVar13[0x3c] + 0xc);
      *(float *)pauVar13[0x3c] = fVar25 + *(float *)pauVar13[0x3c];
      *(float *)(pauVar13[0x3c] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[0x3c] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[0x3c] + 0xc) = fVar25 + fVar26;
      fVar142 = *(float *)(pauVar13[0x3d] + 4);
      fVar143 = *(float *)(pauVar13[0x3d] + 8);
      fVar26 = *(float *)(pauVar13[0x3d] + 0xc);
      *(float *)pauVar13[0x3d] = fVar25 + *(float *)pauVar13[0x3d];
      *(float *)(pauVar13[0x3d] + 4) = fVar25 + fVar142;
      *(float *)(pauVar13[0x3d] + 8) = fVar25 + fVar143;
      *(float *)(pauVar13[0x3d] + 0xc) = fVar25 + fVar26;
      auVar135._0_4_ = fVar25 + *(float *)pauVar13[0x3e];
      auVar135._4_4_ = fVar25 + *(float *)(pauVar13[0x3e] + 4);
      auVar135._8_4_ = fVar25 + *(float *)(pauVar13[0x3e] + 8);
      auVar135._12_4_ = fVar25 + *(float *)(pauVar13[0x3e] + 0xc);
      pauVar13[0x3e] = auVar135;
      auVar33._0_4_ = fVar25 + *(float *)pauVar13[0x3f];
      auVar33._4_4_ = fVar25 + *(float *)(pauVar13[0x3f] + 4);
      auVar33._8_4_ = fVar25 + *(float *)(pauVar13[0x3f] + 8);
      auVar33._12_4_ = fVar25 + *(float *)(pauVar13[0x3f] + 0xc);
      goto code_r0x00014004328f;
    }
    goto LAB_140045d9a;
  case 0xc:
    uVar6 = *(undefined2 *)((longlong)param_1 + 0x276);
    uVar11 = *(undefined8 *)(param_1 + 2);
    uVar17 = (ulonglong)*(byte *)((longlong)puVar20 + 2);
    auVar74._0_8_ = func_0x0001455d59d0(uVar11,uVar6,(short)puVar20[1],afStack_368);
    auVar74._8_56_ = extraout_var_35;
    auVar153 = ZEXT1664(auVar74._0_16_);
    puVar19 = puVar20 + 2;
    fVar25 = (float)func_0x0001455d59d0(uVar11,uVar6,*(undefined2 *)((longlong)puVar20 + 6),
                                        afStack_368);
    fVar25 = fVar25 + auVar153._0_4_;
    break;
  case 0xd:
    puVar19 = (uint *)((longlong)puVar20 + 6);
    lVar12 = *(longlong *)(auStack_2a8 + (ulonglong)*(byte *)((longlong)puVar20 + 2) * 8);
    if ((lVar12 != 0) &&
       (lVar18 = *(longlong *)(auStack_2a8 + (ulonglong)(byte)puVar20[1] * 8), lVar18 != 0)) {
      lVar15 = 0;
      do {
        auVar31 = vsubps_avx(*(undefined1 (*) [16])(lVar12 + lVar15),
                             *(undefined1 (*) [16])(lVar18 + lVar15));
        *(undefined1 (*) [16])(lVar12 + lVar15) = auVar31;
        lVar15 = lVar15 + 0x10;
      } while ((int)lVar15 != 0x400);
    }
    goto LAB_140045d9a;
  case 0xe:
    bVar8 = *(byte *)((longlong)puVar20 + 2);
    puVar19 = (uint *)((longlong)puVar20 + 6);
    auVar32._0_4_ =
         func_0x0001455d59d0(*(undefined8 *)(param_1 + 2),*(undefined2 *)((longlong)param_1 + 0x276)
                             ,(short)puVar20[1],afStack_368);
    pauVar13 = *(undefined1 (**) [16])(auStack_2a8 + (ulonglong)bVar8 * 8);
    if (pauVar13 != (undefined1 (*) [16])0x0) {
      auVar32._4_4_ = auVar32._0_4_;
      auVar32._8_4_ = auVar32._0_4_;
      auVar32._12_4_ = auVar32._0_4_;
      auVar31 = vsubps_avx(*pauVar13,auVar32);
      *pauVar13 = auVar31;
      auVar31 = vsubps_avx(pauVar13[1],auVar32);
      pauVar13[1] = auVar31;
      auVar31 = vsubps_avx(pauVar13[2],auVar32);
      pauVar13[2] = auVar31;
      auVar31 = vsubps_avx(pauVar13[3],auVar32);
      pauVar13[3] = auVar31;
      auVar31 = vsubps_avx(pauVar13[4],auVar32);
      pauVar13[4] = auVar31;
      auVar31 = vsubps_avx(pauVar13[5],auVar32);
      pauVar13[5] = auVar31;
      auVar31 = vsubps_avx(pauVar13[6],auVar32);
      pauVar13[6] = auVar31;
      auVar31 = vsubps_avx(pauVar13[7],auVar32);
      pauVar13[7] = auVar31;
      auVar31 = vsubps_avx(pauVar13[8],auVar32);
      pauVar13[8] = auVar31;
      auVar31 = vsubps_avx(pauVar13[9],auVar32);
      pauVar13[9] = auVar31;
      auVar31 = vsubps_avx(pauVar13[10],auVar32);
      pauVar13[10] = auVar31;
      auVar31 = vsubps_avx(pauVar13[0xb],auVar32);
      pauVar13[0xb] = auVar31;
      auVar31 = vsubps_avx(pauVar13[0xc],auVar32);
      pauVar13[0xc] = auVar31;
      auVar31 = vsubps_avx(pauVar13[0xd],auVar32);
      pauVar13[0xd] = auVar31;
      auVar31 = vsubps_avx(pauVar13[0xe],auVar32);
      pauVar13[0xe] = auVar31;
      auVar31 = vsubps_avx(pauVar13[0xf],auVar32);
      pauVar13[0xf] = auVar31;
      auVar31 = vsubps_avx(pauVar13[0x10],auVar32);
      pauVar13[0x10] = auVar31;
      auVar31 = vsubps_avx(pauVar13[0x11],auVar32);
      pauVar13[0x11] = auVar31;
      auVar31 = vsubps_avx(pauVar13[0x12],auVar32);
      pauVar13[0x12] = auVar31;
      auVar31 = vsubps_avx(pauVar13[0x13],auVar32);
      pauVar13[0x13] = auVar31;
      auVar31 = vsubps_avx(pauVar13[0x14],auVar32);
      pauVar13[0x14] = auVar31;
      auVar31 = vsubps_avx(pauVar13[0x15],auVar32);
      pauVar13[0x15] = auVar31;
      auVar31 = vsubps_avx(pauVar13[0x16],auVar32);
      pauVar13[0x16] = auVar31;
      auVar31 = vsubps_avx(pauVar13[0x17],auVar32);
      pauVar13[0x17] = auVar31;
      auVar31 = vsubps_avx(pauVar13[0x18],auVar32);
      pauVar13[0x18] = auVar31;
      auVar31 = vsubps_avx(pauVar13[0x19],auVar32);
      pauVar13[0x19] = auVar31;
      auVar31 = vsubps_avx(pauVar13[0x1a],auVar32);
      pauVar13[0x1a] = auVar31;
      auVar31 = vsubps_avx(pauVar13[0x1b],auVar32);
      pauVar13[0x1b] = auVar31;
      auVar31 = vsubps_avx(pauVar13[0x1c],auVar32);
      pauVar13[0x1c] = auVar31;
      auVar31 = vsubps_avx(pauVar13[0x1d],auVar32);
      pauVar13[0x1d] = auVar31;
      auVar31 = vsubps_avx(pauVar13[0x1e],auVar32);
      pauVar13[0x1e] = auVar31;
      auVar31 = vsubps_avx(pauVar13[0x1f],auVar32);
      pauVar13[0x1f] = auVar31;
      auVar31 = vsubps_avx(pauVar13[0x20],auVar32);
      pauVar13[0x20] = auVar31;
      auVar31 = vsubps_avx(pauVar13[0x21],auVar32);
      pauVar13[0x21] = auVar31;
      auVar31 = vsubps_avx(pauVar13[0x22],auVar32);
      pauVar13[0x22] = auVar31;
      auVar31 = vsubps_avx(pauVar13[0x23],auVar32);
      pauVar13[0x23] = auVar31;
      auVar31 = vsubps_avx(pauVar13[0x24],auVar32);
      pauVar13[0x24] = auVar31;
      auVar31 = vsubps_avx(pauVar13[0x25],auVar32);
      pauVar13[0x25] = auVar31;
      auVar31 = vsubps_avx(pauVar13[0x26],auVar32);
      pauVar13[0x26] = auVar31;
      auVar31 = vsubps_avx(pauVar13[0x27],auVar32);
      pauVar13[0x27] = auVar31;
      auVar31 = vsubps_avx(pauVar13[0x28],auVar32);
      pauVar13[0x28] = auVar31;
      auVar31 = vsubps_avx(pauVar13[0x29],auVar32);
      pauVar13[0x29] = auVar31;
      auVar31 = vsubps_avx(pauVar13[0x2a],auVar32);
      pauVar13[0x2a] = auVar31;
      auVar31 = vsubps_avx(pauVar13[0x2b],auVar32);
      pauVar13[0x2b] = auVar31;
      auVar31 = vsubps_avx(pauVar13[0x2c],auVar32);
      pauVar13[0x2c] = auVar31;
      auVar31 = vsubps_avx(pauVar13[0x2d],auVar32);
      pauVar13[0x2d] = auVar31;
      auVar31 = vsubps_avx(pauVar13[0x2e],auVar32);
      pauVar13[0x2e] = auVar31;
      auVar31 = vsubps_avx(pauVar13[0x2f],auVar32);
      pauVar13[0x2f] = auVar31;
      auVar31 = vsubps_avx(pauVar13[0x30],auVar32);
      pauVar13[0x30] = auVar31;
      auVar31 = vsubps_avx(pauVar13[0x31],auVar32);
      pauVar13[0x31] = auVar31;
      auVar31 = vsubps_avx(pauVar13[0x32],auVar32);
      pauVar13[0x32] = auVar31;
      auVar31 = vsubps_avx(pauVar13[0x33],auVar32);
      pauVar13[0x33] = auVar31;
      auVar31 = vsubps_avx(pauVar13[0x34],auVar32);
      pauVar13[0x34] = auVar31;
      auVar31 = vsubps_avx(pauVar13[0x35],auVar32);
      pauVar13[0x35] = auVar31;
      auVar31 = vsubps_avx(pauVar13[0x36],auVar32);
      pauVar13[0x36] = auVar31;
      auVar31 = vsubps_avx(pauVar13[0x37],auVar32);
      pauVar13[0x37] = auVar31;
      auVar31 = vsubps_avx(pauVar13[0x38],auVar32);
      pauVar13[0x38] = auVar31;
      auVar31 = vsubps_avx(pauVar13[0x39],auVar32);
      pauVar13[0x39] = auVar31;
      auVar31 = vsubps_avx(pauVar13[0x3a],auVar32);
      pauVar13[0x3a] = auVar31;
      auVar31 = vsubps_avx(pauVar13[0x3b],auVar32);
      pauVar13[0x3b] = auVar31;
      auVar31 = vsubps_avx(pauVar13[0x3c],auVar32);
      pauVar13[0x3c] = auVar31;
      auVar31 = vsubps_avx(pauVar13[0x3d],auVar32);
      pauVar13[0x3d] = auVar31;
      auVar31 = vsubps_avx(pauVar13[0x3e],auVar32);
      pauVar13[0x3e] = auVar31;
      auVar33 = vsubps_avx(pauVar13[0x3f],auVar32);
code_r0x00014004328f:
      pauVar13[0x3f] = auVar33;
    }
    goto LAB_140045d9a;
  case 0xf:
    bVar8 = *(byte *)((longlong)puVar20 + 2);
    auVar34._0_4_ =
         func_0x0001455d59d0(*(undefined8 *)(param_1 + 2),*(undefined2 *)((longlong)param_1 + 0x276)
                             ,(short)puVar20[1],afStack_368);
    pauVar13 = *(undefined1 (**) [16])(auStack_2a8 + (ulonglong)bVar8 * 8);
    auVar34._4_4_ = auVar34._0_4_;
    auVar34._8_4_ = auVar34._0_4_;
    auVar34._12_4_ = auVar34._0_4_;
    auVar31 = vsubps_avx(auVar34,*pauVar13);
    *pauVar13 = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[1]);
    pauVar13[1] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[2]);
    pauVar13[2] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[3]);
    pauVar13[3] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[4]);
    pauVar13[4] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[5]);
    pauVar13[5] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[6]);
    pauVar13[6] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[7]);
    pauVar13[7] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[8]);
    pauVar13[8] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[9]);
    pauVar13[9] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[10]);
    pauVar13[10] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[0xb]);
    pauVar13[0xb] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[0xc]);
    pauVar13[0xc] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[0xd]);
    pauVar13[0xd] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[0xe]);
    pauVar13[0xe] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[0xf]);
    pauVar13[0xf] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[0x10]);
    pauVar13[0x10] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[0x11]);
    pauVar13[0x11] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[0x12]);
    pauVar13[0x12] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[0x13]);
    pauVar13[0x13] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[0x14]);
    pauVar13[0x14] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[0x15]);
    pauVar13[0x15] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[0x16]);
    pauVar13[0x16] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[0x17]);
    pauVar13[0x17] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[0x18]);
    pauVar13[0x18] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[0x19]);
    pauVar13[0x19] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[0x1a]);
    pauVar13[0x1a] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[0x1b]);
    pauVar13[0x1b] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[0x1c]);
    pauVar13[0x1c] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[0x1d]);
    pauVar13[0x1d] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[0x1e]);
    pauVar13[0x1e] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[0x1f]);
    pauVar13[0x1f] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[0x20]);
    pauVar13[0x20] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[0x21]);
    pauVar13[0x21] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[0x22]);
    pauVar13[0x22] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[0x23]);
    pauVar13[0x23] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[0x24]);
    pauVar13[0x24] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[0x25]);
    pauVar13[0x25] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[0x26]);
    pauVar13[0x26] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[0x27]);
    pauVar13[0x27] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[0x28]);
    pauVar13[0x28] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[0x29]);
    pauVar13[0x29] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[0x2a]);
    pauVar13[0x2a] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[0x2b]);
    pauVar13[0x2b] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[0x2c]);
    pauVar13[0x2c] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[0x2d]);
    pauVar13[0x2d] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[0x2e]);
    pauVar13[0x2e] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[0x2f]);
    pauVar13[0x2f] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[0x30]);
    pauVar13[0x30] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[0x31]);
    pauVar13[0x31] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[0x32]);
    pauVar13[0x32] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[0x33]);
    pauVar13[0x33] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[0x34]);
    pauVar13[0x34] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[0x35]);
    pauVar13[0x35] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[0x36]);
    pauVar13[0x36] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[0x37]);
    pauVar13[0x37] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[0x38]);
    pauVar13[0x38] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[0x39]);
    pauVar13[0x39] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[0x3a]);
    pauVar13[0x3a] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[0x3b]);
    pauVar13[0x3b] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[0x3c]);
    pauVar13[0x3c] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[0x3d]);
    pauVar13[0x3d] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[0x3e]);
    pauVar13[0x3e] = auVar31;
    auVar31 = vsubps_avx(auVar34,pauVar13[0x3f]);
    pauVar13[0x3f] = auVar31;
    puVar19 = puVar20 + 2;
    goto LAB_140045d9a;
  case 0x10:
    uVar6 = *(undefined2 *)((longlong)param_1 + 0x276);
    uVar11 = *(undefined8 *)(param_1 + 2);
    uVar17 = (ulonglong)*(byte *)((longlong)puVar20 + 2);
    auVar70._0_8_ = func_0x0001455d59d0(uVar11,uVar6,(short)puVar20[1],afStack_368);
    auVar70._8_56_ = extraout_var_31;
    auVar153 = ZEXT1664(auVar70._0_16_);
    puVar19 = puVar20 + 2;
    fVar25 = (float)func_0x0001455d59d0(uVar11,uVar6,*(undefined2 *)((longlong)puVar20 + 6),
                                        afStack_368);
    fVar25 = auVar153._0_4_ - fVar25;
    break;
  case 0x11:
    puVar19 = (uint *)((longlong)puVar20 + 6);
    lVar12 = *(longlong *)(auStack_2a8 + (ulonglong)*(byte *)((longlong)puVar20 + 2) * 8);
    if ((lVar12 != 0) &&
       (lVar18 = *(longlong *)(auStack_2a8 + (ulonglong)(byte)puVar20[1] * 8), lVar18 != 0)) {
      lVar15 = 0;
      do {
        auVar31 = *(undefined1 (*) [16])(lVar18 + lVar15);
        auVar133 = vrcpps_avx(auVar31);
        auVar146._0_4_ = (uint)auVar31._0_4_ ^ _DAT_145fc6f10;
        auVar146._4_4_ = (uint)auVar31._4_4_ ^ _DAT_145fc6f10;
        auVar146._8_4_ = (uint)auVar31._8_4_ ^ _DAT_145fc6f10;
        auVar146._12_4_ = (uint)auVar31._12_4_ ^ _DAT_145fc6f10;
        fVar25 = auVar133._0_4_;
        fVar142 = auVar133._4_4_;
        fVar143 = auVar133._8_4_;
        fVar26 = auVar133._12_4_;
        auVar133 = vcmpps_avx(auVar31,auVar146,4);
        pfVar7 = (float *)(lVar12 + lVar15);
        auVar36._0_4_ =
             auVar133._0_4_ &
             (uint)((-((auVar31._0_4_ * fVar25 - _DAT_145fc6ed8) * fVar25) + fVar25) * *pfVar7);
        auVar36._4_4_ =
             auVar133._4_4_ &
             (uint)((-((auVar31._4_4_ * fVar142 - _DAT_145fc6ed8) * fVar142) + fVar142) * pfVar7[1])
        ;
        auVar36._8_4_ =
             auVar133._8_4_ &
             (uint)((-((auVar31._8_4_ * fVar143 - _DAT_145fc6ed8) * fVar143) + fVar143) * pfVar7[2])
        ;
        auVar36._12_4_ =
             auVar133._12_4_ &
             (uint)((-((auVar31._12_4_ * fVar26 - _DAT_145fc6ed8) * fVar26) + fVar26) * pfVar7[3]);
        *(undefined1 (*) [16])(lVar12 + lVar15) = auVar36;
        lVar15 = lVar15 + 0x10;
      } while ((int)lVar15 != 0x400);
    }
    goto LAB_140045d9a;
  case 0x12:
    puVar19 = (uint *)((longlong)puVar20 + 6);
    pfVar7 = *(float **)(auStack_2a8 + (ulonglong)*(byte *)((longlong)puVar20 + 2) * 8);
    if (pfVar7 != (float *)0x0) {
      auVar37._0_4_ =
           (float)func_0x0001455d59d0(*(undefined8 *)(param_1 + 2),
                                      *(undefined2 *)((longlong)param_1 + 0x276),(short)puVar20[1],
                                      afStack_368);
      auVar152._4_4_ = _DAT_145fc6ed8;
      auVar152._0_4_ = _DAT_145fc6ed8;
      auVar152._8_4_ = _DAT_145fc6ed8;
      auVar152._12_4_ = _DAT_145fc6ed8;
      auVar37._4_4_ = auVar37._0_4_;
      auVar37._8_4_ = auVar37._0_4_;
      auVar37._12_4_ = auVar37._0_4_;
      auVar31 = vrcpps_avx(auVar37);
      fVar142 = auVar31._0_4_;
      fVar143 = auVar31._4_4_;
      fVar26 = auVar31._8_4_;
      fVar25 = auVar31._12_4_;
      auVar147._0_4_ = (uint)auVar37._0_4_ ^ _DAT_145fc6f10;
      auVar147._4_4_ = (uint)auVar37._0_4_ ^ _DAT_145fc6f10;
      auVar147._8_4_ = (uint)auVar37._0_4_ ^ _DAT_145fc6f10;
      auVar147._12_4_ = (uint)auVar37._0_4_ ^ _DAT_145fc6f10;
      auVar31 = vcmpps_avx(auVar37,auVar147,4);
      auVar38._0_4_ =
           (float)(auVar31._0_4_ &
                  (uint)(-((auVar37._0_4_ * fVar142 - _DAT_145fc6ed8) * fVar142) + fVar142));
      auVar38._4_4_ =
           (float)(auVar31._4_4_ &
                  (uint)(-((auVar37._0_4_ * fVar143 - _DAT_145fc6ed8) * fVar143) + fVar143));
      auVar38._8_4_ =
           (float)(auVar31._8_4_ &
                  (uint)(-((auVar37._0_4_ * fVar26 - _DAT_145fc6ed8) * fVar26) + fVar26));
      auVar38._12_4_ =
           (float)(auVar31._12_4_ &
                  (uint)(-((auVar37._0_4_ * fVar25 - _DAT_145fc6ed8) * fVar25) + fVar25));
      auVar31 = vcmpps_avx(auVar38,auVar152,4);
      if ((((SUB161(auVar31 >> 0x1f,0) & 1) != 0 || (SUB161(auVar31 >> 0x3f,0) & 1) != 0) ||
          (SUB161(auVar31 >> 0x5f,0) & 1) != 0) || auVar31[0xf] < '\0') {
        auVar31 = vcmpps_avx(auVar38,ZEXT816(0) << 0x20,4);
        if ((((SUB161(auVar31 >> 0x1f,0) & 1) == 0 && (SUB161(auVar31 >> 0x3f,0) & 1) == 0) &&
            (SUB161(auVar31 >> 0x5f,0) & 1) == 0) && -1 < auVar31[0xf]) {
          func_0x000144d9f6c0(pfVar7);
        }
        else {
          *pfVar7 = auVar38._0_4_ * *pfVar7;
          pfVar7[1] = auVar38._4_4_ * pfVar7[1];
          pfVar7[2] = auVar38._8_4_ * pfVar7[2];
          pfVar7[3] = auVar38._12_4_ * pfVar7[3];
          pfVar7[4] = auVar38._0_4_ * pfVar7[4];
          pfVar7[5] = auVar38._4_4_ * pfVar7[5];
          pfVar7[6] = auVar38._8_4_ * pfVar7[6];
          pfVar7[7] = auVar38._12_4_ * pfVar7[7];
          pfVar7[8] = auVar38._0_4_ * pfVar7[8];
          pfVar7[9] = auVar38._4_4_ * pfVar7[9];
          pfVar7[10] = auVar38._8_4_ * pfVar7[10];
          pfVar7[0xb] = auVar38._12_4_ * pfVar7[0xb];
          pfVar7[0xc] = auVar38._0_4_ * pfVar7[0xc];
          pfVar7[0xd] = auVar38._4_4_ * pfVar7[0xd];
          pfVar7[0xe] = auVar38._8_4_ * pfVar7[0xe];
          pfVar7[0xf] = auVar38._12_4_ * pfVar7[0xf];
          pfVar7[0x10] = auVar38._0_4_ * pfVar7[0x10];
          pfVar7[0x11] = auVar38._4_4_ * pfVar7[0x11];
          pfVar7[0x12] = auVar38._8_4_ * pfVar7[0x12];
          pfVar7[0x13] = auVar38._12_4_ * pfVar7[0x13];
          pfVar7[0x14] = auVar38._0_4_ * pfVar7[0x14];
          pfVar7[0x15] = auVar38._4_4_ * pfVar7[0x15];
          pfVar7[0x16] = auVar38._8_4_ * pfVar7[0x16];
          pfVar7[0x17] = auVar38._12_4_ * pfVar7[0x17];
          pfVar7[0x18] = auVar38._0_4_ * pfVar7[0x18];
          pfVar7[0x19] = auVar38._4_4_ * pfVar7[0x19];
          pfVar7[0x1a] = auVar38._8_4_ * pfVar7[0x1a];
          pfVar7[0x1b] = auVar38._12_4_ * pfVar7[0x1b];
          pfVar7[0x1c] = auVar38._0_4_ * pfVar7[0x1c];
          pfVar7[0x1d] = auVar38._4_4_ * pfVar7[0x1d];
          pfVar7[0x1e] = auVar38._8_4_ * pfVar7[0x1e];
          pfVar7[0x1f] = auVar38._12_4_ * pfVar7[0x1f];
          pfVar7[0x20] = auVar38._0_4_ * pfVar7[0x20];
          pfVar7[0x21] = auVar38._4_4_ * pfVar7[0x21];
          pfVar7[0x22] = auVar38._8_4_ * pfVar7[0x22];
          pfVar7[0x23] = auVar38._12_4_ * pfVar7[0x23];
          pfVar7[0x24] = auVar38._0_4_ * pfVar7[0x24];
          pfVar7[0x25] = auVar38._4_4_ * pfVar7[0x25];
          pfVar7[0x26] = auVar38._8_4_ * pfVar7[0x26];
          pfVar7[0x27] = auVar38._12_4_ * pfVar7[0x27];
          pfVar7[0x28] = auVar38._0_4_ * pfVar7[0x28];
          pfVar7[0x29] = auVar38._4_4_ * pfVar7[0x29];
          pfVar7[0x2a] = auVar38._8_4_ * pfVar7[0x2a];
          pfVar7[0x2b] = auVar38._12_4_ * pfVar7[0x2b];
          pfVar7[0x2c] = auVar38._0_4_ * pfVar7[0x2c];
          pfVar7[0x2d] = auVar38._4_4_ * pfVar7[0x2d];
          pfVar7[0x2e] = auVar38._8_4_ * pfVar7[0x2e];
          pfVar7[0x2f] = auVar38._12_4_ * pfVar7[0x2f];
          pfVar7[0x30] = auVar38._0_4_ * pfVar7[0x30];
          pfVar7[0x31] = auVar38._4_4_ * pfVar7[0x31];
          pfVar7[0x32] = auVar38._8_4_ * pfVar7[0x32];
          pfVar7[0x33] = auVar38._12_4_ * pfVar7[0x33];
          pfVar7[0x34] = auVar38._0_4_ * pfVar7[0x34];
          pfVar7[0x35] = auVar38._4_4_ * pfVar7[0x35];
          pfVar7[0x36] = auVar38._8_4_ * pfVar7[0x36];
          pfVar7[0x37] = auVar38._12_4_ * pfVar7[0x37];
          pfVar7[0x38] = auVar38._0_4_ * pfVar7[0x38];
          pfVar7[0x39] = auVar38._4_4_ * pfVar7[0x39];
          pfVar7[0x3a] = auVar38._8_4_ * pfVar7[0x3a];
          pfVar7[0x3b] = auVar38._12_4_ * pfVar7[0x3b];
          pfVar7[0x3c] = auVar38._0_4_ * pfVar7[0x3c];
          pfVar7[0x3d] = auVar38._4_4_ * pfVar7[0x3d];
          pfVar7[0x3e] = auVar38._8_4_ * pfVar7[0x3e];
          pfVar7[0x3f] = auVar38._12_4_ * pfVar7[0x3f];
          pfVar7[0x40] = auVar38._0_4_ * pfVar7[0x40];
          pfVar7[0x41] = auVar38._4_4_ * pfVar7[0x41];
          pfVar7[0x42] = auVar38._8_4_ * pfVar7[0x42];
          pfVar7[0x43] = auVar38._12_4_ * pfVar7[0x43];
          pfVar7[0x44] = auVar38._0_4_ * pfVar7[0x44];
          pfVar7[0x45] = auVar38._4_4_ * pfVar7[0x45];
          pfVar7[0x46] = auVar38._8_4_ * pfVar7[0x46];
          pfVar7[0x47] = auVar38._12_4_ * pfVar7[0x47];
          pfVar7[0x48] = auVar38._0_4_ * pfVar7[0x48];
          pfVar7[0x49] = auVar38._4_4_ * pfVar7[0x49];
          pfVar7[0x4a] = auVar38._8_4_ * pfVar7[0x4a];
          pfVar7[0x4b] = auVar38._12_4_ * pfVar7[0x4b];
          pfVar7[0x4c] = auVar38._0_4_ * pfVar7[0x4c];
          pfVar7[0x4d] = auVar38._4_4_ * pfVar7[0x4d];
          pfVar7[0x4e] = auVar38._8_4_ * pfVar7[0x4e];
          pfVar7[0x4f] = auVar38._12_4_ * pfVar7[0x4f];
          pfVar7[0x50] = auVar38._0_4_ * pfVar7[0x50];
          pfVar7[0x51] = auVar38._4_4_ * pfVar7[0x51];
          pfVar7[0x52] = auVar38._8_4_ * pfVar7[0x52];
          pfVar7[0x53] = auVar38._12_4_ * pfVar7[0x53];
          pfVar7[0x54] = auVar38._0_4_ * pfVar7[0x54];
          pfVar7[0x55] = auVar38._4_4_ * pfVar7[0x55];
          pfVar7[0x56] = auVar38._8_4_ * pfVar7[0x56];
          pfVar7[0x57] = auVar38._12_4_ * pfVar7[0x57];
          pfVar7[0x58] = auVar38._0_4_ * pfVar7[0x58];
          pfVar7[0x59] = auVar38._4_4_ * pfVar7[0x59];
          pfVar7[0x5a] = auVar38._8_4_ * pfVar7[0x5a];
          pfVar7[0x5b] = auVar38._12_4_ * pfVar7[0x5b];
          pfVar7[0x5c] = auVar38._0_4_ * pfVar7[0x5c];
          pfVar7[0x5d] = auVar38._4_4_ * pfVar7[0x5d];
          pfVar7[0x5e] = auVar38._8_4_ * pfVar7[0x5e];
          pfVar7[0x5f] = auVar38._12_4_ * pfVar7[0x5f];
          pfVar7[0x60] = auVar38._0_4_ * pfVar7[0x60];
          pfVar7[0x61] = auVar38._4_4_ * pfVar7[0x61];
          pfVar7[0x62] = auVar38._8_4_ * pfVar7[0x62];
          pfVar7[99] = auVar38._12_4_ * pfVar7[99];
          pfVar7[100] = auVar38._0_4_ * pfVar7[100];
          pfVar7[0x65] = auVar38._4_4_ * pfVar7[0x65];
          pfVar7[0x66] = auVar38._8_4_ * pfVar7[0x66];
          pfVar7[0x67] = auVar38._12_4_ * pfVar7[0x67];
          pfVar7[0x68] = auVar38._0_4_ * pfVar7[0x68];
          pfVar7[0x69] = auVar38._4_4_ * pfVar7[0x69];
          pfVar7[0x6a] = auVar38._8_4_ * pfVar7[0x6a];
          pfVar7[0x6b] = auVar38._12_4_ * pfVar7[0x6b];
          pfVar7[0x6c] = auVar38._0_4_ * pfVar7[0x6c];
          pfVar7[0x6d] = auVar38._4_4_ * pfVar7[0x6d];
          pfVar7[0x6e] = auVar38._8_4_ * pfVar7[0x6e];
          pfVar7[0x6f] = auVar38._12_4_ * pfVar7[0x6f];
          pfVar7[0x70] = auVar38._0_4_ * pfVar7[0x70];
          pfVar7[0x71] = auVar38._4_4_ * pfVar7[0x71];
          pfVar7[0x72] = auVar38._8_4_ * pfVar7[0x72];
          pfVar7[0x73] = auVar38._12_4_ * pfVar7[0x73];
          pfVar7[0x74] = auVar38._0_4_ * pfVar7[0x74];
          pfVar7[0x75] = auVar38._4_4_ * pfVar7[0x75];
          pfVar7[0x76] = auVar38._8_4_ * pfVar7[0x76];
          pfVar7[0x77] = auVar38._12_4_ * pfVar7[0x77];
          pfVar7[0x78] = auVar38._0_4_ * pfVar7[0x78];
          pfVar7[0x79] = auVar38._4_4_ * pfVar7[0x79];
          pfVar7[0x7a] = auVar38._8_4_ * pfVar7[0x7a];
          pfVar7[0x7b] = auVar38._12_4_ * pfVar7[0x7b];
          pfVar7[0x7c] = auVar38._0_4_ * pfVar7[0x7c];
          pfVar7[0x7d] = auVar38._4_4_ * pfVar7[0x7d];
          pfVar7[0x7e] = auVar38._8_4_ * pfVar7[0x7e];
          pfVar7[0x7f] = auVar38._12_4_ * pfVar7[0x7f];
          pfVar7[0x80] = auVar38._0_4_ * pfVar7[0x80];
          pfVar7[0x81] = auVar38._4_4_ * pfVar7[0x81];
          pfVar7[0x82] = auVar38._8_4_ * pfVar7[0x82];
          pfVar7[0x83] = auVar38._12_4_ * pfVar7[0x83];
          pfVar7[0x84] = auVar38._0_4_ * pfVar7[0x84];
          pfVar7[0x85] = auVar38._4_4_ * pfVar7[0x85];
          pfVar7[0x86] = auVar38._8_4_ * pfVar7[0x86];
          pfVar7[0x87] = auVar38._12_4_ * pfVar7[0x87];
          pfVar7[0x88] = auVar38._0_4_ * pfVar7[0x88];
          pfVar7[0x89] = auVar38._4_4_ * pfVar7[0x89];
          pfVar7[0x8a] = auVar38._8_4_ * pfVar7[0x8a];
          pfVar7[0x8b] = auVar38._12_4_ * pfVar7[0x8b];
          pfVar7[0x8c] = auVar38._0_4_ * pfVar7[0x8c];
          pfVar7[0x8d] = auVar38._4_4_ * pfVar7[0x8d];
          pfVar7[0x8e] = auVar38._8_4_ * pfVar7[0x8e];
          pfVar7[0x8f] = auVar38._12_4_ * pfVar7[0x8f];
          pfVar7[0x90] = auVar38._0_4_ * pfVar7[0x90];
          pfVar7[0x91] = auVar38._4_4_ * pfVar7[0x91];
          pfVar7[0x92] = auVar38._8_4_ * pfVar7[0x92];
          pfVar7[0x93] = auVar38._12_4_ * pfVar7[0x93];
          pfVar7[0x94] = auVar38._0_4_ * pfVar7[0x94];
          pfVar7[0x95] = auVar38._4_4_ * pfVar7[0x95];
          pfVar7[0x96] = auVar38._8_4_ * pfVar7[0x96];
          pfVar7[0x97] = auVar38._12_4_ * pfVar7[0x97];
          pfVar7[0x98] = auVar38._0_4_ * pfVar7[0x98];
          pfVar7[0x99] = auVar38._4_4_ * pfVar7[0x99];
          pfVar7[0x9a] = auVar38._8_4_ * pfVar7[0x9a];
          pfVar7[0x9b] = auVar38._12_4_ * pfVar7[0x9b];
          pfVar7[0x9c] = auVar38._0_4_ * pfVar7[0x9c];
          pfVar7[0x9d] = auVar38._4_4_ * pfVar7[0x9d];
          pfVar7[0x9e] = auVar38._8_4_ * pfVar7[0x9e];
          pfVar7[0x9f] = auVar38._12_4_ * pfVar7[0x9f];
          pfVar7[0xa0] = auVar38._0_4_ * pfVar7[0xa0];
          pfVar7[0xa1] = auVar38._4_4_ * pfVar7[0xa1];
          pfVar7[0xa2] = auVar38._8_4_ * pfVar7[0xa2];
          pfVar7[0xa3] = auVar38._12_4_ * pfVar7[0xa3];
          pfVar7[0xa4] = auVar38._0_4_ * pfVar7[0xa4];
          pfVar7[0xa5] = auVar38._4_4_ * pfVar7[0xa5];
          pfVar7[0xa6] = auVar38._8_4_ * pfVar7[0xa6];
          pfVar7[0xa7] = auVar38._12_4_ * pfVar7[0xa7];
          pfVar7[0xa8] = auVar38._0_4_ * pfVar7[0xa8];
          pfVar7[0xa9] = auVar38._4_4_ * pfVar7[0xa9];
          pfVar7[0xaa] = auVar38._8_4_ * pfVar7[0xaa];
          pfVar7[0xab] = auVar38._12_4_ * pfVar7[0xab];
          pfVar7[0xac] = auVar38._0_4_ * pfVar7[0xac];
          pfVar7[0xad] = auVar38._4_4_ * pfVar7[0xad];
          pfVar7[0xae] = auVar38._8_4_ * pfVar7[0xae];
          pfVar7[0xaf] = auVar38._12_4_ * pfVar7[0xaf];
          pfVar7[0xb0] = auVar38._0_4_ * pfVar7[0xb0];
          pfVar7[0xb1] = auVar38._4_4_ * pfVar7[0xb1];
          pfVar7[0xb2] = auVar38._8_4_ * pfVar7[0xb2];
          pfVar7[0xb3] = auVar38._12_4_ * pfVar7[0xb3];
          pfVar7[0xb4] = auVar38._0_4_ * pfVar7[0xb4];
          pfVar7[0xb5] = auVar38._4_4_ * pfVar7[0xb5];
          pfVar7[0xb6] = auVar38._8_4_ * pfVar7[0xb6];
          pfVar7[0xb7] = auVar38._12_4_ * pfVar7[0xb7];
          pfVar7[0xb8] = auVar38._0_4_ * pfVar7[0xb8];
          pfVar7[0xb9] = auVar38._4_4_ * pfVar7[0xb9];
          pfVar7[0xba] = auVar38._8_4_ * pfVar7[0xba];
          pfVar7[0xbb] = auVar38._12_4_ * pfVar7[0xbb];
          pfVar7[0xbc] = auVar38._0_4_ * pfVar7[0xbc];
          pfVar7[0xbd] = auVar38._4_4_ * pfVar7[0xbd];
          pfVar7[0xbe] = auVar38._8_4_ * pfVar7[0xbe];
          pfVar7[0xbf] = auVar38._12_4_ * pfVar7[0xbf];
          pfVar7[0xc0] = auVar38._0_4_ * pfVar7[0xc0];
          pfVar7[0xc1] = auVar38._4_4_ * pfVar7[0xc1];
          pfVar7[0xc2] = auVar38._8_4_ * pfVar7[0xc2];
          pfVar7[0xc3] = auVar38._12_4_ * pfVar7[0xc3];
          pfVar7[0xc4] = auVar38._0_4_ * pfVar7[0xc4];
          pfVar7[0xc5] = auVar38._4_4_ * pfVar7[0xc5];
          pfVar7[0xc6] = auVar38._8_4_ * pfVar7[0xc6];
          pfVar7[199] = auVar38._12_4_ * pfVar7[199];
          pfVar7[200] = auVar38._0_4_ * pfVar7[200];
          pfVar7[0xc9] = auVar38._4_4_ * pfVar7[0xc9];
          pfVar7[0xca] = auVar38._8_4_ * pfVar7[0xca];
          pfVar7[0xcb] = auVar38._12_4_ * pfVar7[0xcb];
          pfVar7[0xcc] = auVar38._0_4_ * pfVar7[0xcc];
          pfVar7[0xcd] = auVar38._4_4_ * pfVar7[0xcd];
          pfVar7[0xce] = auVar38._8_4_ * pfVar7[0xce];
          pfVar7[0xcf] = auVar38._12_4_ * pfVar7[0xcf];
          pfVar7[0xd0] = auVar38._0_4_ * pfVar7[0xd0];
          pfVar7[0xd1] = auVar38._4_4_ * pfVar7[0xd1];
          pfVar7[0xd2] = auVar38._8_4_ * pfVar7[0xd2];
          pfVar7[0xd3] = auVar38._12_4_ * pfVar7[0xd3];
          pfVar7[0xd4] = auVar38._0_4_ * pfVar7[0xd4];
          pfVar7[0xd5] = auVar38._4_4_ * pfVar7[0xd5];
          pfVar7[0xd6] = auVar38._8_4_ * pfVar7[0xd6];
          pfVar7[0xd7] = auVar38._12_4_ * pfVar7[0xd7];
          pfVar7[0xd8] = auVar38._0_4_ * pfVar7[0xd8];
          pfVar7[0xd9] = auVar38._4_4_ * pfVar7[0xd9];
          pfVar7[0xda] = auVar38._8_4_ * pfVar7[0xda];
          pfVar7[0xdb] = auVar38._12_4_ * pfVar7[0xdb];
          pfVar7[0xdc] = auVar38._0_4_ * pfVar7[0xdc];
          pfVar7[0xdd] = auVar38._4_4_ * pfVar7[0xdd];
          pfVar7[0xde] = auVar38._8_4_ * pfVar7[0xde];
          pfVar7[0xdf] = auVar38._12_4_ * pfVar7[0xdf];
          pfVar7[0xe0] = auVar38._0_4_ * pfVar7[0xe0];
          pfVar7[0xe1] = auVar38._4_4_ * pfVar7[0xe1];
          pfVar7[0xe2] = auVar38._8_4_ * pfVar7[0xe2];
          pfVar7[0xe3] = auVar38._12_4_ * pfVar7[0xe3];
          pfVar7[0xe4] = auVar38._0_4_ * pfVar7[0xe4];
          pfVar7[0xe5] = auVar38._4_4_ * pfVar7[0xe5];
          pfVar7[0xe6] = auVar38._8_4_ * pfVar7[0xe6];
          pfVar7[0xe7] = auVar38._12_4_ * pfVar7[0xe7];
          pfVar7[0xe8] = auVar38._0_4_ * pfVar7[0xe8];
          pfVar7[0xe9] = auVar38._4_4_ * pfVar7[0xe9];
          pfVar7[0xea] = auVar38._8_4_ * pfVar7[0xea];
          pfVar7[0xeb] = auVar38._12_4_ * pfVar7[0xeb];
          pfVar7[0xec] = auVar38._0_4_ * pfVar7[0xec];
          pfVar7[0xed] = auVar38._4_4_ * pfVar7[0xed];
          pfVar7[0xee] = auVar38._8_4_ * pfVar7[0xee];
          pfVar7[0xef] = auVar38._12_4_ * pfVar7[0xef];
          pfVar7[0xf0] = auVar38._0_4_ * pfVar7[0xf0];
          pfVar7[0xf1] = auVar38._4_4_ * pfVar7[0xf1];
          pfVar7[0xf2] = auVar38._8_4_ * pfVar7[0xf2];
          pfVar7[0xf3] = auVar38._12_4_ * pfVar7[0xf3];
          pfVar7[0xf4] = auVar38._0_4_ * pfVar7[0xf4];
          pfVar7[0xf5] = auVar38._4_4_ * pfVar7[0xf5];
          pfVar7[0xf6] = auVar38._8_4_ * pfVar7[0xf6];
          pfVar7[0xf7] = auVar38._12_4_ * pfVar7[0xf7];
          auVar138._0_4_ = auVar38._0_4_ * pfVar7[0xf8];
          auVar138._4_4_ = auVar38._4_4_ * pfVar7[0xf9];
          auVar138._8_4_ = auVar38._8_4_ * pfVar7[0xfa];
          auVar138._12_4_ = auVar38._12_4_ * pfVar7[0xfb];
          *(undefined1 (*) [16])(pfVar7 + 0xf8) = auVar138;
          auVar39._0_4_ = auVar38._0_4_ * pfVar7[0xfc];
          auVar39._4_4_ = auVar38._4_4_ * pfVar7[0xfd];
          auVar39._8_4_ = auVar38._8_4_ * pfVar7[0xfe];
          auVar39._12_4_ = auVar38._12_4_ * pfVar7[0xff];
          *(undefined1 (*) [16])(pfVar7 + 0xfc) = auVar39;
        }
      }
    }
    goto LAB_140045d9a;
  case 0x13:
    uVar6 = *(undefined2 *)((longlong)param_1 + 0x276);
    uVar11 = *(undefined8 *)(param_1 + 2);
    uVar17 = (ulonglong)*(byte *)((longlong)puVar20 + 2);
    auVar108._0_8_ = func_0x0001455d59d0(uVar11,uVar6,(short)puVar20[1],afStack_368);
    auVar108._8_56_ = extraout_var_69;
    auVar153 = ZEXT1664(auVar108._0_16_);
    puVar19 = puVar20 + 2;
    auVar109._0_8_ =
         func_0x0001455d59d0(uVar11,uVar6,*(undefined2 *)((longlong)puVar20 + 6),afStack_368);
    auVar109._8_56_ = extraout_var_70;
    auVar148._0_4_ = (uint)(float)auVar109._0_8_ ^ _DAT_145fc6f10;
    auVar148._4_4_ = (uint)((ulonglong)auVar109._0_8_ >> 0x20) ^ _DAT_145fc6f10;
    auVar148._8_4_ = extraout_var_70._0_4_ ^ _DAT_145fc6f10;
    auVar148._12_4_ = extraout_var_70._4_4_ ^ _DAT_145fc6f10;
    auVar31 = vmaxss_avx(auVar148,auVar109._0_16_);
    auVar31 = vcmpss_avx(ZEXT416(0) << 0x20,ZEXT416((uint)(auVar31._0_4_ + _DAT_146159f9c)),2);
    fVar25 = (float)(auVar31._0_4_ & (uint)(auVar153._0_4_ / (float)auVar109._0_8_));
    break;
  case 0x14:
    in_stack_fffffffffffffc48 =
         *(float **)(auStack_2a8 + (ulonglong)*(byte *)((longlong)puVar20 + 10) * 8);
    FUN_144ace400(*(undefined8 *)(auStack_2a8 + (ulonglong)*(byte *)((longlong)puVar20 + 2) * 8),
                  *(undefined8 *)(auStack_2a8 + (ulonglong)(byte)puVar20[1] * 8),
                  *(undefined8 *)(auStack_2a8 + (ulonglong)*(byte *)((longlong)puVar20 + 6) * 8),
                  *(undefined8 *)(auStack_2a8 + (ulonglong)(byte)puVar20[2] * 8),
                  in_stack_fffffffffffffc48);
    puVar19 = puVar20 + 3;
    goto LAB_140045d9a;
  case 0x15:
    uVar6 = *(undefined2 *)((longlong)param_1 + 0x276);
    uVar11 = *(undefined8 *)(param_1 + 2);
    bVar8 = *(byte *)((longlong)puVar20 + 2);
    auVar92._0_8_ = func_0x0001455d59d0(uVar11,uVar6,(short)puVar20[1],afStack_368);
    auVar92._8_56_ = extraout_var_53;
    auVar153 = ZEXT1664(auVar92._0_16_);
    auVar93._0_8_ =
         func_0x0001455d59d0(uVar11,uVar6,*(undefined2 *)((longlong)puVar20 + 6),afStack_368);
    auVar93._8_56_ = extraout_var_54;
    auVar154 = ZEXT1664(auVar93._0_16_);
    auVar94._0_8_ = func_0x0001455d59d0(uVar11,uVar6,(short)puVar20[2],afStack_368);
    auVar94._8_56_ = extraout_var_55;
    auVar155 = ZEXT1664(auVar94._0_16_);
    uVar27 = func_0x0001455d59d0(uVar11,uVar6,*(undefined2 *)((longlong)puVar20 + 10),afStack_368);
    in_stack_fffffffffffffc48 = (float *)CONCAT44(uVar24,uVar27);
    FUN_1455d5a20(*(undefined8 *)(auStack_2a8 + (ulonglong)bVar8 * 8),auVar153._0_8_,auVar154._0_8_,
                  auVar155._0_8_,in_stack_fffffffffffffc48);
    puVar19 = puVar20 + 3;
    goto LAB_140045d9a;
  case 0x16:
    uVar6 = *(undefined2 *)((longlong)param_1 + 0x276);
    uVar11 = *(undefined8 *)(param_1 + 2);
    uVar17 = (ulonglong)*(byte *)((longlong)puVar20 + 2);
    auVar103._0_8_ = func_0x0001455d59d0(uVar11,uVar6,(short)puVar20[1],afStack_368);
    auVar103._8_56_ = extraout_var_64;
    auVar153 = ZEXT1664(auVar103._0_16_);
    auVar104._0_8_ =
         func_0x0001455d59d0(uVar11,uVar6,*(undefined2 *)((longlong)puVar20 + 6),afStack_368);
    auVar104._8_56_ = extraout_var_65;
    auVar154 = ZEXT1664(auVar104._0_16_);
    auVar105._0_8_ = func_0x0001455d59d0(uVar11,uVar6,(short)puVar20[2],afStack_368);
    auVar105._8_56_ = extraout_var_66;
    auVar155 = ZEXT1664(auVar105._0_16_);
    auVar106._0_8_ =
         func_0x0001455d59d0(uVar11,uVar6,*(undefined2 *)((longlong)puVar20 + 10),afStack_368);
    auVar106._8_56_ = extraout_var_67;
    auVar156 = ZEXT1664(auVar106._0_16_);
    puVar19 = (uint *)((longlong)puVar20 + 0xe);
    uVar27 = func_0x0001455d59d0(uVar11,uVar6,(short)puVar20[3],afStack_368);
    in_stack_fffffffffffffc48 = (float *)CONCAT44(uVar24,uVar27);
    fVar25 = (float)FUN_1455d5ac0(auVar153._0_8_,auVar154._0_8_,auVar155._0_8_,auVar156._0_8_,
                                  in_stack_fffffffffffffc48);
    break;
  case 0x17:
    lVar12 = *(longlong *)(auStack_2a8 + (ulonglong)*(byte *)((longlong)puVar20 + 2) * 8);
    if ((ushort)puVar20[1] < 0x100) {
      if (lVar12 != 0) {
        FUN_1455d5b20(lVar12);
      }
    }
    else if (lVar12 != 0) {
      auStack_138._0_4_ =
           func_0x0001455d59d0(*(undefined8 *)(param_1 + 2),
                               *(undefined2 *)((longlong)param_1 + 0x276),(ushort)puVar20[1],
                               afStack_368);
      auStack_138._4_4_ = auStack_138._0_4_;
      auStack_138._8_4_ = auStack_138._0_4_;
      auStack_138._12_4_ = auStack_138._0_4_;
      FUN_1455d5bd0(lVar12);
    }
    goto code_r0x000140045d2a;
  case 0x18:
    uVar6 = *(undefined2 *)((longlong)param_1 + 0x276);
    uVar11 = *(undefined8 *)(param_1 + 2);
    uVar17 = (ulonglong)*(byte *)((longlong)puVar20 + 2);
    auVar82._0_8_ = func_0x0001455d59d0(uVar11,uVar6,(short)puVar20[1],afStack_368);
    auVar82._8_56_ = extraout_var_43;
    auVar153 = ZEXT1664(auVar82._0_16_);
    puVar19 = puVar20 + 2;
    func_0x0001455d59d0(uVar11,uVar6,*(undefined2 *)((longlong)puVar20 + 6),afStack_368);
    fVar25 = (float)func_0x000144ace4c0(auVar153._0_8_);
    break;
  case 0x19:
    FUN_1455d5c80(*(undefined8 *)(auStack_2a8 + (ulonglong)*(byte *)((longlong)puVar20 + 2) * 8));
    puVar19 = puVar20 + 1;
    goto LAB_140045d9a;
  case 0x1a:
    uVar6 = *(undefined2 *)((longlong)param_1 + 0x276);
    uVar11 = *(undefined8 *)(param_1 + 2);
    uVar17 = (ulonglong)*(byte *)((longlong)puVar20 + 2);
    auVar114._0_8_ = func_0x0001455d59d0(uVar11,uVar6,(short)puVar20[1],afStack_368);
    auVar114._8_56_ = extraout_var_75;
    auVar153 = ZEXT1664(auVar114._0_16_);
    auVar115._0_8_ =
         func_0x0001455d59d0(uVar11,uVar6,*(undefined2 *)((longlong)puVar20 + 6),afStack_368);
    auVar115._8_56_ = extraout_var_76;
    auVar154 = ZEXT1664(auVar115._0_16_);
    auVar116._0_8_ = func_0x0001455d59d0(uVar11,uVar6,(short)puVar20[2],afStack_368);
    auVar116._8_56_ = extraout_var_77;
    auVar155 = ZEXT1664(auVar116._0_16_);
    puVar19 = puVar20 + 3;
    uVar11 = func_0x0001455d5eb0(param_1);
    fVar25 = (float)func_0x0001455d5ee0(auVar153._0_8_,auVar154._0_8_,auVar155._0_8_,uVar11);
    break;
  case 0x1b:
    puVar19 = puVar20 + 1;
    if (*(longlong *)(auStack_2a8 + (ulonglong)*(byte *)((longlong)puVar20 + 2) * 8) != 0) {
      func_0x0001455d5f90();
    }
    goto LAB_140045d9a;
  case 0x1c:
    uVar17 = (ulonglong)*(byte *)((longlong)puVar20 + 2);
    puVar19 = (uint *)((longlong)puVar20 + 6);
    auVar112._0_8_ =
         func_0x0001455d59d0(*(undefined8 *)(param_1 + 2),*(undefined2 *)((longlong)param_1 + 0x276)
                             ,(short)puVar20[1],afStack_368);
    auVar112._8_56_ = extraout_var_73;
    auVar141._0_4_ = (uint)auVar112._0_8_ ^ _DAT_145fc6f10;
    auVar141._4_4_ = (uint)((ulonglong)auVar112._0_8_ >> 0x20) ^ _DAT_145fc6f10;
    auVar141._8_4_ = extraout_var_73._0_4_ ^ _DAT_145fc6f10;
    auVar141._12_4_ = extraout_var_73._4_4_ ^ _DAT_145fc6f10;
    auVar31 = vmaxss_avx(auVar141,auVar112._0_16_);
    fVar25 = auVar31._0_4_;
    break;
  case 0x1d:
    puVar19 = puVar20 + 1;
    if (*(longlong *)(auStack_2a8 + (ulonglong)*(byte *)((longlong)puVar20 + 2) * 8) != 0) {
      func_0x000144ace530();
    }
    goto LAB_140045d9a;
  case 0x1e:
    uVar17 = (ulonglong)*(byte *)((longlong)puVar20 + 2);
    puVar19 = (uint *)((longlong)puVar20 + 6);
    auVar101._0_8_ =
         func_0x0001455d59d0(*(undefined8 *)(param_1 + 2),*(undefined2 *)((longlong)param_1 + 0x276)
                             ,(short)puVar20[1],afStack_368);
    auVar101._8_56_ = extraout_var_62;
    auVar31 = vroundss_avx(auVar101._0_16_,auVar101._0_16_,9);
    fVar25 = auVar31._0_4_;
    break;
  case 0x1f:
    puVar19 = puVar20 + 1;
    if (*(longlong *)(auStack_2a8 + (ulonglong)*(byte *)((longlong)puVar20 + 2) * 8) != 0) {
      func_0x000144ace550();
    }
    goto LAB_140045d9a;
  case 0x20:
    uVar17 = (ulonglong)*(byte *)((longlong)puVar20 + 2);
    puVar19 = (uint *)((longlong)puVar20 + 6);
    auVar102._0_8_ =
         func_0x0001455d59d0(*(undefined8 *)(param_1 + 2),*(undefined2 *)((longlong)param_1 + 0x276)
                             ,(short)puVar20[1],afStack_368);
    auVar102._8_56_ = extraout_var_63;
    auVar31 = vroundss_avx(auVar102._0_16_,auVar102._0_16_,10);
    fVar25 = auVar31._0_4_;
    break;
  case 0x21:
    puVar19 = puVar20 + 1;
    if (*(longlong *)(auStack_2a8 + (ulonglong)*(byte *)((longlong)puVar20 + 2) * 8) != 0) {
      func_0x000144ace600();
    }
    goto LAB_140045d9a;
  case 0x22:
    uVar17 = (ulonglong)*(byte *)((longlong)puVar20 + 2);
    puVar19 = (uint *)((longlong)puVar20 + 6);
    auVar69._0_8_ =
         func_0x0001455d59d0(*(undefined8 *)(param_1 + 2),*(undefined2 *)((longlong)param_1 + 0x276)
                             ,(short)puVar20[1],afStack_368);
    auVar69._8_56_ = extraout_var_30;
    auVar144._4_4_ = _DAT_145fc6f08;
    auVar144._0_4_ = _DAT_145fc6f08;
    auVar144._8_4_ = _DAT_145fc6f08;
    auVar144._12_4_ = _DAT_145fc6f08;
    auVar151._4_4_ = _DAT_145fc6edc;
    auVar151._0_4_ = _DAT_145fc6edc;
    auVar151._8_4_ = _DAT_145fc6edc;
    auVar151._12_4_ = _DAT_145fc6edc;
    auVar134._0_12_ = ZEXT812(0);
    auVar134._12_4_ = 0;
    auVar31 = vcmpss_avx(auVar69._0_16_,auVar134,1);
    auVar31 = vblendvps_avx(auVar151,auVar144,auVar31);
    auVar31 = ZEXT416((uint)(auVar31._0_4_ + (float)auVar69._0_8_));
    auVar31 = vroundss_avx(auVar31,auVar31,0xb);
    fVar25 = auVar31._0_4_;
    break;
  case 0x23:
    puVar19 = puVar20 + 1;
    if (*(longlong *)(auStack_2a8 + (ulonglong)*(byte *)((longlong)puVar20 + 2) * 8) != 0) {
      func_0x0001455d5fc0();
    }
    goto LAB_140045d9a;
  case 0x24:
    uVar17 = (ulonglong)*(byte *)((longlong)puVar20 + 2);
    puVar19 = (uint *)((longlong)puVar20 + 6);
    auVar68._0_8_ =
         func_0x0001455d59d0(*(undefined8 *)(param_1 + 2),*(undefined2 *)((longlong)param_1 + 0x276)
                             ,(short)puVar20[1],afStack_368);
    auVar68._8_56_ = extraout_var_29;
    auVar133._0_12_ = ZEXT812(0);
    auVar133._12_4_ = 0;
    auVar31 = vcmpss_avx(auVar68._0_16_,auVar133,0);
    auVar133 = vcmpss_avx(auVar68._0_16_,auVar133,1);
    auVar150._4_4_ = _DAT_145fc6f48;
    auVar150._0_4_ = _DAT_145fc6f48;
    auVar150._8_4_ = _DAT_145fc6f48;
    auVar150._12_4_ = _DAT_145fc6f48;
    auVar31 = vblendvps_avx(ZEXT416(~auVar31._0_4_ & (uint)_DAT_145fc6ed8),auVar150,auVar133);
    fVar25 = auVar31._0_4_;
    break;
  case 0x25:
    lVar12 = *(longlong *)(auStack_2a8 + (ulonglong)*(byte *)((longlong)puVar20 + 2) * 8);
    if ((ushort)puVar20[1] < 0x100) {
      if (lVar12 != 0) {
        func_0x000144ace620(lVar12);
      }
    }
    else if (lVar12 != 0) {
      auStack_128._0_4_ =
           func_0x0001455d59d0(*(undefined8 *)(param_1 + 2),
                               *(undefined2 *)((longlong)param_1 + 0x276),(ushort)puVar20[1],
                               afStack_368);
      auStack_128._4_4_ = auStack_128._0_4_;
      auStack_128._8_4_ = auStack_128._0_4_;
      auStack_128._12_4_ = auStack_128._0_4_;
      func_0x0001455d6010(lVar12);
    }
    goto code_r0x000140045d2a;
  case 0x26:
    uVar6 = *(undefined2 *)((longlong)param_1 + 0x276);
    uVar11 = *(undefined8 *)(param_1 + 2);
    uVar17 = (ulonglong)*(byte *)((longlong)puVar20 + 2);
    auVar113._0_8_ = func_0x0001455d59d0(uVar11,uVar6,(short)puVar20[1],afStack_368);
    auVar113._8_56_ = extraout_var_74;
    auVar153 = ZEXT1664(auVar113._0_16_);
    puVar19 = puVar20 + 2;
    func_0x0001455d59d0(uVar11,uVar6,*(undefined2 *)((longlong)puVar20 + 6),afStack_368);
    fVar25 = (float)func_0x0001455d6060(auVar153._0_8_);
    break;
  case 0x27:
    uVar6 = *(undefined2 *)((longlong)param_1 + 0x276);
    uVar11 = *(undefined8 *)(param_1 + 2);
    uVar17 = (ulonglong)*(byte *)((longlong)puVar20 + 2);
    auVar107._0_8_ = func_0x0001455d59d0(uVar11,uVar6,(short)puVar20[1],afStack_368);
    auVar107._8_56_ = extraout_var_68;
    auVar153 = ZEXT1664(auVar107._0_16_);
    puVar19 = puVar20 + 2;
    func_0x0001455d59d0(uVar11,uVar6,*(undefined2 *)((longlong)puVar20 + 6),afStack_368);
    fVar25 = (float)func_0x0001455d6480(auVar153._0_8_);
    break;
  case 0x28:
    lVar12 = *(longlong *)(auStack_2a8 + (ulonglong)*(byte *)((longlong)puVar20 + 2) * 8);
    if ((ushort)puVar20[1] < 0x100) {
      if (lVar12 != 0) {
        FUN_1455d6080(lVar12);
      }
    }
    else if (lVar12 != 0) {
      auStack_118._0_4_ =
           func_0x0001455d59d0(*(undefined8 *)(param_1 + 2),
                               *(undefined2 *)((longlong)param_1 + 0x276),(ushort)puVar20[1],
                               afStack_368);
      auStack_118._4_4_ = auStack_118._0_4_;
      auStack_118._8_4_ = auStack_118._0_4_;
      auStack_118._12_4_ = auStack_118._0_4_;
      FUN_1455d6280(lVar12);
    }
    goto code_r0x000140045d2a;
  case 0x29:
    uVar6 = *(undefined2 *)((longlong)param_1 + 0x276);
    uVar11 = *(undefined8 *)(param_1 + 2);
    uVar17 = (ulonglong)*(byte *)((longlong)puVar20 + 2);
    auVar88._0_8_ = func_0x0001455d59d0(uVar11,uVar6,(short)puVar20[1],afStack_368);
    auVar88._8_56_ = extraout_var_49;
    auVar153 = ZEXT1664(auVar88._0_16_);
    auVar89._0_8_ =
         func_0x0001455d59d0(uVar11,uVar6,*(undefined2 *)((longlong)puVar20 + 6),afStack_368);
    auVar89._8_56_ = extraout_var_50;
    auVar154 = ZEXT1664(auVar89._0_16_);
    puVar19 = (uint *)((longlong)puVar20 + 10);
    uVar11 = func_0x0001455d5eb0(param_1);
    fVar25 = (float)func_0x000144ace670(auVar153._0_8_,auVar154._0_8_,uVar11);
    break;
  case 0x2a:
    lVar12 = *(longlong *)(auStack_2a8 + (ulonglong)*(byte *)((longlong)puVar20 + 2) * 8);
    puVar19 = (uint *)((longlong)puVar20 + 6);
    if (lVar12 != 0) {
      auVar110._0_8_ =
           func_0x0001455d59d0(*(undefined8 *)(param_1 + 2),
                               *(undefined2 *)((longlong)param_1 + 0x276),(short)puVar20[1],
                               afStack_368);
      auVar110._8_56_ = extraout_var_71;
      auVar153 = ZEXT1664(auVar110._0_16_);
      uVar11 = func_0x0001455d5eb0(param_1);
      func_0x0001455d64a0(lVar12,auVar153._0_8_,uVar11);
      puVar19 = puVar20 + 2;
    }
    goto LAB_140045d9a;
  case 0x2b:
    uVar6 = *(undefined2 *)((longlong)param_1 + 0x276);
    uVar11 = *(undefined8 *)(param_1 + 2);
    bVar8 = *(byte *)((longlong)puVar20 + 2);
    auVar60._0_8_ = func_0x0001455d59d0(uVar11,uVar6,(short)puVar20[1],afStack_368);
    auVar60._8_56_ = extraout_var_21;
    auVar153 = ZEXT1664(auVar60._0_16_);
    auVar61._0_8_ =
         func_0x0001455d59d0(uVar11,uVar6,*(undefined2 *)((longlong)puVar20 + 6),afStack_368);
    auVar61._8_56_ = extraout_var_22;
    auVar154 = ZEXT1664(auVar61._0_16_);
    auVar62._0_8_ = func_0x0001455d59d0(uVar11,uVar6,(short)puVar20[2],afStack_368);
    auVar62._8_56_ = extraout_var_23;
    auVar155 = ZEXT1664(auVar62._0_16_);
    auVar63._0_8_ =
         func_0x0001455d59d0(uVar11,uVar6,*(undefined2 *)((longlong)puVar20 + 10),afStack_368);
    auVar63._8_56_ = extraout_var_24;
    auVar156 = ZEXT1664(auVar63._0_16_);
    in_stack_fffffffffffffc50 = (float *)func_0x0001455d5eb0(param_1);
    in_stack_fffffffffffffc48 = (float *)CONCAT44(uVar24,auVar156._0_4_);
    func_0x0001452df200(*(undefined8 *)(auStack_2a8 + (ulonglong)bVar8 * 8),auVar153._0_8_,
                        auVar154._0_8_,auVar155._0_8_,in_stack_fffffffffffffc48,
                        in_stack_fffffffffffffc50);
    puVar19 = (uint *)((longlong)puVar20 + 0xe);
  default:
    goto LAB_140045d9a;
  case 0x2d:
    uVar6 = *(undefined2 *)((longlong)param_1 + 0x276);
    uVar11 = *(undefined8 *)(param_1 + 2);
    bVar8 = *(byte *)((longlong)puVar20 + 2);
    auVar72._0_8_ = func_0x0001455d59d0(uVar11,uVar6,(short)puVar20[1],afStack_368);
    auVar72._8_56_ = extraout_var_33;
    auVar153 = ZEXT1664(auVar72._0_16_);
    uVar11 = func_0x0001455d59d0(uVar11,uVar6,*(undefined2 *)((longlong)puVar20 + 6),afStack_368);
    func_0x00014512e500(*(undefined8 *)(auStack_2a8 + (ulonglong)bVar8 * 8),auVar153._0_8_,uVar11);
    puVar19 = puVar20 + 2;
    goto LAB_140045d9a;
  case 0x2e:
    bVar8 = *(byte *)((longlong)puVar20 + 2);
    uVar11 = func_0x0001455d59d0(*(undefined8 *)(param_1 + 2),
                                 *(undefined2 *)((longlong)param_1 + 0x276),(short)puVar20[1],
                                 afStack_368);
    bVar4 = *(byte *)((longlong)puVar20 + 6);
    uVar22 = (uint)(byte)puVar20[2];
    uVar21 = (uint)bVar4;
    if (bVar8 != bVar4) {
      uVar21 = uVar22;
      uVar22 = (uint)bVar4;
    }
    func_0x000144ace5a0(*(undefined8 *)(auStack_2a8 + (ulonglong)uVar21 * 8),
                        *(undefined8 *)(auStack_2a8 + (ulonglong)uVar22 * 8),uVar11);
    puVar19 = (uint *)((longlong)puVar20 + 10);
    goto LAB_140045d9a;
  case 0x2f:
    uVar6 = *(undefined2 *)((longlong)param_1 + 0x276);
    uVar11 = *(undefined8 *)(param_1 + 2);
    uVar17 = (ulonglong)*(byte *)((longlong)puVar20 + 2);
    auVar121._0_8_ = func_0x0001455d59d0(uVar11,uVar6,(short)puVar20[1],afStack_368);
    auVar121._8_56_ = extraout_var_82;
    auVar153 = ZEXT1664(auVar121._0_16_);
    auVar122._0_8_ =
         func_0x0001455d59d0(uVar11,uVar6,*(undefined2 *)((longlong)puVar20 + 6),afStack_368);
    auVar122._8_56_ = extraout_var_83;
    auVar154 = ZEXT1664(auVar122._0_16_);
    puVar19 = (uint *)((longlong)puVar20 + 10);
    fVar25 = (float)func_0x0001455d59d0(uVar11,uVar6,(short)puVar20[2],afStack_368);
    fVar25 = auVar153._0_4_ * (fVar25 - auVar154._0_4_) + auVar154._0_4_;
    break;
  case 0x30:
    puVar19 = (uint *)((longlong)puVar20 + 6);
    if ((*(longlong *)(auStack_2a8 + (ulonglong)*(byte *)((longlong)puVar20 + 2) * 8) != 0) &&
       (*(longlong *)(auStack_2a8 + (ulonglong)(byte)puVar20[1] * 8) != 0)) {
      FUN_1455d6510();
    }
    goto LAB_140045d9a;
  case 0x31:
    lVar12 = *(longlong *)(auStack_2a8 + (ulonglong)*(byte *)((longlong)puVar20 + 2) * 8);
    puVar19 = (uint *)((longlong)puVar20 + 6);
    if (lVar12 != 0) {
      auStack_108._0_4_ =
           func_0x0001455d59d0(*(undefined8 *)(param_1 + 2),
                               *(undefined2 *)((longlong)param_1 + 0x276),(short)puVar20[1],
                               afStack_368);
      auStack_108._4_4_ = auStack_108._0_4_;
      auStack_108._8_4_ = auStack_108._0_4_;
      auStack_108._12_4_ = auStack_108._0_4_;
      FUN_1455d65b0(lVar12);
    }
    goto LAB_140045d9a;
  case 0x32:
    uVar6 = *(undefined2 *)((longlong)param_1 + 0x276);
    uVar11 = *(undefined8 *)(param_1 + 2);
    uVar17 = (ulonglong)*(byte *)((longlong)puVar20 + 2);
    auVar73._0_8_ = func_0x0001455d59d0(uVar11,uVar6,(short)puVar20[1],afStack_368);
    auVar73._8_56_ = extraout_var_34;
    auVar153 = ZEXT1664(auVar73._0_16_);
    puVar19 = puVar20 + 2;
    func_0x0001455d59d0(uVar11,uVar6,*(undefined2 *)((longlong)puVar20 + 6),afStack_368);
    fVar25 = (float)FUN_144ace6b0(auVar153._0_8_);
    break;
  case 0x33:
    puVar19 = (uint *)((longlong)puVar20 + 6);
    if ((*(longlong *)(auStack_2a8 + (ulonglong)*(byte *)((longlong)puVar20 + 2) * 8) != 0) &&
       (*(longlong *)(auStack_2a8 + (ulonglong)(byte)puVar20[1] * 8) != 0)) {
      FUN_1455d6650();
    }
    goto LAB_140045d9a;
  case 0x34:
    lVar12 = *(longlong *)(auStack_2a8 + (ulonglong)*(byte *)((longlong)puVar20 + 2) * 8);
    puVar19 = (uint *)((longlong)puVar20 + 6);
    if (lVar12 != 0) {
      auStack_f8._0_4_ =
           func_0x0001455d59d0(*(undefined8 *)(param_1 + 2),
                               *(undefined2 *)((longlong)param_1 + 0x276),(short)puVar20[1],
                               afStack_368);
      auStack_f8._4_4_ = auStack_f8._0_4_;
      auStack_f8._8_4_ = auStack_f8._0_4_;
      auStack_f8._12_4_ = auStack_f8._0_4_;
      FUN_1455d6740(lVar12);
    }
    goto LAB_140045d9a;
  case 0x35:
    uVar6 = *(undefined2 *)((longlong)param_1 + 0x276);
    uVar11 = *(undefined8 *)(param_1 + 2);
    uVar17 = (ulonglong)*(byte *)((longlong)puVar20 + 2);
    auVar120._0_8_ = func_0x0001455d59d0(uVar11,uVar6,(short)puVar20[1],afStack_368);
    auVar120._8_56_ = extraout_var_81;
    auVar153 = ZEXT1664(auVar120._0_16_);
    puVar19 = puVar20 + 2;
    func_0x0001455d59d0(uVar11,uVar6,*(undefined2 *)((longlong)puVar20 + 6),afStack_368);
    fVar25 = (float)FUN_144ace730(auVar153._0_8_);
    break;
  case 0x36:
    uVar6 = *(undefined2 *)((longlong)param_1 + 0x276);
    uVar11 = *(undefined8 *)(param_1 + 2);
    bVar8 = *(byte *)((longlong)puVar20 + 2);
    auVar66._0_8_ = func_0x0001455d59d0(uVar11,uVar6,(short)puVar20[1],afStack_368);
    auVar66._8_56_ = extraout_var_27;
    auVar153 = ZEXT1664(auVar66._0_16_);
    auVar67._0_8_ =
         func_0x0001455d59d0(uVar11,uVar6,*(undefined2 *)((longlong)puVar20 + 6),afStack_368);
    auVar67._8_56_ = extraout_var_28;
    auVar154 = ZEXT1664(auVar67._0_16_);
    uVar11 = func_0x0001455d5eb0(param_1);
    FUN_1455d6820(*(undefined8 *)(auStack_2a8 + (ulonglong)bVar8 * 8),auVar153._0_8_,auVar154._0_8_,
                  uVar11);
    puVar19 = (uint *)((longlong)puVar20 + 10);
    goto LAB_140045d9a;
  case 0x37:
    uVar6 = *(undefined2 *)((longlong)param_1 + 0x276);
    uVar11 = *(undefined8 *)(param_1 + 2);
    uVar17 = (ulonglong)*(byte *)((longlong)puVar20 + 2);
    auVar117._0_8_ = func_0x0001455d59d0(uVar11,uVar6,(short)puVar20[1],afStack_368);
    auVar117._8_56_ = extraout_var_78;
    auVar153 = ZEXT1664(auVar117._0_16_);
    auVar118._0_8_ =
         func_0x0001455d59d0(uVar11,uVar6,*(undefined2 *)((longlong)puVar20 + 6),afStack_368);
    auVar118._8_56_ = extraout_var_79;
    auVar154 = ZEXT1664(auVar118._0_16_);
    auVar119._0_8_ = func_0x0001455d59d0(uVar11,uVar6,(short)puVar20[2],afStack_368);
    auVar119._8_56_ = extraout_var_80;
    auVar155 = ZEXT1664(auVar119._0_16_);
    puVar19 = puVar20 + 3;
    uVar11 = func_0x0001455d5eb0(param_1);
    fVar25 = (float)FUN_1455d6a60(auVar153._0_8_,auVar154._0_8_,auVar155._0_8_,uVar11);
    break;
  case 0x38:
  case 0x8a:
    uVar6 = *(undefined2 *)((longlong)param_1 + 0x276);
    bVar8 = *(byte *)((longlong)puVar20 + 2);
    bVar3 = (byte)puVar20[1];
    bVar2 = *(byte *)((longlong)puVar20 + 6);
    uVar22 = puVar20[2];
    bVar4 = *(byte *)((longlong)puVar20 + 10);
    uVar11 = *(undefined8 *)(param_1 + 2);
    auVar53._0_8_ = func_0x0001455d59d0(uVar11,uVar6,(short)puVar20[3],afStack_368);
    auVar53._8_56_ = extraout_var_09;
    auVar153 = ZEXT1664(auVar53._0_16_);
    func_0x0001455d59d0(uVar11,uVar6,*(undefined2 *)((longlong)puVar20 + 0xe),afStack_368);
    uVar11 = auVar153._0_8_;
    in_stack_fffffffffffffc50 = afStack_368 + (byte)uVar22;
    goto code_r0x000140044654;
  case 0x39:
  case 0x8b:
    uVar6 = *(undefined2 *)((longlong)param_1 + 0x276);
    bVar2 = *(byte *)((longlong)puVar20 + 2);
    bVar8 = (byte)puVar20[1];
    bVar3 = *(byte *)((longlong)puVar20 + 6);
    uVar22 = puVar20[2];
    bVar4 = *(byte *)((longlong)puVar20 + 10);
    uVar11 = *(undefined8 *)(param_1 + 2);
    auVar52._0_8_ = func_0x0001455d59d0(uVar11,uVar6,(short)puVar20[3],afStack_368);
    auVar52._8_56_ = extraout_var_08;
    auVar153 = ZEXT1664(auVar52._0_16_);
    func_0x0001455d59d0(uVar11,uVar6,*(undefined2 *)((longlong)puVar20 + 0xe),afStack_368);
    uVar11 = auVar153._0_8_;
    in_stack_fffffffffffffc50 = afStack_368 + (byte)uVar22;
    goto code_r0x0001400447d2;
  case 0x3a:
    uVar6 = *(undefined2 *)((longlong)param_1 + 0x276);
    bVar8 = *(byte *)((longlong)puVar20 + 2);
    uVar22 = puVar20[1];
    bVar4 = *(byte *)((longlong)puVar20 + 6);
    uVar21 = puVar20[2];
    bVar2 = *(byte *)((longlong)puVar20 + 10);
    uVar11 = *(undefined8 *)(param_1 + 2);
    auVar111._0_8_ = func_0x0001455d59d0(uVar11,uVar6,(short)puVar20[3],afStack_368);
    auVar111._8_56_ = extraout_var_72;
    auVar153 = ZEXT1664(auVar111._0_16_);
    func_0x0001455d59d0(uVar11,uVar6,*(undefined2 *)((longlong)puVar20 + 0xe),afStack_368);
    in_stack_fffffffffffffc50 = afStack_368 + (byte)uVar21;
    in_stack_fffffffffffffc58 = afStack_368 + bVar2;
    in_stack_fffffffffffffc48 = afStack_368 + bVar4;
    FUN_1455d6b50(auVar153._0_8_,in_stack_fffffffffffffc48,afStack_368 + bVar8,
                  afStack_368 + (byte)uVar22,in_stack_fffffffffffffc48,in_stack_fffffffffffffc50,
                  in_stack_fffffffffffffc58);
    puVar19 = puVar20 + 4;
    goto LAB_140045d9a;
  case 0x3b:
    uVar6 = *(undefined2 *)((longlong)param_1 + 0x276);
    bVar8 = *(byte *)((longlong)puVar20 + 2);
    uVar22 = puVar20[1];
    bVar4 = *(byte *)((longlong)puVar20 + 6);
    uVar21 = puVar20[2];
    bVar2 = *(byte *)((longlong)puVar20 + 10);
    uVar11 = *(undefined8 *)(param_1 + 2);
    auVar75._0_8_ = func_0x0001455d59d0(uVar11,uVar6,(short)puVar20[3],afStack_368);
    auVar75._8_56_ = extraout_var_36;
    auVar153 = ZEXT1664(auVar75._0_16_);
    func_0x0001455d59d0(uVar11,uVar6,*(undefined2 *)((longlong)puVar20 + 0xe),afStack_368);
    in_stack_fffffffffffffc50 = afStack_368 + (byte)uVar21;
    in_stack_fffffffffffffc58 = afStack_368 + bVar2;
    in_stack_fffffffffffffc48 = afStack_368 + bVar4;
    FUN_144ace7c0(auVar153._0_8_,in_stack_fffffffffffffc48,afStack_368 + bVar8,
                  afStack_368 + (byte)uVar22,in_stack_fffffffffffffc48,in_stack_fffffffffffffc50,
                  in_stack_fffffffffffffc58);
    puVar19 = puVar20 + 4;
    goto LAB_140045d9a;
  case 0x3c:
    uVar6 = *(undefined2 *)((longlong)param_1 + 0x276);
    bVar8 = *(byte *)((longlong)puVar20 + 2);
    bVar3 = (byte)puVar20[1];
    bVar2 = *(byte *)((longlong)puVar20 + 6);
    uVar22 = puVar20[2];
    bVar4 = *(byte *)((longlong)puVar20 + 10);
    uVar11 = *(undefined8 *)(param_1 + 2);
    auVar95._0_8_ = func_0x0001455d59d0(uVar11,uVar6,(short)puVar20[3],afStack_368);
    auVar95._8_56_ = extraout_var_56;
    auVar153 = ZEXT1664(auVar95._0_16_);
    func_0x0001455d59d0(uVar11,uVar6,*(undefined2 *)((longlong)puVar20 + 0xe),afStack_368);
    uVar11 = auVar153._0_8_;
    in_stack_fffffffffffffc50 = afStack_368 + (byte)uVar22;
code_r0x000140044654:
    uStack_370 = (ulonglong)bVar8;
    in_stack_fffffffffffffc58 = afStack_368 + bVar4;
    in_stack_fffffffffffffc48 = afStack_368 + bVar2;
    FUN_144dcf8a0(uVar11,in_stack_fffffffffffffc48,afStack_368 + uStack_370,afStack_368 + bVar3,
                  in_stack_fffffffffffffc48,in_stack_fffffffffffffc50,in_stack_fffffffffffffc58);
    puVar19 = puVar20 + 4;
    goto LAB_140045d9a;
  case 0x3d:
    uVar6 = *(undefined2 *)((longlong)param_1 + 0x276);
    bVar2 = *(byte *)((longlong)puVar20 + 2);
    bVar8 = (byte)puVar20[1];
    bVar3 = *(byte *)((longlong)puVar20 + 6);
    uVar22 = puVar20[2];
    bVar4 = *(byte *)((longlong)puVar20 + 10);
    uVar11 = *(undefined8 *)(param_1 + 2);
    auVar100._0_8_ = func_0x0001455d59d0(uVar11,uVar6,(short)puVar20[3],afStack_368);
    auVar100._8_56_ = extraout_var_61;
    auVar153 = ZEXT1664(auVar100._0_16_);
    func_0x0001455d59d0(uVar11,uVar6,*(undefined2 *)((longlong)puVar20 + 0xe),afStack_368);
    uVar11 = auVar153._0_8_;
    in_stack_fffffffffffffc50 = afStack_368 + (byte)uVar22;
code_r0x0001400447d2:
    uStack_370 = (ulonglong)bVar2;
    in_stack_fffffffffffffc58 = afStack_368 + bVar4;
    in_stack_fffffffffffffc48 = afStack_368 + bVar3;
    FUN_144dd0050(uVar11,in_stack_fffffffffffffc48,afStack_368 + uStack_370,afStack_368 + bVar8,
                  in_stack_fffffffffffffc48,in_stack_fffffffffffffc50,in_stack_fffffffffffffc58);
    puVar19 = puVar20 + 4;
    goto LAB_140045d9a;
  case 0x3e:
    uVar6 = *(undefined2 *)((longlong)param_1 + 0x276);
    bVar8 = *(byte *)((longlong)puVar20 + 2);
    uVar22 = puVar20[1];
    bVar4 = *(byte *)((longlong)puVar20 + 6);
    uVar21 = puVar20[2];
    bVar2 = *(byte *)((longlong)puVar20 + 10);
    uVar11 = *(undefined8 *)(param_1 + 2);
    auVar85._0_8_ = func_0x0001455d59d0(uVar11,uVar6,(short)puVar20[3],afStack_368);
    auVar85._8_56_ = extraout_var_46;
    auVar153 = ZEXT1664(auVar85._0_16_);
    func_0x0001455d59d0(uVar11,uVar6,*(undefined2 *)((longlong)puVar20 + 0xe),afStack_368);
    uVar11 = func_0x0001455d59d0(uVar11,uVar6,(short)puVar20[4],afStack_368);
    in_stack_fffffffffffffc58 = afStack_368 + (byte)uVar21;
    in_stack_fffffffffffffc60 = afStack_368 + bVar2;
    in_stack_fffffffffffffc50 = afStack_368 + bVar4;
    in_stack_fffffffffffffc48 = afStack_368 + (byte)uVar22;
    FUN_144dcfbe0(auVar153._0_8_,in_stack_fffffffffffffc50,uVar11,afStack_368 + bVar8,
                  in_stack_fffffffffffffc48,in_stack_fffffffffffffc50,in_stack_fffffffffffffc58,
                  in_stack_fffffffffffffc60);
    puVar19 = (uint *)((longlong)puVar20 + 0x12);
    goto LAB_140045d9a;
  case 0x3f:
    lVar12 = *(longlong *)(auStack_2a8 + (ulonglong)*(byte *)((longlong)puVar20 + 2) * 8);
    puVar19 = (uint *)((longlong)puVar20 + 0xe);
    if (lVar12 != 0) {
      uVar6 = *(undefined2 *)((longlong)param_1 + 0x276);
      uVar11 = *(undefined8 *)(param_1 + 2);
      auVar76._0_8_ = func_0x0001455d59d0(uVar11,uVar6,(short)puVar20[3],afStack_368);
      auVar76._8_56_ = extraout_var_37;
      auVar153 = ZEXT1664(auVar76._0_16_);
      auVar77._0_8_ =
           func_0x0001455d59d0(uVar11,uVar6,*(undefined2 *)((longlong)puVar20 + 10),afStack_368);
      auVar77._8_56_ = extraout_var_38;
      auVar154 = ZEXT1664(auVar77._0_16_);
      auVar78._0_8_ = func_0x0001455d59d0(uVar11,uVar6,(short)puVar20[2],afStack_368);
      auVar78._8_56_ = extraout_var_39;
      auVar155 = ZEXT1664(auVar78._0_16_);
      auVar79._0_8_ =
           func_0x0001455d59d0(uVar11,uVar6,*(undefined2 *)((longlong)puVar20 + 6),afStack_368);
      auVar79._8_56_ = extraout_var_40;
      auVar156 = ZEXT1664(auVar79._0_16_);
      auVar80._0_8_ = func_0x0001455d59d0(uVar11,uVar6,(short)puVar20[1],afStack_368);
      auVar80._8_56_ = extraout_var_41;
      auVar157 = ZEXT1664(auVar80._0_16_);
      in_stack_fffffffffffffc58 = (float *)func_0x0001455d5eb0(param_1);
      in_stack_fffffffffffffc50 = (float *)CONCAT44(uVar27,auVar153._0_4_);
      in_stack_fffffffffffffc48 = (float *)CONCAT44(uVar24,auVar154._0_4_);
      FUN_144dcd7d0(lVar12,auVar157._0_8_,auVar156._0_8_,auVar155._0_8_,in_stack_fffffffffffffc48,
                    in_stack_fffffffffffffc50,in_stack_fffffffffffffc58);
      puVar19 = puVar20 + 4;
    }
    goto LAB_140045d9a;
  case 0x40:
    lVar12 = *(longlong *)(auStack_2a8 + (ulonglong)*(byte *)((longlong)puVar20 + 2) * 8);
    puVar19 = puVar20 + 4;
    if (lVar12 != 0) {
      in_stack_fffffffffffffc58 =
           (float *)func_0x0001455d5eb0(param_1,*(undefined2 *)((longlong)puVar20 + 0xe));
      uVar6 = *(undefined2 *)((longlong)param_1 + 0x276);
      uVar11 = *(undefined8 *)(param_1 + 2);
      auVar96._0_8_ = func_0x0001455d59d0(uVar11,uVar6,(short)puVar20[3],afStack_368);
      auVar96._8_56_ = extraout_var_57;
      auVar153 = ZEXT1664(auVar96._0_16_);
      auVar97._0_8_ =
           func_0x0001455d59d0(uVar11,uVar6,*(undefined2 *)((longlong)puVar20 + 10),afStack_368);
      auVar97._8_56_ = extraout_var_58;
      auVar154 = ZEXT1664(auVar97._0_16_);
      auVar98._0_8_ = func_0x0001455d59d0(uVar11,uVar6,(short)puVar20[2],afStack_368);
      auVar98._8_56_ = extraout_var_59;
      auVar155 = ZEXT1664(auVar98._0_16_);
      auVar99._0_8_ =
           func_0x0001455d59d0(uVar11,uVar6,*(undefined2 *)((longlong)puVar20 + 6),afStack_368);
      auVar99._8_56_ = extraout_var_60;
      auVar156 = ZEXT1664(auVar99._0_16_);
      uVar11 = func_0x0001455d59d0(uVar11,uVar6,(short)puVar20[1],afStack_368);
      in_stack_fffffffffffffc50 = (float *)CONCAT44(uVar27,auVar153._0_4_);
      in_stack_fffffffffffffc48 = (float *)CONCAT44(uVar24,auVar154._0_4_);
      FUN_144dccdd0(lVar12,uVar11,auVar156._0_8_,auVar155._0_8_,in_stack_fffffffffffffc48,
                    in_stack_fffffffffffffc50,in_stack_fffffffffffffc58);
    }
    goto LAB_140045d9a;
  case 0x41:
    lVar12 = *(longlong *)(auStack_2a8 + (ulonglong)*(byte *)((longlong)puVar20 + 2) * 8);
    puVar19 = (uint *)((longlong)puVar20 + 6);
    if ((lVar12 != 0) &&
       (lVar18 = *(longlong *)(auStack_2a8 + (ulonglong)(byte)puVar20[1] * 8), lVar18 != 0)) {
      uVar11 = func_0x0001455d5eb0(param_1,*(undefined2 *)((longlong)puVar20 + 6));
      FUN_1455d6cb0(lVar12,lVar18,uVar11);
      puVar19 = puVar20 + 2;
    }
    goto LAB_140045d9a;
  case 0x42:
    lVar12 = *(longlong *)(auStack_2a8 + (ulonglong)*(byte *)((longlong)puVar20 + 2) * 8);
    puVar19 = (uint *)((longlong)puVar20 + 6);
    if (lVar12 != 0) {
      auVar71._0_8_ =
           func_0x0001455d59d0(*(undefined8 *)(param_1 + 2),
                               *(undefined2 *)((longlong)param_1 + 0x276),(short)puVar20[1],
                               afStack_368);
      auVar71._8_56_ = extraout_var_32;
      auVar153 = ZEXT1664(auVar71._0_16_);
      uVar11 = func_0x0001455d5eb0(param_1);
      func_0x0001455d6e50(lVar12,auVar153._0_8_,uVar11);
      puVar19 = puVar20 + 2;
    }
    goto LAB_140045d9a;
  case 0x43:
    uVar6 = *(undefined2 *)((longlong)param_1 + 0x276);
    uVar11 = *(undefined8 *)(param_1 + 2);
    uVar17 = (ulonglong)*(byte *)((longlong)puVar20 + 2);
    auVar124._0_8_ = func_0x0001455d59d0(uVar11,uVar6,(short)puVar20[1],afStack_368);
    auVar124._8_56_ = extraout_var_85;
    auVar153 = ZEXT1664(auVar124._0_16_);
    auVar125._0_8_ =
         func_0x0001455d59d0(uVar11,uVar6,*(undefined2 *)((longlong)puVar20 + 6),afStack_368);
    auVar125._8_56_ = extraout_var_86;
    auVar154 = ZEXT1664(auVar125._0_16_);
    puVar19 = (uint *)((longlong)puVar20 + 10);
    uVar11 = func_0x0001455d5eb0(param_1);
    fVar25 = (float)FUN_144ace8d0(auVar153._0_8_,auVar154._0_8_,uVar11);
    break;
  case 0x44:
    lVar12 = *(longlong *)(auStack_2a8 + (ulonglong)*(byte *)((longlong)puVar20 + 2) * 8);
    puVar19 = (uint *)((longlong)puVar20 + 6);
    if ((lVar12 != 0) &&
       (lVar18 = *(longlong *)(auStack_2a8 + (ulonglong)(byte)puVar20[1] * 8), lVar18 != 0)) {
      uVar11 = func_0x0001455d5eb0(param_1,*(undefined2 *)((longlong)puVar20 + 6));
      FUN_144ace920(lVar12,lVar18,uVar11);
      puVar19 = puVar20 + 2;
    }
    goto LAB_140045d9a;
  case 0x45:
    lVar12 = *(longlong *)(auStack_2a8 + (ulonglong)*(byte *)((longlong)puVar20 + 2) * 8);
    puVar19 = (uint *)((longlong)puVar20 + 6);
    if (lVar12 != 0) {
      auVar54._0_8_ =
           func_0x0001455d59d0(*(undefined8 *)(param_1 + 2),
                               *(undefined2 *)((longlong)param_1 + 0x276),(short)puVar20[1],
                               afStack_368);
      auVar54._8_56_ = extraout_var_14;
      auVar153 = ZEXT1664(auVar54._0_16_);
      uVar11 = func_0x0001455d5eb0(param_1);
      FUN_1455d6f50(lVar12,auVar153._0_8_,uVar11);
      puVar19 = puVar20 + 2;
    }
    goto LAB_140045d9a;
  case 0x46:
    uVar6 = *(undefined2 *)((longlong)param_1 + 0x276);
    uVar11 = *(undefined8 *)(param_1 + 2);
    uVar17 = (ulonglong)*(byte *)((longlong)puVar20 + 2);
    auVar64._0_8_ = func_0x0001455d59d0(uVar11,uVar6,(short)puVar20[1],afStack_368);
    auVar64._8_56_ = extraout_var_25;
    auVar153 = ZEXT1664(auVar64._0_16_);
    auVar65._0_8_ =
         func_0x0001455d59d0(uVar11,uVar6,*(undefined2 *)((longlong)puVar20 + 6),afStack_368);
    auVar65._8_56_ = extraout_var_26;
    auVar154 = ZEXT1664(auVar65._0_16_);
    puVar19 = (uint *)((longlong)puVar20 + 10);
    uVar11 = func_0x0001455d5eb0(param_1);
    fVar25 = (float)FUN_144acead0(auVar153._0_8_,auVar154._0_8_,uVar11);
    break;
  case 0x47:
    lVar12 = *(longlong *)(auStack_2a8 + (ulonglong)*(byte *)((longlong)puVar20 + 2) * 8);
    puVar19 = puVar20 + 1;
    if (lVar12 != 0) {
      func_0x0001455d5eb0(param_1,(short)puVar20[1]);
      FUN_1455d7070(lVar12);
      puVar19 = (uint *)((longlong)puVar20 + 6);
    }
    goto LAB_140045d9a;
  case 0x48:
    lVar12 = *(longlong *)(auStack_2a8 + (ulonglong)*(byte *)((longlong)puVar20 + 2) * 8);
    puVar19 = (uint *)((longlong)puVar20 + 6);
    if (lVar12 != 0) {
      uVar24 = func_0x0001455d59d0(*(undefined8 *)(param_1 + 2),
                                   *(undefined2 *)((longlong)param_1 + 0x276),(short)puVar20[1],
                                   afStack_368);
      auVar153 = ZEXT1664(CONCAT412(uVar24,CONCAT48(uVar24,CONCAT44(uVar24,uVar24))));
      uVar11 = func_0x0001455d5eb0(param_1,*(undefined2 *)((longlong)puVar20 + 6));
      auStack_e8 = auVar153._0_16_;
      func_0x0001455d7120(lVar12,auStack_e8,uVar11);
      puVar19 = puVar20 + 2;
    }
    goto LAB_140045d9a;
  case 0x49:
    uVar17 = (ulonglong)*(byte *)((longlong)puVar20 + 2);
    auVar123._0_8_ =
         func_0x0001455d59d0(*(undefined8 *)(param_1 + 2),*(undefined2 *)((longlong)param_1 + 0x276)
                             ,(short)puVar20[1],afStack_368);
    auVar123._8_56_ = extraout_var_84;
    auVar153 = ZEXT1664(auVar123._0_16_);
    puVar19 = puVar20 + 2;
    func_0x0001455d5eb0(param_1,*(undefined2 *)((longlong)puVar20 + 6));
    fVar25 = (float)func_0x0001455d7170(auVar153._0_8_);
    break;
  case 0x4a:
    puVar19 = puVar20 + 1;
    if (*(longlong *)(auStack_2a8 + (ulonglong)*(byte *)((longlong)puVar20 + 2) * 8) != 0) {
      FUN_1455d71c0();
    }
    goto LAB_140045d9a;
  case 0x4b:
    uVar17 = (ulonglong)*(byte *)((longlong)puVar20 + 2);
    puVar19 = (uint *)((longlong)puVar20 + 6);
    func_0x0001455d59d0(*(undefined8 *)(param_1 + 2),*(undefined2 *)((longlong)param_1 + 0x276),
                        (short)puVar20[1],afStack_368);
    fVar25 = (float)func_0x0001455d7280();
    break;
  case 0x4c:
    puVar19 = puVar20 + 1;
    if (*(longlong *)(auStack_2a8 + (ulonglong)*(byte *)((longlong)puVar20 + 2) * 8) != 0) {
      FUN_1455d7290();
    }
    goto LAB_140045d9a;
  case 0x4d:
    uVar17 = (ulonglong)*(byte *)((longlong)puVar20 + 2);
    puVar19 = (uint *)((longlong)puVar20 + 6);
    func_0x0001455d59d0(*(undefined8 *)(param_1 + 2),*(undefined2 *)((longlong)param_1 + 0x276),
                        (short)puVar20[1],afStack_368);
    fVar25 = (float)func_0x0001455d7350();
    break;
  case 0x4e:
    puVar19 = puVar20 + 1;
    if (*(longlong *)(auStack_2a8 + (ulonglong)*(byte *)((longlong)puVar20 + 2) * 8) != 0) {
      func_0x0001455d7360();
    }
    goto LAB_140045d9a;
  case 0x4f:
    uVar17 = (ulonglong)*(byte *)((longlong)puVar20 + 2);
    puVar19 = (uint *)((longlong)puVar20 + 6);
    func_0x0001455d59d0(*(undefined8 *)(param_1 + 2),*(undefined2 *)((longlong)param_1 + 0x276),
                        (short)puVar20[1],afStack_368);
    fVar25 = (float)func_0x000144aceb30();
    break;
  case 0x50:
    puVar19 = puVar20 + 1;
    if (*(longlong *)(auStack_2a8 + (ulonglong)*(byte *)((longlong)puVar20 + 2) * 8) != 0) {
      func_0x0001455d73b0();
    }
    goto LAB_140045d9a;
  case 0x51:
    uVar17 = (ulonglong)*(byte *)((longlong)puVar20 + 2);
    puVar19 = (uint *)((longlong)puVar20 + 6);
    func_0x0001455d59d0(*(undefined8 *)(param_1 + 2),*(undefined2 *)((longlong)param_1 + 0x276),
                        (short)puVar20[1],afStack_368);
    fVar25 = (float)func_0x000144aceb60();
    break;
  case 0x52:
    puVar19 = puVar20 + 1;
    if (*(longlong *)(auStack_2a8 + (ulonglong)*(byte *)((longlong)puVar20 + 2) * 8) != 0) {
      func_0x0001455d73f0();
    }
    goto LAB_140045d9a;
  case 0x53:
    uVar17 = (ulonglong)*(byte *)((longlong)puVar20 + 2);
    puVar19 = (uint *)((longlong)puVar20 + 6);
    func_0x0001455d59d0(*(undefined8 *)(param_1 + 2),*(undefined2 *)((longlong)param_1 + 0x276),
                        (short)puVar20[1],afStack_368);
    fVar25 = (float)func_0x0001455d7430();
    break;
  case 0x54:
    bVar8 = *(byte *)((longlong)puVar20 + 2);
    uVar17 = (ulonglong)(ushort)puVar20[1];
    if (uVar17 < 0x100) {
      uVar23 = (ulonglong)*(ushort *)((longlong)puVar20 + 6);
      if (uVar23 < 0x100) {
        uVar11 = func_0x0001455d5eb0(param_1,(short)puVar20[2]);
        fVar25 = (float)func_0x000144aceb90(*(undefined8 *)(auStack_2a8 + uVar17 * 8),
                                            *(undefined8 *)(auStack_2a8 + uVar23 * 8),uVar11);
      }
      else {
        uVar24 = func_0x0001455d59d0(*(undefined8 *)(param_1 + 2),
                                     *(undefined2 *)((longlong)param_1 + 0x276),uVar23,afStack_368);
        auVar153 = ZEXT1664(CONCAT412(uVar24,CONCAT48(uVar24,CONCAT44(uVar24,uVar24))));
        uVar11 = func_0x0001455d5eb0(param_1,(short)puVar20[2]);
        auStack_d8 = auVar153._0_16_;
        fVar25 = (float)func_0x0001455a3e60(*(undefined8 *)(auStack_2a8 + uVar17 * 8),auStack_d8,
                                            uVar11);
      }
    }
    else {
      uVar6 = *(undefined2 *)((longlong)param_1 + 0x276);
      uVar11 = *(undefined8 *)(param_1 + 2);
      auVar131._0_8_ = func_0x0001455d59d0(uVar11,uVar6,uVar17,afStack_368);
      auVar131._8_56_ = extraout_var_92;
      auVar153 = ZEXT1664(auVar131._0_16_);
      auVar132._0_8_ =
           func_0x0001455d59d0(uVar11,uVar6,*(undefined2 *)((longlong)puVar20 + 6),afStack_368);
      auVar132._8_56_ = extraout_var_93;
      auVar154 = ZEXT1664(auVar132._0_16_);
      uVar11 = func_0x0001455d5eb0(param_1);
      fVar25 = (float)func_0x000144df00d0(auVar153._0_8_,auVar154._0_8_,uVar11);
    }
    afStack_368[bVar8] = fVar25;
    goto code_r0x000140045d7f;
  case 0x55:
    goto code_r0x000140045a57;
  case 0x56:
    uVar11 = 0;
    uVar30 = 0;
    goto code_r0x000140045a57;
  case 0x57:
    uVar11 = 1;
    goto code_r0x000140045a57;
  case 0x58:
    goto code_r0x0001400418ab;
  case 0x59:
    uVar30 = 1;
    uVar11 = 0;
    goto code_r0x000140045a57;
  case 0x5a:
    uVar11 = 1;
code_r0x0001400418ab:
    uVar30 = 1;
code_r0x000140045a57:
    if ((uVar22 & 0xf) == 2) {
      uVar17 = (ulonglong)(byte)puVar20[1];
      puVar16 = (uint *)((longlong)puVar20 + 6);
    }
    else {
      puVar16 = puVar20 + 1;
      uVar17 = 0xffffffff;
    }
    uVar6 = *(undefined2 *)((longlong)param_1 + 0x276);
    uVar14 = *(undefined8 *)(param_1 + 2);
    bVar8 = *(byte *)((longlong)puVar20 + 2);
    auVar126._0_8_ = func_0x0001455d59d0(uVar14,uVar6,(short)*puVar16,afStack_368);
    auVar126._8_56_ = extraout_var_87;
    auVar153 = ZEXT1664(auVar126._0_16_);
    auVar127._0_8_ =
         func_0x0001455d59d0(uVar14,uVar6,*(undefined2 *)((longlong)puVar16 + 2),afStack_368);
    auVar127._8_56_ = extraout_var_88;
    auVar154 = ZEXT1664(auVar127._0_16_);
    auVar128._0_8_ = func_0x0001455d59d0(uVar14,uVar6,(short)puVar16[1],afStack_368);
    auVar128._8_56_ = extraout_var_89;
    auVar155 = ZEXT1664(auVar128._0_16_);
    auVar129._0_8_ =
         func_0x0001455d59d0(uVar14,uVar6,*(undefined2 *)((longlong)puVar16 + 6),afStack_368);
    auVar129._8_56_ = extraout_var_90;
    auVar156 = ZEXT1664(auVar129._0_16_);
    auVar130._0_8_ = func_0x0001455d59d0(uVar14,uVar6,(short)puVar16[2],afStack_368);
    auVar130._8_56_ = extraout_var_91;
    auVar157 = ZEXT1664(auVar130._0_16_);
    uVar28 = func_0x0001455d59d0(uVar14,uVar6,*(undefined2 *)((longlong)puVar16 + 10),afStack_368);
    uVar29 = func_0x0001455d59d0(uVar14,uVar6,(short)puVar16[3],afStack_368);
    uVar14 = func_0x0001455d5eb0(param_1,*(undefined2 *)((longlong)puVar16 + 0xe));
    in_stack_fffffffffffffc60 = (float *)CONCAT44(uVar159,auVar156._0_4_);
    in_stack_fffffffffffffc58 = (float *)CONCAT44(uVar158,auVar155._0_4_);
    in_stack_fffffffffffffc50 = (float *)CONCAT44(uVar27,auVar154._0_4_);
    in_stack_fffffffffffffc48 = (float *)CONCAT44(uVar24,auVar153._0_4_);
    fVar25 = (float)FUN_14512da80(uVar30,uVar11,*(undefined8 *)(auStack_2a8 + (ulonglong)bVar8 * 8),
                                  uVar14,in_stack_fffffffffffffc48,in_stack_fffffffffffffc50,
                                  in_stack_fffffffffffffc58,in_stack_fffffffffffffc60,auVar157._0_4_
                                  ,uVar28,uVar29);
    puVar19 = puVar16 + 4;
    if ((int)uVar17 != -1) {
      afStack_368[uVar17] = fVar25;
    }
    goto LAB_140045d9a;
  case 0x5b:
    goto code_r0x0001400442bd;
  case 0x5c:
    uVar11 = 0;
    goto code_r0x0001400442bd;
  case 0x5d:
    uVar11 = 1;
code_r0x0001400442bd:
    uStack_218 = (ulonglong)(byte)puVar20[1];
    uVar6 = *(undefined2 *)((longlong)param_1 + 0x276);
    uVar30 = *(undefined8 *)(param_1 + 2);
    bVar8 = *(byte *)((longlong)puVar20 + 2);
    bVar4 = *(byte *)((longlong)puVar20 + 10);
    uStack_210 = (ulonglong)*(byte *)((longlong)puVar20 + 6);
    uVar22 = puVar20[2];
    auVar90._0_8_ = func_0x0001455d59d0(uVar30,uVar6,(short)puVar20[3],afStack_368);
    auVar90._8_56_ = extraout_var_51;
    auVar153 = ZEXT1664(auVar90._0_16_);
    auVar91._0_8_ =
         func_0x0001455d59d0(uVar30,uVar6,*(undefined2 *)((longlong)puVar20 + 0xe),afStack_368);
    auVar91._8_56_ = extraout_var_52;
    auVar154 = ZEXT1664(auVar91._0_16_);
    uVar24 = func_0x0001455d59d0(uVar30,uVar6,(short)puVar20[4],afStack_368);
    in_stack_fffffffffffffc48 = (float *)&uStack_208;
    uStack_208 = CONCAT44(uStack_208._4_4_,uVar24);
    uVar24 = func_0x0001455d59d0(uVar30,uVar6,*(undefined2 *)((longlong)puVar20 + 0x12),afStack_368)
    ;
    uStack_208 = CONCAT44(uVar24,(float)uStack_208);
    fStack_200 = (float)func_0x0001455d59d0(uVar30,uVar6,(short)puVar20[5],afStack_368);
    afStack_1fc[0] =
         (float)func_0x0001455d59d0(uVar30,uVar6,*(undefined2 *)((longlong)puVar20 + 0x16),
                                    afStack_368);
    uVar30 = func_0x0001455d5eb0(param_1,(short)puVar20[6]);
    in_stack_fffffffffffffc60 = afStack_1fc;
    in_stack_fffffffffffffc58 = &fStack_200;
    in_stack_fffffffffffffc50 = (float *)((longlong)&uStack_208 + 4);
    fVar26 = (float)FUN_1455d7450(uVar11,auVar153._0_8_,auVar154._0_8_,uVar30,
                                  in_stack_fffffffffffffc48,in_stack_fffffffffffffc50,
                                  in_stack_fffffffffffffc58,in_stack_fffffffffffffc60);
    fVar143 = fStack_200;
    uVar17 = uStack_218;
    fVar25 = (float)uStack_208;
    fVar142 = uStack_208._4_4_;
    afStack_368[bVar4] = fVar26;
    afStack_368[bVar8] = fVar25;
    afStack_368[uVar17] = fVar142;
    fVar25 = afStack_1fc[0];
    afStack_368[uStack_210] = fVar143;
    afStack_368[(byte)uVar22] = fVar25;
    puVar19 = (uint *)((longlong)puVar20 + 0x1a);
    goto LAB_140045d9a;
  case 0x5e:
    afStack_368[*(byte *)((longlong)puVar20 + 2)] =
         (float)param_1[(ulonglong)(byte)puVar20[1] + 0x36];
    puVar19 = (uint *)((longlong)puVar20 + 6);
    goto LAB_140045d9a;
  case 0x5f:
    fVar25 = (float)func_0x0001455d59d0(*(undefined8 *)(param_1 + 2),
                                        *(undefined2 *)((longlong)param_1 + 0x276),
                                        *(undefined2 *)((longlong)puVar20 + 2),afStack_368);
    *(bool *)((longlong)param_1 + 0x27e) = _DAT_145fc6f0c <= fVar25;
    puVar19 = puVar20 + 1;
    goto LAB_140045d9a;
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
    puVar19 = puVar20 + 1;
    if ((lStack_228 != 0) &&
       (lVar12 = *(longlong *)(lStack_228 + (ulonglong)(uVar21 - 0x60) * 8), lVar12 != 0)) {
      func_0x000145f40560(*(undefined8 *)
                           (auStack_2a8 + (ulonglong)*(byte *)((longlong)puVar20 + 2) * 8),lVar12,
                          0x400);
    }
    goto LAB_140045d9a;
  case 0x68:
    uVar17 = (ulonglong)*(byte *)((longlong)puVar20 + 2);
    puVar19 = (uint *)((longlong)puVar20 + 6);
    func_0x0001455d59d0(*(undefined8 *)(param_1 + 2),*(undefined2 *)((longlong)param_1 + 0x276),
                        (short)puVar20[1],afStack_368);
    fVar25 = (float)func_0x000144acec20();
    break;
  case 0x69:
    puVar19 = puVar20 + 1;
    if (*(longlong *)(auStack_2a8 + (ulonglong)*(byte *)((longlong)puVar20 + 2) * 8) != 0) {
      FUN_144acec40();
    }
    goto LAB_140045d9a;
  case 0x6a:
    uVar6 = *(undefined2 *)((longlong)param_1 + 0x276);
    uVar11 = *(undefined8 *)(param_1 + 2);
    uVar17 = (ulonglong)*(byte *)((longlong)puVar20 + 2);
    auVar58._0_8_ = func_0x0001455d59d0(uVar11,uVar6,(short)puVar20[1],afStack_368);
    auVar58._8_56_ = extraout_var_18;
    auVar153 = ZEXT1664(auVar58._0_16_);
    auVar59._0_8_ =
         func_0x0001455d59d0(uVar11,uVar6,*(undefined2 *)((longlong)puVar20 + 6),afStack_368);
    auVar59._8_56_ = extraout_var_19;
    auVar154 = ZEXT1664(auVar59._0_16_);
    puVar19 = (uint *)((longlong)puVar20 + 10);
    uVar11 = func_0x0001455d5eb0(param_1);
    fVar25 = (float)func_0x000144aced70(auVar153._0_8_,auVar154._0_8_,uVar11);
    break;
  case 0x6b:
    uVar6 = *(undefined2 *)((longlong)param_1 + 0x276);
    uVar11 = *(undefined8 *)(param_1 + 2);
    bVar8 = *(byte *)((longlong)puVar20 + 2);
    auVar55._0_8_ = func_0x0001455d59d0(uVar11,uVar6,(short)puVar20[1],afStack_368);
    auVar55._8_56_ = extraout_var_15;
    auVar153 = ZEXT1664(auVar55._0_16_);
    auVar56._0_8_ =
         func_0x0001455d59d0(uVar11,uVar6,*(undefined2 *)((longlong)puVar20 + 6),afStack_368);
    auVar56._8_56_ = extraout_var_16;
    auVar154 = ZEXT1664(auVar56._0_16_);
    uVar11 = func_0x0001455d5eb0(param_1);
    func_0x0001455d76b0(*(undefined8 *)(auStack_2a8 + (ulonglong)bVar8 * 8),auVar153._0_8_,
                        auVar154._0_8_,uVar11);
    puVar19 = (uint *)((longlong)puVar20 + 10);
    goto LAB_140045d9a;
  case 0x6c:
  case 0x6d:
    uVar6 = *(undefined2 *)((longlong)param_1 + 0x276);
    uVar11 = *(undefined8 *)(param_1 + 2);
    bVar8 = *(byte *)((longlong)puVar20 + 2);
    auVar46._0_8_ = func_0x0001455d59d0(uVar11,uVar6,(short)puVar20[1],afStack_368);
    auVar46._8_56_ = extraout_var_02;
    auVar153 = ZEXT1664(auVar46._0_16_);
    auVar47._0_8_ =
         func_0x0001455d59d0(uVar11,uVar6,*(undefined2 *)((longlong)puVar20 + 6),afStack_368);
    auVar47._8_56_ = extraout_var_03;
    auVar154 = ZEXT1664(auVar47._0_16_);
    auVar48._0_8_ = func_0x0001455d59d0(uVar11,uVar6,(short)puVar20[2],afStack_368);
    auVar48._8_56_ = extraout_var_04;
    auVar155 = ZEXT1664(auVar48._0_16_);
    auVar49._0_8_ =
         func_0x0001455d59d0(uVar11,uVar6,*(undefined2 *)((longlong)puVar20 + 10),afStack_368);
    auVar49._8_56_ = extraout_var_05;
    auVar156 = ZEXT1664(auVar49._0_16_);
    in_stack_fffffffffffffc48 = (float *)func_0x0001455d5eb0(param_1);
    if (uVar21 == 0x6c) {
      fVar25 = (float)func_0x0001455d77f0(auVar153._0_8_,auVar154._0_8_,auVar155._0_8_,
                                          auVar156._0_8_,in_stack_fffffffffffffc48);
    }
    else {
      fVar25 = (float)func_0x0001455d7860(auVar153._0_8_,auVar154._0_8_,auVar155._0_8_,
                                          auVar156._0_8_,in_stack_fffffffffffffc48);
    }
    afStack_368[bVar8] = fVar25;
    puVar19 = (uint *)((longlong)puVar20 + 0xe);
    goto LAB_140045d9a;
  case 0x6e:
    puVar19 = (uint *)((longlong)puVar20 + 6);
    if ((*(longlong *)(auStack_2a8 + (ulonglong)*(byte *)((longlong)puVar20 + 2) * 8) != 0) &&
       (*(longlong *)(auStack_2a8 + (ulonglong)(byte)puVar20[1] * 8) != 0)) {
      func_0x000144acedb0();
    }
    goto LAB_140045d9a;
  case 0x6f:
    lVar12 = *(longlong *)(auStack_2a8 + (ulonglong)*(byte *)((longlong)puVar20 + 2) * 8);
    puVar19 = (uint *)((longlong)puVar20 + 6);
    if (lVar12 != 0) {
      auStack_c8._0_4_ =
           func_0x0001455d59d0(*(undefined8 *)(param_1 + 2),
                               *(undefined2 *)((longlong)param_1 + 0x276),(short)puVar20[1],
                               afStack_368);
      auStack_c8._4_4_ = auStack_c8._0_4_;
      auStack_c8._8_4_ = auStack_c8._0_4_;
      auStack_c8._12_4_ = auStack_c8._0_4_;
      func_0x0001455d78e0(lVar12);
    }
    goto LAB_140045d9a;
  case 0x70:
    uVar6 = *(undefined2 *)((longlong)param_1 + 0x276);
    uVar11 = *(undefined8 *)(param_1 + 2);
    uVar17 = (ulonglong)*(byte *)((longlong)puVar20 + 2);
    auVar57._0_8_ = func_0x0001455d59d0(uVar11,uVar6,(short)puVar20[1],afStack_368);
    auVar57._8_56_ = extraout_var_17;
    auVar153 = ZEXT1664(auVar57._0_16_);
    puVar19 = puVar20 + 2;
    func_0x0001455d59d0(uVar11,uVar6,*(undefined2 *)((longlong)puVar20 + 6),afStack_368);
    fVar25 = (float)func_0x0001455d7910(auVar153._0_8_);
    break;
  case 0x71:
  case 0x72:
    bVar8 = *(byte *)((longlong)puVar20 + 2);
    auVar50._0_8_ =
         func_0x0001455d59d0(*(undefined8 *)(param_1 + 2),*(undefined2 *)((longlong)param_1 + 0x276)
                             ,(short)puVar20[1],afStack_368);
    auVar50._8_56_ = extraout_var_06;
    auVar153 = ZEXT1664(auVar50._0_16_);
    uVar11 = func_0x0001455d5eb0(param_1);
    if (uVar21 == 0x71) {
      FUN_144acede0();
    }
    else {
      FUN_144acee80(*(undefined8 *)(auStack_2a8 + (ulonglong)bVar8 * 8),auVar153._0_8_,uVar11);
    }
    puVar19 = (uint *)((longlong)puVar20 + (ulonglong)((uVar22 & 0xf0) == 0x30) * 2 + 8);
    goto LAB_140045d9a;
  case 0x73:
  case 0x74:
    uVar6 = *(undefined2 *)((longlong)param_1 + 0x276);
    uVar11 = *(undefined8 *)(param_1 + 2);
    bVar8 = *(byte *)((longlong)puVar20 + 2);
    auVar43._0_8_ = func_0x0001455d59d0(uVar11,uVar6,(short)puVar20[1],afStack_368);
    auVar43._8_56_ = extraout_var;
    auVar153 = ZEXT1664(auVar43._0_16_);
    auVar44._0_8_ =
         func_0x0001455d59d0(uVar11,uVar6,*(undefined2 *)((longlong)puVar20 + 6),afStack_368);
    auVar44._8_56_ = extraout_var_00;
    auVar154 = ZEXT1664(auVar44._0_16_);
    uVar11 = func_0x0001455d5eb0(param_1);
    if (uVar21 == 0x73) {
      FUN_1455d7930(*(undefined8 *)(auStack_2a8 + (ulonglong)bVar8 * 8),auVar153._0_8_,
                    auVar154._0_8_);
    }
    else {
      FUN_1455d7a40(*(undefined8 *)(auStack_2a8 + (ulonglong)bVar8 * 8),auVar153._0_8_,
                    auVar154._0_8_,uVar11);
    }
code_r0x000140045d7f:
    puVar19 = (uint *)((longlong)puVar20 + 10);
    goto LAB_140045d9a;
  case 0x75:
    uVar6 = *(undefined2 *)((longlong)param_1 + 0x276);
    uVar11 = *(undefined8 *)(param_1 + 2);
    uVar17 = (ulonglong)*(byte *)((longlong)puVar20 + 2);
    auVar86._0_8_ = func_0x0001455d59d0(uVar11,uVar6,(short)puVar20[1],afStack_368);
    auVar86._8_56_ = extraout_var_47;
    auVar153 = ZEXT1664(auVar86._0_16_);
    auVar87._0_8_ =
         func_0x0001455d59d0(uVar11,uVar6,*(undefined2 *)((longlong)puVar20 + 6),afStack_368);
    auVar87._8_56_ = extraout_var_48;
    auVar154 = ZEXT1664(auVar87._0_16_);
    puVar19 = (uint *)((longlong)puVar20 + 10);
    uVar11 = func_0x0001455d5eb0(param_1);
    fVar25 = (float)func_0x000144aceef0(auVar153._0_8_,auVar154._0_8_,uVar11);
    break;
  case 0x76:
    uVar6 = *(undefined2 *)((longlong)param_1 + 0x276);
    uVar11 = *(undefined8 *)(param_1 + 2);
    uVar17 = (ulonglong)*(byte *)((longlong)puVar20 + 2);
    auVar83._0_8_ = func_0x0001455d59d0(uVar11,uVar6,(short)puVar20[1],afStack_368);
    auVar83._8_56_ = extraout_var_44;
    auVar153 = ZEXT1664(auVar83._0_16_);
    auVar84._0_8_ =
         func_0x0001455d59d0(uVar11,uVar6,*(undefined2 *)((longlong)puVar20 + 6),afStack_368);
    auVar84._8_56_ = extraout_var_45;
    auVar154 = ZEXT1664(auVar84._0_16_);
    puVar19 = (uint *)((longlong)puVar20 + 10);
    uVar11 = func_0x0001455d5eb0(param_1);
    fVar25 = (float)func_0x0001455d7db0(auVar153._0_8_,auVar154._0_8_,uVar11);
    break;
  case 0x77:
    bVar8 = *(byte *)((longlong)puVar20 + 2);
    uVar24 = func_0x0001455d59d0(*(undefined8 *)(param_1 + 2),
                                 *(undefined2 *)((longlong)param_1 + 0x276),(short)puVar20[1],
                                 afStack_368);
    pauVar13 = *(undefined1 (**) [16])(auStack_2a8 + (ulonglong)bVar8 * 8);
    auVar153 = ZEXT1664(CONCAT412(uVar24,CONCAT48(uVar24,CONCAT44(uVar24,uVar24))));
    func_0x00014512e470(pauVar13);
    auVar31 = auVar153._0_16_;
    *pauVar13 = auVar31;
    pauVar13[1] = auVar31;
    pauVar13[2] = auVar31;
    pauVar13[3] = auVar31;
    pauVar13[4] = auVar31;
    pauVar13[5] = auVar31;
    pauVar13[6] = auVar31;
    pauVar13[7] = auVar31;
    pauVar13[8] = auVar31;
    pauVar13[9] = auVar31;
    pauVar13[10] = auVar31;
    pauVar13[0xb] = auVar31;
    pauVar13[0xc] = auVar31;
    pauVar13[0xd] = auVar31;
    pauVar13[0xe] = auVar31;
    pauVar13[0xf] = auVar31;
    pauVar13[0x10] = auVar31;
    pauVar13[0x11] = auVar31;
    pauVar13[0x12] = auVar31;
    pauVar13[0x13] = auVar31;
    pauVar13[0x14] = auVar31;
    pauVar13[0x15] = auVar31;
    pauVar13[0x16] = auVar31;
    pauVar13[0x17] = auVar31;
    pauVar13[0x18] = auVar31;
    pauVar13[0x19] = auVar31;
    pauVar13[0x1a] = auVar31;
    pauVar13[0x1b] = auVar31;
    pauVar13[0x1c] = auVar31;
    pauVar13[0x1d] = auVar31;
    pauVar13[0x1e] = auVar31;
    pauVar13[0x1f] = auVar31;
    pauVar13[0x20] = auVar31;
    pauVar13[0x21] = auVar31;
    pauVar13[0x22] = auVar31;
    pauVar13[0x23] = auVar31;
    pauVar13[0x24] = auVar31;
    pauVar13[0x25] = auVar31;
    pauVar13[0x26] = auVar31;
    pauVar13[0x27] = auVar31;
    pauVar13[0x28] = auVar31;
    pauVar13[0x29] = auVar31;
    pauVar13[0x2a] = auVar31;
    pauVar13[0x2b] = auVar31;
    pauVar13[0x2c] = auVar31;
    pauVar13[0x2d] = auVar31;
    pauVar13[0x2e] = auVar31;
    pauVar13[0x2f] = auVar31;
    pauVar13[0x30] = auVar31;
    pauVar13[0x31] = auVar31;
    pauVar13[0x32] = auVar31;
    pauVar13[0x33] = auVar31;
    pauVar13[0x34] = auVar31;
    pauVar13[0x35] = auVar31;
    pauVar13[0x36] = auVar31;
    pauVar13[0x37] = auVar31;
    pauVar13[0x38] = auVar31;
    pauVar13[0x39] = auVar31;
    pauVar13[0x3a] = auVar31;
    pauVar13[0x3b] = auVar31;
    pauVar13[0x3c] = auVar31;
    pauVar13[0x3d] = auVar31;
    pauVar13[0x3e] = auVar31;
    pauVar13[0x3f] = auVar31;
code_r0x000140045d2a:
    puVar19 = (uint *)((longlong)puVar20 + 6);
    goto LAB_140045d9a;
  case 0x78:
    bVar8 = *(byte *)((longlong)puVar20 + 2);
    uVar22 = puVar20[1];
    bVar4 = *(byte *)((longlong)puVar20 + 6);
    uVar11 = func_0x0001455d5eb0(param_1,(short)puVar20[2]);
    FUN_1455d7e50(*(undefined8 *)(auStack_2a8 + (ulonglong)bVar8 * 8),
                  *(undefined8 *)(auStack_2a8 + (ulonglong)(byte)uVar22 * 8),
                  *(undefined8 *)(auStack_2a8 + (ulonglong)bVar4 * 8),uVar11);
    puVar19 = (uint *)((longlong)puVar20 + 10);
    goto LAB_140045d9a;
  case 0x79:
    func_0x000144ace5d0(*(undefined8 *)
                         (auStack_2a8 + (ulonglong)*(byte *)((longlong)puVar20 + 2) * 8),
                        *(undefined8 *)(auStack_2a8 + (ulonglong)(byte)puVar20[1] * 8),
                        *(undefined8 *)
                         (auStack_2a8 + (ulonglong)*(byte *)((longlong)puVar20 + 6) * 8));
    puVar19 = puVar20 + 2;
    goto LAB_140045d9a;
  case 0x7a:
  case 0x7b:
    uVar6 = *(undefined2 *)((longlong)param_1 + 0x276);
    bVar8 = *(byte *)((longlong)puVar20 + 2);
    uVar22 = puVar20[1];
    bVar4 = *(byte *)((longlong)puVar20 + 6);
    uVar21 = puVar20[2];
    bVar2 = *(byte *)((longlong)puVar20 + 10);
    uVar11 = *(undefined8 *)(param_1 + 2);
    auVar51._0_8_ = func_0x0001455d59d0(uVar11,uVar6,(short)puVar20[3],afStack_368);
    auVar51._8_56_ = extraout_var_07;
    auVar153 = ZEXT1664(auVar51._0_16_);
    func_0x0001455d59d0(uVar11,uVar6,*(undefined2 *)((longlong)puVar20 + 0xe),afStack_368);
    uVar11 = func_0x0001455d59d0(uVar11,uVar6,(short)puVar20[4],afStack_368);
    in_stack_fffffffffffffc58 = afStack_368 + (byte)uVar21;
    in_stack_fffffffffffffc60 = afStack_368 + bVar2;
    in_stack_fffffffffffffc50 = afStack_368 + bVar4;
    in_stack_fffffffffffffc48 = afStack_368 + (byte)uVar22;
    FUN_1455d7fd0(auVar153._0_8_,in_stack_fffffffffffffc50,uVar11,afStack_368 + bVar8,
                  in_stack_fffffffffffffc48,in_stack_fffffffffffffc50,in_stack_fffffffffffffc58,
                  in_stack_fffffffffffffc60);
    puVar19 = (uint *)((longlong)puVar20 + 0x12);
    goto LAB_140045d9a;
  case 0x7c:
  case 0x7d:
    uVar6 = *(undefined2 *)((longlong)param_1 + 0x276);
    bVar8 = *(byte *)((longlong)puVar20 + 2);
    uVar22 = puVar20[1];
    bVar4 = *(byte *)((longlong)puVar20 + 6);
    uVar21 = puVar20[2];
    bVar2 = *(byte *)((longlong)puVar20 + 10);
    uVar11 = *(undefined8 *)(param_1 + 2);
    auVar45._0_8_ = func_0x0001455d59d0(uVar11,uVar6,(short)puVar20[3],afStack_368);
    auVar45._8_56_ = extraout_var_01;
    auVar153 = ZEXT1664(auVar45._0_16_);
    func_0x0001455d59d0(uVar11,uVar6,*(undefined2 *)((longlong)puVar20 + 0xe),afStack_368);
    uVar11 = func_0x0001455d59d0(uVar11,uVar6,(short)puVar20[4],afStack_368);
    in_stack_fffffffffffffc58 = afStack_368 + (byte)uVar21;
    in_stack_fffffffffffffc60 = afStack_368 + bVar2;
    in_stack_fffffffffffffc50 = afStack_368 + bVar4;
    in_stack_fffffffffffffc48 = afStack_368 + (byte)uVar22;
    FUN_144dcf9f0(auVar153._0_8_,in_stack_fffffffffffffc50,uVar11,afStack_368 + bVar8,
                  in_stack_fffffffffffffc48,in_stack_fffffffffffffc50,in_stack_fffffffffffffc58,
                  in_stack_fffffffffffffc60);
    puVar19 = (uint *)((longlong)puVar20 + 0x12);
    goto LAB_140045d9a;
  case 0x7e:
  case 0x7f:
  case 0x80:
  case 0x81:
    uVar11 = *(undefined8 *)(auStack_2a8 + (ulonglong)*(byte *)((longlong)puVar20 + 2) * 8);
    uStack_208 = uVar11;
    uVar30 = func_0x0001455d59d0(*(undefined8 *)(param_1 + 2),
                                 *(undefined2 *)((longlong)param_1 + 0x276),(short)puVar20[1],
                                 afStack_368);
    uVar22 = uVar22 >> 4 & 0xf;
    if (uVar22 < 3) {
      puVar19 = (uint *)((longlong)puVar20 + 6);
      lVar12 = 1;
    }
    else {
      lVar12 = 1;
      lVar18 = 6;
      do {
        lVar15 = lVar18;
        (&uStack_208)[lVar12] =
             *(undefined8 *)
              (auStack_2a8 + (ulonglong)*(byte *)((longlong)puVar20 + lVar12 * 2 + 4) * 8);
        lVar12 = lVar12 + 1;
        lVar18 = lVar15 + 2;
      } while ((int)lVar12 + (2 - uVar22) != 1);
      puVar19 = (uint *)((longlong)puVar20 + lVar15 + 2);
    }
    uStack_188 = (int)lVar12;
    switch(uVar21) {
    case 0x7e:
      func_0x0001455d81c0(uVar11,&uStack_208,uVar30);
      break;
    case 0x7f:
      func_0x0001455d8210(uVar11,&uStack_208,uVar30);
      break;
    case 0x80:
      func_0x0001455d8240(uVar11,&uStack_208,uVar30);
      break;
    case 0x81:
      FUN_144acef30(uVar11,&uStack_208,uVar30);
    }
    goto LAB_140045d9a;
  case 0x82:
  case 0x83:
  case 0x84:
  case 0x85:
    uVar6 = *(undefined2 *)((longlong)param_1 + 0x276);
    bVar8 = *(byte *)((longlong)puVar20 + 2);
    uVar11 = *(undefined8 *)(param_1 + 2);
    func_0x0001455d59d0(uVar11,uVar6,(short)puVar20[1],afStack_368);
    uVar22 = uVar22 >> 4 & 0xf;
    if (uVar22 < 2) {
      puVar19 = (uint *)((longlong)puVar20 + 6);
      lVar12 = 0;
    }
    else {
      lVar12 = 0;
      lVar18 = 6;
      do {
        lVar15 = lVar18;
        uVar24 = func_0x0001455d59d0(uVar11,uVar6,
                                     *(undefined2 *)((longlong)puVar20 + lVar12 * 2 + 6),afStack_368
                                    );
        *(undefined4 *)((longlong)&uStack_208 + lVar12 * 4) = uVar24;
        lVar12 = lVar12 + 1;
        lVar18 = lVar15 + 2;
      } while (uVar22 - 1 != (int)lVar12);
      puVar19 = (uint *)((longlong)puVar20 + lVar15 + 2);
    }
    uStack_1c8 = (int)lVar12;
    switch(uVar21) {
    case 0x82:
      fVar25 = (float)func_0x0001455d82d0();
      break;
    case 0x83:
      fVar25 = (float)func_0x0001455d8310();
      break;
    case 0x84:
      fVar25 = (float)func_0x0001455d8330();
      break;
    case 0x85:
      fVar25 = (float)FUN_144acf120();
      break;
    default:
      fVar25 = 0.0;
    }
    afStack_368[bVar8] = fVar25;
    goto LAB_140045d9a;
  case 0x86:
    lVar12 = *(longlong *)(auStack_2a8 + (ulonglong)*(byte *)((longlong)puVar20 + 2) * 8);
    puVar19 = (uint *)((longlong)puVar20 + 6);
    if (lVar12 != 0) {
      auVar157._0_8_ =
           func_0x0001455d59d0(*(undefined8 *)(param_1 + 2),
                               *(undefined2 *)((longlong)param_1 + 0x276),(short)puVar20[1],
                               afStack_368);
      auVar157._8_56_ = extraout_var_20;
      auVar153 = ZEXT1664(auVar157._0_16_);
      uVar11 = func_0x0001455d5eb0(param_1);
      FUN_144acf1b0(lVar12,auVar153._0_8_,uVar11);
      puVar19 = puVar20 + 2;
    }
    goto LAB_140045d9a;
  case 0x87:
    lVar12 = *(longlong *)(auStack_2a8 + (ulonglong)*(byte *)((longlong)puVar20 + 2) * 8);
    puVar19 = (uint *)((longlong)puVar20 + 6);
    if ((lVar12 != 0) &&
       (lVar18 = *(longlong *)(auStack_2a8 + (ulonglong)(byte)puVar20[1] * 8), lVar18 != 0)) {
      uVar11 = func_0x0001455d5eb0(param_1,*(undefined2 *)((longlong)puVar20 + 6));
      FUN_144acf270(lVar12,lVar18,uVar11);
      puVar19 = puVar20 + 2;
    }
    goto LAB_140045d9a;
  case 0x88:
    bVar8 = *(byte *)((longlong)puVar20 + 2);
    iVar10 = func_0x0001455d59d0(*(undefined8 *)(param_1 + 2),
                                 *(undefined2 *)((longlong)param_1 + 0x276),(short)puVar20[1],
                                 afStack_368);
    param_1[(ulonglong)bVar8 + 0x7c] = iVar10;
    puVar19 = (uint *)((longlong)puVar20 + 6);
    goto LAB_140045d9a;
  case 0x89:
    goto code_r0x0001400416c1;
  case 0xff:
    goto code_r0x000140045dcb;
  }
  afStack_368[uVar17] = fVar25;
  goto LAB_140045d9a;
code_r0x0001400416c1:
  uVar6 = *(undefined2 *)((longlong)param_1 + 0x276);
  uVar11 = *(undefined8 *)(param_1 + 2);
  bVar8 = *(byte *)((longlong)puVar20 + 2);
  auVar153._0_8_ = func_0x0001455d59d0(uVar11,uVar6,(short)puVar20[1],afStack_368);
  auVar153._8_56_ = extraout_var_10;
  auVar153 = ZEXT1664(auVar153._0_16_);
  auVar154._0_8_ =
       func_0x0001455d59d0(uVar11,uVar6,*(undefined2 *)((longlong)puVar20 + 6),afStack_368);
  auVar154._8_56_ = extraout_var_11;
  auVar154 = ZEXT1664(auVar154._0_16_);
  auVar155._0_8_ = func_0x0001455d59d0(uVar11,uVar6,(short)puVar20[2],afStack_368);
  auVar155._8_56_ = extraout_var_12;
  auVar155 = ZEXT1664(auVar155._0_16_);
  auVar156._0_8_ =
       func_0x0001455d59d0(uVar11,uVar6,*(undefined2 *)((longlong)puVar20 + 10),afStack_368);
  auVar156._8_56_ = extraout_var_13;
  auVar156 = ZEXT1664(auVar156._0_16_);
  in_stack_fffffffffffffc50 = (float *)func_0x0001455d5eb0(param_1,(short)puVar20[3]);
  in_stack_fffffffffffffc58 = (float *)func_0x0001455a3ec0(param_1);
  in_stack_fffffffffffffc48 = (float *)CONCAT44(uVar24,auVar156._0_4_);
  FUN_1455d7b00(*(undefined8 *)(auStack_2a8 + (ulonglong)bVar8 * 8),auVar153._0_8_,auVar154._0_8_,
                auVar155._0_8_,in_stack_fffffffffffffc48,in_stack_fffffffffffffc50,
                in_stack_fffffffffffffc58);
  puVar19 = puVar20 + 4;
  goto LAB_140045d9a;
code_r0x000140045dcb:
  if (*(char *)((longlong)param_1 + 0x27d) != '\0') {
    uVar17 = 0;
    do {
      lVar15 = func_0x000144d9f6a0(*(undefined8 *)(lVar12 + 0x28),
                                   *(undefined2 *)(lVar18 + uVar17 * 2));
      if (lVar15 != 0) {
        if (*(char *)((longlong)param_1 + 0x282) == '\x01') {
          func_0x0001455d8390(lVar15);
        }
        if (*(char *)((longlong)param_1 + 0x27f) == '\x01') {
          if (((char)param_1[0xa0] == '\0') && (*(char *)((longlong)param_1 + 0x281) == '\0')) {
            func_0x0001443a9290(lVar15);
          }
        }
        else if (((char)param_1[0xa0] != '\0') || (*(char *)((longlong)param_1 + 0x281) == '\x01'))
        {
          func_0x0001443a9860(lVar15);
        }
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 < *(byte *)((longlong)param_1 + 0x27d));
  }
  lVar12 = (longlong)iStack_13c;
  if (lVar12 != 0) {
    lVar18 = 0;
    do {
      func_0x000144e59e70(_DAT_14a923120,*(undefined4 *)((longlong)aiStack_17c + lVar18));
      lVar18 = lVar18 + 4;
    } while (lVar12 * 4 != lVar18);
  }
  *param_1 = *param_1 + 1;
  return;
}

