// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140151b60  size: 73 bytes
// Name:    FUN_140151b60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145449c80, FUN_14501d330
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140151b60(ulonglong param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  longlong *plVar4;
  char cVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  param_1 = param_1 & 0xfffffffffffffff0;
  if ((*(short *)(param_1 + 0xc2) == 0xb) &&
     (cVar5 = FUN_145449c80(_DAT_1499aad30,*(undefined4 *)(param_1 + 0x9c)), cVar5 == '\0')) {
    return;
  }
  FUN_14501d330(param_1,3);
  FUN_14501d5c0();
  lVar2 = *(longlong *)(param_1 + 0xf0);
  if (lVar2 != 0) {
    func_0x000140151d90(*(undefined8 *)(lVar2 + 0x10));
    plVar4 = plRam000000014788fb50;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = lVar2 - *plRam000000014788fb50;
    uVar8 = SUB164(auVar3 / ZEXT416(*(uint *)(plRam000000014788fb50 + 1)),0);
    uVar9 = *(uint *)(plRam000000014788fb50[5] +
                     (SUB168(auVar3 / ZEXT416(*(uint *)(plRam000000014788fb50 + 1)),0) & 0xffffffff)
                     * 4) & 0xfffe0000 | uVar8;
    uVar8 = uVar8 & 0x1ffff | 0x20000;
    if (uVar9 < 0xfffe0000) {
      uVar8 = uVar9 + 0x20000;
    }
    puVar1 = (ulonglong *)(plRam000000014788fb50 + 4);
    LOCK();
    *(int *)(plRam000000014788fb50 + 2) = (int)plRam000000014788fb50[2] + -1;
    UNLOCK();
    uVar6 = *puVar1;
    do {
      *(uint *)(plVar4[5] + (ulonglong)(uVar8 & 0x1ffff) * 4) =
           (uint)uVar6 & 0x1ffff | uVar8 & 0xfffe0000;
      LOCK();
      uVar7 = plVar4[4];
      bVar10 = uVar6 == uVar7;
      if (bVar10) {
        plVar4[4] = (uVar6 & 0xffffffff00000000 | (ulonglong)(uVar8 & 0x1ffff)) + 0x100000000;
        uVar7 = uVar6;
      }
      UNLOCK();
      uVar6 = uVar7;
    } while (!bVar10);
    if (plVar4[3] != 0) {
      FUN_140189080(plVar4,lVar2);
    }
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  return;
}

