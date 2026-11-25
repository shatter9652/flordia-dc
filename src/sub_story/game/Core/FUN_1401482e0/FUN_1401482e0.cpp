// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401482e0  size: 602 bytes
// Name:    FUN_1401482e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401482e0(longlong param_1)

{
  ulonglong *puVar1;
  short sVar2;
  short sVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  sVar2 = *(short *)(_DAT_147c36628 + 0xce);
  sVar3 = *(short *)(_DAT_147c36610 + 0xce);
  uVar13 = (ulonglong)(((uint)(int)sVar3 >> 6) << 3);
  uVar9 = 1L << ((ulonglong)(byte)~(byte)sVar2 & 0x3f);
  uVar5 = (ulonglong)(((uint)(int)sVar2 >> 6) << 3);
  uVar12 = 1L << ((ulonglong)(byte)~(byte)sVar3 & 0x3f);
  lVar6 = (ulonglong)(uint)(int)sVar3 * 0x220 + param_1;
  lVar8 = (ulonglong)(uint)(int)sVar2 * 0x220 + param_1;
  puVar1 = (ulonglong *)(uVar5 + lVar6);
  *puVar1 = *puVar1 | uVar9;
  puVar1 = (ulonglong *)(uVar13 + lVar8);
  *puVar1 = *puVar1 | uVar12;
  sVar2 = *(short *)(_DAT_147c36630 + 0xce);
  uVar7 = 1L << ((ulonglong)(byte)~(byte)sVar2 & 0x3f);
  uVar10 = (ulonglong)(((uint)(int)sVar2 >> 6) << 3);
  puVar1 = (ulonglong *)(uVar10 + lVar6);
  *puVar1 = *puVar1 | uVar7;
  lVar11 = (ulonglong)(uint)(int)sVar2 * 0x220 + param_1;
  puVar1 = (ulonglong *)(uVar13 + lVar11);
  *puVar1 = *puVar1 | uVar12;
  sVar2 = *(short *)(_DAT_147c36648 + 0xce);
  sVar3 = *(short *)(_DAT_147c36640 + 0xce);
  puVar1 = (ulonglong *)
           ((ulonglong)(uint)(int)sVar3 * 0x220 + param_1 + (ulonglong)((uint)(int)sVar2 >> 6) * 8);
  *puVar1 = *puVar1 | 1L << ((ulonglong)(byte)~(byte)sVar2 & 0x3f);
  puVar1 = (ulonglong *)
           ((ulonglong)(uint)(int)sVar2 * 0x220 + param_1 + (ulonglong)((uint)(int)sVar3 >> 6) * 8);
  *puVar1 = *puVar1 | 1L << ((ulonglong)(byte)~(byte)sVar3 & 0x3f);
  lVar4 = _DAT_1499aad40;
  lVar6 = *(longlong *)(_DAT_1499aad40 + 0x40);
  sVar2 = *(short *)(*(longlong *)(lVar6 + (ulonglong)*(uint *)(_DAT_1499aad40 + 0x604) * 8) + 0xce)
  ;
  uVar13 = 1L << ((ulonglong)(byte)~(byte)sVar2 & 0x3f);
  uVar12 = (ulonglong)(((uint)(int)sVar2 >> 6) << 3);
  puVar1 = (ulonglong *)(uVar12 + lVar11);
  *puVar1 = *puVar1 | uVar13;
  lVar11 = (ulonglong)(uint)(int)sVar2 * 0x220 + param_1;
  puVar1 = (ulonglong *)(uVar10 + lVar11);
  *puVar1 = *puVar1 | uVar7;
  puVar1 = (ulonglong *)(uVar12 + lVar8);
  *puVar1 = *puVar1 | uVar13;
  puVar1 = (ulonglong *)(uVar5 + lVar11);
  *puVar1 = *puVar1 | uVar9;
  sVar2 = *(short *)(*(longlong *)(lVar6 + (ulonglong)*(uint *)(lVar4 + 0x600) * 8) + 0xce);
  sVar3 = *(short *)(_DAT_147c36638 + 0xce);
  puVar1 = (ulonglong *)
           ((ulonglong)(uint)(int)sVar3 * 0x220 + param_1 + (ulonglong)((uint)(int)sVar2 >> 6) * 8);
  *puVar1 = *puVar1 | 1L << ((ulonglong)(byte)~(byte)sVar2 & 0x3f);
  puVar1 = (ulonglong *)
           ((ulonglong)(uint)(int)sVar2 * 0x220 + param_1 + (ulonglong)((uint)(int)sVar3 >> 6) * 8);
  *puVar1 = *puVar1 | 1L << ((ulonglong)(byte)~(byte)sVar3 & 0x3f);
  sVar2 = *(short *)(*(longlong *)(lVar6 + (ulonglong)_DAT_146c0a248 * 8) + 0xce);
  sVar3 = *(short *)(_DAT_147c36660 + 0xce);
  puVar1 = (ulonglong *)
           ((ulonglong)(uint)(int)sVar3 * 0x220 + param_1 + (ulonglong)((uint)(int)sVar2 >> 6) * 8);
  *puVar1 = *puVar1 | 1L << ((ulonglong)(byte)~(byte)sVar2 & 0x3f);
  puVar1 = (ulonglong *)
           ((ulonglong)(uint)(int)sVar2 * 0x220 + param_1 + (ulonglong)((uint)(int)sVar3 >> 6) * 8);
  *puVar1 = *puVar1 | 1L << ((ulonglong)(byte)~(byte)sVar3 & 0x3f);
  sVar2 = *(short *)(*(longlong *)
                      (*(longlong *)(_DAT_1493f3648 + 0x40) +
                      (ulonglong)*(uint *)(_DAT_1493f3648 + 0x488) * 8) + 0xce);
  sVar3 = *(short *)(_DAT_147c36668 + 0xce);
  puVar1 = (ulonglong *)
           ((ulonglong)(uint)(int)sVar3 * 0x220 + param_1 + (ulonglong)((uint)(int)sVar2 >> 6) * 8);
  *puVar1 = *puVar1 | 1L << ((ulonglong)(byte)~(byte)sVar2 & 0x3f);
  puVar1 = (ulonglong *)
           ((ulonglong)(uint)(int)sVar2 * 0x220 + param_1 + (ulonglong)((uint)(int)sVar3 >> 6) * 8);
  *puVar1 = *puVar1 | 1L << ((ulonglong)(byte)~(byte)sVar3 & 0x3f);
  return;
}

