// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14016a320  size: 480 bytes
// Name:    FUN_14016a320
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145ecb240, FUN_145cc04e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_14016a320(longlong param_1,uint param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x1d4) = 0;
    if (*(longlong *)(param_1 + 0x1d8) != 0) {
      func_0x000144d9c130();
    }
    *(undefined8 *)(param_1 + 0x1d8) = 0;
    *(undefined4 *)(param_1 + 0x1d0) = 0;
    bVar7 = false;
  }
  else {
    puVar1 = (uint *)(param_1 + 0x1d0);
    if (*(uint *)(param_1 + 0x1d4) == 0) {
      uVar5 = *puVar1;
      if (uVar5 < param_2) {
        uVar2 = func_0x000144d9c140(0x10,(ulonglong)param_2 << 6);
        if ((ulonglong)*(uint *)(param_1 + 0x1d4) != 0) {
          func_0x000145f40560(uVar2,*(undefined8 *)(param_1 + 0x1d8),
                              (ulonglong)*(uint *)(param_1 + 0x1d4) << 6);
        }
        if (*(longlong *)(param_1 + 0x1d8) != 0) {
          func_0x000144d9c130();
        }
        *(undefined8 *)(param_1 + 0x1d8) = uVar2;
        *(uint *)(param_1 + 0x1d0) = param_2;
        uVar3 = (ulonglong)*(uint *)(param_1 + 0x1d4);
        uVar5 = param_2;
      }
      else {
        uVar3 = 0;
      }
      if ((uint)uVar3 < param_2) {
        if (uVar5 < param_2) {
          FUN_145cc04e0(puVar1,param_2);
          uVar3 = (ulonglong)*(uint *)(param_1 + 0x1d4);
        }
        if ((uint)uVar3 != param_2) {
          lVar6 = (ulonglong)param_2 * 0x40 + uVar3 * -0x40;
          lVar4 = *(longlong *)(param_1 + 0x1d8) + uVar3 * 0x40;
          do {
            if (lVar4 != 0) {
              *(undefined8 *)(lVar4 + 0x30) = 0xffffffff00000000;
              *(undefined4 *)(lVar4 + 0x38) = 0;
            }
            lVar4 = lVar4 + 0x40;
            lVar6 = lVar6 + -0x40;
          } while (lVar6 != 0);
        }
      }
      *(uint *)(param_1 + 0x1d4) = param_2;
      bVar7 = true;
    }
    else {
      bVar7 = true;
      if (*(uint *)(param_1 + 0x1d4) != param_2) {
        *(undefined4 *)(param_1 + 0x1d4) = 0;
        if (*(longlong *)(param_1 + 0x1d8) != 0) {
          func_0x000144d9c130();
        }
        *(undefined8 *)(param_1 + 0x1d8) = 0;
        *(undefined4 *)(param_1 + 0x1d0) = 0;
        FUN_145ecb240(puVar1,param_2);
        bVar7 = *(int *)(param_1 + 0x1d4) != 0;
      }
    }
  }
  return bVar7;
}

