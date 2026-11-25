// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011fc20  size: 319 bytes
// Name:    FUN_14011fc20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401218b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14011fc20(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong unaff_GS_OFFSET;
  bool bVar11;
  undefined1 auStack_d8 [128];
  undefined4 uStack_58;
  undefined6 uStack_50;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  
  if (*(int *)(param_1 + 0x5c) != *(int *)(param_1 + 0x60)) {
    lVar6 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    do {
      uStack_58 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_4a = 0;
      while (*(int *)(param_1 + 0x5c) != *(int *)(param_1 + 0x60)) {
        iVar3 = *(int *)(param_1 + 0x58);
        uVar1 = iVar3 - 1;
        do {
          uVar4 = *(uint *)(param_1 + 0x5c);
          uVar2 = uVar4 + 1;
          uVar5 = *(uint *)(*(longlong *)(param_1 + 0x68) + (ulonglong)(uVar4 & uVar1) * 4);
          if (uVar5 == uVar2) {
            LOCK();
            uVar9 = *(uint *)(param_1 + 0x5c);
            bVar11 = uVar4 == uVar9;
            if (bVar11) {
              *(uint *)(param_1 + 0x5c) = uVar2;
              uVar9 = uVar4;
            }
            UNLOCK();
            if (bVar11) {
              uVar10 = (ulonglong)(uVar9 & uVar1);
              func_0x000145f40560(auStack_d8,uVar10 * 0x98 + *(longlong *)(param_1 + 0x70),0x98);
              LOCK();
              *(uint *)(*(longlong *)(param_1 + 0x68) + uVar10 * 4) = uVar4 + iVar3;
              UNLOCK();
              goto LAB_14011fcdc;
            }
          }
        } while (uVar2 <= uVar5);
      }
LAB_14011fcdc:
      uVar8 = uStack_58;
      if ((undefined8 *)CONCAT26(uStack_4a,uStack_50) != (undefined8 *)0x0) {
        uVar7 = *(undefined8 *)CONCAT26(uStack_4a,uStack_50);
        if (*(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
            '\0') {
          func_0x0001455db994(*(longlong *)(unaff_GS_OFFSET + 0x58),uVar7);
        }
        FUN_1401218b0(*(undefined8 *)(lVar6 + 0x12a8),uVar7,auStack_d8,uVar8);
      }
    } while (*(int *)(param_1 + 0x5c) != *(int *)(param_1 + 0x60));
  }
  return;
}

