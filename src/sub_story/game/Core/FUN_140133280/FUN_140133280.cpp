// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140133280  size: 636 bytes
// Name:    FUN_140133280
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140006180
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_140133280(byte *param_1,byte param_2,char param_3)

{
  byte bVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong unaff_GS_OFFSET;
  bool bVar10;
  ulonglong uStack_40;
  
  if (param_3 != '\0') {
    if (param_2 == 0) {
      lVar2 = **(longlong **)(unaff_GS_OFFSET + 0x58);
      bVar1 = *(byte *)(lVar2 + 0x889);
      *param_1 = bVar1 ^ 1;
      param_1[1] = 0;
      if (bVar1 != 0) {
        return param_1;
      }
      uVar5 = _DAT_147c2a7f0;
LAB_140133335:
      do {
        do {
          while (uVar6 = uVar5, (uVar6 & 0x10000ff) == 0) {
            LOCK();
            bVar10 = uVar6 != _DAT_147c2a7f0;
            uVar5 = uVar6 | 0x1000000;
            if (bVar10) {
              uVar6 = _DAT_147c2a7f0;
              uVar5 = _DAT_147c2a7f0;
            }
            _DAT_147c2a7f0 = uVar5;
            UNLOCK();
            uVar5 = uVar6;
            if (!bVar10) {
              *(undefined1 *)(lVar2 + 0x889) = 1;
              return param_1;
            }
          }
          LOCK();
          bVar10 = uVar6 != _DAT_147c2a7f0;
          uVar5 = uVar6;
          uVar9 = uVar6 + 0x10000;
          if (bVar10) {
            uVar5 = _DAT_147c2a7f0;
            uVar9 = _DAT_147c2a7f0;
          }
          _DAT_147c2a7f0 = uVar9;
          UNLOCK();
        } while (bVar10);
        uVar9 = (uint)(_DAT_147c2a800 >> 7) & 0xffffff;
        uVar8 = _DAT_147c2a800;
        uStack_40 = _DAT_147c2a800;
        if ((_DAT_147c2a800 >> 7 & 0xffffff) != 0) {
          do {
            uVar7 = _DAT_147c2a800;
            if (0xffffffff < (longlong)uVar8) {
              LOCK();
              uVar7 = uVar8;
              uVar3 = uVar8 - 0x100000000;
              if (uVar8 != _DAT_147c2a800) {
                uVar7 = _DAT_147c2a800;
                uVar3 = _DAT_147c2a800;
              }
              _DAT_147c2a800 = uVar3;
              UNLOCK();
              uVar5 = uVar6;
              if (uVar8 == uVar7) goto LAB_140133335;
            }
            uVar9 = uVar9 - 1;
            uVar8 = uVar7;
            uStack_40 = _DAT_147c2a800;
          } while (uVar9 != 0);
        }
        do {
          while ((longlong)uStack_40 < 0x100000000) {
            cVar4 = FUN_140006180(&DAT_147c2a800,1,&uStack_40);
            uVar5 = uVar6;
            if (cVar4 != '\0') goto LAB_140133335;
          }
          LOCK();
          uVar8 = uStack_40;
          uVar7 = uStack_40 - 0x100000000;
          if (uStack_40 != _DAT_147c2a800) {
            uVar8 = _DAT_147c2a800;
            uVar7 = _DAT_147c2a800;
          }
          _DAT_147c2a800 = uVar7;
          UNLOCK();
          bVar10 = uStack_40 != uVar8;
          uVar5 = uVar6;
          uStack_40 = uVar8;
        } while (bVar10);
      } while( true );
    }
    lVar2 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    if ((*(char *)(lVar2 + 0x888) == '\0') &&
       (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x889) != '\x01')) {
      *param_1 = 1;
      param_1[1] = param_2;
      uVar5 = _DAT_147c2a7f0;
LAB_140133436:
      do {
        do {
          while (uVar6 = uVar5, (uVar6 & 0x1ff0000) == 0) {
            LOCK();
            bVar10 = uVar6 != _DAT_147c2a7f0;
            uVar5 = uVar6 + 1;
            if (bVar10) {
              uVar6 = _DAT_147c2a7f0;
              uVar5 = _DAT_147c2a7f0;
            }
            _DAT_147c2a7f0 = uVar5;
            UNLOCK();
            uVar5 = uVar6;
            if (!bVar10) {
              *(undefined1 *)(lVar2 + 0x888) = 1;
              return param_1;
            }
          }
          LOCK();
          bVar10 = uVar6 != _DAT_147c2a7f0;
          uVar5 = uVar6;
          uVar9 = uVar6 + 0x100;
          if (bVar10) {
            uVar5 = _DAT_147c2a7f0;
            uVar9 = _DAT_147c2a7f0;
          }
          _DAT_147c2a7f0 = uVar9;
          UNLOCK();
        } while (bVar10);
        uVar9 = (uint)(_DAT_147c2a7f8 >> 7) & 0xffffff;
        uVar8 = _DAT_147c2a7f8;
        uStack_40 = _DAT_147c2a7f8;
        if ((_DAT_147c2a7f8 >> 7 & 0xffffff) != 0) {
          do {
            uVar7 = _DAT_147c2a7f8;
            if (0xffffffff < (longlong)uVar8) {
              LOCK();
              uVar7 = uVar8;
              uVar3 = uVar8 - 0x100000000;
              if (uVar8 != _DAT_147c2a7f8) {
                uVar7 = _DAT_147c2a7f8;
                uVar3 = _DAT_147c2a7f8;
              }
              _DAT_147c2a7f8 = uVar3;
              UNLOCK();
              uVar5 = uVar6;
              if (uVar8 == uVar7) goto LAB_140133436;
            }
            uVar9 = uVar9 - 1;
            uVar8 = uVar7;
            uStack_40 = _DAT_147c2a7f8;
          } while (uVar9 != 0);
        }
        do {
          while ((longlong)uStack_40 < 0x100000000) {
            cVar4 = FUN_140006180(&DAT_147c2a7f8,1,&uStack_40);
            uVar5 = uVar6;
            if (cVar4 != '\0') goto LAB_140133436;
          }
          LOCK();
          uVar8 = uStack_40;
          uVar7 = uStack_40 - 0x100000000;
          if (uStack_40 != _DAT_147c2a7f8) {
            uVar8 = _DAT_147c2a7f8;
            uVar7 = _DAT_147c2a7f8;
          }
          _DAT_147c2a7f8 = uVar7;
          UNLOCK();
          bVar10 = uStack_40 != uVar8;
          uVar5 = uVar6;
          uStack_40 = uVar8;
        } while (bVar10);
      } while( true );
    }
  }
  *param_1 = 0;
  param_1[1] = param_2;
  return param_1;
}

