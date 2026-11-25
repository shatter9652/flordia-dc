// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014ca70  size: 475 bytes
// Name:    FUN_14014ca70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14014cfe0, FUN_14014cec0, FUN_14014cc50, FUN_14014d090, FUN_14014cc90, FUN_14038bda0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14014ca70(longlong param_1,char *param_2,uint *param_3,uint *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  ulonglong uVar5;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  longlong lStack_f8;
  undefined4 uStack_ec;
  undefined4 uStack_d8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_74;
  uint uStack_70;
  undefined4 uStack_44;
  
  *param_2 = '\0';
  uStack_108 = *(undefined8 *)(param_1 + 0x70);
  uStack_100 = *(undefined8 *)(param_1 + 0x78);
  func_0x000144dc3790(&uStack_108,&uStack_118);
  FUN_14014cfe0(&uStack_a8);
  uStack_74 = 0x3fff;
  uStack_a8 = uStack_118;
  uStack_a0 = uStack_110;
  uStack_98 = 0x41a00000;
  uStack_44 = 0x40400000;
  func_0x0001403fc0d0(&uStack_a8,0);
  FUN_14014cec0(&uStack_a8);
  if ((short)uStack_70 == -1) {
    *param_2 = '\0';
  }
  else {
    uVar5 = (ulonglong)uStack_70 & 0xffff;
    if (((uVar5 != 0xffff) && ((uint)uVar5 < 0x12c0)) &&
       (plVar1 = *(longlong **)(_DAT_14a9e88c0 + 0xc30 + uVar5 * 8), plVar1 != (longlong *)0x0)) {
      if (((uStack_70 >> 0x10 < (uint)*(ushort *)(plVar1 + 1)) &&
          (*(ushort *)(plVar1 + 1) != 0 || (short)plVar1[9] != 0)) && (lVar2 = *plVar1, lVar2 != 0))
      {
        if (param_4 != (uint *)0x0) {
          *param_4 = uStack_70;
        }
        if ((*(byte *)(lVar2 + 0xc + (ulonglong)(uStack_70 >> 0x10) * 0x34) & 0x10) != 0) {
          *param_2 = '\x01';
        }
      }
    }
    if (*param_2 == '\0') {
      FUN_14038bda0(&lStack_f8);
      uStack_d8 = 0x3fff;
      uStack_ec = 0x41a00000;
      lStack_f8 = param_1;
      cVar4 = FUN_14014cc90(&lStack_f8);
      if (cVar4 != '\0') {
        *param_2 = '\x01';
      }
    }
  }
  lStack_f8 = CONCAT44(lStack_f8._4_4_,0xffffffff);
  uVar5 = FUN_14014cc50(&uStack_118,&lStack_f8,0);
  if ((char)uVar5 != '\0') {
    uVar3 = (uint)lStack_f8;
    uVar5 = (ulonglong)((uint)lStack_f8 & 0xffff);
    if ((((uint)lStack_f8 & 0xffff) < (uint)_DAT_14a951d10) &&
       (lVar2 = *(longlong *)(_DAT_14a951d08 + uVar5 * 8), lVar2 != 0)) {
      uVar5 = FUN_14014d090(lVar2,param_1);
      if ((char)uVar5 != '\0') {
        uVar5 = 0xff0000;
        *param_3 = uVar3 & 0xff00ffff | 0xff0000;
      }
    }
  }
  return CONCAT71((int7)(uVar5 >> 8),*param_2) ^ 1;
}

