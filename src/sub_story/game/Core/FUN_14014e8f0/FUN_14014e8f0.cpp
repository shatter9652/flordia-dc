// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014e8f0  size: 301 bytes
// Name:    FUN_14014e8f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1405e2e60, FUN_140494be0, FUN_1439a4d80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14014e8f0(longlong *param_1)

{
  undefined1 auVar1 [16];
  char cVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [16];
  undefined1 aauStack_58 [2] [16];
  
  if ((*(byte *)(param_1 + 0xe) & 4) == 0) {
    bVar4 = *(byte *)(param_1 + 0xe) | 4;
    *(byte *)(param_1 + 0xe) = bVar4;
    lVar3 = *param_1;
    if (param_1[7] == 0) {
      lVar5 = 0;
    }
    else {
      fVar6 = (float)FUN_1405e2e60(lVar3,param_1[7],0,0);
      lVar5 = param_1[7];
      uStack_78 = *(undefined8 *)(lVar5 + 0x70);
      uStack_70 = *(undefined8 *)(lVar5 + 0x78);
      func_0x000144dc3790(&uStack_78,aauStack_58);
      lVar3 = *param_1;
      uStack_88 = *(undefined8 *)(lVar3 + 0x70);
      uStack_80 = *(undefined8 *)(lVar3 + 0x78);
      func_0x000144dc3790(&uStack_88,auStack_68);
      auVar8._0_12_ = ZEXT812(0);
      auVar8._12_4_ = 0;
      auVar1 = vsubps_avx(aauStack_58[0],auStack_68);
      auVar7._0_4_ = auVar1._0_4_ * auVar1._0_4_;
      auVar7._4_4_ = auVar1._4_4_ * auVar1._4_4_;
      auVar7._8_4_ = auVar1._8_4_ * auVar1._8_4_;
      auVar7._12_4_ = auVar1._12_4_ * auVar1._12_4_;
      auVar1 = vblendps_avx(auVar7,auVar8,8);
      auVar1 = vhaddps_avx(auVar1,auVar1);
      auVar1 = vhaddps_avx(auVar1,auVar1);
      bVar4 = *(byte *)(param_1 + 0xe) & 0xf7 | (auVar1._0_4_ <= fVar6 * fVar6) << 3;
      *(byte *)(param_1 + 0xe) = bVar4;
    }
    lVar3 = func_0x000145226dc0(*(undefined4 *)(lVar3 + 0x9c));
    if (lVar3 != 0) {
      cVar2 = FUN_1439a4d80(*(undefined8 *)(lVar3 + 8),*(undefined4 *)(lVar3 + 0x680),lVar5);
      if (cVar2 != '\0') {
        cVar2 = FUN_140494be0(_DAT_14a9b3e18,0xd3562735);
        if (cVar2 != '\0') {
          *(byte *)(param_1 + 0xe) = bVar4 | 8;
        }
      }
    }
  }
  return;
}

