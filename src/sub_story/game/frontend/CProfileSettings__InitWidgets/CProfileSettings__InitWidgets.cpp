// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1428bbbb0  size: 105 bytes
// Name:    CProfileSettings::InitWidgets
// Subsystem: core
// Class:   CProfileSettings
//
// Evidence:
//   GTAVSRC: CProfileSettings::InitWidgets  (game/frontend/ProfileSettings.cpp)
//   literal: Profile Settings
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141cd5270, FUN_1410fbf80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/CProfileSettings.h"


undefined2 * CProfileSettings__InitWidgets(undefined2 *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 *in_RAX;
  longlong lVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  uint uVar8;
  int iVar9;
  
  if (param_1 == (undefined2 *)0x0) {
    return in_RAX;
  }
  cVar1 = FUN_141cd5270(0xf84abd96);
  if (cVar1 == '\0') {
    uVar5 = 0;
    do {
      if ((&UNK_14677bf32)[uVar5] == '\0') {
        puVar6 = (undefined2 *)(uVar5 & 0xffffffff);
        goto code_r0x000145a29fb9;
      }
      param_1[uVar5] = (short)(char)(&UNK_14677bf32)[uVar5];
      uVar5 = uVar5 + 1;
    } while (uVar5 != 0x7f);
    puVar6 = (undefined2 *)0x7f;
code_r0x000145a29fb9:
    param_1[(longlong)puVar6] = 0;
    return puVar6;
  }
  lVar4 = FUN_1410fbf80(0xf84abd96,1);
  iVar3 = func_0x000145f407f0(lVar4);
  iVar9 = 0;
  uVar8 = 0;
  puVar6 = param_1;
  do {
    puVar7 = puVar6;
    if (((iVar3 <= (int)uVar8) || (*(char *)(lVar4 + (ulonglong)uVar8) == '\0')) || (0x7e < iVar9))
    break;
    iVar2 = func_0x0001418af250((ulonglong)uVar8 + lVar4,puVar7);
    uVar8 = uVar8 + iVar2;
    iVar9 = iVar9 + 1;
    puVar6 = puVar7 + 1;
  } while (iVar2 != 0);
  *puVar7 = 0;
  return param_1;
}

