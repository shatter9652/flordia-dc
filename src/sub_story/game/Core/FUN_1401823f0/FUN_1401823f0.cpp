// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401823f0  size: 247 bytes
// Name:    FUN_1401823f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1401823f0(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  *param_1 = &UNK_14663ef50;
  if (param_1[0xd] != 0) {
    (**(code **)(*_DAT_14abcc310 + 0x60))();
  }
  *param_1 = &UNK_14663efb0;
  lVar1 = param_1[6];
  lVar2 = param_1[7];
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
    lVar1 = param_1[6];
  }
  (**(code **)(*_DAT_14abcc310 + 0x60))(_DAT_14abcc310,lVar1);
  lVar1 = param_1[3];
  lVar2 = param_1[4];
  if (lVar2 != 0) {
    plVar3 = (longlong *)(lVar2 * 0x10 + -8 + lVar1);
    do {
      if (*plVar3 != 0) {
        func_0x00014503e5c0();
      }
      plVar3 = plVar3 + -2;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    lVar1 = param_1[3];
  }
  (**(code **)(*_DAT_14abcc310 + 0x60))(_DAT_14abcc310,lVar1);
  func_0x000145390160(param_1);
  if (param_2 != 0) {
    (**(code **)(*_DAT_14abcc310 + 0x60))(_DAT_14abcc310,param_1);
  }
  return param_1;
}

