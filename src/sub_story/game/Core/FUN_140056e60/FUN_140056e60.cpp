// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140056e60  size: 191 bytes
// Name:    FUN_140056e60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140056e60(undefined8 param_1,longlong *param_2,int param_3,longlong param_4,code *param_5)

{
  longlong **pplStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  longlong **pplStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  longlong *plStack_38;
  undefined8 uStack_30;
  longlong *plStack_28;
  undefined8 uStack_20;
  
  pplStack_78 = &plStack_28;
  pplStack_58 = &plStack_38;
  pcStack_70 = FUN_1452d8e90;
  puStack_68 = &UNK_1408d04c0;
  puStack_60 = &SUB_140004380;
  pcStack_50 = FUN_142495820;
  puStack_48 = &UNK_1408d04c0;
  puStack_40 = &SUB_140004380;
  plStack_38 = param_2;
  uStack_30 = param_1;
  plStack_28 = param_2;
  uStack_20 = param_1;
  if (param_4 == 0) {
    (*param_5)(&pplStack_78);
  }
  else {
    (*param_5)(param_4,&pplStack_78);
  }
  (**(code **)(*param_2 + 0x250))(param_2,param_1,param_3 == 1);
  return;
}

