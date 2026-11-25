// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 141da7640  size: 151 bytes
// Name:    CPedPopulation::InitWidgets
// Subsystem: peds
// Class:   CPedPopulation
//
// Evidence:
//   GTAVSRC: CPedPopulation::InitWidgets  (game/Peds/pedpopulation.cpp)
//   literal: Ped Population
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141279100
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/CPedPopulation.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * CPedPopulation__InitWidgets(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined2 uStack_28;
  byte abStack_26 [17];
  undefined1 auStack_15 [5];
  
  lVar1 = 0;
  func_0x000144fc2180(0,&UNK_14677f2de);
  uStack_28 = 0x101;
  uStack_38 = _DAT_14652cda9;
  uStack_30 = _UNK_14652cdb1;
  do {
    abStack_26[lVar1] = (char)lVar1 - 0xfU ^ *(byte *)((longlong)&uStack_38 + lVar1);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x11);
  *param_1 = &UNK_146727710;
  *(undefined4 *)(param_1 + 1) = 0xecdf7966;
  FUN_141279100(param_1,abStack_26,1);
  if (uStack_28._1_1_ == '\x01') {
    lVar1 = -0x11;
    do {
      auStack_15[lVar1] = 0;
      lVar1 = lVar1 + 1;
    } while (lVar1 != 0);
  }
  *param_1 = &UNK_14652cc80;
  *(undefined4 *)(param_1 + 5) = 0;
  return param_1;
}

