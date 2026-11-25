// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140030d60  size: 224 bytes
// Name:    FUN_140030d60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e2caf0, FUN_1400310f0, FUN_140030e40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140030d60(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [64];
  
  cVar4 = FUN_144e2caf0();
  if (cVar4 == '\0') {
    return;
  }
  uStack_68 = *param_2;
  uStack_60 = param_2[1];
  cVar4 = func_0x000144edcf50(&uStack_68,*(undefined4 *)(param_2 + 2));
  if (cVar4 == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x105) == '\x01') {
    uVar1 = *(uint *)(param_1 + 0x100);
    uVar5 = (ulonglong)uVar1 & 0x1ffff;
    if ((uVar5 != 0x1ffff) &&
       (plVar3 = *(longlong **)((ulonglong)(uVar1 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
       plVar3 != (longlong *)0x0)) {
      uVar2 = *(uint *)(plVar3[5] + uVar5 * 4);
      lVar6 = 0;
      if (uVar1 >> 0x16 == (uVar2 >> 0x11 & 0x3ff) &&
          (uVar2 & *(uint *)(plVar3 + 6)) == *(uint *)(plVar3 + 6)) {
        lVar6 = (ulonglong)(uint)((int)plVar3[1] * (int)uVar5) + *plVar3;
      }
      goto LAB_140030d9d;
    }
  }
  lVar6 = 0;
LAB_140030d9d:
  FUN_140030e40(auStack_58,param_2,lVar6);
  FUN_1400310f0(param_1 + 0x110,auStack_58);
  *(undefined1 *)(param_1 + 0x169) = *(undefined1 *)(param_1 + 0x168);
  return;
}

