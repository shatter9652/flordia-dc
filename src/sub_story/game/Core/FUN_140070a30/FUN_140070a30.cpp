// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140070a30  size: 394 bytes
// Name:    FUN_140070a30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_143de2120
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140070a30(ulonglong *param_1,ulonglong *param_2,ulonglong param_3,char param_4)

{
  code *pcVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  
  plVar2 = _DAT_1498c1998;
  uVar6 = _DAT_1498c1990;
  if (param_3 != 0) {
    uVar7 = param_3 + 7;
    uVar11 = 0;
    uVar12 = 0;
    uVar8 = 0;
    uVar4 = uVar7 >> 3;
    uVar9 = 0xffffffffffffffff;
    do {
      uVar11 = uVar11 + ((param_2[uVar12 >> 6] >> (uVar12 & 0x3f) & 1) != 0);
      uVar10 = uVar9;
      if (uVar9 == 0xffffffffffffffff) {
        uVar10 = uVar12;
      }
      uVar3 = uVar12;
      if ((param_2[uVar12 >> 6] >> (uVar12 & 0x3f) & 1) == 0) {
        uVar10 = uVar9;
        uVar3 = uVar8;
      }
      uVar8 = uVar3;
      uVar12 = uVar12 + 1;
      uVar9 = uVar10;
    } while (uVar4 != uVar12);
    if (uVar11 != 0) {
      if (uVar11 == uVar4) {
        uVar6 = uVar7 & 0xfffffffffffffff8 | 2;
      }
      else if ((param_3 < 0xff9) && (uVar8 < 0x33)) {
        uVar6 = (ulonglong)((uint)uVar7 & 0xff8) + 3 + (*param_2 & 0x7ffffffffffff) * 0x1000;
      }
      else if (param_3 < 0x2001 && param_4 == '\0') {
        lVar5 = FUN_143de2120(param_2,uVar4 + 0x3f >> 6,uVar10,uVar8);
        uVar6 = lVar5 << 0x24 | uVar8 << 0x1a | uVar10 << 0x10 | (ulonglong)((uint)uVar7 & 0x3ff8) |
                4;
      }
      else {
        if (param_4 != '\0') {
          if (_DAT_1498c1990 != 0) {
            uVar7 = 0;
            plVar13 = _DAT_1498c1998;
            do {
              LOCK();
              lVar5 = *plVar13;
              if (lVar5 == 0) {
                *plVar13 = (longlong)param_2;
              }
              UNLOCK();
              if (lVar5 == 0) {
                plVar2[uVar7 * 2 + 1] = param_3;
                if (uVar7 < uVar6) {
                  uVar6 = uVar7 << 0x36 | uVar8 << 0x17 | uVar10 << 3 | 7;
                  goto LAB_140070aa8;
                }
                break;
              }
              uVar7 = uVar7 + 1;
              plVar13 = plVar13 + 2;
            } while (uVar6 != uVar7);
          }
          pcVar1 = (code *)swi(3);
          (*pcVar1)(param_1);
          return;
        }
        uVar6 = param_3 * 8 + 6;
      }
      goto LAB_140070aa8;
    }
  }
  uVar6 = param_3 * 8 + 1;
LAB_140070aa8:
  *param_1 = uVar6;
  return;
}

