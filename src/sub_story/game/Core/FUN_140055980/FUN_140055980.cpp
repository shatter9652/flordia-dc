// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140055980  size: 144 bytes
// Name:    FUN_140055980
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140055980(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  char cVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  
  uVar2 = *(uint *)(param_1 + 0x2c);
  if ((ulonglong)uVar2 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x30);
    lVar7 = 0;
    do {
      cVar3 = func_0x00014509fb10(*(undefined8 *)(lVar6 + lVar7));
      if (cVar3 == '\0') {
        return 0;
      }
      lVar7 = lVar7 + 8;
    } while ((ulonglong)uVar2 << 3 != lVar7);
  }
  if ((ulonglong)*(uint *)(param_1 + 0x3c) != 0) {
    plVar4 = *(longlong **)(param_1 + 0x40);
    plVar1 = plVar4 + *(uint *)(param_1 + 0x3c);
    do {
      uVar5 = (ulonglong)*(uint *)(*plVar4 + 0xf4);
      if (uVar5 != 0) {
        lVar6 = 0;
        do {
          if ((*(byte *)(*(longlong *)(*plVar4 + 0xf8) + 0x44 + lVar6) & 1) == 0) {
            return 0;
          }
          lVar6 = lVar6 + 0x50;
        } while (uVar5 * 0x50 != lVar6);
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar1);
  }
  return 1;
}

