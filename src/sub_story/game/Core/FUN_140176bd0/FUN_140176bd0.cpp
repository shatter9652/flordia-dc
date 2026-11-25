// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140176bd0  size: 348 bytes
// Name:    FUN_140176bd0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140323580, FUN_140006180
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140176bd0(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  bool bVar10;
  ulonglong uStack_58;
  ulonglong uStack_50;
  ulonglong uStack_48;
  
  uVar5 = _DAT_149e74bd0;
LAB_140176c0b:
  do {
    do {
      while (uVar6 = uVar5, (uVar6 & 0x1ff0000) == 0) {
        LOCK();
        bVar10 = uVar6 == _DAT_149e74bd0;
        uVar5 = uVar6 + 1;
        if (!bVar10) {
          uVar6 = _DAT_149e74bd0;
          uVar5 = _DAT_149e74bd0;
        }
        _DAT_149e74bd0 = uVar5;
        UNLOCK();
        uVar5 = uVar6;
        if (bVar10) {
          lVar1 = *param_1;
          if ((lVar1 == 0) || (*(int *)(lVar1 + 0x1c) == 0)) {
            func_0x00014502d170(&uStack_58);
          }
          else {
            puVar2 = *(ulonglong **)(lVar1 + 0x20);
            uStack_48 = puVar2[2];
            uStack_58 = *puVar2;
            uStack_50 = puVar2[1];
          }
          param_2[2] = uStack_48;
          *param_2 = uStack_58;
          param_2[1] = uStack_50;
          FUN_140323580(&DAT_149e74bd0);
          return;
        }
      }
      LOCK();
      bVar10 = uVar6 != _DAT_149e74bd0;
      uVar5 = uVar6;
      uVar9 = uVar6 + 0x100;
      if (bVar10) {
        uVar5 = _DAT_149e74bd0;
        uVar9 = _DAT_149e74bd0;
      }
      _DAT_149e74bd0 = uVar9;
      UNLOCK();
    } while (bVar10);
    uVar9 = (uint)(_DAT_149e74bd8 >> 7) & 0xffffff;
    uVar8 = _DAT_149e74bd8;
    uVar7 = _DAT_149e74bd8;
    if ((_DAT_149e74bd8 >> 7 & 0xffffff) != 0) {
      do {
        uVar7 = _DAT_149e74bd8;
        if (0xffffffff < (longlong)uVar8) {
          LOCK();
          uVar7 = uVar8;
          uVar3 = uVar8 - 0x100000000;
          if (uVar8 != _DAT_149e74bd8) {
            uVar7 = _DAT_149e74bd8;
            uVar3 = _DAT_149e74bd8;
          }
          _DAT_149e74bd8 = uVar3;
          UNLOCK();
          uVar5 = uVar6;
          if (uVar8 == uVar7) goto LAB_140176c0b;
        }
        uVar9 = uVar9 - 1;
        uVar8 = uVar7;
        uVar7 = _DAT_149e74bd8;
      } while (uVar9 != 0);
    }
    do {
      while (uStack_58 = uVar7, 0xffffffff < (longlong)uStack_58) {
        LOCK();
        uVar7 = uStack_58;
        uVar8 = uStack_58 - 0x100000000;
        if (uStack_58 != _DAT_149e74bd8) {
          uVar7 = _DAT_149e74bd8;
          uVar8 = _DAT_149e74bd8;
        }
        _DAT_149e74bd8 = uVar8;
        UNLOCK();
        uVar5 = uVar6;
        if (uStack_58 == uVar7) goto LAB_140176c0b;
      }
      cVar4 = FUN_140006180(&DAT_149e74bd8,1,&uStack_58);
      uVar5 = uVar6;
      uVar7 = uStack_58;
    } while (cVar4 == '\0');
  } while( true );
}

