// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400535c0  size: 408 bytes
// Name:    FUN_1400535c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145304c60, FUN_14082a380
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400535c0(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  uint uVar6;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uStack_48;
  undefined4 uStack_40;
  ulonglong uVar7;
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x20);
    do {
      uVar6 = *(uint *)(lVar8 + 0xc);
      if ((ulonglong)uVar6 != 0) {
        lVar3 = *(longlong *)(lVar8 + 0x10);
        lVar10 = 0;
        do {
          puVar4 = *(undefined8 **)(lVar3 + lVar10);
          if ((puVar4 != (undefined8 *)0x0) &&
             (cVar5 = (**(code **)*puVar4)(puVar4,0x24e7293a), cVar5 != '\0')) {
            func_0x000145304c50(puVar4,*(undefined8 *)(param_1 + 0x40));
            FUN_145304c60(puVar4,*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x18));
            goto LAB_140053635;
          }
          lVar10 = lVar10 + 8;
        } while ((ulonglong)uVar6 << 3 != lVar10);
      }
      lVar8 = *(longlong *)(lVar8 + 0x28);
    } while (lVar8 != 0);
  }
LAB_140053635:
  if (*(longlong *)(param_1 + 8) == 0) {
    uStack_40 = 0;
  }
  else {
    uStack_40 = *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x1c0);
  }
  uStack_48 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(param_1 + 0x24) != 0) {
    lVar8 = *(longlong *)(param_1 + 0x28);
    lVar3 = *(longlong *)(param_1 + 0x30);
    do {
      uVar7 = *(longlong *)(lVar3 + 8) + 0xf + (ulonglong)*(uint *)(lVar8 + 0x10) * 0x68;
      (**(code **)(uVar7 + 0x41))(uVar7 & 0xfffffffffffffff0,lVar8,&uStack_48);
      if (*(int *)(lVar8 + 4) == 0) {
        uVar6 = *(uint *)(param_1 + 0x24);
        lVar9 = *(longlong *)(param_1 + 0x28);
        lVar10 = lVar8 + 0x18;
        lVar1 = lVar9 + (ulonglong)uVar6 * 0x18;
        if (lVar10 != lVar1) {
          do {
            FUN_14082a380(lVar10 + -0x18,lVar10);
            *(undefined4 *)(lVar10 + -8) = *(undefined4 *)(lVar10 + 0x10);
            lVar10 = lVar10 + 0x18;
          } while (lVar10 != lVar1);
          lVar9 = *(longlong *)(param_1 + 0x28);
          uVar6 = *(uint *)(param_1 + 0x24);
        }
        uVar7 = (ulonglong)(uVar6 - 1);
        *(uint *)(param_1 + 0x24) = uVar6 - 1;
        *(undefined4 *)(lVar9 + 4 + uVar7 * 0x18) = 0;
        if (*(longlong *)(lVar9 + 8 + uVar7 * 0x18) != 0) {
          func_0x000144d9c130();
        }
        puVar2 = (undefined4 *)(lVar9 + uVar7 * 0x18);
        *puVar2 = 0;
        *(undefined8 *)(puVar2 + 2) = 0;
      }
      else {
        lVar8 = lVar8 + 0x18;
      }
    } while (lVar8 != (ulonglong)*(uint *)(param_1 + 0x24) * 0x18 + *(longlong *)(param_1 + 0x28));
  }
  return;
}

