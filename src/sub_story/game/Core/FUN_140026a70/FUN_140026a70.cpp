// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140026a70  size: 146 bytes
// Name:    FUN_140026a70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140026bd0, FUN_140026b10, FUN_1400277e0, FUN_140026890
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140026a70(longlong param_1,longlong param_2,undefined4 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lStack_40;
  longlong *plStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  
  *param_3 = 0xffffffff;
  cVar1 = FUN_140026bd0(param_2,**(undefined8 **)(param_1 + 0x20));
  if (cVar1 == '\0') {
    cVar1 = FUN_140026b10(param_2,**(undefined8 **)(param_1 + 0x20));
    if (cVar1 != '\0') {
      *param_3 = 0xfffffffd;
    }
  }
  else {
    uVar2 = FUN_140026890();
    plStack_38 = &lStack_40;
    pcStack_30 = FUN_144389910;
    puStack_28 = &UNK_1401167b0;
    puStack_20 = &SUB_140004380;
    lStack_40 = param_1;
    FUN_1400277e0(uVar2,*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_1 + 0x60));
  }
  return;
}

