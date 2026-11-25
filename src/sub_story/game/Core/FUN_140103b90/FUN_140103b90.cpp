// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140103b90  size: 172 bytes
// Name:    FUN_140103b90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140103c40, FUN_1450228c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140103b90(uint param_1,longlong param_2,undefined8 param_3,char param_4,byte param_5,
                  uint param_6)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auVar5 [64];
  
  if (param_1 != 0) {
    auVar5 = ZEXT464(param_6);
    lVar4 = 0;
    do {
      plVar2 = *(longlong **)(param_2 + lVar4);
      lVar3 = *plVar2;
      if ((lVar3 != 0) && (*(char *)(lVar3 + 0x155) != '\x03')) {
        bVar1 = *(byte *)((longlong)plVar2 + 0x54);
        if (((bVar1 & 8) == 0) && ((byte)(bVar1 >> 2 & (param_5 ^ 1)) == 0)) {
          if (((bVar1 & 4) != 0) || (param_4 != '\0')) {
            FUN_1450228c0(lVar3,auVar5._0_8_);
          }
          FUN_140103c40(plVar2,param_3);
        }
      }
      lVar4 = lVar4 + 8;
    } while ((ulonglong)param_1 << 3 != lVar4);
  }
  return;
}

