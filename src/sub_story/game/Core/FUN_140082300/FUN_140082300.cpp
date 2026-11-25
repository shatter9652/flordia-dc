// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140082300  size: 465 bytes
// Name:    FUN_140082300
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1402096b0, FUN_144fcdf80, FUN_144ffa120, FUN_1402eb370, FUN_144fcdf30
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140082300(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (*(char *)(param_3 + 0x30) == '\x03') {
    lVar7 = FUN_1402eb370(param_3,0);
    if (lVar7 == 0) {
      return 0;
    }
  }
  else {
    if (*(char *)(param_3 + 0x30) != '\x02') {
      return 0;
    }
    lVar7 = FUN_144fcdf30(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0);
    if (lVar7 == 0) {
      return 0;
    }
    lVar8 = func_0x0001451ad2b0(*(undefined4 *)(lVar7 + 0x2a78));
    if (lVar8 == 0) {
      return 0;
    }
    lVar8 = FUN_1402096b0(lVar8,0,0);
    if (lVar8 != param_3) {
      return 0;
    }
  }
  lVar8 = FUN_144ffa120(param_1,param_3);
  if (lVar8 != 0) {
    uVar1 = *(undefined4 *)(lVar8 + 0x1c0);
    iVar4 = func_0x000144fd53c0();
    uVar5 = func_0x000144dc06d0(uVar1,iVar4);
    if (uVar5 < 0x240c8400) {
      lVar8 = FUN_144fcdf80(param_2);
      if (lVar8 == 0) {
        iVar4 = iVar4 + -0x240c8401;
      }
      else {
        iVar4 = *(int *)(lVar8 + 0x94);
      }
      iVar2 = *(int *)(lVar7 + 0xb1e8);
      uVar6 = func_0x000144fd53c0();
      uVar5 = func_0x000144dc06d0(iVar2,uVar6);
      if (uVar5 < 0x240c8400) {
        cVar3 = func_0x000144e3f250(uVar1,iVar2);
        if (cVar3 != '\0') {
          return 1;
        }
        cVar3 = func_0x000144e3f250(uVar1,iVar2 + 1000);
        if (((cVar3 != '\0') && (uVar5 = func_0x000144dc06d0(iVar4,uVar6), uVar5 < 0x240c8400)) &&
           (cVar3 = func_0x000144e3f250(iVar4,iVar2), cVar3 != '\0')) {
          return 1;
        }
      }
      iVar2 = *(int *)(lVar7 + 0xb1ec);
      uVar6 = func_0x000144fd53c0();
      uVar5 = func_0x000144dc06d0(iVar2,uVar6);
      if (uVar5 < 0x240c8400) {
        cVar3 = func_0x000144e3f250(uVar1,iVar2);
        if (cVar3 != '\0') {
          return 1;
        }
        cVar3 = func_0x000144e3f250(uVar1,iVar2 + 1000);
        if (((cVar3 != '\0') && (uVar5 = func_0x000144dc06d0(iVar4,uVar6), uVar5 < 0x240c8400)) &&
           (cVar3 = func_0x000144e3f250(iVar4,iVar2), cVar3 != '\0')) {
          return 1;
        }
      }
    }
  }
  return 0;
}

