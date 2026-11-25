// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140080d50  size: 156 bytes
// Name:    FUN_140080d50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140113a60, FUN_145226d60, FUN_144ef3e20, FUN_144fbfe40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_140080d50(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 unaff_RSI;
  ulonglong uVar6;
  
  lVar3 = FUN_144ef3e20(param_2);
  uVar4 = 0;
  if (lVar3 != 0) {
    uVar1 = *(undefined4 *)(lVar3 + 0x9c);
    uVar4 = func_0x000144e238f0(uVar1);
    if (((((char)uVar4 != '\0') || (uVar4 = FUN_145226d60(uVar1), (char)uVar4 != '\0')) &&
        (uVar6 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0, uVar6 != 0)) &&
       (*(int *)(param_1 + 0x50) < 4)) {
      lVar5 = func_0x000144fdf400(*(undefined4 *)(uVar6 + 0x9c));
      uVar4 = 0;
      if (((lVar5 != 0) && (uVar4 = FUN_144fbfe40(lVar5,lVar3,0,1,0), (char)uVar4 == '\0')) &&
         (uVar4 = FUN_140113a60(uVar6,lVar3), (char)uVar4 == '\0')) {
        cVar2 = FUN_145125490(uVar6,lVar3,0);
        uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
        if ((cVar2 == '\0') &&
           (((*(char *)(lVar3 + 0x30) != '\x03' ||
             (lVar3 = FUN_144dd7510(*(undefined4 *)(lVar3 + 0x9c)), lVar3 == 0)) ||
            (cVar2 = FUN_145125490(uVar6,lVar3,0), cVar2 == '\0')))) {
          uVar4 = 0;
        }
        return uVar4 & 0xffffffff;
      }
    }
  }
  return uVar4;
}

