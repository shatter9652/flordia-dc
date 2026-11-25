// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140114060  size: 104 bytes
// Name:    FUN_140114060
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140114060
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140114060(undefined4 param_1,int param_2)

{
  ushort uVar1;
  ulonglong uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar4 = func_0x000140c5f790(param_2);
  if ((lVar4 != 0) && (uVar1 = *(ushort *)(lVar4 + 0x48), uVar1 != 0)) {
    lVar4 = *(longlong *)(lVar4 + 0x40);
    lVar6 = 0;
    do {
      cVar3 = FUN_140114060(param_1,*(undefined4 *)(lVar4 + lVar6));
      if (cVar3 != '\0') {
        return 1;
      }
      lVar6 = lVar6 + 4;
    } while ((ulonglong)uVar1 * 4 != lVar6);
  }
  lVar6 = func_0x0001454b9f30(param_1);
  lVar4 = lRam000000014a9e8af0;
  if (lVar6 != 0) {
    if (param_2 == 0) {
      if (uRam000000014a9e8af8 != 0) {
        uVar2 = (ulonglong)uRam000000014a9e8af8;
        lVar5 = 0;
        do {
          if ((*(int *)(*(longlong *)(lVar4 + lVar5) + 0x60) != 0) &&
             (cVar3 = func_0x0001401e8110(*(undefined4 *)(lVar6 + 0x20),
                                          *(undefined8 *)(lVar6 + 0x30)), cVar3 != '\0')) {
            return 1;
          }
          lVar5 = lVar5 + 8;
        } while (uVar2 << 3 != lVar5);
      }
    }
    else {
      lVar4 = func_0x000140c5f790(param_2);
      if (((lVar4 != 0) && (*(int *)(lVar4 + 0x60) != 0)) &&
         (cVar3 = func_0x0001401e8110(*(undefined4 *)(lVar6 + 0x20),*(undefined8 *)(lVar6 + 0x30)),
         cVar3 != '\0')) {
        return 1;
      }
    }
  }
  return 0;
}

