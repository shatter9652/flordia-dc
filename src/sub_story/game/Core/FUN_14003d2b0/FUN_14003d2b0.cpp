// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14003d2b0  size: 103 bytes
// Name:    FUN_14003d2b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14003d2b0(int *param_1,ushort param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong lVar1;
  int *piVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined2 uStack_120;
  undefined1 uStack_11e;
  undefined1 auStack_118 [32];
  undefined1 auStack_f8 [32];
  undefined2 uStack_d8;
  undefined1 auStack_d0 [32];
  undefined4 uStack_b0;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [32];
  unkbyte10 Stack_48;
  undefined1 auStack_3e [22];
  unkbyte10 Stack_28;
  
  if (param_2 != 0) {
    uVar3 = (ulonglong)param_2;
    piVar2 = param_1;
    do {
      uVar5 = uVar3 >> 1;
      uVar4 = ~uVar5 + uVar3;
      uVar3 = uVar5;
      if ((uint)(piVar2 + uVar5 * 4 + 4)[-4] < 0x3851ef1b) {
        piVar2 = piVar2 + uVar5 * 4 + 4;
        uVar3 = uVar4;
      }
    } while (0 < (longlong)uVar3);
    if ((piVar2 != param_1 + (ulonglong)param_2 * 4) && (*piVar2 == 0x3851ef1b)) {
      lVar1 = *(longlong *)(piVar2 + 2);
      *param_4 = 0;
      if (lVar1 != 0) {
        auStack_3e._0_12_ = ZEXT812(0);
        auStack_3e._12_4_ = 0;
        uStack_120 = 0;
        uStack_11e = 1;
        auStack_118 = ZEXT1632(auStack_3e._0_16_);
        uStack_d8 = 0;
        auStack_d0 = ZEXT1632(auStack_3e._0_16_);
        uStack_b0 = 0;
        Stack_48 = auStack_3e._0_10_;
        auStack_68 = ZEXT1632(auStack_3e._0_16_);
        auStack_3e._16_6_ = 0;
        Stack_28 = 0;
        auStack_f8 = auStack_118;
        auStack_a8 = auStack_d0;
        auStack_88 = auStack_d0;
        func_0x000144ed0120(&uStack_120,0);
        func_0x000144ed0120(&uStack_120,1,_DAT_14ab56e38);
        FUN_140e0e410(&uStack_120,lVar1,param_4);
      }
      return;
    }
  }
  return;
}

