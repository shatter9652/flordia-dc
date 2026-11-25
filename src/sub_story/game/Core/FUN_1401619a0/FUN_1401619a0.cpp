// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401619a0  size: 284 bytes
// Name:    FUN_1401619a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_142e6a960, FUN_140006180
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401619a0(undefined8 param_1)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  ulonglong uStack_38;
  
  uVar7 = _DAT_14a9228b8;
LAB_1401619d6:
  do {
    uVar3 = uVar7;
    if ((uVar3 & 0x10000ff) != 0) {
      LOCK();
      bVar8 = uVar3 == _DAT_14a9228b8;
      uVar7 = uVar3;
      uVar6 = uVar3 + 0x10000;
      if (!bVar8) {
        uVar7 = _DAT_14a9228b8;
        uVar6 = _DAT_14a9228b8;
      }
      _DAT_14a9228b8 = uVar6;
      UNLOCK();
      if (bVar8) {
        uVar6 = (uint)(_DAT_14a9228c8 >> 7) & 0xffffff;
        uVar5 = _DAT_14a9228c8;
        uVar4 = _DAT_14a9228c8;
        if ((_DAT_14a9228c8 >> 7 & 0xffffff) != 0) {
          do {
            uVar4 = _DAT_14a9228c8;
            if (0xffffffff < (longlong)uVar5) {
              LOCK();
              uVar4 = uVar5;
              uVar1 = uVar5 - 0x100000000;
              if (uVar5 != _DAT_14a9228c8) {
                uVar4 = _DAT_14a9228c8;
                uVar1 = _DAT_14a9228c8;
              }
              _DAT_14a9228c8 = uVar1;
              UNLOCK();
              uVar7 = uVar3;
              if (uVar5 == uVar4) goto LAB_1401619d6;
            }
            uVar6 = uVar6 - 1;
            uVar5 = uVar4;
            uVar4 = _DAT_14a9228c8;
          } while (uVar6 != 0);
        }
        do {
          while (uStack_38 = uVar4, (longlong)uStack_38 < 0x100000000) {
            cVar2 = FUN_140006180(&DAT_14a9228c8,1,&uStack_38);
            uVar7 = uVar3;
            uVar4 = uStack_38;
            if (cVar2 != '\0') goto LAB_1401619d6;
          }
          LOCK();
          uVar4 = uStack_38;
          uVar5 = uStack_38 - 0x100000000;
          if (uStack_38 != _DAT_14a9228c8) {
            uVar4 = _DAT_14a9228c8;
            uVar5 = _DAT_14a9228c8;
          }
          _DAT_14a9228c8 = uVar5;
          UNLOCK();
          uVar7 = uVar3;
        } while (uStack_38 != uVar4);
      }
      goto LAB_1401619d6;
    }
    LOCK();
    bVar8 = uVar3 != _DAT_14a9228b8;
    uVar7 = uVar3 | 0x1000000;
    if (bVar8) {
      uVar3 = _DAT_14a9228b8;
      uVar7 = _DAT_14a9228b8;
    }
    _DAT_14a9228b8 = uVar7;
    UNLOCK();
    uVar7 = uVar3;
    if (!bVar8) {
      FUN_142e6a960(param_1);
      uVar7 = _DAT_14a9228b8;
      do {
        LOCK();
        bVar8 = uVar7 != _DAT_14a9228b8;
        uVar3 = uVar7 & 0xfeffffff;
        if (bVar8) {
          uVar7 = _DAT_14a9228b8;
          uVar3 = _DAT_14a9228b8;
        }
        _DAT_14a9228b8 = uVar3;
        UNLOCK();
      } while (bVar8);
      if ((uVar7 & 0xff0000) == 0) {
        uVar3 = _DAT_14a9228b8;
        if ((uVar7 & 0xff00) != 0) {
          do {
            LOCK();
            bVar8 = uVar3 != _DAT_14a9228b8;
            uVar7 = uVar3 & 0xffff00ff;
            if (bVar8) {
              uVar3 = _DAT_14a9228b8;
              uVar7 = _DAT_14a9228b8;
            }
            _DAT_14a9228b8 = uVar7;
            UNLOCK();
          } while (bVar8);
          uVar7 = uVar3 >> 8 & 0xff;
          if (uVar7 != 0) {
            uStack_38 = uRam000000014a9228c0;
            do {
              while (-1 < (longlong)uStack_38) {
                LOCK();
                uVar4 = uStack_38;
                uVar5 = uStack_38 + ((ulonglong)uVar7 << 0x20);
                if (uStack_38 != uRam000000014a9228c0) {
                  uVar4 = uRam000000014a9228c0;
                  uVar5 = uRam000000014a9228c0;
                }
                uRam000000014a9228c0 = uVar5;
                UNLOCK();
                bVar8 = uStack_38 == uVar4;
                uStack_38 = uVar4;
                if (bVar8) {
                  return;
                }
              }
              cVar2 = FUN_1400062d0(0x14a9228c0,uVar7,&uStack_38);
            } while (cVar2 == '\0');
          }
        }
      }
      else {
        uVar7 = uVar7 & 0xfeffffff;
        do {
          if ((uVar7 & 0xff0000) == 0) {
            return;
          }
          LOCK();
          bVar8 = uVar7 != _DAT_14a9228b8;
          uVar3 = uVar7;
          uVar6 = uVar7 - 0x10000;
          if (bVar8) {
            uVar3 = _DAT_14a9228b8;
            uVar6 = _DAT_14a9228b8;
          }
          _DAT_14a9228b8 = uVar6;
          UNLOCK();
          uStack_38 = _DAT_14a9228c8;
          if (!bVar8) {
            do {
              while ((longlong)uStack_38 < 0) {
                cVar2 = FUN_1400062d0(&DAT_14a9228c8,1,&uStack_38);
                uVar3 = uVar7;
                if (cVar2 != '\0') goto code_r0x00014046570e;
              }
              LOCK();
              uVar4 = uStack_38;
              uVar5 = uStack_38 + 0x100000000;
              if (uStack_38 != _DAT_14a9228c8) {
                uVar4 = _DAT_14a9228c8;
                uVar5 = _DAT_14a9228c8;
              }
              _DAT_14a9228c8 = uVar5;
              UNLOCK();
              bVar9 = uStack_38 != uVar4;
              uVar3 = uVar7;
              uStack_38 = uVar4;
            } while (bVar9);
          }
code_r0x00014046570e:
          uVar7 = uVar3;
        } while (bVar8);
      }
      return;
    }
  } while( true );
}

