// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006ea60  size: 142 bytes
// Name:    FUN_14006ea60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141700820
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8
FUN_14006ea60(longlong *param_1,undefined4 param_2,float *param_3,float param_4,float param_5)

{
  char cVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x98))();
  if ((puVar2 != (undefined8 *)0x0) &&
     (cVar1 = func_0x00014006feb0(*puVar2,param_2,&uStack_4c), cVar1 != '\0')) {
    fVar3 = param_5 * *(float *)(param_1 + 0xc) - param_4 * *(float *)(param_1 + 10);
    fVar4 = param_5 * *(float *)((longlong)param_1 + 100) -
            param_4 * *(float *)((longlong)param_1 + 0x54);
    fVar5 = param_5 * *(float *)(param_1 + 0xd) - param_4 * *(float *)(param_1 + 0xb);
    fVar6 = param_5 * *(float *)((longlong)param_1 + 0x6c) -
            param_4 * *(float *)((longlong)param_1 + 0x5c);
    FUN_141700820(puVar2,&fStack_48,uStack_4c);
    *param_3 = fVar3 + fStack_48;
    param_3[1] = fVar4 + fStack_44;
    param_3[2] = fVar5 + fStack_40;
    param_3[3] = fVar6 + fStack_3c;
    return 1;
  }
  return 0;
}

