// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14013c6e0  size: 898 bytes
// Name:    FUN_14013c6e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140db67a0, FUN_140006180, FUN_14004c030, FUN_140323580, FUN_1406d9230, FUN_1402aef60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013c6e0(int param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  longlong *plVar4;
  char cVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  bool bVar17;
  bool bVar18;
  ulonglong uStack_58;
  uint uStack_4c;
  char cStack_48;
  undefined4 uStack_3c;
  ulonglong uVar11;
  
  uVar14 = _DAT_14927f8d0;
LAB_14013c717:
  do {
    uVar7 = uVar14;
    if ((uVar7 & 0x1ff0000) != 0) {
      LOCK();
      bVar17 = uVar7 == _DAT_14927f8d0;
      uVar14 = uVar7;
      uVar13 = uVar7 + 0x100;
      if (!bVar17) {
        uVar14 = _DAT_14927f8d0;
        uVar13 = _DAT_14927f8d0;
      }
      _DAT_14927f8d0 = uVar13;
      UNLOCK();
      if (bVar17) {
        uVar13 = (uint)(_DAT_14927f8d8 >> 7) & 0xffffff;
        uVar12 = _DAT_14927f8d8;
        uVar11 = _DAT_14927f8d8;
        if ((_DAT_14927f8d8 >> 7 & 0xffffff) != 0) {
          do {
            uVar11 = _DAT_14927f8d8;
            if (0xffffffff < (longlong)uVar12) {
              LOCK();
              uVar11 = uVar12;
              uVar15 = uVar12 - 0x100000000;
              if (uVar12 != _DAT_14927f8d8) {
                uVar11 = _DAT_14927f8d8;
                uVar15 = _DAT_14927f8d8;
              }
              _DAT_14927f8d8 = uVar15;
              UNLOCK();
              uVar14 = uVar7;
              if (uVar12 == uVar11) goto LAB_14013c717;
            }
            uVar13 = uVar13 - 1;
            uVar12 = uVar11;
            uVar11 = _DAT_14927f8d8;
          } while (uVar13 != 0);
        }
        do {
          while (uStack_58 = uVar11, (longlong)uStack_58 < 0x100000000) {
            cVar5 = FUN_140006180(&DAT_14927f8d8,1,&uStack_58);
            uVar14 = uVar7;
            uVar11 = uStack_58;
            if (cVar5 != '\0') goto LAB_14013c717;
          }
          LOCK();
          uVar11 = uStack_58;
          uVar12 = uStack_58 - 0x100000000;
          if (uStack_58 != _DAT_14927f8d8) {
            uVar11 = _DAT_14927f8d8;
            uVar12 = _DAT_14927f8d8;
          }
          _DAT_14927f8d8 = uVar12;
          UNLOCK();
          uVar14 = uVar7;
        } while (uStack_58 != uVar11);
      }
      goto LAB_14013c717;
    }
    LOCK();
    bVar17 = uVar7 != _DAT_14927f8d0;
    uVar14 = uVar7 + 1;
    if (bVar17) {
      uVar7 = _DAT_14927f8d0;
      uVar14 = _DAT_14927f8d0;
    }
    _DAT_14927f8d0 = uVar14;
    UNLOCK();
    uVar14 = uVar7;
  } while (bVar17);
  lVar9 = func_0x00014031a8f0(param_1);
  FUN_140323580(&DAT_14927f8d0);
  if ((lVar9 != 0) || (lVar9 = FUN_140db67a0(param_1), lVar9 == 0)) {
    return;
  }
  uVar14 = _DAT_14927f8d0;
