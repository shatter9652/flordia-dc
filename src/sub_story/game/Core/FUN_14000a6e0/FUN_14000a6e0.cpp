// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14000a6e0  size: 165 bytes
// Name:    FUN_14000a6e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e40a00, FUN_14026a8d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_14000a6e0(longlong param_1)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  uVar1 = *(undefined4 *)(param_1 + 0x9c);
  lVar4 = func_0x000144dd7540(uVar1);
  if (lVar4 != 0) {
    if (((*(uint *)(lVar4 + 0x10) & 0x20) != 0) && (*(longlong *)(lVar4 + 0x898) != 0)) {
      return false;
    }
    if (((*(uint *)(lVar4 + 0x10) >> 0xb & 1) != 0) && (*(longlong *)(lVar4 + 0x8e8) != 0)) {
      uVar5 = func_0x0001450bb780(uVar1);
      FUN_144e40a00(uVar5,&fStack_28);
      auVar6._0_4_ = fStack_28 * fStack_28;
      auVar6._4_4_ = fStack_24 * fStack_24;
      auVar6._8_4_ = fStack_20 * fStack_20;
      auVar6._12_4_ = fStack_1c * fStack_1c;
      auVar6 = vhaddps_avx(auVar6,auVar6);
      return auVar6._0_4_ < _DAT_145fc6f88;
    }
  }
  lVar4 = FUN_14026a8d0(param_1,0,0,1);
  if (lVar4 != 0) {
    return false;
  }
  lVar4 = func_0x000144d9f7c0(*(undefined4 *)(param_1 + 0x9c));
  if (lVar4 == 0) {
    bVar3 = true;
  }
  else {
    cVar2 = func_0x000144dc2170(*(undefined4 *)(lVar4 + 0xf04));
    if (cVar2 == '\0') {
      bVar3 = false;
    }
    else {
      bVar3 = _UNK_14615aa90 < *(float *)(lVar4 + 0x1630) * _DAT_146159c28;
    }
  }
  return bVar3;
}

