// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140083b20  size: 300 bytes
// Name:    FUN_140083b20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141737720
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_140083b20(uint param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else if (param_3 == 0) {
    lVar5 = (ulonglong)param_1 * 0x180;
    lVar3 = 0;
    do {
      if ((((*(ushort *)(param_2 + 0xe1) & 0x420) == 0) &&
          (cVar2 = FUN_141737720(*(undefined4 *)(param_2 + 0xc4),*(undefined4 *)(param_2 + 0x100)),
          cVar2 == '\0')) &&
         ((lVar3 == 0 || (cVar2 = func_0x0001430196a0(param_2,lVar3), cVar2 != '\0')))) {
        lVar3 = param_2;
      }
      param_2 = param_2 + 0x180;
      lVar5 = lVar5 + -0x180;
    } while (lVar5 != 0);
  }
  else {
    lVar5 = (ulonglong)param_1 * 0x180;
    lVar3 = 0;
    do {
      if ((*(ushort *)(param_2 + 0xe1) & 0x420) == 0) {
        uVar1 = *(undefined4 *)(param_2 + 0x100);
        cVar2 = FUN_141737720(*(undefined4 *)(param_2 + 0xc4),uVar1);
        if (((cVar2 == '\0') && (lVar4 = func_0x000144f3a220(uVar1), lVar4 == param_3)) &&
           ((lVar3 == 0 || (cVar2 = func_0x0001430196a0(param_2,lVar3), cVar2 != '\0')))) {
          lVar3 = param_2;
        }
      }
      param_2 = param_2 + 0x180;
      lVar5 = lVar5 + -0x180;
    } while (lVar5 != 0);
  }
  return lVar3;
}

