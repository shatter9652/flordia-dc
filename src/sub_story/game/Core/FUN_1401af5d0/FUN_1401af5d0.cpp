// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401af5d0  size: 305 bytes
// Name:    FUN_1401af5d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450eb5a0, FUN_1451fbde0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1401af5d0(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  
  lVar8 = *(longlong *)(param_1 + 0x40);
  if (lVar8 == 0) {
LAB_1401af6d5:
    uVar3 = 0;
  }
  else {
    uVar6 = *(uint *)(param_1 + 0xa4);
    if ((int)uVar6 < 0) {
      iVar7 = 0;
      if (*(ushort *)(lVar8 + 0x70) == 0) goto LAB_1401af6d5;
      uVar6 = 0xffffffff;
      uVar5 = 0;
      uVar3 = 0;
      do {
        lVar4 = func_0x000145520210(*(undefined8 *)(lVar8 + 0x68),uVar5);
        cVar1 = FUN_1450eb5a0(param_1,uVar5);
        if (cVar1 == '\0') {
          lVar8 = *(longlong *)(param_1 + 0x40);
        }
        else {
          cVar1 = func_0x0001455b6d20(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xb8),
                                      uVar5);
          lVar8 = *(longlong *)(param_1 + 0x40);
          if (cVar1 == '\0') {
            uVar2 = FUN_1451fbde0(lVar8,uVar5);
            uVar3 = func_0x0001455b6c00(*(undefined4 *)(param_1 + 0x54),
                                        *(undefined8 *)(param_1 + 0x58),uVar5,uVar2);
            if ((*(byte *)(lVar4 + 0x34) & 0x10) != 0) {
              *param_2 = 0x1ffff;
              param_2[1] = uVar5;
              goto LAB_1401af6e4;
            }
            iVar7 = iVar7 + 1;
            uVar6 = uVar5;
          }
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(ushort *)(lVar8 + 0x70));
      if (iVar7 != 1) {
        return 0;
      }
      *param_2 = 0x1ffff;
      param_2[1] = uVar6;
LAB_1401af6e4:
      param_2[2] = 0;
      *(undefined8 *)(param_2 + 4) = uVar3;
      param_2[6] = 0;
    }
    else {
      if (*(ushort *)(lVar8 + 0x70) <= uVar6) goto LAB_1401af6d5;
      param_2[1] = uVar6;
      param_2[2] = 0;
      uVar2 = FUN_1451fbde0(lVar8,uVar6);
      uVar3 = func_0x0001455b6c00(*(undefined4 *)(param_1 + 0x54),*(undefined8 *)(param_1 + 0x58),
                                  uVar6,uVar2);
      *(undefined8 *)(param_2 + 4) = uVar3;
    }
    uVar3 = 1;
  }
  return uVar3;
}

