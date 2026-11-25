// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f9c40  size: 91 bytes
// Name:    FUN_1400f9c40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140f3ae40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400f9c40(longlong param_1)

{
  ulonglong *puVar1;
  short *psVar2;
  ushort uVar3;
  ushort *puVar4;
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  longlong *plVar7;
  short sVar8;
  ushort uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  bool bVar16;
  
  if (*(short *)(param_1 + 0x28) == -1) {
    lVar10 = FUN_140f3ae40(0xffffffff);
    sVar8 = func_0x000140f3ae10(lVar10);
    plVar7 = plRam00000001484055b0;
    if (sVar8 == -1) {
      if (lVar10 != 0) {
        if ((lVar10 != 0) && (*(int *)(lVar10 + 0x44) == -1)) {
          auVar5._4_8_ = 0;
          auVar5._0_4_ = *(uint *)(plRam00000001484055b0 + 1);
          auVar6._8_4_ = 0;
          auVar6._0_8_ = lVar10 - *plRam00000001484055b0;
          uVar12 = SUB124(auVar6 / auVar5,0);
          uVar14 = *(uint *)(plRam00000001484055b0[5] + (SUB128(auVar6 / auVar5,0) & 0xffffffff) * 4
                            ) & 0xfffe0000 | uVar12;
          uVar12 = uVar12 & 0x1ffff | 0x20000;
          if (uVar14 < 0xfffe0000) {
            uVar12 = uVar14 + 0x20000;
          }
          puVar1 = (ulonglong *)(plRam00000001484055b0 + 4);
          LOCK();
          *(int *)(plRam00000001484055b0 + 2) = (int)plRam00000001484055b0[2] + -1;
          UNLOCK();
          uVar13 = *puVar1;
          do {
            *(uint *)(plVar7[5] + (ulonglong)(uVar12 & 0x1ffff) * 4) =
                 (uint)uVar13 & 0x1ffff | uVar12 & 0xfffe0000;
            LOCK();
            uVar15 = plVar7[4];
            bVar16 = uVar13 == uVar15;
            if (bVar16) {
              plVar7[4] = (uVar13 & 0xffffffff00000000 | (ulonglong)(uVar12 & 0x1ffff)) +
                          0x100000000;
              uVar15 = uVar13;
            }
            UNLOCK();
            uVar13 = uVar15;
          } while (!bVar16);
          if (plVar7[3] != 0) {
            uVar13 = (ulonglong)(lVar10 - *plVar7) >> 0x10;
            uVar15 = ((ulonglong)*(uint *)(plVar7 + 1) - 1) + (lVar10 - *plVar7) >> 0x10;
            if (uVar13 <= uVar15) {
              do {
                LOCK();
                psVar2 = (short *)(plVar7[3] + 2 + uVar13 * 2);
                sVar8 = *psVar2;
                *psVar2 = *psVar2 + -1;
                UNLOCK();
                if (sVar8 == 0x101) {
                  FUN_140004b40(0x1471b63b8);
                  puVar4 = (ushort *)plVar7[3];
                  uVar9 = *puVar4;
                  do {
                    LOCK();
                    uVar3 = *puVar4;
                    bVar16 = uVar9 == uVar3;
                    if (bVar16) {
                      *puVar4 = uVar9 | 0x8000;
                      uVar3 = uVar9;
                    }
                    uVar9 = uVar3;
                    UNLOCK();
                  } while (!bVar16);
                  if (-1 < (short)uVar9) {
                    uVar11 = (ulonglong)uRam00000001471b7420;
                    uRam00000001471b7420 = uRam00000001471b7420 + 1;
                    *(longlong **)(uVar11 * 8 + 0x1471b6420) = plVar7;
                  }
                  func_0x000144d9dab0(0x1471b63b8);
                }
                bVar16 = uVar13 != uVar15;
                uVar13 = uVar13 + 1;
              } while (bVar16);
            }
            return;
          }
        }
        return;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(_DAT_14926abd0 + 0x38);
      *(short *)(param_1 + 0x28) = sVar8;
    }
  }
  return;
}

