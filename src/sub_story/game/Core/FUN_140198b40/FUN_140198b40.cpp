// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140198b40  size: 106 bytes
// Name:    FUN_140198b40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_140198b40(longlong param_1,longlong param_2,int param_3,undefined1 param_4,
                      undefined1 param_5)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if ((ulonglong)*(uint *)(param_1 + 0x14) != 0) {
    uVar3 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + uVar3 * 8);
      if ((*plVar1 == 0) && ((int)plVar1[1] == param_3)) {
        func_0x000140a22250(plVar1,*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0x60));
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + uVar3 * 8);
        *(undefined1 *)(lVar2 + 0x21) = param_5;
        *(undefined1 *)(lVar2 + 0x20) = param_4;
        return lVar2;
      }
      uVar3 = uVar3 + 1;
    } while (*(uint *)(param_1 + 0x14) != uVar3);
  }
  return 0;
}

