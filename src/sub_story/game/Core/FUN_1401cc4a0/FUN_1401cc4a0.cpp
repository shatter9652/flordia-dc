// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401cc4a0  size: 283 bytes
// Name:    FUN_1401cc4a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145086550, FUN_144dd3330, FUN_144dd3550
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1401cc4a0(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (param_2 != 0 && *param_1 != 0) {
    FUN_144dd3330(*(undefined4 *)(*param_1 + 0x44),&uStack_2c);
    lVar2 = FUN_145086550(uStack_2c);
    if (lVar2 == 0) {
      lVar2 = *param_1;
      if (*(short *)(lVar2 + 0x48) != 0) {
        uVar5 = 0;
        while( true ) {
          FUN_144dd3330(*(undefined4 *)(lVar2 + 0x4c + uVar5 * 4),&uStack_34);
          uVar1 = uStack_34;
          uVar3 = func_0x000144ddb100(2);
          lVar2 = FUN_144dd3550(uVar3,uVar1,0xf);
          if ((lVar2 != 0) && (*(int *)(lVar2 + 8) == *(int *)(param_2 + 8))) break;
          lVar2 = *param_1;
          uVar5 = uVar5 + 1;
          if (*(ushort *)(lVar2 + 0x48) <= uVar5) {
            return 0;
          }
        }
        return 1;
      }
    }
    else if (*(int *)(lVar2 + 8) != 0) {
      uVar5 = 0;
      while( true ) {
        FUN_144dd3330(*(undefined4 *)(lVar2 + 0xc + uVar5 * 4),&uStack_30);
        uVar1 = uStack_30;
        uVar3 = func_0x000144ddb100(2);
        lVar4 = FUN_144dd3550(uVar3,uVar1,0xf);
        if ((lVar4 != 0) && (*(int *)(lVar4 + 8) == *(int *)(param_2 + 8))) break;
        uVar5 = uVar5 + 1;
        if (*(uint *)(lVar2 + 8) <= uVar5) {
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}

