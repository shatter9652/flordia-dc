// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ffc50  size: 216 bytes
// Name:    FUN_1400ffc50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_143508040, FUN_1409cb7e0, FUN_143510f20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_1400ffc50(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  undefined8 unaff_R14;
  ulonglong uVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (*(char *)(param_1 + 0x12c4) == '\0') {
    lVar2 = *(longlong *)(param_1 + 8);
    if ((((lVar2 != 0) && (lVar4 = func_0x000144da6540(*(undefined4 *)(lVar2 + 0x9c)), lVar4 != 0))
        && (*(longlong *)(lVar4 + 0x10b8) != 0)) &&
       (((*(byte *)(*(longlong *)(lVar4 + 0x10b8) + 0x14) & 8) != 0 &&
        (cVar3 = FUN_143508040(lVar2), cVar3 == '\0')))) {
      uVar1 = *(undefined4 *)(param_1 + 0xfc0);
      uVar6 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),*(undefined1 *)(param_1 + 0x1010));
      cVar3 = func_0x00014501bbd0(uVar1,uVar6 & 0xffffffff);
      if ((cVar3 != '\0') &&
         (((*(byte *)(param_1 + 0x106f) & 0x10) != 0 &&
          (lVar4 = FUN_1409cb7e0(uVar1,uVar6 & 0xffffffff), lVar4 != 0)))) {
        uVar1 = *(undefined4 *)(lVar4 + 0x9c);
        cVar3 = func_0x000144e72530(uVar1);
        if (cVar3 == '\0') {
          uStack_38 = *(undefined8 *)(lVar2 + 0x70);
          uStack_30 = *(undefined8 *)(lVar2 + 0x78);
          uStack_48 = *(undefined8 *)(lVar4 + 0x70);
          uStack_40 = *(undefined8 *)(lVar4 + 0x78);
          cVar3 = FUN_143510f20(&uStack_38,&uStack_48,uVar1);
          if (cVar3 != '\0') goto LAB_1400ffc96;
        }
      }
    }
    uVar5 = 0;
  }
LAB_1400ffc96:
  return uVar5 & 0xffffffff;
}

