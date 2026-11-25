// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c7ff0  size: 257 bytes
// Name:    FUN_1400c7ff0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f62e90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1400c7ff0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x2f8);
  if (lVar2 == 0) {
LAB_1400c80d3:
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x58);
    if (lVar2 == 0) {
      return 0;
    }
  }
  else {
    lVar1 = func_0x000145028560(lVar2);
    uVar3 = (ulonglong)*(byte *)(lVar1 + 0xc0 + (ulonglong)DAT_14abc3b50);
    if ((uVar3 == 0xff) || (*(longlong *)(lVar1 + 0x10 + uVar3 * 8) == 0)) goto LAB_1400c80d3;
    lVar2 = func_0x000145028560(lVar2);
    uVar3 = (ulonglong)*(byte *)(lVar2 + 0xc0 + (ulonglong)DAT_14abc3ac0);
    if ((uVar3 == 0xff) || (*(longlong *)(lVar2 + 0x10 + uVar3 * 8) == 0)) goto LAB_1400c80d3;
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar1 = FUN_144f62e90(*(undefined8 *)(*(longlong *)(lVar2 + 0x38) + 0x98));
    if (lVar1 == 0) {
      *(undefined1 *)(param_1 + 0x389) = 1;
      lVar2 = *(longlong *)(lVar2 + 0x58);
      goto LAB_1400c80cd;
    }
    lVar2 = *(longlong *)(lVar2 + 0x58);
    if (*(char *)(lVar2 + 0x20) != '\x01') {
      return 1;
    }
    if (0.0 < *(float *)(*(longlong *)(param_1 + 0x188) + 0x174)) {
      return 1;
    }
    if (0.0 < *(float *)(*(longlong *)(param_1 + 0x188) + 0x324)) {
      return 1;
    }
    if (0.0 < *(float *)(param_1 + 0x278)) {
      return 1;
    }
  }
  *(undefined1 *)(param_1 + 0x389) = 1;
LAB_1400c80cd:
  *(undefined1 *)(lVar2 + 0x21) = 1;
  return 0;
}

