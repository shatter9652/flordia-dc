// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14005c4d0  size: 416 bytes
// Name:    FUN_14005c4d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14005c670
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


uint FUN_14005c4d0(longlong *param_1,longlong *param_2,undefined8 param_3,char param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  longlong lStack_50;
  undefined8 uStack_48;
  undefined2 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  longlong lStack_30;
  undefined1 uStack_28;
  int iStack_27;
  bool bStack_23;
  undefined3 uStack_22;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  undefined1 uStack_1d;
  undefined4 uStack_1c;
  
  lVar2 = *param_1;
  auVar7._0_12_ = ZEXT812(0);
  auVar7._12_4_ = 0;
  auVar3 = vsubps_avx(*(undefined1 (*) [16])(lVar2 + 0x120),*(undefined1 (*) [16])(lVar2 + 0x100));
  auVar6._0_4_ = auVar3._0_4_ * auVar3._0_4_;
  auVar6._4_4_ = auVar3._4_4_ * auVar3._4_4_;
  auVar6._8_4_ = auVar3._8_4_ * auVar3._8_4_;
  auVar6._12_4_ = auVar3._12_4_ * auVar3._12_4_;
  auVar3 = vblendps_avx(auVar6,auVar7,8);
  auVar3 = vhaddps_avx(auVar3,auVar3);
  auVar3 = vhaddps_avx(auVar3,auVar3);
  uStack_3c = 0;
  lStack_50 = lVar2 + 0x1a8;
  if (0.0 < auVar3._0_4_) {
    lStack_50 = 0;
  }
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_28 = 1;
  uStack_1e = 0;
  if ((*(byte *)(*param_2 + 0x10) & 4) != 0) {
    lStack_50 = 0;
  }
  uStack_48 = *(undefined8 *)(lVar2 + 0x1b4);
  if (param_4 != '\0') {
    uStack_3c = *(undefined4 *)(lVar2 + 0x240);
  }
  lStack_30 = lVar2 + 0x1e0;
  auVar8[1] = DAT_1461594e8;
  auVar8[0] = DAT_1461594e8;
  auVar8[2] = DAT_1461594e8;
  auVar8[3] = DAT_1461594e8;
  auVar8[4] = DAT_1461594e8;
  auVar8[5] = DAT_1461594e8;
  auVar8[6] = DAT_1461594e8;
  auVar8[7] = DAT_1461594e8;
  auVar8[8] = DAT_1461594e8;
  auVar8[9] = DAT_1461594e8;
  auVar8[10] = DAT_1461594e8;
  auVar8[0xb] = DAT_1461594e8;
  auVar8[0xc] = DAT_1461594e8;
  auVar8[0xd] = DAT_1461594e8;
  auVar8[0xe] = DAT_1461594e8;
  auVar8[0xf] = DAT_1461594e8;
  uStack_34 = *(undefined4 *)(lVar2 + 0x238);
  uVar4 = *(uint *)(lVar2 + 0xdc);
  iStack_27 = ((byte)((byte)uVar4 >> 3) & 1) << 0x18;
  uStack_1c = *(undefined4 *)(lVar2 + 0x254);
  uVar5 = *(uint *)(lVar2 + 0xd0);
  auVar3 = vpinsrb_avx(ZEXT416(uVar5 >> 0x17),uVar5 >> 0x1e,1);
  plVar1 = (longlong *)(param_1[1] + 0x1dc808);
  auVar3 = vpinsrb_avx(auVar3,CONCAT31((int3)(uVar4 >> 8),(byte)uVar4 >> 4),2);
  auVar3 = vpinsrb_avx(auVar3,uVar4 >> 0x17,3);
  auVar3 = vpand_avx(auVar3,auVar8);
  _bStack_23 = CONCAT31(auVar3._0_3_,(uVar5 >> 0x10 & 1) == 0);
  uStack_1f = auVar3[3];
  uStack_1d = 1;
  uVar4 = FUN_14005c670(*(undefined4 *)(lVar2 + 0x1bc),*(undefined4 *)(lVar2 + 0x1c0),param_1[1],
                        param_2,param_3,plVar1,&lStack_50);
  if (uVar4 == 0) {
    uVar5 = 0;
    if (((*(byte *)(*param_1 + 0xd3) & 0x20) != 0) && (lVar2 = *plVar1, lVar2 != 0)) {
      uVar5 = (uint)(int)*(char *)(lVar2 + 8) >> 7 & 0xc;
    }
  }
  else {
    uVar5 = 10;
    if ((uVar4 != 9) && (uVar5 = 6, uVar4 != 5)) {
      uVar5 = uVar4;
    }
  }
  return uVar5;
}

