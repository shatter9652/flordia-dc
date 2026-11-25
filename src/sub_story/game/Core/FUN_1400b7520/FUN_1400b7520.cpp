// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b7520  size: 216 bytes
// Name:    FUN_1400b7520
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14095f760
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1400b7520(longlong *param_1,ushort param_2)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  bool bVar6;
  
  if (((*(byte *)((longlong)param_1 + 0x84) & 0x27) == 0x22) &&
     (lVar3 = (**(code **)(*param_1 + 0xa8))(), lVar3 != 0)) {
    sVar2 = (short)param_1[0x10];
    do {
      while (sVar2 == -0x10) {
        if (param_1[1] == 0) {
          puVar4 = (undefined8 *)func_0x000144f97130(0xd0);
          FUN_14095f760(puVar4);
          func_0x00014542c750(puVar4,lVar3);
          LOCK();
          *(short *)((longlong)puVar4 + 0x3a) = *(short *)((longlong)puVar4 + 0x3a) + 1;
          UNLOCK();
          LOCK();
          bVar6 = param_1[1] == 0;
          if (bVar6) {
            param_1[1] = (longlong)puVar4;
          }
          UNLOCK();
          if (bVar6) {
            (**(code **)(*param_1 + 0x90))(param_1,puVar4);
            *(ushort *)(param_1 + 0x10) = param_2 & 0xff;
            goto LAB_1400b75eb;
          }
          func_0x0001451f3820(puVar4,0);
          (**(code **)*puVar4)(puVar4,1);
        }
        sVar2 = (short)param_1[0x10];
      }
      LOCK();
      sVar1 = (short)param_1[0x10];
      bVar6 = sVar2 == sVar1;
      if (bVar6) {
        *(ushort *)(param_1 + 0x10) = sVar2 + (param_2 & 0xff);
        sVar1 = sVar2;
      }
      sVar2 = sVar1;
      UNLOCK();
    } while (!bVar6);
LAB_1400b75eb:
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

