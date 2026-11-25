// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f0220  size: 126 bytes
// Name:    FUN_1400f0220
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14038a9b0, FUN_144e68240
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400f0220(longlong param_1,int *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 uStack_38;
  
  lVar2 = func_0x000144e68150(*(undefined4 *)
                               ((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0) + 0x9c));
  if (lVar2 != 0) {
    func_0x000145229720(auStack_58);
    cVar1 = FUN_144e68240(lVar2,auStack_58);
    if (cVar1 != '\0') {
      FUN_14038a9b0(uStack_38,param_2);
      return;
    }
  }
  if (*(int *)(param_1 + 600) == 0) {
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
              (*(longlong **)(param_1 + 0x20),param_2,param_1);
  }
  else {
    *param_2 = *(int *)(param_1 + 600);
  }
  return;
}

