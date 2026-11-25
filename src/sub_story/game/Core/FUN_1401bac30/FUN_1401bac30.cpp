// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401bac30  size: 389 bytes
// Name:    FUN_1401bac30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401badc0, FUN_145078050, FUN_144e96700, FUN_144fac3c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 *
FUN_1401bac30(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_2 == 4) {
    puVar1 = (undefined8 *)FUN_144e96700(0x149aafad0);
    if (puVar1 == (undefined8 *)0x0) {
      uVar2 = func_0x000144fc99c0(0,0);
      puVar1 = (undefined8 *)FUN_144fac3c0(uVar2,0x50,0x10);
    }
    FUN_1401badc0(puVar1,param_3,param_4,param_5,param_6);
    *puVar1 = &UNK_1465ebbb0;
    FUN_145078050(param_1,puVar1);
    return puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001401bacbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar1 = (undefined8 *)
           (*(code *)(&UNK_146766be0 + *(int *)(&UNK_146766be0 + (ulonglong)(param_2 + 1) * 4)))
                     (&UNK_146766be0 + *(int *)(&UNK_146766be0 + (ulonglong)(param_2 + 1) * 4));
  return puVar1;
}

