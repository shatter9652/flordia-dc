// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401cd260  size: 241 bytes
// Name:    FUN_1401cd260
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401cd020, FUN_145647140, FUN_1401cd360
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_1401cd260(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  char cVar1;
  undefined1 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStackX_8 [32];
  undefined8 uStack_38;
  
  uStack_38 = 0x1401cd273;
  lVar3 = FUN_145647140();
  lVar3 = -lVar3;
  if (param_1 != 0) {
    cVar1 = *(char *)(param_1 + 0x138);
    if (((cVar1 == '\x01') || (cVar1 == '\x10')) || (cVar1 == '\r')) {
      *(undefined1 **)(auStackX_8 + lVar3 + -8) = auStackX_8 + lVar3;
      *(undefined8 *)(&stack0xfffffffffffffff8 + lVar3) = 0x30;
      *(undefined8 *)((longlong)&uStack_38 + lVar3) = 0x1401cd2b2;
      FUN_1401cd020();
      puVar2 = *(undefined1 **)(auStackX_8 + lVar3 + -8);
      if ((ulonglong)*(uint *)(&stack0xfffffffffffffffc + lVar3) == 0) {
        lVar4 = 0;
      }
      else {
        lVar6 = (ulonglong)*(uint *)(&stack0xfffffffffffffffc + lVar3) * 0x70;
        lVar5 = 0;
        do {
          lVar4 = *(longlong *)(puVar2 + lVar5 + 8);
          if (lVar4 != 0) {
            *(undefined8 *)((longlong)&uStack_38 + lVar3) = 0x1401cd2de;
            lVar4 = FUN_1401cd360(lVar4,param_2 & 0xffffffff,param_3 & 0xffffffff);
            if (lVar4 != 0) goto LAB_1401cd2e3;
          }
          lVar5 = lVar5 + 0x70;
        } while (lVar6 - lVar5 != 0);
        lVar4 = 0;
LAB_1401cd2e3:
        lVar5 = 0;
        do {
          *(undefined8 *)(puVar2 + lVar5 + 0x18) = 0x10;
          lVar5 = lVar5 + 0x70;
        } while (lVar6 - lVar5 != 0);
      }
      *(undefined4 *)(&stack0xfffffffffffffffc + lVar3) = 0;
      if (auStackX_8 + lVar3 == puVar2) {
        return lVar4;
      }
      if (puVar2 == (undefined1 *)0x0) {
        return lVar4;
      }
      *(undefined8 *)((longlong)&uStack_38 + lVar3) = 0x1401cd325;
      func_0x000144d9c130(puVar2);
      return lVar4;
    }
  }
  return 0;
}

