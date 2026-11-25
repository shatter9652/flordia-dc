// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401ccf30  size: 234 bytes
// Name:    FUN_1401ccf30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401cd020, FUN_145647140
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_1401ccf30(longlong param_1,ulonglong param_2)

{
  char cVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStackX_8 [32];
  undefined8 uStack_30;
  
  uStack_30 = 0x1401ccf41;
  lVar4 = FUN_145647140();
  lVar4 = -lVar4;
  if (param_1 != 0) {
    cVar1 = *(char *)(param_1 + 0x138);
    if (((cVar1 == '\x01') || (cVar1 == '\x10')) || (cVar1 == '\r')) {
      *(undefined1 **)(auStackX_8 + lVar4 + -8) = auStackX_8 + lVar4;
      *(undefined8 *)(&stack0xfffffffffffffff8 + lVar4) = 0x30;
      *(undefined8 *)((longlong)&uStack_30 + lVar4) = 0x1401ccf7d;
      FUN_1401cd020();
      puVar2 = *(undefined1 **)(auStackX_8 + lVar4 + -8);
      if ((ulonglong)*(uint *)(&stack0xfffffffffffffffc + lVar4) == 0) {
        lVar5 = 0;
      }
      else {
        lVar7 = (ulonglong)*(uint *)(&stack0xfffffffffffffffc + lVar4) * 0x70;
        lVar6 = 0;
        do {
          if (*(longlong *)(puVar2 + lVar6 + 8) != 0) {
            uVar3 = *(undefined8 *)(*(longlong *)(puVar2 + lVar6 + 8) + 0x10);
            *(undefined8 *)((longlong)&uStack_30 + lVar4) = 0x1401ccfa9;
            lVar5 = func_0x0001401cd080(uVar3,param_2 & 0xffffffff);
            if (lVar5 != 0) goto LAB_1401ccfae;
          }
          lVar6 = lVar6 + 0x70;
        } while (lVar7 - lVar6 != 0);
        lVar5 = 0;
LAB_1401ccfae:
        lVar6 = 0;
        do {
          *(undefined8 *)(puVar2 + lVar6 + 0x18) = 0x10;
          lVar6 = lVar6 + 0x70;
        } while (lVar7 - lVar6 != 0);
      }
      *(undefined4 *)(&stack0xfffffffffffffffc + lVar4) = 0;
      if (auStackX_8 + lVar4 == puVar2) {
        return lVar5;
      }
      if (puVar2 == (undefined1 *)0x0) {
        return lVar5;
      }
      *(undefined8 *)((longlong)&uStack_30 + lVar4) = 0x1401ccfee;
      func_0x000144d9c130(puVar2);
      return lVar5;
    }
  }
  return 0;
}

