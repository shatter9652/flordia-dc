// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14005b720  size: 402 bytes
// Name:    FUN_14005b720
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145068250, FUN_14082fd70, FUN_144decbc0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14005b720(uint *param_1,undefined8 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  char cVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  bool bVar12;
  
  lVar7 = _DAT_14abbf348;
  cVar8 = FUN_144decbc0(*(undefined8 *)(*(longlong *)(_DAT_14abbf348 + 0x141a8) + 0x68),param_3,
                        param_4);
  if (cVar8 != '\0') {
    plVar5 = *(longlong **)(*(longlong *)(lVar7 + 0x28) + (ulonglong)((param_3 & 0xffff) << 4));
    plVar6 = *(longlong **)(*(longlong *)(lVar7 + 0x28) + (ulonglong)((param_4 & 0xffff) << 4));
    iVar2 = (int)plVar5[2];
    iVar3 = (int)plVar6[2];
    cVar8 = func_0x0001455cd540(*(undefined8 *)(lVar7 + 0x14188),*(undefined2 *)(lVar7 + 0x1419e),
                                iVar2,iVar3);
    if ((((cVar8 == '\0') &&
         (((plVar5 != plVar6 ||
           (((plVar5[4] != 0 && ((*(byte *)(plVar5[4] + 0x26e) & 2) != 0)) &&
            (cVar8 = FUN_14082fd70(plVar5), cVar8 != '\0')))) &&
          (((*(byte *)((longlong)plVar5 + 0x19) & 0x10) == 0 &&
           ((*(byte *)((longlong)plVar6 + 0x19) & 0x10) == 0)))))) &&
        ((plVar5 == plVar6 ||
         ((cVar8 = (**(code **)(*plVar5 + 0x208))(plVar5,plVar6), cVar8 != '\0' &&
          (cVar8 = (**(code **)(*plVar6 + 0x208))(plVar6,plVar5), cVar8 != '\0')))))) &&
       (uVar11 = *param_1, param_1[2] - param_1[1] < uVar11)) {
      do {
        uVar9 = param_1[2];
        do {
          while (uVar4 = *(uint *)(*(longlong *)(param_1 + 4) + (ulonglong)(uVar9 & uVar11 - 1) * 4)
                , bVar12 = uVar9 <= uVar4, uVar4 == uVar9) {
            uVar4 = uVar9 + 1;
            LOCK();
            uVar1 = param_1[2];
            bVar12 = uVar9 == uVar1;
            if (bVar12) {
              param_1[2] = uVar4;
              uVar1 = uVar9;
            }
            uVar9 = uVar1;
            UNLOCK();
            if (bVar12) {
              uVar10 = (ulonglong)(uVar9 & uVar11 - 1);
              *(uint *)(*(longlong *)(param_1 + 6) + uVar10 * 4) =
                   param_4 << 0x10 | param_3 & 0xffff;
              LOCK();
              *(uint *)(*(longlong *)(param_1 + 4) + uVar10 * 4) = uVar4;
              UNLOCK();
              FUN_145068250(param_2,iVar2);
              if (iVar2 != iVar3) {
                FUN_145068250(param_2,iVar3);
                return 1;
              }
              return 1;
            }
          }
          uVar9 = param_1[2];
        } while (bVar12);
        uVar11 = *param_1;
        if (uVar11 <= uVar9 - param_1[1]) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}

