// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 143ebde80  size: 1084 bytes
// Name:    rlCloud::CreateUrl
// Subsystem: core
// Class:   rlCloud
//
// Evidence:
//   GTAVSRC: rlCloud::CreateUrl  (rage/base/src/rline/cloud/rlcloud.cpp)
//   literal: cloudservices/
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141fb27c0, FUN_1402675a0, FUN_1457d1ec0, FUN_1411d04f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/rlCloud.h"


undefined8
rlCloud__CreateUrl(undefined8 *param_1,undefined4 param_2,undefined4 param_3,uint param_4,
                  undefined1 *param_5,undefined8 param_6,longlong param_7)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_2c8 [272];
  char acStack_1b8 [272];
  undefined1 auStack_a8 [128];
  
  func_0x0001451c4230();
  cVar1 = FUN_1411d04f0(param_1,&UNK_1467897f4);
  if (cVar1 == '\0') {
    return 0;
  }
  lVar2 = func_0x000144f507b0();
  FUN_141fb27c0(auStack_2c8,&UNK_1467897fc,*(undefined4 *)(lVar2 + 0x14));
  cVar1 = FUN_1411d04f0(param_1,auStack_2c8);
  if (cVar1 == '\0') {
    return 0;
  }
  cVar1 = FUN_1411d04f0(param_1,&UNK_14678973f);
  if (cVar1 == '\0') {
    return 0;
  }
  uVar3 = func_0x000145eff790(param_2);
  FUN_141fb27c0(auStack_2c8,&UNK_1467897a1,uVar3);
  cVar1 = FUN_1411d04f0(param_1,auStack_2c8);
  if (cVar1 == '\0') {
    return 0;
  }
  switch(param_2) {
  case 0:
    cVar1 = func_0x000140b85020(CONCAT71(0x14675b9,*param_5));
    if (cVar1 != '\0') goto code_r0x000143ebdf76;
    uVar3 = 0x191;
code_r0x000143ebe25d:
    FUN_1457d1ec0(0x146c699c8,1,uVar3,0xc185d359);
    break;
  case 2:
    cVar1 = func_0x000140b85020(CONCAT71(0x14675b9,*param_5));
    if (cVar1 == '\0') {
      uVar3 = 0x19f;
      goto code_r0x000143ebe25d;
    }
code_r0x000143ebdf76:
    uVar3 = func_0x000143ebe5f0(param_3);
    FUN_141fb27c0(auStack_2c8,&UNK_1467897a1,uVar3);
    cVar1 = FUN_1411d04f0(param_1,auStack_2c8);
    if (cVar1 != '\0') {
      puVar5 = (undefined *)FUN_143ebe610(param_5);
code_r0x000143ebe008:
      FUN_141fb27c0(auStack_2c8,&UNK_1467897a1,puVar5);
      cVar1 = FUN_1411d04f0(param_1,auStack_2c8);
      goto code_r0x000143ebe01b;
    }
    break;
  case 3:
    uVar3 = func_0x000144f507b0();
    FUN_141fb27c0(auStack_2c8,&UNK_1467897a1,uVar3);
    cVar1 = FUN_1411d04f0(param_1,auStack_2c8);
    if ((param_4 >> 0x18 & 1) == 0) {
      if (cVar1 == '\0') break;
      puVar5 = &UNK_146778a23;
      goto code_r0x000143ebe008;
    }
code_r0x000143ebe01b:
    if (cVar1 != '\0') goto code_r0x000143ebe023;
    break;
  case 4:
code_r0x000143ebe023:
    FUN_1411d05a0(acStack_1b8,param_6,0x101);
    lVar2 = func_0x000145f407f0();
    if (lVar2 != 0) {
      lVar4 = 0;
      do {
        if (acStack_1b8[lVar4] == '\\') {
          acStack_1b8[lVar4] = '/';
        }
        lVar4 = lVar4 + 1;
      } while (lVar2 != lVar4);
    }
    FUN_145c8fbb0(acStack_1b8,acStack_1b8);
    cVar1 = FUN_1411d04f0(param_1,acStack_1b8);
    if (cVar1 == '\0') {
      FUN_1402675a0(0x146c699c8,4);
      uVar3 = 0x1bf;
      uVar6 = 0xc3a0ef4;
      goto code_r0x000143ebe2b2;
    }
    uVar3 = FUN_1452d5b70(*param_1,*(undefined4 *)((longlong)param_1 + 0x1c));
    if (param_7 != 0) {
      func_0x0001451c4230(param_7);
      lVar2 = func_0x000145f405b0(uVar3,&UNK_14677c596);
      if (lVar2 == 0) {
        uVar3 = 0x1ca;
        uVar6 = 0x5e3b5d17;
        goto code_r0x000143ebe2b2;
      }
      cVar1 = FUN_1411d04f0(param_7,lVar2 + 0xe);
      if (cVar1 == '\0') {
        FUN_1402675a0(0x146c699c8,4);
        uVar3 = 0x1cd;
        uVar6 = 0xefe0080f;
        goto code_r0x000143ebe2b2;
      }
    }
    lVar2 = FUN_141a76020(uVar3,auStack_a8,0x80);
    if (lVar2 == 0) {
      uVar3 = func_0x000144f507b0();
      lVar2 = FUN_141a75fa0(uVar3);
      if (lVar2 == 0) {
        FUN_1402675a0(0x146c699c8,4);
        return 0;
      }
    }
    FUN_141fb27c0(acStack_1b8,&UNK_14677cdbc,lVar2);
    cVar1 = FUN_14589e9b0(param_1,acStack_1b8);
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_1402675a0(0x146c699c8,4);
    uVar3 = 0x1dd;
    uVar6 = 0xaf49dcc8;
    goto code_r0x000143ebe2b2;
  }
  FUN_1402675a0(0x146c699c8,4);
  uVar3 = 0x1b2;
  uVar6 = 0xcc5d4c30;
code_r0x000143ebe2b2:
  FUN_1457d1ec0(0x146c699c8,1,uVar3,uVar6);
  return 0;
}

