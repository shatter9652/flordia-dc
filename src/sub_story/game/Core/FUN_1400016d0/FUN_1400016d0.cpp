// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400016d0  size: 341 bytes
// Name:    FUN_1400016d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141d28d60, FUN_14283fde0, FUN_141bdf310
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400016d0(longlong param_1)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 unaff_RDI;
  longlong unaff_GS_OFFSET;
  
  lVar4 = *(longlong *)(param_1 + 0x268);
  uVar6 = *(undefined4 *)(_DAT_14a9b3e18 + 0xe94);
  uVar5 = *(undefined8 *)(_DAT_14a9b3e18 + 0xe98);
  cVar1 = func_0x00014014c9a0(uVar6,uVar5,0xa8c3c7bf);
  if (cVar1 == '\0') {
    cVar1 = func_0x00014014c9a0(uVar6,uVar5,0x42690040);
    if (cVar1 == '\0') goto LAB_140001762;
  }
  uVar2 = func_0x000144dc06c0(*(undefined4 *)(param_1 + 0xecc));
  if (100 < uVar2) {
    FUN_141d28d60(0x14ab43450,0x4717a05e,0xb3f0aa0a,0,0,0xc2c80000);
    *(undefined4 *)(param_1 + 0xecc) = _DAT_14abbef40;
  }
LAB_140001762:
  FUN_14283fde0(param_1);
  uVar6 = *(undefined4 *)(_DAT_14a9b3e18 + 0xe94);
  uVar5 = *(undefined8 *)(_DAT_14a9b3e18 + 0xe98);
  cVar1 = func_0x00014014c9a0(uVar6,uVar5,0x81734af8);
  if (cVar1 != '\0') {
    lVar3 = func_0x0001451dc190(*(undefined8 *)(param_1 + 0xe90));
    if (lVar3 != 0) {
      FUN_141bdf310(lVar3);
      *(undefined4 *)(param_1 + 0xec8) = _DAT_14abbef40;
      uVar6 = *(undefined4 *)(_DAT_14a9b3e18 + 0xe94);
      uVar5 = *(undefined8 *)(_DAT_14a9b3e18 + 0xe98);
    }
  }
  cVar1 = func_0x00014014c9a0(uVar6,uVar5,0x4b09b606);
  if (cVar1 != '\0') {
    lVar3 = func_0x0001451dc190(*(undefined8 *)(param_1 + 0xea0));
    if (lVar3 != 0) {
      FUN_141bdf310(lVar3);
      *(undefined4 *)(param_1 + 0xec8) = _DAT_14abbef40;
    }
  }
  lVar4 = func_0x000144da6540(*(undefined4 *)(lVar4 + 0x9c));
  lVar4 = *(longlong *)(lVar4 + 0x1098);
  lVar3 = *(longlong *)(lVar4 + 8);
  FUN_1407c01b0(*(undefined8 *)(lVar4 + 0x118),lVar3);
  if (*(longlong *)(lVar4 + 0x130) != 0 && lVar3 != 0) {
    FUN_1437a2f90(&stack0xffffffffffffffec,lVar3,*(longlong *)(lVar4 + 0x130));
    lVar4 = FUN_1404502a0((int)((ulonglong)unaff_RDI >> 0x20));
    if ((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 8), lVar4 != 0)) {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      FUN_142e8bff0(&stack0xfffffffffffffff0,lVar4,&stack0xfffffffffffffff4,&stack0xffffffffffffffec
                    ,0);
    }
  }
  return;
}

