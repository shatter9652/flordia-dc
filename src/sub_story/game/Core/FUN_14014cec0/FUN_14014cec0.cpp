// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014cec0  size: 45 bytes
// Name:    FUN_14014cec0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_14014cec0(undefined8 *param_1)

{
  undefined8 uVar1;
  char cVar2;
  code *pcStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 *puStack_28;
  
  uStack_30 = 0x14014cecd;
  cVar2 = func_0x00014014cef0();
  uVar1 = _DAT_14a9e88c0;
  if (cVar2 != '\0') {
    func_0x00014014cfb0(&pcStack_48);
    pcStack_48 = FUN_14501b020;
    uStack_40 = *(undefined4 *)(param_1 + 2);
    uStack_38 = *param_1;
    uStack_30 = param_1[1];
    *(undefined4 *)(param_1 + 0xc) = 0x7f7fffff;
    puStack_28 = param_1;
    FUN_14501ae20(uVar1,&pcStack_48);
    return *(short *)(param_1 + 7) != -1;
  }
  return false;
}

