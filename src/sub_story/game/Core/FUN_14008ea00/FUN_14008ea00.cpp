// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14008ea00  size: 104 bytes
// Name:    FUN_14008ea00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ee8620
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_14008ea00(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  ulonglong uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0xd0);
  if (lVar1 != 0) {
    iVar2 = FUN_144ee8620(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x30),
                          *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x40));
    if ((ulonglong)*(uint *)(lVar1 + 8) != 0) {
      piVar3 = (int *)(lVar1 + 0xc);
      uVar4 = 0;
      do {
        if (*piVar3 == iVar2) {
          return param_1 + 0xe0 + (longlong)(int)uVar4 * 0x20;
        }
        uVar4 = uVar4 + 1;
        piVar3 = piVar3 + 4;
      } while (*(uint *)(lVar1 + 8) != uVar4);
      return 0;
    }
  }
  return 0;
}

