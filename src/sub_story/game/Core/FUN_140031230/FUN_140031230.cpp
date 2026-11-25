// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140031230  size: 437 bytes
// Name:    FUN_140031230
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144da1360, FUN_14557de80, FUN_14557f9d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140031230(longlong param_1,uint param_2,int *param_3,undefined4 param_4)

{
  longlong *plVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong unaff_GS_OFFSET;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  
  FUN_14557f9d0(param_2);
  auStack_58 = (undefined1  [16])0x0;
  auStack_78._12_4_ = 0;
  auStack_78._0_12_ = ZEXT812(0);
  auStack_68 = (undefined1  [16])0x0;
  FUN_144da1360(*(undefined8 *)(param_1 + 0x10),(ulonglong)param_2,param_4);
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  uVar3 = _DAT_1487703b8;
  plVar1 = (longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12a8);
  if (_DAT_1487703b8 != 0) {
    lVar6 = *plVar1;
    uVar2 = _DAT_1487703b8 >> 2;
    uVar5 = func_0x000144e3d460(lVar6,_DAT_1487703b8,auStack_78,0x30);
    func_0x000144da8e20(lVar6,uVar3,uVar5);
    *(undefined2 *)(lVar6 + 0x70c0 + (ulonglong)uVar2 * 2) = 0;
  }
  if ((int)*(char *)(param_1 + 700) == param_2) {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    uVar3 = _DAT_1487703ba;
    if (_DAT_1487703ba != 0) {
      lVar6 = *plVar1;
      uVar2 = _DAT_1487703ba >> 2;
      uVar5 = func_0x000144e3d460(lVar6,_DAT_1487703ba,param_1 + 0x2a8,8);
      func_0x000144da8e20(lVar6,uVar3,uVar5);
      *(undefined2 *)(lVar6 + 0x70c0 + (ulonglong)uVar2 * 2) = 0;
    }
  }
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  if (((*(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1298) == 0) &&
      (7 < *param_3 - 0x15U)) &&
     ((uVar4 = *param_3 - 0x30, 0x25 < uVar4 ||
      ((0x3000000001U >> ((ulonglong)uVar4 & 0x3f) & 1) == 0)))) {
    lVar6 = (ulonglong)param_2 * 0x80;
    FUN_14557de80(CONCAT71((int7)((ulonglong)lVar6 >> 8),
                           *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x50 + lVar6)));
  }
  return;
}

