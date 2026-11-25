// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14002fc40  size: 374 bytes
// Name:    FUN_14002fc40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14501ee50, FUN_140030310
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14002fc40(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [16];
  int iStack_58;
  undefined1 auStack_54 [16];
  int iStack_44;
  undefined1 auStack_40 [16];
  int iStack_30;
  undefined1 auStack_2c [16];
  int iStack_1c;
  undefined2 uStack_18;
  undefined1 uStack_16;
  
  if ((*(char *)(param_1 + 0x148c) != '\0') || (*(char *)(param_1 + 0x1476) == '\x01')) {
    auStack_68._0_12_ = ZEXT812(0);
    auStack_68._12_4_ = 0;
    iStack_58 = 4;
    iStack_44 = 4;
    iStack_30 = 4;
    iStack_1c = 4;
    uStack_18 = 0;
    uStack_16 = 1;
    uVar3 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0;
    auStack_54 = auStack_68;
    auStack_40 = auStack_68;
    auStack_2c = auStack_68;
    uVar1 = func_0x000144da10f0(*(undefined4 *)(uVar3 + 0x9c));
    plVar2 = (longlong *)FUN_14501ee50(uVar1);
    if (plVar2 == (longlong *)0x0) {
      FUN_140030310(uVar3,auStack_68);
    }
    else {
      (**(code **)(*plVar2 + 0x428))(plVar2,auStack_68);
    }
    if ((undefined1 *)(param_1 + 0x1424) != auStack_68) {
      *(int *)(param_1 + 0x1434) = iStack_58;
      if ((longlong)iStack_58 != 0) {
        func_0x000145f40560((undefined1 *)(param_1 + 0x1424),auStack_68,(longlong)iStack_58 << 2);
      }
      *(int *)(param_1 + 0x1448) = iStack_44;
      if ((longlong)iStack_44 != 0) {
        func_0x000145f40560(param_1 + 0x1438,auStack_54,(longlong)iStack_44 << 2);
      }
      *(int *)(param_1 + 0x145c) = iStack_30;
      if ((longlong)iStack_30 != 0) {
        func_0x000145f40560(param_1 + 0x144c,auStack_40,(longlong)iStack_30 << 2);
      }
      *(int *)(param_1 + 0x1470) = iStack_1c;
      if ((longlong)iStack_1c != 0) {
        func_0x000145f40560(param_1 + 0x1460,auStack_2c,(longlong)iStack_1c << 2);
      }
    }
    *(undefined1 *)(param_1 + 0x1476) = uStack_16;
    *(undefined2 *)(param_1 + 0x1474) = uStack_18;
    *(undefined1 *)(param_1 + 0x148c) = 0;
  }
  return;
}

