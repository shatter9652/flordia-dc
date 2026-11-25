// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140189c50  size: 937 bytes
// Name:    FUN_140189c50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140323580, FUN_140006180
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140189c50(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  bool bVar15;
  ulonglong uStack_48;
  
  uVar12 = _DAT_149276e08;
LAB_140189c8c:
  do {
    uVar11 = uVar12;
    if ((uVar11 & 0x1ff0000) != 0) {
      LOCK();
      bVar14 = uVar11 == _DAT_149276e08;
      uVar12 = uVar11;
      uVar9 = uVar11 + 0x100;
      if (!bVar14) {
        uVar12 = _DAT_149276e08;
        uVar9 = _DAT_149276e08;
      }
      _DAT_149276e08 = uVar9;
      UNLOCK();
      if (bVar14) {
        uVar9 = (uint)(_DAT_149276e10 >> 7) & 0xffffff;
        uVar7 = _DAT_149276e10;
        uVar4 = _DAT_149276e10;
        if ((_DAT_149276e10 >> 7 & 0xffffff) != 0) {
          do {
            uVar4 = _DAT_149276e10;
            if (0xffffffff < (longlong)uVar7) {
              LOCK();
              uVar4 = uVar7;
              uVar2 = uVar7 - 0x100000000;
              if (uVar7 != _DAT_149276e10) {
                uVar4 = _DAT_149276e10;
                uVar2 = _DAT_149276e10;
              }
              _DAT_149276e10 = uVar2;
              UNLOCK();
              uVar12 = uVar11;
              if (uVar7 == uVar4) goto LAB_140189c8c;
            }
            uVar9 = uVar9 - 1;
            uVar7 = uVar4;
            uVar4 = _DAT_149276e10;
          } while (uVar9 != 0);
        }
        do {
          while (uStack_48 = uVar4, (longlong)uStack_48 < 0x100000000) {
            cVar3 = FUN_140006180(&DAT_149276e10,1,&uStack_48);
            uVar12 = uVar11;
            uVar4 = uStack_48;
            if (cVar3 != '\0') goto LAB_140189c8c;
          }
          LOCK();
          uVar4 = uStack_48;
          uVar7 = uStack_48 - 0x100000000;
          if (uStack_48 != _DAT_149276e10) {
            uVar4 = _DAT_149276e10;
            uVar7 = _DAT_149276e10;
          }
          _DAT_149276e10 = uVar7;
          UNLOCK();
          uVar12 = uVar11;
        } while (uStack_48 != uVar4);
      }
      goto LAB_140189c8c;
    }
    LOCK();
    bVar14 = uVar11 != _DAT_149276e08;
    uVar12 = uVar11 + 1;
    if (bVar14) {
      uVar11 = _DAT_149276e08;
      uVar12 = _DAT_149276e08;
    }
    _DAT_149276e08 = uVar12;
    UNLOCK();
    uVar12 = uVar11;
  } while (bVar14);
  if ((longlong)param_2 - (longlong)param_1 == 0) {
    LOCK();
    uVar12 = _DAT_149276e08 - 1;
    UNLOCK();
    uVar11 = _DAT_149276e08 - 1;
    _DAT_149276e08 = uVar12;
    if ((char)uVar11 == '\0') {
      if ((uVar11 & 0xff0000) == 0) {
        if ((uVar11 & 0xff00) != 0) {
          do {
            LOCK();
            bVar14 = uVar12 != _DAT_149276e08;
            uVar11 = uVar12 & 0xffff00ff;
            if (bVar14) {
              uVar12 = _DAT_149276e08;
              uVar11 = _DAT_149276e08;
            }
            _DAT_149276e08 = uVar11;
            UNLOCK();
          } while (bVar14);
          uVar12 = uVar12 >> 8 & 0xff;
          if (uVar12 != 0) {
            uVar4 = _DAT_149276e10;
            do {
              while (-1 < (longlong)uVar4) {
                LOCK();
                uVar7 = uVar4;
                uVar2 = uVar4 + ((ulonglong)uVar12 << 0x20);
                if (uVar4 != _DAT_149276e10) {
                  uVar7 = _DAT_149276e10;
                  uVar2 = _DAT_149276e10;
                }
                _DAT_149276e10 = uVar2;
                UNLOCK();
                bVar14 = uVar4 == uVar7;
                uVar4 = uVar7;
                if (bVar14) {
                  return;
                }
              }
              cVar3 = FUN_1400062d0(&DAT_149276e10,uVar12,&stack0xffffffffffffffc8);
            } while (cVar3 == '\0');
          }
        }
      }
      else {
        do {
          if ((uVar11 & 0xff0000) == 0) {
            return;
          }
          LOCK();
          bVar14 = uVar11 != _DAT_149276e08;
          uVar12 = uVar11;
          uVar9 = uVar11 - 0x10000;
          if (bVar14) {
            uVar12 = _DAT_149276e08;
            uVar9 = _DAT_149276e08;
          }
          _DAT_149276e08 = uVar9;
          UNLOCK();
          uVar4 = _DAT_149276e18;
          if (!bVar14) {
            do {
              while ((longlong)uVar4 < 0) {
                cVar3 = FUN_1400062d0(&DAT_149276e18,1,&stack0xffffffffffffffc8);
                uVar12 = uVar11;
                if (cVar3 != '\0') goto code_r0x00014032361d;
              }
              LOCK();
              uVar7 = uVar4;
              uVar2 = uVar4 + 0x100000000;
              if (uVar4 != _DAT_149276e18) {
                uVar7 = _DAT_149276e18;
                uVar2 = _DAT_149276e18;
              }
              _DAT_149276e18 = uVar2;
              UNLOCK();
              bVar15 = uVar4 != uVar7;
              uVar12 = uVar11;
              uVar4 = uVar7;
            } while (bVar15);
          }
code_r0x00014032361d:
          uVar11 = uVar12;
        } while (bVar14);
      }
    }
    return;
  }
  uVar4 = (ulonglong)_DAT_149276d7c;
  uVar7 = (ulonglong)_DAT_149276d78;
  iVar13 = (int)((ulonglong)((longlong)param_2 - (longlong)param_1) >> 3);
  if (iVar13 != 0) {
    do {
      uVar12 = (uint)uVar4;
      if (_DAT_149276d78 < uVar12 + iVar13) {
        lVar5 = _DAT_149276d80 + uVar7 * 8;
        goto LAB_140189deb;
      }
      LOCK();
      bVar14 = uVar12 != _DAT_149276d7c;
      uVar12 = uVar12 + iVar13;
      if (bVar14) {
        uVar4 = (ulonglong)_DAT_149276d7c;
        uVar12 = _DAT_149276d7c;
      }
      _DAT_149276d7c = uVar12;
      UNLOCK();
    } while (bVar14);
    puVar8 = (undefined4 *)(uVar4 * 8 + _DAT_149276d80);
    puVar6 = param_1;
    do {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar6;
        puVar8[1] = puVar6[1];
      }
      puVar6 = puVar6 + 2;
      puVar8 = puVar8 + 2;
    } while (puVar6 != param_2);
  }
  uVar7 = (ulonglong)_DAT_149276d78;
  lVar5 = _DAT_149276d80 + uVar4 * 8;
