// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140188d40  size: 431 bytes
// Name:    FUN_140188d40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f16a90, FUN_144f16960, FUN_1400063f0, FUN_140006180, FUN_144f16a00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140188d40(char *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong unaff_GS_OFFSET;
  bool bVar11;
  ulonglong uStack_38;
  
  lVar2 = _DAT_1499fd090;
  if (*param_1 == '\0') {
    if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) == '\x01') {
      lVar8 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1438);
    }
    else {
      lVar1 = **(longlong **)(unaff_GS_OFFSET + 0x58);
      *(undefined1 *)(lVar1 + 0x1440) = 1;
      lVar8 = FUN_1400063f0();
      *(longlong *)(lVar1 + 0x1438) = lVar8;
    }
    if (lVar8 == lVar2) {
      if (param_1[1] == '\0') {
        if (*param_1 == '\x01') {
          FUN_140188ef0(param_1);
        }
        FUN_1400fd6e0(&DAT_1499fd078);
        param_1[1] = '\x01';
      }
      return;
    }
    cVar4 = FUN_144f16960(&DAT_1499fd078);
    if (cVar4 == '\0') {
      uVar5 = _DAT_1499fd078;
LAB_140188dcf:
      do {
        uVar6 = uVar5;
        if ((uVar6 & 0x1ff0000) != 0) {
          LOCK();
          bVar11 = uVar6 == _DAT_1499fd078;
          uVar5 = uVar6;
          uVar10 = uVar6 + 0x100;
          if (!bVar11) {
            uVar5 = _DAT_1499fd078;
            uVar10 = _DAT_1499fd078;
          }
          _DAT_1499fd078 = uVar10;
          UNLOCK();
          if (bVar11) {
            uVar10 = (uint)(_DAT_1499fd080 >> 7) & 0xffffff;
            uVar9 = _DAT_1499fd080;
            uVar7 = _DAT_1499fd080;
            if ((_DAT_1499fd080 >> 7 & 0xffffff) != 0) {
              do {
                uVar7 = _DAT_1499fd080;
                if (0xffffffff < (longlong)uVar9) {
                  LOCK();
                  uVar7 = uVar9;
                  uVar3 = uVar9 - 0x100000000;
                  if (uVar9 != _DAT_1499fd080) {
                    uVar7 = _DAT_1499fd080;
                    uVar3 = _DAT_1499fd080;
                  }
                  _DAT_1499fd080 = uVar3;
                  UNLOCK();
                  uVar5 = uVar6;
                  if (uVar9 == uVar7) goto LAB_140188dcf;
                }
                uVar10 = uVar10 - 1;
                uVar9 = uVar7;
                uVar7 = _DAT_1499fd080;
              } while (uVar10 != 0);
            }
            do {
              while (uStack_38 = uVar7, 0xffffffff < (longlong)uStack_38) {
                LOCK();
                uVar7 = uStack_38;
                uVar9 = uStack_38 - 0x100000000;
                if (uStack_38 != _DAT_1499fd080) {
                  uVar7 = _DAT_1499fd080;
                  uVar9 = _DAT_1499fd080;
                }
                _DAT_1499fd080 = uVar9;
                UNLOCK();
                uVar5 = uVar6;
                if (uStack_38 == uVar7) goto LAB_140188dcf;
              }
              cVar4 = FUN_140006180(&DAT_1499fd080,1,&uStack_38);
              uVar5 = uVar6;
              uVar7 = uStack_38;
            } while (cVar4 == '\0');
          }
          goto LAB_140188dcf;
        }
        LOCK();
        bVar11 = uVar6 != _DAT_1499fd078;
        uVar5 = uVar6 + 1;
        if (bVar11) {
          uVar6 = _DAT_1499fd078;
          uVar5 = _DAT_1499fd078;
        }
        _DAT_1499fd078 = uVar5;
        UNLOCK();
        uVar5 = uVar6;
      } while (bVar11);
      FUN_144f16a90(&DAT_1499fd078);
    }
    FUN_144f16a00(&DAT_1499fd078);
    *param_1 = '\x01';
  }
  return;
}

