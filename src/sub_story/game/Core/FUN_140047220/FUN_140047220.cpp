// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140047220  size: 340 bytes
// Name:    FUN_140047220
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450b7440, FUN_14520af50, FUN_140006180, FUN_140323580
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140047220(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  bool bVar8;
  float fVar9;
  ulonglong uStack_40;
  
  uVar3 = _DAT_147ec8848;
LAB_14004725b:
  do {
    do {
      while (uVar4 = uVar3, (uVar4 & 0x1ff0000) == 0) {
        LOCK();
        bVar8 = uVar4 == _DAT_147ec8848;
        uVar3 = uVar4 + 1;
        if (!bVar8) {
          uVar4 = _DAT_147ec8848;
          uVar3 = _DAT_147ec8848;
        }
        _DAT_147ec8848 = uVar3;
        UNLOCK();
        uVar3 = uVar4;
        if (bVar8) {
          if ((*(longlong *)(param_1 + 0xd0) == 0) || (DAT_147ec8860 != '\x01')) {
            uVar5 = 0;
          }
          else {
            FUN_1450b7440(&uStack_40,param_2);
            fVar9 = (float)FUN_14520af50(uStack_40);
            uVar5 = CONCAT71((int7)((ulonglong)param_2 >> 8),0.0 < fVar9);
          }
          FUN_140323580(&DAT_147ec8848);
          return uVar5 & 0xffffffff;
        }
      }
      LOCK();
      bVar8 = uVar4 != _DAT_147ec8848;
      uVar3 = uVar4;
      uVar7 = uVar4 + 0x100;
      if (bVar8) {
        uVar3 = _DAT_147ec8848;
        uVar7 = _DAT_147ec8848;
      }
      _DAT_147ec8848 = uVar7;
      UNLOCK();
    } while (bVar8);
    uVar7 = (uint)(_DAT_147ec8850 >> 7) & 0xffffff;
    uVar6 = _DAT_147ec8850;
    uVar5 = _DAT_147ec8850;
    if ((_DAT_147ec8850 >> 7 & 0xffffff) != 0) {
      do {
        uVar5 = _DAT_147ec8850;
        if (0xffffffff < (longlong)uVar6) {
          LOCK();
          uVar5 = uVar6;
          uVar1 = uVar6 - 0x100000000;
          if (uVar6 != _DAT_147ec8850) {
            uVar5 = _DAT_147ec8850;
            uVar1 = _DAT_147ec8850;
          }
          _DAT_147ec8850 = uVar1;
          UNLOCK();
          uVar3 = uVar4;
          if (uVar6 == uVar5) goto LAB_14004725b;
        }
        uVar7 = uVar7 - 1;
        uVar6 = uVar5;
        uVar5 = _DAT_147ec8850;
      } while (uVar7 != 0);
    }
    do {
      while (uStack_40 = uVar5, 0xffffffff < (longlong)uStack_40) {
        LOCK();
        uVar5 = uStack_40;
        uVar6 = uStack_40 - 0x100000000;
        if (uStack_40 != _DAT_147ec8850) {
          uVar5 = _DAT_147ec8850;
          uVar6 = _DAT_147ec8850;
        }
        _DAT_147ec8850 = uVar6;
        UNLOCK();
        uVar3 = uVar4;
        if (uStack_40 == uVar5) goto LAB_14004725b;
      }
      cVar2 = FUN_140006180(&DAT_147ec8850,1,&uStack_40);
      uVar3 = uVar4;
      uVar5 = uStack_40;
    } while (cVar2 == '\0');
  } while( true );
}

