// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401811e0  size: 170 bytes
// Name:    FUN_1401811e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140181290, FUN_14503e0d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401811e0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  ushort uVar3;
  longlong *plVar4;
  ushort uVar5;
  
  if ((param_3 & 0x20) == 0) goto LAB_1401811f5;
  lVar1 = param_1[6];
  lVar2 = FUN_14503e0d0(param_1[5]);
  if (lVar1 == 0) {
    uVar3 = 4;
LAB_140181269:
    uVar5 = *(ushort *)(lVar2 + 10) & 0xc;
    if ((*(ushort *)(lVar2 + 10) & 0xc) == 0) {
      uVar5 = uVar3;
    }
  }
  else {
    uVar5 = 0xc;
    uVar3 = *(ushort *)(lVar1 + 0x4a) & 0xc;
    if (uVar3 != 0xc) goto LAB_140181269;
  }
  (**(code **)(*param_1 + 0x38))(param_1,param_2,uVar5);
  param_3 = param_3 & 0xffffffff;
LAB_1401811f5:
  if (((param_3 & 0x10) != 0) && (param_1[4] != 0)) {
    func_0x00014503d720(param_1[4],param_1,1);
    for (plVar4 = (longlong *)param_1[0xf]; param_1 + 0xc != plVar4; plVar4 = (longlong *)plVar4[3])
    {
      FUN_140181290(plVar4,param_2);
    }
  }
  return;
}

