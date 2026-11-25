// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401ad4c0  size: 203 bytes
// Name:    FUN_1401ad4c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450712f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401ad4c0(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  undefined1 auStack_18 [8];
  
  cVar2 = FUN_1450712f0(*(undefined4 *)((longlong)param_2 + 0xfc),param_2[0x20],auStack_18);
  uVar1 = *(uint *)(param_2 + 0x15);
  if (cVar2 != '\0') {
    if ((uVar1 >> 0xe & 1) != 0) {
      *(byte *)(param_2 + 0x29) = *(byte *)(param_2 + 0x29) | 4;
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      *(byte *)(param_2 + 0x29) = *(byte *)(param_2 + 0x29) | 2;
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      *(byte *)(param_2 + 0x29) = *(byte *)(param_2 + 0x29) | 8;
    }
    if ((short)uVar1 < 0) {
      *(byte *)((longlong)param_2 + 0x149) = *(byte *)((longlong)param_2 + 0x149) | 4;
    }
    if ((uVar1 >> 0x10 & 1) != 0) {
      *(byte *)(param_2 + 0x29) = *(byte *)(param_2 + 0x29) | 0x10;
    }
  }
  bVar3 = func_0x0001401ad590(uVar1,*(undefined4 *)((longlong)param_2 + 0xdc));
  *(uint *)(param_2 + 0x29) = (uint)bVar3 << 0xc | *(uint *)(param_2 + 0x29) & 0xffffefff;
  *(undefined4 *)(param_2 + 0x2c) = 1;
  param_2[0x2d] = 0x100000001;
                    /* WARNING: Could not recover jumptable at 0x0001401ad53f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x58))(param_2,param_1);
  return;
}

