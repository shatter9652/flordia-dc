// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 141e77c40  size: 1151 bytes
// Name:    audSound::GetStaticPool
// Subsystem: audio
// Class:   audSound
//
// Evidence:
//   GTAVSRC: audSound::GetStaticPool  (rage/base/src/audiosoundtypes/soundclassfactory.h)
//   literal: audCollapsingStereoSound
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/audSound.h"


undefined4 audSound__GetStaticPool(void)

{
  undefined *puStack_4f8;
  undefined4 uStack_4f0;
  undefined *puStack_4e8;
  undefined4 uStack_4e0;
  undefined *puStack_4d8;
  undefined4 uStack_4d0;
  undefined *puStack_4c8;
  undefined4 uStack_4c0;
  undefined *puStack_4b8;
  undefined4 uStack_4b0;
  undefined *puStack_4a8;
  undefined4 uStack_4a0;
  undefined *puStack_498;
  undefined4 uStack_490;
  undefined *puStack_488;
  undefined4 uStack_480;
  undefined *puStack_478;
  undefined4 uStack_470;
  undefined *puStack_468;
  undefined4 uStack_460;
  undefined *puStack_458;
  undefined4 uStack_450;
  undefined *puStack_448;
  undefined4 uStack_440;
  undefined *puStack_438;
  undefined4 uStack_430;
  undefined *puStack_428;
  undefined4 uStack_420;
  undefined *puStack_418;
  undefined4 uStack_410;
  undefined *puStack_408;
  undefined4 uStack_400;
  undefined *puStack_3f8;
  undefined4 uStack_3f0;
  undefined *puStack_3e8;
  undefined4 uStack_3e0;
  undefined *puStack_3d8;
  undefined4 uStack_3d0;
  undefined *puStack_3c8;
  undefined4 uStack_3c0;
  undefined *puStack_3b8;
  undefined4 uStack_3b0;
  undefined *puStack_3a8;
  undefined4 uStack_3a0;
  undefined *puStack_398;
  undefined4 uStack_390;
  undefined *puStack_388;
  undefined4 uStack_380;
  undefined *puStack_378;
  undefined4 uStack_370;
  undefined *puStack_368;
  undefined4 uStack_360;
  undefined *puStack_358;
  undefined4 uStack_350;
  undefined *puStack_348;
  undefined4 uStack_340;
  undefined *puStack_338;
  undefined4 uStack_330;
  undefined *puStack_328;
  undefined4 uStack_320;
  undefined *puStack_318;
  undefined4 uStack_310;
  undefined *puStack_308;
  undefined4 uStack_300;
  undefined *puStack_2f8;
  undefined4 uStack_2f0;
  undefined *puStack_2e8;
  undefined4 uStack_2e0;
  undefined *puStack_2d8;
  undefined4 uStack_2d0;
  undefined *puStack_2c8;
  undefined4 uStack_2c0;
  undefined *puStack_2b8;
  undefined4 uStack_2b0;
  undefined *puStack_2a8;
  undefined4 uStack_2a0;
  undefined *puStack_298;
  undefined4 uStack_290;
  undefined *puStack_288;
  undefined4 uStack_280;
  undefined *puStack_278;
  undefined4 uStack_270;
  undefined *puStack_268;
  undefined4 uStack_260;
  undefined *puStack_258;
  undefined4 uStack_250;
  undefined *puStack_248;
  undefined4 uStack_240;
  undefined *puStack_238;
  undefined4 uStack_230;
  undefined *puStack_228;
  undefined4 uStack_220;
  undefined *puStack_218;
  undefined4 uStack_210;
  undefined *puStack_208;
  undefined4 uStack_200;
  undefined *puStack_1f8;
  undefined4 uStack_1f0;
  
  puStack_4f8 = &UNK_14678434b;
  uStack_4f0 = 0x100;
  puStack_4e8 = &UNK_14678425d;
  uStack_4e0 = 0x1d0;
  puStack_4d8 = &UNK_146784309;
  uStack_4d0 = 0x230;
  puStack_4c8 = &UNK_1467840b6;
  uStack_4c0 = 0x1e8;
  puStack_4b8 = &UNK_146784235;
  uStack_4b0 = 0x130;
  puStack_4a8 = &UNK_1467840a7;
  uStack_4a0 = 0x1a0;
  puStack_498 = &UNK_146784086;
  uStack_490 = 600;
  puStack_488 = &UNK_1467841a1;
  uStack_480 = 0x1b0;
  puStack_478 = &UNK_14678426d;
  uStack_470 = 0x1d0;
  puStack_468 = &UNK_14678438b;
  uStack_460 = 0x208;
  puStack_458 = &UNK_146784339;
  uStack_450 = 0x240;
  puStack_448 = &UNK_1467840fd;
  uStack_440 = 0x150;
  puStack_438 = &UNK_14678431a;
  uStack_430 = 0x138;
  puStack_428 = &UNK_1467842d7;
  uStack_420 = 0x1f0;
  puStack_418 = &UNK_1467841da;
  uStack_410 = 0x108;
  puStack_408 = &UNK_146784367;
  uStack_400 = 0x1a0;
  puStack_3f8 = &UNK_14678413f;
  uStack_3f0 = 0x1a0;
  puStack_3e8 = &UNK_146784038;
  uStack_3e0 = 0x240;
  puStack_3d8 = &UNK_146784000;
  uStack_3d0 = 0x1a0;
  puStack_3c8 = &UNK_1467840c7;
  uStack_3c0 = 0x210;
  puStack_3b8 = &UNK_1467841fe;
  uStack_3b0 = 0x128;
  puStack_3a8 = &UNK_146784096;
  uStack_3a0 = 0x218;
  puStack_398 = &UNK_14678418d;
  uStack_390 = 0x170;
  puStack_388 = &UNK_1467843e2;
  uStack_380 = 0x240;
  puStack_378 = &UNK_146784213;
  uStack_370 = 0x1b8;
  puStack_368 = &UNK_1467842a6;
  uStack_360 = 0x148;
  puStack_358 = &UNK_1467842bc;
  uStack_350 = 0x138;
  puStack_348 = &UNK_1467841c4;
  uStack_340 = 0x1e8;
  puStack_338 = &UNK_14678429b;
  uStack_330 = 0x128;
  puStack_328 = &UNK_146784116;
  uStack_320 = 600;
  puStack_318 = &UNK_14678415b;
  uStack_310 = 0x260;
  puStack_308 = &UNK_146784073;
  uStack_300 = 0x208;
  puStack_2f8 = &UNK_14678412c;
  uStack_2f0 = 0x1a0;
  puStack_2e8 = &UNK_146784176;
  uStack_2e0 = 0x118;
  puStack_2d8 = &UNK_14678405c;
  uStack_2d0 = 0x110;
  puStack_2c8 = &UNK_146784244;
  uStack_2c0 = 0x1c0;
  puStack_2b8 = &UNK_146784222;
  uStack_2b0 = 0x1d0;
  puStack_2a8 = &UNK_146784016;
  uStack_2a0 = 0x1f0;
  puStack_298 = &UNK_1467843c9;
  uStack_290 = 0x120;
  puStack_288 = &UNK_1467843a9;
  uStack_280 = 0x110;
  puStack_278 = &UNK_1467842ef;
  uStack_270 = 0x1d0;
  puStack_268 = &UNK_14678404c;
  uStack_260 = 0x230;
  puStack_258 = &UNK_146784026;
  uStack_250 = 0x110;
  puStack_248 = &UNK_1467841b4;
  uStack_240 = 0x108;
  puStack_238 = &UNK_14678437a;
  uStack_230 = 0x1e8;
  puStack_228 = &UNK_1467840e1;
  uStack_220 = 0x110;
  puStack_218 = &UNK_146784354;
  uStack_210 = 0x138;
  puStack_208 = &UNK_146784329;
  uStack_200 = 0x100;
  puStack_1f8 = &UNK_1467841ed;
  uStack_1f0 = 0x110;
  qsort(&puStack_4f8,0x31,0x10,&UNK_1425a86e0);
  return uStack_4f0;
}

