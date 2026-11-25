// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400738c0  size: 155 bytes
// Name:    FUN_1400738c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_1400738c0(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  uVar2 = *(uint *)(param_1 + 0x9c);
  lVar5 = (ulonglong)(uVar2 >> 0x11 & 0x1f) * 0x238;
  if (*(int *)(lVar5 + 0x14abbf3c4) != 0) {
    bVar1 = *(byte *)(lVar5 + 0x14abbf429);
    if (bVar1 != 0xff) {
      uVar6 = (ulonglong)
              *(ushort *)
               (*(longlong *)(lVar5 + 0x14abbf3d0) +
               (ulonglong)(*(int *)(lVar5 + 0x14abbf3c4) * (uVar2 & 0x1ffff) + (uint)bVar1) * 2);
      if (uVar6 != 0xffff) {
        lVar4 = *(longlong *)(*(longlong *)(lVar5 + 0x14abbf3e0) + (ulonglong)bVar1 * 0x10);
        if (lVar4 != 0) {
          return lVar4 + uVar6 * *(longlong *)
                                  (*(longlong *)(lVar5 + 0x14abbf3e0) + 8 + (ulonglong)bVar1 * 0x10)
          ;
        }
      }
      plVar3 = *(longlong **)(*(longlong *)(lVar5 + 0x14abbf3b8) + (ulonglong)bVar1 * 8);
                    /* WARNING: Could not recover jumptable at 0x000140073936. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar5 = (**(code **)(*plVar3 + 8))(plVar3,param_1,uVar2,0);
      return lVar5;
    }
  }
  return 0;
}

