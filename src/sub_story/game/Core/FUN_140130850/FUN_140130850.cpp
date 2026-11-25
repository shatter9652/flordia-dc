// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140130850  size: 288 bytes
// Name:    FUN_140130850
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145eb3c50, FUN_141f7f3c0, FUN_1402e5b80, FUN_140e00e60, FUN_14130d930
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_140130850(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint auStack_48 [2];
  longlong lStack_40;
  uint *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  
  if (*(int *)(param_1 + 0x60) != 0) {
    uVar3 = func_0x000144dc06c0();
    lVar5 = func_0x000140579090();
    if (uVar3 < *(uint *)(lVar5 + 0x2c)) {
      puStack_30 = &UNK_145cadf98;
      cVar1 = FUN_140e00e60(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x18),
                            *(undefined4 *)(param_1 + 0x28));
      if (cVar1 == '\0') {
        return -1 < *(int *)(param_1 + 0x58);
      }
      iVar4 = *(int *)(param_1 + 0x28);
      goto FUN_141b10fa0;
    }
  }
  FUN_14130d930(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x60) = _DAT_14abbef40;
  iVar4 = FUN_141f7f3c0(*(undefined4 *)(*(longlong *)(param_1 + 0xb0) + 0x10),
                        *(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x18));
  if (iVar4 == -1) {
    return false;
  }
  *(int *)(param_1 + 0x28) = iVar4;
  cVar1 = FUN_140e00e60(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x18));
  if (cVar1 == '\0') {
    uVar2 = FUN_145eb3c50(*(undefined8 *)(param_1 + 0xb0));
    *(undefined1 *)(param_1 + 0x45) = uVar2;
    if (*(longlong *)(param_1 + 0x18) == 0) {
      auStack_48[0] = 0x1ffff;
    }
    else {
      auStack_48[0] =
           (uint)((ulonglong)(*(longlong *)(param_1 + 0x18) - *_DAT_149e24cc0) /
                 (ulonglong)*(uint *)(_DAT_149e24cc0 + 1)) & 0x1ffff;
      auStack_48[0] =
           *(uint *)(_DAT_149e24cc0[5] + (ulonglong)auStack_48[0] * 4) & 0xfffe0000 | auStack_48[0];
    }
    puStack_38 = auStack_48;
    puStack_30 = &UNK_1424d9540;
    puStack_28 = &UNK_1408d04c0;
    puStack_20 = &SUB_140004380;
    lStack_40 = param_1;
    FUN_1402e5b80(4);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 1;
      return false;
    }
    return false;
  }
FUN_141b10fa0:
  lVar5 = *(longlong *)(param_1 + 0x18);
  cVar1 = func_0x000141b11070(lVar5);
  if (((cVar1 == '\0') ||
      ((lVar5 = *(longlong *)(lVar5 + 0x40), lVar5 != 0 &&
       (lVar5 = FUN_14012eb00(*(undefined8 *)(lVar5 + 0xc0),*(undefined4 *)(lVar5 + 200)),
       lVar5 != 0)))) &&
     (cVar1 = FUN_141b110b0(*(undefined8 *)(param_1 + 0xb0),iVar4), cVar1 != '\0')) {
    lVar5 = *(longlong *)(param_1 + 0x18);
    if (*(char *)(lVar5 + 0x51) != '\x01') {
      return true;
    }
    lVar6 = FUN_140579000(*(undefined4 *)(*(longlong *)(param_1 + 0xb0) + 0x7c),
                          *(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x80),iVar4);
    lVar5 = *(longlong *)(lVar5 + 0x40);
    if (lVar6 != 0 && lVar5 != 0) {
      FUN_144fde9e0(*(undefined8 *)(lVar5 + 0xc0),*(undefined4 *)(lVar5 + 200),&puStack_28);
      cVar1 = FUN_14057b010(lVar6,&puStack_28);
      if (cVar1 == '\0') {
        return true;
      }
    }
  }
  return false;
}

