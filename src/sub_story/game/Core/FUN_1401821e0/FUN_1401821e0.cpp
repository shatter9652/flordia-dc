// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401821e0  size: 242 bytes
// Name:    FUN_1401821e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1401821e0(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  *param_1 = &UNK_1466383e0;
  (**(code **)(*_DAT_14abcc310 + 0x60))(_DAT_14abcc310,param_1[0xc]);
  *param_1 = &UNK_146638440;
  lVar1 = param_1[9];
  lVar2 = param_1[10];
  if (lVar2 != 0) {
    plVar3 = (longlong *)(lVar1 + -8 + lVar2 * 0x28);
    do {
      if (*plVar3 != 0) {
        func_0x00014503e5c0();
      }
      if (plVar3[-1] != 0) {
        func_0x00014503e5c0();
      }
      plVar3 = plVar3 + -5;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    lVar1 = param_1[9];
  }
  (**(code **)(*_DAT_14abcc310 + 0x60))(_DAT_14abcc310,lVar1);
  lVar1 = param_1[6];
  lVar2 = param_1[7];
  if (lVar2 != 0) {
    plVar3 = (longlong *)(lVar2 * 0x10 + -8 + lVar1);
    do {
      if (*plVar3 != 0) {
        func_0x00014503e5c0();
      }
      plVar3 = plVar3 + -2;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    lVar1 = param_1[6];
  }
  (**(code **)(*_DAT_14abcc310 + 0x60))(_DAT_14abcc310,lVar1);
  func_0x000145390160(param_1);
  if (param_2 != 0) {
    (**(code **)(*_DAT_14abcc310 + 0x60))(_DAT_14abcc310,param_1);
  }
  return param_1;
}

