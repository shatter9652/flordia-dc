// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14196d2d0  size: 2225 bytes
// Name:    audCarAudioEntity::IsPlayingStartupSequence
// Subsystem: audio
// Class:   audCarAudioEntity
//
// Evidence:
//   GTAVSRC: audCarAudioEntity::IsPlayingStartupSequence  (game/audio/caraudioentity.cpp)
//   literal: MOBILE_PRERING
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141c3d3d0, FUN_1457e60b0, FUN_1457f9bc0, FUN_14196db90, FUN_145373ee0, FUN_1454aaa40, FUN_140e12db0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/audCarAudioEntity.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void audCarAudioEntity__IsPlayingStartupSequence(void)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  undefined4 uStack_4c;
  undefined *apuStack_48 [5];
  
  _DAT_149e708b0 = FUN_144860df0;
  uStack_4c = func_0x000144fc2180(0,&UNK_146787849);
  apuStack_48[0] = &UNK_144860e80;
  FUN_141c3d3d0(0x149e708b8,&uStack_4c,apuStack_48);
  FUN_145373ee0(apuStack_48,&UNK_14678521a,0);
  uVar2 = func_0x000144fc2180(0,apuStack_48);
  FUN_1454aaa40(0x14ab73a30,uVar2,0xe7a8cdf1,0);
  iVar4 = 1;
  do {
    FUN_145373ee0(apuStack_48,&UNK_14678521a,iVar4);
    uVar2 = func_0x000144fc2180(0,apuStack_48);
    cVar1 = FUN_1454aaa40(0x14ab73a30,uVar2,0xe7a8cdf1,0);
    if (cVar1 == '\0') break;
    bVar5 = iVar4 != 0x18;
    iVar4 = iVar4 + 1;
  } while (bVar5);
  FUN_145373ee0(apuStack_48,&UNK_1467852d7,0);
  uVar2 = func_0x000144fc2180(0,apuStack_48);
  FUN_1454aaa40(0x14ab73a30,uVar2,0x96c6e8ee,0);
  iVar4 = 1;
  do {
    FUN_145373ee0(apuStack_48,&UNK_1467852d7,iVar4);
    uVar2 = func_0x000144fc2180(0,apuStack_48);
    cVar1 = FUN_1454aaa40(0x14ab73a30,uVar2,0x96c6e8ee,0);
    if (cVar1 == '\0') break;
    bVar5 = iVar4 != 0x18;
    iVar4 = iVar4 + 1;
  } while (bVar5);
  FUN_140e12db0(0x149e708e8,0x2eb73c26,_DAT_1461679e0);
  FUN_14196db90(0x14aa4d770);
  FUN_14196db90(0x14aa4d7d8);
  FUN_14196db90(0x14aa4d840);
  FUN_14196db90(0x14aa4d8a8);
  FUN_14196db90(0x14aa4d910);
  FUN_14196db90(0x14aa4d978);
  FUN_14196db90(0x14aa4d9e0);
  FUN_14196db90(0x14aa4da48);
  FUN_14196db90(0x14aa4dab0);
  FUN_14196db90(0x14aa4db18);
  FUN_14196db90(0x14aa4db80);
  FUN_14196db90(0x14aa4dbe8);
  FUN_14196db90(0x14aa4dc50);
  FUN_14196db90(0x14aa4dcb8);
  FUN_14196db90(0x14aa4dd20);
  FUN_14196db90(0x14aa4dd88);
  FUN_14196db90(0x14aa4ddf0);
  FUN_14196db90(0x14aa4de58);
  FUN_14196db90(0x14aa4dec0);
  FUN_14196db90(0x14aa4df28);
  FUN_14196db90(0x14aa4df90);
  FUN_14196db90(0x14aa4dff8);
  FUN_14196db90(0x14aa4e060);
  FUN_14196db90(0x14aa4e0c8);
  FUN_14196db90(0x14aa4e130);
  FUN_14196db90(0x14aa4e198);
  FUN_14196db90(0x14aa4e200);
  FUN_14196db90(0x14aa4e268);
  FUN_14196db90(0x14aa4e2d0);
  FUN_14196db90(0x14aa4e338);
  FUN_14196db90(0x14aa4e3a0);
  FUN_14196db90(0x14aa4e408);
  FUN_14196db90(0x14aa4e470);
  FUN_14196db90(0x14aa4e4d8);
  FUN_14196db90(0x14aa4e540);
  FUN_14196db90(0x14aa4e5a8);
  FUN_14196db90(0x14aa4e610);
  FUN_14196db90(0x14aa4e678);
  FUN_14196db90(0x14aa4e6e0);
  FUN_14196db90(0x14aa4e748);
  lVar3 = 0;
  do {
    FUN_14196db90(lVar3 + 0x14aa4e820);
    lVar3 = lVar3 + 0xa0;
  } while (lVar3 != 16000);
  FUN_14196db90(0x14aa526a0);
  FUN_14196db90(0x14aa526e8);
  FUN_14196db90(0x14aa52730);
  FUN_14196db90(0x14aa52778);
  FUN_14196db90(0x14aa52808);
  FUN_14196db90(0x14aa52888);
  FUN_14196db90(0x14aa52908);
  FUN_14196db90(0x14aa52988);
  FUN_14196db90(0x14aa52a08);
  FUN_14196db90(0x14aa52a88);
  FUN_14196db90(0x14aa52b08);
  FUN_14196db90(0x14aa52b88);
  FUN_14196db90(0x14aa52c08);
  FUN_14196db90(0x14aa52c88);
  FUN_14196db90(0x14aa52d08);
  FUN_14196db90(0x14aa52d88);
  FUN_14196db90(0x14aa52e08);
  FUN_14196db90(0x14aa52e88);
  FUN_14196db90(0x14aa52f08);
  FUN_14196db90(0x14aa52f88);
  FUN_14196db90(0x14aa53008);
  FUN_14196db90(0x14aa53088);
  FUN_14196db90(0x14aa53108);
  FUN_14196db90(0x14aa53188);
  FUN_14196db90(0x14aa53208);
  FUN_14196db90(0x14aa53288);
  FUN_14196db90(0x14aa53308);
  FUN_14196db90(0x14aa53388);
  FUN_14196db90(0x14aa53408);
  FUN_14196db90(0x14aa53488);
  FUN_14196db90(0x14aa53508);
  FUN_14196db90(0x14aa53588);
  FUN_14196db90(0x14aa53608);
  FUN_14196db90(0x14aa53688);
  FUN_14196db90(0x14aa53708);
  FUN_14196db90(0x14aa53788);
  FUN_14196db90(0x14aa53888);
  FUN_14196db90(0x14aa538e8);
  FUN_14196db90(0x14aa53948);
  FUN_14196db90(0x14aa539a8);
  FUN_14196db90(0x14aa53a08);
  FUN_14196db90(0x14aa53a68);
  FUN_14196db90(0x14aa53ac8);
  FUN_14196db90(0x14aa53b28);
  FUN_14196db90(0x14aa53b88);
  FUN_14196db90(0x14aa53be8);
  FUN_14196db90(0x14aa53c48);
  FUN_14196db90(0x14aa53ca8);
  FUN_14196db90(0x14aa53d08);
  FUN_14196db90(0x14aa53d68);
  FUN_14196db90(0x14aa53dc8);
  FUN_14196db90(0x14aa53e28);
  FUN_14196db90(0x14aa53e88);
  FUN_14196db90(0x14aa53ee8);
  FUN_14196db90(0x14aa53f48);
  FUN_14196db90(0x14aa53fa8);
  FUN_14196db90(0x14aa54008);
  FUN_14196db90(0x14aa54068);
  FUN_14196db90(0x14aa540c8);
  FUN_14196db90(0x14aa54128);
  FUN_14196db90(0x14aa54188);
  FUN_14196db90(0x14aa541e8);
  FUN_14196db90(0x14aa54248);
  FUN_14196db90(0x14aa542a8);
  FUN_14196db90(0x14aa54308);
  FUN_14196db90(0x14aa54368);
  FUN_14196db90(0x14aa543c8);
  FUN_14196db90(0x14aa54428);
  FUN_14196db90(0x14aa54488);
  FUN_14196db90(0x14aa544e0);
  FUN_14196db90(0x14aa54538);
  FUN_14196db90(0x14aa54590);
  FUN_14196db90(0x14aa545e8);
  FUN_14196db90(0x14aa54640);
  FUN_14196db90(0x14aa54698);
  FUN_14196db90(0x14aa546f0);
  FUN_14196db90(0x14aa54748);
  FUN_14196db90(0x14aa547a0);
  FUN_14196db90(0x14aa547f8);
  FUN_14196db90(0x14aa54850);
  FUN_14196db90(0x14aa548a8);
  FUN_14196db90(0x14aa54900);
  FUN_14196db90(0x14aa54958);
  FUN_14196db90(0x14aa549b0);
  FUN_14196db90(0x14aa54a08);
  FUN_14196db90(0x14aa54a60);
  FUN_14196db90(0x14aa54ab8);
  FUN_14196db90(0x14aa54b10);
  FUN_14196db90(0x14aa54b68);
  FUN_14196db90(0x14aa54bc0);
  FUN_14196db90(0x14aa54c18);
  FUN_14196db90(0x14aa54c70);
  FUN_14196db90(0x14aa54cc8);
  FUN_14196db90(0x14aa54d20);
  FUN_14196db90(0x14aa54d78);
  FUN_14196db90(0x14aa54dd0);
  FUN_14196db90(0x14aa54e28);
  FUN_14196db90(0x14aa54e80);
  FUN_14196db90(0x14aa54ed8);
  FUN_14196db90(0x14aa54f30);
  FUN_14196db90(0x14aa54f88);
  FUN_14196db90(0x14aa54fe0);
  FUN_14196db90(0x14aa55038);
  FUN_14196db90(0x14aa55090);
  FUN_14196db90(0x14aa550e8);
  FUN_14196db90(0x14aa55140);
  FUN_14196db90(0x14aa55198);
  FUN_14196db90(0x14aa551f0);
  FUN_1457e60b0();
  FUN_1457f9bc0(0x14ab73a30,0xe7a8cdf1,0);
  return;
}

