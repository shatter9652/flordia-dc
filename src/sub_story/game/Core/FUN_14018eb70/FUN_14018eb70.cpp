// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14018eb70  size: 808 bytes
// Name:    FUN_14018eb70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14018eea0, FUN_14018eed0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14018eb70(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 auVar6 [64];
  undefined1 auVar7 [64];
  undefined1 auVar8 [16];
  undefined1 auVar9 [64];
  float fVar10;
  undefined1 auVar11 [64];
  float fVar12;
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  undefined8 uStack_130;
  undefined4 uStack_124;
  undefined1 auStack_120 [32];
  undefined1 auStack_100 [32];
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [24];
  undefined8 uStack_a8;
  undefined1 auStack_a0 [24];
  
  puVar1 = *(undefined8 **)(param_1 + 400);
  if ((puVar1 != (undefined8 *)0x0) && (*(longlong *)(param_1 + 0x198) != 0)) {
    auVar6 = ZEXT464(*(uint *)(param_1 + 0x5c8));
    fVar3 = (float)func_0x000144d9ff70(param_1 + 0x4d0,*(uint *)(param_1 + 0x5c8));
    auVar7 = ZEXT464(*(uint *)(param_1 + 0x5d0));
    fVar4 = (float)func_0x000144d9ff70(param_1 + 0x460,*(uint *)(param_1 + 0x5d0));
    fVar4 = fVar3 * fVar4;
    auVar9 = ZEXT464((uint)(_DAT_14615b6c0 * fVar4));
    auVar14 = ZEXT464((uint)(_DAT_14615b6b8 + fVar4));
    fVar10 = _DAT_14615b6c0;
    fVar12 = _DAT_14615b6b8;
    fVar4 = (float)func_0x000144d9ff70(fVar4,auVar7._0_8_);
    auVar11 = ZEXT464((uint)(fVar10 * fVar3 * fVar4));
    auVar13 = ZEXT464((uint)(fVar12 + fVar3 * fVar4));
    uVar5 = func_0x000145f40830(auVar9._0_8_);
    auVar8._0_12_ = ZEXT812(0);
    auVar8._12_4_ = 0;
    auVar9 = ZEXT1664(auVar8);
    auVar8 = vcmpss_avx(auVar8,auVar14._0_16_,2);
    auVar7 = ZEXT1664(CONCAT412(auVar8._12_4_ & extraout_var._4_4_,
                                CONCAT48(auVar8._8_4_ & extraout_var._0_4_,
                                         CONCAT44(auVar8._4_4_ & (uint)((ulonglong)uVar5 >> 0x20),
                                                  auVar8._0_4_ & (uint)uVar5))));
    uVar5 = func_0x000145f40830(auVar11._0_8_,auVar8._0_8_);
    auVar8 = vcmpss_avx(auVar9._0_16_,auVar13._0_16_,2);
    auStack_a0 = ZEXT824(0);
    auStack_c0._16_8_ = 0;
    auStack_c0._0_16_ = ZEXT816(0) << 0x40;
    uStack_a8 = 0;
    auStack_120 = ZEXT1632(ZEXT816(0) << 0x40);
    uStack_130 = 0xedb9571d04000000;
    uStack_124 = 0;
    auVar6 = ZEXT1664(auVar6._0_16_);
    auVar7 = ZEXT1664(auVar7._0_16_);
    auVar9 = ZEXT1664(CONCAT412(auVar8._12_4_ & extraout_var_00._4_4_,
                                CONCAT48(auVar8._8_4_ & extraout_var_00._0_4_,
                                         CONCAT44(auVar8._4_4_ & (uint)((ulonglong)uVar5 >> 0x20),
                                                  auVar8._0_4_ & (uint)uVar5))));
    auStack_100 = auStack_120;
    auStack_e0 = auStack_120;
    func_0x0001452b2420(&uStack_130,0xea0151dc);
    func_0x0001452b2420(&uStack_130,0x57f8c1f8,auVar6._0_8_);
    func_0x0001452b2420(&uStack_130,0x4f4cefd4,*(undefined4 *)(param_1 + 0x5f0));
    func_0x0001452b2420(&uStack_130,0x96a1524,auVar7._0_8_);
    func_0x0001452b2420(&uStack_130,0x7ffe9bc7,auVar9._0_8_);
    func_0x000145271670(*puVar1,0,&uStack_130);
    func_0x000145271670(**(undefined8 **)(param_1 + 0x198),0,&uStack_130);
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10);
    FUN_14018eea0(*(undefined8 *)(param_1 + 400),*(undefined4 *)(lVar2 + 0xdc),
                  *(undefined4 *)(lVar2 + 0xe0));
    FUN_14018eea0(*(undefined8 *)(param_1 + 0x198),*(undefined4 *)(lVar2 + 0xe4),
                  *(undefined4 *)(lVar2 + 0xe8));
    FUN_14018eed0(*(undefined8 *)(param_1 + 400));
    FUN_14018eed0(*(undefined8 *)(param_1 + 0x198));
    lVar2 = func_0x000144da31b0(param_1 + 0x1b0);
    if (lVar2 != 0) {
      fVar4 = (float)(int)*(short *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10) + 0xc) *
              _DAT_146159ef4;
      auVar6 = ZEXT464((uint)fVar4);
      if (*(longlong *)(param_1 + 0x1a0) != 0) {
        *(float *)(*(longlong *)(param_1 + 0x1a0) + 0xc) = fVar4;
      }
      lVar2 = func_0x000144da31b0(param_1 + 0x1b0);
      func_0x0001453f6280((ulonglong)((uint)*(ushort *)(lVar2 + 0xd4) * _DAT_14ab73a8c) +
                          *(longlong *)
                           (_DAT_14ab73aa0 + 0x8ac0 + (ulonglong)*(byte *)(lVar2 + 0x7e) * 0x8ad0),
                          auVar6._0_8_);
    }
    lVar2 = func_0x000144da31b0(param_1 + 0x1b8);
    if (lVar2 != 0) {
      func_0x0001453f6280((ulonglong)((uint)*(ushort *)(lVar2 + 0xd4) * _DAT_14ab73a8c) +
                          *(longlong *)
                           (_DAT_14ab73aa0 + 0x8ac0 + (ulonglong)*(byte *)(lVar2 + 0x7e) * 0x8ad0),
                          (float)(int)*(short *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10)
                                                + 0xc) * _DAT_146159ef4);
    }
  }
  return;
}

