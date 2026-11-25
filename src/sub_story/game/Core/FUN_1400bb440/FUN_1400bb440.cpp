// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400bb440  size: 219 bytes
// Name:    FUN_1400bb440
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400bb440(longlong param_1)

{
  uint uVar1;
  byte bVar2;
  longlong *plVar3;
  
  if ((((*(char *)(param_1 + 0xfd) != '\0') &&
       (plVar3 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0),
       plVar3 != (longlong *)0x0)) && ((0x1cU >> (*(uint *)(plVar3 + 6) & 0x1f) & 1) != 0)) &&
     (plVar3[0x1c] == 0)) {
    uVar1 = *(uint *)((longlong)plVar3 + 0xec);
    if ((uVar1 >> 0x11 & 1) == 0) {
      bVar2 = (*(byte *)(param_1 + 0x103) & 0xfe | *(byte *)((longlong)plVar3 + 0x31) >> 1 & 1) ^ 1;
      *(byte *)(param_1 + 0x103) = bVar2;
      *(byte *)(param_1 + 0x103) = bVar2 & 0xfd | *(byte *)((longlong)plVar3 + 0x31) >> 1 & 2;
      (**(code **)(*plVar3 + 0x148))(plVar3,1,1,1);
      *(byte *)((longlong)plVar3 + 0xee) = *(byte *)((longlong)plVar3 + 0xee) | 2;
      *(byte *)(param_1 + 0x102) = *(byte *)(param_1 + 0x102) | 1;
    }
    if ((uVar1 >> 0x17 & 1) != 0) {
      *(byte *)(param_1 + 0x103) = *(byte *)(param_1 + 0x103) & 0xfc;
      *(uint *)((longlong)plVar3 + 0xec) = *(uint *)((longlong)plVar3 + 0xec) & 0xff7dffff | 0x20000
      ;
    }
  }
  *(byte *)(param_1 + 0x140) = *(byte *)(param_1 + 0x140) & 0xbf;
  *(byte *)(param_1 + 0x141) = *(byte *)(param_1 + 0x141) & 0xfc;
  return;
}

