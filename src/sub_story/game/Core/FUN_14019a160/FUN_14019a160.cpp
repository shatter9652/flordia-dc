// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14019a160  size: 559 bytes
// Name:    FUN_14019a160
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14019ac60, FUN_144eca860, FUN_14019a390, FUN_145647140, FUN_14019a3d0, FUN_145124260, FUN_14000ec50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14019a160(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  int ***pppiVar8;
  undefined8 auStack_b0 [4];
  undefined8 uStack_90;
  int **ppiStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined1 *puStack_68;
  int iStack_60;
  int iStack_58;
  int iStack_54;
  undefined1 *puStack_50;
  int *piStack_48;
  
  lVar3 = param_1[0x14];
  pppiVar8 = &ppiStack_88;
  if ((lVar3 != 0) && (iVar1 = *(int *)(lVar3 + 4), pppiVar8 = &ppiStack_88, iVar1 != 0)) {
    auStack_b0[0] = 0x14019a1a8;
    lVar5 = func_0x000144dc9fb0(param_1[6]);
    pppiVar8 = &ppiStack_88;
    if (lVar5 != 0) {
      uStack_90 = 0x14019a1c5;
      lVar6 = FUN_145647140();
      lVar6 = -lVar6;
      puStack_50 = (undefined1 *)((longlong)&ppiStack_88 + lVar6);
      piStack_48 = &iStack_58;
      puStack_80 = &UNK_1448b3fb0;
      iStack_54 = 0;
      puStack_78 = &UNK_1401167b0;
      puStack_70 = &SUB_140004380;
      ppiStack_88 = &piStack_48;
      iStack_58 = iVar1;
      *(undefined8 *)((longlong)auStack_b0 + lVar6) = 0x14019a219;
      FUN_145124260(lVar3);
      pppiVar8 = (int ***)((longlong)&ppiStack_88 + lVar6);
      if (iStack_54 != 0) {
        puStack_68 = puStack_50;
        iStack_60 = iStack_54;
        *(undefined8 *)((longlong)auStack_b0 + lVar6) = 0x14019a36d;
        FUN_14019ac60(lVar5,&puStack_68,param_3 ^ 1);
        pppiVar8 = (int ***)((longlong)&ppiStack_88 + lVar6);
      }
    }
  }
  if ((char)param_3 == '\0') {
    *(undefined8 *)((longlong)pppiVar8 + -0x28) = 0x14019a2d9;
    FUN_14000ec50(param_1,1,param_2);
    *(undefined8 *)((longlong)pppiVar8 + -0x28) = 0x14019a2ea;
    func_0x000140994120(param_1 + 5);
    *(undefined8 *)((longlong)pppiVar8 + -0x28) = 0x14019a2fe;
    func_0x00014019a140(param_1 + 9);
    param_1[0x12] = 0;
    *(undefined1 (*) [32])(param_1 + 0xe) = ZEXT1232(ZEXT812(0));
    *(undefined1 (*) [32])(param_1 + 10) = ZEXT1232(ZEXT812(0));
    *(undefined8 *)((longlong)pppiVar8 + -0x28) = 0x14019a32a;
    FUN_14019a390(param_1 + 9);
    param_1[9] = &UNK_14668c2b0;
    param_1[0x13] = &UNK_14668c300;
  }
  param_1[2] = 0;
  uVar2 = *(uint *)(param_1 + 1);
  if ((ulonglong)uVar2 != 0) {
    uVar7 = *param_1;
    *(undefined8 *)((longlong)pppiVar8 + -0x28) = 0x14019a254;
    func_0x000145f40580(uVar7,0,(ulonglong)uVar2 << 2);
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  lVar3 = param_1[0x14];
  if (lVar3 != 0) {
    *(undefined8 *)((longlong)pppiVar8 + -0x28) = 0x14019a277;
    FUN_14019a3d0(lVar3);
    *(undefined8 *)((longlong)pppiVar8 + -0x28) = 0x14019a286;
    cVar4 = func_0x000144eca830(0x149fee628,lVar3);
    if (cVar4 == '\0') {
      *(undefined8 *)((longlong)pppiVar8 + -0x28) = 0x14019a37f;
      uVar7 = func_0x000144fc99c0(0,0);
      *(undefined8 *)((longlong)pppiVar8 + -0x28) = 0x14019a38a;
      func_0x000140093420(uVar7,lVar3);
    }
    else {
      *(undefined8 *)((longlong)pppiVar8 + -0x28) = 0x14019a2a5;
      FUN_144eca860(0x149fee628,lVar3);
    }
    param_1[0x14] = 0;
  }
  return;
}

