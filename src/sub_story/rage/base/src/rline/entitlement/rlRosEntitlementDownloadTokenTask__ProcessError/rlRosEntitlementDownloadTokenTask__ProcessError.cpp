// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 143da5aa0  size: 1243 bytes
// Name:    rlRosEntitlementDownloadTokenTask::ProcessError
// Subsystem: core
// Class:   rlRosEntitlementDownloadTokenTask
//
// Evidence:
//   GTAVSRC: rlRosEntitlementDownloadTokenTask::ProcessError  (rage/base/src/rline/entitlement/rlrosentitlementtask.cpp)
//   literal: AuthenticationFailed
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_143da5f80, FUN_141d2e500, FUN_145895b30, FUN_1402675a0, FUN_1457d1ec0, FUN_140268ef0, FUN_14512a480, FUN_140004b40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/rlRosEntitlementDownloadTokenTask.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rlRosEntitlementDownloadTokenTask__ProcessError(int param_1,longlong param_2,uint param_3)

{
  undefined1 *puVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong lVar15;
  bool bVar16;
  bool bVar17;
  int iStack_54;
  int *piStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  cVar3 = FUN_143da5f80(param_2,&UNK_1467848ff,&UNK_14677aa4a);
  iStack_54 = param_1;
  if ((param_1 < 0) || (cVar3 == '\0')) {
    cVar3 = FUN_143da5f80(param_2,&UNK_1467848ff,&UNK_14677f5a8);
    if (cVar3 == '\0') {
      cVar3 = FUN_143da5f80(param_2,&UNK_1467848ff,&UNK_14677f772);
      if (cVar3 == '\0') {
        cVar3 = FUN_143da5f80(param_2,&UNK_14677df75,0);
        if (cVar3 == '\0') {
          return;
        }
        if (**(char **)(param_2 + 0x10) == '\0') {
          return;
        }
        *(uint *)((ulonglong)param_3 * 0x44 + 0x1498512a0) = param_3;
        puVar1 = (undefined1 *)((ulonglong)param_3 * 0x44 + 0x149851260);
        lVar15 = 0;
        puVar9 = puVar1;
        do {
          if (*(longlong *)(param_2 + 0x10) == 0) goto code_r0x000144dac927;
          cVar3 = *(char *)(*(longlong *)(param_2 + 0x10) + lVar15);
          if (cVar3 == '\0') break;
          puVar1[lVar15] = cVar3;
          puVar9 = puVar9 + 1;
          lVar15 = lVar15 + 1;
        } while (lVar15 != 0x3f);
        puVar9 = puVar1 + lVar15;
code_r0x000144dac927:
        *puVar9 = 0;
        return;
      }
      puStack_48 = &UNK_143da6050;
    }
    else {
      puStack_48 = &UNK_143da6040;
    }
    piStack_50 = &iStack_54;
    puStack_40 = &UNK_1413b41f0;
    puStack_38 = &SUB_140004380;
    FUN_141d2e500(0);
    return;
  }
  piStack_50 = &iStack_54;
  puStack_48 = &UNK_143da6030;
  puStack_40 = &UNK_1413b41f0;
  puStack_38 = &SUB_140004380;
  FUN_141d2e500(0,&piStack_50);
  piStack_50 = (int *)&UNK_14654d558;
  puStack_48 = (undefined *)CONCAT44(puStack_48._4_4_,param_1);
  if (DAT_14984dc10 == '\x02') {
    uVar8 = 0x146dd5b58;
    uVar10 = 5;
    uVar13 = 0x16a;
    uVar14 = 0xc95574d4;
LAB_143da5f68:
    FUN_1457d1ec0(uVar8,uVar10,uVar13,uVar14);
    return;
  }
  bVar4 = FUN_14512a480(0);
  bVar5 = FUN_14512a480(1);
  bVar16 = _DAT_14984dc28 != 0;
  bVar17 = _DAT_14984dc48 == 0;
  if ((bVar16 & bVar4) == 1) {
    FUN_140004b40(0x14984dbe8);
    FUN_140268ef0(0x14984dc18,&piStack_50);
    func_0x000144d9dab0(0x14984dbe8);
  }
  if ((_DAT_14984dc48 != 0 & bVar5) == 1) {
    FUN_140004b40(0x14984dbe8);
    FUN_140268ef0(0x14984dc38,&piStack_50);
    func_0x000144d9dab0(0x14984dbe8);
  }
  if (_DAT_14984dc14 == -1) {
    uVar8 = 0x146cb4828;
    uVar10 = 1;
    uVar13 = 400;
    uVar14 = 0xeb46f5a0;
    goto LAB_143da5f68;
  }
  if (bVar4 == 0 && bVar16) {
    if ((_DAT_14984dc08 == 0) ||
       (puVar6 = (undefined8 *)func_0x000140104070(_DAT_14984dc08,0x10), puVar6 == (undefined8 *)0x0
       )) {
      puVar6 = (undefined8 *)func_0x000144f97130(0x10);
      if (puVar6 == (undefined8 *)0x0) goto LAB_143da5ee7;
      uVar11 = 0;
    }
    else {
      uVar11 = 1;
    }
    *puVar6 = &UNK_14654d558;
    *(undefined4 *)(puVar6 + 1) = puStack_48._0_4_;
    FUN_140004b40(0x149a434f0);
    iVar2 = _DAT_14984dc14;
    if (_DAT_149a43524 == _DAT_149a43520) {
      uVar12 = 1;
      if (1 < _DAT_149a43524) {
        uVar12 = _DAT_149a43524 >> 1;
      }
      FUN_145895b30(&DAT_149a43520,uVar12 + _DAT_149a43524);
    }
    lVar15 = _DAT_149a43530;
    lVar7 = (ulonglong)_DAT_149a4352c * 0x10;
    *(undefined8 **)(_DAT_149a43530 + lVar7) = puVar6;
    *(int *)(lVar15 + 8 + lVar7) = iVar2;
    *(undefined1 *)(lVar15 + 0xc + lVar7) = uVar11;
    uVar12 = 0;
    if (_DAT_149a43520 <= _DAT_149a4352c + 1) {
      uVar12 = _DAT_149a43520;
    }
    _DAT_149a4352c = (_DAT_149a4352c + 1) - uVar12;
    _DAT_149a43524 = _DAT_149a43524 + 1;
    func_0x000144d9dab0(0x149a434f0);
  }
  if (bVar5 != 0 || bVar17) {
    return;
  }
  if ((_DAT_14984dc08 == 0) ||
     (puVar6 = (undefined8 *)func_0x000140104070(_DAT_14984dc08,0x10), puVar6 == (undefined8 *)0x0))
  {
    puVar6 = (undefined8 *)func_0x000144f97130(0x10);
    if (puVar6 == (undefined8 *)0x0) {
LAB_143da5ee7:
      FUN_1402675a0(0x146dd5b58,4);
      return;
    }
    uVar11 = 0;
  }
  else {
    uVar11 = 1;
  }
  *puVar6 = &UNK_14654d558;
  *(undefined4 *)(puVar6 + 1) = puStack_48._0_4_;
  FUN_140004b40(0x149a434f0);
  iVar2 = _DAT_14984dc14;
  if (_DAT_149a4353c == _DAT_149a43538) {
    uVar12 = 1;
    if (1 < _DAT_149a4353c) {
      uVar12 = _DAT_149a4353c >> 1;
    }
    FUN_145895b30(&DAT_149a43538,uVar12 + _DAT_149a4353c);
  }
  lVar15 = _DAT_149a43548;
  lVar7 = (ulonglong)_DAT_149a43544 * 0x10;
  *(undefined8 **)(_DAT_149a43548 + lVar7) = puVar6;
  *(int *)(lVar15 + 8 + lVar7) = iVar2;
  *(undefined1 *)(lVar15 + 0xc + lVar7) = uVar11;
  uVar12 = 0;
  if (_DAT_149a43538 <= _DAT_149a43544 + 1) {
    uVar12 = _DAT_149a43538;
  }
  _DAT_149a43544 = (_DAT_149a43544 + 1) - uVar12;
  _DAT_149a4353c = _DAT_149a4353c + 1;
  func_0x000144d9dab0(0x149a434f0);
  return;
}

