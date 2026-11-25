// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400bc770  size: 48 bytes
// Name:    FUN_1400bc770
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f4b5f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400bc770(longlong *param_1,longlong param_2)

{
  short *psVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  uint *puVar5;
  int *piVar6;
  longlong lVar7;
  char cVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 uStack_ac0;
  longlong *plStack_ab8;
  longlong alStack_ab0 [120];
  undefined8 uStack_6f0;
  undefined1 *puStack_6e8;
  undefined1 auStack_6e0 [120];
  undefined8 uStack_668;
  undefined1 *puStack_660;
  undefined1 auStack_658 [512];
  undefined8 uStack_458;
  undefined1 *puStack_450;
  undefined1 auStack_448 [512];
  undefined8 uStack_248;
  undefined1 *puStack_240;
  undefined1 auStack_238 [504];
  undefined *puStack_40;
  undefined8 uStack_38;
  longlong lStack_30;
  undefined1 uStack_28;
  
  puStack_40 = (undefined *)0x1400bc788;
  FUN_144f4b5f0(param_1,(int)*(short *)((longlong)param_1 + 0x4ac));
  lVar4 = *(longlong *)
           (param_1[8] + (ulonglong)(uint)(int)*(short *)((longlong)param_1 + 0x4ac) * 8);
  if ((*(char *)(lVar4 + 0xe0) == '\0') || ((*(byte *)(lVar4 + 0xf6) & 1) != 0)) {
    if (param_2 != 0) {
      puVar5 = *(uint **)(param_2 + 0xd0);
      uVar9 = puVar5[1];
      if (uVar9 == *puVar5) {
        uVar11 = 1;
        if (1 < uVar9) {
          uVar11 = uVar9 >> 1;
        }
        uVar11 = uVar11 + uVar9;
        if (uVar11 < 0x79) {
          puVar10 = puVar5 + 4;
        }
        else {
          puVar10 = (uint *)func_0x000144d9c140(8,(ulonglong)uVar11 << 3);
          uVar9 = puVar5[1];
        }
        if (uVar9 != 0) {
          func_0x000145f40560(puVar10,*(undefined8 *)(puVar5 + 2),(ulonglong)uVar9 << 3);
        }
        if (*(uint **)(puVar5 + 2) != (uint *)0x0 && puVar5 + 4 != *(uint **)(puVar5 + 2)) {
          func_0x000144d9c130();
        }
        *(uint **)(puVar5 + 2) = puVar10;
        *puVar5 = uVar11;
        uVar9 = puVar5[1];
      }
      else {
        puVar10 = *(uint **)(puVar5 + 2);
      }
      puVar5[1] = uVar9 + 1;
      *(longlong *)(puVar10 + (ulonglong)uVar9 * 2) = lVar4;
      uVar9 = puVar5[0xf5];
      if (uVar9 == puVar5[0xf4]) {
        uVar11 = 1;
        if (1 < uVar9) {
          uVar11 = uVar9 >> 1;
        }
        uVar11 = uVar11 + uVar9;
        if (uVar11 < 0x79) {
          puVar10 = puVar5 + 0xf8;
        }
        else {
          puVar10 = (uint *)func_0x000144d9c140(1,uVar11);
          uVar9 = puVar5[0xf5];
        }
        if (uVar9 != 0) {
          func_0x000145f40560(puVar10,*(undefined8 *)(puVar5 + 0xf6),uVar9);
        }
        if (*(uint **)(puVar5 + 0xf6) != (uint *)0x0 && puVar5 + 0xf8 != *(uint **)(puVar5 + 0xf6))
        {
          func_0x000144d9c130();
        }
        *(uint **)(puVar5 + 0xf6) = puVar10;
        puVar5[0xf4] = uVar11;
        uVar9 = puVar5[0xf5];
      }
      else {
        puVar10 = *(uint **)(puVar5 + 0xf6);
      }
      puVar5[0xf5] = uVar9 + 1;
      *(undefined1 *)((longlong)puVar10 + (ulonglong)uVar9) = 2;
      return;
    }
    lStack_30 = param_1[0x17];
    plStack_ab8 = alStack_ab0;
    puStack_6e8 = auStack_6e0;
    puStack_660 = auStack_658;
    puStack_450 = auStack_448;
    uStack_ac0 = 0x100000078;
    uStack_6f0 = 0x100000078;
    uStack_668 = 0x40;
    puStack_240 = auStack_238;
    uStack_458 = 0x40;
    uStack_248 = 0x40;
    uStack_38 = 0;
    uStack_28 = 0;
    auStack_6e0[0] = 2;
    alStack_ab0[0] = lVar4;
  }
  else {
    LOCK();
    psVar1 = (short *)(lVar4 + 0x70);
    *psVar1 = *psVar1 + -1;
    UNLOCK();
    if (*psVar1 != 0) {
      return;
    }
    if (param_2 != 0) {
      lVar12 = *(longlong *)(param_2 + 0xd0);
      if ((*(char *)(lVar4 + 0xe0) != '\x01') &&
         (((*(ushort *)(lVar4 + 0xe4) == 0 ||
           ((*(ushort *)(lVar4 + 0xe4) & *(ushort *)((longlong)param_1 + 0x5e)) != 0)) &&
          ((*(byte *)(lVar4 + 0xe1) & *(byte *)(param_1 + 0xe)) == *(byte *)(lVar4 + 0xe2))))) {
        lVar7 = *(longlong *)(lVar4 + 0xe8);
        if ((lVar7 != 0) && (*(char *)(lVar4 + 0xf7) == '\0')) {
          *(undefined1 *)(lVar4 + 0xf7) = 1;
          puStack_40 = &UNK_14509b950;
          cVar8 = (**(code **)(lVar7 + 0x50))(lVar7 + 0xfU & 0xfffffffffffffff0);
          if (cVar8 == '\0') goto FUN_144e53a10;
        }
        *(undefined4 *)(lVar4 + 0xf0) = 2;
        uVar9 = *(uint *)(lVar12 + 0x87c);
        uVar13 = (ulonglong)uVar9;
        if (((uVar9 == *(uint *)(lVar12 + 0x878)) || (uVar9 < 2)) &&
           (uVar9 == *(uint *)(lVar12 + 0x878))) {
          uVar11 = 1;
          if (1 < uVar9) {
            uVar11 = uVar9 >> 1;
          }
          puStack_40 = &UNK_14509b998;
          FUN_145caff10(lVar12 + 0x878,uVar11 + uVar9);
          uVar13 = (ulonglong)*(uint *)(lVar12 + 0x87c);
        }
        *(int *)(lVar12 + 0x87c) = (int)uVar13 + 1;
        *(longlong *)(*(longlong *)(lVar12 + 0x880) + uVar13 * 8) = lVar4;
        *(undefined1 *)(lVar12 + 0xa98) = 1;
        return;
      }
FUN_144e53a10:
      puStack_40 = &UNK_144e53a2a;
      FUN_144e53c30(lVar4,lVar12,CONCAT71((int7)((ulonglong)lVar12 >> 8),1));
      if (*(char *)(lVar4 + 0xe0) != '\x03') {
        LOCK();
        plVar2 = param_1 + 0x16;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          if (*(code **)(*param_1 + 0x48) != (code *)&UNK_144e89130) {
            puStack_40 = &UNK_144e53ac3;
            (**(code **)(*param_1 + 0x48))();
          }
          lVar4 = param_1[0x15];
          if (0 < (longlong)(int)lVar4) {
            lVar12 = 0;
            do {
              piVar6 = (int *)param_1[lVar12 + 0x13];
              LOCK();
              iVar3 = *piVar6;
              *piVar6 = *piVar6 + -1;
              UNLOCK();
              if (iVar3 == -0x7fffffff) {
                puStack_40 = &UNK_144e53ab1;
                func_0x000140005930(*(undefined8 *)(piVar6 + 2));
              }
              lVar12 = lVar12 + 1;
            } while ((int)lVar4 != lVar12);
          }
        }
        return;
      }
      return;
    }
    lStack_30 = param_1[0x17];
    plStack_ab8 = alStack_ab0;
    puStack_6e8 = auStack_6e0;
    puStack_660 = auStack_658;
    uStack_ac0 = 0x78;
    uStack_6f0 = 0x78;
    puStack_450 = auStack_448;
    uStack_668 = 0x40;
    puStack_240 = auStack_238;
    uStack_458 = 0x40;
    uStack_248 = 0x40;
    uStack_38 = 0;
    uStack_28 = 0;
    FUN_14509b890(param_1,lVar4,&uStack_ac0);
  }
  FUN_1400560b0(&uStack_ac0,0,7,4);
  FUN_144e547d0(&uStack_ac0);
  return;
}

