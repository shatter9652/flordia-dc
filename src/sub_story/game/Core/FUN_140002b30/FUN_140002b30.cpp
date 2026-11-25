// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140002b30  size: 333 bytes
// Name:    FUN_140002b30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14501bc80, FUN_143620570, FUN_14501bda0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140002b30(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 (*pauVar4) [16];
  undefined4 uVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 auVar8 [16];
  undefined1 auVar9 [64];
  undefined1 auStack_78 [32];
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined1 aauStack_48 [2] [16];
  
  lVar2 = func_0x000144ef6280(*(undefined4 *)(param_1 + 0x9c));
  if ((lVar2 != 0) && (((*(byte *)(lVar2 + 0x65) & 8) != 0 || ((*(byte *)(lVar2 + 0xf1) & 8) != 0)))
     ) {
    return 0;
  }
  lVar2 = func_0x0001450718b0(param_1,1);
  if (lVar2 == 0) {
    auVar8._0_12_ = ZEXT812(0);
    auVar8._12_4_ = 0;
    auVar7._0_12_ = ZEXT812(0);
    auVar7._12_4_ = 0;
  }
  else {
    uStack_58 = *(undefined1 *)(lVar2 + 0x2b56);
    FUN_14501bda0(*(undefined8 *)(lVar2 + 0x308),*(undefined1 *)(lVar2 + 0x2a45),&uStack_50,
                  *(undefined2 *)(lVar2 + 0x2b54));
    uVar5 = _DAT_14a9b3f50;
    uVar3 = func_0x00014501bc50(uStack_50);
    auVar9._0_8_ = FUN_14501bc80(uVar3,uVar5);
    auVar9._8_56_ = extraout_var;
    uStack_58 = *(undefined1 *)(lVar2 + 0x2b5a);
    auVar9 = ZEXT1664(auVar9._0_16_);
    FUN_14501bda0(*(undefined8 *)(lVar2 + 0x308),*(undefined1 *)(lVar2 + 0x2a45),&uStack_50,
                  *(undefined2 *)(lVar2 + 0x2b58));
    uVar3 = func_0x00014501bc50(uStack_50);
    uVar3 = FUN_14501bc80(uVar3,uVar5);
    auVar8 = auVar9._0_16_;
    fVar6 = (float)uVar3;
    if (fVar6 * fVar6 + auVar9._0_4_ * auVar9._0_4_ < _DAT_145fc6f8c) {
      return 0;
    }
    auVar7._0_4_ = (uint)fVar6 ^ _DAT_145fc6f10;
    auVar7._4_4_ = (uint)((ulonglong)uVar3 >> 0x20) ^ _DAT_145fc6f10;
    auVar7._8_4_ = extraout_var_00._0_4_ ^ _DAT_145fc6f10;
    auVar7._12_4_ = extraout_var_00._4_4_ ^ _DAT_145fc6f10;
  }
  auVar7 = vinsertps_avx(auVar8,auVar7,0x1c);
  aauStack_48[0] = vinsertps_avx(auVar7,auVar8,0x34);
  cVar1 = FUN_143620570(param_1);
  if (cVar1 == '\0') {
    return 0;
  }
  if (param_1 != 0) {
    uVar5 = *(undefined4 *)(param_1 + 0x9c);
    lVar2 = func_0x000144da6540(uVar5);
    if ((((((lVar2 == 0) || (*(longlong *)(lVar2 + 0x1080) == 0)) ||
          ((*(byte *)(*(longlong *)(lVar2 + 0x1080) + 0x20) & 0x40) == 0)) &&
         ((lVar2 = func_0x000144d9f7c0(uVar5), lVar2 == 0 ||
          ((cVar1 = func_0x000144f14c70(*(undefined4 *)(lVar2 + 0x14),1), cVar1 == '\0' &&
           (cVar1 = func_0x0001406d3bd0(*(undefined4 *)(lVar2 + 0x18),1), cVar1 == '\0')))))) &&
        ((lVar2 = func_0x000144fa1860(uVar5), lVar2 == 0 || ((*(byte *)(lVar2 + 0xe40) & 0x1c) == 0)
         ))) && (cVar1 = FUN_1451a5aa0(param_1), cVar1 == '\0')) {
      pauVar4 = (undefined1 (*) [16])0x0;
      cVar1 = FUN_1452dd5f0(uVar5,0);
      if (cVar1 != '\0') goto code_r0x0001436204ba;
      lVar2 = func_0x000144f3f020(uVar5);
      if (lVar2 != 0) {
        FUN_144f3ef00(auStack_78,param_1);
        pauVar4 = aauStack_48;
        FUN_1437e8080(auStack_78,pauVar4);
        cVar1 = FUN_140c70250(pauVar4);
        if (cVar1 != '\0') goto code_r0x0001436204b8;
        uVar5 = *(undefined4 *)(param_1 + 0x9c);
      }
      cVar1 = FUN_1405580e0(uVar5);
      if (cVar1 == '\0') {
        lVar2 = FUN_144e58980(uVar5);
        pauVar4 = (undefined1 (*) [16])CONCAT71((int7)((ulonglong)pauVar4 >> 8),lVar2 == 0);
        goto code_r0x0001436204ba;
      }
    }
  }
code_r0x0001436204b8:
  pauVar4 = (undefined1 (*) [16])0x0;
code_r0x0001436204ba:
  return (ulonglong)pauVar4 & 0xffffffff;
}

