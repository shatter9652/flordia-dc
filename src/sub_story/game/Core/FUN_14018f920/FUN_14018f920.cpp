// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14018f920  size: 95 bytes
// Name:    FUN_14018f920
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14006e7f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_14018f920(longlong param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  int *piVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 auVar12 [64];
  undefined1 auStack_c8 [8];
  longlong lStack_c0;
  longlong lStack_b8;
  undefined1 auStack_a8 [16];
  undefined4 uStack_98;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined1 auStack_78 [56];
  
  if ((((int)param_2 < 0) || (*(uint *)(param_1 + 0x2c4) <= param_2)) ||
     (lVar7 = FUN_14006e7f0(*(undefined4 *)
                             ((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0) + 0x9c),0x666afe64)
     , lVar7 == 0)) {
    return 0;
  }
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x2c8) + 0x38 + (ulonglong)param_2 * 0x540);
  if ((-1 < iVar1) && (*(int *)(lVar7 + 0x1c) != 0)) {
    puVar11 = *(undefined8 **)(lVar7 + 0x20);
    auVar12 = ZEXT1264(ZEXT812(0));
    do {
      auStack_a8 = auVar12._0_16_;
      uStack_98 = 0;
      uStack_80 = 0;
      auStack_90 = auStack_a8;
      FUN_140178040(auStack_a8,0x14a020cb0,
                    *(ulonglong *)(*(longlong *)(lVar7 + 0x10) + 8) & 0xfffffffffffffff0,
                    **(undefined4 **)*puVar11);
      piVar8 = (int *)FUN_140252dd0(0x149e48378,auStack_a8);
      iVar4 = *piVar8;
      if (iVar4 != 0) {
        func_0x0001450467e0(auStack_90._8_8_,auStack_78);
        puVar9 = (undefined8 *)func_0x00014502fdc0(auStack_a8);
        FUN_14018fb70(auStack_78,auStack_c8,*puVar9,iVar4);
        if ((lStack_c0 != 0) && (lStack_b8 != 0)) {
          iVar4 = FUN_1452c8460(auStack_c8);
          if (iVar4 == iVar1) {
code_r0x00014018fb27:
            return *puVar11;
          }
          lVar10 = func_0x000144ebbf10(*(undefined4 *)(auStack_90._0_8_ + 0x9c));
          if (lVar10 == 0) goto code_r0x00014018fb27;
          uVar2 = *(undefined4 *)(lVar10 + 0x2c4);
          uVar3 = *(undefined8 *)(lVar10 + 0x2c8);
          uVar5 = func_0x0001450469c0(uVar2,uVar3,iVar1);
          iVar4 = func_0x00014018fb50(uVar2,uVar3,uVar5);
          iVar6 = FUN_1452c8460(auStack_c8);
          if (iVar4 == iVar6) goto code_r0x00014018fb27;
        }
      }
      puVar11 = puVar11 + 1;
    } while (puVar11 !=
             (undefined8 *)((ulonglong)*(uint *)(lVar7 + 0x1c) * 8 + *(longlong *)(lVar7 + 0x20)));
  }
  return 0;
}

