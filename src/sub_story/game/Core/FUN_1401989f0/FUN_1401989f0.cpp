// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401989f0  size: 120 bytes
// Name:    FUN_1401989f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e7df20, FUN_144dd3550, FUN_144dd3330
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_1401989f0(longlong param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  int aiStack_70 [3];
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  longlong alStack_50 [2];
  undefined4 uStack_40;
  undefined8 uStack_28;
  undefined4 uStack_24;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    alStack_50[0] = 0x140198a13;
    lVar7 = FUN_144e7df20(*(longlong *)(param_1 + 0x20),param_1,0xffffffff);
    if (lVar7 != 0) {
      uVar6 = *(undefined4 *)(lVar7 + 0xf4);
      alStack_50[0] = 0x140198a25;
      uVar8 = func_0x000144ddb100(0);
      alStack_50[0] = 0x140198a37;
      FUN_144dd3330(uVar6,&uStack_24);
      alStack_50[0] = 0x140198a48;
      lVar7 = FUN_144dd3550(uVar8,uStack_24,0x34);
      if (lVar7 != 0) {
        return lVar7;
      }
    }
  }
  if (param_1 != 0) {
    uVar6 = *(undefined4 *)(param_1 + 0x9c);
    cVar1 = func_0x000144f51b50(uVar6);
    if (cVar1 != '\0') {
      lVar7 = func_0x000144fbbe70(uVar6);
      iVar2 = func_0x0001413b6e70(*(undefined8 *)(lVar7 + 0x40));
      if (iVar2 != 5) {
        lVar7 = FUN_140198e80(param_1);
        if (lVar7 - 1U < 0xfffffffffffffffe) {
          FUN_1402c5990(&uStack_58,*(undefined8 *)(param_1 + 0x38));
          lVar7 = func_0x000145124a90(param_1,lVar7,uStack_58);
          if (lVar7 != 0) {
            alStack_50[0] = 0;
            alStack_50[1] = 0xffffffff00000000;
            uStack_40 = 0;
            FUN_145412a40(alStack_50,(ulonglong)*(uint *)(lVar7 + 0x200) | 0xffffffff00000000);
            lVar7 = alStack_50[0];
            if (alStack_50[0] != 0) {
              uVar3 = func_0x000140198e60(iVar2);
              iVar4 = func_0x000145352f90(lVar7);
              aiStack_70[2] = 0xffffffff;
              if (0 < iVar4) {
                iVar10 = 0;
                iVar4 = iVar4 + -1;
                do {
                  uVar9 = (uint)(iVar10 + iVar4) >> 1;
                  uVar5 = func_0x000145352f70(lVar7,uVar9);
                  if (uVar5 < uVar3) {
                    iVar10 = uVar9 + 1;
                  }
                  else {
                    if (uVar5 <= uVar3) {
                      FUN_1451e3fc0(&uStack_5c,lVar7,uVar9);
                      aiStack_70[2] = uStack_5c;
                      break;
                    }
                    iVar4 = uVar9 - 1;
                  }
                } while (iVar10 <= iVar4);
              }
              uStack_64 = 0xffffffff;
              FUN_145213ee0(aiStack_70 + 2,aiStack_70);
              iVar4 = aiStack_70[2];
              if (aiStack_70[0] - 1U < 0xfffffffd) {
                uVar8 = func_0x000144ddb100(0);
                lVar7 = FUN_144dd3550(uVar8,iVar4,0x34);
                if (lVar7 != 0) {
                  return lVar7;
                }
              }
            }
          }
        }
        uVar6 = func_0x000140198e60(iVar2);
        uVar8 = uRam00000001475a0820;
        iVar2 = FUN_145352f00(uRam00000001475a0820,uVar6);
        if (iVar2 < 0) {
          iStack_60 = -1;
        }
        else {
          FUN_1451e3fc0(&iStack_60,uVar8,iVar2);
        }
        aiStack_70[1] = 0xffffffff;
        aiStack_70[0] = iStack_60;
        FUN_145213ee0(aiStack_70,alStack_50);
        iVar2 = aiStack_70[0];
        if ((int)alStack_50[0] - 1U < 0xfffffffd) {
          uVar8 = func_0x000144ddb100(0);
          lVar7 = FUN_144dd3550(uVar8,iVar2,0x34);
          return lVar7;
        }
      }
    }
  }
  return 0;
}

