// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140133500  size: 711 bytes
// Name:    FUN_140133500
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400062d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140133500(ulonglong param_1,ulonglong param_2)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  longlong unaff_GS_OFFSET;
  bool bVar8;
  bool bVar9;
  longlong lStack_30;
  
  if ((param_1 & 1) != 0) {
    uVar7 = _DAT_147c2a7f0;
    if ((param_2 & 1) == 0) {
      do {
        LOCK();
        bVar8 = uVar7 != _DAT_147c2a7f0;
        uVar6 = uVar7 & 0xfeffffff;
        if (bVar8) {
          uVar7 = _DAT_147c2a7f0;
          uVar6 = _DAT_147c2a7f0;
        }
        _DAT_147c2a7f0 = uVar6;
        UNLOCK();
      } while (bVar8);
      if ((uVar7 & 0xff0000) == 0) {
        uVar6 = _DAT_147c2a7f0;
        if ((uVar7 & 0xff00) != 0) {
          do {
            LOCK();
            bVar8 = uVar6 != _DAT_147c2a7f0;
            uVar7 = uVar6 & 0xffff00ff;
            if (bVar8) {
              uVar6 = _DAT_147c2a7f0;
              uVar7 = _DAT_147c2a7f0;
            }
            _DAT_147c2a7f0 = uVar7;
            UNLOCK();
          } while (bVar8);
          uVar7 = uVar6 >> 8 & 0xff;
          if (uVar7 != 0) {
            lStack_30 = _DAT_147c2a7f8;
            do {
              while (-1 < lStack_30) {
                LOCK();
                lVar4 = lStack_30;
                lVar2 = lStack_30 + ((ulonglong)uVar7 << 0x20);
                if (lStack_30 != _DAT_147c2a7f8) {
                  lVar4 = _DAT_147c2a7f8;
                  lVar2 = _DAT_147c2a7f8;
                }
                _DAT_147c2a7f8 = lVar2;
                UNLOCK();
                bVar8 = lStack_30 == lVar4;
                lStack_30 = lVar4;
                if (bVar8) goto LAB_140133712;
              }
              cVar3 = FUN_1400062d0(&DAT_147c2a7f8,uVar7,&lStack_30);
            } while (cVar3 == '\0');
          }
        }
      }
      else {
        uVar7 = uVar7 & 0xfeffffff;
        do {
          if ((uVar7 & 0xff0000) == 0) break;
          LOCK();
          bVar8 = uVar7 != _DAT_147c2a7f0;
          uVar6 = uVar7;
          uVar1 = uVar7 - 0x10000;
          if (bVar8) {
            uVar6 = _DAT_147c2a7f0;
            uVar1 = _DAT_147c2a7f0;
          }
          _DAT_147c2a7f0 = uVar1;
          UNLOCK();
          lStack_30 = _DAT_147c2a800;
          if (!bVar8) {
            do {
              while (-1 < lStack_30) {
                LOCK();
                lVar4 = lStack_30;
                lVar2 = lStack_30 + 0x100000000;
                if (lStack_30 != _DAT_147c2a800) {
                  lVar4 = _DAT_147c2a800;
                  lVar2 = _DAT_147c2a800;
                }
                _DAT_147c2a800 = lVar2;
                UNLOCK();
                bVar9 = lStack_30 == lVar4;
                uVar6 = uVar7;
                lStack_30 = lVar4;
                if (bVar9) goto LAB_1401335f2;
              }
              cVar3 = FUN_1400062d0(&DAT_147c2a800,1,&lStack_30);
              uVar6 = uVar7;
            } while (cVar3 == '\0');
          }
LAB_1401335f2:
          uVar7 = uVar6;
        } while (bVar8);
      }
LAB_140133712:
      puVar5 = (undefined1 *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x889);
    }
    else {
      LOCK();
      uVar7 = _DAT_147c2a7f0 - 1;
      UNLOCK();
      uVar6 = _DAT_147c2a7f0 - 1;
      _DAT_147c2a7f0 = uVar7;
      if ((char)uVar6 == '\0') {
        if ((uVar6 & 0xff0000) == 0) {
          if ((uVar6 & 0xff00) != 0) {
            do {
              LOCK();
              bVar8 = uVar7 != _DAT_147c2a7f0;
              uVar6 = uVar7 & 0xffff00ff;
              if (bVar8) {
                uVar7 = _DAT_147c2a7f0;
                uVar6 = _DAT_147c2a7f0;
              }
              _DAT_147c2a7f0 = uVar6;
              UNLOCK();
            } while (bVar8);
            uVar7 = uVar7 >> 8 & 0xff;
            if (uVar7 != 0) {
              lStack_30 = _DAT_147c2a7f8;
              do {
                while (-1 < lStack_30) {
                  LOCK();
                  lVar4 = lStack_30;
                  lVar2 = lStack_30 + ((ulonglong)uVar7 << 0x20);
                  if (lStack_30 != _DAT_147c2a7f8) {
                    lVar4 = _DAT_147c2a7f8;
                    lVar2 = _DAT_147c2a7f8;
                  }
                  _DAT_147c2a7f8 = lVar2;
                  UNLOCK();
                  bVar8 = lStack_30 == lVar4;
                  lStack_30 = lVar4;
                  if (bVar8) goto LAB_140133530;
                }
                cVar3 = FUN_1400062d0(&DAT_147c2a7f8,uVar7,&lStack_30);
              } while (cVar3 == '\0');
            }
          }
        }
        else {
          do {
            if ((uVar6 & 0xff0000) == 0) break;
            LOCK();
            bVar8 = uVar6 != _DAT_147c2a7f0;
            uVar7 = uVar6;
            uVar1 = uVar6 - 0x10000;
            if (bVar8) {
              uVar7 = _DAT_147c2a7f0;
              uVar1 = _DAT_147c2a7f0;
            }
            _DAT_147c2a7f0 = uVar1;
            UNLOCK();
            lStack_30 = _DAT_147c2a800;
            if (!bVar8) {
              do {
                while (-1 < lStack_30) {
                  LOCK();
                  lVar4 = lStack_30;
                  lVar2 = lStack_30 + 0x100000000;
                  if (lStack_30 != _DAT_147c2a800) {
                    lVar4 = _DAT_147c2a800;
                    lVar2 = _DAT_147c2a800;
                  }
                  _DAT_147c2a800 = lVar2;
                  UNLOCK();
                  bVar9 = lStack_30 == lVar4;
                  uVar7 = uVar6;
                  lStack_30 = lVar4;
                  if (bVar9) goto LAB_140133684;
                }
                cVar3 = FUN_1400062d0(&DAT_147c2a800,1,&lStack_30);
                uVar7 = uVar6;
              } while (cVar3 == '\0');
            }
LAB_140133684:
            uVar6 = uVar7;
          } while (bVar8);
        }
      }
LAB_140133530:
      puVar5 = (undefined1 *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x888);
    }
    *puVar5 = 0;
  }
  return;
}

