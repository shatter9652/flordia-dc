// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14004bd60  size: 212 bytes
// Name:    FUN_14004bd60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_14004bd60(uint param_1)

{
  uint *puVar1;
  byte bVar2;
  ushort uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  uVar6 = _DAT_145fc6ed8;
  if (param_1 < _DAT_1475289ac) {
    bVar2 = *(byte *)(_DAT_1475289b0 + 0x14 + (ulonglong)param_1 * 0x18);
    uVar6 = 0;
    if ((bVar2 & 1) != 0) {
      puVar1 = (uint *)(_DAT_1475289b0 + (ulonglong)param_1 * 0x18);
      if ((bVar2 & 6) == 2) {
        puVar5 = (undefined4 *)
                 (*(longlong *)
                   (*(longlong *)(_DAT_1475289a0 + 8 + (ulonglong)*puVar1 * 0x20) + 8 +
                   (ulonglong)puVar1[1] * 0x40) + 4 + (ulonglong)puVar1[3] * 0x10);
      }
      else {
        if ((bVar2 & 8) != 0) {
          return _DAT_145fc6ed8;
        }
        lVar4 = (ulonglong)puVar1[3] * 0x20 +
                *(longlong *)
                 (*(longlong *)(_DAT_1475289a0 + 8 + (ulonglong)*puVar1 * 0x20) + 0x18 +
                 (ulonglong)puVar1[1] * 0x40);
        if (((bVar2 & 2) == 0) &&
           (uVar3 = (*(code *)*_DAT_146842f88)(_DAT_147528a10),
           (uint)uVar3 < *(uint *)(lVar4 + 0x14))) {
          return *(undefined4 *)(lVar4 + 8);
        }
        puVar5 = (undefined4 *)(lVar4 + 4);
      }
      uVar6 = *puVar5;
    }
  }
  return uVar6;
}

