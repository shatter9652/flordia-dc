// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ee880  size: 449 bytes
// Name:    FUN_1400ee880
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140140130, FUN_14044d3a0, FUN_140e18450, FUN_145384c10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400ee880(longlong param_1)

{
  undefined4 uVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  int iStack_38;
  int iStack_34;
  
  uVar8 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0;
  uVar1 = *(undefined4 *)(uVar8 + 0x9c);
  lVar6 = func_0x000144e6ea40(uVar1);
  if (lVar6 == 0) {
    cVar2 = func_0x000144e238f0(uVar1);
    if (cVar2 == '\0') {
      lVar6 = 0;
      goto LAB_1400ee93a;
    }
    uVar7 = *(uint *)(param_1 + 0x10);
LAB_1400eea25:
    uVar7 = uVar7 & 0xfffffe7f;
    uVar5 = 0;
    goto LAB_1400eea2e;
  }
  lVar6 = func_0x000144e6e9f0(lVar6);
  cVar2 = func_0x000144e238f0(uVar1);
  if (cVar2 == '\0') {
LAB_1400ee93a:
    bVar4 = func_0x0001407b74a0(param_1);
    bVar3 = 0;
    uVar5 = *(uint *)(param_1 + 0x10) & 0xfffffdff | (uint)bVar4 << 9;
    uVar7 = 0;
    *(uint *)(param_1 + 0x10) = uVar5;
    if (bVar4 != 0) {
      bVar3 = func_0x0001405bb770(param_1);
      uVar5 = *(uint *)(param_1 + 0x10);
      uVar7 = (uint)bVar3 << 10;
    }
    uVar7 = uVar5 & 0xfffffbff | uVar7;
    *(uint *)(param_1 + 0x10) = uVar7;
    if (lVar6 == 0) {
      uVar5 = uVar5 >> 8 & 1;
      if (uVar5 == 0) goto LAB_1400eea25;
      bVar3 = bVar3 & (byte)uVar5;
      goto LAB_1400eea09;
    }
    uVar5 = 0;
    iStack_34 = 0;
    iStack_38 = 0;
    FUN_140140130(lVar6,0xa2e817c2,&iStack_34);
    FUN_140140130(lVar6,0x14f67d9b,&iStack_38);
    uVar7 = *(uint *)(param_1 + 0x10);
    bVar3 = iStack_38 == 0x4d5fa44b;
    if (iStack_34 == 0x2d0648ce || iStack_34 == 0x420cda0e) goto LAB_1400eea09;
    uVar7 = uVar7 & 0xfffffe7f;
    if (iStack_38 != 0x4d5fa44b) goto LAB_1400eea2e;
  }
  else {
    bVar3 = FUN_14044d3a0(lVar6,0x85f13c30);
    cVar2 = FUN_145384c10(uVar8,0,0);
    bVar4 = FUN_140e18450(uVar8,0);
    uVar7 = 0;
    if (cVar2 != '\0') {
      uVar7 = 0x600;
    }
    if (bVar3 != 0) {
      uVar7 = 0x600;
    }
    uVar7 = uVar7 | *(uint *)(param_1 + 0x10) & 0xfffff9ff;
    *(uint *)(param_1 + 0x10) = uVar7;
    if (bVar3 == 0) goto LAB_1400eea25;
    bVar3 = bVar3 & (bVar4 ^ 1);
LAB_1400eea09:
    uVar5 = 0;
    uVar7 = uVar7 & 0xfffffe7f | 0x100;
    if (bVar3 == 0) goto LAB_1400eea2e;
  }
  uVar5 = 0x80;
LAB_1400eea2e:
  *(uint *)(param_1 + 0x10) = uVar7 | uVar5;
  return;
}

