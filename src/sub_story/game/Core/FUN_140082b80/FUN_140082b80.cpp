// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140082b80  size: 134 bytes
// Name:    FUN_140082b80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145264770
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Removing unreachable block (ram,0x000140082c53) */
/* WARNING: Removing unreachable block (ram,0x000140082c5b) */
/* WARNING: Removing unreachable block (ram,0x000140082c68) */

byte FUN_140082b80(undefined1 (*param_1) [16],longlong param_2)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  char cVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = *(undefined8 *)(param_2 + 0x70);
  uStack_20 = *(undefined8 *)(param_2 + 0x78);
  func_0x000144dc3790(&uStack_28,auStack_38);
  uVar1 = *(undefined4 *)(param_2 + 0x9c);
  cVar3 = FUN_145264770(uVar1,3);
  if (cVar3 == '\0') {
    bVar4 = 0;
  }
  else {
    auVar8._0_12_ = ZEXT812(0);
    auVar8._12_4_ = 0;
    auVar2 = vsubps_avx(auStack_38,*param_1);
    auVar7._0_4_ = auVar2._0_4_ * auVar2._0_4_;
    auVar7._4_4_ = auVar2._4_4_ * auVar2._4_4_;
    auVar7._8_4_ = auVar2._8_4_ * auVar2._8_4_;
    auVar7._12_4_ = auVar2._12_4_ * auVar2._12_4_;
    auVar2 = vblendps_avx(auVar7,auVar8,8);
    auVar2 = vhaddps_avx(auVar2,auVar2);
    auVar2 = vhaddps_avx(auVar2,auVar2);
    if (*(float *)param_1[1] < auVar2._0_4_) {
      lVar6 = *(longlong *)(param_1[1] + 8);
      lVar5 = func_0x000145311f50(uVar1);
      bVar4 = 0;
      if ((lVar6 != 0) && (lVar5 != 0)) {
        lVar6 = FUN_1451d0260(lVar5,lVar6);
        if (lVar6 == 0) {
          bVar4 = 0;
        }
        else {
          bVar4 = (*(byte *)(lVar6 + 0x8b) & 0x40) >> 6;
        }
      }
      return bVar4;
    }
    bVar4 = 1;
  }
  return bVar4;
}

