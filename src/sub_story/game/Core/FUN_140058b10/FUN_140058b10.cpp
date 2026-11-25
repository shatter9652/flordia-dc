// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140058b10  size: 683 bytes
// Name:    FUN_140058b10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140b6c9d0, FUN_144e90390, FUN_14108d5b0, FUN_144e90490, FUN_144e912a0, FUN_144e90590
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_140058b10(longlong *param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_48 [24];
  
  lVar4 = FUN_14108d5b0((int)param_1[4],0);
  if (lVar4 != 0) {
    if ((char)param_1[0x2e] == '\x01') {
      FUN_144e90590(lVar4,param_1[5],(int)param_1[6],0,0);
    }
    else {
      if (param_1[5] != 0) {
        FUN_144e912a0(*(undefined8 *)(param_1[5] + 0x20));
      }
      func_0x000144e911f0(lVar4,auStack_48,param_1 + 8);
    }
    func_0x000140b6c670(lVar4);
    if (*(char *)((longlong)param_1 + 0x173) == '\x01') {
      func_0x000144e90470(lVar4);
      func_0x000144e90380(lVar4,*(undefined4 *)((longlong)param_1 + 0xec));
      FUN_144e90490(lVar4);
    }
    auVar9._0_12_ = ZEXT812(0);
    auVar9._12_4_ = 0;
    auVar2 = vminss_avx(ZEXT416(_DAT_146159c64),ZEXT416(*(uint *)(param_1 + 0x27)));
    auVar9 = vcmpss_avx(ZEXT416(*(uint *)(param_1 + 0x27)),auVar9,1);
    *(uint *)(lVar4 + 0x35c) = ~auVar9._0_4_ & auVar2._0_4_;
    if ((*param_1 != 0) && (param_1[5] != 0)) {
      func_0x000140071290(lVar4,*param_1);
    }
    FUN_144e90390(lVar4,0x54a69840,*(undefined4 *)((longlong)param_1 + 0x13c));
    FUN_144e90390(lVar4,0x35369828,(int)param_1[0x28]);
    FUN_144e90390(lVar4,0xa53f2e56,*(undefined4 *)((longlong)param_1 + 0x144));
    FUN_144e90390(lVar4,0x6ce0a51a,(int)param_1[0x2a]);
    FUN_144e90390(lVar4,0xf997622b,*(undefined4 *)((longlong)param_1 + 0x154));
    lVar1 = param_1[0x32];
    uVar7 = (int)param_1[0x30] << 4;
    if (uVar7 == 0) {
      uVar3 = 0;
    }
    else {
      uVar8 = 0;
      do {
        uVar3 = uVar8;
        if (!SBORROW1('\0',*(char *)((ulonglong)(uVar8 & 0xf) +
                                    (ulonglong)(uVar8 >> 4) * 0x90 + lVar1))) break;
        uVar8 = uVar8 + 1;
        uVar3 = uVar7;
      } while (uVar7 != uVar8);
    }
    uVar5 = (ulonglong)(uint)((int)param_1[0x30] << 4);
    lVar6 = (ulonglong)(uVar3 >> 4) * 0x90;
    if (lVar6 + (ulonglong)(uVar3 & 0xf) * 8 != uVar5 * 9) {
      lVar6 = lVar6 + 0x10 + (ulonglong)(uVar3 & 0xf) * 8;
      do {
        FUN_144e90390(lVar4,*(undefined4 *)(lVar1 + lVar6),*(undefined4 *)(lVar1 + 4 + lVar6));
        uVar8 = uVar3;
        while (uVar3 = uVar7, uVar8 != uVar7) {
          while (uVar3 = uVar8 + 1, uVar8 = uVar3, uVar3 < uVar7) {
            if (!SBORROW1('\0',*(char *)((ulonglong)(uVar3 & 0xf) +
                                        (ulonglong)(uVar3 >> 4) * 0x90 + lVar1)))
            goto LAB_140058d1b;
          }
        }
LAB_140058d1b:
        lVar6 = (ulonglong)(uVar3 >> 4) * 0x90 + 0x10 + (ulonglong)(uVar3 & 0xf) * 8;
      } while (lVar6 != uVar5 * 9 + 0x10);
    }
    FUN_140b6c9d0(lVar4);
  }
  return lVar4 != 0;
}

