// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011b580  size: 558 bytes
// Name:    FUN_14011b580
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1455a0880, FUN_144838e50, FUN_144838b90, FUN_1455a08a0, FUN_145647140
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14011b580(longlong param_1,longlong param_2,undefined8 *param_3,longlong *param_4,
                  int param_5,undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [16];
  longlong lStack_a0;
  undefined8 uStack_98;
  longlong lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  int iStack_78;
  undefined1 *puStack_70;
  undefined4 uStack_68;
  longlong lStack_60;
  ulonglong uStack_58;
  longlong *plStack_50;
  longlong lStack_48;
  
  puVar7 = auStack_b8;
  puVar9 = auStack_b8;
  if ((*(longlong *)(param_2 + 8) != 0) &&
     (uStack_58 = (ulonglong)*(uint *)(param_4 + 1),
     *(uint *)(param_1 + 4) != 0 && *(uint *)(param_4 + 1) == *(uint *)(param_1 + 4))) {
    lVar5 = 0;
    uVar10 = 0;
    lStack_60 = param_2;
    plStack_50 = param_4;
    lStack_48 = param_1;
    if (param_5 == 0x25327820) {
      do {
        uVar2 = *(undefined8 *)(*(longlong *)(*(longlong *)(lStack_48 + 8) + uVar10 * 8) + 0x20);
        lStack_a0 = lStack_60;
        uStack_98 = *param_3;
        lStack_90 = *plStack_50 + lVar5;
        uStack_88 = param_3[1];
        iStack_78 = 0x25327820;
        uStack_80 = uStack_88;
        *(undefined8 *)(puVar7 + -0x28) = 0x14011b63c;
        func_0x0001455d3fb0(auStack_b0,uVar2,&lStack_a0);
        iVar1 = *(int *)(param_3 + 3);
        puVar6 = puVar7 + -0x20;
        if (iVar1 == 0) {
          *(undefined8 *)(puVar7 + -0x28) = 0x14011b6a9;
          FUN_144838b90(auStack_b0);
        }
        else {
          *(undefined8 *)(puVar7 + -0x28) = 0x14011b655;
          FUN_1455a0880(uVar2);
          *(undefined8 *)(puVar7 + -8) = 0x14011b668;
          lVar4 = FUN_145647140();
          lVar4 = -lVar4;
          uVar3 = param_3[2];
          puVar6 = puVar7 + lVar4 + -0x20;
          *(undefined8 *)(puVar7 + lVar4 + -0x28) = 0x14011b684;
          uStack_68 = FUN_1455a08a0(uVar2,uVar3,iVar1,(longlong)puVar7 + lVar4);
          puStack_70 = puVar7 + lVar4;
          *(undefined8 *)(puVar7 + lVar4 + -0x28) = 0x14011b69f;
          FUN_144838e50(auStack_b0,&puStack_70);
        }
        puVar7 = puVar6 + 0x20;
        uVar10 = uVar10 + 1;
        lVar5 = lVar5 + 0x18;
      } while (uStack_58 != uVar10);
    }
    else {
      do {
        uVar2 = *(undefined8 *)(*(longlong *)(*(longlong *)(lStack_48 + 8) + uVar10 * 8) + 0x20);
        lStack_a0 = lStack_60;
        uStack_98 = *param_3;
        lStack_90 = *plStack_50 + lVar5;
        uStack_88 = param_3[1];
        uStack_80 = param_6;
        iStack_78 = param_5;
        *(undefined8 *)(puVar9 + -0x28) = 0x14011b71b;
        func_0x0001455d3fb0(auStack_b0,uVar2,&lStack_a0);
        iVar1 = *(int *)(param_3 + 3);
        puVar8 = puVar9 + -0x20;
        if (iVar1 == 0) {
          *(undefined8 *)(puVar9 + -0x28) = 0x14011b788;
          FUN_144838b90(auStack_b0);
        }
        else {
          *(undefined8 *)(puVar9 + -0x28) = 0x14011b734;
          FUN_1455a0880(uVar2);
          *(undefined8 *)(puVar9 + -8) = 0x14011b747;
          lVar4 = FUN_145647140();
          lVar4 = -lVar4;
          uVar3 = param_3[2];
          puVar8 = puVar9 + lVar4 + -0x20;
          *(undefined8 *)(puVar9 + lVar4 + -0x28) = 0x14011b763;
          uStack_68 = FUN_1455a08a0(uVar2,uVar3,iVar1,(longlong)puVar9 + lVar4);
          puStack_70 = puVar9 + lVar4;
          *(undefined8 *)(puVar9 + lVar4 + -0x28) = 0x14011b77e;
          FUN_144838e50(auStack_b0,&puStack_70);
        }
        puVar9 = puVar8 + 0x20;
        uVar10 = uVar10 + 1;
        lVar5 = lVar5 + 0x18;
      } while (uStack_58 != uVar10);
    }
  }
  return;
}

