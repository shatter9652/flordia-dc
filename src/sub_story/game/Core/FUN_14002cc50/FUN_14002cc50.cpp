// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14002cc50  size: 281 bytes
// Name:    FUN_14002cc50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e26e60, FUN_144e25fc0, FUN_144e25680, FUN_144e27530
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14002cc50(undefined8 param_1,undefined4 param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  char cVar3;
  float fVar4;
  float fVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  float fStack_70;
  float fStack_6c;
  undefined1 auStack_68 [16];
  undefined4 uStack_58;
  undefined8 uStack_50;
  char cStack_48;
  
  auStack_68._0_12_ = ZEXT812(0);
  auStack_68._12_4_ = 0;
  uStack_58 = 0xffffffff;
  uStack_50 = 0xffffffff00000000;
  cStack_48 = '\0';
  cVar3 = FUN_144e25680();
  uVar6 = 0;
  if (((cVar3 != '\0') &&
      (uVar2 = auStack_68._8_8_, uVar6 = 0, *(char *)(auStack_68._8_8_ + 0x8c) != '\x01')) &&
     (cStack_48 == '\0')) {
    fVar4 = (float)FUN_144e26e60(param_1,param_2,1);
    fVar5 = (float)FUN_144e25fc0(param_1,param_2);
    cVar3 = FUN_144e27530(auStack_68,&fStack_6c,&fStack_70);
    if (cVar3 == '\0') {
      uVar6 = 0;
    }
    else {
      fVar4 = (fStack_70 - fStack_6c) * (fVar5 - fVar4);
      uVar6 = (ulonglong)(uint)fVar4;
      if (*(char *)(uVar2 + 0x8c) == '\0') {
        auVar7._0_12_ = ZEXT812(0);
        auVar7._12_4_ = 0;
        auVar7 = vcmpss_avx(auVar7,ZEXT416((uint)(fVar4 + _DAT_145fc6f80)),2);
        auVar7 = vblendvps_avx(ZEXT416((uint)(fVar4 + _DAT_145fc6f84)),ZEXT416((uint)fVar4),auVar7);
        auVar1 = vcmpss_avx(ZEXT416((uint)fVar4),ZEXT416((uint)_DAT_145fc6f80),2);
        auVar7 = vblendvps_avx(ZEXT416((uint)(fVar4 + _DAT_14615a920)),auVar7,auVar1);
        uVar6 = auVar7._0_8_;
      }
    }
  }
  return uVar6;
}

