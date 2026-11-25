// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140026540  size: 343 bytes
// Name:    FUN_140026540
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400272d0, FUN_140026e30, FUN_144e07bb0, FUN_144df3790, FUN_144df9120
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140026540(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined4 param_5,undefined1 param_6)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  float fVar4;
  undefined1 auVar5 [64];
  undefined1 auStack_9c [4];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [72];
  
  FUN_1400272d0(auStack_88,*(undefined4 *)(param_1 + 0xbe0),param_5,*(undefined8 *)(param_3 + 0x290)
                ,*(undefined8 *)(param_2 + 0x18),param_6);
  FUN_140026e30(auStack_9c,*(undefined4 *)(param_1 + 0xbe0),param_5);
  FUN_144e07bb0(*(undefined4 *)(param_3 + 4),*(undefined8 *)(param_3 + 8));
  if (*(short *)(param_1 + 0xbe6) != 0) {
    auVar5 = ZEXT1664(CONCAT412(_DAT_145fc6ed8,
                                CONCAT48(_DAT_145fc6ed8,CONCAT44(_DAT_145fc6ed8,_DAT_145fc6ed8))));
    uVar3 = (ulonglong)*(ushort *)(param_1 + 0xbe4);
    fVar4 = _DAT_14615be1c;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_4 + 8) + uVar3 * 8);
      func_0x0001400266b0(*(undefined8 *)(lVar1 + 8),auStack_88);
      func_0x0001400266a0(*(undefined8 *)(lVar1 + 8),auStack_9c);
      func_0x00014505fbc0(*(undefined8 *)(lVar1 + 0x38),1);
      cVar2 = func_0x000144da4370(*(undefined1 *)(_DAT_14ab7ef10 + 0x23c));
      if ((cVar2 == '\0') || (*(float *)(lVar1 + 0x10) < fVar4)) {
        FUN_144df3790(lVar1);
        auStack_98 = auVar5._0_16_;
        FUN_144df9120(lVar1,auStack_98);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (ulonglong)*(ushort *)(param_1 + 0xbe6) +
                     (ulonglong)*(ushort *)(param_1 + 0xbe4));
  }
  return;
}

