// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c6350  size: 250 bytes
// Name:    FUN_1400c6350
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400c6350(longlong param_1,longlong param_2,undefined2 param_3)

{
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  lVar2 = *(longlong *)(param_1 + 0xd0);
  if (lVar2 == param_2) {
    return;
  }
  if (param_2 == 0 || lVar2 == 0) {
    *(longlong *)(param_1 + 0xd0) = param_2;
    if (param_2 == 0) goto LAB_1400c63e4;
  }
  else {
    uVar1 = *(ushort *)(*(longlong *)(param_2 + 0x30) + 8);
    iVar4 = 24000;
    if ((24000 < uVar1) && (iVar4 = 32000, 32000 < uVar1)) {
      iVar4 = 0xac44;
      if (0xac44 < uVar1) {
        iVar4 = 48000;
      }
    }
    uVar1 = *(ushort *)(*(longlong *)(lVar2 + 0x30) + 8);
    iVar3 = 24000;
    if ((24000 < uVar1) && (iVar3 = 32000, 32000 < uVar1)) {
      iVar3 = 0xac44;
      if (0xac44 < uVar1) {
        iVar3 = 48000;
      }
    }
    if (iVar4 != iVar3) {
      return;
    }
    if (*(char *)(*(longlong *)(param_2 + 0x30) + 0x1c) !=
        *(char *)(*(longlong *)(lVar2 + 0x30) + 0x1c)) {
      return;
    }
    *(longlong *)(param_1 + 0xd0) = param_2;
  }
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x54);
LAB_1400c63e4:
  *(undefined2 *)(param_1 + 0x100) = param_3;
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 2;
  }
  if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
    *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) | 2;
  }
  if ((*(byte *)(param_1 + 0x88) & 1) == 0) {
    *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) | 2;
  }
  return;
}

