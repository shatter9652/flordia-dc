// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14008c510  size: 312 bytes
// Name:    FUN_14008c510
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14008c510(longlong param_1,undefined2 param_2,undefined8 *param_3,uint param_4,
                  longlong param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  short *psVar5;
  undefined1 *puStack_50;
  undefined8 *puStack_48;
  undefined2 *puStack_38;
  
  if (*(char *)((longlong)param_3 + 0x24) == '\x01') {
    *(uint *)(param_5 + 0xc) =
         (0x10 << (param_4 & 0x1f)) + (*(uint *)(param_5 + 0xc) & 5) * 2 | *(uint *)(param_5 + 0xc);
    func_0x000144f0e340(&puStack_50,param_5,param_4);
    func_0x000140088fc0(&puStack_50,param_3);
    lVar2 = param_1 + 0x10280 + (ulonglong)((uint)*(ushort *)((longlong)param_3 + 0x22) * 0x50);
    uVar3 = *(uint *)(lVar2 + 0xc);
    if ((uVar3 & 5) != 0) {
      *(uint *)(lVar2 + 0xc) = uVar3 * 2 & 10 | uVar3;
    }
    func_0x000144f0e340(&puStack_50,lVar2,~param_4 & 1);
    *(uint *)(lVar2 + 0xc) = *(uint *)(lVar2 + 0xc) | 0x10 << (~param_4 & 1);
    *puStack_50 = 1;
    uVar4 = param_3[3];
    *puStack_48 = param_3[2];
    puStack_48[1] = uVar4;
    *puStack_38 = param_2;
  }
  else {
    psVar5 = (short *)(param_5 + 0x10);
    if (param_4 == 1) {
      psVar5 = (short *)(param_5 + 0x48);
    }
    if ((*psVar5 == -1) && (*(short *)(param_3 + 4) != -1)) {
      *(short *)((longlong)param_3 + 0x22) = *(short *)(param_3 + 4);
      puVar1 = (undefined8 *)
               (param_1 + 0x1c0 +
               (ulonglong)((*(uint *)(param_5 + (ulonglong)(param_4 != 0) * 4) & 0x3fff) << 4));
      uVar4 = puVar1[1];
      *param_3 = *puVar1;
      param_3[1] = uVar4;
      func_0x000144f0e340(&puStack_50,param_5,param_4);
      func_0x000140088fc0(&puStack_50,param_3);
    }
  }
  return;
}

