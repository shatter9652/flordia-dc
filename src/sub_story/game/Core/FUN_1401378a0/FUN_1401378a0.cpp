// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401378a0  size: 197 bytes
// Name:    FUN_1401378a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_1401378a0(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)(param_1 + 8);
  uVar2 = 0x10;
  if (*(char *)(lVar1 + 0x1d) == '\n') {
    return 0x10;
  }
  switch(*(char *)(lVar1 + 0x1d)) {
  case '\0':
  case '\x05':
  case '\f':
    break;
  case '\x01':
    lVar1 = *(longlong *)(lVar1 + 0x24);
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))(*(longlong **)(param_1 + 0x10));
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    uVar2 = uVar3 + 3 + (ulonglong)*(uint *)(*(longlong *)(param_1 + 8) + 0x2c) * lVar1;
    goto code_r0x00014013795a;
  case '\x02':
  case '\x04':
    uVar2 = (ulonglong)*(uint *)(lVar1 + 0x2c) * *(longlong *)(lVar1 + 0x24);
    break;
  case '\x03':
  case '\x06':
  case '\a':
  case '\b':
    uVar2 = 8;
    break;
  default:
    uVar2 = 0;
    break;
  case '\v':
    lVar1 = *(longlong *)(lVar1 + 0x24);
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))(*(longlong **)(param_1 + 0x10));
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    uVar2 = uVar3 + 7 + (ulonglong)*(uint *)(*(longlong *)(param_1 + 8) + 0x2c) * lVar1;
code_r0x00014013795a:
    uVar2 = -uVar3 & uVar2;
  }
  return uVar2;
}

