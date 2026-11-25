// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14005dbf0  size: 814 bytes
// Name:    FUN_14005dbf0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1455db8cc, FUN_1455db934
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14005dbf0(undefined8 param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong unaff_GS_OFFSET;
  
  if ((*(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               4) < _DAT_147649b08) && (FUN_1455db8cc(&DAT_147649b08), _DAT_147649b08 == -1)) {
    _DAT_147649ac0 = _DAT_14615e5c0;
    _DAT_147649ac8 = _UNK_14615e5c8;
    _DAT_147649ad0 = _UNK_14615e5d0;
    _DAT_147649ad8 = _UNK_14615e5d8;
    _DAT_147649ae0 = _DAT_14615e5e0;
    _DAT_147649ae8 = _UNK_14615e5e8;
    _DAT_147649af0 = _UNK_14615e5f0;
    _DAT_147649af8 = _UNK_14615e5f8;
    _DAT_147649b00 = _DAT_14615baf0;
    FUN_1455db934(&DAT_147649b08);
  }
  iVar1 = func_0x000145104670();
  *param_3 = iVar1;
  iVar2 = func_0x000145104670();
  uVar4 = 1;
  if (iVar1 != iVar2) {
    uVar4 = 2;
    param_3[1] = iVar2;
  }
  iVar1 = func_0x000145104670();
  uVar3 = 0;
  do {
    if (param_3[uVar3] == iVar1) {
      uVar5 = uVar4;
      if ((int)uVar4 != (int)uVar3) goto LAB_14005dcbd;
      break;
    }
    uVar3 = uVar3 + 1;
  } while (uVar4 != uVar3);
  uVar5 = (ulonglong)((int)uVar4 + 1);
  param_3[uVar4] = iVar1;
LAB_14005dcbd:
  iVar1 = func_0x000145104670();
  uVar4 = 0;
  do {
    if (param_3[uVar4] == iVar1) {
      uVar3 = uVar5;
      if ((int)uVar5 != (int)uVar4) goto LAB_14005dceb;
      break;
    }
    uVar4 = uVar4 + 1;
  } while (uVar5 != uVar4);
  uVar3 = (ulonglong)((int)uVar5 + 1);
  param_3[uVar5] = iVar1;
LAB_14005dceb:
  iVar1 = func_0x000145104670();
  uVar4 = 0;
  do {
    if (param_3[uVar4] == iVar1) {
      uVar5 = uVar3;
      if ((int)uVar3 != (int)uVar4) goto LAB_14005dd19;
      break;
    }
    uVar4 = uVar4 + 1;
  } while (uVar3 != uVar4);
  uVar5 = (ulonglong)((int)uVar3 + 1);
  param_3[uVar3] = iVar1;
LAB_14005dd19:
  iVar1 = func_0x000145104670();
  uVar4 = 0;
  do {
    if (param_3[uVar4] == iVar1) {
      uVar3 = uVar5;
      if ((int)uVar5 != (int)uVar4) goto LAB_14005dd47;
      break;
    }
    uVar4 = uVar4 + 1;
  } while (uVar5 != uVar4);
  uVar3 = (ulonglong)((int)uVar5 + 1);
  param_3[uVar5] = iVar1;
LAB_14005dd47:
  iVar1 = func_0x000145104670();
  uVar4 = 0;
  do {
    if (param_3[uVar4] == iVar1) {
      uVar5 = uVar3;
      if ((int)uVar3 != (int)uVar4) goto LAB_14005dd75;
      break;
    }
    uVar4 = uVar4 + 1;
  } while (uVar3 != uVar4);
  uVar5 = (ulonglong)((int)uVar3 + 1);
  param_3[uVar3] = iVar1;
LAB_14005dd75:
  iVar1 = func_0x000145104670();
  uVar4 = 0;
  do {
    if (param_3[uVar4] == iVar1) {
      uVar3 = uVar5;
      if ((int)uVar5 != (int)uVar4) goto LAB_14005dda3;
      break;
    }
    uVar4 = uVar4 + 1;
  } while (uVar5 != uVar4);
  uVar3 = (ulonglong)((int)uVar5 + 1);
  param_3[uVar5] = iVar1;
LAB_14005dda3:
  iVar1 = func_0x000145104670();
  uVar4 = 0;
  do {
    if (param_3[uVar4] == iVar1) {
      if ((int)uVar3 != (int)uVar4) {
        return uVar3;
      }
      break;
    }
    uVar4 = uVar4 + 1;
  } while (uVar3 != uVar4);
  param_3[uVar3] = iVar1;
  return (ulonglong)((int)uVar3 + 1);
}

