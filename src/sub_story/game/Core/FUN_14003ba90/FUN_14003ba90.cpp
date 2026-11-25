// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14003ba90  size: 680 bytes
// Name:    FUN_14003ba90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14003bd50, FUN_144e4cc20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14003ba90(undefined8 param_1,void *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  void *pvVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auStack_648 [32];
  undefined1 auStack_628 [32];
  undefined1 auStack_608 [32];
  undefined1 auStack_5e8 [32];
  undefined1 auStack_5c8 [32];
  undefined1 auStack_5a8 [32];
  undefined1 auStack_588 [32];
  undefined1 auStack_568 [32];
  undefined1 auStack_548 [32];
  undefined1 auStack_528 [32];
  undefined1 auStack_508 [32];
  undefined1 auStack_4e8 [32];
  undefined1 auStack_4c8 [32];
  undefined1 auStack_4a8 [32];
  undefined1 auStack_488 [32];
  undefined1 auStack_468 [32];
  undefined1 auStack_448 [32];
  undefined1 auStack_428 [32];
  undefined1 auStack_408 [32];
  undefined1 auStack_3e8 [32];
  undefined1 auStack_3c8 [32];
  undefined1 auStack_3a8 [32];
  undefined1 auStack_388 [32];
  undefined1 auStack_368 [32];
  undefined1 auStack_348 [32];
  undefined1 auStack_328 [32];
  undefined1 auStack_308 [32];
  undefined1 auStack_2e8 [32];
  undefined1 auStack_2c8 [32];
  undefined1 auStack_2a8 [32];
  undefined1 auStack_288 [32];
  undefined1 auStack_268 [32];
  undefined1 auStack_248 [32];
  undefined1 auStack_228 [32];
  undefined1 auStack_208 [32];
  undefined1 auStack_1e8 [32];
  undefined1 auStack_1c8 [32];
  undefined1 auStack_1a8 [32];
  undefined1 auStack_188 [32];
  undefined1 auStack_168 [32];
  undefined1 auStack_148 [32];
  undefined1 auStack_128 [32];
  undefined1 auStack_108 [32];
  undefined1 auStack_e8 [32];
  undefined1 auStack_c8 [32];
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [32];
  
  auVar6._0_12_ = ZEXT812(0);
  auVar6._12_4_ = 0;
  auStack_88 = ZEXT1632(auVar6);
  auStack_108 = ZEXT1632(auVar6);
  auStack_148 = ZEXT1632(auVar6);
  auStack_128 = auStack_148;
  auStack_e8 = auStack_108;
  auStack_c8 = auStack_108;
  auStack_a8 = auStack_108;
  auStack_68 = auStack_88;
  pvVar2 = strcspn((char)param_2,'6');
  strncpy(auStack_148,param_2,(void *)(longlong)(int)pvVar2);
  auVar7._0_12_ = ZEXT812(0);
  auVar7._12_4_ = 0;
  auStack_188 = ZEXT1632(auVar7);
  auStack_208 = ZEXT1632(auVar7);
  auStack_308 = ZEXT1632(auVar7);
  auStack_508 = ZEXT1632(auVar7);
  auStack_548 = ZEXT1632(auVar7);
  auStack_528 = auStack_548;
  auStack_4e8 = auStack_508;
  auStack_4c8 = auStack_508;
  auStack_4a8 = auStack_508;
  auStack_488 = auStack_508;
  auStack_468 = auStack_508;
  auStack_448 = auStack_508;
  auStack_428 = auStack_508;
  auStack_408 = auStack_508;
  auStack_3e8 = auStack_508;
  auStack_3c8 = auStack_508;
  auStack_3a8 = auStack_508;
  auStack_388 = auStack_508;
  auStack_368 = auStack_508;
  auStack_348 = auStack_508;
  auStack_328 = auStack_508;
  auStack_2e8 = auStack_308;
  auStack_2c8 = auStack_308;
  auStack_2a8 = auStack_308;
  auStack_288 = auStack_308;
  auStack_268 = auStack_308;
  auStack_248 = auStack_308;
  auStack_228 = auStack_308;
  auStack_1e8 = auStack_208;
  auStack_1c8 = auStack_208;
  auStack_1a8 = auStack_208;
  auStack_168 = auStack_188;
  FUN_144e4cc20(auStack_248,&UNK_146789792,auStack_148,param_3);
  FUN_144e4cc20(auStack_348,&UNK_14678979a,auStack_148,param_3);
  FUN_144e4cc20(auStack_448,&UNK_146789809,auStack_148,param_4);
  FUN_144e4cc20(auStack_548,&UNK_14678983e,auStack_148,param_4);
  auVar8._0_12_ = ZEXT812(0);
  auVar8._12_4_ = 0;
  auStack_588 = ZEXT1632(auVar8);
  auStack_608 = ZEXT1632(auVar8);
  auStack_648 = ZEXT1632(auVar8);
  auStack_628 = auStack_648;
  auStack_5e8 = auStack_608;
  auStack_5c8 = auStack_608;
  auStack_5a8 = auStack_608;
  auStack_568 = auStack_588;
  lVar3 = FUN_14003bd50(param_1,auStack_248);
  puVar4 = auStack_248;
  puVar5 = auStack_448;
  if ((lVar3 == 0) &&
     (lVar3 = FUN_14003bd50(param_1,auStack_348), puVar4 = auStack_348, puVar5 = auStack_548,
     lVar3 == 0)) {
    return;
  }
  lVar1 = func_0x000145f407f0(puVar4);
  FUN_144e4cc20(auStack_648,&UNK_14677ca1b,puVar5,lVar3 + lVar1);
  func_0x000145352510(param_1,auStack_648,0x80);
  return;
}

