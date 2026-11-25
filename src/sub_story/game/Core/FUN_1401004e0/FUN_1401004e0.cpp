// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401004e0  size: 576 bytes
// Name:    FUN_1401004e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1440b7020, FUN_1400bf810, FUN_144fa4cb0, FUN_144fa4c80, FUN_140100720, FUN_140100770, FUN_141aeedc0, FUN_1400ff260
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1401004e0(longlong param_1,longlong param_2,char param_3,char param_4)

{
  longlong lVar1;
  undefined1 uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  byte bVar8;
  int iStack_48;
  undefined4 uStack_44;
  uint uStack_40;
  uint uStack_3c;
  
  if (param_1 == 0) {
    return false;
  }
  if (param_2 == 0) {
    return false;
  }
  lVar4 = func_0x0001450da490(*(undefined4 *)(param_2 + 0x9c));
  if (lVar4 == 0) {
LAB_140100516:
    if ((0x1cU >> (*(uint *)(param_2 + 0x30) & 0x1f) & 1) == 0) {
      iVar7 = 0;
    }
    else {
      FUN_140100720(&iStack_48,param_2);
      iVar7 = iStack_48;
    }
LAB_140100539:
    uVar2 = FUN_140100770(param_1,iVar7,1,0);
  }
  else {
    if (((0x1cU >> (*(uint *)(param_2 + 0x30) & 0x1f) & 1) == 0) ||
       (cVar3 = FUN_144fa4c80(param_2,0xf), cVar3 == '\0')) {
      if ((param_3 == '\0') ||
         ((((*(longlong *)(lVar4 + 0x230) == 0 && (*(int *)(lVar4 + 0x248) == 0)) &&
           (*(int *)(lVar4 + 0x260) == 0)) && (*(int *)(lVar4 + 0x278) == 0)))) goto LAB_140100516;
      lVar4 = func_0x0001418bcb80();
      if (lVar4 != 0) {
        bVar8 = 0;
        lVar5 = FUN_144fa4cb0(_DAT_14ab7f650,param_2,0);
        if (lVar5 != 0) {
          if (*(longlong *)(lVar5 + 0x138) == 0) {
            bVar8 = 0;
          }
          else {
            bVar8 = (*(byte *)(*(longlong *)(lVar5 + 0x138) + 0x52) & 0x10) >> 4;
          }
        }
        lVar5 = 0;
        if ((0x1cU >> (*(uint *)(param_2 + 0x30) & 0x1f) & 1) != 0) {
          lVar5 = param_2;
        }
        FUN_1440b7020(lVar4,&iStack_48,param_1,lVar5);
        lVar1 = _DAT_14ab7f988;
        FUN_141aeedc0(lVar4,&uStack_3c,param_1,lVar5);
        lVar5 = FUN_1400ff260(*(undefined8 *)(lVar1 + 8),*(undefined2 *)(lVar1 + 0x10),uStack_3c);
        if ((bVar8 != 0) || (lVar5 == 0)) {
          iVar7 = *(int *)(lVar4 + 0x100);
          if (iVar7 == 0) {
            uVar6 = 0;
            uStack_40 = 0x3fffff;
            FUN_1400bf810(CONCAT44(uStack_44,iStack_48),&uStack_40,0);
            if ((~uStack_40 & 0x3fffff) != 0) {
              uVar6 = func_0x000144e929d0();
            }
            lVar4 = func_0x0001410bf490(*(undefined8 *)(_DAT_14ab7f650 + 0x370),
                                        *(undefined2 *)(_DAT_14ab7f650 + 0x378),uVar6,0);
            if ((lVar4 == 0) || (iVar7 = *(int *)(lVar4 + 0x3c), iVar7 == 0)) goto LAB_140100516;
          }
          goto LAB_140100539;
        }
      }
    }
    else if (((*(longlong *)(lVar4 + 0x1050) != 0) &&
             ((param_4 == '\0' || ((*(byte *)(lVar4 + 0x106d) & 0x10) == 0)))) &&
            ((lVar5 = func_0x0001450da490(*(undefined4 *)(param_1 + 0x9c)), lVar5 == 0 ||
             ((*(byte *)(lVar5 + 0x15) & 2) == 0)))) {
      return (*(byte *)(lVar4 + 0x106c) & 0xc) != 0;
    }
    uVar2 = 0;
  }
  return uVar2;
}

