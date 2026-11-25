// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140001830  size: 429 bytes
// Name:    FUN_140001830
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14286ce40, FUN_14139c7b0, FUN_14286cfa0, FUN_1428412b0, FUN_14528b310, FUN_140629100, FUN_140457e10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140001830(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 *puVar7;
  
  lVar4 = FUN_140629100(_DAT_14a9b3e18,0xa549d9fc);
  if (lVar4 == 0) {
    return;
  }
  lVar5 = *(longlong *)(lVar4 + 0x1f0);
  lVar4 = FUN_14139c7b0(*(undefined4 *)(lVar4 + 0x58));
  if (lVar5 == 0 || lVar4 == 0) {
    return;
  }
  puVar7 = *(undefined8 **)(lVar5 + 0xc40);
  if (puVar7 == (undefined8 *)0x0) {
    return;
  }
  cVar1 = (**(code **)*puVar7)(puVar7,0xd4472091);
  if (cVar1 == '\0') {
LAB_14000197a:
    puVar7 = *(undefined8 **)(lVar5 + 0xc40);
LAB_140001981:
    if (puVar7 == (undefined8 *)0x0) {
      return;
    }
  }
  else {
    puVar7 = *(undefined8 **)(lVar5 + 0xc40);
    if ((*(byte *)(puVar7 + 3) & 2) != 0) {
      cVar1 = (**(code **)*puVar7)(puVar7,0xd4472091);
      if (cVar1 == '\0') goto LAB_14000197a;
      puVar7 = *(undefined8 **)(lVar5 + 0xc40);
      cVar1 = func_0x0001422d74f0(puVar7);
      if (cVar1 != '\0') goto LAB_1400018d2;
      goto LAB_140001981;
    }
  }
  cVar1 = (**(code **)*puVar7)(puVar7,0x47bd21ac);
  if (cVar1 == '\0') {
    return;
  }
  puVar7 = *(undefined8 **)(lVar5 + 0xc40);
  if (puVar7 == (undefined8 *)0x0) {
    return;
  }
  cVar1 = (**(code **)*puVar7)(puVar7,0x47bd21ac);
  if (cVar1 == '\0') {
    return;
  }
  cVar1 = func_0x000145268520(*(undefined1 *)(*(longlong *)(lVar5 + 0xc40) + 0x11));
  if (cVar1 == '\0') {
    return;
  }
LAB_1400018d2:
  FUN_1428412b0(0xa549d9fc,lVar4,0,0,0);
  puVar7 = *(undefined8 **)(lVar5 + 0xc40);
  if ((puVar7 != (undefined8 *)0x0) &&
     (cVar1 = (**(code **)*puVar7)(puVar7,0x47bd21ac), cVar1 != '\0')) {
    iVar2 = func_0x000140457e80();
    if (iVar2 != 0) {
      uVar6 = 0;
      do {
        lVar5 = FUN_140457e10(uVar6);
        if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x10) == lVar4)) {
          FUN_14286ce40(uVar6);
          uVar6 = uVar6 - 1;
        }
        uVar6 = uVar6 + 1;
        uVar3 = func_0x000140457e80();
      } while (uVar6 < uVar3);
    }
    iVar2 = func_0x000140457ea0();
    if (iVar2 != 0) {
      uVar6 = 0;
      do {
        lVar5 = FUN_14528b310(uVar6);
        if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x10) == lVar4)) {
          FUN_14286cfa0(uVar6);
          uVar6 = uVar6 - 1;
        }
        uVar6 = uVar6 + 1;
        uVar3 = func_0x000140457ea0();
      } while (uVar6 < uVar3);
    }
  }
  return;
}

