// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400d8360  size: 212 bytes
// Name:    FUN_1400d8360
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400d8360(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  
  lVar2 = func_0x0001450bd950();
  bVar3 = *(byte *)(param_2 + 0x14d) & 0xfc;
  *(byte *)(param_2 + 0x14d) = bVar3;
  if (lVar2 == 0) {
    *(byte *)(param_2 + 0x14c) = *(byte *)(param_2 + 0x14c) & 0x7f;
  }
  else {
    bVar1 = *(byte *)(param_2 + 0x14c);
    uVar5 = *(uint *)(lVar2 + 0x10) >> 1;
    bVar4 = (byte)uVar5 & 0x80;
    *(byte *)(param_2 + 0x14c) = bVar1 & 0x7f | bVar4;
    if ((uVar5 & 0x80) != 0) {
      bVar6 = 2;
      if ((*(uint *)(lVar2 + 0x14) & 2) == 0) {
        bVar6 = (byte)*(uint *)(lVar2 + 0x14) >> 1 & 2;
      }
      bVar3 = bVar3 | bVar6;
      *(byte *)(param_2 + 0x14d) = bVar3;
      bVar6 = bVar6 >> 1 ^ 1;
      if (*(char *)(lVar2 + 0x2b3) != '\x02') {
        bVar6 = 0;
      }
      *(byte *)(param_2 + 0x14d) = bVar6 | bVar3;
      if (*(char *)(lVar2 + 0x2d5) == '\x01') {
        bVar3 = 0x40;
        if (*(char *)(lVar2 + 0x2b3) != '\x02') {
          bVar3 = bVar1 & 0x40;
        }
        *(byte *)(param_2 + 0x14c) = bVar1 & 0x3f | bVar4 | bVar3;
      }
    }
  }
  return;
}

