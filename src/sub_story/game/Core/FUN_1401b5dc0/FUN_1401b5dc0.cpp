// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b5dc0  size: 375 bytes
// Name:    FUN_1401b5dc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450785a0, FUN_144390730, FUN_145078410, FUN_1401b7130, FUN_1401b5f60, FUN_1450783a0, FUN_1401b6c20, FUN_144390410
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1401b5dc0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 auStack_78 [4];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined1 auStack_48 [32];
  
  cVar1 = func_0x000144da4370(*(undefined1 *)(_DAT_14ab7ef10 + 0x232));
  if (cVar1 == '\0') {
    auStack_78[0] = 0x275822c4;
    uStack_68 = _DAT_145fc6ee0;
    uStack_60 = _UNK_145fc6ee8;
    uStack_58 = 0;
    cVar1 = func_0x000144da4370(*(undefined1 *)((longlong)param_1 + 0x3c));
    uVar3 = *(undefined8 *)(*param_1 + 0x20);
    uVar6 = func_0x000140004380(*(undefined4 *)(*param_1 + 0x2c));
    if (cVar1 == '\0') {
      FUN_144390410(uVar3,auStack_78);
    }
    else {
      FUN_144390730(uVar3,auStack_78,uVar6);
    }
    lVar2 = FUN_1450783a0(param_1[2],*(undefined8 *)(*param_1 + 0x230),auStack_78);
  }
  else {
    uVar3 = *(undefined8 *)(*param_1 + 0x20);
    auStack_78[0] = 0x275822c4;
    uStack_68 = _DAT_145fc6ee0;
    uStack_60 = _UNK_145fc6ee8;
    uStack_58 = 0;
    cVar1 = func_0x000144da4370(*(undefined1 *)((longlong)param_1 + 0x3c));
    if (cVar1 == '\0') {
      FUN_145078410();
      lVar2 = FUN_1450783a0(param_1[2],*(undefined8 *)(*param_1 + 0x230),auStack_78);
      if (lVar2 == 0) {
        return 0;
      }
      lVar4 = *param_1;
      uVar5 = (undefined4)param_1[1];
      FUN_1401b5f60(uVar3,auStack_48);
    }
    else {
      FUN_1401b7130(uVar3,auStack_78,0);
      lVar2 = FUN_1450783a0(param_1[2],*(undefined8 *)(*param_1 + 0x230),auStack_78);
      if (lVar2 == 0) {
        return 0;
      }
      lVar4 = *param_1;
      uVar5 = (undefined4)param_1[1];
      FUN_1401b6c20(uVar3,auStack_48);
    }
    uVar3 = func_0x000144f01ca0(lVar2);
    FUN_1450785a0(lVar4,uVar3,auStack_48,uVar5);
  }
  return lVar2;
}

