// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401614a0  size: 498 bytes
// Name:    FUN_1401614a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f21090, FUN_1401616d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401614a0(longlong *param_1,uint param_2,longlong param_3)

{
  ulonglong *puVar1;
  uint *puVar2;
  short *psVar3;
  short sVar4;
  ushort uVar5;
  ushort *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  byte bVar10;
  longlong *plVar11;
  longlong lVar12;
  char cVar13;
  ushort uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  undefined8 *puVar19;
  uint uVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  bool bVar23;
  
  if ((ulonglong)*(uint *)((longlong)param_1 + 300) != 0) {
    puVar21 = (undefined8 *)param_1[0x26];
    puVar19 = puVar21 + (ulonglong)*(uint *)((longlong)param_1 + 300) * 2;
    do {
      cVar13 = (*(code *)puVar21[1])(*puVar21,param_2);
      if (cVar13 != '\0') {
        return;
      }
      puVar21 = puVar21 + 2;
    } while (puVar21 != puVar19);
  }
  (**(code **)(*param_1 + 0x28))(param_1,param_3);
  lVar18 = (ulonglong)(param_2 >> 0x11 & 0x1f) * 0x238;
  if (*(byte *)(lVar18 + 0x14abbf3fb) != 0xff) {
    *(undefined2 *)
     (*(longlong *)(lVar18 + 0x14abbf3d0) +
     (ulonglong)
     ((param_2 & 0x1ffff) * *(int *)(lVar18 + 0x14abbf3c4) + (uint)*(byte *)(lVar18 + 0x14abbf3fb))
     * 2) = 0xffff;
  }
  cVar13 = FUN_144f21090(param_3);
  if ((param_3 != 0) && (cVar13 == '\0')) {
    if ((*(short *)(param_3 + 0x12a) != 0) && (*(longlong *)(param_3 + 0x120) != 0)) {
      func_0x000144d9c130();
    }
    lVar12 = _DAT_14a9228b0;
    lVar18 = *(longlong *)(param_3 + 0xf0);
    if (lVar18 != 0) {
      uVar15 = lVar18 - *(longlong *)(_DAT_14a9228b0 + 0x10);
      auVar7._8_8_ = 0;
      auVar7._0_8_ = *(ulonglong *)(_DAT_14a9228b0 + 0x28);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar15;
      func_0x0001401616a0(lVar18,uVar15 % *(ulonglong *)(_DAT_14a9228b0 + 0x28));
      func_0x000144ea5b80(lVar12,lVar18);
      bVar10 = SUB161(auVar8 / auVar7,0) & 0x1f;
      puVar2 = (uint *)(*(longlong *)(lVar12 + 0x40) +
                       (ulonglong)(SUB164(auVar8 / auVar7,0) >> 5) * 4);
      *puVar2 = *puVar2 & (-2 << bVar10 | 0xfffffffeU >> 0x20 - bVar10);
    }
    func_0x0001401616b0(param_3 + 0xb0);
    FUN_1401616d0(param_3 + 0x30);
    plVar11 = _DAT_1499aae80;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = param_3 - *_DAT_1499aae80;
    uVar17 = SUB164(auVar9 / ZEXT416(*(uint *)(_DAT_1499aae80 + 1)),0);
    uVar20 = *(uint *)(_DAT_1499aae80[5] +
                      (SUB168(auVar9 / ZEXT416(*(uint *)(_DAT_1499aae80 + 1)),0) & 0xffffffff) * 4)
             & 0xfffe0000 | uVar17;
    uVar17 = uVar17 & 0x1ffff | 0x20000;
    if (uVar20 < 0xfffe0000) {
      uVar17 = uVar20 + 0x20000;
    }
    puVar1 = (ulonglong *)(_DAT_1499aae80 + 4);
    LOCK();
    *(int *)(_DAT_1499aae80 + 2) = (int)_DAT_1499aae80[2] + -1;
    UNLOCK();
    uVar15 = *puVar1;
    do {
      *(uint *)(plVar11[5] + (ulonglong)(uVar17 & 0x1ffff) * 4) =
           (uint)uVar15 & 0x1ffff | uVar17 & 0xfffe0000;
      LOCK();
      uVar22 = plVar11[4];
      bVar23 = uVar15 == uVar22;
      if (bVar23) {
        plVar11[4] = (uVar15 & 0xffffffff00000000 | (ulonglong)(uVar17 & 0x1ffff)) + 0x100000000;
        uVar22 = uVar15;
      }
      UNLOCK();
      uVar15 = uVar22;
    } while (!bVar23);
    if (plVar11[3] != 0) {
      uVar15 = (ulonglong)(param_3 - *plVar11) >> 0x10;
      uVar22 = ((ulonglong)*(uint *)(plVar11 + 1) - 1) + (param_3 - *plVar11) >> 0x10;
      if (uVar15 <= uVar22) {
        do {
          LOCK();
          psVar3 = (short *)(plVar11[3] + 2 + uVar15 * 2);
          sVar4 = *psVar3;
          *psVar3 = *psVar3 + -1;
          UNLOCK();
          if (sVar4 == 0x101) {
            FUN_140004b40(0x1471b63b8);
            puVar6 = (ushort *)plVar11[3];
            uVar14 = *puVar6;
            do {
              LOCK();
              uVar5 = *puVar6;
              bVar23 = uVar14 == uVar5;
              if (bVar23) {
                *puVar6 = uVar14 | 0x8000;
                uVar5 = uVar14;
              }
              uVar14 = uVar5;
              UNLOCK();
            } while (!bVar23);
            if (-1 < (short)uVar14) {
              uVar16 = (ulonglong)uRam00000001471b7420;
              uRam00000001471b7420 = uRam00000001471b7420 + 1;
              *(longlong **)(uVar16 * 8 + 0x1471b6420) = plVar11;
            }
            func_0x000144d9dab0(0x1471b63b8);
          }
          bVar23 = uVar15 != uVar22;
          uVar15 = uVar15 + 1;
        } while (bVar23);
      }
      return;
    }
  }
  return;
}

