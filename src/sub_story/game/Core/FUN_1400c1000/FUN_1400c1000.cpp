// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c1000  size: 106 bytes
// Name:    FUN_1400c1000
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400c1000(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  uVar1 = *(uint *)(param_1 + 0xc);
  if ((ulonglong)uVar1 != 0) {
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar3) != 0) {
        func_0x000144d9c130(*(longlong *)(lVar2 + lVar3),0x20);
      }
      lVar3 = lVar3 + 8;
    } while ((ulonglong)uVar1 << 3 != lVar3);
    lVar2 = *(longlong *)(param_1 + 0x10);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (lVar2 != 0) {
    func_0x000144d9c130();
  }
  auVar4._0_12_ = ZEXT812(0);
  auVar4._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 8) = auVar4;
  return;
}

