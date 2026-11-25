// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140048ad0  size: 124 bytes
// Name:    FUN_140048ad0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400554e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined4 FUN_140048ad0(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  uint *puVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined4 uStack_20;
  undefined1 uStack_1c;
  
  FUN_1400554e0(&uStack_20,*(undefined4 *)(param_1 + 0xac));
  uVar1 = (ulonglong)*(ushort *)(param_1 + 0x70);
  uVar3 = 0;
  if (uVar1 != 0) {
    puVar2 = *(uint **)(param_1 + 0x68);
    do {
      uVar4 = (ulonglong)param_2;
      bVar5 = param_2 < puVar2[1];
      param_2 = param_2 - puVar2[1];
      uVar3 = 0;
      if (bVar5) {
        if (*(char *)(*(longlong *)(param_1 + 0x58) + 0xf1 + (ulonglong)*puVar2 * 0xf8) == '\x01') {
          uVar3 = *(undefined4 *)
                   (*(longlong *)(*(longlong *)(param_1 + 0x58) + (ulonglong)*puVar2 * 0xf8 + 0xa0)
                   + uVar4 * 4);
        }
        break;
      }
      puVar2 = puVar2 + 2;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  func_0x000144e7e320(uStack_20,uStack_1c);
  return uVar3;
}

