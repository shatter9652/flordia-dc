// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400725c0  size: 580 bytes
// Name:    FUN_1400725c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14080dfb0, FUN_142d3d540, FUN_145647140, FUN_143b60b60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400725c0(longlong param_1,longlong param_2)

{
  byte bVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong alStack_78 [7];
  
  alStack_78[6] = 0x1400725d6;
  lVar10 = FUN_145647140();
  lVar10 = -lVar10;
  iVar9 = *(int *)(param_2 + 8);
  uVar13 = *(uint *)(param_2 + 0x44);
  uVar14 = (ulonglong)uVar13;
  lVar11 = *(longlong *)(param_2 + 0x48);
  *(undefined8 *)((longlong)alStack_78 + lVar10 + 0x10) = 0x140072601;
  iVar7 = func_0x000140071d10(uVar14,lVar11);
  *(undefined8 *)((longlong)alStack_78 + lVar10 + 0x10) = 0x140072617;
  iVar8 = func_0x000140071d40(uVar13,lVar11);
  if (iVar8 + iVar7 < iVar9) {
    *(int *)(&stack0x00001ff4 + lVar10) = iVar9;
    lVar3 = *(longlong *)(param_1 + 0x10);
    *(int *)(&stack0x00001ff0 + lVar10) = iVar8 + iVar7;
    *(longlong *)(&stack0x00001fe0 + lVar10) = param_2;
    if (uVar14 == 0) {
      uVar13 = 0;
    }
    else {
      lVar12 = 0;
      uVar13 = 0;
      do {
        bVar1 = *(byte *)(lVar3 + 10);
        lVar4 = *(longlong *)(lVar11 + lVar12);
        *(undefined4 *)(&stack0x00001fec + lVar10) = 2;
        *(uint *)(&stack0x00001fe8 + lVar10) = bVar1 ^ 0xa3;
        *(undefined8 *)(&stack0x00001fc0 + lVar10) = *(undefined8 *)(lVar4 + 0x10);
        *(undefined8 *)(&stack0x00001fc8 + lVar10) = 0;
        *(undefined8 *)((longlong)alStack_78 + lVar10 + 0x10) = 0x140072695;
        func_0x000144f86cb0(&stack0x00001fc0 + lVar10,&stack0x00001fd0 + lVar10);
        *(undefined1 **)((longlong)alStack_78 + lVar10 + 0x30) = &stack0x00001fec + lVar10;
        *(undefined1 **)((longlong)alStack_78 + lVar10 + 0x28) = &stack0x00001fe8 + lVar10;
        *(undefined8 *)((longlong)alStack_78 + lVar10) = 0x1400726d5;
        iVar9 = FUN_142d3d540(_DAT_14a9ec940,&stack0x00001fd0 + lVar10,
                              &stack0xffffffffffffffc0 + (longlong)(int)uVar13 * 8 + lVar10,
                              0x400 - uVar13);
        uVar13 = uVar13 + iVar9;
        lVar12 = lVar12 + 8;
        *(int *)(lVar4 + 0x94) = iVar9;
      } while (uVar14 << 3 != lVar12);
    }
    iVar9 = *(int *)(&stack0x00001ff0 + lVar10);
    if (iVar9 < (int)uVar13) {
      *(undefined8 *)((longlong)alStack_78 + lVar10 + 0x30) = 0x140072716;
      lVar11 = FUN_145647140();
      lVar11 = -lVar11;
      *(undefined1 **)(&stack0x00001fd8 + lVar10) = &stack0xffffffffffffffc0 + lVar11 + lVar10;
      *(uint *)(&stack0x00001fd0 + lVar10) = uVar13;
      if ((int)uVar13 < 1) {
        iVar7 = 0;
      }
      else {
        uVar15 = 0;
        uVar14 = 0;
        do {
          uVar5 = *(undefined8 *)
                   (*(longlong *)(&stack0xffffffffffffffc0 + uVar15 * 8 + lVar10) + -0x6f4);
          *(undefined8 *)((longlong)alStack_78 + lVar11 + lVar10 + 0x10) = 0x14007274e;
          lVar12 = func_0x000145310cd0(uVar5);
          if (lVar12 != 0) {
            if (*(char *)(lVar3 + 8) == '\x01') {
              uVar2 = *(undefined4 *)(lVar12 + 0x9c);
              *(undefined8 *)((longlong)alStack_78 + lVar11 + lVar10 + 0x10) = 0x140072770;
              cVar6 = FUN_14080dfb0(uVar2);
              if (cVar6 == '\0') goto LAB_1400727a2;
            }
            else if (*(char *)(lVar3 + 9) == '\x01') {
              uVar2 = *(undefined4 *)(lVar12 + 0x9c);
              *(undefined8 *)((longlong)alStack_78 + lVar11 + lVar10 + 0x10) = 0x140072790;
              cVar6 = FUN_14080dfb0(uVar2);
              if (cVar6 != '\0') goto LAB_1400727a2;
            }
            *(longlong *)(&stack0xffffffffffffffc0 + uVar14 * 8 + lVar11 + lVar10) = lVar12;
            uVar14 = (ulonglong)((int)uVar14 + 1);
          }
LAB_1400727a2:
          iVar7 = (int)uVar14;
          uVar15 = uVar15 + 1;
        } while (uVar13 != uVar15);
      }
      lVar3 = *(longlong *)(&stack0x00001fe0 + lVar10);
      *(int *)(&stack0x00001fd4 + lVar10) = iVar7;
      *(int *)(lVar3 + 0xc) = iVar7;
      if (iVar9 < iVar7) {
        uVar2 = *(undefined4 *)(&stack0x00001ff4 + lVar10);
        *(undefined8 *)((longlong)alStack_78 + lVar11 + lVar10 + 0x10) = 0x1400727ec;
        FUN_143b60b60(lVar3,&stack0x00001fd0 + lVar10,iVar9,uVar2);
      }
    }
    else {
      *(uint *)(*(longlong *)(&stack0x00001fe0 + lVar10) + 0xc) = uVar13;
    }
  }
  return;
}

