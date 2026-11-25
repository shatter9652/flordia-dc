// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b8af0  size: 1166 bytes
// Name:    FUN_1401b8af0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144debee0, FUN_1440ada40, FUN_14436de60, FUN_1450760b0, FUN_145075dc0, FUN_145076410, FUN_145075d60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401b8af0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  char cVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  longlong *plStack_a8;
  uint uStack_9c;
  longlong **pplStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  longlong **pplStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_50;
  
  lVar4 = *param_1;
  bVar2 = *(byte *)(lVar4 + 4);
  if (bVar2 == 6) {
    func_0x000144debac0(&plStack_a8);
    FUN_145075d60(plStack_a8,param_2);
  }
  else if (bVar2 < 8) {
    if (bVar2 == 1) {
      func_0x000144debac0(&plStack_a8);
      FUN_144debee0(plStack_a8,param_2);
    }
  }
  else if (bVar2 == 8) {
    func_0x000144debac0(&plStack_a8);
    FUN_145075dc0(plStack_a8,param_2);
  }
  else if (bVar2 == 0xb) {
    puVar7 = (uint *)(*(longlong *)(lVar4 + 0x18) + 0x18 + lVar4);
    if (*(longlong *)(lVar4 + 0x18) == 1) {
      puVar7 = (uint *)0x0;
    }
    cVar5 = func_0x000144da4370(*(undefined1 *)(_DAT_14ab7ef10 + 0x233));
    puVar1 = (uint *)(*(longlong *)(puVar7 + 8) + 0x20 + (longlong)puVar7);
    puVar6 = (uint *)0x0;
    if (*(longlong *)(puVar7 + 8) != 1) {
      puVar6 = puVar1;
    }
    cVar3 = (char)puVar6[1];
    plStack_a8 = param_1;
    if (cVar5 == '\0') {
      if (cVar3 == '\x03') {
        puStack_50 = &UNK_1440adf37;
        FUN_1440ae2f0(puVar7,param_2,param_3);
        return;
      }
      if (cVar3 == '\x01') {
        if (param_1[1] == 0) {
          puStack_50 = &UNK_1440ada07;
          FUN_1440ada40(puVar7,param_2,param_3);
          return;
        }
        pplStack_98 = &plStack_a8;
        pcStack_90 = FUN_144390d40;
        puStack_88 = &UNK_1401167b0;
        puStack_80 = &SUB_140004380;
        FUN_1440ada40(puVar7,param_2,param_3);
      }
      else if (cVar3 == '\0') {
        FUN_144dec4f0(puVar7,param_2,param_3,&stack0xffffffffffffffff);
        return;
      }
    }
    else {
      fVar13 = (float)param_3;
      if (cVar3 == '\x03') {
        puVar6 = (uint *)((longlong)param_1 + 0x14);
        if ((((*(int *)((longlong)param_1 + 0x14) == -1) && (0.0 <= fVar13)) &&
            (fVar13 <= _DAT_145fc6ed8)) && (*puVar1 != 0)) {
          uVar11 = 0;
          *puVar6 = *puVar1 - 1;
          uVar10 = *puVar1;
          uVar8 = uVar10;
          if (uVar10 != 0) {
            do {
              uVar9 = uVar8 - uVar11 >> 1;
              uVar12 = uVar9 + uVar11;
              fVar13 = (float)FUN_145076410(puVar7,uVar12);
              if (fVar13 < (float)param_3) {
                uVar11 = uVar9 + 1 + uVar11;
                uVar12 = uVar8;
              }
              uVar8 = uVar12;
            } while (uVar11 < uVar12);
          }
          if (uVar11 < uVar10) {
            *puVar6 = uVar11;
          }
        }
        puStack_60 = &UNK_145075f5c;
        FUN_1450768d0(puVar7,param_2,param_3,puVar6);
        return;
      }
      if (cVar3 == '\x01') {
        puVar6 = (uint *)((longlong)param_1 + 0x14);
        if (((*(int *)((longlong)param_1 + 0x14) == -1) && (0.0 <= fVar13)) &&
           ((fVar13 <= _DAT_145fc6ed8 && (*puVar1 != 0)))) {
          uVar11 = 0;
          *puVar6 = *puVar1 - 1;
          uVar10 = *puVar1;
          uStack_9c = uVar10;
          if (uVar10 != 0) {
            do {
              uVar12 = uVar10 - uVar11 >> 1;
              uVar8 = uVar12 + uVar11;
              fVar13 = (float)FUN_145076410(puVar7,uVar8);
              if (fVar13 < (float)param_3) {
                uVar11 = uVar12 + 1 + uVar11;
                uVar8 = uVar10;
              }
              uVar10 = uVar8;
            } while (uVar11 < uVar10);
          }
          if (uVar11 < uStack_9c) {
            *puVar6 = uVar11;
          }
        }
        if (param_1[1] == 0) {
          puStack_60 = &UNK_145075e5c;
          FUN_1450760b0(puVar7,param_2,param_3,puVar6);
          return;
        }
        pplStack_78 = &plStack_a8;
        pcStack_70 = FUN_144390d40;
        puStack_68 = &UNK_1401167b0;
        puStack_60 = &SUB_140004380;
        FUN_1450760b0(puVar7,param_2,param_3,puVar6,&pplStack_78);
      }
      else if (cVar3 == '\0') {
        puVar6 = (uint *)((longlong)param_1 + 0x14);
        if (((*(int *)((longlong)param_1 + 0x14) == -1) && (0.0 <= fVar13)) &&
           ((fVar13 <= _DAT_145fc6ed8 && (*puVar1 != 0)))) {
          uVar11 = 0;
          *puVar6 = *puVar1 - 1;
          uVar10 = *puVar1;
          uVar8 = uVar10;
          if (uVar10 != 0) {
            do {
              uVar9 = uVar8 - uVar11 >> 1;
              uVar12 = uVar9 + uVar11;
              fVar13 = (float)FUN_145076410(puVar7,uVar12);
              if (fVar13 < (float)param_3) {
                uVar11 = uVar9 + 1 + uVar11;
                uVar12 = uVar8;
              }
              uVar8 = uVar12;
            } while (uVar11 < uVar12);
          }
          if (uVar11 < uVar10) {
            *puVar6 = uVar11;
          }
        }
        puStack_60 = &UNK_145075eac;
        FUN_145076780(puVar7,param_2,param_3,puVar6);
        return;
      }
    }
  }
  else if (bVar2 == 0x15) {
    func_0x000140092750(&plStack_a8);
    FUN_14436de60(plStack_a8,param_2);
  }
  return;
}

