// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a0a40  size: 71 bytes
// Name:    FUN_1401a0a40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401a0a90, FUN_1401a0bc0, FUN_1401a0b10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401a0a40(longlong param_1)

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
  
  FUN_1401a0a90();
  FUN_1401a0b10(param_1);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1401a0bc0();
    cVar5 = func_0x000141065fa0(*(undefined2 *)(*(longlong *)(param_1 + 0x20) + 8));
    if (cVar5 != '\0') {
      lVar2 = *(longlong *)(param_1 + 0x20);
      if (lVar2 != 0) {
        FUN_1401a1390(lVar2);
        plVar4 = plRam00000001490900a8;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = lVar2 - *plRam00000001490900a8;
        uVar8 = SUB164(auVar3 / ZEXT416(*(uint *)(plRam00000001490900a8 + 1)),0);
        puVar1 = (ulonglong *)(plRam00000001490900a8 + 4);
        uVar9 = (*(uint *)(plRam00000001490900a8[5] +
                          (SUB168(auVar3 / ZEXT416(*(uint *)(plRam00000001490900a8 + 1)),0) &
                          0xffffffff) * 4) & 0x7f000000 | uVar8) + 0x1000000;
        uVar8 = uVar8 & 0xffffff | 0x1000000;
        if ((uVar9 & 0x7f000000) != 0) {
          uVar8 = uVar9;
        }
        LOCK();
        *(int *)(plRam00000001490900a8 + 2) = (int)plRam00000001490900a8[2] + -1;
        UNLOCK();
        uVar6 = *puVar1;
        do {
          *(uint *)(plVar4[5] + (ulonglong)(uVar8 & 0xffffff) * 4) =
               (uint)uVar6 & 0xffffff | uVar8 & 0x7f000000;
          LOCK();
          uVar7 = plVar4[4];
          bVar10 = uVar6 == uVar7;
          if (bVar10) {
            plVar4[4] = (uVar6 & 0xffffffff00000000 | (ulonglong)(uVar8 & 0xffffff)) + 0x100000000;
            uVar7 = uVar6;
          }
          UNLOCK();
          uVar6 = uVar7;
        } while (!bVar10);
        if (plVar4[3] != 0) {
          FUN_140189080(plVar4,lVar2);
        }
        *(undefined8 *)(param_1 + 0x20) = 0;
      }
      return;
    }
  }
  return;
}

