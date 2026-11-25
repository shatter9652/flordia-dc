// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401ad7b0  size: 362 bytes
// Name:    FUN_1401ad7b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401ae630, FUN_145073d60, FUN_1401aec80, FUN_1400fcdf0, FUN_1401addb0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401ad7b0(longlong param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  
  if (((*(byte *)(param_3 + 0x149) & 0x10) != 0) && (*(int *)(param_3 + 0x160) == 1)) {
    iVar2 = FUN_1401addb0(param_3,*(undefined8 *)(param_2 + 0x10));
    *(int *)(param_3 + 0x160) = iVar2;
    uVar3 = *(uint *)(param_3 + 0xfc);
    if (uVar3 != 0) {
      if (iVar2 == 1) {
        uVar8 = 0;
        do {
          uVar5 = (ulonglong)
                  ((*(uint *)(*(longlong *)(param_3 + 0x100) + uVar8 * 4) & 0x1ffff) *
                  (int)_DAT_14a9b3f48[1]);
          if ((*(byte *)(*_DAT_14a9b3f48 + 0x88 + uVar5) & 8) == 0) {
            lVar6 = *_DAT_14a9b3f48 + uVar5;
            iVar2 = FUN_1401aec80(lVar6,param_2);
            if (iVar2 != 1) {
              func_0x0001401ae770(lVar6,iVar2);
            }
            cVar1 = FUN_1400fcdf0(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(lVar6 + 0x24));
            if (cVar1 == '\0') {
              FUN_1401ae630(lVar6,0x11);
            }
            else {
              FUN_145073d60(lVar6,param_2);
            }
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(uint *)(param_3 + 0xfc));
      }
      else {
        uVar8 = 0;
        plVar7 = _DAT_14a9b3f48;
        do {
          uVar5 = (ulonglong)
                  ((*(uint *)(*(longlong *)(param_3 + 0x100) + uVar8 * 4) & 0x1ffff) *
                  (int)plVar7[1]);
          if ((*(byte *)(*plVar7 + 0x88 + uVar5) & 8) == 0) {
            lVar6 = *plVar7 + uVar5;
            iVar4 = FUN_1401aec80(lVar6,param_2);
            if (iVar4 != 1) {
              func_0x0001401ae770(lVar6,iVar4);
            }
            FUN_1401ae630(lVar6,iVar2);
            uVar3 = *(uint *)(param_3 + 0xfc);
            plVar7 = _DAT_14a9b3f48;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar3);
      }
    }
  }
  return;
}

