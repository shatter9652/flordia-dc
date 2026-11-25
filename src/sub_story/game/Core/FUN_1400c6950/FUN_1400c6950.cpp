// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c6950  size: 134 bytes
// Name:    FUN_1400c6950
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_1400c6950(longlong *param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  
  lVar2 = (**(code **)(*param_1 + 0x3f8))(param_1,0xba180afb232d1b4b,param_2);
  if (lVar2 == 0) {
    puVar4 = (ulonglong *)(**(code **)(*param_1 + 0x3f8))(param_1,0x33f70dfaf2c50989,param_2);
    if (puVar4 != (ulonglong *)0x0) {
      uVar3 = *puVar4 & 0xffffffffff;
      goto LAB_1400c69b1;
    }
    lVar2 = (**(code **)(*param_1 + 0x3f8))(param_1,0x4eaa16dd829995bc,param_2);
    uVar1 = *(uint *)(lVar2 + 4);
  }
  else {
    uVar1 = *(uint *)(lVar2 + 0xc);
  }
  uVar3 = (ulonglong)uVar1;
LAB_1400c69b1:
  return uVar3 << 4;
}

