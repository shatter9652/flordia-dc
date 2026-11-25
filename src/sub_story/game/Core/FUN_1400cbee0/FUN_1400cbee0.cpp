// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400cbee0  size: 674 bytes
// Name:    FUN_1400cbee0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


int FUN_1400cbee0(ulonglong param_1,ulonglong param_2,int param_3,longlong param_4,longlong param_5)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  byte bVar7;
  undefined1 auVar8 [64];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auVar11 [64];
  
  bVar7 = *(byte *)(param_4 + 0x120);
  if ((bVar7 & 0x20) == 0) {
    if ((param_1 & 0x20) == 0) {
      if ((param_2 & 0x20) == 0) {
        if ((*(byte *)(param_4 + 0xe1) & 0x20) != 0) {
          return 6 - (*(byte *)(param_4 + 0x14d) & 1);
        }
        if ((*(byte *)(param_4 + 0x14c) & 0x40) != 0) {
          plVar3 = *(longlong **)(param_5 + 8);
          iVar2 = *(int *)(param_5 + 0x10);
          iVar5 = func_0x000144e05fa0(plVar3[1]);
          auVar8 = ZEXT1264(ZEXT812(0));
          auVar9._0_12_ = ZEXT812(0);
          auVar9._12_4_ = 0;
          if (iVar2 != iVar5) {
            uVar6 = (**(code **)(*plVar3 + 0xf0))(plVar3,iVar2);
            (**(code **)(*plVar3 + 0x108))(plVar3,uVar6,auStack_68);
            auVar9 = auStack_58;
          }
          auVar11 = ZEXT1664(auVar9);
          plVar3 = *(longlong **)(param_5 + 0x128);
          iVar2 = *(int *)(param_5 + 0x130);
          iVar5 = func_0x000144e05fa0(plVar3[1]);
          auVar10 = auVar11._0_16_;
          auVar9 = auVar8._0_16_;
          if (iVar2 != iVar5) {
            uVar6 = (**(code **)(*plVar3 + 0xf0))(plVar3,iVar2);
            (**(code **)(*plVar3 + 0x108))(plVar3,uVar6,auStack_68);
            auVar10 = auVar11._0_16_;
            auVar9 = auStack_58;
          }
          auVar9 = vcmpps_avx(auVar9,auVar10,1);
          if ((auVar9[4] & 1) == 0) {
            if (*(float *)(param_5 + 0xf8) < *(float *)(param_5 + 0x218)) {
              return 4;
            }
          }
          else if (*(float *)(param_5 + 0x218) < *(float *)(param_5 + 0xf8)) {
            return 4;
          }
          return ((byte)~*(byte *)(param_4 + 0x141) & 1) * 4 + 4;
        }
        bVar1 = *(byte *)(param_5 + 0x110);
        if ((bVar1 & 4) == 0) {
          if ((*(byte *)(param_5 + 0x230) & 4) == 0) {
            if ((*(byte *)(param_4 + 0x140) & 0x40) != 0) {
              if (SBORROW1('\0',bVar7 & 0x90)) {
                if (param_3 == 5) {
                  return 5;
                }
                if (param_3 == 0xc) {
                  return 0xc;
                }
              }
              if (((bVar7 & 0x10) == 0) && ((*(byte *)(param_4 + 0x141) & 1) != 0)) {
                return 0xc;
              }
            }
            return 5;
          }
          bVar7 = *(byte *)(param_4 + 0xf0);
        }
        else {
          bVar7 = *(byte *)(param_4 + 0xf0);
          if (((bVar7 & 2) != 0) && ((*(byte *)(param_5 + 0x230) & 4) != 0)) {
            return 5;
          }
        }
        cVar4 = func_0x0001400ca280(param_4);
        if ((bVar1 & 0x10) != 0 || cVar4 != '\0') {
          return 5;
        }
        if ((*(byte *)(param_5 + 0x230) & 0x10) == 0) {
          return (bVar7 & 4) + 1;
        }
        return 5;
      }
    }
    else if ((param_2 & 0x20) != 0) {
      return 9;
    }
  }
  else if ((param_1 & 0x20) == 0) {
    if ((param_2 & 0x20) == 0) {
      if ((bVar7 & 0x40) == 0) {
        return 1;
      }
      if ((*(byte *)(param_4 + 0x140) & 0x28) != 0) {
        return ((byte)~*(byte *)(param_4 + 0x141) & 1) * 4 + 1;
      }
      return 1;
    }
  }
  else if ((param_2 & 0x20) != 0) {
    return 9;
  }
  return 0xb;
}

