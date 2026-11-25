// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14003cd20  size: 253 bytes
// Name:    FUN_14003cd20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14003ce50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14003cd20(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  char cVar3;
  uint uVar4;
  undefined8 unaff_RBP;
  ulonglong uVar5;
  bool bVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined7 uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    plVar1 = *(longlong **)(param_2 + 0x20);
    uVar6 = (undefined7)((ulonglong)unaff_RBP >> 8);
    uVar5 = CONCAT71(uVar6,1);
    if (plVar1 != (longlong *)0x0) {
      cVar3 = (**(code **)(*plVar1 + 0x80))(plVar1,0x1499ff060);
      if (cVar3 == '\0') {
        uVar4 = func_0x000144dc06c0(*(undefined4 *)(param_1 + 0xec8));
        if (uVar4 < 500) {
          uVar5 = CONCAT71(uVar6,*(undefined1 *)(param_1 + 0xec4));
        }
        else {
          uStack_68 = *(undefined8 *)(param_3 + 0x70);
          uStack_60 = *(undefined8 *)(param_3 + 0x78);
          func_0x000144dc3790(&uStack_68,auStack_48);
          uStack_78 = *(undefined8 *)(param_2 + 0x70);
          uStack_70 = *(undefined8 *)(param_2 + 0x78);
          func_0x000144dc3790(&uStack_78,auStack_58);
          fVar8 = (float)FUN_14003ce50(param_2,param_3);
          auVar11._0_12_ = ZEXT812(0);
          auVar11._12_4_ = 0;
          fVar8 = fVar8 * fVar8;
          auVar2 = vsubps_avx(auStack_48,auStack_58);
          auVar9._4_4_ = fVar8;
          auVar9._0_4_ = fVar8;
          auVar9._8_4_ = fVar8;
          auVar9._12_4_ = fVar8;
          auVar10._0_4_ = auVar2._0_4_ * auVar2._0_4_;
          auVar10._4_4_ = auVar2._4_4_ * auVar2._4_4_;
          auVar10._8_4_ = auVar2._8_4_ * auVar2._8_4_;
          auVar10._12_4_ = auVar2._12_4_ * auVar2._12_4_;
          auVar2 = vblendps_avx(auVar10,auVar11,8);
          auVar2 = vhaddps_avx(auVar2,auVar2);
          auVar2 = vhaddps_avx(auVar2,auVar2);
          auVar2 = vcmpps_avx(auVar2,auVar9,6);
          bVar7 = (((SUB161(auVar2 >> 0x1f,0) & 1) == 0 && (SUB161(auVar2 >> 0x3f,0) & 1) == 0) &&
                  (SUB161(auVar2 >> 0x5f,0) & 1) == 0) && -1 < auVar2[0xf];
          *(bool *)(param_1 + 0xec4) = bVar7;
          uVar5 = CONCAT71(uVar6,bVar7);
          *(undefined4 *)(param_1 + 0xec8) = _DAT_14abbef40;
        }
      }
    }
  }
  return uVar5 & 0xffffffff;
}

