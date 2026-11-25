// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140006180  size: 321 bytes
// Name:    FUN_140006180
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e7f340, FUN_1455db934, FUN_141f675f0, FUN_1455db8cc
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140006180(ulonglong *param_1,uint param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong unaff_GS_OFFSET;
  
  if ((*(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               4) < _DAT_1471c1398) && (FUN_1455db8cc(&DAT_1471c1398), _DAT_1471c1398 == -1)) {
    FUN_141f675f0();
    _DAT_1471c1390 = 0x1471c0f10;
    FUN_1455db934(&DAT_1471c1398);
  }
  uVar2 = _DAT_1471c1390;
  _DAT_1471be5c8 = _DAT_1471c1390;
  uVar1 = *param_3;
  if ((~(uint)uVar1 & 0x7f) == 0) {
    uVar4 = func_0x0001455aa340(_DAT_1471c1390);
    uVar7 = (ulonglong)uVar4;
    iVar6 = (int)(uVar1 >> 0x20);
    LOCK();
    uVar5 = *param_1;
    if (uVar1 == uVar5) {
      *param_1 = (ulonglong)((byte)uVar4 & 0x7f) |
                 CONCAT44(iVar6 - param_2,(uint)uVar1) & 0xffffffff7fffff80;
      uVar5 = uVar1;
    }
    UNLOCK();
    if (uVar1 == uVar5) {
      param_2 = param_2 - iVar6;
LAB_140006251:
      FUN_144e7f340(uVar2,uVar7,param_2);
      return 1;
    }
  }
  else {
    uVar7 = uVar1 & 0xffffff7f;
    cVar3 = func_0x0001455aa3b0(_DAT_1471c1390,uVar7);
    if (cVar3 == '\0') {
      *param_3 = *param_1;
      return 0;
    }
    LOCK();
    uVar5 = *param_1;
    if (uVar1 == uVar5) {
      *param_1 = uVar1 - ((ulonglong)param_2 << 0x20);
      uVar5 = uVar1;
    }
    UNLOCK();
    if (uVar1 == uVar5) goto LAB_140006251;
  }
  func_0x000144e7f370(uVar2,uVar7);
  *param_3 = uVar5;
  return 0;
}

