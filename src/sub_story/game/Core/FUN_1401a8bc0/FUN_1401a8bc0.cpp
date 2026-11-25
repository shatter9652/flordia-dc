// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a8bc0  size: 147 bytes
// Name:    FUN_1401a8bc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f68b50, FUN_144e747b0, FUN_144e23920, FUN_144da3570
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_1401a8bc0(longlong param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_18 [8];
  undefined8 uStack_10;
  
  cVar2 = func_0x0001401a8c60();
  if ((cVar2 != '\0') && (param_1 != 0)) {
    uVar1 = *(undefined4 *)(param_1 + 0x9c);
    cVar2 = FUN_144e23920(uVar1);
    if ((cVar2 == '\0') && (cVar2 = FUN_144f68b50(uVar1), cVar2 == '\0')) {
      lVar4 = func_0x000144da6540(uVar1);
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = *(longlong *)(lVar4 + 0x1080);
      }
      if (*(int *)(lVar4 + 0xc4) == 0) {
        FUN_144da3570(auStack_18);
        cVar2 = func_0x000144da3550(uStack_10);
        if (cVar2 == '\0') {
          if (DAT_149a62df8 != '\x01') {
            return true;
          }
          iVar3 = FUN_144e747b0();
          return iVar3 == 1;
        }
      }
    }
  }
  return false;
}

