// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140162b30  size: 235 bytes
// Name:    FUN_140162b30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140004b40, FUN_145c43000, FUN_145ea7ed0, FUN_145ea7f90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140162b30(longlong param_1,ulonglong param_2,char param_3)

{
  longlong *plVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  uint uStack_3c;
  longlong lStack_38;
  uint uStack_2c;
  char cStack_28;
  
  FUN_140004b40(0x147455708);
  if (param_1 == 0) {
    uVar3 = 0x1ffff;
  }
  else {
    plVar1 = *(longlong **)((ulonglong)*(byte *)(param_1 + 0x30) * 8 + 0x14abbe7c0);
    uVar3 = (uint)((ulonglong)(param_1 - *plVar1) / (ulonglong)*(uint *)(plVar1 + 1)) & 0x1ffff;
    uVar3 = (*(byte *)(param_1 + 0x30) & 0x1f) << 0x11 | uVar3 |
            (*(uint *)(plVar1[5] + (ulonglong)uVar3 * 4) & 0x7fe0000) << 5;
  }
  uStack_3c = uVar3;
  if ((char)(param_2 & 0xffffffff) == '\0') {
    iVar4 = FUN_145ea7ed0(uVar3);
    if (iVar4 != -1) {
      FUN_145ea7f90(iVar4);
      uVar5 = CONCAT71((int7)((param_2 & 0xffffffff) >> 8),1);
      goto LAB_140162bb0;
    }
  }
  else {
    if (_DAT_14745572c < 5) {
      FUN_145c43000(&lStack_38,&uStack_3c);
      uVar5 = CONCAT71((int7)((ulonglong)&lStack_38 >> 8),cStack_28);
      if (cStack_28 == '\x01') {
        *(uint *)((ulonglong)(uStack_2c >> 4) * 0x50 + lStack_38 + 0x10 +
                 (ulonglong)(uStack_2c & 0xf) * 4) = uVar3;
      }
      goto LAB_140162bb0;
    }
    if (param_3 != '\0') {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
  }
  uVar5 = 0;
LAB_140162bb0:
  func_0x000144d9dab0(0x147455708);
  return uVar5 & 0xffffffff;
}

