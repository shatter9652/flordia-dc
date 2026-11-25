// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140051aa0  size: 161 bytes
// Name:    FUN_140051aa0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140051aa0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  
  func_0x000140051b50();
  iVar5 = *(int *)(param_1 + 0x640);
  if (iVar5 != 0) {
    if (*(char *)(param_1 + 0x646) == '\x01') {
      lVar4 = func_0x000144febb80();
      lVar2 = *(longlong *)(lVar4 + 0xc0);
      iVar1 = *(int *)(lVar4 + 200);
      uVar6 = 0;
      do {
        puVar3 = *(undefined8 **)(lVar2 + 0x10 + (ulonglong)uVar6);
        if (puVar3 != (undefined8 *)0x0) {
          *(undefined4 *)(puVar3 + 4) = 1;
          *(undefined4 *)(puVar3 + 3) = 0xffffffff;
          *puVar3 = 0;
          *(undefined8 *)(lVar2 + 0x10 + (ulonglong)uVar6) = 0;
        }
        uVar6 = uVar6 + iVar1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x30);
      puVar3 = *(undefined8 **)(lVar2 + 0x10);
      if (puVar3 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar3 + 4) = 1;
        *(undefined4 *)(puVar3 + 3) = 0xffffffff;
        *puVar3 = 0;
        *(undefined8 *)(lVar2 + 0x10) = 0;
      }
      if (iVar5 != 1) {
        iVar5 = iVar5 + -1;
        do {
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
  }
  return;
}

