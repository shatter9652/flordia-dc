// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14004c030  size: 195 bytes
// Name:    FUN_14004c030
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140b18ce0, FUN_142216940
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14004c030(longlong *param_1,longlong param_2)

{
  short *psVar1;
  short sVar2;
  ushort uVar3;
  code *pcVar4;
  char cVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  
  uVar6 = (ulonglong)(param_2 - *param_1) >> 0x10;
  uVar8 = ((ulonglong)*(uint *)(param_1 + 1) - 1) + (param_2 - *param_1) >> 0x10;
  if (uVar6 <= uVar8) {
    do {
      uVar7 = uVar6 + 1;
      LOCK();
      psVar1 = (short *)(param_1[3] + 2 + uVar6 * 2);
      sVar2 = *psVar1;
      *psVar1 = *psVar1 + 1;
      UNLOCK();
      if (sVar2 == 0) {
        cVar5 = FUN_142216940(*param_1 + uVar6 * 0x10000);
        if (cVar5 == '\0') {
          FUN_140b18ce0();
          cVar5 = FUN_142216940(uVar6 * 0x10000 + *param_1);
          if (cVar5 == '\0') {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        LOCK();
        *(short *)param_1[3] = *(short *)param_1[3] + 1;
        UNLOCK();
        LOCK();
        psVar1 = (short *)(param_1[3] + uVar7 * 2);
        *psVar1 = *psVar1 + 0x100;
        UNLOCK();
      }
      else if ((ushort)(sVar2 + 1U) < 0x100) {
        uVar3 = *(ushort *)(param_1[3] + uVar7 * 2);
        while (uVar3 < 0x100) {
          uVar3 = *(ushort *)(param_1[3] + uVar7 * 2);
        }
      }
      bVar9 = uVar6 != uVar8;
      uVar6 = uVar7;
    } while (bVar9);
  }
  return;
}

