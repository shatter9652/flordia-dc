// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14018a240  size: 247 bytes
// Name:    FUN_14018a240
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14018a240(uint *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = param_1[1];
  if (uVar3 == *param_1) {
    uVar4 = 1;
    if (1 < uVar3) {
      uVar4 = uVar3 >> 1;
    }
    lVar5 = func_0x000144d9c140(4,(ulonglong)(uVar4 + uVar3) * 4);
    uVar1 = param_1[1];
    if ((ulonglong)uVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 2);
      lVar6 = 0;
      do {
        if ((undefined4 *)(lVar5 + lVar6) != (undefined4 *)0x0) {
          *(undefined4 *)(lVar5 + lVar6) = *(undefined4 *)(lVar2 + lVar6);
        }
        lVar6 = lVar6 + 4;
      } while ((ulonglong)uVar1 << 2 != lVar6);
    }
    if (*(longlong *)(param_1 + 2) != 0) {
      func_0x000144d9c130(*(longlong *)(param_1 + 2));
    }
    *(longlong *)(param_1 + 2) = lVar5;
    *param_1 = uVar4 + uVar3;
    uVar3 = param_1[1];
  }
  else {
    lVar5 = *(longlong *)(param_1 + 2);
  }
  param_1[1] = uVar3 + 1;
  if (lVar5 != 0) {
    lVar2 = *param_2;
    *(undefined4 *)(lVar5 + (ulonglong)uVar3 * 4) = 0x1ffff;
    if (lVar2 == 0) {
      uVar4 = 0x1ffff;
    }
    else {
      uVar4 = (uint)((ulonglong)(lVar2 - *_DAT_14abb6918) / (ulonglong)*(uint *)(_DAT_14abb6918 + 1)
                    ) & 0x1ffff;
      uVar4 = *(uint *)(_DAT_14abb6918[5] + (ulonglong)uVar4 * 4) & 0xfffe0000 | uVar4;
    }
    *(uint *)(lVar5 + (ulonglong)uVar3 * 4) = uVar4;
  }
  return;
}

