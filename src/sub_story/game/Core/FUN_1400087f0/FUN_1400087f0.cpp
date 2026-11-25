// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400087f0  size: 574 bytes
// Name:    FUN_1400087f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f89200, FUN_144db2a80, FUN_140006180, FUN_144f89a80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400087f0(undefined1 (*param_1) [16],undefined4 *param_2)

{
  undefined1 auVar1 [16];
  undefined4 *puVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  undefined1 auVar16 [64];
  undefined1 auStack_a8 [16];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 aauStack_58 [2] [16];
  
  uVar13 = _DAT_14764c290;
LAB_140008837:
  do {
    uVar12 = uVar13;
    if ((uVar12 & 0x1ff0000) != 0) {
      LOCK();
      bVar14 = uVar12 == _DAT_14764c290;
      uVar13 = uVar12;
      uVar11 = uVar12 + 0x100;
      if (!bVar14) {
        uVar13 = _DAT_14764c290;
        uVar11 = _DAT_14764c290;
      }
      _DAT_14764c290 = uVar11;
      UNLOCK();
      if (bVar14) {
        uVar11 = (uint)(_DAT_14764c298 >> 7) & 0xffffff;
        uVar6 = _DAT_14764c298;
        uVar10 = _DAT_14764c298;
        if ((_DAT_14764c298 >> 7 & 0xffffff) != 0) {
          do {
            uVar5 = _DAT_14764c298;
            if (0xffffffff < (longlong)uVar10) {
              LOCK();
              uVar5 = uVar10;
              uVar6 = uVar10 - 0x100000000;
              if (uVar10 != _DAT_14764c298) {
                uVar5 = _DAT_14764c298;
                uVar6 = _DAT_14764c298;
              }
              _DAT_14764c298 = uVar6;
              UNLOCK();
              uVar13 = uVar12;
              if (uVar10 == uVar5) goto LAB_140008837;
            }
            uVar11 = uVar11 - 1;
            uVar6 = _DAT_14764c298;
            uVar10 = uVar5;
          } while (uVar11 != 0);
        }
        do {
          auStack_a8._0_8_ = uVar6;
          while ((longlong)uVar6 < 0x100000000) {
            cVar4 = FUN_140006180(&DAT_14764c298,1,auStack_a8);
            uVar13 = uVar12;
            if (cVar4 != '\0') goto LAB_140008837;
            uVar6 = auStack_a8._0_8_;
          }
          LOCK();
          uVar10 = uVar6 - 0x100000000;
          if (uVar6 != _DAT_14764c298) {
            uVar6 = _DAT_14764c298;
            uVar10 = _DAT_14764c298;
          }
          _DAT_14764c298 = uVar10;
          UNLOCK();
          uVar13 = uVar12;
        } while (auStack_a8._0_8_ != uVar6);
      }
      goto LAB_140008837;
    }
    LOCK();
    bVar14 = uVar12 != _DAT_14764c290;
    uVar13 = uVar12 + 1;
    if (bVar14) {
      uVar12 = _DAT_14764c290;
      uVar13 = _DAT_14764c290;
    }
    _DAT_14764c290 = uVar13;
    UNLOCK();
    uVar13 = uVar12;
    if (!bVar14) {
      if (_DAT_14764c0b4 == 10) {
        auStack_a8._8_8_ = uRam000000014aa3f788;
        auStack_a8._0_8_ = _DAT_14aa3f780;
        uVar7 = FUN_144db2a80(_DAT_149e50650 + 0x4c50,auStack_a8);
        func_0x000144daf0b0(uVar7,aauStack_58);
        auVar1 = vsubps_avx(*param_1,aauStack_58[0]);
        auVar16 = ZEXT1664(auVar1);
        FUN_144f89a80(0x14764bfd0);
        auStack_68 = auVar16._0_16_;
        auStack_a8 = ZEXT416(_DAT_145fc6ed8);
        uStack_98 = _DAT_146159bc0;
        uStack_90 = 0;
        uStack_88 = _DAT_14614f7f0;
        uStack_80 = _UNK_14614f7f8;
        auStack_78 = ZEXT816(0) << 0x20;
        FUN_144f89200(0x14764bfd0,auStack_68,_DAT_145fc6ed8,auStack_a8);
        puVar2 = _DAT_14764c068;
        *param_2 = *_DAT_14764c068;
        param_2[1] = puVar2[1];
        param_2[2] = puVar2[2];
        param_2[3] = puVar2[3];
        param_2[4] = puVar2[4];
        param_2[5] = puVar2[5];
        param_2[6] = puVar2[6];
        param_2[7] = puVar2[7];
        param_2[8] = puVar2[9];
        param_2[9] = puVar2[8];
      }
      LOCK();
      uVar13 = _DAT_14764c290 - 1;
      UNLOCK();
      uVar12 = _DAT_14764c290 - 1;
      _DAT_14764c290 = uVar13;
      if ((char)uVar12 == '\0') {
        if ((uVar12 & 0xff0000) == 0) {
          if ((uVar12 & 0xff00) != 0) {
            do {
              LOCK();
              bVar14 = uVar13 != _DAT_14764c290;
              uVar12 = uVar13 & 0xffff00ff;
              if (bVar14) {
                uVar13 = _DAT_14764c290;
                uVar12 = _DAT_14764c290;
              }
              _DAT_14764c290 = uVar12;
              UNLOCK();
            } while (bVar14);
            uVar13 = uVar13 >> 8 & 0xff;
            if (uVar13 != 0) {
              uVar6 = _DAT_14764c298;
              do {
                while (-1 < (longlong)uVar6) {
                  LOCK();
                  uVar10 = uVar6;
                  uVar5 = uVar6 + ((ulonglong)uVar13 << 0x20);
                  if (uVar6 != _DAT_14764c298) {
                    uVar10 = _DAT_14764c298;
                    uVar5 = _DAT_14764c298;
                  }
                  _DAT_14764c298 = uVar5;
                  UNLOCK();
                  bVar14 = uVar6 == uVar10;
                  uVar6 = uVar10;
                  if (bVar14) {
                    return;
                  }
                }
                auStack_68._8_8_ = &UNK_14032369a;
                cVar4 = FUN_1400062d0(&DAT_14764c298,uVar13,&stack0xffffffffffffffc8);
              } while (cVar4 == '\0');
            }
          }
        }
        else {
          do {
            if ((uVar12 & 0xff0000) == 0) {
              return;
            }
            LOCK();
            bVar14 = uVar12 != _DAT_14764c290;
            uVar13 = uVar12;
            uVar11 = uVar12 - 0x10000;
            if (bVar14) {
              uVar13 = _DAT_14764c290;
              uVar11 = _DAT_14764c290;
            }
            _DAT_14764c290 = uVar11;
            UNLOCK();
            lVar8 = lRam000000014764c2a0;
            if (!bVar14) {
              do {
                while (lVar8 < 0) {
                  auStack_68._8_8_ = &UNK_1403235fe;
                  cVar4 = FUN_1400062d0(0x14764c2a0,1,&stack0xffffffffffffffc8);
                  uVar13 = uVar12;
                  if (cVar4 != '\0') goto code_r0x00014032361d;
                }
                LOCK();
                lVar9 = lVar8;
                lVar3 = lVar8 + 0x100000000;
                if (lVar8 != lRam000000014764c2a0) {
                  lVar9 = lRam000000014764c2a0;
                  lVar3 = lRam000000014764c2a0;
                }
                lRam000000014764c2a0 = lVar3;
                UNLOCK();
                bVar15 = lVar8 != lVar9;
                uVar13 = uVar12;
                lVar8 = lVar9;
              } while (bVar15);
            }
code_r0x00014032361d:
            uVar12 = uVar13;
          } while (bVar14);
        }
      }
      return;
    }
  } while( true );
}

