// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140001000  size: 236 bytes
// Name:    FUN_140001000
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140002320, FUN_140001830, FUN_1400019e0, FUN_1400016d0, FUN_140001550, FUN_140001340, FUN_140494be0, FUN_14286b850, FUN_1400012a0, FUN_1400010f0, FUN_140001440, FUN_140001200
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140001000(longlong param_1)

{
  undefined1 (*pauVar1) [32];
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  
  uVar10 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0;
  uStack_40 = 0x14000101d;
  lVar7 = func_0x000144e59150(*(undefined4 *)(uVar10 + 0x9c));
  if (((*(byte *)(lVar7 + 0x2b) & 2) != 0) && ((*(byte *)(lVar7 + 0x2b) & 1) == 0)) {
    lVar7 = param_1 + 0xa0;
    uStack_40 = 0x140001043;
    FUN_140001550(*(undefined8 *)(param_1 + 0x308));
    if ((*(longlong *)(param_1 + 0x10c0) != 0) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x10c0) + 0x10) != 0)) {
      uStack_40 = 0x14000105d;
      FUN_1400010f0();
    }
    uStack_40 = 0x140001065;
    FUN_140002320(lVar7);
    uStack_40 = 0x140001070;
    lVar8 = func_0x000144da6540(*(undefined4 *)(uVar10 + 0x9c));
    uStack_40 = 0x14000107c;
    FUN_140001440(*(undefined8 *)(lVar8 + 0x1080));
    uStack_40 = 0x140001081;
    FUN_140001830();
    lVar8 = *(longlong *)(param_1 + 0x10e8);
    if (lVar8 != 0) {
      uStack_40 = 0x140001095;
      FUN_1400012a0(lVar8);
      uStack_40 = 0x14000109d;
      FUN_140001200(lVar8);
      uStack_40 = 0x1400010ae;
      cVar3 = FUN_140494be0(_DAT_14a9b3e18,0x69474895);
      if (cVar3 != '\0') {
        uStack_40 = 0x1400010ea;
        FUN_14286b850(lVar8);
      }
    }
    uStack_40 = 0x1400010ba;
    FUN_1400016d0(lVar7);
    uStack_40 = 0x1400010c2;
    FUN_1400019e0(lVar7);
    uStack_40 = 0x1400010ca;
    FUN_140001340(param_1);
    uVar10 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0;
    cVar3 = func_0x000144da28f0(*(undefined4 *)(uVar10 + 0x9c));
    uVar6 = _DAT_14abbef40;
    if (cVar3 != '\0') {
      uVar4 = func_0x000144dc06d0(*(undefined4 *)(param_1 + 0x3308),_DAT_14abbef40);
      if (uVar4 < _DAT_1499f7694) {
        auVar11._0_12_ = ZEXT812(0);
        auVar11._12_4_ = 0;
        auVar11 = vcmpps_avx(auVar11,*(undefined1 (*) [16])(param_1 + 0x3320),0);
        uVar5 = vmovmskps_avx(auVar11);
        if ((~(byte)uVar5 & 7) == 0) {
          return;
        }
      }
      *(undefined4 *)(param_1 + 0x3308) = uVar6;
      auVar13 = ZEXT464(_DAT_1499f76a0);
      uVar6 = _DAT_1499f76a8;
      lVar7 = func_0x000144d9f7c0(*(undefined4 *)(uVar10 + 0x9c));
      if (lVar7 == 0) {
        auStack_88._0_12_ = ZEXT812(0);
        auStack_88._12_4_ = 0;
      }
      else {
        uVar9 = func_0x000144ecfea0(lVar7);
        FUN_144fb81a0(uVar9,auStack_88,1);
      }
      uStack_78 = *(undefined8 *)(uVar10 + 0x70);
      uStack_70 = *(undefined8 *)(uVar10 + 0x78);
      func_0x000144dc3790(&uStack_78,auStack_58);
      auVar14 = ZEXT1664(*(undefined1 (*) [16])(param_1 + 0x3320));
      pauVar1 = (undefined1 (*) [32])(param_1 + 0x3320);
      cVar3 = FUN_140002c80(pauVar1,auStack_58,auVar13._0_8_,auStack_88,uVar6);
      if (cVar3 == '\0') {
        *pauVar1 = ZEXT1232(ZEXT812(0));
        uVar9 = _UNK_14614f7f8;
        *(undefined8 *)(param_1 + 0x3340) = _DAT_14614f7f0;
        *(undefined8 *)(param_1 + 0x3348) = uVar9;
        *(undefined8 *)(param_1 + 0x3360) = 0;
        *(undefined1 (*) [16])(param_1 + 0x3350) = ZEXT816(0) << 0x20;
        *(undefined1 *)(param_1 + 0x3368) = 0xff;
        *(undefined4 *)(param_1 + 0x336c) = 0;
        *(undefined1 *)(param_1 + 0x3370) = 0;
        *(undefined1 (*) [16])(param_1 + 0x3378) = ZEXT816(0) << 0x20;
      }
      else {
        auVar12._0_12_ = ZEXT812(0);
        auVar12._12_4_ = 0;
        auVar13 = ZEXT1664(auVar12);
        auVar11 = vcmpps_avx(auVar14._0_16_,auVar12,0);
        uVar6 = vmovmskps_avx(auVar11);
        cVar3 = FUN_143cc39b0(param_1,(~(byte)uVar6 & 7) != 0);
        uVar2 = _UNK_14614f7f8;
        uVar9 = _DAT_14614f7f0;
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
            uVar9 = _UNK_14614f7f8;
            *(undefined8 *)(param_1 + 0x3340) = _DAT_14614f7f0;
            *(undefined8 *)(param_1 + 0x3348) = uVar9;
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
        *(undefined8 *)(param_1 + 0x3340) = uVar9;
        *(undefined8 *)(param_1 + 0x3348) = uVar2;
        *(undefined1 (*) [16])(param_1 + 0x3350) = auVar13._0_16_;
        *(undefined8 *)(param_1 + 0x3360) = 0;
        *(undefined1 *)(param_1 + 0x3368) = 0xff;
        *(undefined4 *)(param_1 + 0x336c) = 0;
        *(undefined1 *)(param_1 + 0x3370) = 0;
        *(undefined1 (*) [16])(param_1 + 0x3378) = auVar13._0_16_;
      }
      *(undefined8 *)(param_1 + 0x3388) = 0;
    }
    return;
  }
  return;
}

