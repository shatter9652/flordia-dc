// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140039400  size: 127 bytes
// Name:    FUN_140039400
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140039400(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  ushort uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(((uint)param_1 & 0xffff) << 4);
  if ((*(short *)(*(longlong *)(_DAT_14abbf348 + 0x28) + 8 + uVar4) ==
       (short)((ulonglong)param_1 >> 0x10)) &&
     (lVar1 = *(longlong *)(*(longlong *)(_DAT_14abbf348 + 0x28) + uVar4), lVar1 != 0)) {
    lVar1 = *(longlong *)(lVar1 + 8);
    lVar2 = *(longlong *)(lVar1 + 0x20);
    if (lVar2 != 0) {
      uVar4 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
      if ((short)((ulonglong)param_1 >> 0x20) == -2) {
        return uVar4;
      }
      if (*(char *)(lVar2 + 0x10) != '\x06') {
        return uVar4;
      }
      uVar3 = func_0x0001403dc2f0();
      if ((uVar3 != 0xffff) && (uVar3 < *(ushort *)(lVar2 + 0x9a))) {
        return (ulonglong)
               CONCAT11((char)(uVar3 >> 8),
                        *(longlong *)(*(longlong *)(lVar2 + 0x70) + (ulonglong)uVar3 * 8) != 0);
      }
    }
  }
  return 0;
}

