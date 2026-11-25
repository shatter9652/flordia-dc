// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b9180  size: 173 bytes
// Name:    FUN_1400b9180
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400b9180(uint param_1,uint param_2,char param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint *puVar4;
  longlong *plVar5;
  
  if ((~param_1 & 0x7ffe) != 0) {
    uVar1 = param_1 >> 1 & 0x3fff;
    plVar5 = _DAT_1498e6400;
    if ((param_1 & 1) != 0) {
      plVar5 = _DAT_1498e6408;
    }
    if (((1 << ((byte)(param_1 >> 1) & 7) & (uint)*(byte *)(plVar5[5] + (ulonglong)(uVar1 >> 3))) !=
         0) && (lVar2 = (ulonglong)(uVar1 * (int)plVar5[1]) + *plVar5, lVar2 != 0)) {
      param_1 = param_1 >> 0x10;
      if ((*(byte *)(lVar2 + 0x28) & 1) == 0) {
        lVar3 = 0;
        if (param_1 < *(ushort *)(lVar2 + 0x4c)) {
          lVar3 = (ulonglong)(param_1 * 0x50) + *(longlong *)(lVar2 + 8);
        }
        puVar4 = (uint *)(lVar3 + 0x4c);
      }
      else {
        puVar4 = (uint *)((ulonglong)(param_1 << 2) + *(longlong *)(lVar2 + 0x80));
      }
      uVar1 = *puVar4 | param_2;
      if (param_3 == '\0') {
        uVar1 = ~param_2 & *puVar4;
      }
      *puVar4 = uVar1;
    }
  }
  return;
}

