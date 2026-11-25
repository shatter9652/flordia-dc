// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14000aa70  size: 474 bytes
// Name:    FUN_14000aa70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f2b280, FUN_144dc2420
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14000aa70(longlong param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar5;
  float fVar6;
  undefined1 auVar4 [16];
  float fVar7;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined1 auStack_48 [4];
  float fStack_44;
  float fStack_34;
  
  FUN_144f2b280(param_1,auStack_48);
  fStack_34 = fStack_34 - fStack_44;
  auVar4 = vinsertps_avx(ZEXT416((uint)fStack_34),ZEXT416((uint)(fStack_34 * _DAT_145fc6f08)),0x1d);
  fStack_34 = fStack_34 * _DAT_145fc6edc;
  *param_2 = auVar4;
  auVar4 = vinsertps_avx(ZEXT416((uint)fStack_34),ZEXT416((uint)fStack_34),0x1d);
  *param_3 = auVar4;
  lVar1 = func_0x00014515d910(*(undefined4 *)(param_1 + 0x9c));
  if (lVar1 != 0) {
    lVar2 = func_0x0001452eb880(lVar1,0x1e);
    lVar3 = func_0x0001452eb880(lVar1,0x1f);
    if ((lVar2 == 0) || (lVar3 == 0)) {
      if (lVar2 != 0) {
        FUN_144dc2420(*(undefined8 *)(lVar2 + 0x1160),*(undefined4 *)(lVar2 + 0x11a0),&fStack_78);
        *(ulonglong *)*param_2 = CONCAT44(fStack_74,fStack_78);
        *(ulonglong *)(*param_2 + 8) = CONCAT44(fStack_6c,fStack_70);
      }
    }
    else {
      FUN_144dc2420(*(undefined8 *)(lVar2 + 0x1160),*(undefined4 *)(lVar2 + 0x11a0),&fStack_78);
      FUN_144dc2420(*(undefined8 *)(lVar3 + 0x1160),*(undefined4 *)(lVar3 + 0x11a0),&fStack_58);
      auVar4._0_4_ = (fStack_78 + fStack_58) * _DAT_145fc6edc;
      auVar4._4_4_ = (fStack_74 + fStack_54) * _DAT_145fc6edc;
      auVar4._8_4_ = (fStack_70 + fStack_50) * _DAT_145fc6edc;
      auVar4._12_4_ = (fStack_6c + fStack_4c) * _DAT_145fc6edc;
      *param_2 = auVar4;
    }
    lVar2 = func_0x0001452eb880(lVar1,0x20);
    lVar1 = func_0x0001452eb880(lVar1,0x21);
    if ((lVar2 == 0) || (lVar1 == 0)) {
      if (lVar2 != 0) {
        FUN_144dc2420(*(undefined8 *)(lVar2 + 0x1160),*(undefined4 *)(lVar2 + 0x11a0),&fStack_78);
        *(ulonglong *)*param_3 = CONCAT44(fStack_74,fStack_78);
        *(ulonglong *)(*param_3 + 8) = CONCAT44(fStack_6c,fStack_70);
      }
    }
    else {
      FUN_144dc2420(*(undefined8 *)(lVar2 + 0x1160),*(undefined4 *)(lVar2 + 0x11a0),&fStack_78);
      FUN_144dc2420(*(undefined8 *)(lVar1 + 0x1160),*(undefined4 *)(lVar1 + 0x11a0),&fStack_68);
      fVar5 = (fStack_74 + fStack_64) * _DAT_145fc6edc;
      fVar6 = (fStack_70 + fStack_60) * _DAT_145fc6edc;
      fVar7 = (fStack_6c + fStack_5c) * _DAT_145fc6edc;
      *(float *)*param_3 = (fStack_78 + fStack_68) * _DAT_145fc6edc;
      *(float *)(*param_3 + 4) = fVar5;
      *(float *)(*param_3 + 8) = fVar6;
      *(float *)(*param_3 + 0xc) = fVar7;
    }
    *(undefined4 *)*param_2 = 0;
    *(undefined4 *)*param_3 = 0;
  }
  return;
}

