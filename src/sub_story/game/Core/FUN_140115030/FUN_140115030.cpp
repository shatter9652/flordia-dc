// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140115030  size: 207 bytes
// Name:    FUN_140115030
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1452f7180
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140115030(longlong param_1)

{
  byte bVar1;
  ushort uVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  bVar1 = *(byte *)(param_1 + 0xe8);
  if ((bVar1 & 4) == 0) {
    if ((bVar1 & 0x20) == 0) {
      if ((bVar1 & 0x10) == 0) {
        if ((*(byte *)(param_1 + 0x180) & 4) == 0) {
          lVar5 = FUN_1452f7180(*(undefined4 *)(param_1 + 0xcc));
          if (lVar5 != 0) {
            uVar2 = *(ushort *)(lVar5 + 0x118);
            plVar3 = *(longlong **)(lVar5 + 0x110);
            if (((uVar2 != 0) && (*plVar3 != 0)) &&
               ((*(uint *)(*(longlong *)(*plVar3 + 0x10) + 0x1c) & 0xfffffffe) == 2)) {
              return 0x1b0;
            }
            uVar4 = func_0x000140540ca0(plVar3,uVar2,*(undefined4 *)(param_1 + 200));
            if (((uVar4 < uVar2) && (plVar3[uVar4] != 0)) &&
               (*(int *)(*(longlong *)(plVar3[uVar4] + 0x10) + 0x1c) == 0xf)) {
              return 0x1ae;
            }
          }
          uVar6 = 0x1aa;
        }
        else {
          uVar6 = 0x1ac;
        }
      }
      else {
        uVar6 = 0x1cc;
      }
    }
    else {
      uVar6 = 0x1ce;
    }
  }
  else {
    uVar6 = 0x1d1;
  }
  return uVar6;
}

