// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400eb310  size: 168 bytes
// Name:    FUN_1400eb310
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f6a930
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1400eb310(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  byte *pbVar5;
  longlong lVar6;
  
  if (param_1 != (longlong *)0x0) {
    plVar2 = (longlong *)*param_1;
    iVar1 = (int)plVar2[0x1a2];
    if (iVar1 == 0x7f3a6aa9) {
      cVar4 = FUN_144f6a930(param_1);
      if (cVar4 == '\0') {
        return 0;
      }
      pbVar5 = (byte *)0x147b9a450;
    }
    else if (iVar1 == 0xfaa24e8) {
      pbVar5 = (byte *)0x147b9a452;
    }
    else {
      if (iVar1 != 0x27a48605) {
        return 0;
      }
      pbVar5 = (byte *)0x147b9a451;
    }
    if (*pbVar5 != 0) {
      lVar6 = (ulonglong)*pbVar5 * 0x10;
      lVar3 = *(longlong *)
               (param_1[1] + (ulonglong)*(ushort *)(*(longlong *)(*plVar2 + 0x50) + -8 + lVar6) * 8)
      ;
      return CONCAT71((int7)((ulonglong)lVar3 >> 8),
                      0 < *(int *)(lVar3 + (ulonglong)
                                           ((ushort *)plVar2[0x191])
                                           [(ulonglong)*(ushort *)plVar2[0x191] * 0xc +
                                            (ulonglong)
                                            *(ushort *)(*(longlong *)(*plVar2 + 0x50) + -6 + lVar6)
                                            * 0xc + 6]));
    }
  }
  return 0;
}

