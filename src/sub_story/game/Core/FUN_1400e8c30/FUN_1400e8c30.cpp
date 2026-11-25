// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400e8c30  size: 825 bytes
// Name:    FUN_1400e8c30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1455ae050, FUN_1400062d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400e8c30(int *param_1)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  longlong lStack_30;
  
  if ((char)param_1[1] == '\x01') {
    uVar5 = param_1[2];
    if ((uVar5 & 1) != 0) {
      FUN_1455ae050(0);
      uVar5 = param_1[2];
    }
    if ((uVar5 & 2) != 0) {
      FUN_1455ae050(1);
      uVar5 = param_1[2];
    }
    if ((uVar5 & 4) != 0) {
      FUN_1455ae050(2);
      uVar5 = param_1[2];
    }
    if ((uVar5 & 8) != 0) {
      FUN_1455ae050(3);
      uVar5 = param_1[2];
    }
    if ((uVar5 & 0x10) != 0) {
      FUN_1455ae050(4);
      uVar5 = param_1[2];
    }
    if ((uVar5 & 0x20) != 0) {
      FUN_1455ae050(5);
      uVar5 = param_1[2];
    }
    if ((uVar5 & 0x40) != 0) {
      FUN_1455ae050(6);
      uVar5 = param_1[2];
    }
    if ((char)uVar5 < '\0') {
      FUN_1455ae050(7);
      uVar5 = param_1[2];
    }
    if ((uVar5 >> 8 & 1) != 0) {
      FUN_1455ae050(8);
    }
    uVar5 = _DAT_14764b248;
    if (*param_1 == 0) {
      LOCK();
      uVar5 = _DAT_14764b248 - 1;
      UNLOCK();
      uVar6 = _DAT_14764b248 - 1;
      _DAT_14764b248 = uVar5;
      if ((char)uVar6 == '\0') {
        if ((uVar6 & 0xff0000) == 0) {
          if ((uVar6 & 0xff00) != 0) {
            do {
              LOCK();
              bVar7 = uVar5 != _DAT_14764b248;
              uVar6 = uVar5 & 0xffff00ff;
              if (bVar7) {
                uVar5 = _DAT_14764b248;
                uVar6 = _DAT_14764b248;
              }
              _DAT_14764b248 = uVar6;
              UNLOCK();
            } while (bVar7);
            uVar5 = uVar5 >> 8 & 0xff;
            if (uVar5 != 0) {
              lStack_30 = _DAT_14764b250;
              do {
                while (-1 < lStack_30) {
                  LOCK();
                  lVar4 = lStack_30;
                  lVar2 = lStack_30 + ((ulonglong)uVar5 << 0x20);
                  if (lStack_30 != _DAT_14764b250) {
                    lVar4 = _DAT_14764b250;
                    lVar2 = _DAT_14764b250;
                  }
                  _DAT_14764b250 = lVar2;
                  UNLOCK();
                  bVar7 = lStack_30 == lVar4;
                  lStack_30 = lVar4;
                  if (bVar7) {
                    return;
                  }
                }
                cVar3 = FUN_1400062d0(&DAT_14764b250,uVar5,&lStack_30);
              } while (cVar3 == '\0');
            }
          }
        }
        else {
          do {
            if ((uVar6 & 0xff0000) == 0) {
              return;
            }
            LOCK();
            bVar7 = uVar6 != _DAT_14764b248;
            uVar5 = uVar6;
            uVar1 = uVar6 - 0x10000;
            if (bVar7) {
              uVar5 = _DAT_14764b248;
              uVar1 = _DAT_14764b248;
            }
            _DAT_14764b248 = uVar1;
            UNLOCK();
            lStack_30 = _DAT_14764b258;
            if (!bVar7) {
              do {
                while (lStack_30 < 0) {
                  cVar3 = FUN_1400062d0(&DAT_14764b258,1,&lStack_30);
                  uVar5 = uVar6;
                  if (cVar3 != '\0') goto LAB_1400e8e3c;
                }
                LOCK();
                lVar4 = lStack_30;
                lVar2 = lStack_30 + 0x100000000;
                if (lStack_30 != _DAT_14764b258) {
                  lVar4 = _DAT_14764b258;
                  lVar2 = _DAT_14764b258;
                }
                _DAT_14764b258 = lVar2;
                UNLOCK();
                bVar8 = lStack_30 != lVar4;
                uVar5 = uVar6;
                lStack_30 = lVar4;
              } while (bVar8);
            }
LAB_1400e8e3c:
            uVar6 = uVar5;
          } while (bVar7);
        }
      }
    }
    else {
      do {
        LOCK();
        bVar7 = uVar5 != _DAT_14764b248;
        uVar6 = uVar5 & 0xfeffffff;
        if (bVar7) {
          uVar5 = _DAT_14764b248;
          uVar6 = _DAT_14764b248;
        }
        _DAT_14764b248 = uVar6;
        UNLOCK();
      } while (bVar7);
      if ((uVar5 & 0xff0000) == 0) {
        uVar6 = _DAT_14764b248;
        if ((uVar5 & 0xff00) != 0) {
          do {
            LOCK();
            bVar7 = uVar6 != _DAT_14764b248;
            uVar5 = uVar6 & 0xffff00ff;
            if (bVar7) {
              uVar6 = _DAT_14764b248;
              uVar5 = _DAT_14764b248;
            }
            _DAT_14764b248 = uVar5;
            UNLOCK();
          } while (bVar7);
          uVar5 = uVar6 >> 8 & 0xff;
          if (uVar5 != 0) {
            lStack_30 = _DAT_14764b250;
            do {
              while (-1 < lStack_30) {
                LOCK();
                lVar4 = lStack_30;
                lVar2 = lStack_30 + ((ulonglong)uVar5 << 0x20);
                if (lStack_30 != _DAT_14764b250) {
                  lVar4 = _DAT_14764b250;
                  lVar2 = _DAT_14764b250;
                }
                _DAT_14764b250 = lVar2;
                UNLOCK();
                bVar7 = lStack_30 == lVar4;
                lStack_30 = lVar4;
                if (bVar7) {
                  return;
                }
              }
              cVar3 = FUN_1400062d0(&DAT_14764b250,uVar5,&lStack_30);
            } while (cVar3 == '\0');
          }
        }
      }
      else {
        uVar5 = uVar5 & 0xfeffffff;
        do {
          if ((uVar5 & 0xff0000) == 0) {
            return;
          }
          LOCK();
          bVar7 = uVar5 != _DAT_14764b248;
          uVar6 = uVar5;
          uVar1 = uVar5 - 0x10000;
          if (bVar7) {
            uVar6 = _DAT_14764b248;
            uVar1 = _DAT_14764b248;
          }
          _DAT_14764b248 = uVar1;
          UNLOCK();
          lStack_30 = _DAT_14764b258;
          if (!bVar7) {
            do {
              while (lStack_30 < 0) {
                cVar3 = FUN_1400062d0(&DAT_14764b258,1,&lStack_30);
                uVar6 = uVar5;
                if (cVar3 != '\0') goto LAB_1400e8d92;
              }
              LOCK();
              lVar4 = lStack_30;
              lVar2 = lStack_30 + 0x100000000;
              if (lStack_30 != _DAT_14764b258) {
                lVar4 = _DAT_14764b258;
                lVar2 = _DAT_14764b258;
              }
              _DAT_14764b258 = lVar2;
              UNLOCK();
              bVar8 = lStack_30 != lVar4;
              uVar6 = uVar5;
              lStack_30 = lVar4;
            } while (bVar8);
          }
LAB_1400e8d92:
          uVar5 = uVar6;
        } while (bVar7);
      }
    }
  }
  return;
}

