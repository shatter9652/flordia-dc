// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b12d0  size: 145 bytes
// Name:    FUN_1400b12d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1407bb7b0, FUN_1400b1370, FUN_1400b18d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400b12d0(longlong param_1)

{
  longlong lVar1;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  longlong lStack_30;
  
  func_0x000140e19380(auStack_38);
  func_0x00014505b690(auStack_38,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10));
  FUN_1400b1370(param_1,&uStack_44,*(undefined8 *)(param_1 + 0x20));
  func_0x000140198500(*(undefined8 *)(lStack_30 + 0x28),&uStack_40);
  lVar1 = FUN_1407bb7b0(uStack_40,uStack_44);
  if (lVar1 != 0) {
    func_0x000140019da0(*(undefined4 *)(lStack_30 + 0x20),&uStack_48);
    FUN_1400b18d0(*(undefined8 *)(param_1 + 0x20),lVar1,uStack_48);
  }
  return;
}

