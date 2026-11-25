// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140198950  size: 87 bytes
// Name:    FUN_140198950
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140198950(longlong param_1,longlong *param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  param_2[4] = 0x28;
  bVar1 = *(byte *)(param_1 + 0x28);
  pbVar4 = (byte *)(param_1 + 0x2c + (ulonglong)bVar1 * 4);
  if (bVar1 == 0) {
    pbVar4 = (byte *)(param_1 + 0x29);
  }
  bVar2 = *pbVar4;
  *param_2 = param_1 + 0x2c;
  *(uint *)(param_2 + 1) = (uint)bVar1;
  bVar1 = *pbVar4;
  param_2[2] = (ulonglong)(pbVar4 + 4) & 0xfffffffffffffffc;
  pbVar3 = (byte *)(((ulonglong)(pbVar4 + 4) & 0xfffffffffffffffc) + (ulonglong)bVar2 * 4);
  if (bVar2 == 0) {
    pbVar3 = pbVar4 + 1;
  }
  *(uint *)(param_2 + 3) = (uint)bVar1;
  param_2[5] = (longlong)pbVar3 - param_1;
  return;
}

