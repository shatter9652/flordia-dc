// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14013d990  size: 257 bytes
// Name:    FUN_14013d990
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145451d80, FUN_14013dac0, FUN_144ffa820, FUN_144f47310, FUN_144edb730
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_14013d990(longlong param_1,longlong param_2,undefined1 *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined7 uVar6;
  ulonglong uVar5;
  undefined4 uVar7;
  
  *param_3 = 0;
  uVar7 = *(undefined4 *)(param_1 + 0x9c);
  lVar2 = func_0x000144fa1860(uVar7);
  uVar6 = (undefined7)((ulonglong)param_1 >> 8);
  if (lVar2 != 0) {
    cVar1 = FUN_144edb730(lVar2,0x1c);
    if (cVar1 != '\0') {
      uVar5 = CONCAT71(uVar6,1);
      goto LAB_14013da61;
    }
    uVar7 = *(undefined4 *)(param_1 + 0x9c);
  }
  lVar2 = func_0x00014526f770(uVar7);
  if (lVar2 != 0) {
    uVar5 = CONCAT71(uVar6,1);
    if (((*(byte *)(lVar2 + 0x1520) & 1) != 0) ||
       ((lVar2 = FUN_145451d80(lVar2), lVar2 != 0 &&
        (((*(uint *)(lVar2 + 0x30) >> 8 & 1) != 0 ||
         (((*(uint *)(lVar2 + 0x30) >> 10 & 1) != 0 &&
          (cVar1 = FUN_144f47310(uVar7,1), cVar1 != '\0')))))))) goto LAB_14013da61;
    lVar3 = func_0x000145311f50(uVar7);
    if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x2c0), lVar3 != 0)) {
      uVar4 = func_0x000144edcb00(param_2);
      cVar1 = FUN_14013dac0(lVar3,uVar4);
      if ((lVar2 == 0) || (cVar1 != '\0')) {
        if (cVar1 != '\0') goto LAB_14013da61;
      }
      else if (((*(byte *)(lVar2 + 0x31) & 2) != 0) &&
              (cVar1 = func_0x00014013daa0(lVar3), cVar1 != '\0')) {
        *param_3 = 1;
        goto LAB_14013da61;
      }
    }
  }
  FUN_144ffa820(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x48));
  uVar5 = 0;
LAB_14013da61:
  return uVar5 & 0xffffffff;
}

