// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006fef0  size: 47 bytes
// Name:    FUN_14006fef0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14006fef0(undefined8 param_1,uint *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint *puVar6;
  undefined8 uVar7;
  uint *puVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  ulonglong uVar13;
  
  lVar5 = func_0x000144e681d0();
  if (lVar5 == 0) {
    return;
  }
  puVar6 = (uint *)(lVar5 + 0x340);
  if (puVar6 == param_2) {
    return;
  }
  uVar2 = param_2[1];
  uVar13 = (ulonglong)uVar2;
  uVar3 = *param_2;
  uVar10 = *(uint *)(lVar5 + 0x344);
  if ((uVar13 == 0 || uVar3 != 0) && (uVar10 == 0 || *puVar6 != 0)) {
    *param_2 = *puVar6;
    *puVar6 = uVar3;
    param_2[1] = uVar10;
    *(uint *)(lVar5 + 0x344) = uVar2;
    uVar7 = *(undefined8 *)(param_2 + 2);
    param_2[2] = 0;
    param_2[3] = 0;
    *(undefined8 *)(param_2 + 2) = *(undefined8 *)(lVar5 + 0x348);
    *(undefined8 *)(lVar5 + 0x348) = uVar7;
    return;
  }
  if (uVar10 < uVar2) {
    puVar8 = puVar6;
    puVar12 = param_2;
    uVar11 = uVar10;
    uVar10 = uVar2;
    if (*puVar6 < uVar2) {
      uVar7 = func_0x000144d9c140(4,uVar13 << 2);
      if ((ulonglong)*(uint *)(lVar5 + 0x344) != 0) {
        func_0x000145f40560(uVar7,*(undefined8 *)(lVar5 + 0x348),
                            (ulonglong)*(uint *)(lVar5 + 0x344) << 2);
      }
      if (*(longlong *)(lVar5 + 0x348) != 0) {
        func_0x000144d9c130();
      }
      *(undefined8 *)(lVar5 + 0x348) = uVar7;
      *puVar6 = uVar2;
      uVar10 = param_2[1];
    }
  }
  else {
    if (uVar10 <= uVar2) goto code_r0x00014381933a;
    puVar8 = param_2;
    puVar12 = puVar6;
    uVar11 = uVar2;
    if (uVar3 < uVar10) {
      uVar7 = func_0x000144d9c140(4,(ulonglong)uVar10 * 4);
      if ((ulonglong)param_2[1] != 0) {
        func_0x000145f40560(uVar7,*(undefined8 *)(param_2 + 2),(ulonglong)param_2[1] << 2);
      }
      if (*(longlong *)(param_2 + 2) != 0) {
        func_0x000144d9c130();
      }
      *(undefined8 *)(param_2 + 2) = uVar7;
      *param_2 = uVar10;
      uVar10 = *(uint *)(lVar5 + 0x344);
    }
  }
  lVar1 = (ulonglong)uVar11 * 4;
  func_0x000145f40560(*(longlong *)(puVar8 + 2) + lVar1,lVar1 + *(longlong *)(puVar12 + 2),
                      ((ulonglong)uVar10 - (ulonglong)uVar11) * 4);
  uVar13 = (ulonglong)uVar11;
code_r0x00014381933a:
  if ((int)uVar13 != 0) {
    uVar9 = 0;
    do {
      lVar1 = *(longlong *)(lVar5 + 0x348);
      uVar4 = *(undefined4 *)(*(longlong *)(param_2 + 2) + uVar9 * 4);
      *(undefined4 *)(*(longlong *)(param_2 + 2) + uVar9 * 4) = *(undefined4 *)(lVar1 + uVar9 * 4);
      *(undefined4 *)(lVar1 + uVar9 * 4) = uVar4;
      uVar9 = uVar9 + 1;
    } while (uVar13 != uVar9);
  }
  uVar7 = *(undefined8 *)param_2;
  *(undefined8 *)param_2 = *(undefined8 *)puVar6;
  *(undefined8 *)puVar6 = uVar7;
  return;
}

