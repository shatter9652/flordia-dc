// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140151b10  size: 69 bytes
// Name:    FUN_140151b10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14087aa80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140151b10(longlong param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  longlong *plVar4;
  char cVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  bool bVar11;
  
  uVar9 = *(ulonglong *)(param_1 + 8);
  uVar8 = uVar9 & 0xfffffffffffffff0;
  if (-1 < *(int *)(uVar8 + 0xb4)) {
    func_0x000145290d00(uVar8,CONCAT71((int7)(uVar8 >> 8),1),1);
    FUN_14087aa80(*(undefined8 *)(param_1 + 8));
    uVar9 = *(ulonglong *)(param_1 + 8);
  }
  uVar9 = uVar9 & 0xfffffffffffffff0;
  if (*(short *)(uVar9 + 0xc2) == 0xb) {
    cVar5 = FUN_145449c80(uRam00000001499aad30,*(undefined4 *)(uVar9 + 0x9c));
    if (cVar5 == '\0') {
      return;
    }
  }
  FUN_14501d330(uVar9,3);
  FUN_14501d5c0();
  lVar2 = *(longlong *)(uVar9 + 0xf0);
  if (lVar2 != 0) {
    func_0x000140151d90(*(undefined8 *)(lVar2 + 0x10));
    plVar4 = plRam000000014788fb50;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = lVar2 - *plRam000000014788fb50;
    uVar7 = SUB164(auVar3 / ZEXT416(*(uint *)(plRam000000014788fb50 + 1)),0);
    uVar10 = *(uint *)(plRam000000014788fb50[5] +
                      (SUB168(auVar3 / ZEXT416(*(uint *)(plRam000000014788fb50 + 1)),0) & 0xffffffff
                      ) * 4) & 0xfffe0000 | uVar7;
    uVar7 = uVar7 & 0x1ffff | 0x20000;
    if (uVar10 < 0xfffe0000) {
      uVar7 = uVar10 + 0x20000;
    }
    puVar1 = (ulonglong *)(plRam000000014788fb50 + 4);
    LOCK();
    *(int *)(plRam000000014788fb50 + 2) = (int)plRam000000014788fb50[2] + -1;
    UNLOCK();
    uVar8 = *puVar1;
    do {
      *(uint *)(plVar4[5] + (ulonglong)(uVar7 & 0x1ffff) * 4) =
           (uint)uVar8 & 0x1ffff | uVar7 & 0xfffe0000;
      LOCK();
      uVar6 = plVar4[4];
      bVar11 = uVar8 == uVar6;
      if (bVar11) {
        plVar4[4] = (uVar8 & 0xffffffff00000000 | (ulonglong)(uVar7 & 0x1ffff)) + 0x100000000;
        uVar6 = uVar8;
      }
      UNLOCK();
      uVar8 = uVar6;
    } while (!bVar11);
    if (plVar4[3] != 0) {
      FUN_140189080(plVar4,lVar2);
    }
    *(undefined8 *)(uVar9 + 0xf0) = 0;
  }
  return;
}

