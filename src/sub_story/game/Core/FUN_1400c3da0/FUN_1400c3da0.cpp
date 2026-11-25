// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c3da0  size: 44 bytes
// Name:    FUN_1400c3da0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400c3dd0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400c3da0(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  float fVar15;
  undefined1 auVar16 [64];
  undefined *apuStack_b0 [4];
  undefined *puStack_90;
  undefined1 *puStack_88;
  undefined4 uStack_80;
  undefined1 *puStack_78;
  undefined4 uStack_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  
  plVar1 = *(longlong **)(param_1 + 8);
  cVar3 = FUN_1400c3dd0(*(undefined1 *)(param_1 + 0x22e));
  apuStack_b0[0] = &UNK_144f5d660;
  (**(code **)(*plVar1 + 0x38))(plVar1);
  puStack_90 = &UNK_144f5d677;
  lVar6 = FUN_145647140();
  lVar6 = -lVar6;
  puVar9 = (undefined1 *)((longlong)&puStack_88 + lVar6);
  puVar8 = (undefined1 *)((longlong)&puStack_88 + lVar6);
  pcVar2 = *(code **)(*plVar1 + 0x38);
  *(undefined **)((longlong)apuStack_b0 + lVar6) = &UNK_144f5d68a;
  (*pcVar2)(plVar1);
  *(undefined **)((longlong)&puStack_90 + lVar6) = &UNK_144f5d6a1;
  lVar7 = FUN_145647140();
  lVar7 = -lVar7;
  puVar11 = (undefined1 *)((longlong)&puStack_88 + lVar7 + lVar6);
  puVar10 = (undefined1 *)((longlong)&puStack_88 + lVar7 + lVar6);
  if (cVar3 == '\0') {
    pcVar2 = *(code **)(*plVar1 + 0x38);
    *(undefined **)((longlong)apuStack_b0 + lVar7 + lVar6) = &UNK_144f5d858;
    uStack_80 = (*pcVar2)(plVar1);
    pcVar2 = *(code **)(*plVar1 + 0xa8);
    puStack_88 = (undefined1 *)((longlong)&puStack_88 + lVar6);
    *(undefined **)((longlong)apuStack_b0 + lVar7 + lVar6) = &UNK_144f5d876;
    (*pcVar2)(plVar1);
  }
  else {
    pcVar2 = *(code **)(*plVar1 + 0x38);
    if (pcVar2 == (code *)&UNK_144f5d990) {
      uVar5 = (uint)*(byte *)((longlong)plVar1 + 0x12);
    }
    else {
      *(undefined **)((longlong)apuStack_b0 + lVar7 + lVar6) = &UNK_144f5d97e;
      uVar5 = (*pcVar2)(plVar1);
    }
    puVar8 = (undefined1 *)((longlong)&puStack_88 + lVar6);
    puVar10 = (undefined1 *)((longlong)&puStack_88 + lVar7 + lVar6);
    if (uVar5 != 0) {
      pcVar2 = *(code **)(*plVar1 + 0x98);
      fVar15 = _DAT_145fc6ed8;
      if (pcVar2 == (code *)&UNK_144784620) {
        if ((*(byte *)(plVar1 + 0x1a) & 1) != 0) {
          fVar15 = 0.0;
        }
      }
      else if (pcVar2 == FUN_1400c4170) {
        *(undefined **)((longlong)apuStack_b0 + lVar7 + lVar6) = &UNK_144f5d750;
        fVar15 = (float)FUN_1400c4170(plVar1,0);
      }
      else if (pcVar2 == (code *)&UNK_144771b70) {
        if ((*(byte *)(plVar1 + 0x1a) & 3) != 2) {
          fVar15 = 0.0;
        }
        if ((*(byte *)(plVar1 + 0x1a) & 3) == 0) {
          fVar15 = _DAT_145fc6ed8 - *(float *)(plVar1 + 0x1c);
        }
      }
      else {
        *(undefined **)((longlong)apuStack_b0 + lVar7 + lVar6) = &UNK_144f5d930;
        fVar15 = (float)(*pcVar2)(plVar1,0);
      }
      auVar16 = ZEXT464((uint)_DAT_145fc6ed8);
      uVar13 = 1;
      *(float *)((longlong)&puStack_88 + lVar6) = fVar15;
      while( true ) {
        pcVar2 = *(code **)(*plVar1 + 0x38);
        if (pcVar2 == (code *)&UNK_144f5d990) {
          uVar5 = (uint)*(byte *)((longlong)plVar1 + 0x12);
          puVar8 = puVar9;
          puVar10 = puVar11;
        }
        else {
          puStack_68 = puVar9;
          puStack_60 = puVar11;
          *(undefined **)((longlong)apuStack_b0 + lVar7 + lVar6) = &UNK_144f5d955;
          uVar5 = (*pcVar2)(plVar1);
          puVar8 = puStack_68;
          puVar10 = puStack_60;
        }
        uVar12 = (uint)uVar13;
        if (uVar5 <= uVar12) break;
        pcVar2 = *(code **)(*plVar1 + 0x98);
        uVar14 = auVar16._0_4_;
        puVar9 = puVar8;
        puVar11 = puVar10;
        if (pcVar2 == (code *)&UNK_144784620) {
          if ((*(byte *)((longlong)plVar1 + (longlong)(int)uVar12 + 0xd0) & 1) != 0) {
            uVar14 = 0;
          }
        }
        else if (pcVar2 == FUN_1400c4170) {
          puStack_68 = puVar8;
          puStack_60 = puVar10;
          *(undefined **)((longlong)apuStack_b0 + lVar7 + lVar6) = &UNK_144f5d805;
          uVar14 = FUN_1400c4170(plVar1,uVar13 & 0xffffffff);
          puVar9 = puStack_68;
          puVar11 = puStack_60;
        }
        else if (pcVar2 == (code *)&UNK_144771b70) {
          bVar4 = *(byte *)((longlong)plVar1 + (longlong)(int)uVar12 + 0xd0) & 3;
          if (bVar4 != 2) {
            uVar14 = 0;
          }
          if (bVar4 == 0) {
            uVar14 = (undefined4)plVar1[0x1c];
          }
        }
        else {
          puStack_68 = puVar8;
          puStack_60 = puVar10;
          *(undefined **)((longlong)apuStack_b0 + lVar7 + lVar6) = &UNK_144f5d920;
          uVar14 = (*pcVar2)(plVar1,uVar13 & 0xffffffff);
          puVar9 = puStack_68;
          puVar11 = puStack_60;
        }
        *(undefined4 *)(puVar9 + uVar13 * 4) = uVar14;
        uVar13 = uVar13 + 1;
      }
    }
  }
  pcVar2 = *(code **)(*plVar1 + 0x38);
  *(undefined **)((longlong)apuStack_b0 + lVar7 + lVar6) = &UNK_144f5d887;
  uStack_70 = (*pcVar2)(plVar1);
  pcVar2 = *(code **)(*plVar1 + 0xa8);
  puStack_78 = puVar10;
  *(undefined **)((longlong)apuStack_b0 + lVar7 + lVar6) = &UNK_144f5d8a5;
  (*pcVar2)(plVar1);
  pcVar2 = *(code **)(*plVar1 + 0x38);
  *(undefined **)((longlong)apuStack_b0 + lVar7 + lVar6) = &UNK_144f5d8b6;
  uVar14 = (*pcVar2)(plVar1);
  *(undefined **)((longlong)apuStack_b0 + lVar7 + lVar6) = &UNK_144f5d8c4;
  FUN_1400c41f0(param_1,puVar8,uVar14);
  pcVar2 = *(code **)(*plVar1 + 0x38);
  *(undefined **)((longlong)apuStack_b0 + lVar7 + lVar6) = &UNK_144f5d8d5;
  uVar14 = (*pcVar2)(plVar1);
  *(undefined **)((longlong)apuStack_b0 + lVar7 + lVar6) = &UNK_144f5d8e3;
  FUN_1400c4310(param_1,puVar10,uVar14);
  return;
}

