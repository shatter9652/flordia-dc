// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140188ef0  size: 397 bytes
// Name:    FUN_140188ef0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_142363360, FUN_1400062d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140188ef0(char *param_1)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  longlong lStack_30;
  
  if (*param_1 == '\x01') {
    *param_1 = '\0';
    FUN_142363360(&DAT_1499fd078);
  }
  if (param_1[1] == '\x01') {
    param_1[1] = '\0';
    DAT_1499fd098 = DAT_1499fd098 + -1;
    if (DAT_1499fd098 == '\0') {
      _DAT_1499fd090 = 0xffffffffffffffff;
      uVar6 = _DAT_1499fd078;
      do {
        LOCK();
        bVar7 = uVar6 != _DAT_1499fd078;
        uVar4 = uVar6 & 0xfeffffff;
        if (bVar7) {
          uVar6 = _DAT_1499fd078;
          uVar4 = _DAT_1499fd078;
        }
        _DAT_1499fd078 = uVar4;
        UNLOCK();
      } while (bVar7);
      if ((uVar6 & 0xff0000) == 0) {
        uVar4 = _DAT_1499fd078;
        if ((uVar6 & 0xff00) != 0) {
          do {
            LOCK();
            bVar7 = uVar4 != _DAT_1499fd078;
            uVar6 = uVar4 & 0xffff00ff;
            if (bVar7) {
              uVar4 = _DAT_1499fd078;
              uVar6 = _DAT_1499fd078;
            }
            _DAT_1499fd078 = uVar6;
            UNLOCK();
          } while (bVar7);
          uVar6 = uVar4 >> 8 & 0xff;
          if (uVar6 != 0) {
            lStack_30 = _DAT_1499fd080;
            do {
              while (-1 < lStack_30) {
                LOCK();
                lVar5 = lStack_30;
                lVar2 = lStack_30 + ((ulonglong)uVar6 << 0x20);
                if (lStack_30 != _DAT_1499fd080) {
                  lVar5 = _DAT_1499fd080;
                  lVar2 = _DAT_1499fd080;
                }
                _DAT_1499fd080 = lVar2;
                UNLOCK();
                bVar7 = lStack_30 == lVar5;
                lStack_30 = lVar5;
                if (bVar7) {
                  return;
                }
              }
              cVar3 = FUN_1400062d0(&DAT_1499fd080,uVar6,&lStack_30);
            } while (cVar3 == '\0');
          }
        }
      }
      else {
        uVar6 = uVar6 & 0xfeffffff;
        do {
          if ((uVar6 & 0xff0000) == 0) {
            return;
          }
          LOCK();
          bVar7 = uVar6 != _DAT_1499fd078;
          uVar4 = uVar6;
          uVar1 = uVar6 - 0x10000;
          if (bVar7) {
            uVar4 = _DAT_1499fd078;
            uVar1 = _DAT_1499fd078;
          }
          _DAT_1499fd078 = uVar1;
          UNLOCK();
          lStack_30 = _DAT_1499fd088;
          if (!bVar7) {
            do {
              while (lStack_30 < 0) {
                cVar3 = FUN_1400062d0(&DAT_1499fd088,1,&lStack_30);
                uVar4 = uVar6;
                if (cVar3 != '\0') goto LAB_140188fdf;
              }
              LOCK();
              lVar5 = lStack_30;
              lVar2 = lStack_30 + 0x100000000;
              if (lStack_30 != _DAT_1499fd088) {
                lVar5 = _DAT_1499fd088;
                lVar2 = _DAT_1499fd088;
              }
              _DAT_1499fd088 = lVar2;
              UNLOCK();
              bVar8 = lStack_30 != lVar5;
              uVar4 = uVar6;
              lStack_30 = lVar5;
            } while (bVar8);
          }
LAB_140188fdf:
          uVar6 = uVar4;
        } while (bVar7);
      }
    }
  }
  return;
}

