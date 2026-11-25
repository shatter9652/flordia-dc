// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400042c0  size: 108 bytes
// Name:    FUN_1400042c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144d9d900
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400042c0(longlong param_1,longlong param_2)

{
  short *psVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint *puVar6;
  int *piVar7;
  longlong lVar8;
  char cVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
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
  
  puStack_40 = (undefined *)0x1400042d8;
  FUN_144d9d900(_DAT_149975a40);
  *(undefined8 *)(param_1 + 0x4f8) = 0;
  LOCK();
  psVar1 = (short *)(param_1 + 0x4e0);
  *psVar1 = *psVar1 + -1;
  UNLOCK();
  if (*psVar1 != 0) {
    return;
  }
  plVar4 = *(longlong **)(param_1 + 0x718);
  uVar10 = *(uint *)(param_1 + 0x720);
  *(undefined8 *)(param_1 + 0x718) = 0;
  *(undefined4 *)(param_1 + 0x720) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x754) = 1;
  lVar5 = *(longlong *)(plVar4[8] + (ulonglong)uVar10 * 8);
  if ((*(char *)(lVar5 + 0xe0) == '\0') || ((*(byte *)(lVar5 + 0xf6) & 1) != 0)) {
    if (param_2 != 0) {
      puVar6 = *(uint **)(param_2 + 0xd0);
      uVar10 = puVar6[1];
      if (uVar10 == *puVar6) {
        uVar12 = 1;
        if (1 < uVar10) {
          uVar12 = uVar10 >> 1;
        }
        uVar12 = uVar12 + uVar10;
        if (uVar12 < 0x79) {
          puVar11 = puVar6 + 4;
        }
        else {
          puVar11 = (uint *)func_0x000144d9c140(8,(ulonglong)uVar12 << 3);
          uVar10 = puVar6[1];
        }
        if (uVar10 != 0) {
          func_0x000145f40560(puVar11,*(undefined8 *)(puVar6 + 2),(ulonglong)uVar10 << 3);
        }
        if (*(uint **)(puVar6 + 2) != (uint *)0x0 && puVar6 + 4 != *(uint **)(puVar6 + 2)) {
          func_0x000144d9c130();
        }
        *(uint **)(puVar6 + 2) = puVar11;
        *puVar6 = uVar12;
        uVar10 = puVar6[1];
      }
      else {
        puVar11 = *(uint **)(puVar6 + 2);
      }
      puVar6[1] = uVar10 + 1;
      *(longlong *)(puVar11 + (ulonglong)uVar10 * 2) = lVar5;
      uVar10 = puVar6[0xf5];
      if (uVar10 == puVar6[0xf4]) {
        uVar12 = 1;
        if (1 < uVar10) {
          uVar12 = uVar10 >> 1;
        }
        uVar12 = uVar12 + uVar10;
        if (uVar12 < 0x79) {
          puVar11 = puVar6 + 0xf8;
        }
        else {
          puVar11 = (uint *)func_0x000144d9c140(1,uVar12);
          uVar10 = puVar6[0xf5];
        }
        if (uVar10 != 0) {
          func_0x000145f40560(puVar11,*(undefined8 *)(puVar6 + 0xf6),uVar10);
        }
        if (*(uint **)(puVar6 + 0xf6) != (uint *)0x0 && puVar6 + 0xf8 != *(uint **)(puVar6 + 0xf6))
        {
          func_0x000144d9c130();
        }
        *(uint **)(puVar6 + 0xf6) = puVar11;
        puVar6[0xf4] = uVar12;
        uVar10 = puVar6[0xf5];
      }
      else {
        puVar11 = *(uint **)(puVar6 + 0xf6);
      }
      puVar6[0xf5] = uVar10 + 1;
      *(undefined1 *)((longlong)puVar11 + (ulonglong)uVar10) = 2;
      return;
    }
    lStack_30 = plVar4[0x17];
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
    alStack_ab0[0] = lVar5;
  }
  else {
    LOCK();
    psVar1 = (short *)(lVar5 + 0x70);
    *psVar1 = *psVar1 + -1;
    UNLOCK();
    if (*psVar1 != 0) {
      return;
    }
    if (param_2 != 0) {
      lVar13 = *(longlong *)(param_2 + 0xd0);
      if ((*(char *)(lVar5 + 0xe0) != '\x01') &&
         (((*(ushort *)(lVar5 + 0xe4) == 0 ||
           ((*(ushort *)(lVar5 + 0xe4) & *(ushort *)((longlong)plVar4 + 0x5e)) != 0)) &&
          ((*(byte *)(lVar5 + 0xe1) & *(byte *)(plVar4 + 0xe)) == *(byte *)(lVar5 + 0xe2))))) {
        lVar8 = *(longlong *)(lVar5 + 0xe8);
        if ((lVar8 != 0) && (*(char *)(lVar5 + 0xf7) == '\0')) {
          *(undefined1 *)(lVar5 + 0xf7) = 1;
          puStack_40 = &UNK_14509b950;
          cVar9 = (**(code **)(lVar8 + 0x50))(lVar8 + 0xfU & 0xfffffffffffffff0);
          if (cVar9 == '\0') goto FUN_144e53a10;
        }
        *(undefined4 *)(lVar5 + 0xf0) = 2;
        uVar10 = *(uint *)(lVar13 + 0x87c);
        uVar14 = (ulonglong)uVar10;
        if (((uVar10 == *(uint *)(lVar13 + 0x878)) || (uVar10 < 2)) &&
           (uVar10 == *(uint *)(lVar13 + 0x878))) {
          uVar12 = 1;
          if (1 < uVar10) {
            uVar12 = uVar10 >> 1;
          }
          puStack_40 = &UNK_14509b998;
          FUN_145caff10(lVar13 + 0x878,uVar12 + uVar10);
          uVar14 = (ulonglong)*(uint *)(lVar13 + 0x87c);
        }
        *(int *)(lVar13 + 0x87c) = (int)uVar14 + 1;
        *(longlong *)(*(longlong *)(lVar13 + 0x880) + uVar14 * 8) = lVar5;
        *(undefined1 *)(lVar13 + 0xa98) = 1;
        return;
      }
FUN_144e53a10:
      puStack_40 = &UNK_144e53a2a;
      FUN_144e53c30(lVar5,lVar13,CONCAT71((int7)((ulonglong)lVar13 >> 8),1));
      if (*(char *)(lVar5 + 0xe0) != '\x03') {
        LOCK();
        plVar2 = plVar4 + 0x16;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          if (*(code **)(*plVar4 + 0x48) != (code *)&UNK_144e89130) {
            puStack_40 = &UNK_144e53ac3;
            (**(code **)(*plVar4 + 0x48))();
          }
          lVar5 = plVar4[0x15];
          if (0 < (longlong)(int)lVar5) {
            lVar13 = 0;
            do {
              piVar7 = (int *)plVar4[lVar13 + 0x13];
              LOCK();
              iVar3 = *piVar7;
              *piVar7 = *piVar7 + -1;
              UNLOCK();
              if (iVar3 == -0x7fffffff) {
                puStack_40 = &UNK_144e53ab1;
                func_0x000140005930(*(undefined8 *)(piVar7 + 2));
              }
              lVar13 = lVar13 + 1;
            } while ((int)lVar5 != lVar13);
          }
        }
        return;
      }
      return;
    }
    lStack_30 = plVar4[0x17];
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
    FUN_14509b890(plVar4,lVar5,&uStack_ac0);
  }
  FUN_1400560b0(&uStack_ac0,0,7,4);
  FUN_144e547d0(&uStack_ac0);
  return;
}

