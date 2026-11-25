// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400720b0  size: 659 bytes
// Name:    FUN_1400720b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141216790, FUN_141cd2cc0, FUN_141217330, FUN_1412170b0, FUN_140090e10, FUN_145647140
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400720b0(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  undefined1 *puVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined8 auStack_a0 [4];
  undefined8 uStack_80;
  ulonglong uStack_78;
  undefined8 uStack_70;
  int iStack_68;
  uint uStack_64;
  undefined1 *puStack_60;
  int iStack_54;
  longlong lStack_50;
  int iStack_48;
  int iStack_44;
  
  uVar1 = *(uint *)(param_2 + 0x44);
  uVar12 = (ulonglong)uVar1;
  lVar13 = *(longlong *)(param_2 + 0x48);
  iVar9 = *(int *)(param_2 + 8);
  auStack_a0[0] = 0x1400720e5;
  uStack_70 = param_1;
  iVar5 = func_0x000140071d10(uVar12,lVar13);
  auStack_a0[0] = 0x1400720f9;
  iStack_44 = func_0x000140071d40(uVar1,lVar13);
  puVar11 = &uStack_78;
  iStack_44 = iStack_44 + iVar5;
  if (iStack_44 < iVar9) {
    lStack_50 = param_2;
    iStack_48 = iVar9;
    if (uVar12 == 0) {
      uVar16 = 0;
      iVar5 = 0;
      iVar9 = 0;
    }
    else {
      lVar14 = 0;
      iVar9 = 0;
      iVar5 = 0;
      uVar16 = 0;
      do {
        lVar15 = *(longlong *)(lVar13 + lVar14);
        if (*(char *)(lVar15 + 0x79) == '\0') {
          auStack_a0[0] = 0x140072145;
          iStack_54 = iVar9;
          FUN_140090e10(lVar15);
          auStack_a0[0] = 0x14007214f;
          lVar7 = func_0x000141217070(lVar15,0);
          iVar9 = *(int *)(lVar7 + 4);
          auStack_a0[0] = 0x14007216c;
          uStack_78 = uVar16;
          lVar7 = func_0x000141217070(lVar15,1);
          iVar6 = *(int *)(lVar7 + 4);
          auStack_a0[0] = 0x14007218a;
          lVar7 = func_0x000141217070(lVar15);
          iVar2 = *(int *)(lVar7 + 4);
          iVar5 = iVar5 + iVar6;
          *(int *)(lVar15 + 0x94) = iVar6 + iVar9 + iVar2;
          iVar9 = iStack_54 + iVar9;
          uVar16 = (ulonglong)(uint)((int)uStack_78 + iVar2);
        }
        lVar14 = lVar14 + 8;
      } while (uVar12 << 3 != lVar14);
    }
    lVar13 = lStack_50;
    iVar6 = iVar5 + (int)uVar16 + iVar9;
    *(int *)(lStack_50 + 0xc) = iVar6;
    if (iStack_44 < iVar6) {
      auStack_a0[0] = 0x1400721ee;
      FUN_141cd2cc0(lStack_50);
      if (0 < iVar9) {
        uStack_80 = 0x14007220d;
        lVar14 = FUN_145647140();
        lVar14 = -lVar14;
        puStack_60 = (undefined1 *)((longlong)&uStack_78 + lVar14);
        puVar11 = (ulonglong *)((longlong)&uStack_78 + lVar14);
        uStack_64 = 0;
        uVar1 = *(uint *)(lVar13 + 0x44);
        iStack_68 = iVar9;
        if ((ulonglong)uVar1 != 0) {
          lVar15 = 0;
          lVar13 = *(longlong *)(lStack_50 + 0x48);
          puStack_60 = (undefined1 *)((longlong)&uStack_78 + lVar14);
          do {
            lVar7 = *(longlong *)(lVar13 + lVar15);
            if (*(char *)(lVar7 + 0x79) == '\0') {
              *(undefined8 *)((longlong)auStack_a0 + lVar14) = 0x140072251;
              lVar8 = func_0x000141217070(lVar7,0);
              lVar7 = *(longlong *)(lVar8 + 8);
              uVar3 = *(uint *)(lVar8 + 4);
              puVar10 = puStack_60 + (ulonglong)uStack_64 * 4;
              *(undefined8 *)((longlong)auStack_a0 + lVar14) = 0x140072277;
              FUN_1412170b0(&iStack_68,puVar10,lVar7,lVar7 + (ulonglong)uVar3 * 4);
            }
            lVar15 = lVar15 + 8;
          } while ((ulonglong)uVar1 << 3 != lVar15);
        }
        iVar6 = iStack_44;
        iVar9 = iStack_48;
        lVar13 = lStack_50;
        *(undefined8 *)((longlong)auStack_a0 + lVar14) = 0x1400722a2;
        iStack_44 = FUN_141217330(lVar13,&iStack_68,iVar6,iVar9);
        if (iVar9 <= iStack_44) {
          return;
        }
        if (*(int *)(lVar13 + 0x94) < *(int *)(lVar13 + 0x90)) {
          return;
        }
      }
      iVar6 = iStack_44;
      iVar9 = iStack_48;
      uVar4 = uStack_70;
      if (0 < iVar5) {
        *(undefined4 *)((longlong)puVar11 + -8) = 1;
        *(int *)((longlong)puVar11 + -0x10) = iVar9;
        *(undefined8 *)((longlong)puVar11 + -0x38) = 0x1400722ea;
        iStack_44 = FUN_141216790(uVar4,iVar5,iVar6,lVar13);
        if (iVar9 <= iStack_44) {
          return;
        }
        if (*(int *)(lVar13 + 0x94) < *(int *)(lVar13 + 0x90)) {
          return;
        }
      }
      iVar5 = iStack_44;
      iVar9 = iStack_48;
      uVar4 = uStack_70;
      if (0 < (int)uVar16) {
        *(undefined4 *)((longlong)puVar11 + -8) = 2;
        *(int *)((longlong)puVar11 + -0x10) = iVar9;
        *(undefined8 *)((longlong)puVar11 + -0x38) = 0x14007232e;
        FUN_141216790(uVar4,uVar16,iVar5,lVar13);
      }
    }
  }
  return;
}

