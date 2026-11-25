// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401850f0  size: 213 bytes
// Name:    FUN_1401850f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401850f0(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  if (param_1 != (longlong *)0x0) {
    if (*(longlong *)(param_2 + 0x30) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = func_0x000140185400(*(longlong *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x40));
    }
    uVar2 = (ulonglong)(uVar1 & *(uint *)(param_1 + 1));
    if ((param_1[uVar2 * 3 + 2] != -2) &&
       (puVar3 = (ulonglong *)(param_1 + uVar2 * 3 + 2), puVar3[1] == uVar2)) {
      uVar6 = uVar2;
      uVar7 = 0xffffffffffffffff;
      uVar8 = uVar2;
      while( true ) {
        uVar5 = uVar6;
        if (uVar8 == uVar2) {
          uVar6 = *puVar3;
          if (puVar3[2] == param_2) {
            puVar4 = puVar3;
            if (uVar2 == uVar5) {
              if (uVar6 != 0xffffffffffffffff) {
                *puVar3 = 0xfffffffffffffffe;
                puVar4 = (ulonglong *)(param_1 + uVar6 * 3 + 2);
                uVar2 = puVar4[1];
                *puVar3 = *puVar4;
                puVar3[1] = uVar2;
                puVar3[2] = puVar4[2];
              }
            }
            else {
              param_1[uVar7 * 3 + 2] = uVar6;
            }
            *puVar4 = 0xfffffffffffffffe;
            *param_1 = *param_1 + -1;
            return;
          }
        }
        else {
          uVar6 = *puVar3;
        }
        if (uVar6 == 0xffffffffffffffff) break;
        puVar3 = (ulonglong *)(param_1 + uVar6 * 3 + 2);
        uVar8 = puVar3[1];
        uVar7 = uVar5;
      }
      return;
    }
  }
  return;
}

