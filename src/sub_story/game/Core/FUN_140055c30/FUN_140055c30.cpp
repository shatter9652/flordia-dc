// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140055c30  size: 320 bytes
// Name:    FUN_140055c30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1452b3070, FUN_1404a75b0, FUN_140055d70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140055c30(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined4 uStack_28c;
  undefined4 uStack_134;
  undefined4 uStack_d0;
  undefined1 auStack_5e [38];
  
  lVar5 = (**(code **)(*param_1 + 0xe0))();
  if (lVar5 != 0) {
    if (*(char *)((longlong)param_1 + 0x3d6) == '\0') {
      FUN_1452b3070(&uStack_3d8);
      uStack_134 = 0;
      uStack_d0 = 2;
      uStack_28c = (undefined4)param_1[0x74];
      (**(code **)(*param_1 + 0x40))(param_1,&uStack_3e8);
      uStack_3d8 = uStack_3e8;
      uStack_3d0 = uStack_3e0;
      FUN_140055d70(param_1,&uStack_3d8);
      lVar2 = _DAT_14ab5cdf8;
      lVar1 = *(longlong *)(_DAT_14ab5cdf8 + 0xc70);
      iVar3 = func_0x0001451fcdb0(lVar1);
      if ((iVar3 != 0) && (lVar1 != 0)) {
        iVar7 = 0;
        iVar3 = iVar3 + -1;
        do {
          uVar6 = (uint)(iVar7 + iVar3) >> 1;
          uVar4 = func_0x0001451fcd90(lVar1,uVar6);
          if (uVar4 < 0x73c5aa9) {
            iVar7 = uVar6 + 1;
          }
          else {
            if (uVar4 == 0x73c5aa9) {
              func_0x000145213f90(&uStack_3f0,lVar1,*(undefined4 *)(lVar2 + 0xc7c),uVar6);
              goto LAB_140055d35;
            }
            iVar3 = uVar6 - 1;
          }
        } while (iVar7 <= iVar3);
      }
      uStack_3f0 = 0xffffffffffffffff;
LAB_140055d35:
      FUN_1404a75b0(lVar5,uStack_3f0,0,&uStack_3d8);
      func_0x000144de1380(auStack_5e);
    }
    *(undefined1 *)((longlong)param_1 + 0x3d6) = 0;
  }
  return;
}

