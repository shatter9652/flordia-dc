// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014fc20  size: 246 bytes
// Name:    FUN_14014fc20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14052a7e0, FUN_14014fd20, FUN_14052a790, FUN_140004b40, FUN_1401503f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14014fc20(longlong param_1,longlong param_2,undefined4 param_3)

{
  undefined8 uVar1;
  char cVar2;
  longlong unaff_GS_OFFSET;
  undefined1 uStack_26;
  undefined1 uStack_25;
  undefined2 uStack_24;
  undefined1 uStack_22;
  
  cVar2 = func_0x00014501c1a0(param_1,param_3,*(uint *)(param_2 + 0x9c) >> 0x11 & 0x1f);
  if (cVar2 != '\0') {
    FUN_140004b40(0x1499aacb0);
    uVar1 = *(undefined8 *)(param_1 + 0xf78);
    FUN_14052a790(uVar1,1,0);
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    if (*(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1448) == 0) {
      uStack_26 = 0;
    }
    uStack_25 = 0;
    uStack_24 = 0xffff;
    uStack_22 = 0xff;
    FUN_14014fd20(param_1,uVar1,param_2,param_3,&uStack_26);
    FUN_1401503f0(uVar1);
    FUN_14052a7e0(uVar1);
    func_0x0001452f16e0(*(undefined4 *)(*(longlong *)(param_1 + 0xf80) + 4),
                        *(undefined8 *)(*(longlong *)(param_1 + 0xf80) + 8));
    func_0x000144d9dab0(0x1499aacb0);
  }
  return;
}

