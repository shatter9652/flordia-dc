// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140007de0  size: 409 bytes
// Name:    FUN_140007de0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14006e3d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140007de0(undefined8 param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 (*pauVar2) [32];
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uStack_48;
  longlong lStack_40;
  uint uStack_34;
  char cStack_30;
  
  uStack_48 = param_1;
  FUN_14006e3d0(param_4,&lStack_40);
  if (cStack_30 == '\x01') {
    auVar7._0_12_ = ZEXT812(0);
    auVar7._12_4_ = 0;
    pauVar2 = (undefined1 (*) [32])
              ((ulonglong)(uStack_34 & 0xf) * 0x70 + 0x18 +
              (ulonglong)(uStack_34 >> 4) * 0x710 + lStack_40);
    *(undefined8 *)(pauVar2[-1] + 0x18) = param_1;
    *pauVar2 = ZEXT1632(auVar7);
    pauVar2[1] = ZEXT1632(auVar7);
    pauVar2[2] = ZEXT1632(auVar7);
    *(undefined4 *)pauVar2[3] = 0xffffffff;
    *(undefined2 *)(pauVar2[3] + 4) = 0;
    *param_3 = (longlong)pauVar2;
  }
  else {
    pauVar2 = (undefined1 (*) [32])
              ((ulonglong)(uStack_34 & 0xf) * 0x70 + 0x18 +
              (ulonglong)(uStack_34 >> 4) * 0x710 + lStack_40);
    iVar1 = *(int *)pauVar2[3];
    *param_3 = (longlong)pauVar2;
    if (iVar1 != -1) {
      FUN_14006e3d0(param_4,&lStack_40,&uStack_48);
      if (cStack_30 != '\0') {
        auVar8._0_12_ = ZEXT812(0);
        auVar8._12_4_ = 0;
        lVar5 = (ulonglong)(uStack_34 & 0xf) * 0x70;
        lVar4 = (ulonglong)(uStack_34 >> 4) * 0x710 + lStack_40;
        *(undefined8 *)(lVar5 + 0x10 + lVar4) = param_1;
        *(undefined1 (*) [32])(lVar5 + 0x18 + lVar4) = ZEXT1632(auVar8);
        *(undefined1 (*) [32])(lVar5 + 0x38 + lVar4) = ZEXT1632(auVar8);
        *(undefined1 (*) [32])(lVar5 + 0x58 + lVar4) = ZEXT1632(auVar8);
        *(undefined4 *)(lVar5 + 0x78 + lVar4) = 0xffffffff;
        *(undefined2 *)(lVar5 + 0x7c + lVar4) = 0;
      }
      *param_2 = (ulonglong)
                 *(uint *)((ulonglong)(uStack_34 & 0xf) * 0x70 + 0x78 +
                          (ulonglong)(uStack_34 >> 4) * 0x710 + lStack_40) * 0x50 + 0x14789bb40;
      return;
    }
  }
  uVar3 = (ulonglong)_DAT_14789bb3c;
  auVar6._0_12_ = ZEXT812(0);
  auVar6._12_4_ = 0;
  *(uint *)pauVar2[3] = _DAT_14789bb3c;
  _DAT_14789bb3c = _DAT_14789bb3c + 1;
  lVar4 = uVar3 * 0x50;
  *(undefined1 (*) [32])(lVar4 + 0x14789bb6a) = ZEXT1632(auVar6);
  *(undefined1 (*) [32])(lVar4 + 0x14789bb60) = ZEXT1632(auVar6);
  *(undefined1 (*) [32])(lVar4 + 0x14789bb40) = ZEXT1632(auVar6);
  *param_2 = lVar4 + 0x14789bb40;
  *(undefined8 *)(lVar4 + 0x14789bb80) = param_1;
  return;
}

