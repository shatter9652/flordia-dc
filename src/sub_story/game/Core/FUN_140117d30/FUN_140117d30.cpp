// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140117d30  size: 256 bytes
// Name:    FUN_140117d30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140b9c880, FUN_14044d8f0, FUN_1413acce0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140117d30(longlong param_1,char param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char cVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  
  uVar1 = *(undefined4 *)(param_1 + 0x9c);
  bVar8 = param_2 == '\x02';
  cVar4 = func_0x000144eacc20(uVar1);
  if (cVar4 != '\0') goto LAB_140117dc6;
  lVar6 = func_0x000144e23bb0(uVar1);
  cVar4 = '\x01';
  if ((lVar6 == 0) || ((*(byte *)(lVar6 + 0x10) & 1) == 0)) {
LAB_140117db6:
    uVar2 = uVar1;
    if (bVar8 != false) {
LAB_140117dbd:
      FUN_14044d8f0(uVar2);
    }
  }
  else {
    lVar7 = func_0x000145130f70(lVar6,0);
    if (lVar7 != 0) {
      bVar8 = (bool)((*(byte *)(lVar7 + 0x52) & 0x20) >> 5 | param_2 == '\x02');
    }
    uVar3 = *(undefined8 *)(lVar6 + 0x200);
    cVar5 = func_0x0001408d8630(uVar3);
    if ((cVar5 == '\0') || (cVar5 = func_0x000140a11d80(uVar3), cVar5 != '\0')) goto LAB_140117db6;
    cVar4 = func_0x0001452f16a0(uVar1);
    if (cVar4 == '\0') {
      cVar4 = '\0';
      goto LAB_140117db6;
    }
    FUN_140b9c880(lVar6,0);
    cVar4 = func_0x000140a11d80(*(undefined8 *)(lVar6 + 0x200));
    if (bVar8 != false) {
      uVar2 = *(undefined4 *)(param_1 + 0x9c);
      goto LAB_140117dbd;
    }
  }
  if (cVar4 == '\0') {
    return 0;
  }
LAB_140117dc6:
  if ((*(uint *)(param_1 + 0xa4) & 0xfffe) == 0x7ffe) {
    FUN_1413acce0(param_1,0);
  }
  return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
}

