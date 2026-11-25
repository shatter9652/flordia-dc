// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140171030  size: 62 bytes
// Name:    FUN_140171030
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145028490
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140171030(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined8 *puStack_20;
  undefined *puStack_18;
  
  cVar1 = FUN_145028490(*param_1);
  if (cVar1 != '\0') {
    uStack_30 = func_0x0001452a14f0(*(undefined8 *)(*param_1 + 400));
    puStack_20 = &uStack_30;
    puStack_18 = &UNK_144350ef0;
    uStack_34 = param_2;
    uStack_28 = param_2;
    FUN_14016cf50(uStack_30,0x3f43ac93,&uStack_34,&UNK_144348e90,&puStack_20,0xff06455f,0xff06455f);
    return;
  }
  return;
}

