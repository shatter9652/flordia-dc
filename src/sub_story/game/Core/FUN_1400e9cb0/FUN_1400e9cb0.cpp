// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400e9cb0  size: 281 bytes
// Name:    FUN_1400e9cb0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140006180
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400e9cb0(void)

{
  int iVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong unaff_GS_OFFSET;
  bool bVar9;
  ulonglong uStack_30;
  
  iVar1 = *(int *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0xb20);
  *(int *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0xb20) = iVar1 + 1;
  if (iVar1 == 0) {
    uVar4 = _DAT_14929cf00;
LAB_1400e9d0c:
    do {
      uVar5 = uVar4;
      if ((uVar5 & 0x1ff0000) != 0) {
        LOCK();
        bVar9 = uVar5 == _DAT_14929cf00;
        uVar4 = uVar5;
        uVar8 = uVar5 + 0x100;
        if (!bVar9) {
          uVar4 = _DAT_14929cf00;
          uVar8 = _DAT_14929cf00;
        }
        _DAT_14929cf00 = uVar8;
        UNLOCK();
        if (bVar9) {
          uVar8 = (uint)(_DAT_14929cf08 >> 7) & 0xffffff;
          uVar7 = _DAT_14929cf08;
          uStack_30 = _DAT_14929cf08;
          if ((_DAT_14929cf08 >> 7 & 0xffffff) != 0) {
            do {
              uVar6 = _DAT_14929cf08;
              if (0xffffffff < (longlong)uVar7) {
                LOCK();
                uVar6 = uVar7;
                uVar2 = uVar7 - 0x100000000;
                if (uVar7 != _DAT_14929cf08) {
                  uVar6 = _DAT_14929cf08;
                  uVar2 = _DAT_14929cf08;
                }
                _DAT_14929cf08 = uVar2;
                UNLOCK();
                uVar4 = uVar5;
                if (uVar7 == uVar6) goto LAB_1400e9d0c;
              }
              uVar8 = uVar8 - 1;
              uVar7 = uVar6;
              uStack_30 = _DAT_14929cf08;
            } while (uVar8 != 0);
          }
          do {
            while (0xffffffff < (longlong)uStack_30) {
              LOCK();
              uVar7 = uStack_30;
              uVar6 = uStack_30 - 0x100000000;
              if (uStack_30 != _DAT_14929cf08) {
                uVar7 = _DAT_14929cf08;
                uVar6 = _DAT_14929cf08;
              }
              _DAT_14929cf08 = uVar6;
              UNLOCK();
              bVar9 = uStack_30 == uVar7;
              uVar4 = uVar5;
              uStack_30 = uVar7;
              if (bVar9) goto LAB_1400e9d0c;
            }
            cVar3 = FUN_140006180(&DAT_14929cf08,1,&uStack_30);
            uVar4 = uVar5;
          } while (cVar3 == '\0');
        }
        goto LAB_1400e9d0c;
      }
      LOCK();
      bVar9 = uVar5 != _DAT_14929cf00;
      uVar4 = uVar5 + 1;
      if (bVar9) {
        uVar5 = _DAT_14929cf00;
        uVar4 = _DAT_14929cf00;
      }
      _DAT_14929cf00 = uVar4;
      UNLOCK();
      uVar4 = uVar5;
    } while (bVar9);
  }
  return;
}

