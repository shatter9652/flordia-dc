// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14007ac30  size: 117 bytes
// Name:    FUN_14007ac30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14007ac30(longlong *param_1,uint param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  
  uVar3 = param_2;
  if (*(uint *)((longlong)param_1 + 0xdc) < param_2) {
    cVar2 = (**(code **)(*param_1 + 0x80))(param_1);
    uVar5 = *(uint *)((longlong)param_1 + 0xdc);
    uVar3 = uVar5;
    if (cVar2 != '\0') {
      uVar1 = *(uint *)((longlong)param_1 + 0xe4);
      if (uVar1 < uVar5) {
        for (uVar3 = param_2 - uVar1; uVar5 < uVar3; uVar3 = uVar3 + (uVar1 - uVar5)) {
        }
      }
    }
  }
  *(uint *)((longlong)param_1 + 0xac) = uVar3;
  if ((*(byte *)(param_1 + 0x23) & 0x20) == 0) {
    func_0x00014007acb0(param_1,0,0x100);
  }
  uVar3 = *(uint *)((longlong)param_1 + 0xac) / (uint)*(ushort *)(param_1 + 0xf);
  if (uVar3 < 0x1000 || param_1[0x13] == 0) {
    plVar4 = param_1 + 0x15;
  }
  else {
    uVar3 = (uVar3 >> 0xc) - 1;
    uVar5 = (int)param_1[0x14] - 1;
    if (uVar5 <= uVar3) {
      uVar3 = uVar5;
    }
    plVar4 = (longlong *)(param_1[0x13] + (ulonglong)uVar3 * 2);
  }
  *(short *)((longlong)param_1 + 0xaa) = (short)*plVar4;
  return;
}

