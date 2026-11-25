// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140072420  size: 410 bytes
// Name:    FUN_140072420
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145647140, FUN_143b5c760
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140072420(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 auStack_90 [4];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  longlong lStack_58;
  longlong lStack_50;
  int iStack_48;
  int iStack_44;
  
  iVar12 = *(int *)(param_2 + 8);
  uVar2 = *(uint *)(param_2 + 0x44);
  uVar14 = (ulonglong)uVar2;
  plVar11 = *(longlong **)(param_2 + 0x48);
  auStack_90[0] = 0x140072455;
  iVar6 = func_0x000140071d10(uVar14,plVar11);
  auStack_90[0] = 0x14007246b;
  iStack_44 = func_0x000140071d40(uVar2);
  iStack_44 = iStack_44 + iVar6;
  if (iStack_44 < iVar12) {
    lStack_58 = param_2;
    lStack_50 = param_1;
    iStack_48 = iVar12;
    if (uVar14 == 0) {
      iVar12 = 0;
    }
    else {
      iVar6 = *(int *)(param_1 + 0x4c);
      lVar13 = 0;
      iVar12 = 0;
      do {
        lVar8 = *(longlong *)((longlong)plVar11 + lVar13);
        lVar7 = *(longlong *)(lVar8 + 0xa8);
        if (lVar7 != 0) {
          iVar10 = 0;
          if (iVar6 < *(int *)(lVar7 + 0x24)) {
            auStack_90[0] = 0x1400724c7;
            lVar7 = func_0x0001413515f0(*(int *)(lVar7 + 0x24),*(undefined8 *)(lVar7 + 0x28),iVar6);
            iVar10 = *(int *)(lVar7 + 4);
          }
          iVar12 = iVar12 + iVar10;
          *(int *)(lVar8 + 0x94) = iVar10;
        }
        lVar13 = lVar13 + 8;
      } while (uVar14 * 8 - lVar13 != 0);
    }
    iVar6 = iStack_48;
    lVar13 = lStack_58;
    *(int *)(lStack_58 + 0xc) = iVar12;
    if (iStack_44 < iVar12) {
      uStack_70 = 0x140072510;
      lVar7 = lStack_50;
      lVar8 = FUN_145647140();
      lVar8 = -lVar8;
      puStack_60 = (undefined1 *)((longlong)&uStack_68 + lVar8);
      uStack_68._0_4_ = iVar12;
      if (uVar2 == 0) {
        uStack_68._4_4_ = 0;
        puStack_60 = (undefined1 *)((longlong)&uStack_68 + lVar8);
      }
      else {
        uVar3 = *(undefined4 *)(lVar7 + 0x4c);
        plVar1 = plVar11 + uVar14;
        uVar14 = 0;
        do {
          lVar7 = *(longlong *)(*plVar11 + 0xa8);
          if (lVar7 != 0) {
            uVar4 = *(undefined4 *)(lVar7 + 0x24);
            uVar5 = *(undefined8 *)(lVar7 + 0x28);
            *(undefined8 *)((longlong)auStack_90 + lVar8) = 0x14007254f;
            lVar7 = func_0x0001413515f0(uVar4,uVar5,uVar3);
            if ((ulonglong)*(uint *)(lVar7 + 4) != 0) {
              lVar9 = *(longlong *)(lVar7 + 8);
              lVar7 = (ulonglong)*(uint *)(lVar7 + 4) * 0x30;
              uVar15 = uVar14;
              do {
                uVar14 = (ulonglong)((int)uVar15 + 1);
                *(longlong *)((longlong)&uStack_68 + uVar15 * 8 + lVar8) = lVar9;
                lVar9 = lVar9 + 0x30;
                lVar7 = lVar7 + -0x30;
                uVar15 = uVar14;
              } while (lVar7 != 0);
            }
          }
          uStack_68._4_4_ = (undefined4)uVar14;
          plVar11 = plVar11 + 1;
        } while (plVar11 != plVar1);
      }
      iVar12 = iStack_44;
      *(undefined8 *)((longlong)auStack_90 + lVar8) = 0x1400725a5;
      FUN_143b5c760(lVar13,&uStack_68,iVar12,iVar6);
    }
  }
  return;
}

