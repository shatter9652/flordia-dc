// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14019ac60  size: 455 bytes
// Name:    FUN_14019ac60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14503b300, FUN_140006180, FUN_1408b76c0, FUN_145647140, FUN_1451e6af0, FUN_140465670
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14019ac60(longlong param_1,longlong *param_2,char param_3)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  bool bVar14;
  undefined8 auStack_80 [4];
  undefined8 uStack_60;
  longlong *plStack_58;
  ulonglong uStack_50;
  char cStack_41;
  
  if ((int)param_2[1] != 0) {
    uStack_60 = 0x14019aca7;
    lVar10 = param_1;
    plStack_58 = param_2;
    cStack_41 = param_3;
    lVar7 = FUN_145647140();
    lVar7 = -lVar7;
    puVar12 = (undefined8 *)((longlong)&plStack_58 + lVar7);
    puVar1 = (uint *)(lVar10 + 0x108);
    puVar2 = (ulonglong *)(lVar10 + 0x118);
    uVar6 = *(uint *)(lVar10 + 0x108);
LAB_14019accb:
    do {
      uVar5 = uVar6;
      if ((uVar5 & 0x10000ff) != 0) {
        LOCK();
        uVar6 = *puVar1;
        bVar14 = uVar5 == uVar6;
        if (bVar14) {
          *puVar1 = uVar5 + 0x10000;
          uVar6 = uVar5;
        }
        UNLOCK();
        if (bVar14) {
          uVar11 = (uint)(*puVar2 >> 7) & 0xffffff;
          uVar9 = *puVar2;
          if ((*puVar2 >> 7 & 0xffffff) != 0) {
            do {
              if ((longlong)uVar9 < 0x100000000) {
                uVar8 = *puVar2;
              }
              else {
                LOCK();
                uVar8 = *puVar2;
                if (uVar9 == uVar8) {
                  *puVar2 = uVar9 - 0x100000000;
                  uVar8 = uVar9;
                }
                UNLOCK();
                uVar6 = uVar5;
                if (uVar9 == uVar8) goto LAB_14019accb;
              }
              uVar11 = uVar11 - 1;
              uVar9 = uVar8;
            } while (uVar11 != 0);
          }
          uVar9 = *puVar2;
          do {
            while (uStack_50 = uVar9, 0xffffffff < (longlong)uStack_50) {
              LOCK();
              uVar9 = *puVar2;
              if (uStack_50 == uVar9) {
                *puVar2 = uStack_50 - 0x100000000;
                uVar9 = uStack_50;
              }
              UNLOCK();
              uVar6 = uVar5;
              if (uStack_50 == uVar9) goto LAB_14019accb;
            }
            *(undefined8 *)((longlong)auStack_80 + lVar7) = 0x14019ad51;
            cVar4 = FUN_140006180(puVar2,1,&uStack_50);
            uVar6 = uVar5;
            uVar9 = uStack_50;
          } while (cVar4 == '\0');
        }
        goto LAB_14019accb;
      }
      LOCK();
      uVar6 = *puVar1;
      bVar14 = uVar5 == uVar6;
      if (bVar14) {
        *puVar1 = uVar5 | 0x1000000;
        uVar6 = uVar5;
      }
      UNLOCK();
    } while (!bVar14);
    uVar6 = *(uint *)(plStack_58 + 1);
    if ((ulonglong)uVar6 == 0) {
      *(undefined8 *)((longlong)auStack_80 + lVar7) = 0x14019adea;
      FUN_140465670(puVar1);
    }
    else {
      lVar10 = *plStack_58;
      lVar13 = 0;
      do {
        *(undefined8 *)((longlong)&plStack_58 + lVar13 + lVar7) =
             *(undefined8 *)(*(longlong *)(lVar10 + lVar13) + 8);
        *(undefined8 *)((longlong)auStack_80 + lVar7) = 0x14019ada5;
        FUN_1408b76c0(param_1);
        lVar13 = lVar13 + 8;
      } while ((ulonglong)uVar6 << 3 != lVar13);
      *(undefined8 *)((longlong)auStack_80 + lVar7) = 0x14019adbe;
      FUN_140465670(puVar1);
      do {
        uVar3 = *puVar12;
        *(undefined8 *)((longlong)auStack_80 + lVar7) = 0x14019adce;
        FUN_14503b300(uVar3);
        puVar12 = puVar12 + 1;
        lVar13 = lVar13 + -8;
      } while (lVar13 != 0);
    }
    if (cStack_41 == '\0') {
      LOCK();
      *(byte *)(param_1 + 0x134) = *(byte *)(param_1 + 0x134) | 2;
      UNLOCK();
    }
    else {
      *(undefined8 *)((longlong)auStack_80 + lVar7) = 0x14019ae00;
      FUN_1451e6af0(param_1);
      LOCK();
      *(byte *)(param_1 + 0x134) = *(byte *)(param_1 + 0x134) & 0xfd;
      UNLOCK();
    }
  }
  return;
}

