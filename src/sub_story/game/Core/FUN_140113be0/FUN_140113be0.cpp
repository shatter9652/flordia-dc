// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140113be0  size: 76 bytes
// Name:    FUN_140113be0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140113be0(longlong param_1,undefined8 param_2)

{
  ushort uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  plVar7 = (longlong *)
           func_0x0001450af530(*(undefined8 *)(param_1 + 0x6920),*(undefined8 *)(param_1 + 0x6930));
  if (plVar7 == (longlong *)0x0) {
    return 0;
  }
  uVar2 = *(ulonglong *)(param_1 + 8);
  do {
    uVar1 = *(ushort *)(plVar7 + 2);
    uVar6 = func_0x0001451c44a0(plVar7[1],(uint)uVar1,2);
    if ((-1 < (int)uVar6) && (uVar6 < uVar1)) {
      uVar11 = (ulonglong)uVar6;
      do {
        if (*(int *)(plVar7[1] + uVar11 * 4) != 2) break;
        lVar3 = *(longlong *)(plVar7[3] + uVar11 * 8);
        if ((lVar3 != 0) &&
           (uVar8 = (ulonglong)*(ushort *)(lVar3 + 0x20), *(ushort *)(lVar3 + 0x20) != 0)) {
          lVar10 = 8;
          uVar9 = 0;
          do {
            plVar4 = *(longlong **)(*(longlong *)(lVar3 + 0x18) + lVar10);
            if (plVar4 != (longlong *)0x0) {
              cVar5 = (**(code **)(*plVar4 + 0x48))(plVar4,uVar2 & 0xfffffffffffffff0,param_2);
              if (cVar5 != '\0') {
                return 1;
              }
              uVar8 = (ulonglong)*(ushort *)(lVar3 + 0x20);
            }
            uVar9 = uVar9 + 1;
            lVar10 = lVar10 + 0x18;
          } while (uVar9 < uVar8);
        }
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < (int)(uint)uVar1);
    }
    plVar7 = (longlong *)*plVar7;
    if (plVar7 == (longlong *)0x0) {
      return 0;
    }
  } while( true );
}

