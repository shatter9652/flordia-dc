// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140064f50  size: 2020 bytes
// Name:    FUN_140064f50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1419322e0, FUN_143dde790, FUN_145cda270
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_140064f50(undefined2 *param_1,undefined8 param_2,ulonglong *param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auVar15 [16];
  
  plVar5 = (longlong *)func_0x000144da24a0(0x149dd7bc8);
  if (plVar5 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  if (*plVar5 == 0) {
    return plVar5;
  }
  if ((int)plVar5[4] == 2) {
    LOCK();
    bVar14 = (int)plVar5[4] == 2;
    if (bVar14) {
      *(int *)(plVar5 + 4) = 3;
    }
    UNLOCK();
    if (bVar14) {
      FUN_1419322e0(*plVar5);
      FUN_143dde790(*plVar5);
      if (*(int *)(*plVar5 + 0x2c) == 0) {
        uVar4 = *(uint *)(*plVar5 + 0x110) & 0x80;
        goto LAB_1400652b5;
      }
      if (_DAT_149dd7c94 == _DAT_149dd7c90) {
        uVar4 = 1;
        if (1 < _DAT_149dd7c94) {
          uVar4 = _DAT_149dd7c94 >> 1;
        }
        FUN_145cda270(uVar4 + _DAT_149dd7c94);
      }
      uVar9 = (ulonglong)_DAT_149dd7c94;
      lVar10 = *plVar5;
      _DAT_149dd7c94 = _DAT_149dd7c94 + 1;
      *(longlong *)(_DAT_149dd7c98 + uVar9 * 8) = lVar10;
      uVar4 = *(uint *)(lVar10 + 0x110) & 0x80;
      _DAT_149dd7ca0 = _DAT_149dd7ca0 | (uVar4 != 0) + 3;
      uVar9 = *(ulonglong *)(lVar10 + 0x30);
      if (*(int *)(uVar9 + 0x6c) < 0) {
        uVar12 = (uVar9 >> 0x21 ^ uVar9) * -0xae502812aa7333;
        uVar11 = _DAT_14aae3870 - 1;
        lVar13 = (uVar12 >> 0x21 ^ uVar12) * -0x3b314601e57a13ad;
        uVar7 = (ulonglong)(((uint)((ulonglong)lVar13 >> 0x21) ^ (uint)lVar13) & uVar11);
        uVar12 = *(ulonglong *)(_DAT_14aae3878 + uVar7 * 0x10);
        uVar8 = uVar7;
        if (uVar12 != uVar9 && uVar12 != 0) {
          do {
            uVar8 = (ulonglong)((uint)(uVar8 * 0x10 + 0x10 >> 4) & uVar11);
            uVar2 = *(ulonglong *)(_DAT_14aae3878 + uVar8 * 0x10);
            if (uVar2 == 0) break;
          } while (uVar2 != uVar9);
        }
        if (_DAT_149dd7ca8 == 0 ||
            *(ulonglong *)(_DAT_14aae3878 + 8 + uVar8 * 0x10) < _DAT_149dd7ca8) {
          if (uVar12 != uVar9 && uVar12 != 0) {
            do {
              uVar7 = (ulonglong)((uint)(uVar7 * 0x10 + 0x10 >> 4) & uVar11);
              uVar12 = *(ulonglong *)(_DAT_14aae3878 + uVar7 * 0x10);
              if (uVar12 == 0) break;
            } while (uVar12 != uVar9);
          }
          uVar12 = *(ulonglong *)(_DAT_14aae3878 + 8 + uVar7 * 0x10);
          goto LAB_140065035;
        }
      }
      else {
        uVar12 = uVar9;
        if (_DAT_149dd7ca8 == 0 || uVar9 < _DAT_149dd7ca8) {
LAB_140065035:
          _DAT_149dd7ca8 = uVar12;
        }
      }
      lVar10 = (ulonglong)(*(int *)(lVar10 + 0x2c) - 1) * 0x88;
      uVar12 = uVar9 + lVar10;
      if (*(int *)(uVar9 + 0x6c + lVar10) < 0) {
        uVar9 = (uVar12 >> 0x21 ^ uVar12) * -0xae502812aa7333;
        uVar11 = _DAT_14aae3870 - 1;
        lVar10 = (uVar9 >> 0x21 ^ uVar9) * -0x3b314601e57a13ad;
        uVar8 = (ulonglong)(((uint)((ulonglong)lVar10 >> 0x21) ^ (uint)lVar10) & uVar11);
        uVar9 = *(ulonglong *)(_DAT_14aae3878 + uVar8 * 0x10);
        if ((uVar9 == 0) || (uVar9 == uVar12)) {
          uVar12 = *(ulonglong *)(_DAT_14aae3878 + 8 + uVar8 * 0x10);
          goto LAB_14006505c;
        }
        uVar9 = uVar8;
        do {
          uVar9 = (ulonglong)
                  ((uint)((uVar9 * 0x10 + _DAT_14aae3878 + 0x10) - _DAT_14aae3878 >> 4) & uVar11);
          uVar7 = *(ulonglong *)(_DAT_14aae3878 + uVar9 * 0x10);
          if (uVar7 == 0) break;
        } while (uVar7 != uVar12);
        if (*(ulonglong *)(_DAT_14aae3878 + 8 + uVar9 * 0x10) <= _DAT_149dd7cb0) goto LAB_1400652b5;
        do {
          uVar8 = (ulonglong)
                  ((uint)((uVar8 * 0x10 + _DAT_14aae3878 + 0x10) - _DAT_14aae3878 >> 4) & uVar11);
          uVar9 = *(ulonglong *)(_DAT_14aae3878 + uVar8 * 0x10);
          if (uVar9 == 0) break;
        } while (uVar9 != uVar12);
        uVar12 = *(ulonglong *)(_DAT_14aae3878 + 8 + uVar8 * 0x10);
      }
      else {
LAB_14006505c:
        if (uVar12 <= _DAT_149dd7cb0) goto LAB_1400652b5;
      }
      _DAT_149dd7cb0 = (longlong *)uVar12;
LAB_1400652b5:
      if (uVar4 == 0) {
        plVar5[1] = *param_3 + 1;
      }
      if ((4U - (uVar4 == 0) & 2) != 0) {
        plVar5[2] = param_3[1] + 1;
      }
      if (uVar4 != 0) {
        plVar5[3] = param_3[2] + 1;
      }
      plVar6 = (longlong *)0x3;
      LOCK();
      uVar4 = *(uint *)(plVar5 + 4);
      if (uVar4 == 3) {
        *(uint *)(plVar5 + 4) = 4;
      }
      else {
        plVar6 = (longlong *)(ulonglong)uVar4;
      }
      UNLOCK();
      if (param_1 == (undefined2 *)0x0) {
        return plVar6;
      }
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = 0x101;
      return plVar6;
    }
  }
  if ((int)plVar5[4] != 4) {
    plVar6 = (longlong *)0x5;
    LOCK();
    uVar4 = *(uint *)(plVar5 + 4);
    if (uVar4 == 5) {
      *(uint *)(plVar5 + 4) = 1;
    }
    else {
      plVar6 = (longlong *)(ulonglong)uVar4;
    }
    UNLOCK();
    if (uVar4 != 5) {
      return plVar6;
    }
    auVar15._0_12_ = ZEXT812(0);
    auVar15._12_4_ = 0;
    plVar5[3] = 0;
    *(undefined1 (*) [16])(plVar5 + 1) = auVar15;
    if ((longlong *)(ulonglong)_DAT_149dd7c94 == (longlong *)0x0) {
code_r0x000142994897:
      _DAT_149dd7ca8 = ZEXT416(0) << 0x20;
      _DAT_149dd7ca0 = 0;
    }
    else {
      plVar6 = (longlong *)0x0;
      do {
        if (*(longlong *)(_DAT_149dd7c98 + (longlong)plVar6 * 8) == *plVar5) {
          if (_DAT_149dd7c94 - 1 != (uint)plVar6) {
            *(undefined8 *)(_DAT_149dd7c98 + (longlong)plVar6 * 8) =
                 *(undefined8 *)(_DAT_149dd7c98 + (ulonglong)(_DAT_149dd7c94 - 1) * 8);
            plVar6 = (longlong *)(ulonglong)(_DAT_149dd7c94 - 1);
          }
          _DAT_149dd7c94 = (uint)plVar6;
          if (_DAT_149dd7c94 == 0) goto code_r0x000142994897;
          break;
        }
        plVar6 = (longlong *)((longlong)plVar6 + 1);
      } while ((longlong *)(ulonglong)_DAT_149dd7c94 != plVar6);
    }
    if (*(int *)((longlong)plVar5 + 0x2c) != 0) {
      lVar10 = 0x50;
      uVar9 = 0;
      do {
        uVar12 = plVar5[6] + -0x41 + lVar10;
        (**(code **)(uVar12 + 0x41))(uVar12 & 0xfffffffffffffff0);
        uVar12 = (ulonglong)*(uint *)((longlong)plVar5 + 0x2c);
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 0x68;
      } while (uVar9 < uVar12);
      lVar10 = plVar5[6];
      plVar6 = (longlong *)0x0;
      if (uVar12 == 0) goto code_r0x000142994911;
      lVar13 = 0;
      do {
        pcVar1 = *(code **)(lVar10 + 0x60 + lVar13);
        plVar6 = (longlong *)0x0;
        if (pcVar1 != (code *)0x0) {
          plVar6 = (longlong *)(*pcVar1)(lVar10 + 0xf + lVar13 & 0xfffffffffffffff0);
        }
        lVar13 = lVar13 + 0x68;
      } while (uVar12 * 0x68 - lVar13 != 0);
    }
    lVar10 = plVar5[6];
code_r0x000142994911:
    *(undefined4 *)((longlong)plVar5 + 0x2c) = 0;
    if (lVar10 != 0) {
      plVar6 = (longlong *)func_0x000144d9c130(lVar10);
    }
    plVar5[6] = 0;
    *(undefined4 *)(plVar5 + 5) = 0;
    return plVar6;
  }
  plVar6 = (longlong *)0x4;
  LOCK();
  uVar4 = *(uint *)(plVar5 + 4);
  if (uVar4 == 4) {
    *(uint *)(plVar5 + 4) = 3;
  }
  else {
    plVar6 = (longlong *)(ulonglong)uVar4;
  }
  UNLOCK();
  lVar10 = *plVar5;
  if (uVar4 == 4) {
    bVar14 = true;
    cVar3 = (char)*(undefined4 *)(lVar10 + 0x110);
    if ((cVar3 < '\0') || ((ulonglong)plVar5[1] <= *param_3)) {
LAB_1400650cb:
      if ((((cVar3 < '\0') + 3U & 2) != 0) && (param_3[1] < (ulonglong)plVar5[2])) {
        if (param_1 == (undefined2 *)0x0) goto LAB_1400651ef;
        bVar14 = false;
        *(undefined1 *)((longlong)param_1 + 1) = 1;
      }
      if ((cVar3 < '\0') && (param_3[2] < (ulonglong)plVar5[3])) {
        if (param_1 != (undefined2 *)0x0) {
          *(undefined1 *)(param_1 + 1) = 1;
        }
      }
      else if (bVar14) {
        plVar6 = (longlong *)0x3;
        LOCK();
        uVar4 = *(uint *)(plVar5 + 4);
        if (uVar4 == 3) {
          *(uint *)(plVar5 + 4) = 0;
        }
        else {
          plVar6 = (longlong *)(ulonglong)uVar4;
        }
        UNLOCK();
        if (*(int *)((longlong)plVar5 + 0x2c) != 0) {
          lVar10 = 0x50;
          uVar9 = 0;
          do {
            uVar12 = plVar5[6] + -0x41 + lVar10;
            (**(code **)(uVar12 + 0x41))(uVar12 & 0xfffffffffffffff0);
            uVar12 = (ulonglong)*(uint *)((longlong)plVar5 + 0x2c);
            uVar9 = uVar9 + 1;
            lVar10 = lVar10 + 0x68;
          } while (uVar9 < uVar12);
          lVar10 = plVar5[6];
          plVar6 = (longlong *)0x0;
          if (uVar12 == 0) goto LAB_1400651c7;
          lVar13 = 0;
          do {
            pcVar1 = *(code **)(lVar10 + 0x60 + lVar13);
            plVar6 = (longlong *)0x0;
            if (pcVar1 != (code *)0x0) {
              plVar6 = (longlong *)(*pcVar1)(lVar10 + 0xf + lVar13 & 0xfffffffffffffff0);
            }
            lVar13 = lVar13 + 0x68;
          } while (uVar12 * 0x68 - lVar13 != 0);
        }
        lVar10 = plVar5[6];
LAB_1400651c7:
        *(undefined4 *)((longlong)plVar5 + 0x2c) = 0;
        if (lVar10 != 0) {
          plVar6 = (longlong *)func_0x000144d9c130(lVar10);
        }
        plVar5[6] = 0;
        *(undefined4 *)(plVar5 + 5) = 0;
        return plVar6;
      }
    }
    else if (param_1 != (undefined2 *)0x0) {
      bVar14 = false;
      *(undefined1 *)param_1 = 1;
      goto LAB_1400650cb;
    }
LAB_1400651ef:
    plVar6 = (longlong *)0x3;
    LOCK();
    uVar4 = *(uint *)(plVar5 + 4);
    if (uVar4 == 3) {
      *(uint *)(plVar5 + 4) = 4;
    }
    else {
      plVar6 = (longlong *)(ulonglong)uVar4;
    }
    UNLOCK();
  }
  if (*(int *)(lVar10 + 0x2c) == 0) {
    return plVar6;
  }
  if (_DAT_149dd7c94 == _DAT_149dd7c90) {
    uVar4 = 1;
    if (1 < _DAT_149dd7c94) {
      uVar4 = _DAT_149dd7c94 >> 1;
    }
    FUN_145cda270(uVar4 + _DAT_149dd7c94);
  }
  uVar9 = (ulonglong)_DAT_149dd7c94;
  lVar10 = *plVar5;
  _DAT_149dd7c94 = _DAT_149dd7c94 + 1;
  *(longlong *)(_DAT_149dd7c98 + uVar9 * 8) = lVar10;
  _DAT_149dd7ca0 = _DAT_149dd7ca0 | (*(char *)(lVar10 + 0x110) < '\0') + 3;
  uVar9 = *(ulonglong *)(lVar10 + 0x30);
  if (*(int *)(uVar9 + 0x6c) < 0) {
    uVar12 = (uVar9 >> 0x21 ^ uVar9) * -0xae502812aa7333;
    uVar4 = _DAT_14aae3870 - 1;
    lVar13 = (uVar12 >> 0x21 ^ uVar12) * -0x3b314601e57a13ad;
    uVar7 = (ulonglong)(((uint)((ulonglong)lVar13 >> 0x21) ^ (uint)lVar13) & uVar4);
    uVar12 = *(ulonglong *)(_DAT_14aae3878 + uVar7 * 0x10);
    uVar8 = uVar7;
    if (uVar12 != uVar9 && uVar12 != 0) {
      do {
        uVar8 = (ulonglong)((uint)(uVar8 * 0x10 + 0x10 >> 4) & uVar4);
        uVar2 = *(ulonglong *)(_DAT_14aae3878 + uVar8 * 0x10);
        if (uVar2 == 0) break;
      } while (uVar2 != uVar9);
    }
    if (_DAT_149dd7ca8 == 0 || *(ulonglong *)(_DAT_14aae3878 + 8 + uVar8 * 0x10) < _DAT_149dd7ca8) {
      if (uVar12 != uVar9 && uVar12 != 0) {
        do {
          uVar7 = (ulonglong)((uint)(uVar7 * 0x10 + 0x10 >> 4) & uVar4);
          uVar12 = *(ulonglong *)(_DAT_14aae3878 + uVar7 * 0x10);
          if (uVar12 == 0) break;
        } while (uVar12 != uVar9);
      }
      uVar12 = *(ulonglong *)(_DAT_14aae3878 + 8 + uVar7 * 0x10);
      goto LAB_140065272;
    }
  }
  else {
    uVar12 = uVar9;
    if (_DAT_149dd7ca8 == 0 || uVar9 < _DAT_149dd7ca8) {
LAB_140065272:
      _DAT_149dd7ca8 = uVar12;
    }
  }
  lVar10 = (ulonglong)(*(int *)(lVar10 + 0x2c) - 1) * 0x88;
  plVar5 = (longlong *)(uVar9 + lVar10);
  if (*(int *)(uVar9 + 0x6c + lVar10) < 0) {
    uVar9 = ((ulonglong)plVar5 >> 0x21 ^ (ulonglong)plVar5) * -0xae502812aa7333;
    uVar4 = _DAT_14aae3870 - 1;
    lVar10 = (uVar9 >> 0x21 ^ uVar9) * -0x3b314601e57a13ad;
    uVar9 = (ulonglong)(((uint)((ulonglong)lVar10 >> 0x21) ^ (uint)lVar10) & uVar4);
    plVar6 = *(longlong **)(_DAT_14aae3878 + uVar9 * 0x10);
    if ((plVar6 != (longlong *)0x0) && (plVar6 != plVar5)) {
      uVar12 = uVar9;
      do {
        uVar12 = (ulonglong)
                 ((uint)((uVar12 * 0x10 + _DAT_14aae3878 + 0x10) - _DAT_14aae3878 >> 4) & uVar4);
        plVar6 = *(longlong **)(_DAT_14aae3878 + uVar12 * 0x10);
        if (plVar6 == (longlong *)0x0) break;
      } while (plVar6 != plVar5);
      if (*(longlong **)(_DAT_14aae3878 + 8 + uVar12 * 0x10) <= _DAT_149dd7cb0) {
        return plVar5;
      }
      do {
        uVar9 = (ulonglong)
                ((uint)((uVar9 * 0x10 + _DAT_14aae3878 + 0x10) - _DAT_14aae3878 >> 4) & uVar4);
        plVar6 = *(longlong **)(_DAT_14aae3878 + uVar9 * 0x10);
        if (plVar6 == (longlong *)0x0) break;
      } while (plVar6 != plVar5);
      plVar5 = *(longlong **)(_DAT_14aae3878 + 8 + uVar9 * 0x10);
      goto LAB_1400652a1;
    }
    plVar5 = *(longlong **)(_DAT_14aae3878 + 8 + uVar9 * 0x10);
  }
  if (plVar5 <= _DAT_149dd7cb0) {
    return plVar5;
  }
LAB_1400652a1:
  _DAT_149dd7cb0 = plVar5;
  return plVar5;
}

