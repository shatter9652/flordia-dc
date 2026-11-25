// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14000d6e0  size: 158 bytes
// Name:    FUN_14000d6e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e24640
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_14000d6e0(undefined4 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  
  lVar6 = func_0x000144e24670();
  if ((lVar6 != 0) && ((*(byte *)(lVar6 + 0x12) & 2) != 0)) {
    return 1;
  }
  cVar5 = *(char *)(param_2 + 0x30);
  if ((((cVar5 == '\x02') && (cVar4 = func_0x000144eb35f0(param_1), cVar4 != '\0')) &&
      (lVar7 = FUN_144e24640(*(undefined4 *)(param_2 + 0x9c)), lVar7 != 0)) &&
     (((*(byte *)(lVar7 + 0x644) & 0x80) != 0 && (*(char *)(lVar7 + 0x181) != '\0')))) {
    return 1;
  }
  lVar7 = func_0x000144eb3640(param_1);
  if (lVar7 != 0) {
    if (cVar5 == '\x02') {
      bVar3 = *(byte *)(lVar7 + 0x3de8) & 1;
    }
    else {
      if (cVar5 != '\x03') goto FUN_144eb38b0;
      bVar3 = *(byte *)(lVar7 + 0x3de8) & 2;
    }
    if (bVar3 == 0) {
      return 1;
    }
  }
FUN_144eb38b0:
  uVar1 = *(undefined4 *)(lVar6 + 0x130);
  lVar7 = func_0x000144dc4210(uVar1,*(undefined8 *)(lVar6 + 0x168),param_3,param_4,unaff_RBX,
                              unaff_RBP,unaff_RDI,unaff_RSI);
  if (lVar7 == 0) {
    return 0;
  }
  iVar2 = *(int *)(lVar7 + 0x30);
  if (iVar2 == 3) {
    lVar6 = func_0x000144f589a0(uVar1,*(undefined8 *)(lVar6 + 0x180));
    if (lVar6 == 0) {
      return 0;
    }
    if (*(char *)(lVar6 + 0x131) == -1) {
      return 0;
    }
    if (*(char *)(lVar6 + 0x131) != *(char *)(lVar7 + 0x42)) {
      return 0;
    }
    if (*(int *)(lVar6 + 0x30) == 4) goto code_r0x000144eb3929;
  }
  if (iVar2 != 6) {
    return 0;
  }
code_r0x000144eb3929:
  lVar6 = func_0x00014000b6e0(*(undefined4 *)(lVar7 + 0x3c));
  if (lVar6 != 0) {
    cVar5 = FUN_1452d4fd0(lVar6,param_2);
    if (cVar5 != '\0') {
      return 1;
    }
    cVar5 = FUN_14000b700(lVar6,param_2);
    if (cVar5 != '\0') {
      return 1;
    }
  }
  return 0;
}

