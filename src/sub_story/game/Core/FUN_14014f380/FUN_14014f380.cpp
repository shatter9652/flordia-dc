// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014f380  size: 878 bytes
// Name:    FUN_14014f380
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1420ae950, FUN_1451d89b0, FUN_140163e40, FUN_145269d30, FUN_14509c650, FUN_1435f2cf0, FUN_14520ee90, FUN_1402e5b80, FUN_140b09af0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14014f380(longlong param_1,uint param_2,uint param_3)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 uStack_61;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  uint uVar8;
  
  uVar11 = (ulonglong)param_2;
  if (0 < (int)param_2 && (param_3 & 0x40) != 0) {
    uVar10 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + uVar10 * 8);
      if ((lVar3 != 0) && (*(char *)(lVar3 + 0x30) == '\x03')) {
        uVar9 = *(undefined4 *)(lVar3 + 0x9c);
        cVar2 = func_0x000144da28f0(uVar9);
        if (cVar2 != '\0') {
          puStack_60 = &uStack_61;
          pcStack_58 = FUN_14265e7e0;
          puStack_50 = &SUB_140004380;
          puStack_48 = &SUB_140004380;
          FUN_1402e5b80(4,&puStack_60);
          uVar9 = *(undefined4 *)(lVar3 + 0x9c);
        }
        lVar3 = func_0x000144e63d10(uVar9);
        if (lVar3 != 0) {
          func_0x000143cae490(lVar3);
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar11 != uVar10);
  }
  if ((char)((param_3 & 2) >> 1) == '\0' && 0 < (int)param_2) {
    uVar10 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + uVar10 * 8);
      if ((lVar3 != 0) && ((0x1cU >> (*(uint *)(lVar3 + 0x30) & 0x1f) & 1) != 0)) {
        lVar3 = func_0x000144e29d60(*(undefined4 *)(lVar3 + 0x9c));
        if (lVar3 != 0) {
          *(undefined8 *)(lVar3 + 0x60) = 0;
          *(undefined4 *)(lVar3 + 0x68) = 0xffffffff;
          *(ulonglong *)(lVar3 + 0x78) = *(ulonglong *)(lVar3 + 0x78) | 0xffff00;
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar11 != uVar10);
  }
  if ((char)((param_3 & 0x10) >> 4) == '\0' && 0 < (int)param_2) {
    uVar10 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + uVar10 * 8);
      if ((lVar3 != 0) && ((0x1cU >> (*(uint *)(lVar3 + 0x30) & 0x1f) & 1) != 0)) {
        FUN_145269d30();
      }
      uVar10 = uVar10 + 1;
    } while (uVar11 != uVar10);
  }
  if ((char)((param_3 & 4) >> 2) == '\0' && 0 < (int)param_2) {
    uVar10 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + uVar10 * 8);
      if (lVar3 != 0) {
        lVar3 = func_0x000144fff0e0(*(undefined4 *)(lVar3 + 0x9c));
        if (lVar3 != 0) {
          func_0x00014015a3e0(lVar3);
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar11 != uVar10);
  }
  if (0 < (int)param_2 && (param_3 & 1) == 0) {
    uVar10 = 0;
    do {
      if (*(longlong *)(param_1 + uVar10 * 8) != 0) {
        FUN_1451d89b0();
      }
      uVar10 = uVar10 + 1;
    } while (uVar11 != uVar10);
  }
  if ((char)((param_3 & 8) >> 3) == '\0' && 0 < (int)param_2) {
    uVar10 = 0;
    lVar3 = _DAT_1476d57c0;
    do {
      lVar5 = *(longlong *)(param_1 + uVar10 * 8);
      if ((lVar5 != 0) && (lVar3 != lVar5)) {
        lVar4 = func_0x000144eb0080(*(undefined4 *)(lVar5 + 0x9c));
        if (lVar4 != 0) {
          iVar6 = *(int *)(lVar4 + 0x34) + *(int *)(lVar4 + 0x24) + *(int *)(lVar4 + 0x44);
          uVar8 = (uint)(*(longlong *)(lVar4 + 0x58) != 0);
          iVar7 = uVar8 + iVar6;
          if (iVar7 != 0 && SCARRY4(uVar8,iVar6) == iVar7 < 0) {
            FUN_140b09af0(_DAT_14ab5d000,lVar5,0,0);
            lVar3 = _DAT_1476d57c0;
          }
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar11 != uVar10);
  }
  if (0 < (int)param_2) {
    uVar10 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + uVar10 * 8);
      if ((lVar3 != 0) && (*(char *)(lVar3 + 0x30) == '\x04')) {
        lVar3 = func_0x000144fbbe70(*(undefined4 *)(lVar3 + 0x9c));
        if (lVar3 != 0) {
          func_0x00014120a250(lVar3);
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar11 != uVar10);
    uVar10 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + uVar10 * 8);
      if ((lVar3 != 0) &&
         ((*(char *)(lVar3 + 0x30) == '\x04' || (*(char *)(lVar3 + 0x30) == '\x01')))) {
        lVar3 = func_0x00014509fd30(*(undefined4 *)(lVar3 + 0x9c));
        if (lVar3 != 0) {
          FUN_140163e40(lVar3);
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar11 != uVar10);
    uVar10 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + uVar10 * 8);
      if (lVar3 != 0) {
        lVar5 = func_0x000144e8f430(*(longlong *)(lVar3 + 0x20) + 0x10,_DAT_14999ed94);
        if (lVar5 != 0) {
          FUN_1435f2cf0(lVar3);
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar11 != uVar10);
    uVar10 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + uVar10 * 8);
      if ((lVar3 != 0) && (*(char *)(lVar3 + 0x30) == '\x04')) {
        FUN_14520ee90();
      }
      uVar10 = uVar10 + 1;
    } while (uVar11 != uVar10);
    uVar10 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + uVar10 * 8);
      if (lVar3 != 0) {
        lVar3 = func_0x000145162130(*(undefined4 *)(lVar3 + 0x9c));
        uVar1 = _DAT_14a02dfc0;
        _DAT_14a02dfc0 = uVar1;
        if (lVar3 != 0) {
          _DAT_14a02dfc0 = 0;
          FUN_1420ae950(lVar3);
          _DAT_14a02dfc0 = uVar1;
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar11 != uVar10);
    if ((param_3 & 0x20) == 0) {
      uVar10 = 0;
      do {
        lVar3 = *(longlong *)(param_1 + uVar10 * 8);
        if ((lVar3 != 0) &&
           ((*(char *)(lVar3 + 0x30) == '\x04' || (*(char *)(lVar3 + 0x30) == '\x02')))) {
          FUN_14509c650(1,lVar3,1,1);
        }
        uVar10 = uVar10 + 1;
      } while (uVar11 != uVar10);
    }
  }
  return;
}

