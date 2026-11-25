// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140001440  size: 259 bytes
// Name:    FUN_140001440
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140417e80, FUN_140addfd0, FUN_14156df90, FUN_140494be0, FUN_1450bc1b0, FUN_145224aa0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140001440(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  undefined1 auStack_58 [64];
  
  FUN_1450bc1b0(param_1 + 0xe8,0);
  FUN_1450bc1b0(param_1 + 0xd8,0);
  uVar3 = _DAT_14a9b3e18;
  cVar4 = FUN_140494be0(_DAT_14a9b3e18,0xd3562735);
  if (cVar4 == '\0') {
    FUN_140addfd0();
  }
  else {
    FUN_14156df90(uVar3,8,0x5b76b6e0);
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  lVar5 = func_0x000145226dc0(*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x9c));
  if (lVar5 == 0) {
    return;
  }
  uVar1 = *(uint *)(lVar5 + 0x660);
  if (uVar1 != 0x1ffff) {
    uVar2 = *(uint *)(_DAT_14abb6918[5] + (ulonglong)(uVar1 & 0x1ffff) * 4);
    if (((~uVar2 & *(uint *)(_DAT_14abb6918 + 6)) == 0) &&
       ((uVar2 & 0x7fe0000) == (uVar1 & 0xfffe0000))) {
      lVar5 = (ulonglong)((uVar1 & 0x1ffff) * (int)_DAT_14abb6918[1]) + *_DAT_14abb6918;
      goto LAB_140001507;
    }
  }
  lVar5 = 0;
LAB_140001507:
  FUN_1450bc1b0(param_1 + 0xd8,lVar5);
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_145224aa0(auStack_58,*(undefined8 *)(param_1 + 8));
    FUN_140417e80(_DAT_14a9b3e18,0xc9749ac3,auStack_58);
  }
  return;
}

