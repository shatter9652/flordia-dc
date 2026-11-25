// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140113d60  size: 205 bytes
// Name:    FUN_140113d60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140113d60(longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  ushort uVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  do {
    uVar1 = *(ushort *)(param_1 + 2);
    uVar5 = func_0x0001451c44a0(param_1[1],(uint)uVar1,param_4);
    if ((-1 < (int)uVar5) && (uVar5 < uVar1)) {
      uVar9 = (ulonglong)uVar5;
      do {
        if (*(int *)(param_1[1] + uVar9 * 4) != param_4) break;
        lVar2 = *(longlong *)(param_1[3] + uVar9 * 8);
        if ((lVar2 != 0) &&
           (uVar6 = (ulonglong)*(ushort *)(lVar2 + 0x20), *(ushort *)(lVar2 + 0x20) != 0)) {
          lVar8 = 8;
          uVar7 = 0;
          do {
            plVar3 = *(longlong **)(*(longlong *)(lVar2 + 0x18) + lVar8);
            if (plVar3 != (longlong *)0x0) {
              cVar4 = (**(code **)(*plVar3 + 0x48))(plVar3,param_2,param_3);
              if (cVar4 != '\0') {
                return 1;
              }
              uVar6 = (ulonglong)*(ushort *)(lVar2 + 0x20);
            }
            uVar7 = uVar7 + 1;
            lVar8 = lVar8 + 0x18;
          } while (uVar7 < uVar6);
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)(uint)uVar1);
    }
    param_1 = (longlong *)*param_1;
    if (param_1 == (longlong *)0x0) {
      return 0;
    }
  } while( true );
}

