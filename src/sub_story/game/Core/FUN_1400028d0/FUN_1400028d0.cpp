// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400028d0  size: 484 bytes
// Name:    FUN_1400028d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1400028d0(longlong param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar12 [16];
  undefined1 auVar16 [16];
  
  cVar1 = *(char *)(param_1 + 0xb0);
  if (cVar1 != *(char *)(param_2 + 0xb0)) {
    return false;
  }
  if (cVar1 == '\x01') {
    uVar2 = *(uint *)(param_1 + 0x60);
    uVar6 = (ulonglong)uVar2 & 0x1ffff;
    if ((uVar6 == 0x1ffff) ||
       (plVar4 = *(longlong **)((ulonglong)(uVar2 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
       plVar4 == (longlong *)0x0)) {
      lVar7 = 0;
    }
    else {
      uVar3 = *(uint *)(plVar4[5] + uVar6 * 4);
      lVar7 = 0;
      if (uVar2 >> 0x16 == (uVar3 >> 0x11 & 0x3ff) &&
          (uVar3 & *(uint *)(plVar4 + 6)) == *(uint *)(plVar4 + 6)) {
        lVar7 = (ulonglong)(uint)((int)plVar4[1] * (int)uVar6) + *plVar4;
      }
    }
    uVar2 = *(uint *)(param_2 + 0x60);
    uVar6 = (ulonglong)uVar2 & 0x1ffff;
    if ((uVar6 == 0x1ffff) ||
       (plVar4 = *(longlong **)((ulonglong)(uVar2 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
       plVar4 == (longlong *)0x0)) {
      lVar8 = 0;
    }
    else {
      uVar3 = *(uint *)(plVar4[5] + uVar6 * 4);
      lVar8 = 0;
      if (uVar2 >> 0x16 == (uVar3 >> 0x11 & 0x3ff) &&
          (uVar3 & *(uint *)(plVar4 + 6)) == *(uint *)(plVar4 + 6)) {
        lVar8 = (ulonglong)(uint)((int)plVar4[1] * (int)uVar6) + *plVar4;
      }
    }
    return lVar7 == lVar8;
  }
  if (cVar1 == '\0') {
    return true;
  }
  if (cVar1 == '\x03') {
    lVar7 = func_0x000144de7c70(*(undefined4 *)(param_1 + 0x60));
    lVar8 = func_0x000144de7c70(*(undefined4 *)(param_2 + 0x60));
    if (lVar7 != lVar8) {
      return false;
    }
    if (*(longlong *)(param_1 + 0x78) != *(longlong *)(param_2 + 0x78)) {
      return false;
    }
    if (*(short *)(param_1 + 0x80) != *(short *)(param_2 + 0x80)) {
      return false;
    }
    if (*(char *)(param_1 + 0x82) != *(char *)(param_2 + 0x82)) {
      return false;
    }
    if (*(char *)(param_1 + 0x83) != *(char *)(param_2 + 0x83)) {
      return false;
    }
    if (*(int *)(param_1 + 0x98) != *(int *)(param_2 + 0x98)) {
      return false;
    }
    auVar9 = *(undefined1 (*) [16])(param_2 + 0x40);
    fVar11 = *(float *)(param_1 + 0x40);
    fVar13 = *(float *)(param_1 + 0x44);
    fVar14 = *(float *)(param_1 + 0x48);
    fVar15 = *(float *)(param_1 + 0x4c);
  }
  else {
    if (cVar1 != '\x02') {
      return false;
    }
    auVar9 = *(undefined1 (*) [16])(param_2 + 0x40);
    fVar11 = *(float *)(param_1 + 0x40);
    fVar13 = *(float *)(param_1 + 0x44);
    fVar14 = *(float *)(param_1 + 0x48);
    fVar15 = *(float *)(param_1 + 0x4c);
  }
  auVar16._0_4_ = fVar11 + _DAT_146159ef0;
  auVar16._4_4_ = fVar13 + _DAT_146159ef0;
  auVar16._8_4_ = fVar14 + _DAT_146159ef0;
  auVar16._12_4_ = fVar15 + _DAT_146159ef0;
  auVar12._0_4_ = fVar11 + _DAT_146159ef4;
  auVar12._4_4_ = fVar13 + _DAT_146159ef4;
  auVar12._8_4_ = fVar14 + _DAT_146159ef4;
  auVar12._12_4_ = fVar15 + _DAT_146159ef4;
  auVar16 = vcmpps_avx(auVar16,auVar9,2);
  auVar9 = vcmpps_avx(auVar9,auVar12,2);
  auVar10._0_4_ = auVar16._0_4_ & auVar9._0_4_;
  auVar10._4_4_ = auVar16._4_4_ & auVar9._4_4_;
  auVar10._8_4_ = auVar16._8_4_ & auVar9._8_4_;
  auVar10._12_4_ = auVar16._12_4_ & auVar9._12_4_;
  uVar5 = vmovmskps_avx(auVar10);
  return (~(byte)uVar5 & 7) == 0;
}

