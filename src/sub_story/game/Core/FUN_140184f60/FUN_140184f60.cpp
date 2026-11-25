// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140184f60  size: 169 bytes
// Name:    FUN_140184f60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_140184f60(longlong *param_1,uint param_2,ulonglong param_3,longlong *param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  
  if (param_4 == (longlong *)0x0) {
    if ((param_3 & 0x4f0) == 0) {
      return 0;
    }
  }
  else {
    uVar2 = (**(code **)(*param_4 + 0x20))(param_4);
    if (((uVar2 ^ param_2) & 0xfff) != 0) {
      return 0;
    }
    iVar3 = (**(code **)(*param_4 + 0x18))(param_4);
    if ((param_3 & 0x100) == 0 && iVar3 == 0) {
      return 0;
    }
  }
  lVar4 = (**(code **)(*param_1 + 0xa8))(param_1,param_2);
  if ((lVar4 != 0) && ((param_2 & 0xffe) - 100 < 0xffffffce || (param_3 & 0x4e2) == 0)) {
    if ((param_3 & 0xc0) == 0) {
      return lVar4;
    }
    cVar1 = (**(code **)(*param_1 + 0xb0))(param_1,lVar4);
    if (cVar1 != '\0') {
      return lVar4;
    }
  }
  return 0;
}

