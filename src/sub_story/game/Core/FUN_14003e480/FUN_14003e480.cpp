// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14003e480  size: 337 bytes
// Name:    FUN_14003e480
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140004b40, FUN_1452dfd90, FUN_145302dc0, FUN_1450cb0e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14003e480(longlong *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined1 auStack_78 [16];
  longlong lStack_68;
  longlong lStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined4 uStack_48;
  undefined8 uStack_44;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 auStack_30 [16];
  longlong lStack_20;
  
  auStack_78._0_12_ = ZEXT812(0);
  auStack_78._12_4_ = 0;
  lStack_68 = 0;
  lStack_60 = 0xffffffff;
  uStack_58 = 0;
  uStack_48 = 0;
  uStack_44 = auStack_78._4_8_;
  uStack_3c = 0;
  uStack_38 = 0;
  lStack_20 = 0;
  auStack_30 = auStack_78;
  if ((longlong *)auStack_78 == param_1) {
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xffffffff;
    *(undefined4 *)(param_1 + 4) = 0;
    *(ulonglong *)((longlong)param_1 + 0x24) = CONCAT44(uStack_50,uStack_54);
    *(ulonglong *)((longlong)param_1 + 0x2c) = (ulonglong)uStack_4c;
    *(undefined8 *)((longlong)param_1 + 0x34) = uStack_44;
    *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
    *(undefined4 *)((longlong)param_1 + 0x24) = uStack_54;
    param_1[10] = 0;
    param_1[0xb] = 0;
  }
  else {
    if (*param_1 == 0) {
      uVar2 = 0;
    }
    else {
      FUN_140004b40(0x14abbf350);
      if (*param_1 != 0) {
        FUN_1452dfd90(*param_1,param_1);
      }
      *param_1 = 0;
      func_0x000144d9dab0(0x14abbf350);
      uVar2 = auStack_30._0_8_;
    }
    *(ulonglong *)((longlong)param_1 + 0x24) = CONCAT44(uStack_50,uStack_54);
    *(ulonglong *)((longlong)param_1 + 0x2c) = CONCAT44(uStack_48,uStack_4c);
    *(undefined8 *)((longlong)param_1 + 0x34) = uStack_44;
    *(ulonglong *)((longlong)param_1 + 0x3c) = CONCAT44(uStack_38,uStack_3c);
    param_1[1] = auStack_78._8_8_;
    param_1[2] = lStack_68;
    param_1[3] = lStack_60;
    param_1[4] = CONCAT44(uStack_54,uStack_58);
    FUN_145302dc0(param_1 + 9,uVar2);
    param_1[10] = auStack_30._8_8_;
    param_1[0xb] = lStack_20;
    if (auStack_30._0_8_ != 0) {
      FUN_1450cb0e0(auStack_30._0_8_,auStack_30);
    }
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = auStack_30._8_8_;
  auStack_30 = auVar1 << 0x40;
  if (auStack_78._0_8_ != 0) {
    FUN_1450cb0e0(auStack_78._0_8_,auStack_78);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

