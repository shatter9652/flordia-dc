// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1444e8ec0  size: 431 bytes
// Name:    phBoundGeometry::LoadGeomStats_v110
// Subsystem: physics
// Class:   phBoundGeometry
//
// Evidence:
//   GTAVSRC: phBoundGeometry::LoadGeomStats_v110  (rage/base/src/phbound/boundgeom.cpp)
//   literal: materialcolors:
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145b4dbc0, FUN_14526e340, FUN_141a5f680, FUN_145224aa0, FUN_14060d1c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/phBoundGeometry.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phBoundGeometry__LoadGeomStats_v110
               (longlong *param_1,longlong *param_2,ulonglong param_3,undefined4 param_4,
               ulonglong param_5)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong lStack_e8;
  longlong lStack_e0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  longlong alStack_98 [2];
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  longlong alStack_58 [2];
  undefined1 auStack_48 [16];
  
  lStack_e8 = *param_2;
  lStack_e0 = param_2[1];
  if ((lStack_e8 == 0) || (lVar1 = FUN_14526e340(&lStack_e8), lVar1 == 0)) {
    lStack_e8 = *param_1;
    lStack_e0 = param_1[1];
    if (lStack_e8 == 0) {
      return;
    }
    lVar1 = FUN_14526e340(&lStack_e8);
    if (lVar1 == 0) {
      return;
    }
    auStack_68._0_12_ = ZEXT812(0);
    auStack_68._12_4_ = 0;
    puVar5 = auStack_68;
    uStack_a8 = *(undefined8 *)(lVar1 + 0x70);
    uStack_a0 = *(undefined8 *)(lVar1 + 0x78);
    func_0x000144dc3790(&uStack_a8,&fStack_88);
    auStack_78._0_4_ = fStack_88 + *(float *)(lVar1 + 0x50);
    auStack_78._4_4_ = fStack_84 + *(float *)(lVar1 + 0x54);
    auStack_78._8_4_ = fStack_80 + *(float *)(lVar1 + 0x58);
    auStack_78._12_4_ = fStack_7c + *(float *)(lVar1 + 0x5c);
    FUN_14060d1c0(&lStack_e8);
    lVar1 = FUN_145b4dbc0(&lStack_e8,param_5 | 0x400,_DAT_145fc6f48,0xffffffff,param_4,puVar5,
                          param_3);
    if (lVar1 == 0) {
      return;
    }
    lVar3 = *param_1;
    lVar4 = param_1[1];
    plVar2 = alStack_98;
  }
  else {
    auStack_48._0_12_ = ZEXT812(0);
    auStack_48._12_4_ = 0;
    puVar5 = auStack_48;
    FUN_145224aa0(&lStack_e8,lVar1);
    lVar1 = FUN_145b4dbc0(&lStack_e8,param_5 | 0x400,_DAT_145fc6f48,0xffffffff,param_4,puVar5,
                          param_3);
    if (lVar1 == 0) {
      return;
    }
    lVar3 = *param_1;
    lVar4 = param_1[1];
    plVar2 = alStack_58;
  }
  *plVar2 = lVar3;
  plVar2[1] = lVar4;
  FUN_141a5f680(plVar2,lVar1,0x37,0,0,(ulonglong)puVar5 & 0xffffffffffffff00,
                param_3 & 0xffffffffffffff00,0,0);
  return;
}

