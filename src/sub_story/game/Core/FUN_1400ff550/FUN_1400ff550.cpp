// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ff550  size: 119 bytes
// Name:    FUN_1400ff550
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_1400ff550(ulonglong *param_1,ushort param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (param_2 == 0) {
LAB_1400ff5c1:
    uVar2 = 0;
  }
  else {
    do {
      puVar1 = param_1;
      uVar2 = (ulonglong)param_2;
      if (param_3 == 0) goto LAB_1400ff5c1;
      do {
        uVar3 = uVar2 >> 1;
        if ((puVar1 + uVar3 * 2 + 2)[-2] < param_3) {
          puVar1 = puVar1 + uVar3 * 2 + 2;
          uVar3 = ~uVar3 + uVar2;
        }
        uVar2 = uVar3;
      } while (0 < (longlong)uVar3);
      if ((puVar1 == param_1 + (ulonglong)param_2 * 2) || (*puVar1 != param_3)) goto LAB_1400ff5c1;
      uVar2 = puVar1[1];
      if ((param_4 & 1) == 0) {
        return uVar2;
      }
      param_3 = *(ulonglong *)(uVar2 + 0x30);
      param_4 = 0;
    } while (param_3 != 0);
  }
  return uVar2;
}

