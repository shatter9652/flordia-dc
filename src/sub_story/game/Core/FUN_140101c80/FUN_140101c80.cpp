// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140101c80  size: 307 bytes
// Name:    FUN_140101c80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1436cfba0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140101c80(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined4 uStack_54;
  longlong lStack_50;
  uint uStack_44;
  char cStack_40;
  
  uStack_54 = param_2;
  if (*(uint *)(param_1 + 0x304) != (uint)(*(int *)(param_1 + 0x300) * 0x570) / 100) {
    FUN_1436cfba0(param_1 + 0x300,&lStack_50,&uStack_54);
    if (cStack_40 == '\0') {
      uVar1 = (ulonglong)(uStack_44 & 0xf);
      uVar2 = (ulonglong)(uStack_44 >> 4);
    }
    else {
      uVar1 = (ulonglong)(uStack_44 & 0xf);
      uVar2 = (ulonglong)(uStack_44 >> 4);
      *(undefined4 *)(uVar2 * 0x90 + lStack_50 + 0x10 + uVar1 * 8) = param_2;
    }
    *(undefined4 *)(uVar2 * 0x90 + lStack_50 + 0x14 + uVar1 * 8) = param_3;
  }
  if (*(uint *)(param_1 + 0x3a4) != (uint)(*(int *)(param_1 + 0x3a0) * 0x570) / 100) {
    FUN_1436cfba0(param_1 + 0x3a0,&lStack_50,&uStack_54);
    if (cStack_40 == '\0') {
      uVar1 = (ulonglong)(uStack_44 & 0xf);
      uVar2 = (ulonglong)(uStack_44 >> 4);
    }
    else {
      uVar1 = (ulonglong)(uStack_44 & 0xf);
      uVar2 = (ulonglong)(uStack_44 >> 4);
      *(undefined4 *)(uVar2 * 0x90 + lStack_50 + 0x10 + uVar1 * 8) = param_2;
    }
    *(undefined4 *)(uVar2 * 0x90 + lStack_50 + 0x14 + uVar1 * 8) = param_4;
  }
  return;
}

