// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14008e3d0  size: 825 bytes
// Name:    FUN_14008e3d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e40400, FUN_140006180
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14008e3d0(void)

{
  uint *puVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  uint *puVar13;
  ulonglong uVar14;
  bool bVar15;
  bool bVar16;
  undefined8 uStack_830;
  uint auStack_828 [498];
  undefined *puStack_60;
  ulonglong auStack_38 [2];
  
  uVar10 = _DAT_149df7250;
LAB_14008e404:
  do {
    uVar12 = uVar10;
    lVar4 = _DAT_149df7270;
    uVar7 = _DAT_149df7268;
    if ((uVar12 & 0x10000ff) != 0) {
      LOCK();
      bVar15 = uVar12 == _DAT_149df7250;
      uVar10 = uVar12;
      uVar7 = uVar12 + 0x10000;
      if (!bVar15) {
        uVar10 = _DAT_149df7250;
        uVar7 = _DAT_149df7250;
      }
      _DAT_149df7250 = uVar7;
      UNLOCK();
      if (bVar15) {
        uVar7 = (uint)(_DAT_149df7260 >> 7) & 0xffffff;
        uVar5 = _DAT_149df7260;
        uVar14 = _DAT_149df7260;
        if ((_DAT_149df7260 >> 7 & 0xffffff) != 0) {
          do {
            uVar14 = _DAT_149df7260;
            if (0xffffffff < (longlong)uVar5) {
              LOCK();
              uVar14 = uVar5;
              uVar8 = uVar5 - 0x100000000;
              if (uVar5 != _DAT_149df7260) {
                uVar14 = _DAT_149df7260;
                uVar8 = _DAT_149df7260;
              }
              _DAT_149df7260 = uVar8;
              UNLOCK();
              uVar10 = uVar12;
              if (uVar5 == uVar14) goto LAB_14008e404;
            }
            uVar7 = uVar7 - 1;
            uVar5 = uVar14;
            uVar14 = _DAT_149df7260;
          } while (uVar7 != 0);
        }
        do {
          while (uStack_830 = uVar14, (longlong)uStack_830 < 0x100000000) {
            cVar2 = FUN_140006180(&DAT_149df7260,1,&uStack_830);
            uVar10 = uVar12;
            uVar14 = uStack_830;
            if (cVar2 != '\0') goto LAB_14008e404;
          }
          LOCK();
          uVar14 = uStack_830;
          uVar5 = uStack_830 - 0x100000000;
          if (uStack_830 != _DAT_149df7260) {
            uVar14 = _DAT_149df7260;
            uVar5 = _DAT_149df7260;
          }
          _DAT_149df7260 = uVar5;
          UNLOCK();
          uVar10 = uVar12;
        } while (uStack_830 != uVar14);
      }
      goto LAB_14008e404;
    }
    LOCK();
    bVar15 = uVar12 != _DAT_149df7250;
    uVar10 = uVar12 | 0x1000000;
    if (bVar15) {
      uVar12 = _DAT_149df7250;
      uVar10 = _DAT_149df7250;
    }
    _DAT_149df7250 = uVar10;
    UNLOCK();
    uVar10 = uVar12;
  } while (bVar15);
  uVar5 = (ulonglong)_DAT_149df7268;
  uVar14 = 0;
  uStack_830 = CONCAT44(uStack_830._4_4_,0x200);
  uVar10 = _DAT_149df7250;
  if (uVar5 == 0) {
LAB_14008e4f4:
    if ((uint)uVar14 != _DAT_149df7268) {
      puVar11 = (uint *)(_DAT_149df7270 + (uVar14 & 0xffffffff) * 8);
      uVar8 = 0;
      do {
        lVar3 = FUN_144e40400(*puVar11);
        uVar9 = uVar8;
        if (lVar3 == 0) {
          uVar9 = (ulonglong)((int)uVar8 + 1);
          auStack_828[uVar8] = *puVar11;
        }
        uVar10 = (uint)uVar14;
        while (uVar14 = uVar5, uVar10 != uVar7) {
          while( true ) {
            uVar10 = uVar10 + 1;
            uVar14 = (ulonglong)uVar10;
            if (uVar7 <= uVar10) break;
            if (*(int *)(lVar4 + uVar14 * 8) != 0) goto LAB_14008e545;
          }
        }
LAB_14008e545:
        uVar6 = (ulonglong)_DAT_149df7268;
        puVar11 = (uint *)(lVar4 + uVar14 * 8);
        uVar8 = uVar9;
      } while (puVar11 != (uint *)(_DAT_149df7270 + uVar6 * 8));
      uStack_830 = CONCAT44((int)uVar9,(undefined4)uStack_830);
      uVar10 = _DAT_149df7250;
      if (_DAT_149df7268 != 0 && (int)uVar9 != 0) {
        uVar14 = 0;
        lVar4 = _DAT_149df7270;
        do {
          if ((int)uVar6 == 0) {
            uVar6 = 0;
          }
          else {
            uVar10 = auStack_828[uVar14];
            if (uVar10 != 0) {
              uVar7 = (uVar10 >> 0x10 ^ uVar10) * -0x7a143595;
              uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
              uVar12 = (int)uVar6 - 1;
              uVar5 = (ulonglong)((uVar7 >> 0x10 ^ uVar7) & uVar12);
              uVar7 = *(uint *)(lVar4 + uVar5 * 8);
              while ((uVar7 != 0 && (uVar7 != uVar10))) {
                uVar5 = (ulonglong)((uint)(uVar5 * 8 + 8 >> 3) & uVar12);
                uVar7 = *(uint *)(lVar4 + uVar5 * 8);
              }
              if (uVar7 != 0) {
                puVar11 = (uint *)(lVar4 + uVar5 * 8);
                uVar5 = (ulonglong)
                        (uVar12 & (uint)((ulonglong)((longlong)puVar11 + (8 - lVar4)) >> 3));
                uVar10 = *(uint *)(lVar4 + uVar5 * 8);
                if (uVar10 != 0) {
                  puVar13 = (uint *)(lVar4 + uVar5 * 8);
                  do {
                    uVar7 = (uVar10 >> 0x10 ^ uVar10) * -0x7a143595;
                    uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
                    uVar12 = (int)uVar6 - 1;
                    puVar1 = (uint *)(lVar4 + (ulonglong)((uVar7 >> 0x10 ^ uVar7) & uVar12) * 8);
                    uVar5 = 0;
                    if (puVar11 < puVar1) {
                      uVar5 = uVar6;
                    }
                    uVar8 = uVar6;
                    if (puVar1 <= puVar13) {
                      uVar8 = 0;
                    }
                    if ((uint)((longlong)puVar11 + (uVar5 * 8 - (longlong)puVar1) >> 3) <
                        (uint)((longlong)puVar13 + (uVar8 * 8 - (longlong)puVar1) >> 3)) {
                      *puVar11 = uVar10;
                      puVar11[1] = puVar13[1];
                      uVar6 = (ulonglong)_DAT_149df7268;
                      uVar12 = _DAT_149df7268 - 1;
                      lVar4 = _DAT_149df7270;
                      puVar11 = puVar13;
                    }
                    puVar13 = (uint *)(lVar4 + (ulonglong)
                                               ((uint)((ulonglong)((longlong)puVar13 + (8 - lVar4))
                                                      >> 3) & uVar12) * 8);
                    uVar10 = *puVar13;
                  } while (uVar10 != 0);
                }
                *puVar11 = 0;
                _DAT_149df726c = _DAT_149df726c + -1;
                uVar6 = (ulonglong)_DAT_149df7268;
              }
            }
          }
          uVar14 = uVar14 + 1;
          uVar10 = _DAT_149df7250;
        } while (uVar14 < uVar9);
      }
    }
  }
  else {
    do {
      if (*(int *)(_DAT_149df7270 + uVar14 * 8) != 0) goto LAB_14008e4f4;
      uVar14 = uVar14 + 1;
    } while (uVar5 != uVar14);
  }
  do {
    LOCK();
    bVar15 = uVar10 != _DAT_149df7250;
    uVar7 = uVar10 & 0xfeffffff;
    if (bVar15) {
      uVar10 = _DAT_149df7250;
      uVar7 = _DAT_149df7250;
    }
    _DAT_149df7250 = uVar7;
    UNLOCK();
  } while (bVar15);
  if ((uVar10 & 0xff0000) == 0) {
    uVar7 = _DAT_149df7250;
    if ((uVar10 & 0xff00) != 0) {
      do {
        LOCK();
        bVar15 = uVar7 != _DAT_149df7250;
        uVar10 = uVar7 & 0xffff00ff;
        if (bVar15) {
          uVar7 = _DAT_149df7250;
          uVar10 = _DAT_149df7250;
        }
        _DAT_149df7250 = uVar10;
        UNLOCK();
      } while (bVar15);
      uVar10 = uVar7 >> 8 & 0xff;
      if (uVar10 != 0) {
        auStack_38[0] = uRam0000000149df7258;
        do {
          while (-1 < (longlong)auStack_38[0]) {
            LOCK();
            uVar14 = auStack_38[0];
            uVar5 = auStack_38[0] + ((ulonglong)uVar10 << 0x20);
            if (auStack_38[0] != uRam0000000149df7258) {
              uVar14 = uRam0000000149df7258;
              uVar5 = uRam0000000149df7258;
            }
            uRam0000000149df7258 = uVar5;
            UNLOCK();
            bVar15 = auStack_38[0] == uVar14;
            auStack_38[0] = uVar14;
            if (bVar15) {
              return;
            }
          }
          puStack_60 = &UNK_14046577c;
          cVar2 = FUN_1400062d0(0x149df7258,uVar10,auStack_38);
        } while (cVar2 == '\0');
      }
    }
  }
  else {
    uVar10 = uVar10 & 0xfeffffff;
    do {
      if ((uVar10 & 0xff0000) == 0) {
        return;
      }
      LOCK();
      bVar15 = uVar10 != _DAT_149df7250;
      uVar7 = uVar10;
      uVar12 = uVar10 - 0x10000;
      if (bVar15) {
        uVar7 = _DAT_149df7250;
        uVar12 = _DAT_149df7250;
      }
      _DAT_149df7250 = uVar12;
      UNLOCK();
      auStack_38[0] = _DAT_149df7260;
      if (!bVar15) {
        do {
          while ((longlong)auStack_38[0] < 0) {
            puStack_60 = &UNK_1404656ef;
            cVar2 = FUN_1400062d0(&DAT_149df7260,1,auStack_38);
            uVar7 = uVar10;
            if (cVar2 != '\0') goto code_r0x00014046570e;
          }
          LOCK();
          uVar14 = auStack_38[0];
          uVar5 = auStack_38[0] + 0x100000000;
          if (auStack_38[0] != _DAT_149df7260) {
            uVar14 = _DAT_149df7260;
            uVar5 = _DAT_149df7260;
          }
          _DAT_149df7260 = uVar5;
          UNLOCK();
          bVar16 = auStack_38[0] != uVar14;
          uVar7 = uVar10;
          auStack_38[0] = uVar14;
        } while (bVar16);
      }
code_r0x00014046570e:
      uVar10 = uVar7;
    } while (bVar15);
  }
  return;
}

