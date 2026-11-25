// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14004d130  size: 641 bytes
// Name:    FUN_14004d130
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14004d3c0, FUN_144e6d430, FUN_144ed0150, FUN_14296b9a0, FUN_1402648b0, FUN_144e6d4c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14004d130(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong unaff_GS_OFFSET;
  undefined1 auVar8 [16];
  undefined1 uStack_a25;
  undefined4 uStack_a24;
  undefined4 uStack_a20;
  undefined1 auStack_a1c [4];
  undefined2 uStack_a18;
  undefined1 uStack_a16;
  undefined1 auStack_a10 [32];
  undefined1 auStack_9f0 [32];
  undefined2 uStack_9d0;
  undefined1 auStack_9c8 [32];
  undefined4 uStack_9a8;
  undefined1 *puStack_9a0;
  undefined1 auStack_998 [32];
  undefined1 auStack_978 [32];
  undefined1 auStack_958 [32];
  undefined1 auStack_938 [32];
  undefined2 uStack_918;
  undefined1 auStack_910 [2264];
  
  lVar6 = param_1[0x2b];
  if (lVar6 == 0) {
    return;
  }
  if (*(int *)(lVar6 + 0x148) == 0) {
    return;
  }
  if (*(int *)(lVar6 + 0x14c) == 0) {
    return;
  }
  uVar5 = func_0x000144e6ea40(*(undefined4 *)(*param_1 + 0x9c));
  uVar5 = func_0x000144e6e9f0(uVar5);
  uVar4 = FUN_1402648b0(uVar5,0xcd8e018a);
  FUN_144e6d430(&uStack_a20,*(undefined4 *)(*param_1 + 0x9c));
  FUN_144e6d4c0(auStack_a1c,_DAT_149e40e48 + 8);
  auVar8._0_12_ = ZEXT812(0);
  auVar8._12_4_ = 0;
  uStack_a18 = 0;
  uStack_a16 = 1;
  auStack_a10 = ZEXT1632(auVar8);
  uStack_9d0 = 0;
  auStack_9c8 = ZEXT1632(auVar8);
  uStack_9a8 = 0;
  auStack_938 = ZEXT1632(auVar8);
  uStack_918 = 0;
  auStack_9f0 = auStack_a10;
  auStack_998 = auStack_9c8;
  auStack_978 = auStack_9c8;
  auStack_958 = auStack_9c8;
  func_0x000144e6d420(&uStack_a18,&uStack_a25);
  func_0x000144ed0120(&uStack_a18,0,*param_1);
  lVar6 = func_0x000144f03110(*(undefined4 *)(*param_1 + 0x9c));
  if (lVar6 == 0) goto LAB_14004d255;
  uVar2 = *(uint *)(lVar6 + 0x50);
  if (uVar2 == 0x1ffff) {
LAB_14004d371:
    lVar7 = 0;
  }
  else {
    uVar3 = *(uint *)(_DAT_14abb6918[5] + (ulonglong)(uVar2 & 0x1ffff) * 4);
    if (((~uVar3 & *(uint *)(_DAT_14abb6918 + 6)) != 0) ||
       ((uVar3 & 0x7fe0000) != (uVar2 & 0xfffe0000))) goto LAB_14004d371;
    lVar7 = (ulonglong)((uVar2 & 0x1ffff) * (int)_DAT_14abb6918[1]) + *_DAT_14abb6918;
  }
  func_0x000144ed0120(&uStack_a18,1,lVar7);
  uVar5 = FUN_14296b9a0(*(undefined8 *)(lVar6 + 8),*(undefined4 *)(lVar6 + 0x50),1,1);
  func_0x000144ed0120(&uStack_a18,2,uVar5);
LAB_14004d255:
  FUN_144ed0150(auStack_910);
  param_1[0x289] = (longlong)&uStack_a18;
  plVar1 = param_1 + 0x280;
  lVar6 = param_1[0x2b];
  puStack_9a0 = auStack_910;
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994(lVar6,plVar1);
    uStack_a24 = uStack_a20;
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994(lVar6,plVar1);
    }
  }
  else {
    uStack_a24 = uStack_a20;
  }
  FUN_14004d3c0(lVar6,plVar1,param_2,uVar4,auStack_a1c,&uStack_a24);
  return;
}

