// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140145c10  size: 129 bytes
// Name:    FUN_140145c10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140145c10(longlong param_1,ushort param_2,longlong param_3)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  short sVar4;
  short sVar5;
  longlong lVar6;
  byte bVar7;
  longlong lVar8;
  
  if (param_2 != 0) {
    lVar6 = *(longlong *)(param_3 + 0x1aa0);
    lVar8 = 0;
    do {
      plVar1 = (longlong *)(param_1 + lVar8);
      plVar3 = (longlong *)(param_1 + 8 + lVar8);
      lVar8 = lVar8 + 0x10;
      sVar4 = *(short *)(*plVar1 + 0xce);
      sVar5 = *(short *)(*plVar3 + 0xce);
      bVar7 = ~(byte)sVar5 & 0x3f;
      puVar2 = (ulonglong *)
               ((ulonglong)(uint)(int)sVar4 * 0x220 + lVar6 + (ulonglong)((uint)(int)sVar5 >> 6) * 8
               );
      *puVar2 = *puVar2 & (-2L << bVar7 | 0xfffffffffffffffeU >> 0x40 - bVar7);
      bVar7 = ~(byte)sVar4 & 0x3f;
      puVar2 = (ulonglong *)
               ((ulonglong)(uint)(int)sVar5 * 0x220 + lVar6 + (ulonglong)((uint)(int)sVar4 >> 6) * 8
               );
      *puVar2 = *puVar2 & (-2L << bVar7 | 0xfffffffffffffffeU >> 0x40 - bVar7);
    } while ((ulonglong)param_2 * 0x10 != lVar8);
  }
  return;
}

