// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14012b320  size: 248 bytes
// Name:    FUN_14012b320
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14529f910, FUN_142708f70, FUN_142866c00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14012b320(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_d0 [184];
  
  cVar4 = FUN_142866c00(*(undefined4 *)(param_1 + 0x10));
  if (cVar4 != '\0') {
    uVar1 = *(uint *)(param_1 + 0x10);
    uVar5 = (ulonglong)uVar1 & 0x1ffff;
    if ((uVar5 != 0x1ffff) &&
       (plVar3 = *(longlong **)((ulonglong)(uVar1 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
       plVar3 != (longlong *)0x0)) {
      uVar2 = *(uint *)(plVar3[5] + uVar5 * 4);
      if (((uVar2 >> 0x11 & 0x3ff) == uVar1 >> 0x16) &&
         (((uVar2 & *(uint *)(plVar3 + 6)) == *(uint *)(plVar3 + 6) && (lVar6 = *plVar3, lVar6 != 0)
          ))) {
        uVar5 = (ulonglong)(uint)((int)uVar5 * (int)plVar3[1]);
        if (*(char *)(lVar6 + 0x30 + uVar5) == '\x03') {
          lVar6 = func_0x000144fdf400(*(undefined4 *)(lVar6 + 0x9c + uVar5));
          if (lVar6 != 0) {
            LOCK();
            *(ushort *)(lVar6 + 0x14) = *(ushort *)(lVar6 + 0x14) & 0xfffb;
            UNLOCK();
          }
        }
        *(undefined4 *)(param_1 + 0x1c) = _DAT_14abbef40;
        plVar3 = _DAT_14ab7f658;
        FUN_142708f70(auStack_d0,0);
        (**(code **)(*plVar3 + 8))(plVar3,auStack_d0,0);
        FUN_14529f910(auStack_d0);
      }
    }
    *(undefined4 *)(param_1 + 0x10) = 0x1ffff;
    func_0x000142866ce0(param_1,0);
  }
  return;
}

