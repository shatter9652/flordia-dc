// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14018a830  size: 152 bytes
// Name:    FUN_14018a830
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145647140, FUN_144e52aa0, FUN_144e529a0, FUN_14018a8d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14018a830(void)

{
  undefined4 uVar1;
  code *pcVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined1 uStackX_27;
  undefined8 uStack_10;
  
  uStack_10 = 0x14018a83b;
  lVar5 = FUN_145647140();
  lVar5 = -lVar5;
  uVar1 = *(undefined4 *)(_DAT_149f13f20 + 0x1128);
  *(undefined8 *)((longlong)&uStack_10 + lVar5) = 0x14018a860;
  FUN_144e52aa0(&stack0x00000028 + lVar5,uVar1,&stack0x00000058 + lVar5,0x8000);
  *(undefined8 *)((longlong)&uStack_10 + lVar5) = 0x14018a86c;
  func_0x000144e52970(&uStackX_27 + lVar5,0);
  plVar3 = _DAT_1492549e0;
  if ((_DAT_1492549e0 != (longlong *)0x0) && (DAT_14abbe2e0 == '\0')) {
    *(undefined8 *)((longlong)&uStack_10 + lVar5) = 0x14018a886;
    cVar4 = func_0x000144f7b6a0();
    if ((cVar4 == '\0') && (DAT_14abbe2e1 == '\0')) {
      *(undefined8 *)((longlong)&uStack_10 + lVar5) = 0x14018a898;
      cVar4 = func_0x000144f862d0();
      if (cVar4 == '\0') {
        pcVar2 = *(code **)(*plVar3 + 0x30);
        *(undefined8 *)((longlong)&uStack_10 + lVar5) = 0x14018a8a5;
        (*pcVar2)(plVar3);
      }
    }
  }
  *(undefined8 *)((longlong)&uStack_10 + lVar5) = 0x14018a8aa;
  FUN_14018a8d0();
  *(undefined8 *)((longlong)&uStack_10 + lVar5) = 0x14018a8b3;
  func_0x000144e52950((&uStackX_27)[lVar5]);
  *(undefined8 *)((longlong)&uStack_10 + lVar5) = 0x14018a8bd;
  FUN_144e529a0(&stack0x00000028 + lVar5);
  return 1;
}

