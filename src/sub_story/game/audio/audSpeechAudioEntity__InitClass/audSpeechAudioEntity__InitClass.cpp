// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 145bfcef0  size: 2065 bytes
// Name:    audSpeechAudioEntity::InitClass
// Subsystem: audio
// Class:   audSpeechAudioEntity
//
// Evidence:
//   GTAVSRC: audSpeechAudioEntity::InitClass  (game/audio/speechaudioentity.cpp)
//   literal: SCRIPT_%s_%s_VOL
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145271bd0, FUN_145534890, FUN_140e12db0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/audSpeechAudioEntity.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void audSpeechAudioEntity__InitClass(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auVar5 [64];
  undefined1 auStack_98 [88];
  
  FUN_145271bd0(0x147bc85d0,0x98697731);
  FUN_145271bd0(0x147bc8608,0x8e1539ec);
  FUN_145271bd0(0x147bc8640,0xb695979c);
  FUN_145271bd0(0x147bc8678,0x9fb0855d);
  FUN_145271bd0(0x147bc86b0,0xef1c62c1);
  FUN_145271bd0(0x147bc86e8,0x16e7ecaa);
  FUN_145271bd0(0x147bc8720,0x958783e8);
  FUN_145271bd0(0x147bc87c8,0x9bcc3be);
  FUN_145271bd0(0x147bc8758,0xf284ba25);
  FUN_145271bd0(0x147bc8790,0x68780037);
  FUN_145271bd0(0x147bc8800,0x2ac9741f);
  FUN_145271bd0(0x147bc8838,0x291663eb);
  FUN_145271bd0(0x147bc8870,0x135291e6);
  FUN_145271bd0(0x147bc88a8,0xc991e98f);
  FUN_145271bd0(0x147bc88e0,0xcd6f1a79);
  FUN_145271bd0(0x147bc8918,0xf59c80ae);
  FUN_145271bd0(0x147bc8950,0x4542bcae);
  FUN_145271bd0(0x147bc8988,0x6888a402);
  FUN_145271bd0(0x147bc89c0,0x4c8b2aed);
  FUN_145271bd0(0x147bc89f8,0xc09b6c57);
  FUN_145271bd0(0x147bc8b20,0x4ffadd74);
  FUN_145271bd0(0x147bc8b58,0x865d8415);
  FUN_145534890(auStack_98,&UNK_14678751b,&UNK_1467875eb);
  _DAT_147bc8b90 = func_0x000144fc2180(0,auStack_98);
  FUN_145534890(auStack_98,&UNK_146787535,&UNK_1467875eb);
  _DAT_147bc8ba4 = func_0x000144fc2180(0,auStack_98);
  FUN_145534890(auStack_98,&UNK_146787529,&UNK_1467875eb);
  _DAT_147bc8bb8 = func_0x000144fc2180(0,auStack_98);
  FUN_145534890(auStack_98,&UNK_14678751b,&UNK_146786ff8);
  _DAT_147bc8b94 = func_0x000144fc2180(0,auStack_98);
  FUN_145534890(auStack_98,&UNK_146787535,&UNK_146786ff8);
  _DAT_147bc8ba8 = func_0x000144fc2180(0,auStack_98);
  FUN_145534890(auStack_98,&UNK_146787529,&UNK_146786ff8);
  _DAT_147bc8bbc = func_0x000144fc2180(0,auStack_98);
  FUN_145534890(auStack_98,&UNK_14678751b,&UNK_146787676);
  _DAT_147bc8b98 = func_0x000144fc2180(0,auStack_98);
  FUN_145534890(auStack_98,&UNK_146787535,&UNK_146787676);
  _DAT_147bc8bac = func_0x000144fc2180(0,auStack_98);
  FUN_145534890(auStack_98,&UNK_146787529,&UNK_146787676);
  _DAT_147bc8bc0 = func_0x000144fc2180(0,auStack_98);
  FUN_145534890(auStack_98,&UNK_14678751b,&UNK_146787304);
  _DAT_147bc8b9c = func_0x000144fc2180(0,auStack_98);
  FUN_145534890(auStack_98,&UNK_146787535,&UNK_146787304);
  _DAT_147bc8bb0 = func_0x000144fc2180(0,auStack_98);
  FUN_145534890(auStack_98,&UNK_146787529,&UNK_146787304);
  _DAT_147bc8bc4 = func_0x000144fc2180(0,auStack_98);
  FUN_145534890(auStack_98,&UNK_14678751b,&UNK_146786905);
  _DAT_147bc8ba0 = func_0x000144fc2180(0,auStack_98);
  FUN_145534890(auStack_98,&UNK_146787535,&UNK_146786905);
  _DAT_147bc8bb4 = func_0x000144fc2180(0,auStack_98);
  FUN_145534890(auStack_98,&UNK_146787529,&UNK_146786905);
  _DAT_147bc8bc8 = func_0x000144fc2180(0,auStack_98);
  lVar4 = 0x10;
  puVar3 = (undefined8 *)&UNK_14631e070;
  do {
    uVar1 = *puVar3;
    FUN_145534890(auStack_98,&UNK_1467874ed,uVar1,&UNK_1467875eb);
    uVar2 = func_0x000144fc2180(0,auStack_98);
    *(undefined4 *)(lVar4 + 0x147bc8a20) = uVar2;
    FUN_145534890(auStack_98,&UNK_14678750d,uVar1,&UNK_1467875eb);
    uVar2 = func_0x000144fc2180(0,auStack_98);
    *(undefined4 *)(lVar4 + 0x147bc8a70) = uVar2;
    FUN_145534890(auStack_98,&UNK_1467874fe,uVar1,&UNK_1467875eb);
    uVar2 = func_0x000144fc2180(0,auStack_98);
    *(undefined4 *)(lVar4 + 0x147bc8ac0) = uVar2;
    FUN_145534890(auStack_98,&UNK_1467874ed,uVar1,&UNK_146786ff8);
    uVar2 = func_0x000144fc2180(0,auStack_98);
    *(undefined4 *)(lVar4 + 0x147bc8a24) = uVar2;
    FUN_145534890(auStack_98,&UNK_14678750d,uVar1,&UNK_146786ff8);
    uVar2 = func_0x000144fc2180(0,auStack_98);
    *(undefined4 *)(lVar4 + 0x147bc8a74) = uVar2;
    FUN_145534890(auStack_98,&UNK_1467874fe,uVar1,&UNK_146786ff8);
    uVar2 = func_0x000144fc2180(0,auStack_98);
    *(undefined4 *)(lVar4 + 0x147bc8ac4) = uVar2;
    FUN_145534890(auStack_98,&UNK_1467874ed,uVar1,&UNK_146787676);
    uVar2 = func_0x000144fc2180(0,auStack_98);
    *(undefined4 *)(lVar4 + 0x147bc8a28) = uVar2;
    FUN_145534890(auStack_98,&UNK_14678750d,uVar1,&UNK_146787676);
    uVar2 = func_0x000144fc2180(0,auStack_98);
    *(undefined4 *)(lVar4 + 0x147bc8a78) = uVar2;
    FUN_145534890(auStack_98,&UNK_1467874fe,uVar1,&UNK_146787676);
    uVar2 = func_0x000144fc2180(0,auStack_98);
    *(undefined4 *)(lVar4 + 0x147bc8ac8) = uVar2;
    FUN_145534890(auStack_98,&UNK_1467874ed,uVar1,&UNK_146787304);
    uVar2 = func_0x000144fc2180(0,auStack_98);
    *(undefined4 *)(lVar4 + 0x147bc8a2c) = uVar2;
    FUN_145534890(auStack_98,&UNK_14678750d,uVar1,&UNK_146787304);
    uVar2 = func_0x000144fc2180(0,auStack_98);
    *(undefined4 *)(lVar4 + 0x147bc8a7c) = uVar2;
    FUN_145534890(auStack_98,&UNK_1467874fe,uVar1,&UNK_146787304);
    uVar2 = func_0x000144fc2180(0,auStack_98);
    *(undefined4 *)(lVar4 + 0x147bc8acc) = uVar2;
    FUN_145534890(auStack_98,&UNK_1467874ed,uVar1,&UNK_146786905);
    uVar2 = func_0x000144fc2180(0,auStack_98);
    *(undefined4 *)(lVar4 + 0x147bc8a30) = uVar2;
    FUN_145534890(auStack_98,&UNK_14678750d,uVar1,&UNK_146786905);
    uVar2 = func_0x000144fc2180(0,auStack_98);
    *(undefined4 *)(lVar4 + 0x147bc8a80) = uVar2;
    FUN_145534890(auStack_98,&UNK_1467874fe,uVar1,&UNK_146786905);
    uVar2 = func_0x000144fc2180(0,auStack_98);
    *(undefined4 *)(lVar4 + 0x147bc8ad0) = uVar2;
    lVar4 = lVar4 + 0x14;
    puVar3 = puVar3 + 1;
  } while (lVar4 != 0x60);
  FUN_140e12db0(0x147bc8bcc,0xe6f09082,_DAT_14615bdb4);
  FUN_140e12db0(0x147bc8bdc,0x9e4ae835,_DAT_14614f808);
  auVar5 = ZEXT464(_DAT_146159fe4);
  FUN_140e12db0(0x147bc8bec,0x70d6f3e3,_DAT_146159fe4);
  FUN_140e12db0(0x147bc8bfc,0xe452c60f,auVar5._0_8_);
  FUN_140e12db0(0x147bc8c0c,0x6035d5ff,_DAT_145fc6edc);
  FUN_140e12db0(0x147bc8c1c,0x522ce9,_DAT_146159c28);
  FUN_140e12db0(0x147bc8c2c,0x62fbff6d,_DAT_14615bbb0);
  FUN_140e12db0(0x147bc8c3c,0x4574b72e,auVar5._0_8_);
  FUN_140e12db0(0x147bc8c4c,0xba30d9f9,_DAT_146159e20);
  FUN_140e12db0(0x147bc8c5c,0xb7d12b68,_DAT_14615f040);
  auVar5 = ZEXT464(_DAT_145fc6ed8);
  FUN_140e12db0(0x147bc8c8c,0xe0f3a512,_DAT_145fc6ed8);
  FUN_140e12db0(0x147bc8c6c,0x1898478,_DAT_146159bd0);
  FUN_140e12db0(0x147bc8c7c,0x81f95954,auVar5._0_8_);
  FUN_140e12db0(0x147bc8c9c,0x25d7df21,auVar5._0_8_);
  FUN_140e12db0(0x147bc8cac,0xf2242454,_DAT_14615bcb8);
  FUN_140e12db0(0x147bc8cbc,0x58c3a3d9,_DAT_1461654a8);
  FUN_140e12db0(0x147bc8ccc,0xc29777c0,_DAT_146161f28);
  FUN_140e12db0(0x147bc8cdc,0x3efcb7a2,_DAT_146159bd4);
  FUN_140e12db0(0x147bc8cec,0x5ef70bd9,_DAT_14615a2c4);
  return;
}

