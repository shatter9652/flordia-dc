// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1441dfc60  size: 1206 bytes
// Name:    netHttpRequest::MakeHeader
// Subsystem: core
// Class:   netHttpRequest
//
// Evidence:
//   GTAVSRC: netHttpRequest::MakeHeader  (rage/base/src/net/http.cpp)
//   literal: %s %s%s HTTP/1.1
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1420b64f0, FUN_1417388c0, netXblHttp::FreeAuthToken, FUN_1402675a0, FUN_1457d1ec0, FUN_14200fe20, FUN_1411d0210, sysUri::GetCompleteUri, FUN_1411d0540, FUN_1452d5b70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/netHttpRequest.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong netHttpRequest__MakeHeader(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  short sVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined *puVar11;
  undefined7 uStack_878;
  undefined4 uStack_871;
  undefined6 uStack_868;
  undefined2 uStack_862;
  undefined6 uStack_860;
  undefined8 uStack_858;
  undefined7 uStack_850;
  undefined4 uStack_849;
  undefined1 auStack_838 [2048];
  
  if (*(char *)(param_1 + 0x1e08) == '\t') {
    bVar1 = *(byte *)(param_1 + 0x1f89);
    iVar5 = func_0x000144db6ef0(*(undefined4 *)(param_1 + 0x1db4));
    if (iVar5 == 0) {
      bVar3 = 0;
    }
    else {
      bVar3 = FUN_1420b64f0(*(undefined8 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x9c),
                            &UNK_14677a47f);
      bVar3 = bVar3 ^ 1;
    }
    uStack_878 = 0x25203a74736f48;
    uStack_860 = 0xa0d64253a;
    uStack_871 = 0xa0d73;
    uStack_868 = 0x203a74736f48;
    uStack_862 = 0x7325;
    uStack_858 = _DAT_1465b5250;
    uStack_850 = (undefined7)_UNK_1465b5258;
    uStack_849 = 0xa0d31;
    if ((bVar1 & 0x20) == 0) {
      cVar4 = FUN_1417388c0(*(undefined4 *)(param_1 + 0x1ddc),*(undefined1 *)(param_1 + 0x1de4));
      if (cVar4 == '\0') {
        uVar8 = func_0x0001441db770(param_1);
        puVar11 = (undefined *)
                  FUN_1452d5b70(*(undefined8 *)(param_1 + 0x1d70),*(undefined4 *)(param_1 + 0x1d8c))
        ;
        uVar9 = func_0x000141140dc0(*(undefined1 *)(param_1 + 0x18dc));
      }
      else {
        uVar8 = sysUri__GetCompleteUri();
        uVar9 = func_0x000141140dc0(*(undefined1 *)(param_1 + 0x18dc));
        puVar11 = &UNK_14678d1bb;
      }
      FUN_14200fe20(auStack_838,&uStack_858,uVar9,uVar8,puVar11);
      uVar6 = func_0x000145f407f0(auStack_838);
      cVar4 = FUN_1411d0540(param_2,auStack_838,uVar6);
      if (cVar4 == '\0') {
        FUN_1402675a0(0x146cb4798,4);
        uVar8 = 0xe0e;
      }
      else {
        sVar2 = *(short *)(param_1 + 0x1964);
        if (((sVar2 == 0) || (sVar2 == 0x50)) || (sVar2 == 0x1bb)) {
          FUN_14200fe20(auStack_838,&uStack_878,param_1 + 0x18e4,sVar2,puVar11);
        }
        else {
          FUN_14200fe20(auStack_838,&uStack_868,param_1 + 0x18e4,sVar2,puVar11);
        }
        uVar6 = func_0x000145f407f0(auStack_838);
        cVar4 = FUN_1411d0540(param_2,auStack_838,uVar6);
        if (cVar4 != '\0') goto LAB_1441dfe12;
        FUN_1402675a0(0x146cb4798,4);
        uVar8 = 0xe23;
      }
      uVar9 = 0x70f4f50c;
    }
    else {
LAB_1441dfe12:
      *(undefined1 *)(param_1 + 0x1ed4) = 0;
      if ((*(byte *)(param_1 + 0x18dc) & 0xfe) == 2) {
        if ((*(byte *)(param_1 + 0x1e18) & 2) == 0) {
          cVar4 = func_0x0001404e3730(*(undefined1 *)(param_1 + 0x1f89));
          if ((cVar4 == '\0') || (1 < *(ulonglong *)(param_1 + 0x18))) {
            *(undefined1 *)(param_1 + 0x1ed4) = 1;
            cVar4 = FUN_1411d0210(param_1,&UNK_146781205,&UNK_1467849e7);
            if (cVar4 == '\0') {
              FUN_1402675a0(0x146cb4798,4);
              uVar8 = 0xe4a;
              uVar9 = 0x8ee9f7b9;
              goto LAB_1441e00fb;
            }
            goto LAB_1441dfed3;
          }
        }
        if ((bVar1 & 0x20) == 0) {
          uVar6 = func_0x0001441e0120(*(undefined8 *)(param_1 + 8),0);
          cVar4 = netXblHttp__FreeAuthToken(param_1,uVar6);
          if (cVar4 == '\0') {
            FUN_1402675a0(0x146cb4798,4);
            uVar8 = 0xe51;
            uVar9 = 0xf6a338af;
            goto LAB_1441e00fb;
          }
        }
      }
LAB_1441dfed3:
      if (bVar3 != 0) {
        uVar8 = FUN_1452d5b70(*(undefined8 *)(param_1 + 0x1d98),*(undefined4 *)(param_1 + 0x1db4));
        cVar4 = FUN_1411d0210(param_1,&UNK_14677a47f,uVar8);
        if (cVar4 == '\0') {
          FUN_1402675a0(0x146cb4798,4);
          uVar8 = 0xe5a;
          uVar9 = 0x331c78ea;
          goto LAB_1441e00fb;
        }
      }
      uVar6 = *(undefined4 *)(param_1 + 0x9c);
      uVar7 = func_0x000144db6ef0(uVar6);
      uVar8 = FUN_1452d5b70(*(undefined8 *)(param_1 + 0x80),uVar6);
      cVar4 = FUN_1411d0540(param_2,uVar8,uVar7);
      if (cVar4 == '\0') {
        FUN_1402675a0(0x146cb4798,4);
        uVar8 = 0xe5f;
        uVar9 = 0x2165fa45;
      }
      else {
        uVar10 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
        if ((bVar1 & 0x20) != 0) goto LAB_1441e0102;
        cVar4 = FUN_1411d0540(param_2,&UNK_14678d163,2);
        if (cVar4 != '\0') goto LAB_1441e0102;
        FUN_1402675a0(0x146cb4798,4);
        uVar8 = 0xe68;
        uVar9 = 0xf1cb2383;
      }
    }
  }
  else {
    uVar8 = 0xddd;
    uVar9 = 0x93e99ede;
  }
LAB_1441e00fb:
  FUN_1457d1ec0(0x146cb4798,1,uVar8,uVar9);
  uVar10 = 0;
LAB_1441e0102:
  return uVar10 & 0xffffffff;
}

