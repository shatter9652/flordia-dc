// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140046660  size: 223 bytes
// Name:    FUN_140046660
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144db8000
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140046660(void)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  _DAT_14840d82c = 0;
  _DAT_14840d828 = 0;
  *(undefined4 *)((ulonglong)_DAT_14840d8a4 * 0x804 + 0x14840d020) = 0;
  uVar2 = (ulonglong)_DAT_14840a4f4;
  if (uVar2 != 0) {
    lVar4 = 0;
    do {
      if (*(char *)(lVar4 + 0x14840a61a) != '\0' || *(char *)(lVar4 + 0x14840a619) != '\0') {
        lVar3 = FUN_144db8000(lVar4 + 0x14840a500);
        auVar1 = vmaxss_avx(ZEXT416(_DAT_14840d828),
                            ZEXT416(*(uint *)(lVar3 + 0xe4 +
                                             (ulonglong)
                                             ((*(byte *)(lVar4 + 0x14840a619) &
                                              *(byte *)(lVar4 + 0x14840a618)) != 0) * 0x10)));
        _DAT_14840d828 = auVar1._0_4_;
        auVar1 = vmaxss_avx(ZEXT416(_DAT_14840d82c),
                            ZEXT416(*(uint *)(lVar3 + 0xe4 +
                                             (ulonglong)
                                             ((*(byte *)(lVar4 + 0x14840a61a) &
                                              *(byte *)(lVar4 + 0x14840a618)) != 0) * 0x10)));
        _DAT_14840d82c = auVar1._0_4_;
      }
      lVar4 = lVar4 + 0x460;
    } while (uVar2 * 0x460 - lVar4 != 0);
  }
  return;
}

