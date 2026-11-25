// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400955c0  size: 335 bytes
// Name:    FUN_1400955c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400955c0(undefined4 param_1,undefined4 param_2,longlong *param_3)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(byte *)((longlong)param_3 + 0x5a) < 3) {
    if ((*(byte *)(param_3 + 3) & 1) == 0) {
      if ((*(byte *)(param_3 + 3) & 2) == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = param_3[1];
      }
      lVar5 = *param_3;
    }
    else {
      lVar4 = *param_3;
      lVar5 = lVar4;
    }
    if (((lVar5 != 0) && (*(char *)(lVar5 + 0x156) == '\x01')) &&
       (((*(byte *)(lVar5 + 0x1a) & 0x20) == 0 &&
        ((lVar4 != lVar5 && (lVar5 = *(longlong *)(lVar5 + 0x20), lVar5 != 0)))))) {
      *(undefined4 *)(lVar5 + 0x2e4) = param_2;
      *(undefined4 *)(lVar5 + 0x2e8) = param_1;
    }
    lVar5 = param_3[1];
    if (lVar5 == 0) {
      return;
    }
    if (*(char *)(lVar5 + 0x156) != '\x01') {
      return;
    }
    if ((*(byte *)(lVar5 + 0x1a) & 0x20) != 0) {
      return;
    }
    if (lVar4 == lVar5) {
      return;
    }
    lVar4 = *(longlong *)(lVar5 + 0x20);
  }
  else {
    lVar4 = *param_3;
    if (*(byte *)((longlong)param_3 + 0x5a) != 3) {
      iVar2 = *(int *)(lVar4 + 0x24);
      if ((longlong)iVar2 < 1) {
        return;
      }
      lVar4 = *(longlong *)(lVar4 + 0x28);
      lVar5 = 0;
      do {
        uVar1 = *(ushort *)(lVar4 + lVar5 * 2);
        lVar3 = func_0x000145033d30();
        lVar3 = func_0x00014507deb0(*(undefined8 *)
                                     (*(longlong *)(lVar3 + 8) + 0x38 +
                                     (ulonglong)((uint)uVar1 * *(int *)(lVar3 + 0x14))));
        if ((((lVar3 != 0) && (*(char *)(lVar3 + 0x156) == '\x01')) &&
            ((*(byte *)(lVar3 + 0x1a) & 0x20) == 0)) &&
           (lVar3 = *(longlong *)(lVar3 + 0x20), lVar3 != 0)) {
          *(undefined4 *)(lVar3 + 0x2e4) = param_2;
          *(undefined4 *)(lVar3 + 0x2e8) = param_1;
        }
        lVar5 = lVar5 + 1;
      } while (iVar2 != lVar5);
      return;
    }
    if (lVar4 == 0) {
      return;
    }
    if (*(char *)(lVar4 + 0x156) != '\x01') {
      return;
    }
    if ((*(byte *)(lVar4 + 0x1a) & 0x20) != 0) {
      return;
    }
    lVar4 = *(longlong *)(lVar4 + 0x20);
  }
  if (lVar4 != 0) {
    *(undefined4 *)(lVar4 + 0x2e4) = param_2;
    *(undefined4 *)(lVar4 + 0x2e8) = param_1;
  }
  return;
}

