// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014f9b0  size: 359 bytes
// Name:    FUN_14014f9b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1404cfaa0, FUN_141f700c0, FUN_145647140, FUN_1452d0140
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x00014014fa6d: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00014014fa72) */
/* WARNING: Removing unreachable block (ram,0x00014014fa7e) */
/* WARNING: Removing unreachable block (ram,0x00014014fa95) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14014f9b0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  longlong unaff_GS_OFFSET;
  undefined4 auStackX_8 [8];
  undefined8 uStack_28;
  
  uStack_28 = 0x14014f9bf;
  lVar3 = FUN_145647140();
  lVar3 = -lVar3;
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    *(undefined8 *)((longlong)&uStack_28 + lVar3) = 0x14014f9ec;
    func_0x0001455db994();
  }
  if ((*(byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12d8) & 1) == 0) {
    puVar4 = &stack0x00000030 + lVar3;
    *(undefined8 *)((longlong)&uStack_28 + lVar3) = 0x14014fa12;
    FUN_141f700c0(puVar4);
    *(undefined4 *)(&stack0x00000028 + lVar3) = 5;
    *(undefined4 *)((longlong)auStackX_8 + lVar3 + 0x18) = 2;
    *(undefined4 *)((longlong)auStackX_8 + lVar3 + 0x10) = 8;
    *(undefined8 *)((longlong)auStackX_8 + lVar3 + -8) = 0x14aad4060;
    *(undefined4 *)((longlong)auStackX_8 + lVar3 + 8) = 1;
    *(undefined4 *)((longlong)auStackX_8 + lVar3) = 1;
    *(undefined8 *)((longlong)&uStack_28 + lVar3) = 0x14014fa57;
    FUN_1404cfaa0(puVar4,param_1,param_2,0xc);
    *(undefined8 *)((longlong)&uStack_28 + lVar3) = 0x14014fa67;
    FUN_1452d0140(*(undefined4 *)(&stack0x0000009c + lVar3),
                  *(undefined8 *)(&stack0x00000270 + lVar3));
    *(undefined8 *)((longlong)&uStack_28 + lVar3) = 0x14014fa72;
  }
  else {
    *(undefined4 *)(&stack0x00000028 + lVar3) = 5;
    *(undefined4 *)((longlong)auStackX_8 + lVar3 + 0x18) = 2;
    *(undefined4 *)((longlong)auStackX_8 + lVar3 + 0x10) = 8;
    *(undefined8 *)((longlong)auStackX_8 + lVar3 + -8) = 0x14aad4060;
    *(undefined4 *)((longlong)auStackX_8 + lVar3 + 8) = 1;
    *(undefined4 *)((longlong)auStackX_8 + lVar3) = 1;
    *(undefined8 *)((longlong)&uStack_28 + lVar3) = 0x14014faee;
    FUN_1404cfaa0(0x14758f9c0,param_1,param_2,0xc);
    *(undefined8 *)((longlong)&uStack_28 + lVar3) = 0x14014fb00;
    FUN_1452d0140(_DAT_14758fa2c,_DAT_14758fc00);
    puVar4 = (undefined1 *)0x14758f9c0;
  }
  uVar2 = *(ulonglong *)(puVar4 + 0xc0);
  if ((uVar2 != 0) && (uVar1 = *(uint *)(puVar4 + 0x58), (ulonglong)uVar1 != 0)) {
    uVar5 = 0;
    do {
      if ((uVar2 >> (uVar5 & 0x3f) & 1) != 0) {
        **(undefined8 **)(param_3 + uVar5 * 8) = 0;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar1);
  }
  return;
}

