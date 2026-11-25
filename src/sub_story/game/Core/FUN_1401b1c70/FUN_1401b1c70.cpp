// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b1c70  size: 329 bytes
// Name:    FUN_1401b1c70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401b1e00, FUN_1401b24f0, FUN_1403c9020, FUN_143531bc0, FUN_141fb19c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401b1c70(longlong param_1,char param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [168];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong lStack_78;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong lStack_58;
  
  if (param_2 != '\0') {
    lVar5 = func_0x0001400fce20(*(undefined4 *)(param_1 + 0x2c));
    if (lVar5 == 0) {
      return;
    }
    FUN_143531bc0(auStack_128,param_1);
    uVar3 = *(undefined4 *)(param_1 + 0x20);
    func_0x000140ef1a90(param_1,auStack_138);
    FUN_1401b24f0(auStack_128,*(undefined8 *)(param_1 + 0x10),auStack_138,lVar5,uVar3,0);
    FUN_141fb19c0(param_1,auStack_128);
    uStack_5c = 0;
    if (lStack_58 != 0) {
      func_0x000144d9c130();
    }
    uStack_60 = 0;
    lStack_58 = 0;
    uStack_7c = 0;
    if (lStack_78 != 0) {
      func_0x000144d9c130();
    }
    uStack_80 = 0;
    lStack_78 = 0;
    FUN_1403c9020();
  }
  if ((ulonglong)*(uint *)(param_1 + 0xac) != 0) {
    puVar6 = *(undefined4 **)(param_1 + 0xb0);
    puVar1 = puVar6 + *(uint *)(param_1 + 0xac);
    do {
      lVar5 = FUN_1401b1e00(*puVar6);
      if ((lVar5 != 0) && (uVar2 = *(uint *)(lVar5 + 4), (ulonglong)uVar2 != 0)) {
        lVar5 = *(longlong *)(lVar5 + 8);
        lVar7 = 0;
        do {
          plVar4 = *(longlong **)(lVar5 + lVar7);
          (**(code **)(*plVar4 + 0x20))(plVar4,param_1);
          lVar7 = lVar7 + 8;
        } while ((ulonglong)uVar2 << 3 != lVar7);
      }
      puVar6 = puVar6 + 1;
    } while (puVar6 != puVar1);
  }
  return;
}

