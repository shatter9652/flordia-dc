// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 145cc6e00  size: 200 bytes
// Name:    datBase64::Encode
// Subsystem: core
// Class:   datBase64
//
// Evidence:
//   GTAVSRC: datBase64::Encode  (rage/base/src/net/http.cpp)
//   literal: Authorization
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1453d8230, FUN_144ef66d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/datBase64.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 datBase64__Encode(longlong *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  
  uVar4 = *(undefined4 *)(param_2 + 0x9c);
  lVar3 = func_0x000144ef6280(uVar4);
  if ((lVar3 != 0) && (((*(byte *)(lVar3 + 0x1f) & 2) != 0 || ((*(byte *)(lVar3 + 0xab) & 2) != 0)))
     ) {
    return 0xf;
  }
  if (*(longlong *)(_DAT_14a9ec5b0 + 0x18) != 0) {
    auVar5._0_12_ = ZEXT812(0);
    auVar5._12_4_ = 0;
    iVar2 = FUN_144ef66d0(*(longlong *)(_DAT_14a9ec5b0 + 0x18),param_2,0x86,0,auVar5);
    if (0 < iVar2) {
      return 0x10;
    }
    uVar4 = *(undefined4 *)(param_2 + 0x9c);
  }
  cVar1 = func_0x000145227370(uVar4);
  if (cVar1 != '\0') {
    cVar1 = func_0x000144e72530(uVar4);
    if (cVar1 != '\0') {
      return 0x14c;
    }
    cVar1 = FUN_1453d8230(uVar4);
    if (cVar1 == '\0') {
      if (((((*(byte *)(param_1 + 5) & 2) == 0) ||
           (cVar1 = (**(code **)(*param_1 + 0xc0))(param_1), cVar1 != '\0')) &&
          (*(code **)(*param_1 + 0x370) != (code *)&UNK_14503f490)) &&
         ((cVar1 = (**(code **)(*param_1 + 0x370))(param_1,param_2), cVar1 != '\0' &&
          ((char)param_1[0x13] == '\0')))) {
        return 0x171;
      }
      return 1;
    }
    return 9;
  }
  return 0x11;
}

