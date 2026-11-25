// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14375db40  size: 48 bytes
// Name:    fwLanguagePack::GetDayOfTheMonthString
// Subsystem: rage
// Class:   fwLanguagePack
//
// Evidence:
//   GTAVSRC: fwLanguagePack::GetDayOfTheMonthString  (rage/framework/src/fwlocalisation/languagePack.cpp)
//   literal: DAY_OF_MONTH_%u
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400b8000
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/fwLanguagePack.h"


void fwLanguagePack__GetDayOfTheMonthString(undefined1 *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = 0;
  uVar1 = 0x1f;
  if (param_2 < 0x1f) {
    uVar1 = param_2;
  }
  uVar2 = 1;
  if (param_2 != 0) {
    uVar2 = uVar1;
  }
  FUN_1400b8000(param_1,&UNK_1467797ee,uVar2);
  return;
}

