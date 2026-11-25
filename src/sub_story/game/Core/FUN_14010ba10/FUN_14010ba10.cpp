// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14010ba10  size: 72 bytes
// Name:    FUN_14010ba10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x00014010ba2f: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00014010ba34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14010ba10(void)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  auVar8._4_4_ = _DAT_145fc6ed8;
  auVar8._0_4_ = _DAT_145fc6ed8;
  auVar8._8_4_ = _DAT_145fc6ed8;
  auVar8._12_4_ = _DAT_145fc6ed8;
  bVar6 = (DAT_14849c035 & DAT_14849c034) == 0;
  uVar4 = 0xffffffff;
  uVar2 = uVar4;
  if (!bVar6) {
    uVar4 = uRam000000014849be3c;
    uVar2 = uRam000000014849be40;
  }
  auVar7._0_4_ = (fRam000000014849be4c - _DAT_14849c01c) / _DAT_14849c01c;
  auVar7._4_12_ = SUB6012((undefined1  [60])0x0,0);
  auVar1 = vminss_avx(ZEXT416((uint)_DAT_145fc6ed8),auVar7);
  auVar7 = vcmpss_avx(auVar7,ZEXT816(0) << 0x20,1);
  auVar8 = vblendvps_avx(ZEXT416((uint)(_DAT_145fc6ed8 - auVar1._0_4_)),auVar8,auVar7);
  auVar8 = vminss_avx(auVar8,ZEXT416(uRam000000014849be44));
  uVar3 = auVar8._0_4_;
  if (bVar6) {
    uVar3 = 0;
  }
  lVar5 = ((ulonglong)uRam00000001484a1020 ^ 1) * 0x10;
  *(undefined4 *)(lVar5 + 0x14849bcf0) = uVar4;
  *(undefined4 *)(lVar5 + 0x14849bcf4) = uVar2;
  *(undefined4 *)(lVar5 + 0x14849bcf8) = uVar3;
  *(undefined4 *)(lVar5 + 0x14849bcfc) = 0;
  if (cRam000000014849bcd0 != '\0') {
    return;
  }
  uRam000000014849be30 = 0;
  cRam000000014849bcd0 = 0;
  return;
}

