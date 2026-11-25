// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f2190  size: 230 bytes
// Name:    FUN_1400f2190
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14407d560, FUN_140264850, FUN_1400f2280
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1400f2190(longlong *param_1,longlong param_2,longlong *param_3)

{
  ushort uVar1;
  undefined4 *puVar2;
  code *pcVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  puVar2 = (undefined4 *)*param_1;
  lVar5 = func_0x000144e95f70(*(undefined4 *)(_DAT_14abcd240 + 0x48),
                              *(undefined8 *)(_DAT_14abcd240 + 0x50),*puVar2);
  if (lVar5 == 0) {
    lVar7 = param_2;
    if (param_2 == 0) goto LAB_1400f21ef;
  }
  else {
    lVar7 = lVar5;
    if ((param_2 != 0) &&
       (cVar4 = func_0x000144d9f880(lVar5,param_2), lVar7 = param_2, cVar4 != '\0')) {
      lVar7 = lVar5;
    }
  }
  uVar1 = *(ushort *)(lVar7 + 0x78);
  if ((uVar1 & 0x10) != 0) {
    if (-1 < (char)uVar1) {
      if (((uVar1 >> 8 & 1) == 0) && ((*(byte *)(puVar2 + 2) & 1) != 0)) {
        lVar5 = func_0x000144d9c140(0x10,puVar2[6]);
        *param_3 = lVar5;
        func_0x000145f40560(lVar5,param_1[1],*(undefined4 *)(*param_1 + 0x18));
        param_1[1] = *param_3;
        FUN_14407d560(param_1,lVar7);
      }
      else {
        lVar5 = FUN_140264850(lVar7);
        *param_3 = lVar5;
        FUN_1400f2280(param_1,lVar7,lVar5,0);
      }
      return 1;
    }
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return uVar6;
  }
LAB_1400f21ef:
  *param_3 = 0;
  return 0;
}

