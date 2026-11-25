// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401436a0  size: 524 bytes
// Name:    FUN_1401436a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401436a0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  *(undefined4 *)(param_1 + 100) = 0;
  if (*(uint *)(param_1 + 0x60) < 4) {
    uVar3 = func_0x000144d9c140(4,0x80);
    if ((ulonglong)*(uint *)(param_1 + 100) != 0) {
      func_0x000145f40560(uVar3,*(undefined8 *)(param_1 + 0x68),
                          (ulonglong)*(uint *)(param_1 + 100) << 5);
    }
    if (*(longlong *)(param_1 + 0x68) != 0) {
      func_0x000144d9c130();
    }
    *(undefined8 *)(param_1 + 0x68) = uVar3;
    *(undefined4 *)(param_1 + 0x60) = 4;
  }
  uVar1 = *(uint *)(param_1 + 100);
  *(uint *)(param_1 + 100) = uVar1 + 1;
  uVar2 = _DAT_146159ce0;
  puVar4 = (undefined8 *)((ulonglong)uVar1 * 0x20 + *(longlong *)(param_1 + 0x68));
  if (*(longlong *)(param_1 + 0x68) != 0) {
    *(undefined1 *)((longlong)puVar4 + 0x1c) = 0;
    *(undefined4 *)(puVar4 + 1) = 0;
    *puVar4 = 0;
    *(undefined8 *)((longlong)puVar4 + 0xc) = 0x323d4ccccd;
    uVar3 = vmovlps_avx(ZEXT416(uVar2));
    *(undefined8 *)((longlong)puVar4 + 0x14) = uVar3;
  }
  uVar3 = uRam000000014abbef54;
  *(ulonglong *)((longlong)puVar4 + 0xc) = CONCAT44(uRam000000014abbef50,_DAT_14abbef4c);
  *(undefined8 *)((longlong)puVar4 + 0x14) = uVar3;
  uVar3 = CONCAT44(_DAT_14abbef4c,uRam000000014abbef48);
  *puVar4 = _DAT_14abbef40;
  puVar4[1] = uVar3;
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *(undefined4 *)(puVar4 + 2) = 0;
  *(undefined1 *)((longlong)puVar4 + 0x1c) = 0;
  puVar4 = (undefined8 *)
           ((ulonglong)*(uint *)(param_1 + 100) * 0x20 + *(longlong *)(param_1 + 0x68));
  *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) + 1;
  uVar1 = _DAT_146159ce0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    *(undefined1 *)((longlong)puVar4 + 0x1c) = 0;
    *(undefined4 *)(puVar4 + 1) = 0;
    *puVar4 = 0;
    *(undefined8 *)((longlong)puVar4 + 0xc) = 0x323d4ccccd;
    uVar3 = vmovlps_avx(ZEXT416(uVar1));
    *(undefined8 *)((longlong)puVar4 + 0x14) = uVar3;
  }
  uVar3 = uRam000000014abbef54;
  *(ulonglong *)((longlong)puVar4 + 0xc) = CONCAT44(uRam000000014abbef50,_DAT_14abbef4c);
  *(undefined8 *)((longlong)puVar4 + 0x14) = uVar3;
  uVar3 = CONCAT44(_DAT_14abbef4c,uRam000000014abbef48);
  *puVar4 = _DAT_14abbef40;
  puVar4[1] = uVar3;
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *(undefined4 *)(puVar4 + 2) = 0;
  *(undefined1 *)((longlong)puVar4 + 0x1c) = 0;
  puVar4 = (undefined8 *)
           ((ulonglong)*(uint *)(param_1 + 100) * 0x20 + *(longlong *)(param_1 + 0x68));
  *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) + 1;
  uVar1 = _DAT_146159ce0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    *(undefined1 *)((longlong)puVar4 + 0x1c) = 0;
    *(undefined4 *)(puVar4 + 1) = 0;
    *puVar4 = 0;
    *(undefined8 *)((longlong)puVar4 + 0xc) = 0x323d4ccccd;
    uVar3 = vmovlps_avx(ZEXT416(uVar1));
    *(undefined8 *)((longlong)puVar4 + 0x14) = uVar3;
  }
  uVar3 = uRam000000014abbef54;
  *(ulonglong *)((longlong)puVar4 + 0xc) = CONCAT44(uRam000000014abbef50,_DAT_14abbef4c);
  *(undefined8 *)((longlong)puVar4 + 0x14) = uVar3;
  uVar3 = CONCAT44(_DAT_14abbef4c,uRam000000014abbef48);
  *puVar4 = _DAT_14abbef40;
  puVar4[1] = uVar3;
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *(undefined4 *)(puVar4 + 2) = 0;
  *(undefined1 *)((longlong)puVar4 + 0x1c) = 0;
  puVar4 = (undefined8 *)
           ((ulonglong)*(uint *)(param_1 + 100) * 0x20 + *(longlong *)(param_1 + 0x68));
  *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) + 1;
  uVar1 = _DAT_146159ce0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    *(undefined1 *)((longlong)puVar4 + 0x1c) = 0;
    *(undefined4 *)(puVar4 + 1) = 0;
    *puVar4 = 0;
    *(undefined8 *)((longlong)puVar4 + 0xc) = 0x323d4ccccd;
    uVar3 = vmovlps_avx(ZEXT416(uVar1));
    *(undefined8 *)((longlong)puVar4 + 0x14) = uVar3;
  }
  uVar3 = uRam000000014abbef54;
  *(ulonglong *)((longlong)puVar4 + 0xc) = CONCAT44(uRam000000014abbef50,_DAT_14abbef4c);
  *(undefined8 *)((longlong)puVar4 + 0x14) = uVar3;
  uVar3 = CONCAT44(_DAT_14abbef4c,uRam000000014abbef48);
  *puVar4 = _DAT_14abbef40;
  puVar4[1] = uVar3;
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *(undefined4 *)(puVar4 + 2) = 0;
  *(undefined1 *)((longlong)puVar4 + 0x1c) = 0;
  return;
}

