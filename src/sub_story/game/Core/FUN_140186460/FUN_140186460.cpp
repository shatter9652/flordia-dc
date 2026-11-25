// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140186460  size: 272 bytes
// Name:    FUN_140186460
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140186570, FUN_140183190, FUN_14503e0d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_140186460(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                      longlong param_5,undefined2 param_6)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  ushort uVar6;
  
  lVar4 = *(longlong *)(param_5 + 0x28);
  if (lVar4 == 0) {
    uVar1 = *(ushort *)(param_1 + 10);
    uVar2 = *(ushort *)(param_3 + 0x4a);
    lVar4 = param_3;
    do {
      lVar3 = FUN_14503e0d0(*(undefined8 *)(lVar4 + 0x28));
      lVar4 = *(longlong *)(lVar4 + 0x30);
      uVar6 = *(ushort *)(lVar3 + 10) & 0x200;
      if (lVar4 == 0) break;
    } while (uVar6 == 0);
    lVar4 = (**(code **)(*_DAT_14abcc310 + 0x70))(_DAT_14abcc310,param_3,0x1d0);
    if (lVar4 == 0) {
      return 0;
    }
    uVar5 = (**(code **)(*param_2 + 0xe0))(param_2);
    FUN_140186570(lVar4,param_5,uVar5,uVar1 * 2 & 0x40 | uVar1 & 0x21 | uVar2 & 0xc0 | uVar6);
    *(longlong *)(param_5 + 0x28) = lVar4;
  }
  FUN_140183190(lVar4,param_2,param_3,param_4,param_1,param_6);
  return lVar4;
}

