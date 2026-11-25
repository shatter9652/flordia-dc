// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400fe460  size: 872 bytes
// Name:    FUN_1400fe460
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400fe1a0, FUN_1400fe120, FUN_1400fe170
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1400fe460(longlong *param_1,int param_2)

{
  ushort uVar1;
  undefined1 (*pauVar2) [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  uint uVar6;
  longlong lVar7;
  undefined1 auVar8 [32];
  
  pauVar2 = (undefined1 (*) [32])param_1[(longlong)param_2 + 0xc];
  if (pauVar2 == (undefined1 (*) [32])0x0) {
    lVar7 = *param_1;
    *(undefined4 *)(lVar7 + 0x28) = 0x34;
    *(int *)(lVar7 + 0x2c) = param_2;
    (**(code **)*param_1)(param_1);
  }
  auVar8._2_2_ = _DAT_146159792;
  auVar8._0_2_ = _DAT_146159792;
  auVar8._4_2_ = _DAT_146159792;
  auVar8._6_2_ = _DAT_146159792;
  auVar8._8_2_ = _DAT_146159792;
  auVar8._10_2_ = _DAT_146159792;
  auVar8._12_2_ = _DAT_146159792;
  auVar8._14_2_ = _DAT_146159792;
  auVar8._16_2_ = _DAT_146159792;
  auVar8._18_2_ = _DAT_146159792;
  auVar8._20_2_ = _DAT_146159792;
  auVar8._22_2_ = _DAT_146159792;
  auVar8._24_2_ = _DAT_146159792;
  auVar8._26_2_ = _DAT_146159792;
  auVar8._28_2_ = _DAT_146159792;
  auVar8._30_2_ = _DAT_146159792;
  auVar3 = vpmaxuw_avx2(*pauVar2,auVar8);
  auVar3 = vpcmpeqw_avx2(*pauVar2,auVar3);
  auVar4 = vpmaxuw_avx2(pauVar2[1],auVar8);
  auVar4 = vpcmpeqw_avx2(pauVar2[1],auVar4);
  auVar5 = vpmaxuw_avx2(pauVar2[2],auVar8);
  auVar8 = vpmaxuw_avx2(pauVar2[3],auVar8);
  auVar8 = vpcmpeqw_avx2(pauVar2[3],auVar8);
  auVar5 = vpcmpeqw_avx2(pauVar2[2],auVar5);
  uVar6 = auVar3._0_4_ | (uint)(byte)(auVar3[2] | auVar3[4] | auVar3[6] | auVar3[8] | auVar3[10]) |
          (uint)auVar3[0xc] |
          (uint)auVar3[0xe] |
          auVar3._16_4_ |
          (uint)(byte)(auVar3[0x12] |
                      auVar3[0x14] |
                      auVar3[0x16] | auVar3[0x18] | auVar3[0x1a] | auVar3[0x1c] | auVar3[0x1e]) |
          (uint)(byte)(auVar4[0] |
                      auVar4[2] |
                      auVar4[4] |
                      auVar4[6] | auVar4[8] | auVar4[10] | auVar4[0xc] | auVar4[0xe] | auVar4[0x10])
          | (uint)auVar4[0x12] |
            (uint)auVar4[0x14] |
            (uint)auVar4[0x16] |
            (uint)auVar4[0x18] |
            (uint)auVar4[0x1a] |
            (uint)auVar4[0x1c] | (uint)auVar4[0x1f] | auVar5._0_4_ | (uint)auVar5[2] |
            (uint)auVar5[4] |
            (uint)auVar5[6] |
            (uint)auVar5[8] |
            (uint)auVar5[10] | (uint)auVar5[0xc] | (uint)auVar5[0xe] | auVar5._16_4_ |
            (uint)(byte)(auVar5[0x12] |
                         auVar5[0x14] | auVar5[0x16] | auVar5[0x18] | auVar5[0x1a] | auVar5[0x1c] |
                        auVar5[0x1e] | auVar8[0] | auVar8[2] | auVar8[4] | auVar8[6] | auVar8[8] |
                        auVar8[10] | auVar8[0xc] | auVar8[0xe] | auVar8[0x10] |
                        auVar8[0x12] | auVar8[0x14] | auVar8[0x16] |
                        auVar8[0x18] | auVar8[0x1a] | auVar8[0x1e] | auVar8[0x1c]);
  if (pauVar2[4][0] == '\0') {
    FUN_1400fe170(param_1,0xdb);
    FUN_1400fe1a0(param_1,(uVar6 & 1) * 0x40 + 0x43);
    FUN_1400fe120(param_1,(uVar6 & 1) * 0x10 + param_2);
    lVar7 = 0;
    if ((uVar6 & 1) == 0) {
      do {
        FUN_1400fe120(param_1,(*pauVar2)[(longlong)*(int *)(&UNK_14674af00 + lVar7) * 2]);
        lVar7 = lVar7 + 4;
      } while (lVar7 != 0x100);
    }
    else {
      do {
        uVar1 = *(ushort *)(*pauVar2 + (longlong)*(int *)(&UNK_14674af00 + lVar7) * 2);
        FUN_1400fe120(param_1,uVar1 >> 8);
        FUN_1400fe120(param_1,uVar1 & 0xff);
        lVar7 = lVar7 + 4;
      } while (lVar7 != 0x100);
    }
    pauVar2[4][0] = 1;
  }
  return uVar6 & 1;
}