LAB_140189deb:
  lVar1 = _DAT_149276d80 + uVar7 * 8;
  FUN_140323580(&DAT_149276e08);
  if (lVar5 != lVar1) {
    return;
  }
  uVar12 = _DAT_149276e08;
LAB_140189e23:
  do {
    uVar11 = uVar12;
    if ((uVar11 & 0x10000ff) != 0) {
      LOCK();
      bVar14 = uVar11 == _DAT_149276e08;
      uVar12 = uVar11;
      uVar9 = uVar11 + 0x10000;
      if (!bVar14) {
        uVar12 = _DAT_149276e08;
        uVar9 = _DAT_149276e08;
      }
      _DAT_149276e08 = uVar9;
      UNLOCK();
      if (bVar14) {
        uVar9 = (uint)(_DAT_149276e18 >> 7) & 0xffffff;
        uVar7 = _DAT_149276e18;
        uVar4 = _DAT_149276e18;
        if ((_DAT_149276e18 >> 7 & 0xffffff) != 0) {
          do {
            uVar4 = _DAT_149276e18;
            if (0xffffffff < (longlong)uVar7) {
              LOCK();
              uVar4 = uVar7;
              uVar2 = uVar7 - 0x100000000;
              if (uVar7 != _DAT_149276e18) {
                uVar4 = _DAT_149276e18;
                uVar2 = _DAT_149276e18;
              }
              _DAT_149276e18 = uVar2;
              UNLOCK();
              uVar12 = uVar11;
              if (uVar7 == uVar4) goto LAB_140189e23;
            }
            uVar9 = uVar9 - 1;
            uVar7 = uVar4;
            uVar4 = _DAT_149276e18;
          } while (uVar9 != 0);
        }
        do {
          while (uStack_48 = uVar4, (longlong)uStack_48 < 0x100000000) {
            cVar3 = FUN_140006180(&DAT_149276e18,1,&uStack_48);
            uVar12 = uVar11;
            uVar4 = uStack_48;
            if (cVar3 != '\0') goto LAB_140189e23;
          }
          LOCK();
          uVar4 = uStack_48;
          uVar7 = uStack_48 - 0x100000000;
          if (uStack_48 != _DAT_149276e18) {
            uVar4 = _DAT_149276e18;
            uVar7 = _DAT_149276e18;
          }
          _DAT_149276e18 = uVar7;
          UNLOCK();
          uVar12 = uVar11;
        } while (uStack_48 != uVar4);
      }
      goto LAB_140189e23;
    }
    LOCK();
    bVar14 = uVar11 != _DAT_149276e08;
    uVar12 = uVar11 | 0x1000000;
    if (bVar14) {
      uVar11 = _DAT_149276e08;
      uVar12 = _DAT_149276e08;
    }
    _DAT_149276e08 = uVar12;
    UNLOCK();
    uVar12 = uVar11;
  } while (bVar14);
  uVar11 = _DAT_149276d7c + iVar13;
  uVar12 = _DAT_149276d78;
  lVar5 = _DAT_149276d80;
  if (_DAT_149276d78 < uVar11) {
    if (uVar11 < 0x11) {
      lVar5 = 0x149276d88;
    }
    else {
      lVar5 = func_0x000144d9c140(4);
    }
    lVar1 = _DAT_149276d80;
    if ((_DAT_149276d7c != 0) && (uVar4 = (ulonglong)_DAT_149276d7c, _DAT_149276d7c != 0)) {
      lVar10 = 0;
      do {
        if (lVar5 + lVar10 != 0) {
          *(undefined4 *)(lVar5 + lVar10) = *(undefined4 *)(lVar1 + lVar10);
          *(undefined4 *)(lVar5 + 4 + lVar10) = *(undefined4 *)(lVar1 + 4 + lVar10);
        }
        lVar10 = lVar10 + 8;
      } while (uVar4 << 3 != lVar10);
    }
    uVar12 = uVar11;
    if ((_DAT_149276d80 != 0x149276d88) && (_DAT_149276d80 != 0)) {
      func_0x000144d9c130();
    }
  }
  _DAT_149276d80 = lVar5;
  _DAT_149276d78 = uVar12;
  uVar12 = _DAT_149276d7c;
  uVar11 = _DAT_149276e08;
  if (iVar13 != 0) {
    do {
      if (_DAT_149276d78 < uVar12 + iVar13) goto code_r0x000140465681;
      LOCK();
      bVar14 = uVar12 != _DAT_149276d7c;
      uVar9 = uVar12 + iVar13;
      if (bVar14) {
        uVar12 = _DAT_149276d7c;
        uVar9 = _DAT_149276d7c;
      }
      _DAT_149276d7c = uVar9;
      UNLOCK();
    } while (bVar14);
    puVar6 = (undefined4 *)((ulonglong)uVar12 * 8 + _DAT_149276d80);
    do {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *param_1;
        puVar6[1] = param_1[1];
      }
      param_1 = param_1 + 2;
      puVar6 = puVar6 + 2;
      uVar11 = _DAT_149276e08;
    } while (param_1 != param_2);
  }
