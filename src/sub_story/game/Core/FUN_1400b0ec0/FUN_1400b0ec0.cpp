// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b0ec0  size: 321 bytes
// Name:    FUN_1400b0ec0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1400b0ec0(longlong param_1,longlong param_2,longlong param_3,byte param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [12];
  undefined4 uStack_13c;
  undefined1 auStack_138 [12];
  undefined2 uStack_128;
  undefined1 uStack_126;
  undefined1 auStack_120 [32];
  undefined1 auStack_100 [32];
  undefined2 uStack_e0;
  undefined1 auStack_d8 [32];
  undefined4 uStack_b8;
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [32];
  unkbyte10 Stack_50;
  undefined1 auStack_46 [22];
  unkbyte10 Stack_30;
  
  lVar1 = *(longlong *)(param_2 + 0x48 + (ulonglong)param_4 * 8);
  if (lVar1 == 0) {
    return 1;
  }
  if (param_3 == 0) {
    if (param_1 != 0) {
      if (*(longlong **)(param_1 + 0x348) == (longlong *)0x0) {
        param_3 = 0;
      }
      else {
        param_3 = (**(code **)(**(longlong **)(param_1 + 0x348) + 0x58))();
      }
      goto LAB_1400b0ef3;
    }
    param_3 = 0;
  }
  else if (param_1 != 0) {
LAB_1400b0ef3:
    uVar2 = *(undefined8 *)(param_1 + 0x340);
    goto LAB_1400b0efa;
  }
  uVar2 = 0;
LAB_1400b0efa:
  auStack_46._0_12_ = ZEXT812(0);
  auStack_46._12_4_ = 0;
  uStack_128 = 0;
  uStack_126 = 1;
  auStack_120 = ZEXT1632(auStack_46._0_16_);
  uStack_e0 = 0;
  auStack_d8 = ZEXT1632(auStack_46._0_16_);
  uStack_b8 = 0;
  Stack_50 = auStack_46._0_10_;
  auStack_70 = ZEXT1632(auStack_46._0_16_);
  auStack_46._16_6_ = 0;
  Stack_30 = 0;
  auStack_100 = auStack_120;
  auStack_b0 = auStack_d8;
  auStack_90 = auStack_d8;
  func_0x000144ed0120(&uStack_128,0,param_3);
  func_0x000144ed0120(&uStack_128,1,uVar2);
  func_0x0001400b1010(&uStack_180,param_1);
  puStack_168 = &UNK_146202eb8;
  uStack_150 = uStack_170;
  uStack_160 = uStack_180;
  uStack_158 = uStack_178;
  auStack_138 = SUB1612(ZEXT816(0),0);
  auStack_148 = auStack_138 << 0x20;
  uStack_13c = 0;
  func_0x000144f3aa10(&uStack_128);
  uVar2 = func_0x00014519fae0(lVar1,&uStack_128);
  return uVar2;
}

