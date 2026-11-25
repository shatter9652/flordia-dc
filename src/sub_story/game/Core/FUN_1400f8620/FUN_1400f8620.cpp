// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f8620  size: 405 bytes
// Name:    FUN_1400f8620
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14004c030, FUN_1400548c0, FUN_140c69130, FUN_140575860
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400f8620(void)

{
  uint *puVar1;
  code *pcVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  bool bVar10;
  longlong alStack_a0 [2];
  undefined1 auStack_8c [4];
  longlong *plStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  longlong alStack_68 [3];
  undefined4 uStack_50;
  undefined8 uStack_48;
  ulonglong uVar5;
  
  if (_DAT_1498e3ea8 != 0) {
    lVar9 = 0;
    iVar7 = 0;
    alStack_a0[0] = 0;
    do {
      plVar3 = _DAT_1498f14e8;
      alStack_a0[1] = 0x1498e3e98;
      if (lVar9 == 0) {
        uVar5 = _DAT_1498f14e8[4];
        do {
          iVar4 = (int)uVar5;
          if (iVar4 == 0x1fffe) goto LAB_1400f870c;
          uVar8 = uVar5 & 0xffffffff;
          LOCK();
          uVar6 = plVar3[4];
          bVar10 = uVar5 == uVar6;
          if (bVar10) {
            plVar3[4] = (ulonglong)(*(uint *)(plVar3[5] + uVar8 * 4) & 0x1ffff) |
                        uVar5 & 0xffffffff00000000;
            uVar6 = uVar5;
          }
          UNLOCK();
          uVar5 = uVar6;
        } while (!bVar10);
        LOCK();
        *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
        UNLOCK();
        puVar1 = (uint *)(plVar3[5] + uVar8 * 4);
        *puVar1 = *puVar1 | *(uint *)(plVar3 + 6);
        if (*plVar3 == 0) {
LAB_1400f870c:
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar9 = *plVar3 + (ulonglong)(uint)((int)plVar3[1] * iVar4);
        if (plVar3[3] != 0) {
          FUN_14004c030(plVar3,lVar9);
        }
        func_0x00014256f930(lVar9,2,1);
        alStack_a0[0] = lVar9;
      }
      alStack_68[1] = 0xc;
      uStack_50 = 4;
      uStack_48 = 0;
      alStack_68[2] = 0x500000010;
      plStack_88 = alStack_a0 + 1;
      puStack_80 = &UNK_140575850;
      puStack_78 = &UNK_1401167b0;
      puStack_70 = &SUB_140004380;
      alStack_68[0] = lVar9;
      FUN_1400548c0(_DAT_14a210cb0,auStack_8c,&plStack_88,alStack_68);
      iVar7 = iVar7 + 1;
    } while (iVar7 != 7);
    FUN_140575860(0x1498e3e98);
    FUN_140c69130(alStack_a0);
    FUN_140c69130(alStack_a0);
  }
  return;
}