code_r0x000140465681:
  do {
    LOCK();
    bVar14 = uVar11 != _DAT_149276e08;
    uVar12 = uVar11 & 0xfeffffff;
    if (bVar14) {
      uVar11 = _DAT_149276e08;
      uVar12 = _DAT_149276e08;
    }
    _DAT_149276e08 = uVar12;
    UNLOCK();
  } while (bVar14);
  if ((uVar11 & 0xff0000) == 0) {
    uVar12 = _DAT_149276e08;
    if ((uVar11 & 0xff00) != 0) {
      do {
        LOCK();
        bVar14 = uVar12 != _DAT_149276e08;
        uVar11 = uVar12 & 0xffff00ff;
        if (bVar14) {
          uVar12 = _DAT_149276e08;
          uVar11 = _DAT_149276e08;
        }
        _DAT_149276e08 = uVar11;
        UNLOCK();
      } while (bVar14);
      uVar12 = uVar12 >> 8 & 0xff;
      if (uVar12 != 0) {
        uVar4 = _DAT_149276e10;
        do {
          while (-1 < (longlong)uVar4) {
            LOCK();
            uVar7 = uVar4;
            uVar2 = uVar4 + ((ulonglong)uVar12 << 0x20);
            if (uVar4 != _DAT_149276e10) {
              uVar7 = _DAT_149276e10;
              uVar2 = _DAT_149276e10;
            }
            _DAT_149276e10 = uVar2;
            UNLOCK();
            bVar14 = uVar4 == uVar7;
            uVar4 = uVar7;
            if (bVar14) {
              return;
            }
          }
          cVar3 = FUN_1400062d0(&DAT_149276e10,uVar12,&stack0xffffffffffffffc8);
        } while (cVar3 == '\0');
      }
    }
  }
  else {
    uVar11 = uVar11 & 0xfeffffff;
    do {
      if ((uVar11 & 0xff0000) == 0) {
        return;
      }
      LOCK();
      bVar14 = uVar11 != _DAT_149276e08;
      uVar12 = uVar11;
      uVar9 = uVar11 - 0x10000;
      if (bVar14) {
        uVar12 = _DAT_149276e08;
        uVar9 = _DAT_149276e08;
      }
      _DAT_149276e08 = uVar9;
      UNLOCK();
      uVar4 = _DAT_149276e18;
      if (!bVar14) {
        do {
          while ((longlong)uVar4 < 0) {
            cVar3 = FUN_1400062d0(&DAT_149276e18,1,&stack0xffffffffffffffc8);
            uVar12 = uVar11;
            if (cVar3 != '\0') goto code_r0x00014046570e;
          }
          LOCK();
          uVar7 = uVar4;
          uVar2 = uVar4 + 0x100000000;
          if (uVar4 != _DAT_149276e18) {
            uVar7 = _DAT_149276e18;
            uVar2 = _DAT_149276e18;
          }
          _DAT_149276e18 = uVar2;
          UNLOCK();
          bVar15 = uVar4 != uVar7;
          uVar12 = uVar11;
          uVar4 = uVar7;
        } while (bVar15);
      }
code_r0x00014046570e:
      uVar11 = uVar12;
    } while (bVar14);
  }
  return;
}

