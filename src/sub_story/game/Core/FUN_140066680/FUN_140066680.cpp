// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140066680  size: 554 bytes
// Name:    FUN_140066680
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140066680(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if (*(char *)(param_1 + 0x498) == '\0') {
    func_0x00014011c570(param_1 + 0x498,param_3);
    *(undefined1 *)(param_1 + 0x4a4) = 0xff;
    *(undefined2 *)(param_1 + 0x4a6) = 0xff;
    *(byte *)(param_1 + 0x4a5) = *(byte *)(param_1 + 0x4a5) & 0xdf;
    *(undefined8 *)(param_1 + 0x4b8) = 0xffffffff00000000;
    *(undefined4 *)(param_1 + 0x4c0) = 0xffffffff;
  }
  uVar2 = *(uint *)(param_1 + 0x488);
  if (uVar2 == 0) {
    uVar3 = func_0x000144d9c140(8,0x400);
    if ((ulonglong)*(uint *)(param_1 + 0x48c) != 0) {
      func_0x000145f40560(uVar3,*(undefined8 *)(param_1 + 0x490),
                          (ulonglong)*(uint *)(param_1 + 0x48c) << 4);
    }
    if (*(longlong *)(param_1 + 0x490) != 0) {
      func_0x000144d9c130();
    }
    *(undefined8 *)(param_1 + 0x490) = uVar3;
    uVar2 = 0x40;
    *(undefined4 *)(param_1 + 0x488) = 0x40;
  }
  uVar6 = *(uint *)(param_1 + 0x48c);
  if (uVar6 == uVar2) {
    uVar6 = 1;
    if (1 < uVar2) {
      uVar6 = uVar2 >> 1;
    }
    lVar4 = func_0x000144d9c140(8,(ulonglong)(uVar6 + uVar2) << 4);
    if ((ulonglong)*(uint *)(param_1 + 0x48c) != 0) {
      func_0x000145f40560(lVar4,*(undefined8 *)(param_1 + 0x490),
                          (ulonglong)*(uint *)(param_1 + 0x48c) << 4);
    }
    if (*(longlong *)(param_1 + 0x490) != 0) {
      func_0x000144d9c130();
    }
    *(longlong *)(param_1 + 0x490) = lVar4;
    *(uint *)(param_1 + 0x488) = uVar6 + uVar2;
    uVar6 = *(uint *)(param_1 + 0x48c);
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x490);
  }
  uVar2 = uVar6 + 1;
  *(uint *)(param_1 + 0x48c) = uVar2;
  *(undefined8 *)(lVar4 + (ulonglong)uVar6 * 0x10) = param_2;
  cVar1 = '\0';
  for (uVar7 = *(byte *)(param_3 + 9) & 0x1f; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
    cVar1 = cVar1 + '\x01';
  }
  *(char *)(lVar4 + 0xc + (ulonglong)uVar6 * 0x10) = cVar1;
  if (0x3f < uVar2) {
    uStack_68 = *(undefined8 *)(param_1 + 0x49c);
    uStack_60 = *(undefined8 *)(param_1 + 0x4a4);
    uStack_58 = *(undefined8 *)(param_1 + 0x4ac);
    uStack_50 = *(undefined8 *)(param_1 + 0x4b4);
    uStack_48 = *(undefined8 *)(param_1 + 0x4bc);
    uStack_40 = *(undefined8 *)(param_1 + 0x4c4);
    lVar8 = 0;
    *(undefined1 *)(param_1 + 0x4dc) = 0;
    *(undefined1 *)(param_1 + 0x4de) = 1;
    do {
      bVar5 = uStack_60._1_1_ & 0xe0;
      uStack_60._0_2_ =
           CONCAT11(bVar5 | (byte)(1 << (*(byte *)(lVar4 + 0xc + lVar8) & 0x1f)) & 0x1f,
                    (undefined1)uStack_60);
      (**(code **)(**(longlong **)(lVar4 + lVar8) + 0x30))(*(longlong **)(lVar4 + lVar8),&uStack_68)
      ;
      lVar8 = lVar8 + 0x10;
    } while ((ulonglong)uVar2 << 4 != lVar8);
    *(undefined1 *)(param_1 + 0x4de) = 0;
    *(undefined1 *)(param_1 + 0x4dc) = 1;
    *(undefined4 *)(param_1 + 0x48c) = 0;
  }
  return;
}

