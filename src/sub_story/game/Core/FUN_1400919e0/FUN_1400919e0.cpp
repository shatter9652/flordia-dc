// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400919e0  size: 238 bytes
// Name:    FUN_1400919e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14054ef30, FUN_1409ea8b0, FUN_1452d20d0, FUN_1407a9770
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Removing unreachable block (ram,0x0001409ea94c) */
/* WARNING: Removing unreachable block (ram,0x0001409ea900) */
/* WARNING: Removing unreachable block (ram,0x0001409ea7c9) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400919e0(undefined4 *param_1,byte param_2,char param_3)

{
  byte *pbVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  
  uVar2 = *(ulonglong *)(param_1 + 4);
  if ((byte)(((uint)uVar2 & 0x20) >> 5) != param_2) {
    *(ulonglong *)(param_1 + 4) = (ulonglong)param_2 << 5 | uVar2 & 0xffffffffffffffdf;
    if ((uVar2 >> 0x26 & 1) == 0) {
      FUN_1407a9770(_DAT_14a4a14c8,param_1 + 400,1);
    }
    if (param_2 == 0) {
      uVar4 = (uint)*(ulonglong *)(param_1 + 4);
      if ((uVar4 >> 0x11 & 1) != 0) {
        if ((uVar4 >> 0x19 & 1) == 0) {
          uVar6 = 0x9c4;
          if ((*(ulonglong *)(param_1 + 4) & 0x4000004) != 0) {
            uVar6 = 0;
          }
          FUN_1409ea8b0(param_1,uVar6,0x96,1);
        }
        *(byte *)((longlong)param_1 + 0x12) = *(byte *)((longlong)param_1 + 0x12) & 0xfd;
        if (*(longlong *)(param_1 + 0x1ca) != 0) {
          pbVar1 = (byte *)(*(longlong *)(param_1 + 0x1ca) + 0x14);
          *pbVar1 = *pbVar1 & 0xfb;
        }
        return;
      }
    }
    else {
      FUN_14054ef30(*param_1);
      func_0x000140091ad0(param_1);
      if (((param_3 != '\0') && (lVar5 = func_0x000144f8cb60(param_1[1]), lVar5 != 0)) &&
         (cVar3 = FUN_1452d20d0(lVar5), cVar3 != '\0')) {
        lVar5 = func_0x000144f8cb60(param_1[1]);
        if (lVar5 == 0) {
          return;
        }
        func_0x0001409ea760(lVar5);
        if (param_1[1] == 0x1ffff) {
          return;
        }
        FUN_145445370(param_1[0x191]);
        auVar8._0_12_ = ZEXT812(0);
        auVar8._12_4_ = 0;
        param_1[1] = 0x1ffff;
        *(undefined1 (*) [16])(param_1 + 0x1a0) = auVar8;
        cVar3 = func_0x0001452af4d0(*(undefined8 *)(param_1 + 0x1ca));
        if (cVar3 != '\0') {
          param_1[0x193] = 0;
          *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 2;
          return;
        }
        *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xfd;
        lVar5 = *(longlong *)(param_1 + 0x1ca);
        if (((lVar5 != 0) && (*(short *)(lVar5 + 0x1c) != -1)) && (*(short *)(lVar5 + 0x1e) != -1))
        {
          return;
        }
        if ((~param_1[0xa7] & 0x3fffff) != 0) {
          if (*(longlong *)(param_1 + 0xaa) != 0) {
            FUN_1410f65f0(param_1 + 0xaa,param_1 + 0xa7);
          }
          param_1[0xa7] = 0x3fffff;
        }
        *(undefined2 *)(param_1 + 0xa8) = 0;
        func_0x000145155d60();
        *(undefined8 *)(param_1 + 0x70) = 0;
        param_1[0xac] = 0x3fffff;
        param_1[0xa7] = 0x3fffff;
        *(undefined8 *)(param_1 + 0x72) = 0xffffffffffff4000;
        func_0x000145155d60(param_1 + 0x76);
        param_1[0xad] = 0x3fffff;
        *(undefined8 *)(param_1 + 0x94) = 0xffffffffffffffff;
        param_1[0x96] = 0xffffffff;
        param_1[0xa6] = 0xffffffff;
        *(undefined8 *)(param_1 + 0xaa) = 0;
        iRam000000014a21b750 = iRam000000014a21b750 + 1;
        param_1[0x74] = iRam000000014a21b750;
        param_1[0xaf] = 0;
        if (*(longlong *)(param_1 + 0xb0) != 0) {
          func_0x000144d9c130();
        }
        *(undefined8 *)(param_1 + 0xb0) = 0;
        param_1[0xae] = 0;
        param_1[0xb3] = 0;
        if (*(longlong *)(param_1 + 0xb4) != 0) {
          func_0x000144d9c130();
        }
        *(undefined8 *)(param_1 + 0xb4) = 0;
        param_1[0xb2] = 0;
        lVar5 = *(longlong *)(param_1 + 0xa4);
        if ((ulonglong)(uint)param_1[0xa3] != 0) {
          lVar7 = (ulonglong)(uint)param_1[0xa3] * 0x78;
          do {
            func_0x000145155d60(lVar5);
            lVar5 = lVar5 + 0x78;
            lVar7 = lVar7 + -0x78;
          } while (lVar7 != 0);
          lVar5 = *(longlong *)(param_1 + 0xa4);
          uVar4 = param_1[0xa3];
          if ((ulonglong)uVar4 != 0) {
            lVar7 = 0;
            do {
              *(undefined4 *)(lVar5 + 0x6c + lVar7) = 0;
              if (*(longlong *)(lVar5 + 0x70 + lVar7) != 0) {
                func_0x000144d9c130();
              }
              *(undefined4 *)(lVar5 + 0x68 + lVar7) = 0;
              *(undefined8 *)(lVar5 + 0x70 + lVar7) = 0;
              func_0x000145224170(*(undefined8 *)(lVar5 + 0x58 + lVar7));
              lVar7 = lVar7 + 0x78;
            } while ((ulonglong)uVar4 * 0x78 - lVar7 != 0);
            lVar5 = *(longlong *)(param_1 + 0xa4);
          }
        }
        param_1[0xa3] = 0;
        if (lVar5 != 0) {
          func_0x000144d9c130(lVar5);
        }
        *(undefined8 *)(param_1 + 0xa4) = 0;
        param_1[0xa2] = 0;
        param_1[0xb6] = 0;
        return;
      }
    }
  }
  return;
}

