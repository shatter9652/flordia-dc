// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1455e2768  size: 75 bytes
// Name:    sysParam::Init
// Subsystem: core
// Class:   sysParam
//
// Evidence:
//   GTAVSRC: sysParam::Init  (tools/DllInject/main.cpp)
//   literal: kernel32.dll
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/sysParam.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sysParam__Init(void)

{
  if (_DAT_146e04e90 == 0) {
    _DAT_146e04e90 = LoadLibraryExA(&UNK_14678d8f8,0,0x800);
    if (_DAT_146e04e90 == 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001455e27ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetProcAddress(_DAT_146e04e90,&UNK_14678d480);
  return;
}

