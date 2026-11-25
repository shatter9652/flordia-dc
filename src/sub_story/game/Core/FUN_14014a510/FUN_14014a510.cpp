// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014a510  size: 283 bytes
// Name:    FUN_14014a510
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140006180
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14014a510(undefined8 *param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  ulonglong uStack_38;
  
  uVar8 = _DAT_14a942b50;
LAB_14014a546:
  do {
    uVar7 = uVar8;
    uVar1 = uRam0000000146dcc3c8;
    if ((uVar7 & 0x1ff0000) != 0) {
      LOCK();
      bVar9 = uVar7 == _DAT_14a942b50;
      uVar8 = uVar7;
      uVar6 = uVar7 + 0x100;
      if (!bVar9) {
        uVar8 = _DAT_14a942b50;
        uVar6 = _DAT_14a942b50;
      }
      _DAT_14a942b50 = uVar6;
      UNLOCK();
      if (bVar9) {
        uVar6 = (uint)(_DAT_14a942b58 >> 7) & 0xffffff;
        uVar5 = _DAT_14a942b58;
        uStack_38 = _DAT_14a942b58;
        if ((_DAT_14a942b58 >> 7 & 0xffffff) != 0) {
          do {
            uVar4 = _DAT_14a942b58;
            if (0xffffffff < (longlong)uVar5) {
              LOCK();
              uVar4 = uVar5;
              uVar2 = uVar5 - 0x100000000;
              if (uVar5 != _DAT_14a942b58) {
                uVar4 = _DAT_14a942b58;
                uVar2 = _DAT_14a942b58;
              }
              _DAT_14a942b58 = uVar2;
              UNLOCK();
              uVar8 = uVar7;
              if (uVar5 == uVar4) goto LAB_14014a546;
            }
            uVar6 = uVar6 - 1;
            uVar5 = uVar4;
            uStack_38 = _DAT_14a942b58;
          } while (uVar6 != 0);
        }
        do {
          while ((longlong)uStack_38 < 0x100000000) {
            cVar3 = FUN_140006180(&DAT_14a942b58,1,&uStack_38);
            uVar8 = uVar7;
            if (cVar3 != '\0') goto LAB_14014a546;
          }
          LOCK();
          uVar5 = uStack_38;
          uVar4 = uStack_38 - 0x100000000;
          if (uStack_38 != _DAT_14a942b58) {
            uVar5 = _DAT_14a942b58;
            uVar4 = _DAT_14a942b58;
          }
          _DAT_14a942b58 = uVar4;
          UNLOCK();
          bVar9 = uStack_38 != uVar5;
          uVar8 = uVar7;
          uStack_38 = uVar5;
        } while (bVar9);
      }
      goto LAB_14014a546;
    }
    LOCK();
    bVar9 = uVar7 != _DAT_14a942b50;
    uVar8 = uVar7 + 1;
    if (bVar9) {
      uVar7 = _DAT_14a942b50;
      uVar8 = _DAT_14a942b50;
    }
    _DAT_14a942b50 = uVar8;
    UNLOCK();
    uVar8 = uVar7;
    if (!bVar9) {
      *param_1 = _DAT_146dcc3c0;
      param_1[1] = uVar1;
      LOCK();
      uVar8 = _DAT_14a942b50 - 1;
      UNLOCK();
      uVar7 = _DAT_14a942b50 - 1;
      _DAT_14a942b50 = uVar8;
      if ((char)uVar7 == '\0') {
        if ((uVar7 & 0xff0000) == 0) {
          if ((uVar7 & 0xff00) != 0) {
            do {
              LOCK();
              bVar9 = uVar8 != _DAT_14a942b50;
              uVar7 = uVar8 & 0xffff00ff;
              if (bVar9) {
                uVar8 = _DAT_14a942b50;
                uVar7 = _DAT_14a942b50;
              }
              _DAT_14a942b50 = uVar7;
              UNLOCK();
            } while (bVar9);
            uVar8 = uVar8 >> 8 & 0xff;
            if (uVar8 != 0) {
              uStack_38 = _DAT_14a942b58;
              do {
                while (-1 < (longlong)uStack_38) {
                  LOCK();
                  uVar5 = uStack_38;
                  uVar4 = uStack_38 + ((ulonglong)uVar8 << 0x20);
                  if (uStack_38 != _DAT_14a942b58) {
                    uVar5 = _DAT_14a942b58;
                    uVar4 = _DAT_14a942b58;
                  }
                  _DAT_14a942b58 = uVar4;
                  UNLOCK();
                  bVar9 = uStack_38 == uVar5;
                  uStack_38 = uVar5;
                  if (bVar9) {
                    return;
                  }
                }
                cVar3 = FUN_1400062d0(&DAT_14a942b58,uVar8,&uStack_38);
              } while (cVar3 == '\0');
            }
          }
        }
        else {
          do {
            if ((uVar7 & 0xff0000) == 0) {
              return;
            }
            LOCK();
            bVar9 = uVar7 != _DAT_14a942b50;
            uVar8 = uVar7;
            uVar6 = uVar7 - 0x10000;
            if (bVar9) {
              uVar8 = _DAT_14a942b50;
              uVar6 = _DAT_14a942b50;
            }
            _DAT_14a942b50 = uVar6;
            UNLOCK();
            uStack_38 = uRam000000014a942b60;
            if (!bVar9) {
              do {
                while ((longlong)uStack_38 < 0) {
                  cVar3 = FUN_1400062d0(0x14a942b60,1,&uStack_38);
                  uVar8 = uVar7;
                  if (cVar3 != '\0') goto code_r0x00014032361d;
                }
                LOCK();
                uVar5 = uStack_38;
                uVar4 = uStack_38 + 0x100000000;
                if (uStack_38 != uRam000000014a942b60) {
                  uVar5 = uRam000000014a942b60;
                  uVar4 = uRam000000014a942b60;
                }
                uRam000000014a942b60 = uVar4;
                UNLOCK();
                bVar10 = uStack_38 != uVar5;
                uVar8 = uVar7;
                uStack_38 = uVar5;
              } while (bVar10);
            }
code_r0x00014032361d:
            uVar7 = uVar8;
          } while (bVar9);
        }
      }
      return;
    }
  } while( true );
}

