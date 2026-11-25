// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a7720  size: 245 bytes
// Name:    FUN_1401a7720
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1452fec40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401a7720(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar4 = func_0x000144f99170(param_2);
  if (lVar4 != 0) {
    plVar2 = *(longlong **)(param_1 + 0x3f0);
    if (plVar2 != (longlong *)0x0) {
      cVar3 = (**(code **)(*plVar2 + 8))(plVar2,0x77b14c55);
      if (((cVar3 != '\0') &&
          (((*(int *)(param_1 + 0x5f8) < 0 ||
            (*(int *)(lVar4 + 0x18c4) != *(int *)(param_1 + 0x5f8))) &&
           (uVar1 = *(uint *)((longlong)plVar2 + 0x3c), (uVar1 >> 0x12 & 1) == 0)))) &&
         ((*(ulonglong *)(param_1 + 0x518) & 0x800000000000000) == 0)) {
        bVar5 = false;
        cVar3 = FUN_1452fec40(*(undefined4 *)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0x1e0),0);
        if (cVar3 == '\0') {
          if ((*(ushort *)((longlong)plVar2 + 0x3a) & 0x118) == 0) {
            bVar5 = (*(byte *)(plVar2 + 0x4f) & 8) == 0;
          }
          else {
            bVar5 = false;
          }
        }
        if (((uVar1 >> 0x1b & 1) != 0) || (bVar5)) {
          *(undefined4 *)(lVar4 + 0x1864) = 0x9e;
          return;
        }
      }
    }
    if (*(int *)(lVar4 + 0x1864) == 0x9e) {
      lVar4 = func_0x000144f99170(*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x9c));
      if (lVar4 != 0) {
        *(undefined4 *)(lVar4 + 0x1864) = 0xffffffff;
        return;
      }
      return;
    }
  }
  return;
}

