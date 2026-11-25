// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f64e0  size: 976 bytes
// Name:    FUN_1400f64e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145eb1a90, FUN_1418d8b20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


uint * FUN_1400f64e0(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong lVar4;
  uint *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (param_2 != param_1) {
    param_1[1] = 0;
    uVar1 = param_2[1];
    if ((ulonglong)uVar1 != 0) {
      uVar2 = *(undefined8 *)(param_2 + 2);
      lVar7 = (ulonglong)uVar1 << 4;
      if (*param_1 < uVar1) {
        if (*(longlong *)(param_1 + 2) != 0) {
          func_0x000144d9c130(*(longlong *)(param_1 + 2),uVar2);
        }
        param_1[2] = 0;
        param_1[3] = 0;
        *param_1 = 0;
        lVar4 = func_0x000144d9c140(0x10,lVar7);
        *(longlong *)(param_1 + 2) = lVar4;
        if (lVar4 == 0) {
          pcVar3 = (code *)swi(3);
          puVar5 = (uint *)(*pcVar3)();
          return puVar5;
        }
        *param_1 = uVar1;
      }
      func_0x000145f40560(*(undefined8 *)(param_1 + 2),uVar2,lVar7);
      param_1[1] = uVar1;
    }
    param_1[5] = 0;
    uVar1 = param_2[5];
    if ((ulonglong)uVar1 != 0) {
      uVar2 = *(undefined8 *)(param_2 + 6);
      lVar7 = (ulonglong)uVar1 << 2;
      if (param_1[4] < uVar1) {
        if (*(longlong *)(param_1 + 6) != 0) {
          func_0x000144d9c130(*(longlong *)(param_1 + 6),uVar2);
        }
        param_1[6] = 0;
        param_1[7] = 0;
        param_1[4] = 0;
        lVar4 = func_0x000144d9c140(4,lVar7);
        *(longlong *)(param_1 + 6) = lVar4;
        if (lVar4 == 0) {
          pcVar3 = (code *)swi(3);
          puVar5 = (uint *)(*pcVar3)();
          return puVar5;
        }
        param_1[4] = uVar1;
      }
      func_0x000145f40560(*(undefined8 *)(param_1 + 6),uVar2,lVar7);
      param_1[5] = uVar1;
    }
    param_1[9] = 0;
    uVar1 = param_2[9];
    if ((ulonglong)uVar1 != 0) {
      uVar2 = *(undefined8 *)(param_2 + 10);
      lVar7 = (ulonglong)uVar1 * 0xa0;
      if (param_1[8] < uVar1) {
        if (*(longlong *)(param_1 + 10) != 0) {
          func_0x000144d9c130(*(longlong *)(param_1 + 10),uVar2);
        }
        param_1[10] = 0;
        param_1[0xb] = 0;
        param_1[8] = 0;
        lVar4 = func_0x000144d9c140(0x10,lVar7);
        *(longlong *)(param_1 + 10) = lVar4;
        if (lVar4 == 0) {
          pcVar3 = (code *)swi(3);
          puVar5 = (uint *)(*pcVar3)();
          return puVar5;
        }
        param_1[8] = uVar1;
      }
      func_0x000145f40560(*(undefined8 *)(param_1 + 10),uVar2,lVar7);
      param_1[9] = uVar1;
    }
    param_1[0xd] = 0;
    uVar1 = param_2[0xd];
    uVar6 = (ulonglong)uVar1;
    if (uVar6 != 0) {
      uVar2 = *(undefined8 *)(param_2 + 0xe);
      FUN_145eb1a90(param_1 + 0xc,uVar6);
      func_0x000145f40560(*(undefined8 *)(param_1 + 0xe),uVar2,uVar6 << 4);
      param_1[0xd] = uVar1;
    }
    param_1[0x11] = 0;
    uVar1 = param_2[0x11];
    uVar6 = (ulonglong)uVar1;
    if (uVar6 != 0) {
      uVar2 = *(undefined8 *)(param_2 + 0x12);
      FUN_1418d8b20(param_1 + 0x10,uVar6);
      func_0x000145f40560(*(undefined8 *)(param_1 + 0x12),uVar2,uVar6 << 2);
      param_1[0x11] = uVar1;
    }
    param_1[0x15] = 0;
    uVar1 = param_2[0x15];
    if ((ulonglong)uVar1 != 0) {
      uVar2 = *(undefined8 *)(param_2 + 0x16);
      lVar7 = (ulonglong)uVar1 * 2;
      if (param_1[0x14] < uVar1) {
        if (*(longlong *)(param_1 + 0x16) != 0) {
          func_0x000144d9c130(*(longlong *)(param_1 + 0x16),uVar2);
        }
        param_1[0x16] = 0;
        param_1[0x17] = 0;
        param_1[0x14] = 0;
        lVar4 = func_0x000144d9c140(2,lVar7);
        *(longlong *)(param_1 + 0x16) = lVar4;
        if (lVar4 == 0) {
          pcVar3 = (code *)swi(3);
          puVar5 = (uint *)(*pcVar3)();
          return puVar5;
        }
        param_1[0x14] = uVar1;
      }
      func_0x000145f40560(*(undefined8 *)(param_1 + 0x16),uVar2,lVar7);
      param_1[0x15] = uVar1;
    }
    param_1[0x19] = 0;
    uVar1 = param_2[0x19];
    if ((ulonglong)uVar1 != 0) {
      uVar2 = *(undefined8 *)(param_2 + 0x1a);
      lVar7 = (ulonglong)uVar1 << 4;
      if (param_1[0x18] < uVar1) {
        if (*(longlong *)(param_1 + 0x1a) != 0) {
          func_0x000144d9c130(*(longlong *)(param_1 + 0x1a),uVar2);
        }
        param_1[0x1a] = 0;
        param_1[0x1b] = 0;
        param_1[0x18] = 0;
        lVar4 = func_0x000144d9c140(0x10,lVar7);
        *(longlong *)(param_1 + 0x1a) = lVar4;
        if (lVar4 == 0) {
          pcVar3 = (code *)swi(3);
          puVar5 = (uint *)(*pcVar3)();
          return puVar5;
        }
        param_1[0x18] = uVar1;
      }
      func_0x000145f40560(*(undefined8 *)(param_1 + 0x1a),uVar2,lVar7);
      param_1[0x19] = uVar1;
    }
    param_1[0x1d] = 0;
    uVar1 = param_2[0x1d];
    if ((ulonglong)uVar1 != 0) {
      uVar2 = *(undefined8 *)(param_2 + 0x1e);
      lVar7 = (ulonglong)uVar1 * 0x30;
      if (param_1[0x1c] < uVar1) {
        if (*(longlong *)(param_1 + 0x1e) != 0) {
          func_0x000144d9c130(*(longlong *)(param_1 + 0x1e),uVar2);
        }
        param_1[0x1e] = 0;
        param_1[0x1f] = 0;
        param_1[0x1c] = 0;
        lVar4 = func_0x000144d9c140(0x10,lVar7);
        *(longlong *)(param_1 + 0x1e) = lVar4;
        if (lVar4 == 0) {
          pcVar3 = (code *)swi(3);
          puVar5 = (uint *)(*pcVar3)();
          return puVar5;
        }
        param_1[0x1c] = uVar1;
      }
      func_0x000145f40560(*(undefined8 *)(param_1 + 0x1e),uVar2,lVar7);
      param_1[0x1d] = uVar1;
    }
  }
  return param_1;
}

