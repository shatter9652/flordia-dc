// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401bd690  size: 320 bytes
// Name:    FUN_1401bd690
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145082f00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401bd690(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint *puVar1;
  char cVar2;
  ushort uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  uint uStack_60;
  short sStack_5c;
  longlong lStack_58;
  undefined2 uStack_50;
  undefined1 auStack_48 [8];
  ushort uStack_40;
  
  func_0x0001450812b0();
  cVar2 = func_0x000145503b60(*(undefined4 *)(param_1 + 0x254));
  if ((cVar2 != '\0') &&
     (*(char *)(*(longlong *)(**(longlong **)(param_3 + 0x80) + 0x88) + 0x155) == '\t')) {
    uStack_50 = 0;
    lStack_58 = param_3;
    func_0x000145082fe0(param_3,auStack_48);
    if (uStack_40 != 0) {
      uVar6 = 0;
      do {
        FUN_145082f00(&lStack_58,&uStack_60);
        uVar4 = (ulonglong)((uStack_60 & 0xffff) << 4);
        if (((*(short *)(*(longlong *)(_DAT_14abbf348 + 0x28) + 8 + uVar4) ==
              (short)(uStack_60 >> 0x10)) &&
            (lVar5 = *(longlong *)(*(longlong *)(_DAT_14abbf348 + 0x28) + uVar4), lVar5 != 0)) &&
           (lVar5 = *(longlong *)(*(longlong *)(lVar5 + 8) + 0x20), lVar5 != 0)) {
          if ((*(char *)(lVar5 + 0x10) == '\x06') && (sStack_5c != -2)) {
            uVar3 = func_0x0001403dc2f0();
            if ((uVar3 == 0xffff) ||
               ((*(ushort *)(lVar5 + 0x9a) <= uVar3 ||
                (lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x70) + (ulonglong)uVar3 * 8),
                lVar5 == 0)))) goto LAB_1401bd7a1;
          }
          if (*(int *)(lVar5 + 0x18) != -0x59b3e649) goto LAB_1401bd7a1;
        }
        else {
LAB_1401bd7a1:
          puVar1 = (uint *)(param_3 + (ulonglong)(uVar6 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << (uVar6 & 0x1f);
        }
        uVar6 = uVar6 + 1;
        uStack_50 = (undefined2)uVar6;
      } while (uStack_40 != uVar6);
    }
  }
  return;
}

