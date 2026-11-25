// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b7430  size: 60 bytes
// Name:    FUN_1401b7430
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1455cb930
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_1401b7430(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)
           FUN_1455cb930(*(undefined4 *)((longlong)param_1 + 0xa4),param_1[0x15],param_2);
  if (puVar2 != (undefined8 *)0x0) {
    return puVar2;
  }
  cVar1 = FUN_140092d40(*(undefined8 *)(*(longlong *)(*param_1 + 8) + 0x18),10,param_2);
  if (cVar1 == '\0') {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = (undefined8 *)FUN_144e96700(0x149aafb20);
    if (puVar2 == (undefined8 *)0x0) {
      uVar3 = func_0x000144fc99c0(0,0);
      puVar2 = (undefined8 *)FUN_144fac3c0(uVar3,0x120,0x10);
    }
    FUN_145078e80(puVar2,0xffffffff);
    *(undefined4 *)(puVar2 + 10) = 0;
    puVar2[0xb] = 0;
    *(undefined4 *)((longlong)puVar2 + 100) = 0xffffffff;
    *(undefined4 *)(puVar2 + 0x22) = 10;
    *(byte *)((longlong)puVar2 + 0x114) = *(byte *)((longlong)puVar2 + 0x114) & 0xfe;
    *puVar2 = &UNK_1465e9810;
    *(undefined4 *)(puVar2 + 5) = 10;
    *(undefined4 *)(puVar2 + 0xc) = param_2;
    FUN_145078170(param_1,4,puVar2);
  }
  return puVar2;
}

