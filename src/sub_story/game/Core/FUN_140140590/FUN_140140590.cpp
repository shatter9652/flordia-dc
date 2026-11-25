// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140140590  size: 88 bytes
// Name:    FUN_140140590
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140140590(void)

{
  uint uVar1;
  longlong lVar2;
  longlong unaff_GS_OFFSET;
  
  if (DAT_148770340 != '\x01') {
    return;
  }
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  lVar2 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12a8);
  uVar1 = *(uint *)(lVar2 + 0x12380);
  if ((((char)(uVar1 >> 8) == '\0') && ((char)uVar1 == '\0')) && ((char)(uVar1 >> 0x10) == '\0')) {
    return;
  }
  *(uint *)(lVar2 + 0x12380) = uVar1 & 0xff000000;
  return;
}

