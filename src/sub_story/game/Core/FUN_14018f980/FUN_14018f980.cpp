// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14018f980  size: 456 bytes
// Name:    FUN_14018f980
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14018fb70, FUN_140178040, FUN_140252dd0, FUN_1452c8460
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_14018f980(longlong param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 auVar10 [64];
  undefined1 auStack_c8 [8];
  longlong lStack_c0;
  longlong lStack_b8;
  undefined1 auStack_a8 [16];
  undefined4 uStack_98;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined1 auStack_78 [56];
  
  if ((-1 < param_2) && (*(int *)(param_1 + 0x1c) != 0)) {
    puVar9 = *(undefined8 **)(param_1 + 0x20);
    auVar10 = ZEXT1264(ZEXT812(0));
    do {
      auStack_a8 = auVar10._0_16_;
      uStack_98 = 0;
      uStack_80 = 0;
      auStack_90 = auStack_a8;
      FUN_140178040(auStack_a8,0x14a020cb0,
                    *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 8) & 0xfffffffffffffff0,
                    **(undefined4 **)*puVar9);
      piVar6 = (int *)FUN_140252dd0(0x149e48378,auStack_a8);
      iVar3 = *piVar6;
      if (iVar3 != 0) {
        func_0x0001450467e0(auStack_90._8_8_,auStack_78);
        puVar7 = (undefined8 *)func_0x00014502fdc0(auStack_a8);
        FUN_14018fb70(auStack_78,auStack_c8,*puVar7,iVar3);
        if ((lStack_c0 != 0) && (lStack_b8 != 0)) {
          iVar3 = FUN_1452c8460(auStack_c8);
          if (iVar3 == param_2) {
LAB_14018fb27:
            return *puVar9;
          }
          lVar8 = func_0x000144ebbf10(*(undefined4 *)(auStack_90._0_8_ + 0x9c));
          if (lVar8 == 0) goto LAB_14018fb27;
          uVar1 = *(undefined4 *)(lVar8 + 0x2c4);
          uVar2 = *(undefined8 *)(lVar8 + 0x2c8);
          uVar4 = func_0x0001450469c0(uVar1,uVar2,param_2);
          iVar3 = func_0x00014018fb50(uVar1,uVar2,uVar4);
          iVar5 = FUN_1452c8460(auStack_c8);
          if (iVar3 == iVar5) goto LAB_14018fb27;
        }
      }
      puVar9 = puVar9 + 1;
    } while (puVar9 != (undefined8 *)
                       ((ulonglong)*(uint *)(param_1 + 0x1c) * 8 + *(longlong *)(param_1 + 0x20)));
  }
  return 0;
}

