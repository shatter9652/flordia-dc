// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14003e060  size: 404 bytes
// Name:    FUN_14003e060
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1440c4fc0, FUN_1440bb310, FUN_140739650
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14003e060(longlong param_1,undefined8 param_2,uint *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_1440bb310();
  if (iVar1 == 1) {
    uVar3 = *param_3;
    iVar1 = (param_4 & 0xff) + 1;
    if ((uVar3 & 1) != 0) {
      iVar2 = FUN_1440c4fc0(param_1,param_2,0);
      if (iVar2 == 1) {
        *(int *)(param_1 + 0xd38) = iVar1;
        func_0x0001407394d0(*(undefined8 *)(*(longlong *)(_DAT_14ab760a0 + 0x440) + 0xe0),param_1);
      }
      else {
        FUN_140739650(param_1,0);
      }
      uVar3 = *param_3;
    }
    if ((uVar3 & 2) != 0) {
      iVar2 = FUN_1440c4fc0(param_1,param_2,1);
      if (iVar2 == 1) {
        *(int *)(param_1 + 0xd3c) = iVar1;
        func_0x0001407394d0(*(undefined8 *)(*(longlong *)(_DAT_14ab760a0 + 0x440) + 0xe0),param_1);
      }
      else {
        FUN_140739650(param_1,1);
      }
      uVar3 = *param_3;
    }
    if ((uVar3 & 4) != 0) {
      iVar2 = FUN_1440c4fc0(param_1,param_2,2);
      if (iVar2 == 1) {
        *(int *)(param_1 + 0xd40) = iVar1;
        func_0x0001407394d0(*(undefined8 *)(*(longlong *)(_DAT_14ab760a0 + 0x440) + 0xe0),param_1);
      }
      else {
        FUN_140739650(param_1,2);
      }
      uVar3 = *param_3;
    }
    if ((uVar3 & 8) != 0) {
      iVar2 = FUN_1440c4fc0(param_1,param_2,3);
      if (iVar2 == 1) {
        *(int *)(param_1 + 0xd44) = iVar1;
        func_0x0001407394d0(*(undefined8 *)(*(longlong *)(_DAT_14ab760a0 + 0x440) + 0xe0),param_1);
      }
      else {
        FUN_140739650(param_1,3);
      }
    }
  }
  return;
}