LAB_14013c823:
  do {
    uVar7 = uVar14;
    if ((uVar7 & 0x10000ff) != 0) {
      LOCK();
      bVar17 = uVar7 == _DAT_14927f8d0;
      uVar14 = uVar7;
      uVar13 = uVar7 + 0x10000;
      if (!bVar17) {
        uVar14 = _DAT_14927f8d0;
        uVar13 = _DAT_14927f8d0;
      }
      _DAT_14927f8d0 = uVar13;
      UNLOCK();
      if (bVar17) {
        uVar13 = (uint)(_DAT_14927f8e0 >> 7) & 0xffffff;
        uVar12 = _DAT_14927f8e0;
        uVar11 = _DAT_14927f8e0;
        if ((_DAT_14927f8e0 >> 7 & 0xffffff) != 0) {
          do {
            uVar11 = _DAT_14927f8e0;
            if (0xffffffff < (longlong)uVar12) {
              LOCK();
              uVar11 = uVar12;
              uVar15 = uVar12 - 0x100000000;
              if (uVar12 != _DAT_14927f8e0) {
                uVar11 = _DAT_14927f8e0;
                uVar15 = _DAT_14927f8e0;
              }
              _DAT_14927f8e0 = uVar15;
              UNLOCK();
              uVar14 = uVar7;
              if (uVar12 == uVar11) goto LAB_14013c823;
            }
            uVar13 = uVar13 - 1;
            uVar12 = uVar11;
            uVar11 = _DAT_14927f8e0;
          } while (uVar13 != 0);
        }
        do {
          while (uStack_58 = uVar11, (longlong)uStack_58 < 0x100000000) {
            cVar5 = FUN_140006180(&DAT_14927f8e0,1,&uStack_58);
            uVar14 = uVar7;
            uVar11 = uStack_58;
            if (cVar5 != '\0') goto LAB_14013c823;
          }
          LOCK();
          uVar11 = uStack_58;
          uVar12 = uStack_58 - 0x100000000;
          if (uStack_58 != _DAT_14927f8e0) {
            uVar11 = _DAT_14927f8e0;
            uVar12 = _DAT_14927f8e0;
          }
          _DAT_14927f8e0 = uVar12;
          UNLOCK();
          uVar14 = uVar7;
        } while (uStack_58 != uVar11);
      }
      goto LAB_14013c823;
    }
    LOCK();
    bVar17 = uVar7 != _DAT_14927f8d0;
    uVar14 = uVar7 | 0x1000000;
    if (bVar17) {
      uVar7 = _DAT_14927f8d0;
      uVar14 = _DAT_14927f8d0;
    }
    _DAT_14927f8d0 = uVar14;
    UNLOCK();
    uVar14 = uVar7;
  } while (bVar17);
  lVar10 = func_0x00014031a8f0(param_1);
  plVar4 = _DAT_1492defc8;
  uVar14 = _DAT_14927f8d0;
  if ((lVar10 == 0) && (*(int *)((longlong)_DAT_1492defc8 + 0xc) != (int)_DAT_1492defc8[2])) {
    uVar11 = _DAT_1492defc8[4];
    do {
      iVar8 = (int)uVar11;
      if (iVar8 == 0x1fffe) goto LAB_14013ca5c;
      uVar15 = uVar11 & 0xffffffff;
      LOCK();
      uVar12 = plVar4[4];
      bVar17 = uVar11 == uVar12;
      if (bVar17) {
        plVar4[4] = (ulonglong)(*(uint *)(plVar4[5] + uVar15 * 4) & 0x1ffff) |
                    uVar11 & 0xffffffff00000000;
        uVar12 = uVar11;
      }
      UNLOCK();
      uVar11 = uVar12;
    } while (!bVar17);
    LOCK();
    *(int *)(plVar4 + 2) = (int)plVar4[2] + 1;
    UNLOCK();
    puVar1 = (uint *)(plVar4[5] + uVar15 * 4);
    *puVar1 = *puVar1 | *(uint *)(plVar4 + 6);
    if (*plVar4 == 0) {
LAB_14013ca5c:
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar10 = *plVar4 + (ulonglong)(uint)((int)plVar4[1] * iVar8);
    if (plVar4[3] != 0) {
      FUN_14004c030(plVar4,lVar10);
    }
    FUN_1402aef60(lVar10,lVar9);
    lVar9 = _DAT_14927f8f0;
    uVar11 = (ulonglong)_DAT_14927f8ec;
    _DAT_14927f8ec = _DAT_14927f8ec + 1;
    if (_DAT_14927f8f0 != 0) {
      *(longlong *)(_DAT_14927f8f0 + uVar11 * 8) = lVar10;
    }
    uVar2 = *(undefined4 *)(lVar10 + 0x70);
    uStack_3c = uVar2;
    FUN_1406d9230(&DAT_14927f8f8,&uStack_58);
    if (cStack_48 == '\x01') {
      *(undefined4 *)
       ((ulonglong)(uStack_4c >> 4) * 0x50 + uStack_58 + 0x10 + (ulonglong)(uStack_4c & 0xf) * 4) =
           uVar2;
    }
    uVar14 = _DAT_14927f8d0;
    if ((_DAT_149283b60 != 0) && (uVar7 = *(uint *)(_DAT_149283b60 + 4), (ulonglong)uVar7 != 0)) {
      lVar9 = *(longlong *)(lVar9 + uVar11 * 8);
      lVar10 = *(longlong *)(_DAT_149283b60 + 8);
      lVar16 = 0;
      do {
        if (*(int *)(lVar10 + lVar16) == param_1) {
          func_0x0001402aee20(lVar9,*(undefined8 *)(lVar10 + 0x10 + lVar16));
          if (_DAT_149283b68 == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined1 *)(lVar10 + 8 + lVar16);
          }
          *(undefined1 *)(lVar9 + 0x188) = uVar6;
        }
        lVar16 = lVar16 + 0x18;
        uVar14 = _DAT_14927f8d0;
      } while ((ulonglong)uVar7 * 0x18 != lVar16);
    }
  }
  do {
    LOCK();
    bVar17 = uVar14 != _DAT_14927f8d0;
    uVar7 = uVar14 & 0xfeffffff;
    if (bVar17) {
      uVar14 = _DAT_14927f8d0;
      uVar7 = _DAT_14927f8d0;
    }
    _DAT_14927f8d0 = uVar7;
    UNLOCK();
  } while (bVar17);
  if ((uVar14 & 0xff0000) == 0) {
    uVar7 = _DAT_14927f8d0;
    if ((uVar14 & 0xff00) != 0) {
      do {
        LOCK();
        bVar17 = uVar7 != _DAT_14927f8d0;
        uVar14 = uVar7 & 0xffff00ff;
        if (bVar17) {
          uVar7 = _DAT_14927f8d0;
          uVar14 = _DAT_14927f8d0;
        }
        _DAT_14927f8d0 = uVar14;
        UNLOCK();
      } while (bVar17);
      uVar14 = uVar7 >> 8 & 0xff;
      if (uVar14 != 0) {
        uVar11 = _DAT_14927f8d8;
        do {
          while (-1 < (longlong)uVar11) {
            LOCK();
            uVar12 = uVar11;
            uVar15 = uVar11 + ((ulonglong)uVar14 << 0x20);
            if (uVar11 != _DAT_14927f8d8) {
              uVar12 = _DAT_14927f8d8;
              uVar15 = _DAT_14927f8d8;
            }
            _DAT_14927f8d8 = uVar15;
            UNLOCK();
            bVar17 = uVar11 == uVar12;
            uVar11 = uVar12;
            if (bVar17) {
              return;
            }
          }
          cVar5 = FUN_1400062d0(&DAT_14927f8d8,uVar14,&stack0xffffffffffffffc8);
        } while (cVar5 == '\0');
      }
    }
  }
  else {
    uVar14 = uVar14 & 0xfeffffff;
    do {
      if ((uVar14 & 0xff0000) == 0) {
        return;
      }
      LOCK();
      bVar17 = uVar14 != _DAT_14927f8d0;
      uVar7 = uVar14;
      uVar13 = uVar14 - 0x10000;
      if (bVar17) {
        uVar7 = _DAT_14927f8d0;
        uVar13 = _DAT_14927f8d0;
      }
      _DAT_14927f8d0 = uVar13;
      UNLOCK();
      uVar11 = _DAT_14927f8e0;
      if (!bVar17) {
        do {
          while ((longlong)uVar11 < 0) {
            cVar5 = FUN_1400062d0(&DAT_14927f8e0,1,&stack0xffffffffffffffc8);
            uVar7 = uVar14;
            if (cVar5 != '\0') goto code_r0x00014046570e;
          }
          LOCK();
          uVar12 = uVar11;
          uVar15 = uVar11 + 0x100000000;
          if (uVar11 != _DAT_14927f8e0) {
            uVar12 = _DAT_14927f8e0;
            uVar15 = _DAT_14927f8e0;
          }
          _DAT_14927f8e0 = uVar15;
          UNLOCK();
          bVar18 = uVar11 != uVar12;
          uVar7 = uVar14;
          uVar11 = uVar12;
        } while (bVar18);
      }
code_r0x00014046570e:
      uVar14 = uVar7;
    } while (bVar17);
  }
  return;
}

