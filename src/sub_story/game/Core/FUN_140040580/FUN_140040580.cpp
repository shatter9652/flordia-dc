// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140040580  size: 136 bytes
// Name:    FUN_140040580
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1455c4c20, FUN_144e59290
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140040580(void)

{
  undefined1 auVar1 [16];
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [64];
  
  uVar4 = (ulonglong)(uint)_DAT_146d31b54;
  auVar6 = ZEXT464((uint)_DAT_145fc6ed8);
  if (_DAT_145fc6ed8 <= _DAT_146d31b54) {
    lVar3 = FUN_144e59290();
    auVar5 = auVar6._0_16_;
    if (lVar3 != 0) {
      auVar5 = ZEXT416((uint)*(float *)(lVar3 + 0x10));
      if (_DAT_149e25660 != 0) {
        auVar5 = ZEXT416((uint)(*(float *)(lVar3 + 0x10) * *(float *)(lVar3 + 0x14)));
      }
    }
    auVar5 = vminss_avx(ZEXT416(_DAT_146d31b58),auVar5);
    auVar1 = vminss_avx(ZEXT416(_DAT_146c0c148),auVar5);
    auVar6 = ZEXT1664(auVar1);
    cVar2 = FUN_1455c4c20(auVar5._0_8_,_DAT_146c0c148);
    uVar4 = auVar6._0_8_;
    if (cVar2 != '\0') {
      auVar5 = vmaxss_avx(auVar6._0_16_,ZEXT416(*(uint *)(_DAT_14927f7a8 + 0xc0)));
      uVar4 = auVar5._0_8_;
    }
  }
  return uVar4;
}

