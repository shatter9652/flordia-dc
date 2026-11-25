// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140062770  size: 896 bytes
// Name:    FUN_140062770
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145200f60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140062770(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 extraout_var_01 [56];
  undefined1 extraout_var_02 [56];
  float fVar4;
  undefined1 auVar5 [64];
  float fVar6;
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 auStack_158 [16];
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 auStack_138 [16];
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined8 uStack_118;
  undefined8 uStack_110;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  longlong lStack_f8;
  undefined6 uStack_f0;
  undefined2 uStack_ea;
  undefined6 uStack_e8;
  undefined1 auStack_d8 [16];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [88];
  
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_ea = 0;
  auStack_d8 = ZEXT416(_DAT_145fc6ed8);
  uStack_c8 = _DAT_146159bc0;
  uStack_c0 = 0;
  uStack_b8 = _DAT_14614f7f0;
  uStack_b0 = _UNK_14614f7f8;
  auStack_a8 = ZEXT816(0) << 0x20;
  lVar1 = *(longlong *)(param_1 + 0x1da6e8);
  if (((lVar1 != 0) && (*(int *)(lVar1 + 0xc) == 0)) && ((*(byte *)(lVar1 + 0x6550) & 0x80) != 0)) {
    lStack_f8 = param_1;
    iVar3 = (**(code **)(*param_2 + 0x78))(param_2);
    if (1 < iVar3) {
      (**(code **)(*param_2 + 0x28))(param_2,&uStack_168,0);
      (**(code **)(*param_2 + 0x28))(param_2,&fStack_128,0);
      (**(code **)(*param_2 + 0x30))(param_2,&fStack_108,0);
      auVar5._0_8_ = (**(code **)(*param_2 + 0x48))(param_2,0);
      auVar5._8_56_ = extraout_var;
      auVar5 = ZEXT1664(auVar5._0_16_);
      auVar8._0_8_ = (**(code **)(*param_2 + 0x50))(param_2,0);
      auVar8._8_56_ = extraout_var_00;
      auVar7 = ZEXT1664(auVar8._0_16_);
      fVar4 = auVar5._0_4_;
      fVar6 = (float)auVar8._0_8_;
      auStack_138._0_4_ = -(fStack_108 * fVar4) + fStack_128;
      auStack_138._4_4_ = -(fStack_104 * fVar4) + fStack_124;
      auStack_138._8_4_ = -(fStack_100 * fVar4) + fStack_120;
      auStack_138._12_4_ = -(fStack_fc * fVar4) + fStack_11c;
      auVar9 = ZEXT1664(CONCAT412(fStack_fc * fVar6 + fStack_11c,
                                  CONCAT48(fStack_100 * fVar6 + fStack_120,
                                           CONCAT44(fStack_104 * fVar6 + fStack_124,
                                                    fStack_108 * fVar6 + fStack_128))));
      uStack_148 = uStack_168;
      uStack_140 = uStack_160;
      cVar2 = FUN_145200f60(&lStack_f8,&uStack_148,auStack_138,FUN_1452017b0,0,auStack_98,0,
                            (int)param_2[0x10]);
      auVar8 = ZEXT464(_DAT_145fc7020);
      if (cVar2 == '\0') {
        auVar5 = ZEXT464(_DAT_145fc7020);
      }
      auStack_158 = auVar9._0_16_;
      uStack_118 = uStack_168;
      uStack_110 = uStack_160;
      cVar2 = FUN_145200f60(&lStack_f8,&uStack_118,auStack_158,FUN_1452017b0,0,auStack_98,0,
                            (int)param_2[0x10]);
      if (cVar2 == '\0') {
        auVar7 = ZEXT1664(auVar8._0_16_);
      }
      (**(code **)(*param_2 + 0x58))(param_2,0,auVar5._0_8_);
      (**(code **)(*param_2 + 0x60))(param_2,0,auVar7._0_8_);
      (**(code **)(*param_2 + 0x28))(param_2,&fStack_128,1);
      (**(code **)(*param_2 + 0x30))(param_2,&fStack_108,1);
      auVar7._0_8_ = (**(code **)(*param_2 + 0x48))(param_2,1);
      auVar7._8_56_ = extraout_var_01;
      auVar5 = ZEXT1664(auVar7._0_16_);
      auVar9._0_8_ = (**(code **)(*param_2 + 0x50))(param_2,1);
      auVar9._8_56_ = extraout_var_02;
      auVar7 = ZEXT1664(auVar9._0_16_);
      fVar4 = auVar5._0_4_;
      fVar6 = (float)auVar9._0_8_;
      auStack_138._0_4_ = -(fStack_108 * fVar4) + fStack_128;
      auStack_138._4_4_ = -(fStack_104 * fVar4) + fStack_124;
      auStack_138._8_4_ = -(fStack_100 * fVar4) + fStack_120;
      auStack_138._12_4_ = -(fStack_fc * fVar4) + fStack_11c;
      auVar9 = ZEXT1664(CONCAT412(fStack_fc * fVar6 + fStack_11c,
                                  CONCAT48(fStack_100 * fVar6 + fStack_120,
                                           CONCAT44(fStack_104 * fVar6 + fStack_124,
                                                    fStack_108 * fVar6 + fStack_128))));
      uStack_148 = uStack_168;
      uStack_140 = uStack_160;
      cVar2 = FUN_145200f60(&lStack_f8,&uStack_148,auStack_138,FUN_1452017b0,0,auStack_98,0,
                            (int)param_2[0x10]);
      if (cVar2 == '\0') {
        auVar5 = ZEXT1664(auVar8._0_16_);
      }
      auStack_158 = auVar9._0_16_;
      uStack_118 = uStack_168;
      uStack_110 = uStack_160;
      cVar2 = FUN_145200f60(&lStack_f8,&uStack_118,auStack_158,FUN_1452017b0,0,auStack_98,0,
                            (int)param_2[0x10]);
      if (cVar2 == '\0') {
        auVar7 = ZEXT1664(auVar8._0_16_);
      }
      (**(code **)(*param_2 + 0x58))(param_2,1,auVar5._0_8_);
      (**(code **)(*param_2 + 0x60))(param_2,1,auVar7._0_8_);
    }
  }
  return;
}

