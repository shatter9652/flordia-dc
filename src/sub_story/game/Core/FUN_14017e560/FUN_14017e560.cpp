// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14017e560  size: 608 bytes
// Name:    FUN_14017e560
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14017e560(longlong param_1,uint *param_2,undefined8 *param_3,char param_4)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_80 = *(undefined8 *)param_2;
  uStack_78 = *(undefined8 *)(param_2 + 2);
  uStack_70 = *(undefined8 *)(param_2 + 4);
  uStack_68 = *(undefined8 *)(param_2 + 6);
  func_0x00014017e7c0(&uStack_80,&uStack_88,&uStack_90,&lStack_98,&lStack_a0,&lStack_a8);
  lVar3 = func_0x000144d9c140(uStack_90,uStack_88);
  *(longlong *)(param_1 + 0xc0) = lVar3 + lStack_98;
  *(longlong *)(param_1 + 200) = lVar3 + lStack_a0;
  uVar1 = *param_2;
  *(uint *)(lVar3 + lStack_98) = uVar1;
  *(longlong *)(lVar3 + lStack_a0) = lStack_a8 + lVar3;
  uVar4 = lStack_a8 + lVar3 + 3 + (ulonglong)uVar1 * 4 & 0xfffffffffffffffc;
  func_0x000145f40560(**(undefined8 **)(param_1 + 200),*param_3,(ulonglong)uVar1 << 2);
  uVar1 = param_2[1];
  *(uint *)(*(longlong *)(param_1 + 0xc0) + 4) = uVar1;
  *(ulonglong *)(*(longlong *)(param_1 + 200) + 8) = uVar4;
  lVar3 = uVar4 + (ulonglong)uVar1 * 4;
  func_0x000145f40560(*(undefined8 *)(*(longlong *)(param_1 + 200) + 8),param_3[1],
                      (ulonglong)uVar1 << 2);
  uVar1 = param_2[2];
  *(uint *)(*(longlong *)(param_1 + 0xc0) + 8) = uVar1;
  *(longlong *)(*(longlong *)(param_1 + 200) + 0x10) = lVar3;
  lVar3 = lVar3 + (ulonglong)uVar1 * 4;
  func_0x000145f40560(*(undefined8 *)(*(longlong *)(param_1 + 200) + 0x10),param_3[2],
                      (ulonglong)uVar1 << 2);
  uVar1 = param_2[3];
  *(uint *)(*(longlong *)(param_1 + 0xc0) + 0xc) = uVar1;
  *(longlong *)(*(longlong *)(param_1 + 200) + 0x18) = lVar3;
  lVar3 = lVar3 + (ulonglong)uVar1 * 4;
  func_0x000145f40560(*(undefined8 *)(*(longlong *)(param_1 + 200) + 0x18),param_3[3],
                      (ulonglong)uVar1 << 2);
  uVar1 = param_2[4];
  *(uint *)(*(longlong *)(param_1 + 0xc0) + 0x10) = uVar1;
  *(longlong *)(*(longlong *)(param_1 + 200) + 0x20) = lVar3;
  lVar3 = lVar3 + (ulonglong)uVar1 * 4;
  func_0x000145f40560(*(undefined8 *)(*(longlong *)(param_1 + 200) + 0x20),param_3[4],
                      (ulonglong)uVar1 << 2);
  uVar1 = param_2[5];
  *(uint *)(*(longlong *)(param_1 + 0xc0) + 0x14) = uVar1;
  *(longlong *)(*(longlong *)(param_1 + 200) + 0x28) = lVar3;
  lVar3 = lVar3 + (ulonglong)uVar1 * 4;
  func_0x000145f40560(*(undefined8 *)(*(longlong *)(param_1 + 200) + 0x28),param_3[5],
                      (ulonglong)uVar1 << 2);
  uVar1 = param_2[6];
  *(uint *)(*(longlong *)(param_1 + 0xc0) + 0x18) = uVar1;
  *(longlong *)(*(longlong *)(param_1 + 200) + 0x30) = lVar3;
  func_0x000145f40560(*(undefined8 *)(*(longlong *)(param_1 + 200) + 0x30),param_3[6],
                      (ulonglong)uVar1 << 2);
  uVar2 = param_2[7];
  *(uint *)(*(longlong *)(param_1 + 0xc0) + 0x1c) = uVar2;
  *(ulonglong *)(*(longlong *)(param_1 + 200) + 0x38) = lVar3 + (ulonglong)uVar1 * 4;
  func_0x000145f40560(*(undefined8 *)(*(longlong *)(param_1 + 200) + 0x38),param_3[7],
                      (ulonglong)uVar2 << 2);
  if (param_4 == '\0') {
    *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 2;
  }
  return;
}

