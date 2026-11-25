// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400fbb80  size: 93 bytes
// Name:    FUN_1400fbb80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_1400fbb80(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar3 = func_0x000144da10f0(*(undefined4 *)(param_2 + 0x9c));
  lVar1 = *(longlong *)(lVar3 + 0x650);
  if ((((*(longlong *)(lVar1 + 0x20) != 0) || (*(longlong *)(lVar1 + 0x28) != 0)) ||
      (*(longlong *)(lVar1 + 0x30) != 0)) ||
     ((*(byte *)(*(longlong *)(lVar3 + 0x580) + 200) & 0x40) != 0)) {
    return 1;
  }
  if ((((*(byte *)(param_1 + 5) & 0x10) == 0) &&
      (((*(byte *)(param_1 + 5) & 2) == 0 ||
       (cVar2 = (**(code **)(*param_1 + 0xc0))(param_1,param_2), cVar2 != '\0')))) &&
     (cVar2 = (**(code **)(*param_1 + 0x370))(param_1,param_2), cVar2 != '\0')) {
    return 0;
  }
  uVar4 = func_0x000144f982e0((int)param_1[6]);
  return uVar4 ^ 1;
}

