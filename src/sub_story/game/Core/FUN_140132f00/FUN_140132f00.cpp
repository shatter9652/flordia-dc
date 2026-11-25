// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140132f00  size: 287 bytes
// Name:    FUN_140132f00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fdf810, FUN_144fdf980, FUN_144fdf610, FUN_144fdf560, FUN_1426a3200
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8
FUN_140132f00(longlong param_1,longlong param_2,longlong param_3,longlong param_4,undefined8 param_5
             )

{
  uint uVar1;
  undefined4 *puVar2;
  char cVar3;
  byte bVar4;
  char extraout_AL;
  undefined8 uVar5;
  undefined7 uVar6;
  undefined7 extraout_var;
  undefined8 uVar7;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar2 = *(undefined4 **)(param_4 + 8);
  if ((puVar2 != (undefined4 *)0x0) &&
     (cVar3 = FUN_144fdf610(*(undefined4 *)(param_3 + 0x9c),puVar2[0x10],puVar2[0x11]),
     cVar3 != '\0')) {
    uVar5 = *(undefined8 *)(param_2 + 0x70);
    uVar7 = *(undefined8 *)(param_2 + 0x78);
    uStack_58 = uVar5;
    uStack_50 = uVar7;
    cVar3 = FUN_144fdf560(&uStack_58,*(undefined4 *)(param_4 + 0x18),*(undefined1 *)(param_4 + 0x36)
                         );
    if (cVar3 != '\0') {
      uStack_68 = *(undefined8 *)(param_2 + 0x50);
      uStack_60 = *(undefined8 *)(param_2 + 0x58);
      uStack_78 = uVar5;
      uStack_70 = uVar7;
      bVar4 = FUN_144fdf810(&uStack_68,&uStack_78,puVar2[0xe],puVar2[0xf]);
      uVar1 = puVar2[0x14];
      if (((((~bVar4 & (uVar1 >> 0x17 & 1) == 0) == 0) &&
           (cVar3 = FUN_144fdf980(param_2,*(undefined4 *)(param_3 + 0x9c),*puVar2,uVar1),
           cVar3 != '\0')) &&
          (uVar5 = func_0x000144fdf450(param_5,*(undefined8 *)(puVar2 + 2)), (char)uVar5 != '\0'))
         && (((uVar6 = (undefined7)((ulonglong)uVar5 >> 8), bVar4 != 0 || (uVar1 >> 0x17 & 1) == 0
              || ((*(byte *)(param_1 + 0x100) & 8) != 0)) ||
             (FUN_1426a3200(), uVar6 = extraout_var, extraout_AL != '\0')))) {
        return CONCAT71(uVar6,1);
      }
    }
  }
  return 0;
}

