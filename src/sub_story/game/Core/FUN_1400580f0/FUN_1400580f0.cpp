// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400580f0  size: 535 bytes
// Name:    FUN_1400580f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140006180, FUN_140323580, FUN_14404d770, FUN_140465670
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1400580f0(longlong param_1)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  bool bVar8;
  ulonglong uStack_38;
  
  uVar3 = _DAT_14999e9b0;
LAB_140058126:
  do {
    uVar4 = uVar3;
    if ((uVar4 & 0x1ff0000) != 0) {
      LOCK();
      bVar8 = uVar4 != _DAT_14999e9b0;
      uVar3 = uVar4;
      uVar7 = uVar4 + 0x100;
      if (bVar8) {
        uVar3 = _DAT_14999e9b0;
        uVar7 = _DAT_14999e9b0;
      }
      _DAT_14999e9b0 = uVar7;
      UNLOCK();
      if (!bVar8) {
        uVar7 = (uint)(_DAT_14999e9b8 >> 7) & 0xffffff;
        uVar6 = _DAT_14999e9b8;
        uVar5 = _DAT_14999e9b8;
        if ((_DAT_14999e9b8 >> 7 & 0xffffff) != 0) {
          do {
            uVar5 = _DAT_14999e9b8;
            if (0xffffffff < (longlong)uVar6) {
              LOCK();
              uVar5 = uVar6;
              uVar1 = uVar6 - 0x100000000;
              if (uVar6 != _DAT_14999e9b8) {
                uVar5 = _DAT_14999e9b8;
                uVar1 = _DAT_14999e9b8;
              }
              _DAT_14999e9b8 = uVar1;
              UNLOCK();
              uVar3 = uVar4;
              if (uVar6 == uVar5) goto LAB_140058126;
            }
            uVar7 = uVar7 - 1;
            uVar6 = uVar5;
            uVar5 = _DAT_14999e9b8;
          } while (uVar7 != 0);
        }
        do {
          while (uStack_38 = uVar5, 0xffffffff < (longlong)uStack_38) {
            LOCK();
            uVar5 = uStack_38;
            uVar6 = uStack_38 - 0x100000000;
            if (uStack_38 != _DAT_14999e9b8) {
              uVar5 = _DAT_14999e9b8;
              uVar6 = _DAT_14999e9b8;
            }
            _DAT_14999e9b8 = uVar6;
            UNLOCK();
            uVar3 = uVar4;
            if (uStack_38 == uVar5) goto LAB_140058126;
          }
          cVar2 = FUN_140006180(&DAT_14999e9b8,1,&uStack_38);
          uVar3 = uVar4;
          uVar5 = uStack_38;
        } while (cVar2 == '\0');
      }
      goto LAB_140058126;
    }
    LOCK();
    bVar8 = uVar4 != _DAT_14999e9b0;
    uVar3 = uVar4 + 1;
    if (bVar8) {
      uVar4 = _DAT_14999e9b0;
      uVar3 = _DAT_14999e9b0;
    }
    _DAT_14999e9b0 = uVar3;
    UNLOCK();
    uVar3 = uVar4;
  } while (bVar8);
  cVar2 = *(char *)(param_1 + 0x4a);
  FUN_140323580(&DAT_14999e9b0);
  if (cVar2 == '\0') {
    uVar3 = _DAT_14999e9b0;
LAB_14005820f:
    do {
      uVar4 = uVar3;
      if ((uVar4 & 0x10000ff) != 0) {
        LOCK();
        bVar8 = uVar4 == _DAT_14999e9b0;
        uVar3 = uVar4;
        uVar7 = uVar4 + 0x10000;
        if (!bVar8) {
          uVar3 = _DAT_14999e9b0;
          uVar7 = _DAT_14999e9b0;
        }
        _DAT_14999e9b0 = uVar7;
        UNLOCK();
        if (bVar8) {
          uVar7 = (uint)(_DAT_14999e9c0 >> 7) & 0xffffff;
          uVar6 = _DAT_14999e9c0;
          uVar5 = _DAT_14999e9c0;
          if ((_DAT_14999e9c0 >> 7 & 0xffffff) != 0) {
            do {
              uVar5 = _DAT_14999e9c0;
              if (0xffffffff < (longlong)uVar6) {
                LOCK();
                uVar5 = uVar6;
                uVar1 = uVar6 - 0x100000000;
                if (uVar6 != _DAT_14999e9c0) {
                  uVar5 = _DAT_14999e9c0;
                  uVar1 = _DAT_14999e9c0;
                }
                _DAT_14999e9c0 = uVar1;
                UNLOCK();
                uVar3 = uVar4;
                if (uVar6 == uVar5) goto LAB_14005820f;
              }
              uVar7 = uVar7 - 1;
              uVar6 = uVar5;
              uVar5 = _DAT_14999e9c0;
            } while (uVar7 != 0);
          }
          do {
            while (uStack_38 = uVar5, 0xffffffff < (longlong)uStack_38) {
              LOCK();
              uVar5 = uStack_38;
              uVar6 = uStack_38 - 0x100000000;
              if (uStack_38 != _DAT_14999e9c0) {
                uVar5 = _DAT_14999e9c0;
                uVar6 = _DAT_14999e9c0;
              }
              _DAT_14999e9c0 = uVar6;
              UNLOCK();
              uVar3 = uVar4;
              if (uStack_38 == uVar5) goto LAB_14005820f;
            }
            cVar2 = FUN_140006180(&DAT_14999e9c0,1,&uStack_38);
            uVar3 = uVar4;
            uVar5 = uStack_38;
          } while (cVar2 == '\0');
        }
        goto LAB_14005820f;
      }
      LOCK();
      bVar8 = uVar4 != _DAT_14999e9b0;
      uVar3 = uVar4 | 0x1000000;
      if (bVar8) {
        uVar4 = _DAT_14999e9b0;
        uVar3 = _DAT_14999e9b0;
      }
      _DAT_14999e9b0 = uVar3;
      UNLOCK();
      uVar3 = uVar4;
    } while (bVar8);
    if (*(char *)(param_1 + 0x4a) == '\0') {
      FUN_14404d770(param_1);
      *(undefined1 *)(param_1 + 0x4a) = 1;
    }
    FUN_140465670(&DAT_14999e9b0);
  }
  return param_1 + 0x20;
}

