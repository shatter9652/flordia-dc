// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140090430  size: 422 bytes
// Name:    FUN_140090430
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14336fe00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140090430(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  lVar11 = *(longlong *)(param_1 + 0x28);
  uVar6 = 0;
  uVar5 = *(uint *)(param_1 + 0x20) << 4;
  uVar7 = uVar6;
  if (uVar5 != 0) {
    do {
      uVar7 = uVar6;
      if (!SBORROW1('\0',*(char *)((ulonglong)(uVar6 & 0xf) +
                                  (ulonglong)(uVar6 >> 4) * 0x390 + lVar11))) break;
      uVar6 = uVar6 + 1;
      uVar7 = uVar5;
    } while (uVar5 != uVar6);
  }
  lVar4 = (ulonglong)(uVar7 >> 4) * 0x390;
  uVar8 = (ulonglong)((uVar7 & 0xf) * 0x38);
  if (lVar4 + uVar8 != (ulonglong)(*(uint *)(param_1 + 0x20) & 0xfffffff) * 0x390) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    lVar4 = lVar4 + 0x10 + uVar8 + lVar11;
    do {
      plVar2 = *(longlong **)(lVar4 + 0x30);
      (**(code **)(*plVar2 + 8))(plVar2,lVar4,uVar1,0);
      uVar6 = uVar7;
      if ((char)plVar2[1] == '\x05') {
        (**(code **)*plVar2)(plVar2,1);
        while ((uVar7 != uVar5 &&
               (uVar6 = uVar7,
               SBORROW1('\0',*(char *)((ulonglong)(uVar7 & 0xf) +
                                      (ulonglong)(uVar7 >> 4) * 0x390 + lVar11))))) {
          uVar7 = uVar7 + 1;
          uVar6 = uVar5;
        }
        FUN_14336fe00(param_1 + 0x20,uVar6);
        lVar11 = *(longlong *)(param_1 + 0x28);
        uVar5 = *(int *)(param_1 + 0x20) << 4;
        uVar7 = uVar6;
        while ((uVar3 = uVar7, uVar6 != uVar5 &&
               (uVar3 = uVar5, uVar7 = uVar6,
               SBORROW1('\0',*(char *)((ulonglong)(uVar6 & 0xf) +
                                      (ulonglong)(uVar6 >> 4) * 0x390 + lVar11))))) {
          uVar6 = uVar6 + 1;
          uVar7 = uVar5;
        }
      }
      else {
        while (uVar3 = uVar7, uVar6 != uVar5) {
          while (uVar6 = uVar6 + 1, uVar7 = uVar5, uVar6 < uVar5) {
            uVar3 = uVar5;
            uVar7 = uVar6;
            if (!SBORROW1('\0',*(char *)((ulonglong)(uVar6 & 0xf) +
                                        (ulonglong)(uVar6 >> 4) * 0x390 + lVar11)))
            goto LAB_140090560;
          }
        }
      }
LAB_140090560:
      uVar5 = uVar3;
      lVar9 = (ulonglong)(uVar7 & 0xf) * 0x38;
      lVar10 = (ulonglong)(uVar7 >> 4) * 0x390 + lVar11;
      lVar4 = lVar9 + 0x10 + lVar10;
    } while (lVar10 + lVar9 !=
             (ulonglong)(*(uint *)(param_1 + 0x20) & 0xfffffff) * 0x390 +
             *(longlong *)(param_1 + 0x28));
  }
  return;
}

