// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 142aaafa0  size: 929 bytes
// Name:    audWaveSlot::FindWaveSlot
// Subsystem: audio
// Class:   audWaveSlot
//
// Evidence:
//   GTAVSRC: audWaveSlot::FindWaveSlot  (game/audio/speechmanager.cpp)
//   literal: SCRIPT_SPEECH_%d
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14183c700, FUN_145271bd0, FUN_145a60940, FUN_145ce09c0, FUN_145534890, FUN_141bd5010, FUN_142aab350, FUN_141d83250, FUN_141bde1d0, FUN_1416a3fe0, FUN_145ce09f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/audWaveSlot.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void audWaveSlot__FindWaveSlot(void)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_68 [72];
  
  if (DAT_14aa31c54 == '\x01') {
    FUN_145271bd0(0x147bd0b30,0xf11fbff1);
    iVar4 = 0;
    while( true ) {
      FUN_145534890(auStack_68,&UNK_146785367,iVar4);
      lVar2 = FUN_141d83250(auStack_68);
      if (lVar2 == 0) break;
      uVar1 = (uint)_DAT_149e71550;
      if (_DAT_149e71550 == _DAT_149e71552) {
        FUN_141bde1d0(uVar1 + 0x10);
        uVar1 = (uint)_DAT_149e71550;
      }
      _DAT_149e71550 = (short)uVar1 + 1;
      FUN_1416a3fe0((ulonglong)(uVar1 * 0x30) + _DAT_149e71548,lVar2);
      iVar4 = iVar4 + 1;
    }
    iVar4 = 0;
    _DAT_149e71558 = 0;
    while( true ) {
      FUN_145534890(auStack_68,&UNK_146785350,iVar4);
      lVar2 = FUN_141d83250(auStack_68);
      if (lVar2 == 0) break;
      uVar1 = (uint)_DAT_149e714d8;
      if (_DAT_149e714d8 == _DAT_149e714da) {
        FUN_14183c700(uVar1 + 0x10);
        uVar1 = (uint)_DAT_149e714d8;
      }
      _DAT_149e714d8 = (short)uVar1 + 1;
      func_0x0001416a4010((ulonglong)(uVar1 << 5) + _DAT_149e714d0,lVar2);
      iVar4 = iVar4 + 1;
    }
    iVar4 = 0;
    FUN_145534890(auStack_68,&UNK_146784f12,0);
    uVar3 = FUN_141d83250(auStack_68);
    FUN_145ce09f0(0x149e71620,uVar3);
    FUN_145534890(auStack_68,&UNK_146784f12,1);
    uVar3 = FUN_141d83250(auStack_68);
    FUN_145ce09f0(0x149e71678,uVar3);
    FUN_145534890(auStack_68,&UNK_146784f12,2);
    uVar3 = FUN_141d83250(auStack_68);
    FUN_145ce09f0(0x149e716d0,uVar3);
    FUN_145534890(auStack_68,&UNK_146784f12,3);
    uVar3 = FUN_141d83250(auStack_68);
    FUN_145ce09f0(0x149e71728,uVar3);
    FUN_145534890(auStack_68,&UNK_146784f12,4);
    uVar3 = FUN_141d83250(auStack_68);
    FUN_145ce09f0(0x149e71780,uVar3);
    FUN_145534890(auStack_68,&UNK_146784f39,0);
    uVar3 = FUN_141d83250(auStack_68);
    FUN_145ce09f0(0x149e717d8,uVar3);
    FUN_145534890(auStack_68,&UNK_146784f39,1);
    uVar3 = FUN_141d83250(auStack_68);
    FUN_145ce09f0(0x149e71830,uVar3);
    FUN_145534890(auStack_68,&UNK_146784f39,2);
    uVar3 = FUN_141d83250(auStack_68);
    FUN_145ce09f0(0x149e71888,uVar3);
    FUN_145534890(auStack_68,&UNK_146784f39,3);
    uVar3 = FUN_141d83250(auStack_68);
    FUN_145ce09f0(0x149e718e0,uVar3);
    FUN_145534890(auStack_68,&UNK_146784ee9,0);
    uVar3 = FUN_141d83250(auStack_68);
    FUN_145ce09f0(0x149e71938,uVar3);
    FUN_145534890(auStack_68,&UNK_146784ee9,1);
    uVar3 = FUN_141d83250(auStack_68);
    FUN_145ce09f0(0x149e71990,uVar3);
    FUN_145a60940();
    FUN_142aab350(0x149e71500,&UNK_1467860f2,0x149e71520);
    FUN_142aab350(0x149e71510,&UNK_1467860d0,0x149e71524);
    while( true ) {
      FUN_145534890(auStack_68,&UNK_146785361,iVar4);
      lVar2 = FUN_141d83250(auStack_68);
      if (lVar2 == 0) break;
      uVar1 = (uint)_DAT_149e71c10;
      if (_DAT_149e71c10 == _DAT_149e71c12) {
        FUN_141bd5010(uVar1 + 0x10);
        uVar1 = (uint)_DAT_149e71c10;
      }
      _DAT_149e71c10 = (short)uVar1 + 1;
      FUN_145ce09c0((ulonglong)(uVar1 * 0x28) + _DAT_149e71c08,lVar2);
      iVar4 = iVar4 + 1;
    }
    _DAT_149e71c18 = 0;
  }
  return;
}

