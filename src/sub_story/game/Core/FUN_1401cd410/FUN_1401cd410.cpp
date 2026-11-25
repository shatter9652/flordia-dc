// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401cd410  size: 97 bytes
// Name:    FUN_1401cd410
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401cd410(longlong param_1)

{
  undefined2 uVar1;
  undefined1 auVar2 [16];
  ulonglong uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  auVar2 = vcvtph2ps_f16c(ZEXT216(*(ushort *)(*(longlong *)(param_1 + 0x40) + 0xea)));
  uVar3 = (ulonglong)(auVar2._0_4_ < 0.0);
  uVar1 = *(undefined2 *)(param_1 + 0x76 + uVar3 * 2);
  *(undefined2 *)(param_1 + 0x7a + uVar3 * 2) = uVar1;
  plVar4 = (longlong *)
           func_0x000144fbe030(CONCAT11((char)((ushort)uVar1 >> 8),*(undefined1 *)(param_1 + 0x7e)))
  ;
  uVar5 = func_0x000145310cd0(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x0001401cd46e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x20))(plVar4,uVar5,param_1,*(code **)(*plVar4 + 0x20));
  return;
}

