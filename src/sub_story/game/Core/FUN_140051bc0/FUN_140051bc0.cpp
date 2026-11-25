// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140051bc0  size: 370 bytes
// Name:    FUN_140051bc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400b0760, FUN_144f39410, FUN_140a1fe20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140051bc0(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                  ushort *param_5)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uStack_60;
  uint auStack_5c [7];
  
  uVar1 = (undefined4)param_3[1];
  uVar3 = func_0x0001450e52e0(*(undefined8 *)(_DAT_149c3b740 + 0x520),uVar1);
  uVar7 = FUN_144f39410(param_2);
  uVar4 = func_0x0001435a2600(uVar1,*(undefined1 *)(param_2 + 0x90));
  uVar5 = (**(code **)(*param_3 + 0x28))(param_3);
  uVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  auStack_5c[0] = 0;
  uStack_60 = 0xffffffff;
  FUN_1400b0760(auStack_5c,&uStack_60,param_4,*(ushort *)(param_1 + 0x14) & 0x7fff,uVar3,
                *(byte *)(param_1 + 0x127) & 3,uVar7,uVar5,uVar2,0x3f800000);
  FUN_140a1fe20(auStack_5c,&uStack_60,param_4,*(ushort *)(param_1 + 0x14) & 0x7fff,uVar1,uVar3,uVar2
                ,uVar4);
  uVar6 = 0xff;
  if ((int)uStack_60 < 0xff) {
    uVar6 = uStack_60;
  }
  *param_5 = (ushort)(-1 < (int)uStack_60) << 0xd | *param_5 & 0x8000 |
             (ushort)(1 << (auStack_5c[0] & 0x1f)) & 0x1f | (ushort)((uVar6 & 0xff) << 5);
  return;
}

