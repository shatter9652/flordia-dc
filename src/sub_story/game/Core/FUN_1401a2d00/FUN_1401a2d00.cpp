// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a2d00  size: 235 bytes
// Name:    FUN_1401a2d00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14506ccf0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1401a2d00(longlong param_1,char param_2)

{
  undefined1 auVar1 [16];
  undefined8 unaff_RSI;
  ulonglong uVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 uStack_59;
  undefined1 *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((*(byte *)(param_1 + 0x10) & 0x20) == 0) {
    puStack_50 = &UNK_143cfd7a0;
    puStack_48 = &SUB_140004380;
    puStack_40 = &SUB_140004380;
    puStack_58 = &uStack_59;
    fVar3 = (float)FUN_14506ccf0(param_1,&puStack_58);
    puStack_50 = &UNK_1401a2df0;
    puStack_48 = &SUB_140004380;
    puStack_40 = &SUB_140004380;
    puStack_58 = &uStack_59;
    fVar4 = (float)FUN_14506ccf0(param_1,&puStack_58);
    if (param_2 == '\0') {
      if (0.0 < fVar4) {
        auVar6._0_12_ = ZEXT812(0);
        auVar6._12_4_ = 0;
        auVar5 = ZEXT416((uint)((fVar3 - fVar4) * _DAT_146159fa0 + _DAT_145fc6ed8));
        auVar1 = vminss_avx(ZEXT416((uint)_DAT_145fc6ed8),auVar5);
        auVar5 = vcmpps_avx(auVar5,auVar6,5);
        auVar1 = vcmpps_avx(ZEXT416((uint)(_DAT_145fc6ed8 - auVar1._0_4_)),
                            ZEXT416((uint)_DAT_145fc6ed8),1);
        uVar2 = (ulonglong)(auVar5._0_4_ & auVar1._0_4_);
      }
      else {
        uVar2 = 0;
      }
    }
  }
  return uVar2 & 0xffffff01;
}

