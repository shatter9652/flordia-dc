// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b1d10  size: 186 bytes
// Name:    FUN_1400b1d10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140005d30, FUN_144d9fa40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400b1d10(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  lVar4 = FUN_144d9fa40();
  if (lVar4 != 0) {
    lVar4 = func_0x000144db7870(lVar4);
    uVar6 = (ulonglong)*(byte *)(lVar4 + 0xc0 + (ulonglong)DAT_14abc3ab0);
    if (((uVar6 != 0xff) && (lVar4 = *(longlong *)(lVar4 + 0x10 + uVar6 * 8), lVar4 != 0)) &&
       (plVar1 = *(longlong **)(lVar4 + 0xb0), plVar1 != (longlong *)0x0)) {
      lVar2 = *plVar1;
      lVar3 = plVar1[6];
      lVar5 = func_0x0001401cfe60(lVar2,(int)lVar3,0x2deefadd,param_2);
      if ((lVar5 != 0) &&
         (*(int *)(*(longlong *)(lVar4 + 0xa8) +
                  (ulonglong)
                  *(ushort *)
                   (lVar2 + 10 +
                   (ulonglong)(uint)((int)((ulonglong)(lVar5 - lVar2) >> 2) * -0x55555555) * 0xc) *
                  4) != -1)) {
        FUN_140005d30(*(longlong *)(lVar4 + 0xa8),lVar2,(int)lVar3,0x2deefadd,param_2,param_3);
      }
    }
  }
  return;
}

