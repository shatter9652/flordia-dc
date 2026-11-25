// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140048ea0  size: 136 bytes
// Name:    FUN_140048ea0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400554e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_140048ea0(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  uint *puVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined4 uStack_20;
  undefined1 uStack_1c;
  
  FUN_1400554e0(&uStack_20,*(undefined4 *)(param_1 + 0xac));
  uVar1 = (ulonglong)*(ushort *)(param_1 + 0x70);
  if (uVar1 == 0) {
LAB_140048f24:
    lVar2 = 0;
  }
  else {
    puVar3 = *(uint **)(param_1 + 0x68);
    lVar2 = 0;
    do {
      uVar4 = (ulonglong)param_2;
      bVar5 = param_2 < puVar3[1];
      param_2 = param_2 - puVar3[1];
      if (bVar5) {
        if (*(char *)(*(longlong *)(param_1 + 0x58) + 0xf1 + (ulonglong)*puVar3 * 0xf8) != '\x01')
        goto LAB_140048f24;
        lVar2 = *(longlong *)(param_1 + 0x58) + (ulonglong)*puVar3 * 0xf8;
        lVar2 = (ulonglong)*(uint *)(*(longlong *)(lVar2 + 200) + uVar4 * 4) +
                *(longlong *)(lVar2 + 0xd0);
        break;
      }
      puVar3 = puVar3 + 2;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  func_0x000144e7e320(uStack_20,uStack_1c);
  return lVar2;
}

