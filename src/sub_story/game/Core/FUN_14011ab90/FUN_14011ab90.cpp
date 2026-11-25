// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011ab90  size: 364 bytes
// Name:    FUN_14011ab90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1452d5b70, FUN_1451c4210, FUN_14011ad00, FUN_144fc21d0, FUN_140cad320
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14011ab90(undefined4 *param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined8 auStack_58 [3];
  undefined4 uStack_3c;
  undefined1 auStack_2c [12];
  
  auVar11._0_12_ = ZEXT812(0);
  auVar11._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 2) = auVar11;
  if (param_1[7] != -99) {
    auStack_2c[0] = 0;
    FUN_140cad320(auStack_58);
    func_0x000145347860(auStack_58,auStack_2c,0xc);
    FUN_14011ad00(auStack_58,&UNK_146784fd6);
    plVar5 = (longlong *)func_0x00014003b530(0x14a92e700,*param_1);
    lVar2 = *plVar5;
    if (lVar2 != 0) {
      uVar6 = FUN_1452d5b70(auStack_58[0],uStack_3c);
      uVar8 = 0;
      uVar4 = FUN_144fc21d0(uVar6,0);
      if (*(ushort *)(lVar2 + 0x28) != 0) {
        iVar7 = *(ushort *)(lVar2 + 0x28) - 1;
        iVar9 = 0;
        do {
          uVar10 = (uint)(iVar7 + iVar9) >> 1;
          uVar1 = *(uint *)(*(longlong *)(lVar2 + 0x20) + (ulonglong)uVar10 * 4);
          if (uVar1 == uVar4) {
            uVar8 = *(undefined8 *)(*(longlong *)(lVar2 + 0x30) + (ulonglong)uVar10 * 8);
            break;
          }
          iVar3 = uVar10 - 1;
          if (uVar1 < uVar4) {
            iVar9 = uVar10 + 1;
            iVar3 = iVar7;
          }
          iVar7 = iVar3;
        } while (iVar9 <= iVar7);
      }
      *(undefined8 *)(param_1 + 2) = uVar8;
      func_0x000144f8dc40(auStack_58,&UNK_146785fa5);
      uVar6 = FUN_1452d5b70(auStack_58[0],uStack_3c);
      uVar8 = 0;
      uVar4 = FUN_144fc21d0(uVar6,0);
      if (*(ushort *)(lVar2 + 0x28) != 0) {
        iVar7 = *(ushort *)(lVar2 + 0x28) - 1;
        iVar9 = 0;
        do {
          uVar10 = (uint)(iVar7 + iVar9) >> 1;
          uVar1 = *(uint *)(*(longlong *)(lVar2 + 0x20) + (ulonglong)uVar10 * 4);
          if (uVar1 == uVar4) {
            uVar8 = *(undefined8 *)(*(longlong *)(lVar2 + 0x30) + (ulonglong)uVar10 * 8);
            break;
          }
          iVar3 = uVar10 - 1;
          if (uVar1 < uVar4) {
            iVar9 = uVar10 + 1;
            iVar3 = iVar7;
          }
          iVar7 = iVar3;
        } while (iVar9 <= iVar7);
      }
      *(undefined8 *)(param_1 + 4) = uVar8;
    }
    *(undefined1 *)(param_1 + 8) = 1;
    FUN_1451c4210(auStack_58);
  }
  return;
}

