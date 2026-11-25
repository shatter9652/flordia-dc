// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140080290  size: 349 bytes
// Name:    FUN_140080290
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1427423d0, FUN_140006180
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_140080290(longlong param_1,int param_2,int param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  bool bVar10;
  ulonglong uStack_48;
  
  do {
    lVar7 = param_1;
    if ((*(byte *)(lVar7 + 0x97) & 8) == 0) break;
    param_1 = *(longlong *)(lVar7 + 0x80);
  } while (*(longlong *)(lVar7 + 0x80) != 0);
  uVar5 = _DAT_1477be8e8;
LAB_1400802e4:
  do {
    do {
      while (uVar4 = uVar5, (uVar4 & 0x1ff0000) == 0) {
        LOCK();
        bVar10 = uVar4 == _DAT_1477be8e8;
        uVar5 = uVar4 + 1;
        if (!bVar10) {
          uVar4 = _DAT_1477be8e8;
          uVar5 = _DAT_1477be8e8;
        }
        _DAT_1477be8e8 = uVar5;
        UNLOCK();
        uVar5 = uVar4;
        if (bVar10) {
          bVar10 = false;
          uVar5 = param_3 * 9 + param_2;
          if ((-1 < (int)uVar5) &&
             (plVar1 = *(longlong **)(lVar7 + 0x140), plVar1 != (longlong *)0x0)) {
            if ((int)uVar5 < *(int *)((longlong)plVar1 + 0xc)) {
              bVar10 = (*(uint *)(*plVar1 + (ulonglong)(uVar5 >> 5) * 4) >> (uVar5 & 0x1f) & 1) != 0
              ;
            }
            else {
              bVar10 = false;
            }
          }
          FUN_1427423d0();
          return bVar10;
        }
      }
      LOCK();
      bVar10 = uVar4 != _DAT_1477be8e8;
      uVar5 = uVar4;
      uVar9 = uVar4 + 0x100;
      if (bVar10) {
        uVar5 = _DAT_1477be8e8;
        uVar9 = _DAT_1477be8e8;
      }
      _DAT_1477be8e8 = uVar9;
      UNLOCK();
    } while (bVar10);
    uVar9 = (uint)(_DAT_1477be8f0 >> 7) & 0xffffff;
    uVar8 = _DAT_1477be8f0;
    uVar6 = _DAT_1477be8f0;
    if ((_DAT_1477be8f0 >> 7 & 0xffffff) != 0) {
      do {
        uVar6 = _DAT_1477be8f0;
        if (0xffffffff < (longlong)uVar8) {
          LOCK();
          uVar6 = uVar8;
          uVar2 = uVar8 - 0x100000000;
          if (uVar8 != _DAT_1477be8f0) {
            uVar6 = _DAT_1477be8f0;
            uVar2 = _DAT_1477be8f0;
          }
          _DAT_1477be8f0 = uVar2;
          UNLOCK();
          uVar5 = uVar4;
          if (uVar8 == uVar6) goto LAB_1400802e4;
        }
        uVar9 = uVar9 - 1;
        uVar8 = uVar6;
        uVar6 = _DAT_1477be8f0;
      } while (uVar9 != 0);
    }
    do {
      while (uStack_48 = uVar6, 0xffffffff < (longlong)uStack_48) {
        LOCK();
        uVar6 = uStack_48;
        uVar8 = uStack_48 - 0x100000000;
        if (uStack_48 != _DAT_1477be8f0) {
          uVar6 = _DAT_1477be8f0;
          uVar8 = _DAT_1477be8f0;
        }
        _DAT_1477be8f0 = uVar8;
        UNLOCK();
        uVar5 = uVar4;
        if (uStack_48 == uVar6) goto LAB_1400802e4;
      }
      cVar3 = FUN_140006180(&DAT_1477be8f0,1,&uStack_48);
      uVar5 = uVar4;
      uVar6 = uStack_48;
    } while (cVar3 == '\0');
  } while( true );
}

