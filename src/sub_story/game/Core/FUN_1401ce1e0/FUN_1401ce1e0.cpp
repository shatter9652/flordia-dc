// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401ce1e0  size: 95 bytes
// Name:    FUN_1401ce1e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401ce1e0(longlong param_1,longlong param_2,undefined1 (*param_3) [16],uint param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [64];
  
  auVar3._0_12_ = ZEXT812(0);
  auVar3._12_4_ = 0;
  auVar4 = ZEXT1664(auVar3);
  plVar1 = *(longlong **)
            (param_1 + (ulonglong)*(ushort *)(param_2 + 4 + (ulonglong)(param_4 >> 0x10) * 8) * 8);
  if (plVar1 != (longlong *)0x0) {
    iVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    auVar3 = auVar4._0_16_;
    if (iVar2 == 0) {
      auVar3 = *(undefined1 (*) [16])
                (plVar1[10] +
                (ulonglong)*(ushort *)(param_2 + 2 + (ulonglong)(param_4 >> 0x10) * 8) * 0x10);
    }
  }
  *param_3 = auVar3;
  return;
}

