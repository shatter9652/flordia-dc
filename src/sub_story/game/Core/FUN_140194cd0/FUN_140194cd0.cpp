// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140194cd0  size: 206 bytes
// Name:    FUN_140194cd0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14504fd10, FUN_144edcc30, FUN_144f3a020
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140194cd0(longlong param_1)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  uint *puVar4;
  ulonglong uVar5;
  undefined1 auVar6 [64];
  
  uVar5 = 0;
  auVar6 = ZEXT1264(ZEXT812(0));
  if (param_1 != 0) {
    lVar3 = FUN_14504fd10();
    uVar5 = auVar6._0_8_;
    if (lVar3 != 0) {
      cVar2 = FUN_144f3a020(*(undefined4 *)(param_1 + 0x9c),1);
      if (cVar2 == '\0') {
        cVar2 = func_0x0001450aa1a0(*(undefined4 *)(param_1 + 0x9c),1);
        if (cVar2 == '\0') {
          lVar3 = FUN_144edcc30(*(undefined8 *)(lVar3 + 0x108),0);
          if (lVar3 == 0) {
            puVar4 = (uint *)0x1478b1aa8;
          }
          else {
            puVar4 = (uint *)(*(longlong *)(lVar3 + 0x10) + 0x3f8);
          }
          return (ulonglong)*puVar4;
        }
        return (ulonglong)uRam00000001478b1ab8;
      }
      cVar2 = func_0x000144e238f0();
      if ((cVar2 != '\0') && (lVar3 = FUN_144edcc30(param_1,0), lVar3 != 0)) {
        uVar5 = (ulonglong)_DAT_145fc6ed8;
        iVar1 = *(int *)(*(longlong *)(lVar3 + 0x10) + 0x2c);
        if (iVar1 == -0x66d7d809) {
          return uVar5;
        }
        if (iVar1 == -0x5d85b061) {
          return uVar5;
        }
        if (iVar1 == 0x33431399) {
          return uVar5;
        }
      }
      return (ulonglong)uRam00000001478b1ab0;
    }
  }
  return uVar5;
}

