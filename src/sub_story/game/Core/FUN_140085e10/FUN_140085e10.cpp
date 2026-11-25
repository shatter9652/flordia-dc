// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140085e10  size: 169 bytes
// Name:    FUN_140085e10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_142af6580
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140085e10(longlong param_1,undefined4 param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auVar5 [64];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  
  auStack_48._0_12_ = ZEXT812(0);
  auStack_48._12_4_ = 0;
  uVar2 = FUN_142af6580(param_2,*(undefined4 *)(param_1 + 0x9c),0x1ffff);
  if ((int)uVar2 == 0) {
    lVar3 = func_0x000140c5f790(param_2);
    uVar2 = 0;
    if ((lVar3 != 0) && (uVar1 = *(ushort *)(lVar3 + 0x48), uVar1 != 0)) {
      lVar3 = *(longlong *)(lVar3 + 0x40);
      lVar4 = 0;
      auVar5 = ZEXT1264(ZEXT812(0));
      do {
        auStack_58 = auVar5._0_16_;
        uVar2 = FUN_142af6580(*(undefined4 *)(lVar3 + lVar4),*(undefined4 *)(param_1 + 0x9c),0x1ffff
                              ,auStack_58);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        lVar4 = lVar4 + 4;
      } while ((ulonglong)uVar1 * 4 != lVar4);
      uVar2 = 0;
    }
  }
  return uVar2;
}

