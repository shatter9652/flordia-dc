// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401328c0  size: 295 bytes
// Name:    FUN_1401328c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141029680, FUN_144ffa120, FUN_1426a3280
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1401328c0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  char cVar2;
  longlong lVar3;
  ulonglong unaff_RBX;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [24];
  
  if ((param_3 & 0x40) == 0) {
    lVar3 = func_0x000144f20050(*(undefined4 *)(param_1 + 0x9c));
    if ((lVar3 != 0) && (lVar3 = FUN_144ffa120(lVar3,param_2), lVar3 != 0)) {
      unaff_RBX = 0;
      if (((*(byte *)(lVar3 + 0x215) & 2) == 0) || (1 < *(int *)(lVar3 + 0x208)))
      goto LAB_14013290c;
      goto LAB_140132918;
    }
  }
  else {
LAB_140132918:
    if (((param_3 & 2) == 0) || (cVar2 = FUN_1426a3280(param_1), cVar2 == '\0')) {
      uVar1 = unaff_RBX;
      if ((short)param_3 < 0) {
        uStack_68 = *(undefined8 *)(param_1 + 0x70);
        uStack_60 = *(undefined8 *)(param_1 + 0x78);
        func_0x000144dc3790(&uStack_68,auStack_38);
        unaff_RBX = 0;
        lVar3 = FUN_141029680(auStack_38,param_1,0,0);
        uVar1 = 0;
        if (lVar3 == 0) goto LAB_14013290c;
      }
      unaff_RBX = uVar1;
      if ((param_3 >> 0x16 & 1) != 0) {
        uStack_78 = *(undefined8 *)(param_1 + 0x70);
        uStack_70 = *(undefined8 *)(param_1 + 0x78);
        func_0x000144dc3790(&uStack_78,auStack_48);
        unaff_RBX = 0;
        lVar3 = FUN_141029680(auStack_48,param_1,0,0);
        if (lVar3 != 0) goto LAB_14013290c;
      }
      if ((param_3 >> 0x10 & 1) != 0) {
        unaff_RBX = 0;
        uStack_58 = _DAT_149978350;
        uStack_50 = uRam0000000149978358;
        lVar3 = FUN_141029680(&uStack_58,param_1,0,0);
        if (lVar3 == 0) goto LAB_14013290c;
      }
      unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),1);
      goto LAB_14013290c;
    }
  }
  unaff_RBX = 0;
LAB_14013290c:
  return unaff_RBX & 0xffffffff;
}

