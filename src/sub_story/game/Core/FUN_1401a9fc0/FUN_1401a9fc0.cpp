// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a9fc0  size: 258 bytes
// Name:    FUN_1401a9fc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401a9fc0(longlong param_1,uint param_2,char param_3,char param_4,float param_5,
                  float param_6)

{
  float *pfVar1;
  float fVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  if (param_2 < 0x10) {
    pfVar1 = (float *)(param_1 + (ulonglong)param_2 * 0x14);
    cVar3 = *(char *)(pfVar1 + 4);
    if (cVar3 != param_3) {
      *(char *)(pfVar1 + 4) = param_3;
    }
    bVar6 = *(char *)((longlong)pfVar1 + 0x11) != param_4;
    if (bVar6) {
      *(char *)((longlong)pfVar1 + 0x11) = param_4;
    }
    uVar5 = _DAT_145fc6f10;
    fVar2 = pfVar1[1];
    auVar13._0_4_ = (uint)fVar2 ^ _DAT_145fc6f10;
    auVar13._4_4_ = _DAT_145fc6f10;
    auVar13._8_4_ = _DAT_145fc6f10;
    auVar13._12_4_ = _DAT_145fc6f10;
    auVar13 = vmaxss_avx(auVar13,ZEXT416((uint)fVar2));
    auVar9._0_4_ = (uint)(fVar2 - param_5) ^ _DAT_145fc6f10;
    auVar9._4_4_ = _DAT_145fc6f10;
    auVar9._8_4_ = _DAT_145fc6f10;
    auVar9._12_4_ = _DAT_145fc6f10;
    auVar9 = vmaxss_avx(auVar9,ZEXT416((uint)(fVar2 - param_5)));
    auVar10._0_4_ = (uint)param_5 ^ _DAT_145fc6f10;
    auVar10._4_4_ = _DAT_145fc6f10;
    auVar10._8_4_ = _DAT_145fc6f10;
    auVar10._12_4_ = _DAT_145fc6f10;
    auVar10 = vmaxss_avx(auVar10,ZEXT416((uint)param_5));
    auVar8 = ZEXT416(_DAT_145fc6ed8);
    auVar13 = vmaxss_avx(auVar8,auVar13);
    auVar13 = vmaxss_avx(auVar13,auVar10);
    bVar4 = auVar13._0_4_ * _DAT_14615a034 < auVar9._0_4_;
    if (bVar4) {
      pfVar1[1] = param_5;
    }
    fVar2 = *pfVar1;
    auVar11._0_4_ = (uint)(fVar2 - param_6) ^ uVar5;
    auVar11._4_4_ = uVar5;
    auVar11._8_4_ = uVar5;
    auVar11._12_4_ = uVar5;
    auVar13 = vmaxss_avx(auVar11,ZEXT416((uint)(fVar2 - param_6)));
    auVar12._0_4_ = (uint)param_6 ^ uVar5;
    auVar12._4_4_ = uVar5;
    auVar12._8_4_ = uVar5;
    auVar12._12_4_ = uVar5;
    auVar7._0_4_ = (uint)fVar2 ^ uVar5;
    auVar7._4_4_ = uVar5;
    auVar7._8_4_ = uVar5;
    auVar7._12_4_ = uVar5;
    auVar9 = vmaxss_avx(auVar7,ZEXT416((uint)fVar2));
    auVar10 = vmaxss_avx(auVar12,ZEXT416((uint)param_6));
    auVar9 = vmaxss_avx(auVar8,auVar9);
    auVar9 = vmaxss_avx(auVar9,auVar10);
    if (auVar13._0_4_ <= auVar9._0_4_ * _DAT_14615a034) {
      if (!bVar4 && (!bVar6 && cVar3 == param_3)) {
        return;
      }
    }
    else {
      *pfVar1 = param_6;
    }
    *(uint *)(param_1 + 0x170) = *(uint *)(param_1 + 0x170) | 1 << (param_2 & 0x1f);
  }
  return;
}

