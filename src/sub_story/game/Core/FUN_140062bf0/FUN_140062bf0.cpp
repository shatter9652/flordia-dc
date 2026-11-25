// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140062bf0  size: 97 bytes
// Name:    FUN_140062bf0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140062cc0, FUN_140018ce0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140062bf0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 unaff_RSI;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  
  FUN_140062cc0();
  plVar2 = *(longlong **)(param_1 + 0x1b8);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = *plVar2;
    if (lVar3 != 0) {
      LOCK();
      piVar1 = (int *)(lVar3 + 0x30);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        func_0x000144e3f350(lVar3);
        func_0x000144d9c130(lVar3,0x40);
      }
    }
    FUN_140018ce0(plVar2);
  }
  *(undefined8 *)(param_1 + 0x38) = &UNK_14668b1a0;
  FUN_144ea2f50((undefined8 *)(param_1 + 0x38),0,param_3,param_4,unaff_RSI);
  func_0x000144e2aa90(param_1 + 0xc0);
  func_0x000144e2aa90(param_1 + 0xb8);
  func_0x000144e2aa90(param_1 + 0xb0);
  func_0x000144e2aa90(param_1 + 0xa8);
  puVar4 = (undefined8 *)(param_1 + 0x40);
  if (*(char *)(param_1 + 0x86) == '\x01') {
    FUN_14521d2f0(puVar4,*puVar4,param_3,param_4,unaff_RSI);
    FUN_140370630(*puVar4);
  }
  auVar5._0_12_ = ZEXT812(0);
  auVar5._12_4_ = 0;
  *puVar4 = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x7e) = 0;
  *(undefined1 *)(param_1 + 0x86) = 1;
  *(undefined1 (*) [16])(param_1 + 0x68) = auVar5;
  return;
}

