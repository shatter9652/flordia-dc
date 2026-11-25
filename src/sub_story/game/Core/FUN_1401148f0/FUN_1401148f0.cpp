// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401148f0  size: 272 bytes
// Name:    FUN_1401148f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145203960, FUN_141a9dbc0, FUN_1451d02f0, FUN_140871a00, FUN_144fe0120, FUN_1426a26b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1401148f0(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  undefined4 uVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  cVar2 = FUN_1451d02f0(param_3);
  cVar3 = FUN_144fe0120(param_1,param_2,1,1,1,1);
  if (cVar3 == '\0') {
    if (param_4 != '\0') {
      FUN_1426a26b0(param_1,param_2);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x9c);
    lVar4 = func_0x000144fdf400(uVar1);
    lVar5 = func_0x000144da10f0(uVar1);
    lVar5 = FUN_145203960(*(undefined8 *)(lVar5 + 0x650),*(undefined8 *)(lVar5 + 0x660),0x18e,1);
    if ((lVar4 == 0) || (lVar5 == 0)) {
      if (cVar2 != '\0') {
        return (undefined8 *)0x0;
      }
    }
    else {
      cVar3 = func_0x0001451d0330(*(undefined8 *)(lVar4 + 8));
      if (cVar2 != '\0' || cVar3 != '\x01') {
        return (undefined8 *)0x0;
      }
    }
    puVar6 = (undefined8 *)FUN_140871a00();
    if (puVar6 != (undefined8 *)0x0) {
      FUN_141a9dbc0();
      *puVar6 = &UNK_1465321e0;
      *(undefined4 *)(puVar6 + 2) = 2;
      return puVar6;
    }
  }
  return (undefined8 *)0x0;
}

