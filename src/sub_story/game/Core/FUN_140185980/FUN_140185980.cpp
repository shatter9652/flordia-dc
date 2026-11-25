// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140185980  size: 541 bytes
// Name:    FUN_140185980
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140283d50, FUN_14503e1d0, FUN_1401830d0, FUN_14456d130, FUN_140185e60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140185980(longlong param_1,longlong *param_2,longlong param_3,undefined8 *param_4,
                  undefined4 param_5,undefined4 param_6)

{
  longlong lVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [64];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [56];
  
  lVar1 = param_1 + -0x10;
  lVar4 = FUN_1401830d0(lVar1,param_5,param_6);
  if (lVar4 == 0) {
    func_0x00014538eaf0(&uStack_b8);
    *param_4 = uStack_b8;
    param_4[1] = uStack_b0;
    param_4[2] = uStack_a8;
    param_4[3] = uStack_a0;
  }
  else {
    *(undefined4 *)param_4 = *(undefined4 *)(lVar4 + 0x20);
    *(undefined4 *)((longlong)param_4 + 4) = *(undefined4 *)(lVar4 + 0x24);
    *(undefined4 *)(param_4 + 1) = *(undefined4 *)(lVar4 + 0x28);
    *(undefined4 *)((longlong)param_4 + 0xc) = *(undefined4 *)(lVar4 + 0x2c);
    *(undefined4 *)(param_4 + 2) = *(undefined4 *)(lVar4 + 0x30);
    *(undefined4 *)((longlong)param_4 + 0x14) = *(undefined4 *)(lVar4 + 0x34);
    *(undefined4 *)(param_4 + 3) = *(undefined4 *)(lVar4 + 0x38);
    *(undefined4 *)((longlong)param_4 + 0x1c) = *(undefined4 *)(lVar4 + 0x3c);
    if (param_3 != 0) {
      if (*(longlong *)(param_1 + 0x50) != 0) {
        fVar2 = *(float *)(param_3 + 0x80);
        auVar6 = ZEXT464((uint)fVar2);
        if ((fVar2 != 0.0) || (NAN(fVar2))) {
          FUN_140185e60(lVar1,auStack_98,param_5,param_6);
          func_0x00014538eaf0(&uStack_b8);
          FUN_140283d50(&uStack_b8,auStack_98);
          func_0x00014538eaf0(auStack_78);
          FUN_140283d50(auStack_78,lVar4 + 0x20);
          func_0x000140185bc0(param_4,auStack_78,&uStack_b8,auVar6._0_8_);
          uStack_b8 = *param_4;
          uStack_b0 = param_4[1];
          uStack_a8 = param_4[2];
          uStack_a0 = param_4[3];
          FUN_140283d50(param_4,&uStack_b8);
        }
      }
      lVar3 = *(longlong *)(param_3 + 0x58);
      if (lVar3 != 0) {
        func_0x00014538eaf0(&uStack_b8);
        FUN_14456d130(lVar1,lVar3,param_5,0,&uStack_b8);
        func_0x00014538eaf0(auStack_98);
        FUN_140283d50(auStack_98,&uStack_b8);
        func_0x00014511e990(param_4,auStack_98);
      }
    }
    if (*(longlong *)(lVar4 + 0x10) != 0) {
      uVar5 = (**(code **)(*param_2 + 0x128))(param_2);
      (**(code **)(**(longlong **)(lVar4 + 0x10) + 0xb0))
                (*(longlong **)(lVar4 + 0x10),&uStack_b8,uVar5);
      FUN_14503e1d0(param_4,&uStack_b8);
    }
  }
  return;
}

