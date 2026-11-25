// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400e9dd0  size: 351 bytes
// Name:    FUN_1400e9dd0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400062d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400e9dd0(void)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  longlong unaff_GS_OFFSET;
  bool bVar8;
  bool bVar9;
  longlong lStack_30;
  
  piVar1 = (int *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0xb20);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    LOCK();
    uVar7 = _DAT_14929cf00 - 1;
    UNLOCK();
    uVar6 = _DAT_14929cf00 - 1;
    _DAT_14929cf00 = uVar7;
    if ((char)uVar6 == '\0') {
      if ((uVar6 & 0xff0000) == 0) {
        if ((uVar6 & 0xff00) != 0) {
          do {
            LOCK();
            bVar8 = uVar7 != _DAT_14929cf00;
            uVar6 = uVar7 & 0xffff00ff;
            if (bVar8) {
              uVar7 = _DAT_14929cf00;
              uVar6 = _DAT_14929cf00;
            }
            _DAT_14929cf00 = uVar6;
            UNLOCK();
          } while (bVar8);
          uVar7 = uVar7 >> 8 & 0xff;
          if (uVar7 != 0) {
            lStack_30 = _DAT_14929cf08;
            do {
              while (-1 < lStack_30) {
                LOCK();
                lVar5 = lStack_30;
                lVar3 = lStack_30 + ((ulonglong)uVar7 << 0x20);
                if (lStack_30 != _DAT_14929cf08) {
                  lVar5 = _DAT_14929cf08;
                  lVar3 = _DAT_14929cf08;
                }
                _DAT_14929cf08 = lVar3;
                UNLOCK();
                bVar8 = lStack_30 == lVar5;
                lStack_30 = lVar5;
                if (bVar8) {
                  return;
                }
              }
              cVar4 = FUN_1400062d0(&DAT_14929cf08,uVar7,&lStack_30);
            } while (cVar4 == '\0');
          }
        }
      }
      else {
        do {
          if ((uVar6 & 0xff0000) == 0) {
            return;
          }
          LOCK();
          bVar8 = uVar6 != _DAT_14929cf00;
          uVar7 = uVar6;
          uVar2 = uVar6 - 0x10000;
          if (bVar8) {
            uVar7 = _DAT_14929cf00;
            uVar2 = _DAT_14929cf00;
          }
          _DAT_14929cf00 = uVar2;
          UNLOCK();
          lStack_30 = _DAT_14929cf10;
          if (!bVar8) {
            do {
              while (lStack_30 < 0) {
                cVar4 = FUN_1400062d0(&DAT_14929cf10,1,&lStack_30);
                uVar7 = uVar6;
                if (cVar4 != '\0') goto LAB_1400e9e91;
              }
              LOCK();
              lVar5 = lStack_30;
              lVar3 = lStack_30 + 0x100000000;
              if (lStack_30 != _DAT_14929cf10) {
                lVar5 = _DAT_14929cf10;
                lVar3 = _DAT_14929cf10;
              }
              _DAT_14929cf10 = lVar3;
              UNLOCK();
              bVar9 = lStack_30 != lVar5;
              uVar7 = uVar6;
              lStack_30 = lVar5;
            } while (bVar9);
          }
LAB_1400e9e91:
          uVar6 = uVar7;
        } while (bVar8);
      }
    }
  }
  return;
}

