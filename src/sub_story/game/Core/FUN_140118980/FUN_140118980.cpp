// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140118980  size: 450 bytes
// Name:    FUN_140118980
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140118b50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140118980(byte *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte bVar7;
  byte bVar8;
  
  cVar2 = func_0x000145220e10();
  if (cVar2 == '\0') {
LAB_140118b34:
    uVar6 = 0;
  }
  else {
    cVar2 = FUN_140118b50();
    if (cVar2 != '\0') {
      func_0x000144ec8b40();
      lVar5 = func_0x0001453d54b0();
      cVar2 = func_0x0001450903f0(*(undefined4 *)(lVar5 + 0x14));
      if (cVar2 != '\0') goto LAB_140118b34;
    }
    lVar5 = (longlong)_DAT_14a210d14 * 0x11e50;
    bVar3 = func_0x000140118bb0(lVar5 + 0x14918a0e0);
    if (param_1 != (byte *)0x0) {
      bVar4 = *param_1 & 0xfe | bVar3;
      bVar3 = 0;
      *param_1 = bVar4;
    }
    if (0.0 < *(float *)(lVar5 + 0x14918a720)) {
      bVar4 = 2;
    }
    else {
      bVar4 = *(char *)(lVar5 + 0x14918a89c) * '\x02';
    }
    if (param_1 == (byte *)0x0) {
      bVar3 = bVar4 | bVar3;
    }
    else {
      *param_1 = *param_1 & 0xfd | bVar4;
    }
    cVar2 = func_0x000140118b80(lVar5 + 0x14918aa00);
    bVar4 = 0;
    if (cVar2 != '\0') {
      bVar4 = *(char *)(lVar5 + 0x149199ac0) << 2 ^ 4;
    }
    if (param_1 == (byte *)0x0) {
      iVar1 = *(int *)(lVar5 + 0x149199960);
      uVar6 = (ulonglong)*(byte *)(lVar5 + 0x14918ac60);
      cVar2 = func_0x000140005970(uVar6);
      bVar8 = *(byte *)(lVar5 + 0x1491890d4);
      bVar4 = cVar2 << 4 | bVar3 | (0 < iVar1) << 3 | bVar4;
      bVar7 = 0.0 < *(float *)(lVar5 + 0x14918ad24) & *(byte *)(lVar5 + 0x14918acf0);
    }
    else {
      bVar4 = *param_1 & 0xfb | bVar4;
      *param_1 = bVar4;
      bVar3 = (0 < *(int *)(lVar5 + 0x149199960)) << 3;
      *param_1 = bVar4 & 0xf7 | bVar3;
      cVar2 = func_0x000140005970(*(undefined1 *)(lVar5 + 0x14918ac60));
      bVar4 = bVar4 & 0xe7 | bVar3 | cVar2 << 4;
      *param_1 = bVar4;
      bVar7 = 0.0 < *(float *)(lVar5 + 0x14918ad24) & *(byte *)(lVar5 + 0x14918acf0);
      *param_1 = bVar4 & 0xdf | bVar7 << 5;
      bVar8 = *(byte *)(lVar5 + 0x1491890d4);
      bVar3 = bVar8 << 6 | bVar4 & 0x9f | bVar7 << 5;
      uVar6 = (ulonglong)CONCAT31((int3)((uint)param_3 >> 8),bVar3);
      *param_1 = bVar3;
    }
    uVar6 = CONCAT71((int7)(uVar6 >> 8),(bVar4 & 0x1e) != 0 | bVar4 | bVar7 | bVar8);
  }
  return uVar6 & 0xffffff01;
}

