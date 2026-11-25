// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140104ab0  size: 165 bytes
// Name:    FUN_140104ab0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144facb70, FUN_144e409c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140104ab0(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  cVar1 = FUN_144facb70();
  if ((cVar1 != '\0') &&
     (*(float *)(param_1 + 0x588) + _DAT_146159fa0 < *(float *)(param_1 + 0x55c))) {
    uVar2 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0;
    fVar7 = *(float *)(uVar2 + 0x50);
    fVar8 = *(float *)(uVar2 + 0x54);
    fVar9 = *(float *)(uVar2 + 0x58);
    fVar10 = *(float *)(uVar2 + 0x5c);
    FUN_144e409c0(param_1,&fStack_38);
    auVar3._0_4_ = fVar7 * fStack_38;
    auVar3._4_4_ = fVar8 * fStack_34;
    auVar3._8_4_ = fVar9 * fStack_30;
    auVar3._12_4_ = fVar10 * fStack_2c;
    auVar5._0_12_ = ZEXT812(0);
    auVar5._12_4_ = 0;
    auVar6._4_4_ = _DAT_146159ef4;
    auVar6._0_4_ = _DAT_146159ef4;
    auVar6._8_4_ = _DAT_146159ef4;
    auVar6._12_4_ = _DAT_146159ef4;
    auVar3 = vblendps_avx(auVar3,auVar5,8);
    auVar3 = vhaddps_avx(auVar3,auVar3);
    auVar3 = vhaddps_avx(auVar3,auVar3);
    auVar4._0_4_ = auVar3._0_4_ & _DAT_145fc6f4c;
    auVar4._4_4_ = auVar3._4_4_ & _DAT_145fc6f4c;
    auVar4._8_4_ = auVar3._8_4_ & _DAT_145fc6f4c;
    auVar4._12_4_ = auVar3._12_4_ & _DAT_145fc6f4c;
    auVar3 = vcmpps_avx(auVar6,auVar4,5);
    if ((((SUB161(auVar3 >> 0x1f,0) & 1) == 0 && (SUB161(auVar3 >> 0x3f,0) & 1) == 0) &&
        (SUB161(auVar3 >> 0x5f,0) & 1) == 0) && -1 < auVar3[0xf]) {
      return 1;
    }
  }
  return 0;
}

