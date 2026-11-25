// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140002080  size: 661 bytes
// Name:    FUN_140002080
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fb81a0, FUN_143cc39b0, FUN_140002c80, FUN_145289370
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140002080(longlong param_1)

{
  undefined1 (*pauVar1) [32];
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [64];
  
  uVar9 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0;
  cVar3 = func_0x000144da28f0(*(undefined4 *)(uVar9 + 0x9c));
  uVar6 = _DAT_14abbef40;
  if (cVar3 != '\0') {
    uVar4 = func_0x000144dc06d0(*(undefined4 *)(param_1 + 0x3308),_DAT_14abbef40);
    if (uVar4 < _DAT_1499f7694) {
      auVar10._0_12_ = ZEXT812(0);
      auVar10._12_4_ = 0;
      auVar10 = vcmpps_avx(auVar10,*(undefined1 (*) [16])(param_1 + 0x3320),0);
      uVar5 = vmovmskps_avx(auVar10);
      if ((~(byte)uVar5 & 7) == 0) {
        return;
      }
    }
    *(undefined4 *)(param_1 + 0x3308) = uVar6;
    auVar12 = ZEXT464(_DAT_1499f76a0);
    uVar6 = _DAT_1499f76a8;
    lVar7 = func_0x000144d9f7c0(*(undefined4 *)(uVar9 + 0x9c));
    if (lVar7 == 0) {
      auStack_88._0_12_ = ZEXT812(0);
      auStack_88._12_4_ = 0;
    }
    else {
      uVar8 = func_0x000144ecfea0(lVar7);
      FUN_144fb81a0(uVar8,auStack_88,1);
    }
    uStack_78 = *(undefined8 *)(uVar9 + 0x70);
    uStack_70 = *(undefined8 *)(uVar9 + 0x78);
    func_0x000144dc3790(&uStack_78,auStack_58);
    auVar13 = ZEXT1664(*(undefined1 (*) [16])(param_1 + 0x3320));
    pauVar1 = (undefined1 (*) [32])(param_1 + 0x3320);
    cVar3 = FUN_140002c80(pauVar1,auStack_58,auVar12._0_8_,auStack_88,uVar6);
    if (cVar3 == '\0') {
      *pauVar1 = ZEXT1232(ZEXT812(0));
      uVar8 = _UNK_14614f7f8;
      *(undefined8 *)(param_1 + 0x3340) = _DAT_14614f7f0;
      *(undefined8 *)(param_1 + 0x3348) = uVar8;
      *(undefined8 *)(param_1 + 0x3360) = 0;
      *(undefined1 (*) [16])(param_1 + 0x3350) = ZEXT816(0) << 0x20;
      *(undefined1 *)(param_1 + 0x3368) = 0xff;
      *(undefined4 *)(param_1 + 0x336c) = 0;
      *(undefined1 *)(param_1 + 0x3370) = 0;
      *(undefined1 (*) [16])(param_1 + 0x3378) = ZEXT816(0) << 0x20;
    }
    else {
      auVar11._0_12_ = ZEXT812(0);
      auVar11._12_4_ = 0;
      auVar12 = ZEXT1664(auVar11);
      auVar10 = vcmpps_avx(auVar13._0_16_,auVar11,0);
      uVar6 = vmovmskps_avx(auVar10);
      cVar3 = FUN_143cc39b0(param_1,(~(byte)uVar6 & 7) != 0);
      uVar2 = _UNK_14614f7f8;
      uVar8 = _DAT_14614f7f0;
      if (cVar3 != '\0') {
        uVar4 = func_0x000144dc06d0(*(undefined4 *)(param_1 + 0x3310),_DAT_14abbef40);
        if (uVar4 <= _DAT_1499f769c) {
          return;
        }
        uStack_68 = *(undefined8 *)*pauVar1;
        uStack_60 = *(undefined8 *)(param_1 + 0x3328);
        cVar3 = FUN_145289370(&uStack_68,0x16);
        if (cVar3 != '\0') {
          *pauVar1 = ZEXT1232(ZEXT812(0));
          uVar8 = _UNK_14614f7f8;
          *(undefined8 *)(param_1 + 0x3340) = _DAT_14614f7f0;
          *(undefined8 *)(param_1 + 0x3348) = uVar8;
          *(undefined8 *)(param_1 + 0x3360) = 0;
          *(undefined1 (*) [16])(param_1 + 0x3350) = ZEXT816(0) << 0x20;
          *(undefined1 *)(param_1 + 0x3368) = 0xff;
          *(undefined4 *)(param_1 + 0x336c) = 0;
          *(undefined1 *)(param_1 + 0x3370) = 0;
          *(undefined1 (*) [16])(param_1 + 0x3378) = ZEXT816(0) << 0x20;
          *(undefined8 *)(param_1 + 0x3388) = 0;
        }
        *(undefined4 *)(param_1 + 0x3310) = _DAT_14abbef40;
        return;
      }
      *pauVar1 = ZEXT1232(ZEXT812(0));
      *(undefined8 *)(param_1 + 0x3340) = uVar8;
      *(undefined8 *)(param_1 + 0x3348) = uVar2;
      *(undefined1 (*) [16])(param_1 + 0x3350) = auVar12._0_16_;
      *(undefined8 *)(param_1 + 0x3360) = 0;
      *(undefined1 *)(param_1 + 0x3368) = 0xff;
      *(undefined4 *)(param_1 + 0x336c) = 0;
      *(undefined1 *)(param_1 + 0x3370) = 0;
      *(undefined1 (*) [16])(param_1 + 0x3378) = auVar12._0_16_;
    }
    *(undefined8 *)(param_1 + 0x3388) = 0;
  }
  return;
}

