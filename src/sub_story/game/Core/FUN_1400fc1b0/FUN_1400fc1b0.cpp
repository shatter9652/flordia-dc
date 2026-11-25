// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400fc1b0  size: 349 bytes
// Name:    FUN_1400fc1b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141437620, FUN_142a89670, FUN_140048ba0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400fc1b0(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  longlong lStack_138;
  undefined4 auStack_130 [2];
  undefined8 uStack_128;
  ulonglong uStack_120;
  undefined1 auStack_118 [32];
  undefined1 auStack_f8 [32];
  undefined1 auStack_d8 [32];
  undefined1 auStack_b8 [32];
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [24];
  undefined7 uStack_40;
  undefined1 uStack_39;
  undefined1 auStack_38 [31];
  
  lStack_138 = 0;
  lVar3 = func_0x000140048a40(param_1[1]);
  if (lVar3 == 0) {
    if (param_1[3] != 5) {
      uStack_40 = 0x141437647;
      uStack_39 = 0;
      func_0x0001443a6340(param_1);
      param_1[0x22] = _DAT_14aa31c34;
      param_1[3] = 5;
    }
    return;
  }
  auStack_58._0_12_ = ZEXT812(0);
  auStack_58._12_4_ = 0;
  auStack_38 = ZEXT1131(auStack_58._1_11_);
  auStack_58._16_8_ = 0;
  uStack_40 = 0;
  uStack_39 = 0;
  auStack_d8 = ZEXT1632(auStack_58._0_16_);
  auStack_118 = ZEXT1632(auStack_58._0_16_);
  auStack_f8 = auStack_118;
  auStack_b8 = auStack_d8;
  auStack_98 = auStack_d8;
  auStack_78 = auStack_d8;
  FUN_140048ba0(auStack_118,0xff,lVar3);
  uVar6 = 0;
  FUN_142a89670(auStack_130,auStack_118,&lStack_138,1,0);
  *param_1 = auStack_130[0];
  if ((short)auStack_130[0] != -1) {
    uVar1 = param_1[0x26];
    uVar2 = param_1[0x25];
    if (uVar1 != 0) {
      uVar2 = uVar1;
    }
    lVar3 = 0;
    if (param_1[2] != -1) {
      lVar3 = (ulonglong)(uVar1 * param_1[2]) + (ulonglong)(uint)param_1[0x24];
    }
    uVar4 = lStack_138 - lVar3;
    if ((ulonglong)uVar2 < (ulonglong)(lStack_138 - lVar3)) {
      uVar4 = (ulonglong)uVar2;
    }
    if (uVar4 <= (uint)param_1[0x25]) {
      uStack_128 = *(undefined8 *)(param_1 + 0x28);
      uStack_120 = uVar4;
      lVar3 = func_0x000140b48a10(auStack_130[0],auStack_130,lVar3,
                                  *(undefined8 *)
                                   ((longlong)*(char *)(param_1 + 0x2a) * 8 + 0x149ab8130),
                                  CONCAT44(uVar6,0x10));
      if (lVar3 == 0) {
        return;
      }
      uVar5 = 2;
      goto LAB_1400fc2e5;
    }
  }
  uVar5 = 5;
LAB_1400fc2e5:
  FUN_141437620(param_1,uVar5);
  return;
}

