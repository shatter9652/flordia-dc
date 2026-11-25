// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400019e0  size: 527 bytes
// Name:    FUN_1400019e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1428409b0, FUN_140001bf0, FUN_1450bc1b0, FUN_142840a00, FUN_1419fd800, FUN_1407d1e30, FUN_1403c9020
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Removing unreachable block (ram,0x0001450bc20e) */
/* WARNING: Removing unreachable block (ram,0x0001450bc219) */
/* WARNING: Removing unreachable block (ram,0x0001450bc225) */
/* WARNING: Removing unreachable block (ram,0x0001450bc240) */
/* WARNING: Removing unreachable block (ram,0x0001450bc248) */
/* WARNING: Removing unreachable block (ram,0x0001450bc44b) */
/* WARNING: Removing unreachable block (ram,0x0001450bc277) */
/* WARNING: Removing unreachable block (ram,0x0001450bc287) */
/* WARNING: Removing unreachable block (ram,0x0001450bc292) */
/* WARNING: Removing unreachable block (ram,0x0001450bc2c8) */
/* WARNING: Removing unreachable block (ram,0x0001450bc2e9) */
/* WARNING: Removing unreachable block (ram,0x0001450bc2ed) */
/* WARNING: Removing unreachable block (ram,0x0001450bc2f2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400019e0(longlong param_1)

{
  byte *pbVar1;
  ushort uVar2;
  ushort uVar3;
  longlong *plVar4;
  longlong lVar5;
  float fVar6;
  undefined1 auVar7 [16];
  char cVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 auStack_218 [16];
  undefined1 auStack_208 [16];
  undefined1 auStack_1f8 [56];
  uint uStack_1c0;
  longlong lStack_120;
  short sStack_116;
  undefined1 auStack_d8 [120];
  undefined *puStack_60;
  undefined8 uStack_50;
  
  FUN_140001bf0(*(undefined8 *)(param_1 + 0x268));
  uVar10 = *(uint *)(param_1 + 0xec0);
  if ((uVar10 != 0) && (uVar10 < _DAT_14abbef40)) {
    fVar6 = *(float *)(param_1 + 0xeb8) + _DAT_149dc5514;
    *(float *)(param_1 + 0xeb8) = fVar6;
    if (fVar6 < _DAT_149dc551c) {
      iVar9 = uVar10 + _DAT_149dc5530;
    }
    else {
      *(float *)(param_1 + 0xeb8) = _DAT_149dc551c;
      iVar9 = 0;
    }
    *(int *)(param_1 + 0xec0) = iVar9;
  }
  lVar11 = *(longlong *)(param_1 + 0xe88);
  if (lVar11 != 0) {
    cVar8 = FUN_1428409b0(*(undefined4 *)(lVar11 + 0x9c));
    if (cVar8 == '\0') {
      if (*(longlong *)(param_1 + 0xe88) == 0) {
        return;
      }
      puStack_60 = &UNK_1450bc1f3;
      FUN_140004b40(0x14abbf350);
      plVar4 = _DAT_14abbf370;
      lVar11 = *(longlong *)(param_1 + 0xe88);
      if (lVar11 != 0) {
        uVar2 = *(ushort *)(param_1 + 0xe80);
        uVar10 = *(uint *)(_DAT_14abbf370 + 1);
        lVar12 = _DAT_14abbf370[5];
        lVar5 = *_DAT_14abbf370;
        lVar16 = 0;
        if ((*(byte *)(lVar12 + (ulonglong)(uVar2 >> 3)) >> (uVar2 & 7) & 1) != 0) {
          lVar16 = (ulonglong)(uVar10 * uVar2) + lVar5;
        }
        uVar2 = *(ushort *)(lVar16 + 8);
        if (uVar2 == 0xffff) {
          uVar3 = *(ushort *)(lVar16 + 10);
          *(ushort *)(lVar11 + 8) = uVar3;
        }
        else {
          uVar3 = *(ushort *)(lVar16 + 10);
          lVar11 = 0;
          if ((*(byte *)(lVar12 + (ulonglong)(uVar2 >> 3)) >> (uVar2 & 7) & 1) != 0) {
            lVar11 = (ulonglong)(uVar10 * uVar2) + lVar5;
          }
          *(ushort *)(lVar11 + 10) = uVar3;
        }
        if (uVar3 != 0xffff) {
          lVar11 = 0;
          if ((*(byte *)(lVar12 + (ulonglong)(uVar3 >> 3)) >> (uVar3 & 7) & 1) != 0) {
            lVar11 = (ulonglong)((uint)uVar3 * (int)plVar4[1]) + *plVar4;
          }
          *(ushort *)(lVar11 + 8) = uVar2;
        }
        auVar7._8_8_ = 0;
        auVar7._0_8_ = lVar16 - lVar5;
        auVar7 = auVar7 / ZEXT416(uVar10);
        LOCK();
        pbVar1 = (byte *)(lVar12 + (auVar7._0_8_ >> 3 & 0x1fffffff));
        *pbVar1 = *pbVar1 & ~(byte)(1 << (auVar7[0] & 7));
        UNLOCK();
        LOCK();
        *(int *)(plVar4 + 2) = (int)plVar4[2] + -1;
        UNLOCK();
        uVar14 = plVar4[4];
        do {
          *(int *)(*plVar4 + (ulonglong)(uint)((int)plVar4[1] * auVar7._0_4_)) = (int)uVar14;
          LOCK();
          uVar15 = plVar4[4];
          bVar17 = uVar14 == uVar15;
          if (bVar17) {
            plVar4[4] = (uVar14 & 0xffffffff00000000) + (auVar7._0_8_ & 0xffffffff) + 0x100000000;
            uVar15 = uVar14;
          }
          UNLOCK();
          uVar14 = uVar15;
        } while (!bVar17);
        if (plVar4[3] != 0) {
          puStack_60 = &UNK_1450bc434;
          FUN_140189080(plVar4,lVar16);
        }
      }
      *(longlong *)(param_1 + 0xe88) = 0;
      iRam000000014abbf360 = iRam000000014abbf360 + -1;
      uVar14 = uRam000000014abbf350;
      if (iRam000000014abbf360 == 0) {
        do {
          uVar13 = uVar14;
          LOCK();
          uVar14 = uVar13;
          uVar15 = (ulonglong)((int)uVar13 - 1) | 0xffffffff00000000;
          if (uVar13 != uRam000000014abbf350) {
            uVar14 = uRam000000014abbf350;
            uVar15 = uRam000000014abbf350;
          }
          uRam000000014abbf350 = uVar15;
          UNLOCK();
        } while (uVar13 != uVar14);
        if ((uVar13 & 0xfffffffe) != 0) {
          iRam000000014abbf360 = 0;
          lVar11 = lRam000000014abbf358;
          do {
            while (lVar11 < 0) {
              uStack_50 = 0x140019c89;
              cVar8 = FUN_1400062d0(0x14abbf358,1,&stack0xffffffffffffffe0);
              if (cVar8 != '\0') {
                return;
              }
            }
            LOCK();
            lVar12 = lVar11;
            lVar5 = lVar11 + 0x100000000;
            if (lVar11 != lRam000000014abbf358) {
              lVar12 = lRam000000014abbf358;
              lVar5 = lRam000000014abbf358;
            }
            lRam000000014abbf358 = lVar5;
            UNLOCK();
            bVar17 = lVar11 != lVar12;
            lVar11 = lVar12;
          } while (bVar17);
          return;
        }
      }
      return;
    }
    lVar12 = *(longlong *)(param_1 + 0x268);
    uStack_228 = *(undefined8 *)(lVar12 + 0x70);
    uStack_220 = *(undefined8 *)(lVar12 + 0x78);
    func_0x000144dc3790(&uStack_228,auStack_208);
    uStack_238 = *(undefined8 *)(lVar11 + 0x70);
    uStack_230 = *(undefined8 *)(lVar11 + 0x78);
    func_0x000144dc3790(&uStack_238,auStack_218);
    auVar19._0_12_ = ZEXT812(0);
    auVar19._12_4_ = 0;
    auVar7 = vsubps_avx(auStack_208,auStack_218);
    auVar18._0_4_ = auVar7._0_4_ * auVar7._0_4_;
    auVar18._4_4_ = auVar7._4_4_ * auVar7._4_4_;
    auVar18._8_4_ = auVar7._8_4_ * auVar7._8_4_;
    auVar18._12_4_ = auVar7._12_4_ * auVar7._12_4_;
    auVar7 = vblendps_avx(auVar18,auVar19,8);
    auVar7 = vhaddps_avx(auVar7,auVar7);
    auVar7 = vhaddps_avx(auVar7,auVar7);
    if (_DAT_14a9ae100 * _DAT_14a9ae100 <= auVar7._0_4_) {
      lVar11 = func_0x000144dd30d0(*(undefined4 *)(lVar12 + 0x9c));
      if ((lVar11 != 0) && (cVar8 = FUN_142840a00(param_1), cVar8 != '\0')) {
        FUN_1407d1e30(auStack_1f8);
        lVar12 = *(longlong *)(param_1 + 0xe88);
        if (lVar12 == 0) {
          uStack_1c0 = 0x1ffff;
        }
        else {
          plVar4 = *(longlong **)((ulonglong)*(byte *)(lVar12 + 0x30) * 8 + 0x14abbe7c0);
          uVar10 = (uint)((ulonglong)(lVar12 - *plVar4) / (ulonglong)*(uint *)(plVar4 + 1)) &
                   0x1ffff;
          uStack_1c0 = (*(byte *)(lVar12 + 0x30) & 0x1f) << 0x11 | uVar10 |
                       (*(uint *)(plVar4[5] + (ulonglong)uVar10 * 4) & 0x7fe0000) << 5;
        }
        FUN_1419fd800(lVar11);
        FUN_1403c9020(auStack_d8);
        if ((sStack_116 != 0) && (lStack_120 != 0)) {
          func_0x000144d9c130();
        }
      }
      FUN_1450bc1b0((ushort *)(param_1 + 0xe80),0);
    }
  }
  return;
}

