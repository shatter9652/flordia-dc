// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b8430  size: 182 bytes
// Name:    FUN_1401b8430
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145078e80, FUN_144e589e0, FUN_140092cc0, FUN_144e96700, FUN_145078170, FUN_144fac3c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_1401b8430(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)
           FUN_144e589e0(*(undefined4 *)((longlong)param_1 + 0x94),param_1[0x13],param_2);
  if (puVar2 == (undefined8 *)0x0) {
    cVar1 = FUN_140092cc0(*(undefined8 *)(*(longlong *)(*param_1 + 8) + 0x18),param_2);
    if (cVar1 == '\0') {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2 = (undefined8 *)FUN_144e96700(0x149aafb80);
      if (puVar2 == (undefined8 *)0x0) {
        uVar3 = func_0x000144fc99c0(0,0);
        puVar2 = (undefined8 *)FUN_144fac3c0(uVar3,0x60,0x10);
      }
      FUN_145078e80(puVar2,0xffffffff);
      *puVar2 = &UNK_1465ea210;
      *(undefined4 *)(puVar2 + 10) = param_2;
      *(undefined4 *)((longlong)puVar2 + 0x54) = 0xffffffff;
      *(byte *)(puVar2 + 0xb) = *(byte *)(puVar2 + 0xb) & 0xfe;
      *(undefined4 *)(puVar2 + 5) = 3;
      FUN_145078170(param_1,3,puVar2);
    }
  }
  return puVar2;
}

