// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400bd610  size: 56 bytes
// Name:    FUN_1400bd610
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400bd610(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 unaff_RSI;
  
  if (param_1[0x10] != 0) {
    lVar1 = func_0x000144f855e0(*(undefined4 *)(param_1[0x10] + 0x9c));
    if (lVar1 != 0) {
      LOCK();
      *(uint *)(lVar1 + 0x14) = *(uint *)(lVar1 + 0x14) & 0xfffffffe;
      UNLOCK();
    }
  }
  FUN_140076f90(param_1[0xc],param_1,param_3,param_4,unaff_RSI);
  (**(code **)(*param_1 + 0x78))(param_1,0);
  (**(code **)(*param_1 + 0x60))(param_1);
  FUN_140077050(param_1);
                    /* WARNING: Could not recover jumptable at 0x000140076f83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,1);
  return;
}

