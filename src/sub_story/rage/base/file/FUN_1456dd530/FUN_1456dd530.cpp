// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1456dd530  size: 188 bytes
// Name:    FUN_1456dd530
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456dd530(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  
  if (*(short *)(param_1 + 0xc) != -1) {
    func_0x0001456dd5f0(_DAT_1498d4b30);
    *(undefined2 *)(param_1 + 0xc) = 0xffff;
  }
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    if (*(longlong *)(param_1 + 0x18) != -1) {
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x90))();
    }
    uVar1 = *(uint *)(param_1 + 0x4c);
    if ((ulonglong)uVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x50);
      lVar3 = 0;
      do {
        if (*(longlong *)(lVar2 + lVar3) != -1) {
          (**(code **)(**(longlong **)(param_1 + 0x10) + 0x90))();
        }
        lVar3 = lVar3 + 8;
      } while ((ulonglong)uVar1 << 3 != lVar3);
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  if ((-1 < *(char *)(param_1 + 0x47)) && (*(longlong *)*(undefined1 (*) [16])(param_1 + 0x38) != 0)
     ) {
    func_0x000144d9c130();
  }
  auVar4._0_12_ = ZEXT812(0);
  auVar4._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0x38) = auVar4;
  return;
}

