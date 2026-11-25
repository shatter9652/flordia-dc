// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c7110  size: 123 bytes
// Name:    FUN_1400c7110
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400c7190, FUN_140b7cb20, FUN_1450ab0d0, FUN_144f61ce0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1400c7110(longlong param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  
  if (param_2 == '\0') {
LAB_1400c711d:
    cVar1 = func_0x000144f862d0();
    if (cVar1 == '\0') {
      cVar1 = func_0x0001400c71b0();
      if (cVar1 != '\0') {
        cVar1 = FUN_1400c7190();
        if (cVar1 == '\0') {
          uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
          if (*(char *)(param_1 + 0x1ac) != '\0') goto LAB_1400c7144;
          if (_DAT_14ab56e38 != 0) {
            lVar2 = FUN_1450ab0d0(*(undefined4 *)(_DAT_14ab56e38 + 0x9c));
            if (lVar2 != 0) {
              cVar1 = FUN_140b7cb20(lVar2);
              if (cVar1 == '\0') {
                *(undefined1 *)(param_1 + 0x1ac) = 1;
                goto LAB_1400c7144;
              }
            }
          }
        }
      }
    }
  }
  else {
    cVar1 = FUN_144f61ce0();
    if (cVar1 != '\0') goto LAB_1400c711d;
  }
  uVar3 = 0;
LAB_1400c7144:
  return uVar3 & 0xffffffff;
}

