// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14003d080  size: 144 bytes
// Name:    FUN_14003d080
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14003d080(undefined4 *param_1,longlong param_2)

{
  ushort uVar1;
  longlong lVar2;
  int *piVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong unaff_GS_OFFSET;
  undefined1 auVar7 [16];
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
  undefined8 uStack_48;
  undefined2 uStack_40;
  undefined6 uStack_3e;
  undefined1 auStack_38 [16];
  unkbyte10 Stack_28;
  
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    uStack_40 = 0xd10e;
    uStack_3e = 0x14003;
    func_0x0001455db994();
  }
  if (*(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1448) == 0) {
    *param_1 = 0;
  }
  uStack_40 = 0xd0cf;
  uStack_3e = 0x14003;
  lVar2 = func_0x000144fa4e80(*(undefined4 *)(param_2 + 0x9c));
  if (lVar2 != 0) {
    *param_1 = *(undefined4 *)(lVar2 + 0x160);
    return;
  }
  uVar1 = *(ushort *)(_DAT_14a02e2c8 + 0xd0);
  if (uVar1 != 0) {
    uVar4 = (ulonglong)uVar1;
    piVar3 = *(int **)(_DAT_14a02e2c8 + 200);
    do {
      uVar6 = uVar4 >> 1;
      uVar5 = ~uVar6 + uVar4;
      uVar4 = uVar6;
      if ((uint)(piVar3 + uVar6 * 4 + 4)[-4] < 0x3851ef1b) {
        piVar3 = piVar3 + uVar6 * 4 + 4;
        uVar4 = uVar5;
      }
    } while (0 < (longlong)uVar4);
    if ((piVar3 != *(int **)(_DAT_14a02e2c8 + 200) + (ulonglong)uVar1 * 4) &&
       (*piVar3 == 0x3851ef1b)) {
      lVar2 = *(longlong *)(piVar3 + 2);
      *param_1 = 0;
      if (lVar2 != 0) {
        auVar7._0_12_ = ZEXT812(0);
        auVar7._12_4_ = 0;
        uStack_120 = 0;
        uStack_11e = 1;
        auStack_118 = ZEXT1632(auVar7);
        uStack_d8 = 0;
        auStack_d0 = ZEXT1632(auVar7);
        uStack_b0 = 0;
        uStack_48 = 0;
        uStack_40 = 0;
        auStack_68 = ZEXT1632(auVar7);
        uStack_3e = 0;
        auStack_38 = ZEXT616(auVar7._6_6_);
        Stack_28 = 0;
        auStack_f8 = auStack_118;
        auStack_a8 = auStack_d0;
        auStack_88 = auStack_d0;
        func_0x000144ed0120(&uStack_120,0,param_2);
        func_0x000144ed0120(&uStack_120,1,_DAT_14ab56e38);
        FUN_140e0e410(&uStack_120,lVar2,param_1);
      }
      return;
    }
  }
  return;
}

