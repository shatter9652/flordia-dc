// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400e8f70  size: 1447 bytes
// Name:    FUN_1400e8f70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1455ae0a0, FUN_1400062d0, FUN_145560bb0, FUN_140006180
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_1400e8f70(uint *param_1,uint param_2)

{
  ulonglong uVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong unaff_GS_OFFSET;
  bool bVar10;
  ulonglong uStack_50;
  uint *puStack_48;
  
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  if (*(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1448) == 0) {
    param_1[2] = 0;
  }
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  if ((*(uint *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x7a8 + (ulonglong)(param_2 >> 5) * 4) >>
       (param_2 & 0x1f) & 1) == 0) {
    puStack_48 = param_1;
LAB_1400e9037:
    uVar8 = _DAT_14764b248;
    if (param_2 == 0) {
LAB_1400e9151:
      do {
        uVar9 = uVar8;
        if ((uVar9 & 0x1ff0000) != 0) {
          LOCK();
          bVar10 = uVar9 == _DAT_14764b248;
          uVar8 = uVar9;
          uVar7 = uVar9 + 0x100;
          if (!bVar10) {
            uVar8 = _DAT_14764b248;
            uVar7 = _DAT_14764b248;
          }
          _DAT_14764b248 = uVar7;
          UNLOCK();
          if (bVar10) {
            uVar7 = (uint)(_DAT_14764b250 >> 7) & 0xffffff;
            uVar6 = _DAT_14764b250;
            uVar4 = _DAT_14764b250;
            if ((_DAT_14764b250 >> 7 & 0xffffff) != 0) {
              do {
                uVar4 = _DAT_14764b250;
                if (0xffffffff < (longlong)uVar6) {
                  LOCK();
                  uVar4 = uVar6;
                  uVar1 = uVar6 - 0x100000000;
                  if (uVar6 != _DAT_14764b250) {
                    uVar4 = _DAT_14764b250;
                    uVar1 = _DAT_14764b250;
                  }
                  _DAT_14764b250 = uVar1;
                  UNLOCK();
                  uVar8 = uVar9;
                  if (uVar6 == uVar4) goto LAB_1400e9151;
                }
                uVar7 = uVar7 - 1;
                uVar6 = uVar4;
                uVar4 = _DAT_14764b250;
              } while (uVar7 != 0);
            }
            do {
              while (uStack_50 = uVar4, 0xffffffff < (longlong)uStack_50) {
                LOCK();
                uVar4 = uStack_50;
                uVar6 = uStack_50 - 0x100000000;
                if (uStack_50 != _DAT_14764b250) {
                  uVar4 = _DAT_14764b250;
                  uVar6 = _DAT_14764b250;
                }
                _DAT_14764b250 = uVar6;
                UNLOCK();
                uVar8 = uVar9;
                if (uStack_50 == uVar4) goto LAB_1400e9151;
              }
              cVar2 = FUN_140006180(&DAT_14764b250,1,&uStack_50);
              uVar8 = uVar9;
              uVar4 = uStack_50;
            } while (cVar2 == '\0');
          }
          goto LAB_1400e9151;
        }
        LOCK();
        bVar10 = uVar9 != _DAT_14764b248;
        uVar8 = uVar9 + 1;
        if (bVar10) {
          uVar9 = _DAT_14764b248;
          uVar8 = _DAT_14764b248;
        }
        _DAT_14764b248 = uVar8;
        UNLOCK();
        uVar8 = uVar9;
      } while (bVar10);
    }
    else {
LAB_1400e9045:
      do {
        uVar9 = uVar8;
        if ((uVar9 & 0x10000ff) != 0) {
          LOCK();
          bVar10 = uVar9 == _DAT_14764b248;
          uVar8 = uVar9;
          uVar7 = uVar9 + 0x10000;
          if (!bVar10) {
            uVar8 = _DAT_14764b248;
            uVar7 = _DAT_14764b248;
          }
          _DAT_14764b248 = uVar7;
          UNLOCK();
          if (bVar10) {
            uVar7 = (uint)(_DAT_14764b258 >> 7) & 0xffffff;
            uVar6 = _DAT_14764b258;
            uVar4 = _DAT_14764b258;
            if ((_DAT_14764b258 >> 7 & 0xffffff) != 0) {
              do {
                uVar4 = _DAT_14764b258;
                if (0xffffffff < (longlong)uVar6) {
                  LOCK();
                  uVar4 = uVar6;
                  uVar1 = uVar6 - 0x100000000;
                  if (uVar6 != _DAT_14764b258) {
                    uVar4 = _DAT_14764b258;
                    uVar1 = _DAT_14764b258;
                  }
                  _DAT_14764b258 = uVar1;
                  UNLOCK();
                  uVar8 = uVar9;
                  if (uVar6 == uVar4) goto LAB_1400e9045;
                }
                uVar7 = uVar7 - 1;
                uVar6 = uVar4;
                uVar4 = _DAT_14764b258;
              } while (uVar7 != 0);
            }
            do {
              while (uStack_50 = uVar4, 0xffffffff < (longlong)uStack_50) {
                LOCK();
                uVar4 = uStack_50;
                uVar6 = uStack_50 - 0x100000000;
                if (uStack_50 != _DAT_14764b258) {
                  uVar4 = _DAT_14764b258;
                  uVar6 = _DAT_14764b258;
                }
                _DAT_14764b258 = uVar6;
                UNLOCK();
                uVar8 = uVar9;
                if (uStack_50 == uVar4) goto LAB_1400e9045;
              }
              cVar2 = FUN_140006180(&DAT_14764b258,1,&uStack_50);
              uVar8 = uVar9;
              uVar4 = uStack_50;
            } while (cVar2 == '\0');
          }
          goto LAB_1400e9045;
        }
        LOCK();
        bVar10 = uVar9 != _DAT_14764b248;
        uVar8 = uVar9 | 0x1000000;
        if (bVar10) {
          uVar9 = _DAT_14764b248;
          uVar8 = _DAT_14764b248;
        }
        _DAT_14764b248 = uVar8;
        UNLOCK();
        uVar8 = uVar9;
      } while (bVar10);
    }
    lVar3 = func_0x000144d9eda0();
    param_1 = puStack_48;
    if (*(int *)(lVar3 + 0x10) != 0) {
      uVar8 = _DAT_14764b248;
      if (param_2 == 0) {
        LOCK();
        uVar8 = _DAT_14764b248 - 1;
        UNLOCK();
        uVar9 = _DAT_14764b248 - 1;
        _DAT_14764b248 = uVar8;
        if ((char)uVar9 == '\0') {
          if ((uVar9 & 0xff0000) == 0) {
            if ((uVar9 & 0xff00) != 0) {
              do {
                LOCK();
                bVar10 = uVar8 != _DAT_14764b248;
                uVar9 = uVar8 & 0xffff00ff;
                if (bVar10) {
                  uVar8 = _DAT_14764b248;
                  uVar9 = _DAT_14764b248;
                }
                _DAT_14764b248 = uVar9;
                UNLOCK();
              } while (bVar10);
              uVar8 = uVar8 >> 8 & 0xff;
              if (uVar8 != 0) {
                uStack_50 = _DAT_14764b250;
                uVar4 = uStack_50;
                do {
                  while (uStack_50 = uVar4, -1 < (longlong)uStack_50) {
                    LOCK();
                    uVar4 = uStack_50;
                    uVar6 = uStack_50 + ((ulonglong)uVar8 << 0x20);
                    if (uStack_50 != _DAT_14764b250) {
                      uVar4 = _DAT_14764b250;
                      uVar6 = _DAT_14764b250;
                    }
                    _DAT_14764b250 = uVar6;
                    UNLOCK();
                    if (uStack_50 == uVar4) goto LAB_1400e9037;
                  }
                  cVar2 = FUN_1400062d0(&DAT_14764b250,uVar8,&uStack_50);
                  uVar4 = uStack_50;
                } while (cVar2 == '\0');
              }
            }
          }
          else {
            do {
              if ((uVar9 & 0xff0000) == 0) break;
              LOCK();
              bVar10 = uVar9 != _DAT_14764b248;
              uVar8 = uVar9;
              uVar7 = uVar9 - 0x10000;
              if (bVar10) {
                uVar8 = _DAT_14764b248;
                uVar7 = _DAT_14764b248;
              }
              _DAT_14764b248 = uVar7;
              UNLOCK();
              uVar4 = _DAT_14764b258;
              if (!bVar10) {
                do {
                  while (uStack_50 = uVar4, -1 < (longlong)uStack_50) {
                    LOCK();
                    uVar4 = uStack_50;
                    uVar6 = uStack_50 + 0x100000000;
                    if (uStack_50 != _DAT_14764b258) {
                      uVar4 = _DAT_14764b258;
                      uVar6 = _DAT_14764b258;
                    }
                    _DAT_14764b258 = uVar6;
                    UNLOCK();
                    uVar8 = uVar9;
                    if (uStack_50 == uVar4) goto LAB_1400e9320;
                  }
                  cVar2 = FUN_1400062d0(&DAT_14764b258,1,&uStack_50);
                  uVar8 = uVar9;
                  uVar4 = uStack_50;
                } while (cVar2 == '\0');
              }
LAB_1400e9320:
              uVar9 = uVar8;
            } while (bVar10);
          }
        }
      }
      else {
        do {
          LOCK();
          bVar10 = uVar8 != _DAT_14764b248;
          uVar9 = uVar8 & 0xfeffffff;
          if (bVar10) {
            uVar8 = _DAT_14764b248;
            uVar9 = _DAT_14764b248;
          }
          _DAT_14764b248 = uVar9;
          UNLOCK();
        } while (bVar10);
        if ((uVar8 & 0xff0000) == 0) {
          uVar9 = _DAT_14764b248;
          if ((uVar8 & 0xff00) != 0) {
            do {
              LOCK();
              bVar10 = uVar9 != _DAT_14764b248;
              uVar8 = uVar9 & 0xffff00ff;
              if (bVar10) {
                uVar9 = _DAT_14764b248;
                uVar8 = _DAT_14764b248;
              }
              _DAT_14764b248 = uVar8;
              UNLOCK();
            } while (bVar10);
            uVar8 = uVar9 >> 8 & 0xff;
            if (uVar8 != 0) {
              uStack_50 = _DAT_14764b250;
              uVar4 = uStack_50;
              do {
                while (uStack_50 = uVar4, -1 < (longlong)uStack_50) {
                  LOCK();
                  uVar4 = uStack_50;
                  uVar6 = uStack_50 + ((ulonglong)uVar8 << 0x20);
                  if (uStack_50 != _DAT_14764b250) {
                    uVar4 = _DAT_14764b250;
                    uVar6 = _DAT_14764b250;
                  }
                  _DAT_14764b250 = uVar6;
                  UNLOCK();
                  if (uStack_50 == uVar4) goto LAB_1400e9037;
                }
                cVar2 = FUN_1400062d0(&DAT_14764b250,uVar8,&uStack_50);
                uVar4 = uStack_50;
              } while (cVar2 == '\0');
            }
          }
        }
        else {
          uVar8 = uVar8 & 0xfeffffff;
          do {
            if ((uVar8 & 0xff0000) == 0) break;
            LOCK();
            bVar10 = uVar8 != _DAT_14764b248;
            uVar9 = uVar8;
            uVar7 = uVar8 - 0x10000;
            if (bVar10) {
              uVar9 = _DAT_14764b248;
              uVar7 = _DAT_14764b248;
            }
            _DAT_14764b248 = uVar7;
            UNLOCK();
            uVar4 = _DAT_14764b258;
            if (!bVar10) {
              do {
                while (uStack_50 = uVar4, -1 < (longlong)uStack_50) {
                  LOCK();
                  uVar4 = uStack_50;
                  uVar6 = uStack_50 + 0x100000000;
                  if (uStack_50 != _DAT_14764b258) {
                    uVar4 = _DAT_14764b258;
                    uVar6 = _DAT_14764b258;
                  }
                  _DAT_14764b258 = uVar6;
                  UNLOCK();
                  uVar9 = uVar8;
                  if (uStack_50 == uVar4) goto LAB_1400e9283;
                }
                cVar2 = FUN_1400062d0(&DAT_14764b258,1,&uStack_50);
                uVar9 = uVar8;
                uVar4 = uStack_50;
              } while (cVar2 == '\0');
            }
LAB_1400e9283:
            uVar8 = uVar9;
          } while (bVar10);
        }
      }
      goto LAB_1400e9037;
    }
    *(undefined1 *)(puStack_48 + 1) = 1;
    puStack_48[2] = (uint)(param_2 != 0) << 4 | puStack_48[2] | 1;
    FUN_1455ae0a0(0);
    uVar8 = param_1[2];
    if ((uVar8 & 2) != 0) {
      FUN_1455ae0a0(1);
      uVar8 = param_1[2];
    }
    if ((uVar8 & 4) != 0) {
      FUN_1455ae0a0(2);
      uVar8 = param_1[2];
    }
    if ((uVar8 & 8) != 0) {
      FUN_1455ae0a0(3);
      uVar8 = param_1[2];
    }
    if ((uVar8 & 0x10) != 0) {
      FUN_1455ae0a0(4);
      uVar8 = param_1[2];
    }
    if ((uVar8 & 0x20) != 0) {
      FUN_1455ae0a0(5);
      uVar8 = param_1[2];
    }
    if ((uVar8 & 0x40) != 0) {
      FUN_1455ae0a0(6);
      uVar8 = param_1[2];
    }
    if ((char)uVar8 < '\0') {
      FUN_1455ae0a0(7);
      uVar8 = param_1[2];
    }
    if ((uVar8 >> 8 & 1) != 0) {
      FUN_1455ae0a0(8);
    }
    if (param_2 != 0) {
      uVar5 = func_0x000144d9eda0();
      FUN_145560bb0(uVar5);
    }
  }
  return param_1;
}

