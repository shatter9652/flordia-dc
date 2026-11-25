// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b1370  size: 141 bytes
// Name:    FUN_1400b1370
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1451fa5a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400b1370(longlong param_1,undefined4 *param_2,longlong param_3)

{
  undefined4 uVar1;
  char cVar2;
  int iStack_44;
  undefined1 auStack_40 [8];
  longlong lStack_38;
  
  func_0x000140e19380(auStack_40);
  if (param_3 == 0) {
    *param_2 = 0;
  }
  else {
    func_0x00014505b690(auStack_40,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10));
    cVar2 = FUN_1451fa5a0(*(undefined8 *)(param_1 + 0x20));
    if (cVar2 != '\0') {
      uVar1 = *(undefined4 *)(lStack_38 + 0x34);
      func_0x000140019da0(uVar1,&iStack_44);
      if (iStack_44 != 0) {
        func_0x000140019da0(uVar1,param_2);
        return;
      }
    }
    func_0x000140019da0(*(undefined4 *)(lStack_38 + 0x30),param_2);
  }
  return;
}

