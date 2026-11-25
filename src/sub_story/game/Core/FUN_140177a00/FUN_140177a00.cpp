// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140177a00  size: 284 bytes
// Name:    FUN_140177a00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1449b84c0, FUN_1452fe170, FUN_140649660, FUN_1449b85e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140177a00(longlong param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if (((((*(byte *)(param_1 + 0x271) & 0x40) != 0) &&
       (cVar2 = func_0x00014085f840(*(undefined4 *)(param_1 + 0x1f0)), cVar2 == '\0')) &&
      (uVar1 = *(uint *)(param_1 + 0x274), (uVar1 >> 0xd & 1) == 0)) &&
     ((lVar3 = FUN_140649660(param_2,1), lVar3 != 0 &&
      ((uVar1 >> 0xe & 1) == 0 && 0xf9 < (uint)(_DAT_14abbef40 - *(int *)(param_1 + 0x2d0)))))) {
    *(int *)(param_1 + 0x2d0) = _DAT_14abbef40;
    uVar4 = *(undefined8 *)(param_2 + 0x70);
    uVar5 = *(undefined8 *)(param_2 + 0x78);
    uStack_58 = uVar4;
    uStack_50 = uVar5;
    cVar2 = FUN_1449b84c0(&uStack_58,lVar3,&uStack_78);
    if ((cVar2 == '\0') &&
       (uStack_68 = uVar4, uStack_60 = uVar5, cVar2 = FUN_1449b85e0(&uStack_68,lVar3,&uStack_78),
       cVar2 == '\0')) {
      return;
    }
    uStack_38 = uStack_78;
    uStack_30 = uStack_70;
    FUN_1452fe170(param_1);
    if (*(longlong *)(param_1 + 0x20) != 0 && *(int *)(param_1 + 0x68) != 0) {
      uStack_48 = uStack_78;
      uStack_40 = uStack_70;
      FUN_1452fe170();
    }
  }
  return;
}

