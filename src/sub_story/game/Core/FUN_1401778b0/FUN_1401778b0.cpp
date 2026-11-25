// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401778b0  size: 132 bytes
// Name:    FUN_1401778b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1401778b0(void)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar5;
  undefined1 auVar8 [64];
  
  lVar3 = func_0x00014515d910();
  auVar6._0_12_ = ZEXT812(0);
  auVar8 = ZEXT1264(auVar6._0_12_);
  auVar6._12_4_ = 0;
  uVar5 = 0;
  if (lVar3 != 0) {
    uVar1 = *(uint *)(lVar3 + 0x94);
    uVar5 = 0;
    if ((ulonglong)uVar1 != 0) {
      if (0 < (int)uVar1) {
        uVar4 = 0;
        do {
          lVar2 = *(longlong *)(*(longlong *)(lVar3 + 0x98) + uVar4 * 8);
          if (lVar2 != 0) {
            if ((*(byte *)(lVar2 + 0x1194) & 0x40) == 0) {
              auVar6 = vcmpss_avx(ZEXT416(*(uint *)(lVar2 + 0x12d0)),ZEXT416((uint)_DAT_145fc6ed8),1
                                 );
              auVar6 = vblendvps_avx(auVar8._0_16_,ZEXT416((uint)(auVar8._0_4_ + _DAT_145fc6edc)),
                                     auVar6);
              auVar8 = ZEXT1664(auVar6);
            }
            else {
              auVar8 = ZEXT464((uint)(auVar8._0_4_ + _DAT_145fc6ed8));
            }
          }
          auVar6 = auVar8._0_16_;
          uVar4 = uVar4 + 1;
        } while (uVar1 != uVar4);
      }
      auVar7._0_4_ = auVar6._0_4_ / (float)(int)uVar1;
      auVar7._4_12_ = auVar6._4_12_;
      uVar5 = auVar7._0_8_;
    }
  }
  return uVar5;
}

