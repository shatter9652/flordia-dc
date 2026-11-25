// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14007aa00  size: 323 bytes
// Name:    FUN_14007aa00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144da95c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14007aa00(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  short sVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ushort uVar13;
  longlong *plVar14;
  longlong lVar15;
  
  *(byte *)(param_1 + 0x5fc) = *(byte *)(param_1 + 0x5fc) & 0xfe;
  if (((*(short *)(param_1 + 0x5f8) == -1) || (sVar3 = *(short *)(param_1 + 0x5fa), sVar3 == -1)) ||
     (plVar14 = (longlong *)FUN_144da95c0(), plVar14 == (longlong *)0x0)) {
    *(undefined4 *)(param_1 + 0x5b0) = 3;
  }
  else {
    (**(code **)(*plVar14 + 0x20))(plVar14,(int)sVar3);
    *(uint *)(param_1 + 0x5f4) =
         (uint)*(ushort *)((longlong)plVar14 + (longlong)*(short *)(param_1 + 0x5fa) * 2 + 8);
    uVar13 = func_0x000144dcbb80(*(undefined8 *)(_DAT_14a924088 + 0x28));
    lVar5 = *(longlong *)((ulonglong)uVar13 * 8 + 0x149ce15a0);
    if ((lVar5 == 0) || ((*(byte *)(lVar5 + 0x5b9) & 0x20) == 0)) {
      uVar4 = *(uint *)(param_1 + 0x234);
      if ((ulonglong)uVar4 != 0) {
        lVar5 = *(longlong *)(param_1 + 0x240);
        lVar15 = 0;
        do {
          puVar1 = (undefined8 *)(lVar5 + lVar15);
          uVar6 = *puVar1;
          uVar7 = puVar1[1];
          uVar8 = puVar1[2];
          uVar9 = puVar1[3];
          puVar1 = (undefined8 *)(lVar5 + 0x20 + lVar15);
          uVar10 = puVar1[1];
          uVar11 = puVar1[2];
          uVar12 = puVar1[3];
          puVar2 = (undefined8 *)(lVar5 + 0x60 + lVar15);
          *puVar2 = *puVar1;
          puVar2[1] = uVar10;
          puVar2[2] = uVar11;
          puVar2[3] = uVar12;
          puVar1 = (undefined8 *)(lVar5 + 0x40 + lVar15);
          *puVar1 = uVar6;
          puVar1[1] = uVar7;
          puVar1[2] = uVar8;
          puVar1[3] = uVar9;
          lVar15 = lVar15 + 0x90;
        } while ((ulonglong)uVar4 * 0x90 != lVar15);
      }
    }
    else {
      uVar4 = *(uint *)(param_1 + 0x234);
      if ((ulonglong)uVar4 != 0) {
        lVar5 = *(longlong *)(param_1 + 0x240);
        lVar15 = 0;
        do {
          *(undefined1 (*) [32])(lVar5 + 0x60 + lVar15) = ZEXT1232(ZEXT812(0));
          *(undefined1 (*) [32])(lVar5 + 0x40 + lVar15) = ZEXT1232(ZEXT812(0));
          lVar15 = lVar15 + 0x90;
        } while ((ulonglong)uVar4 * 0x90 != lVar15);
      }
    }
    *(undefined4 *)(param_1 + 0x5b0) = 1;
    *(undefined4 *)(param_1 + 0x5ec) = 0;
  }
  return;
}

