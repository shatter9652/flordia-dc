// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401431e0  size: 228 bytes
// Name:    FUN_1401431e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401431e0(longlong param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  
  func_0x000141787dc0();
  *(undefined8 *)(param_1 + 0x18) = 0x100000000;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (*(uint *)(param_1 + 8) < 4) {
    puVar1 = (undefined4 *)func_0x000144d9c140(4,0x20);
    if ((ulonglong)*(uint *)(param_1 + 0xc) != 0) {
      func_0x000145f40560(puVar1,*(undefined8 *)(param_1 + 0x10),
                          (ulonglong)*(uint *)(param_1 + 0xc) << 3);
    }
    if (*(longlong *)(param_1 + 0x10) != 0) {
      func_0x000144d9c130();
    }
    *(undefined4 **)(param_1 + 0x10) = puVar1;
    *(undefined4 *)(param_1 + 8) = 4;
    uVar2 = *(uint *)(param_1 + 0xc);
    if (uVar2 == 4) goto LAB_140143266;
  }
  else {
    puVar1 = *(undefined4 **)(param_1 + 0x10);
    uVar2 = 0;
  }
  lVar3 = (ulonglong)uVar2 << 3;
  do {
    if (puVar1 != (undefined4 *)0x0) {
      *(undefined4 *)((longlong)puVar1 + lVar3) = 0;
      *(undefined1 *)((longlong)puVar1 + lVar3 + 4) = 0xff;
    }
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x20);
LAB_140143266:
  *(undefined4 *)(param_1 + 0xc) = 4;
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 1;
  puVar1[4] = 0;
  *(undefined1 *)(puVar1 + 5) = 2;
  puVar1[6] = 0;
  *(undefined1 *)(puVar1 + 7) = 3;
  return;
}

