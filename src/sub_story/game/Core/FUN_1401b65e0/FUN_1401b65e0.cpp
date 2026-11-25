// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b65e0  size: 437 bytes
// Name:    FUN_1401b65e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401b67a0, FUN_145079070, FUN_144390190, FUN_144384620, FUN_1401b6c70, FUN_144390220, FUN_145078ec0, FUN_1443900d0, FUN_1401bae50, FUN_144e46a00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401b65e0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  undefined1 auStack_a8 [32];
  undefined1 uStack_88;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined8 **ppuStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  
  auStack_78._0_12_ = ZEXT812(0);
  auStack_78._12_4_ = 0;
  uStack_b8 = 0x275822c4;
  func_0x000144df5050(auStack_a8);
  uStack_88 = 0;
  cVar4 = func_0x000144da4370(*(undefined1 *)((longlong)param_1 + 0x3c));
  if (cVar4 == '\0') {
    FUN_145078ec0();
  }
  else {
    FUN_1401b6c70(*(undefined8 *)(*param_1 + 0x20),&uStack_b8,0);
  }
  cVar4 = func_0x000144da4370(*(undefined1 *)(_DAT_14ab7ef10 + 0x232));
  if (cVar4 == '\0') {
    uVar3 = *(undefined8 *)(*param_1 + 0x20);
    if (iStack_b4 == 0) {
      FUN_144390190(uVar3,auStack_58);
      FUN_144384620(auStack_a8,auStack_58);
    }
    else {
      func_0x000144391190(&puStack_d8,&uStack_b8,param_1[2],*(undefined8 *)(*param_1 + 0x230),
                          param_1[4]);
      uVar5 = func_0x000140004380(*(undefined4 *)(*param_1 + 0x2c));
      pcStack_40 = FUN_1443911b0;
      puStack_38 = &UNK_1403a85f0;
      puStack_30 = &SUB_140004380;
      ppuStack_48 = &puStack_d8;
      FUN_1443900d0(uVar3,auStack_68,&ppuStack_48,uVar5);
      FUN_144e46a00(auStack_a8,auStack_68);
    }
    FUN_1401bae50(param_1[2],*(undefined8 *)(*param_1 + 0x230),&uStack_b8);
  }
  else {
    lVar1 = param_1[4];
    lVar2 = param_1[5];
    if (iStack_b4 == 0) {
      FUN_144390220(*(undefined8 *)(*param_1 + 0x20),&puStack_d8);
    }
    else {
      FUN_1401b67a0(*(undefined8 *)(*param_1 + 0x20),&puStack_d8);
    }
    ppuStack_48 = (undefined8 **)puStack_d8;
    pcStack_40 = (code *)uStack_d0;
    puStack_38 = (undefined *)uStack_c8;
    puStack_30 = (undefined *)uStack_c0;
    FUN_145079070(&uStack_b8,param_1,&ppuStack_48,lVar1,lVar2,0);
  }
  return;
}

