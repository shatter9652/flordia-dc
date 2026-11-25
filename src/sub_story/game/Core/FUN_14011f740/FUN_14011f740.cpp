// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011f740  size: 89 bytes
// Name:    FUN_14011f740
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1422572d0, FUN_142257700, FUN_141cfb220
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14011f740(void)

{
  char cVar1;
  undefined1 auStack_28 [16];
  
  FUN_142257700();
  cVar1 = func_0x000144f862d0();
  if (cVar1 != '\0') {
    if ((_DAT_147453ed0 - 2U < 4) || (_DAT_147453ed0 == 0)) {
      uRam0000000147453ecc = FUN_144e4ba80();
      return;
    }
    if (_DAT_147453ed0 == 1) {
      FUN_141cfb220();
      if (DAT_147453ebd == '\0') {
        FUN_1422572d0(2);
        cVar1 = func_0x000144ddb170(uRam000000014ab434f0);
        if (cVar1 == '\0') {
          uRam000000014ab43b42 = 1;
        }
        else if (lRam000000014ab43660 == 0) {
          auStack_28._0_12_ = ZEXT812(0);
          auStack_28._12_4_ = 0;
          FUN_1405dc890(0x9a8f7310,0x14ab43660,auStack_28,1);
          FUN_1407b0760(auStack_28);
          if (auStack_28._8_8_ != 0) {
            func_0x000144d9c130();
          }
        }
        return;
      }
    }
  }
  return;
}

