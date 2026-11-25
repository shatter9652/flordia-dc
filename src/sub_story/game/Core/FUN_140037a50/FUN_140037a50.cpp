// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140037a50  size: 154 bytes
// Name:    FUN_140037a50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140037a50(uint *param_1,char param_2,void *param_3)

{
  byte bVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong unaff_GS_OFFSET;
  bool bVar9;
  
  bVar1 = *(byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1294);
  uVar7 = *param_1;
  uVar8 = (uint)bVar1 * 0x10000000 + 0x10000000;
  if (param_2 == '\0') {
    do {
      if ((uVar7 >> 0x19 & 1) != 0) {
        return;
      }
      LOCK();
      uVar6 = *param_1;
      if (uVar7 == uVar6) {
        *param_1 = uVar7 | uVar8;
        uVar6 = uVar7;
      }
      UNLOCK();
      bVar9 = uVar7 != uVar6;
      uVar7 = uVar6;
    } while (bVar9);
  }
  else {
    uVar5 = (int)param_3 << 0x19 | 0xff;
    param_3 = (void *)(ulonglong)uVar5;
    uVar6 = uVar7;
    do {
      if ((uVar7 >> 8 & 0xff) < (uVar6 & uVar5)) {
        return;
      }
      LOCK();
      uVar3 = *param_1;
      if (uVar6 == uVar3) {
        *param_1 = uVar6 | uVar8;
        uVar3 = uVar6;
      }
      UNLOCK();
      bVar9 = uVar6 != uVar3;
      uVar6 = uVar3;
    } while (bVar9);
  }
  pvVar2 = *(void **)((ulonglong)bVar1 * 8 + 0x1475defc0);
  iVar4 = 1;
  do {
    WaitForSingleObject(pvVar2,(void *)0xffffffff,param_3);
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}

