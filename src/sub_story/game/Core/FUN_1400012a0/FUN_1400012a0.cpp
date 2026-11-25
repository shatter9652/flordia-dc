// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400012a0  size: 151 bytes
// Name:    FUN_1400012a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140bc3240, FUN_14501bb20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400012a0(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  longlong lVar5;
  int iVar6;
  int aiStack_24 [3];
  
  if (*(char *)(param_1 + 0x59) == '\x01') {
    uVar4 = FUN_14501bb20(param_1,0,1);
  }
  else {
    uVar4 = 0;
  }
  *(undefined1 *)(param_1 + 0x59) = uVar4;
  bVar2 = FUN_140bc3240(*(undefined4 *)(_DAT_14a9b3e18 + 0xbf4),
                        *(undefined8 *)(_DAT_14a9b3e18 + 0xbf8),0xa8c3c7bf);
  bVar3 = FUN_140bc3240(*(undefined4 *)(_DAT_14a9b3e18 + 0xbf4),
                        *(undefined8 *)(_DAT_14a9b3e18 + 0xbf8),0x42690040);
  bVar2 = (bVar3 | bVar2) & *(byte *)(param_1 + 0x59);
  iVar6 = 0x325e1316;
  *(byte *)(param_1 + 0x59) = bVar2;
  lVar1 = _DAT_14a9b3e18;
  if (bVar2 != 1) {
    func_0x00014013ffd0(_DAT_14a9b3e18,aiStack_24);
    if (aiStack_24[0] != 0x325e1316) {
      return;
    }
    iVar6 = 0;
  }
  if (*(int *)(lVar1 + 0x60) != iVar6) {
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      lVar5 = func_0x00014369c770(iVar6);
      if (lVar5 == 0) {
        return;
      }
    }
    *(int *)(lVar1 + 0x60) = iVar6;
  }
  return;
}

