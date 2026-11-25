// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140091680  size: 264 bytes
// Name:    FUN_140091680
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f1eaf0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_140091680(longlong param_1,undefined1 *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  char cStack_26;
  char cStack_25;
  uint uStack_24;
  
  if ((*(ushort *)(param_1 + 0xb4) == 0xffff) || (_DAT_14ab73aa0 == 0)) {
    lVar2 = 0;
  }
  else {
    lVar2 = (ulonglong)((uint)*(ushort *)(param_1 + 0xb4) * _DAT_14ab73a88) +
            *(longlong *)(_DAT_14ab73aa0 + 0x8ab8 + (ulonglong)*(byte *)(param_1 + 0x7e) * 0x8ad0);
  }
  uVar1 = 0;
  if ((*(ushort *)(param_1 + 0xb6) == 0xffff) || (_DAT_14ab73aa0 == 0)) {
    lVar3 = 0;
  }
  else {
    lVar3 = (ulonglong)((uint)*(ushort *)(param_1 + 0xb6) * _DAT_14ab73a88) +
            *(longlong *)(_DAT_14ab73aa0 + 0x8ab8 + (ulonglong)*(byte *)(param_1 + 0x7e) * 0x8ad0);
  }
  cStack_25 = '\0';
  cStack_26 = '\0';
  if (lVar2 != 0) {
    uVar1 = FUN_144f1eaf0(lVar2,&cStack_25);
  }
  if (lVar3 == 0) {
    uStack_24 = 0;
  }
  else {
    uStack_24 = FUN_144f1eaf0(lVar3,&cStack_26);
  }
  if ((param_2 != (undefined1 *)0x0) && ((cStack_25 != '\0' || (cStack_26 == '\x01')))) {
    *param_2 = 1;
  }
  if (uStack_24 < uVar1) {
    uStack_24 = uVar1;
  }
  func_0x000144f1eac0(*(undefined8 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0xfe),&uStack_24);
  return uStack_24;
}

