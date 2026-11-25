// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a5930  size: 442 bytes
// Name:    FUN_1401a5930
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14501c540
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401a5930(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  short *psVar1;
  undefined4 uVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  short sVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  short asStack_6e8 [32];
  undefined1 auStack_6a8 [32];
  short asStack_688 [32];
  char acStack_648 [520];
  short asStack_440 [512];
  
  uVar5 = *(uint *)(*(longlong *)
                     (*(longlong *)(param_1 + 0x40) + 0x10 +
                     (ulonglong)(uint)(int)(char)((uint)param_3 >> 0x10) * 0x48) + 0x130 +
                   (ulonglong)(uint)(int)(short)param_3 * 0x150);
  if (uVar5 < *(uint *)(param_1 + 0xf6c)) {
    sVar7 = *(short *)(*(longlong *)(param_1 + 0xf70) + (ulonglong)uVar5 * 2);
  }
  else {
    sVar7 = -1;
  }
  auStack_6a8 = ZEXT1232(ZEXT812(0));
  lVar3 = *(longlong *)(param_1 + 0xf60);
  func_0x000145f40580(acStack_648,0,(longlong)*(int *)(lVar3 + 0x14));
  asStack_6e8[0] = sVar7;
  uVar8 = 1;
  acStack_648[sVar7] = '\x01';
  uVar9 = 0;
  do {
    uVar8 = (ulonglong)((int)uVar8 - 1);
    sVar7 = asStack_6e8[uVar8];
    uVar2 = **(undefined4 **)
              (*(longlong *)(lVar3 + 0x18) + 8 + ((longlong)sVar7 & 0xffffffffU) * 0x38);
    cVar4 = (**(code **)(*(longlong *)
                          (*(longlong *)(param_1 + 0x40) + 0x10 +
                          (ulonglong)(uint)(int)(char)((uint)uVar2 >> 0x10) * 0x48) + 0x58 +
                        (ulonglong)(uint)(int)(short)uVar2 * 0x150))();
    uVar10 = uVar9;
    if (cVar4 == '\0') {
      uVar10 = (ulonglong)((int)uVar9 + 1);
      asStack_440[uVar9] = sVar7;
      uVar5 = FUN_14501c540(lVar3,asStack_688,(int)sVar7,0x60,0,auStack_6a8);
      if (0 < (int)uVar5) {
        uVar6 = 0;
        uVar9 = uVar8;
        do {
          sVar7 = asStack_688[uVar6];
          uVar8 = uVar9;
          if (acStack_648[sVar7] == '\0') {
            uVar8 = (ulonglong)((int)uVar9 + 1);
            acStack_648[sVar7] = '\x01';
            asStack_6e8[uVar9] = sVar7;
          }
          uVar6 = uVar6 + 1;
          uVar9 = uVar8;
        } while (uVar5 != uVar6);
      }
    }
    uVar9 = uVar10;
  } while ((int)uVar8 != 0);
  if ((int)uVar10 != 0) {
    uVar8 = 0;
    do {
      psVar1 = asStack_440 + uVar8;
      uVar8 = uVar8 + 1;
      uVar2 = **(undefined4 **)
                (*(longlong *)(lVar3 + 0x18) + 8 + (ulonglong)(uint)(int)*psVar1 * 0x38);
      LOCK();
      psVar1 = (short *)(*(longlong *)
                          (*(longlong *)(param_1 + 0x40) + 0x28 +
                          (ulonglong)(uint)(int)(char)((uint)uVar2 >> 0x10) * 0x48) +
                        (ulonglong)(uint)(int)(short)uVar2 * 2);
      *psVar1 = *psVar1 + 1;
      UNLOCK();
    } while (uVar10 != uVar8);
  }
  return;
}

