// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401bc750  size: 224 bytes
// Name:    FUN_1401bc750
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ff2000, FUN_14507b4b0, FUN_1401bc850, FUN_144e295e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1401bc750(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined1 uStack_31;
  undefined8 uStack_30;
  
  lVar2 = *param_2;
  puVar3 = (undefined8 *)func_0x0001401bc830(*(undefined8 *)(lVar2 + 0xa0));
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1401bc850(puVar3,lVar2);
    *puVar3 = &UNK_146678080;
  }
  FUN_144ff2000(puVar3,param_2[1]);
  uVar1 = *(uint *)(param_1 + 8);
  lVar2 = param_2[0x11];
  uStack_30 = 0;
  uVar4 = uVar1 & 3;
  if (uVar4 == 2) {
    FUN_14507b4b0(lVar2,*(undefined4 *)(param_1 + 0xc),&uStack_30);
  }
  else {
    puVar5 = (undefined4 *)(param_1 + 0xc);
    if ((uVar4 == 3) || (uVar4 != 1)) goto LAB_1401bc7d0;
    uStack_30 = (*_DAT_149e46148)(0x149e46130,*(undefined4 *)(param_1 + 0xc),param_2[1],0);
  }
  puVar5 = (undefined4 *)(param_1 + 0x10);
LAB_1401bc7d0:
  if ((uVar1 & 0x30) == 0x20) {
    FUN_144e295e0(lVar2,*puVar5,&uStack_31);
  }
  func_0x0001401bc840(puVar3,uStack_30);
  return puVar3;
}

