// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140001550  size: 313 bytes
// Name:    FUN_140001550
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1455db8cc, FUN_1455db934, FUN_140001690, FUN_1419cfa60, FUN_1405e4c60, FUN_144e2dfb0, FUN_1456a24e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140001550(longlong param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong unaff_GS_OFFSET;
  bool bVar4;
  uint uStack_24;
  int iStack_20;
  undefined2 uStack_1a;
  
  if (param_1 == 0) {
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x9c);
  cVar2 = FUN_144e2dfb0(uVar1);
  if (cVar2 != '\0') {
    return;
  }
  cVar2 = func_0x000144da28f0(uVar1);
  if (cVar2 == '\0') {
    return;
  }
  if ((*(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               4) < _DAT_1478b05cc) && (FUN_1455db8cc(&DAT_1478b05cc), _DAT_1478b05cc == -1)) {
    FUN_1456a24e0();
    FUN_1455db934(&DAT_1478b05cc);
  }
  cVar2 = func_0x000144e72530(*(undefined4 *)(param_1 + 0x9c));
  uStack_24 = CONCAT22(uStack_24._2_2_,_DAT_1478b05c8);
  FUN_1405e4c60(&iStack_20,&uStack_24);
  if (iStack_20 == -0x86ea686) {
    bVar4 = true;
  }
  else {
    uStack_1a = _DAT_1478b05c8;
    FUN_140001690(&uStack_24);
    bVar4 = uStack_24 == 0xf791597a;
    if (cVar2 == '\x01' && !bVar4) {
      uVar3 = 0xf791597a;
      goto LAB_14000167f;
    }
  }
  if (cVar2 != '\0' || !bVar4) {
    return;
  }
  uVar3 = 0xf5a638b9;
LAB_14000167f:
  uStack_24 = uStack_24 & 0xffff0000;
  FUN_1419cfa60(&iStack_20,0,uVar3,0,&uStack_24);
  return;
}

