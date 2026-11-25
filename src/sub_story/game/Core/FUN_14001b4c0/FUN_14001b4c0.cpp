// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14001b4c0  size: 270 bytes
// Name:    FUN_14001b4c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144dfad60, FUN_144e46a00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14001b4c0(longlong param_1,float *param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong *plVar3;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [32];
  
  cVar2 = func_0x000144df3e80();
  if (cVar2 != '\0') {
    if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)param_2 = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_2 + 2) = uVar1;
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x20))
                (*(longlong **)(param_1 + 0x20),&fStack_68);
      func_0x000144e469d0(auStack_48);
      uStack_78 = *(undefined8 *)(param_1 + 0x40);
      uStack_70 = *(undefined8 *)(param_1 + 0x48);
      FUN_144e46a00(auStack_48);
      plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x20) + 0xd0))();
      (**(code **)(*plVar3 + 0x128))(plVar3);
      (**(code **)(*plVar3 + 0x118))(plVar3,auStack_48,&fStack_88);
      FUN_144dfad60(plVar3[4],auStack_58);
      fStack_88 = (float)auStack_58._0_8_;
      fStack_84 = SUB84(auStack_58._0_8_,4);
      fStack_80 = (float)auStack_58._8_8_;
      fStack_7c = SUB84(auStack_58._8_8_,4);
      *param_2 = fStack_88 + fStack_68;
      param_2[1] = fStack_84 + fStack_64;
      param_2[2] = fStack_80 + fStack_60;
      param_2[3] = fStack_7c + fStack_5c;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014001b525. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x20))(*(longlong **)(param_1 + 0x20),param_2);
  return;
}

