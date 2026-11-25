// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400062d0  size: 275 bytes
// Name:    FUN_1400062d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1455db934, FUN_141f675f0, FUN_1455db8cc
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1400062d0(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  longlong unaff_GS_OFFSET;
  
  if ((*(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               4) < _DAT_1471c1398) && (FUN_1455db8cc(&DAT_1471c1398), _DAT_1471c1398 == -1)) {
    FUN_141f675f0();
    _DAT_1471c1390 = 0x1471c0f10;
    FUN_1455db934(&DAT_1471c1398);
  }
  uVar3 = _DAT_1471c1390;
  _DAT_1471be5c8 = _DAT_1471c1390;
  lVar1 = *param_3;
  iVar2 = -(uint)((~(uint)lVar1 & 0x7f) == 0);
  iVar4 = (int)((ulonglong)lVar1 >> 0x20);
  uVar6 = -iVar4;
  if (param_2 < uVar6) {
    LOCK();
    lVar5 = *param_1;
    if (lVar1 == lVar5) {
      *param_1 = ((ulonglong)param_2 << 0x20) + lVar1;
      lVar5 = lVar1;
    }
    UNLOCK();
  }
  else {
    LOCK();
    lVar5 = *param_1;
    if (lVar1 == lVar5) {
      *param_1 = ((ulonglong)(iVar4 + param_2) << 0x20) + 0x7f +
                 (ulonglong)((uint)lVar1 & 0x7fffff80);
      lVar5 = lVar1;
    }
    UNLOCK();
    param_2 = uVar6;
  }
  if (lVar1 != lVar5) {
    *param_3 = lVar5;
  }
  else {
    func_0x000144daa210(uVar3,CONCAT31((int3)((uint)iVar2 >> 8),(byte)iVar2 | (byte)lVar1 & 0x7f),
                        param_2);
  }
  return lVar1 == lVar5;
}

