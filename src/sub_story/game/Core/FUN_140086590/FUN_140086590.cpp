// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140086590  size: 171 bytes
// Name:    FUN_140086590
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140086640
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140086590(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong unaff_R14;
  ulonglong uVar3;
  longlong lStack_38;
  
  cVar1 = *(char *)(param_1 + 0x5f4);
  if (cVar1 == '\x01') {
    QueryPerformanceCounter(&lStack_38);
    unaff_R14 = lStack_38;
  }
  if (*(char *)(param_1 + 0x608) != '\0') {
    lVar2 = param_1 + 8;
    uVar3 = 0;
    do {
      func_0x000144efb730(*(undefined8 *)(param_1 + 0x1c8 + uVar3 * 8));
      FUN_140086640(*(undefined8 *)(param_1 + 0x1c8 + uVar3 * 8),lVar2,param_1 + 0x448);
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x40;
    } while (uVar3 < *(byte *)(param_1 + 0x608));
  }
  if (cVar1 != '\0') {
    QueryPerformanceCounter(&lStack_38);
    LOCK();
    *(longlong *)(param_1 + 0x5e8) = *(longlong *)(param_1 + 0x5e8) + (lStack_38 - unaff_R14);
    UNLOCK();
  }
  return;
}

