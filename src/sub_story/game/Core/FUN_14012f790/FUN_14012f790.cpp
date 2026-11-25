// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14012f790  size: 665 bytes
// Name:    FUN_14012f790
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14012fa30, FUN_14012fcd0, FUN_1452e2b10, FUN_145309330, FUN_140a41210, FUN_1424d5ca0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14012f790(undefined2 *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  char cVar5;
  longlong *plVar6;
  undefined8 unaff_RBX;
  ulonglong uVar7;
  int iVar9;
  int iVar10;
  undefined2 auStack_88 [4];
  longlong lStack_80;
  undefined8 uStack_78;
  undefined2 uStack_70;
  longlong lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined2 *puStack_50;
  undefined8 *puStack_48;
  undefined7 uVar8;
  
  if ((undefined2 *)(param_2 + 0x30) == param_1) {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 0x40);
  }
  else {
    FUN_140a41210(param_1,*(undefined8 *)(param_2 + 0x38));
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 0x40);
    FUN_14012fa30(param_1 + 0xc,*(undefined8 *)(param_2 + 0x50));
  }
  uVar3 = *(undefined8 *)(param_2 + 0x60);
  uVar8 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar7 = CONCAT71(uVar8,1);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  if (*(longlong *)(param_1 + 0x10) == 0 && *(longlong *)(param_1 + 4) == 0) {
    cVar5 = FUN_145309330(*(undefined4 *)(*(longlong *)(param_1 + 0x2c) + 0xc),
                          *(undefined8 *)(*(longlong *)(param_1 + 0x2c) + 0x10));
    if (cVar5 == '\0') {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x2c) + 0x18);
      if (lVar2 != 0) {
        FUN_14012fcd0(lVar2,auStack_88,param_1 + 0x1c);
        if (auStack_88 == param_1) {
          *(undefined8 *)(param_1 + 8) = uStack_78;
        }
        else {
          FUN_140a41210(param_1,lStack_80);
          *(undefined8 *)(param_1 + 8) = uStack_78;
          FUN_14012fa30(param_1 + 0xc,lStack_68);
        }
        *(undefined8 *)*(undefined1 (*) [16])(param_1 + 0x14) = uStack_60;
        *(undefined8 *)(param_1 + 0x18) = uStack_58;
        if (lStack_68 != 0) {
          FUN_1452e2b10(lStack_68,uStack_70);
        }
        lStack_68 = 0;
        if (lStack_80 != 0) {
          FUN_1452e2b10(lStack_80,auStack_88[0]);
        }
      }
      uVar7 = CONCAT71(uVar8,*(longlong *)(param_1 + 0x10) != 0 || *(longlong *)(param_1 + 4) != 0);
    }
    else {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x2c) + 0xc);
      _DAT_146df5b88 = (_DAT_146df5b88 & 0xffffffff) * 0x5cdcfaa7 + (_DAT_146df5b88 >> 0x20);
      if (0 < iVar1) {
        iVar9 = (int)((float)iVar1 * _DAT_14615a3a8 * (float)((uint)_DAT_146df5b88 & 0x7fff));
        iVar10 = iVar1;
        puStack_48 = (undefined8 *)(param_1 + 8);
        do {
          plVar6 = (longlong *)
                   func_0x000140578db0(*(undefined4 *)(*(longlong *)(param_1 + 0x2c) + 0xc),
                                       *(undefined8 *)(*(longlong *)(param_1 + 0x2c) + 0x10),iVar9);
          if ((((plVar6 != (longlong *)0x0) &&
               (cVar5 = (**(code **)(*plVar6 + 8))(plVar6,0x3eb43c60), cVar5 != '\0')) &&
              (lVar2 = plVar6[9], lVar2 != 0)) && (*(int *)(lVar2 + 0x68) != 0)) {
            FUN_1424d5ca0(lVar2,auStack_88,param_2 + 8);
            if (auStack_88 == param_1) {
              *puStack_48 = uStack_78;
            }
            else {
              puStack_50 = param_1 + 0xc;
              FUN_140a41210(param_1,lStack_80);
              *(undefined8 *)(param_1 + 8) = uStack_78;
              FUN_14012fa30(puStack_50,lStack_68);
            }
            auVar4._8_8_ = uStack_58;
            auVar4._0_8_ = uStack_60;
            *(undefined1 (*) [16])(param_1 + 0x14) = auVar4;
            if (lStack_68 != 0) {
              FUN_1452e2b10(lStack_68,uStack_70);
            }
            lStack_68 = 0;
            if (lStack_80 != 0) {
              FUN_1452e2b10(lStack_80,auStack_88[0]);
            }
            if (*(longlong *)(param_1 + 0x10) != 0 || *(longlong *)(param_1 + 4) != 0) {
              *(longlong **)(param_1 + 0x18) = plVar6;
              break;
            }
          }
          iVar9 = (iVar9 + 1) % iVar1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
    }
  }
  return uVar7 & 0xffffffff;
}

