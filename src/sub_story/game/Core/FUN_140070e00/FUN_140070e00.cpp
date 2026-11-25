// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140070e00  size: 283 bytes
// Name:    FUN_140070e00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140323580, FUN_140006180
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140070e00(void)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  bool bVar8;
  undefined1 auVar9 [64];
  ulonglong auStack_40 [3];
  
  uVar3 = _DAT_14a942b50;
LAB_140070e37:
  do {
    do {
      while (uVar4 = uVar3, (uVar4 & 0x1ff0000) == 0) {
        LOCK();
        bVar8 = uVar4 == _DAT_14a942b50;
        uVar3 = uVar4 + 1;
        if (!bVar8) {
          uVar4 = _DAT_14a942b50;
          uVar3 = _DAT_14a942b50;
        }
        _DAT_14a942b50 = uVar3;
        UNLOCK();
        uVar3 = uVar4;
        if (bVar8) {
          auVar9 = ZEXT464(_DAT_146dcc3d0);
          FUN_140323580(&DAT_14a942b50);
          return auVar9._0_8_;
        }
      }
      LOCK();
      bVar8 = uVar4 != _DAT_14a942b50;
      uVar3 = uVar4;
      uVar7 = uVar4 + 0x100;
      if (bVar8) {
        uVar3 = _DAT_14a942b50;
        uVar7 = _DAT_14a942b50;
      }
      _DAT_14a942b50 = uVar7;
      UNLOCK();
    } while (bVar8);
    uVar7 = (uint)(_DAT_14a942b58 >> 7) & 0xffffff;
    uVar6 = _DAT_14a942b58;
    uVar5 = _DAT_14a942b58;
    if ((_DAT_14a942b58 >> 7 & 0xffffff) != 0) {
      do {
        uVar5 = _DAT_14a942b58;
        if (0xffffffff < (longlong)uVar6) {
          LOCK();
          uVar5 = uVar6;
          uVar1 = uVar6 - 0x100000000;
          if (uVar6 != _DAT_14a942b58) {
            uVar5 = _DAT_14a942b58;
            uVar1 = _DAT_14a942b58;
          }
          _DAT_14a942b58 = uVar1;
          UNLOCK();
          uVar3 = uVar4;
          if (uVar6 == uVar5) goto LAB_140070e37;
        }
        uVar7 = uVar7 - 1;
        uVar6 = uVar5;
        uVar5 = _DAT_14a942b58;
      } while (uVar7 != 0);
    }
    do {
      while (auStack_40[0] = uVar5, 0xffffffff < (longlong)auStack_40[0]) {
        LOCK();
        uVar5 = auStack_40[0];
        uVar6 = auStack_40[0] - 0x100000000;
        if (auStack_40[0] != _DAT_14a942b58) {
          uVar5 = _DAT_14a942b58;
          uVar6 = _DAT_14a942b58;
        }
        _DAT_14a942b58 = uVar6;
        UNLOCK();
        uVar3 = uVar4;
        if (auStack_40[0] == uVar5) goto LAB_140070e37;
      }
      cVar2 = FUN_140006180(&DAT_14a942b58,1,auStack_40);
      uVar3 = uVar4;
      uVar5 = auStack_40[0];
    } while (cVar2 == '\0');
  } while( true );
}

