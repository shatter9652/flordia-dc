// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140051e30  size: 74 bytes
// Name:    FUN_140051e30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e73290
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140051e30(longlong param_1)

{
  ushort uVar1;
  short sVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_b8 [40];
  undefined1 auStack_90 [40];
  undefined1 auStack_68 [48];
  
  if (param_1 == 0) {
    return;
  }
  *(byte *)(param_1 + 0x51c) = *(byte *)(param_1 + 0x51c) | 8;
  if (*(longlong *)(param_1 + 0x118) == 0) {
    if (*(longlong *)(param_1 + 0x468) != 0 || *(longlong *)(param_1 + 0x4a0) != 0) {
      return;
    }
  }
  else {
    FUN_144e73290(param_1,1);
  }
  lVar3 = *(longlong *)(param_1 + 0x100);
  func_0x000144e72fd0(auStack_90);
  FUN_144e73210(lVar3 + 0x178,auStack_b8,auStack_90);
  uVar1 = *(ushort *)(param_1 + 0x1d4);
  if (uVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x100);
    if (*(longlong *)(param_1 + 0x118) == 0) {
      lVar6 = 0;
      do {
        lVar4 = *(longlong *)(param_1 + 0x1d8);
        sVar2 = *(short *)(lVar4 + 6 + lVar6);
        lVar5 = 0;
        if (*(ushort *)(lVar4 + lVar6) != 0xffff) {
          lVar5 = (ulonglong)*(ushort *)(lVar4 + lVar6) * 0x40 + *(longlong *)(param_1 + 0x1e8);
        }
        if (((*(byte *)(lVar3 + 0x1ba) & 0x40) != 0) ||
           ((lVar5 != 0 && (*(char *)(lVar5 + 0x1d) != '\x01')))) {
          FUN_144e34f50(param_1,auStack_68,0,lVar4 + lVar6);
          FUN_144e72ff0(auStack_b8,(int)sVar2);
        }
        lVar6 = lVar6 + 10;
      } while ((ulonglong)((uint)uVar1 * 2) * 5 != lVar6);
    }
    else {
      lVar6 = 0;
      do {
        lVar4 = *(longlong *)(param_1 + 0x1d8);
        sVar2 = *(short *)(lVar4 + 6 + lVar6);
        lVar5 = 0;
        if (*(ushort *)(lVar4 + lVar6) != 0xffff) {
          lVar5 = (ulonglong)*(ushort *)(lVar4 + lVar6) * 0x40 + *(longlong *)(param_1 + 0x1e8);
        }
        if (((*(byte *)(lVar3 + 0x1ba) & 0x40) == 0) &&
           ((lVar5 == 0 || (*(char *)(lVar5 + 0x1d) == '\x01')))) {
          FUN_144e73130(param_1,auStack_68,lVar4 + lVar6);
        }
        else {
          FUN_144e34f50(param_1,auStack_68,0);
        }
        FUN_144e72ff0(auStack_b8,(int)sVar2);
        lVar6 = lVar6 + 10;
      } while ((ulonglong)((uint)uVar1 * 2) * 5 != lVar6);
    }
  }
  FUN_144e731c0(auStack_b8);
  func_0x000144e2aa90(auStack_90);
  return;
}

