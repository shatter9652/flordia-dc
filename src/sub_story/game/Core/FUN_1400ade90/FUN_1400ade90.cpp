// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ade90  size: 2699 bytes
// Name:    FUN_1400ade90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400ade90(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                  undefined1 (*param_4) [16])

{
  int iVar1;
  float fVar2;
  float fVar17;
  float fVar18;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar19;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar20;
  float fVar21;
  float fVar31;
  float fVar33;
  undefined1 auVar22 [16];
  float fVar35;
  undefined1 auVar23 [16];
  float fVar32;
  float fVar34;
  float fVar36;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar37;
  float fVar52;
  float fVar53;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar54;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar61;
  float fVar65;
  float fVar66;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar67;
  undefined1 auVar64 [16];
  float fVar68;
  float fVar72;
  float fVar73;
  float fVar74;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar75;
  float fVar78;
  float fVar79;
  undefined1 auVar76 [16];
  float fVar80;
  undefined1 auVar77 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  float fVar88;
  float fVar92;
  float fVar93;
  float fVar94;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  float fVar95;
  float fVar96;
  float fVar104;
  float fVar106;
  undefined1 auVar97 [16];
  float fVar108;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  float fVar105;
  float fVar107;
  float fVar109;
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar110 [16];
  float fVar111;
  float fVar114;
  float fVar115;
  float fVar116;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  float fVar117;
  float fVar118;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  float fVar128;
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  
  auVar30 = vshufps_avx(param_2[2],param_2[3],0xdd);
  auVar4 = vshufps_avx(*param_2,param_2[1],0xdd);
  auVar5 = vshufps_avx(param_2[2],param_2[3],0x88);
  auVar81._4_4_ = _DAT_145fc6f48;
  auVar81._0_4_ = _DAT_145fc6f48;
  auVar81._8_4_ = _DAT_145fc6f48;
  auVar81._12_4_ = _DAT_145fc6f48;
  auVar7 = vshufps_avx(auVar30,auVar4,0x88);
  auVar8 = vshufps_avx(auVar30,auVar4,0xdd);
  auVar6 = vshufps_avx(auVar30,auVar4,0x77);
  auVar30 = vshufps_avx(auVar4,auVar30,0x22);
  auVar9 = vshufps_avx(*param_2,param_2[1],0x88);
  auVar4 = vshufps_avx(auVar9,auVar5,0xdd);
  auVar130._0_4_ = auVar6._0_4_ * auVar30._0_4_;
  auVar130._4_4_ = auVar6._4_4_ * auVar30._4_4_;
  auVar130._8_4_ = auVar6._8_4_ * auVar30._8_4_;
  auVar130._12_4_ = auVar6._12_4_ * auVar30._12_4_;
  auVar6 = vshufps_avx(auVar9,auVar5,0x88);
  fVar96 = auVar7._0_4_;
  auVar38._0_4_ = fVar96 * auVar4._0_4_;
  fVar68 = auVar7._4_4_;
  auVar38._4_4_ = fVar68 * auVar4._4_4_;
  fVar72 = auVar7._8_4_;
  auVar38._8_4_ = fVar72 * auVar4._8_4_;
  fVar73 = auVar7._12_4_;
  auVar38._12_4_ = fVar73 * auVar4._12_4_;
  auVar30 = vshufpd_avx(auVar4,auVar4,1);
  fVar2 = auVar8._0_4_;
  auVar22._0_4_ = auVar4._0_4_ * fVar2;
  fVar17 = auVar8._4_4_;
  auVar22._4_4_ = auVar4._4_4_ * fVar17;
  fVar18 = auVar8._8_4_;
  auVar22._8_4_ = auVar4._8_4_ * fVar18;
  fVar19 = auVar8._12_4_;
  auVar22._12_4_ = auVar4._12_4_ * fVar19;
  auVar4 = vshufpd_avx(auVar130,auVar130,1);
  auVar10 = vshufps_avx(auVar22,auVar22,0xb1);
  auVar11 = vshufps_avx(auVar38,auVar38,0xb1);
  auVar7 = vshufpd_avx(auVar10,auVar10,1);
  auVar8 = vshufpd_avx(auVar11,auVar11,1);
  fVar74 = auVar30._0_4_;
  fVar61 = auVar30._4_4_;
  fVar105 = auVar30._8_4_;
  fVar65 = auVar30._12_4_;
  fVar20 = -(auVar4._0_4_ * fVar74) -
           (-(fVar74 * auVar130._0_4_) +
           auVar8._0_4_ * fVar2 +
           -(fVar2 * auVar11._0_4_) + -(fVar96 * auVar7._0_4_) + auVar10._0_4_ * fVar96);
  fVar31 = -(auVar4._4_4_ * fVar61) -
           (-(fVar61 * auVar130._4_4_) +
           auVar8._4_4_ * fVar17 +
           -(fVar17 * auVar11._4_4_) + -(fVar68 * auVar7._4_4_) + auVar10._4_4_ * fVar68);
  fVar33 = -(auVar4._8_4_ * fVar105) -
           (-(fVar105 * auVar130._8_4_) +
           auVar8._8_4_ * fVar18 +
           -(fVar18 * auVar11._8_4_) + -(fVar72 * auVar7._8_4_) + auVar10._8_4_ * fVar72);
  fVar35 = -(auVar4._12_4_ * fVar65) -
           (-(fVar65 * auVar130._12_4_) +
           auVar8._12_4_ * fVar19 +
           -(fVar19 * auVar11._12_4_) + -(fVar73 * auVar7._12_4_) + auVar10._12_4_ * fVar73);
  fVar21 = auVar6._0_4_;
  auVar39._0_4_ = fVar21 * fVar20;
  fVar32 = auVar6._4_4_;
  auVar39._4_4_ = fVar32 * fVar31;
  fVar34 = auVar6._8_4_;
  auVar39._8_4_ = fVar34 * fVar33;
  fVar36 = auVar6._12_4_;
  auVar39._12_4_ = fVar36 * fVar35;
  auVar30 = vhaddps_avx(auVar39,auVar39);
  auVar6 = vshufps_avx(auVar39,auVar39,0xff);
  auVar12 = vshufps_avx(auVar39,auVar39,0xaa);
  fVar95 = auVar30._0_4_;
  auVar97._0_4_ = fVar95 + auVar6._0_4_ + auVar12._0_4_;
  auVar97._4_4_ = fVar95 + auVar6._4_4_ + auVar12._4_4_;
  auVar97._8_4_ = fVar95 + auVar6._8_4_ + auVar12._8_4_;
  auVar97._12_4_ = fVar95 + auVar6._12_4_ + auVar12._12_4_;
  auVar30 = vrcpps_avx(auVar97);
  fVar95 = auVar30._0_4_;
  fVar104 = auVar30._4_4_;
  fVar106 = auVar30._8_4_;
  fVar108 = auVar30._12_4_;
  fVar95 = -((fVar95 * auVar97._0_4_ - _DAT_145fc6ed8) * fVar95) + fVar95;
  fVar104 = -((fVar104 * auVar97._4_4_ - _DAT_145fc6ed8) * fVar104) + fVar104;
  fVar106 = -((fVar106 * auVar97._8_4_ - _DAT_145fc6ed8) * fVar106) + fVar106;
  fVar108 = -((fVar108 * auVar97._12_4_ - _DAT_145fc6ed8) * fVar108) + fVar108;
  fVar20 = fVar95 * fVar20;
  fVar31 = fVar104 * fVar31;
  fVar33 = fVar106 * fVar33;
  fVar35 = fVar108 * fVar35;
  auVar30 = vmaxps_avx(*param_1,auVar81);
  auVar82._0_4_ = fVar21 * fVar2;
  auVar82._4_4_ = fVar32 * fVar17;
  auVar82._8_4_ = fVar34 * fVar18;
  auVar82._12_4_ = fVar36 * fVar19;
  auVar23._0_4_ = -(fVar21 * auVar4._0_4_) + auVar130._0_4_ * fVar21;
  auVar23._4_4_ = -(fVar32 * auVar4._4_4_) + auVar130._4_4_ * fVar32;
  auVar23._8_4_ = -(fVar34 * auVar4._8_4_) + auVar130._8_4_ * fVar34;
  auVar23._12_4_ = -(fVar36 * auVar4._12_4_) + auVar130._12_4_ * fVar36;
  auVar4 = vshufps_avx(auVar9,auVar5,0x22);
  auVar5 = vshufps_avx(auVar5,auVar9,0x77);
  auVar9 = vshufps_avx(auVar82,auVar82,0xb1);
  auVar3._0_4_ = auVar5._0_4_ * auVar4._0_4_;
  auVar3._4_4_ = auVar5._4_4_ * auVar4._4_4_;
  auVar3._8_4_ = auVar5._8_4_ * auVar4._8_4_;
  auVar3._12_4_ = auVar5._12_4_ * auVar4._12_4_;
  auVar55._0_4_ = fVar21 * fVar96;
  auVar55._4_4_ = fVar32 * fVar68;
  auVar55._8_4_ = fVar34 * fVar72;
  auVar55._12_4_ = fVar36 * fVar73;
  auVar12 = vshufps_avx(auVar55,auVar55,0xb1);
  auVar4 = vshufpd_avx(auVar23,auVar23,1);
  auVar56._0_4_ = fVar21 * auVar7._0_4_ - fVar21 * auVar10._0_4_;
  auVar56._4_4_ = fVar32 * auVar7._4_4_ - fVar32 * auVar10._4_4_;
  auVar56._8_4_ = fVar34 * auVar7._8_4_ - fVar34 * auVar10._8_4_;
  auVar56._12_4_ = fVar36 * auVar7._12_4_ - fVar36 * auVar10._12_4_;
  auVar7 = vshufpd_avx(auVar12,auVar12,1);
  auVar5 = vshufpd_avx(auVar56,auVar56,1);
  auVar6 = vshufpd_avx(auVar9,auVar9,1);
  auVar83._0_4_ = -(fVar21 * auVar8._0_4_) + auVar11._0_4_ * fVar21;
  auVar83._4_4_ = -(fVar32 * auVar8._4_4_) + auVar11._4_4_ * fVar32;
  auVar83._8_4_ = -(fVar34 * auVar8._8_4_) + auVar11._8_4_ * fVar34;
  auVar83._12_4_ = -(fVar36 * auVar8._12_4_) + auVar11._12_4_ * fVar36;
  fVar21 = fVar95 * (-(auVar6._0_4_ * fVar96) -
                    (-(auVar9._0_4_ * fVar96) +
                    -(fVar2 * auVar7._0_4_) + (auVar12._0_4_ * fVar2 - auVar4._0_4_)));
  fVar32 = fVar104 * (-(auVar6._4_4_ * fVar68) -
                     (-(auVar9._4_4_ * fVar68) +
                     -(fVar17 * auVar7._4_4_) + (auVar12._4_4_ * fVar17 - auVar4._4_4_)));
  fVar34 = fVar106 * (-(auVar6._8_4_ * fVar72) -
                     (-(auVar9._8_4_ * fVar72) +
                     -(fVar18 * auVar7._8_4_) + (auVar12._8_4_ * fVar18 - auVar4._8_4_)));
  fVar36 = fVar108 * (-(auVar6._12_4_ * fVar73) -
                     (-(auVar9._12_4_ * fVar73) +
                     -(fVar19 * auVar7._12_4_) + (auVar12._12_4_ * fVar19 - auVar4._12_4_)));
  auVar4 = vshufpd_avx(auVar3,auVar3,1);
  auVar8 = vshufpd_avx(auVar83,auVar83,1);
  fVar37 = fVar95 * (-(auVar4._0_4_ * fVar2) -
                    (-(fVar2 * auVar3._0_4_) +
                    -(fVar74 * auVar6._0_4_) + (fVar74 * auVar9._0_4_ - auVar5._0_4_)));
  fVar52 = fVar104 * (-(auVar4._4_4_ * fVar17) -
                     (-(fVar17 * auVar3._4_4_) +
                     -(fVar61 * auVar6._4_4_) + (fVar61 * auVar9._4_4_ - auVar5._4_4_)));
  fVar53 = fVar106 * (-(auVar4._8_4_ * fVar18) -
                     (-(fVar18 * auVar3._8_4_) +
                     -(fVar105 * auVar6._8_4_) + (fVar105 * auVar9._8_4_ - auVar5._8_4_)));
  fVar54 = fVar108 * (-(auVar4._12_4_ * fVar19) -
                     (-(fVar19 * auVar3._12_4_) +
                     -(fVar65 * auVar6._12_4_) + (fVar65 * auVar9._12_4_ - auVar5._12_4_)));
  fVar95 = fVar95 * (fVar96 * auVar4._0_4_ -
                    (fVar96 * auVar3._0_4_ +
                    (auVar7._0_4_ * fVar74 - (fVar74 * auVar12._0_4_ + auVar8._0_4_))));
  fVar104 = fVar104 * (fVar68 * auVar4._4_4_ -
                      (fVar68 * auVar3._4_4_ +
                      (auVar7._4_4_ * fVar61 - (fVar61 * auVar12._4_4_ + auVar8._4_4_))));
  fVar106 = fVar106 * (fVar72 * auVar4._8_4_ -
                      (fVar72 * auVar3._8_4_ +
                      (auVar7._8_4_ * fVar105 - (fVar105 * auVar12._8_4_ + auVar8._8_4_))));
  fVar108 = fVar108 * (fVar73 * auVar4._12_4_ -
                      (fVar73 * auVar3._12_4_ +
                      (auVar7._12_4_ * fVar65 - (fVar65 * auVar12._12_4_ + auVar8._12_4_))));
  auVar4 = vshufps_avx(param_3[2],param_3[3],0xdd);
  auVar7 = vshufps_avx(*param_3,param_3[1],0xdd);
  auVar10 = vshufps_avx(param_3[2],param_3[3],0x88);
  auVar8 = vshufps_avx(auVar4,auVar7,0x88);
  auVar5 = vshufps_avx(auVar4,auVar7,0xdd);
  auVar6 = vshufps_avx(auVar4,auVar7,0x77);
  auVar4 = vshufps_avx(auVar7,auVar4,0x22);
  auVar11 = vshufps_avx(*param_3,param_3[1],0x88);
  auVar7 = vshufps_avx(auVar11,auVar10,0xdd);
  auVar40._0_4_ = auVar6._0_4_ * auVar4._0_4_;
  auVar40._4_4_ = auVar6._4_4_ * auVar4._4_4_;
  auVar40._8_4_ = auVar6._8_4_ * auVar4._8_4_;
  auVar40._12_4_ = auVar6._12_4_ * auVar4._12_4_;
  auVar6 = vshufps_avx(auVar11,auVar10,0x88);
  fVar61 = auVar8._0_4_;
  auVar24._0_4_ = fVar61 * auVar7._0_4_;
  fVar65 = auVar8._4_4_;
  auVar24._4_4_ = fVar65 * auVar7._4_4_;
  fVar66 = auVar8._8_4_;
  auVar24._8_4_ = fVar66 * auVar7._8_4_;
  fVar67 = auVar8._12_4_;
  auVar24._12_4_ = fVar67 * auVar7._12_4_;
  auVar4 = vshufpd_avx(auVar7,auVar7,1);
  fVar2 = auVar5._0_4_;
  auVar76._0_4_ = auVar7._0_4_ * fVar2;
  fVar17 = auVar5._4_4_;
  auVar76._4_4_ = auVar7._4_4_ * fVar17;
  fVar18 = auVar5._8_4_;
  auVar76._8_4_ = auVar7._8_4_ * fVar18;
  fVar19 = auVar5._12_4_;
  auVar76._12_4_ = auVar7._12_4_ * fVar19;
  auVar7 = vshufpd_avx(auVar40,auVar40,1);
  auVar9 = vshufps_avx(auVar76,auVar76,0xb1);
  auVar12 = vshufps_avx(auVar24,auVar24,0xb1);
  auVar8 = vshufpd_avx(auVar9,auVar9,1);
  auVar5 = vshufpd_avx(auVar12,auVar12,1);
  fVar111 = auVar6._0_4_;
  fVar114 = auVar6._4_4_;
  fVar115 = auVar6._8_4_;
  fVar116 = auVar6._12_4_;
  auVar25._0_4_ = -(fVar111 * auVar5._0_4_) + fVar111 * auVar12._0_4_;
  auVar25._4_4_ = -(fVar114 * auVar5._4_4_) + fVar114 * auVar12._4_4_;
  auVar25._8_4_ = -(fVar115 * auVar5._8_4_) + fVar115 * auVar12._8_4_;
  auVar25._12_4_ = -(fVar116 * auVar5._12_4_) + fVar116 * auVar12._12_4_;
  fVar117 = auVar4._0_4_;
  fVar123 = auVar4._4_4_;
  fVar125 = auVar4._8_4_;
  fVar127 = auVar4._12_4_;
  auVar41._0_4_ = -(fVar111 * auVar7._0_4_) + fVar111 * auVar40._0_4_;
  auVar41._4_4_ = -(fVar114 * auVar7._4_4_) + fVar114 * auVar40._4_4_;
  auVar41._8_4_ = -(fVar115 * auVar7._8_4_) + fVar115 * auVar40._8_4_;
  auVar41._12_4_ = -(fVar116 * auVar7._12_4_) + fVar116 * auVar40._12_4_;
  fVar75 = -(auVar7._0_4_ * fVar117) -
           (-(fVar117 * auVar40._0_4_) +
           auVar5._0_4_ * fVar2 +
           -(fVar2 * auVar12._0_4_) + -(fVar61 * auVar8._0_4_) + fVar61 * auVar9._0_4_);
  fVar78 = -(auVar7._4_4_ * fVar123) -
           (-(fVar123 * auVar40._4_4_) +
           auVar5._4_4_ * fVar17 +
           -(fVar17 * auVar12._4_4_) + -(fVar65 * auVar8._4_4_) + fVar65 * auVar9._4_4_);
  fVar79 = -(auVar7._8_4_ * fVar125) -
           (-(fVar125 * auVar40._8_4_) +
           auVar5._8_4_ * fVar18 +
           -(fVar18 * auVar12._8_4_) + -(fVar66 * auVar8._8_4_) + fVar66 * auVar9._8_4_);
  fVar80 = -(auVar7._12_4_ * fVar127) -
           (-(fVar127 * auVar40._12_4_) +
           auVar5._12_4_ * fVar19 +
           -(fVar19 * auVar12._12_4_) + -(fVar67 * auVar8._12_4_) + fVar67 * auVar9._12_4_);
  auVar4._0_4_ = fVar111 * fVar61;
  auVar4._4_4_ = fVar114 * fVar65;
  auVar4._8_4_ = fVar115 * fVar66;
  auVar4._12_4_ = fVar116 * fVar67;
  auVar12 = vshufps_avx(auVar4,auVar4,0xb1);
  auVar7 = vshufpd_avx(auVar41,auVar41,1);
  auVar5 = vshufpd_avx(auVar25,auVar25,1);
  auVar6 = vshufpd_avx(auVar12,auVar12,1);
  auVar133._4_4_ = _DAT_145fc6ed8;
  auVar133._0_4_ = _DAT_145fc6ed8;
  auVar133._8_4_ = _DAT_145fc6ed8;
  auVar133._12_4_ = _DAT_145fc6ed8;
  auVar26._0_4_ = fVar111 * auVar8._0_4_ - fVar111 * auVar9._0_4_;
  auVar26._4_4_ = fVar114 * auVar8._4_4_ - fVar114 * auVar9._4_4_;
  auVar26._8_4_ = fVar115 * auVar8._8_4_ - fVar115 * auVar9._8_4_;
  auVar26._12_4_ = fVar116 * auVar8._12_4_ - fVar116 * auVar9._12_4_;
  auVar129._0_4_ = fVar111 * fVar2;
  auVar129._4_4_ = fVar114 * fVar17;
  auVar129._8_4_ = fVar115 * fVar18;
  auVar129._12_4_ = fVar116 * fVar19;
  auVar3 = vshufps_avx(auVar129,auVar129,0xb1);
  auVar8 = vshufpd_avx(auVar3,auVar3,1);
  auVar9 = vshufpd_avx(auVar26,auVar26,1);
  auVar4 = vminps_avx(auVar30,auVar133);
  auVar30 = vshufps_avx(auVar11,auVar10,0x22);
  auVar10 = vshufps_avx(auVar10,auVar11,0x77);
  auVar11 = vshufps_avx(auVar4,auVar4,0xaa);
  auVar98._0_4_ = auVar10._0_4_ * auVar30._0_4_;
  auVar98._4_4_ = auVar10._4_4_ * auVar30._4_4_;
  auVar98._8_4_ = auVar10._8_4_ * auVar30._8_4_;
  auVar98._12_4_ = auVar10._12_4_ * auVar30._12_4_;
  auVar30 = vshufps_avx(auVar4,auVar4,0xff);
  fVar68 = fVar20 * auVar11._0_4_;
  fVar72 = fVar31 * auVar11._4_4_;
  fVar73 = fVar33 * auVar11._8_4_;
  fVar74 = fVar35 * auVar11._12_4_;
  auVar10 = vshufpd_avx(auVar98,auVar98,1);
  fVar88 = fVar68 + fVar21;
  fVar92 = fVar72 + fVar32;
  fVar93 = fVar73 + fVar34;
  fVar94 = fVar74 + fVar36;
  fVar118 = fVar37 * auVar30._0_4_ + fVar95;
  fVar124 = fVar52 * auVar30._4_4_ + fVar104;
  fVar126 = fVar53 * auVar30._8_4_ + fVar106;
  fVar128 = fVar54 * auVar30._12_4_ + fVar108;
  auVar62._0_4_ = fVar88 + fVar118;
  auVar62._4_4_ = fVar92 + fVar124;
  auVar62._8_4_ = fVar93 + fVar126;
  auVar62._12_4_ = fVar94 + fVar128;
  auVar30 = vrcpps_avx(auVar62);
  fVar105 = auVar30._0_4_;
  fVar107 = auVar30._4_4_;
  fVar109 = auVar30._8_4_;
  fVar96 = auVar30._12_4_;
  auVar99._0_4_ = -((auVar62._0_4_ * fVar105 - _DAT_145fc6ed8) * fVar105) + fVar105;
  auVar99._4_4_ = -((auVar62._4_4_ * fVar107 - _DAT_145fc6ed8) * fVar107) + fVar107;
  auVar99._8_4_ = -((auVar62._8_4_ * fVar109 - _DAT_145fc6ed8) * fVar109) + fVar109;
  auVar99._12_4_ = -((auVar62._12_4_ * fVar96 - _DAT_145fc6ed8) * fVar96) + fVar96;
  auVar30 = vshufps_avx(auVar99,auVar99,0xff);
  auVar110._0_4_ = auVar30._0_4_ * auVar62._0_4_;
  auVar110._4_4_ = auVar30._4_4_ * auVar62._4_4_;
  auVar110._8_4_ = auVar30._8_4_ * auVar62._8_4_;
  auVar110._12_4_ = auVar30._12_4_ * auVar62._12_4_;
  auVar63._0_4_ = fVar111 * fVar75;
  auVar63._4_4_ = fVar114 * fVar78;
  auVar63._8_4_ = fVar115 * fVar79;
  auVar63._12_4_ = fVar116 * fVar80;
  auVar11 = vshufps_avx(auVar63,auVar63,0xff);
  auVar13 = vshufps_avx(auVar63,auVar63,0xaa);
  auVar30 = vhaddps_avx(auVar63,auVar63);
  fVar96 = auVar30._0_4_;
  auVar100._0_4_ = auVar11._0_4_ + auVar13._0_4_ + fVar96;
  auVar100._4_4_ = auVar11._4_4_ + auVar13._4_4_ + fVar96;
  auVar100._8_4_ = auVar11._8_4_ + auVar13._8_4_ + fVar96;
  auVar100._12_4_ = auVar11._12_4_ + auVar13._12_4_ + fVar96;
  auVar30 = vrcpps_avx(auVar100);
  fVar96 = auVar30._0_4_;
  fVar105 = auVar30._4_4_;
  fVar107 = auVar30._8_4_;
  fVar109 = auVar30._12_4_;
  fVar96 = -((fVar96 * auVar100._0_4_ - _DAT_145fc6ed8) * fVar96) + fVar96;
  fVar105 = -((fVar105 * auVar100._4_4_ - _DAT_145fc6ed8) * fVar105) + fVar105;
  fVar107 = -((fVar107 * auVar100._8_4_ - _DAT_145fc6ed8) * fVar107) + fVar107;
  fVar109 = -((fVar109 * auVar100._12_4_ - _DAT_145fc6ed8) * fVar109) + fVar109;
  fVar111 = fVar96 * (-(auVar8._0_4_ * fVar61) -
                     (-(auVar3._0_4_ * fVar61) +
                     -(fVar2 * auVar6._0_4_) + (auVar12._0_4_ * fVar2 - auVar7._0_4_)));
  fVar114 = fVar105 * (-(auVar8._4_4_ * fVar65) -
                      (-(auVar3._4_4_ * fVar65) +
                      -(fVar17 * auVar6._4_4_) + (auVar12._4_4_ * fVar17 - auVar7._4_4_)));
  fVar115 = fVar107 * (-(auVar8._8_4_ * fVar66) -
                      (-(auVar3._8_4_ * fVar66) +
                      -(fVar18 * auVar6._8_4_) + (auVar12._8_4_ * fVar18 - auVar7._8_4_)));
  fVar116 = fVar109 * (-(auVar8._12_4_ * fVar67) -
                      (-(auVar3._12_4_ * fVar67) +
                      -(fVar19 * auVar6._12_4_) + (auVar12._12_4_ * fVar19 - auVar7._12_4_)));
  fVar75 = fVar96 * fVar75;
  fVar78 = fVar105 * fVar78;
  fVar79 = fVar107 * fVar79;
  fVar80 = fVar109 * fVar80;
  fVar61 = fVar96 * (auVar10._0_4_ * fVar61 -
                    (auVar98._0_4_ * fVar61 +
                    (fVar117 * auVar6._0_4_ - (fVar117 * auVar12._0_4_ + auVar5._0_4_))));
  fVar65 = fVar105 * (auVar10._4_4_ * fVar65 -
                     (auVar98._4_4_ * fVar65 +
                     (fVar123 * auVar6._4_4_ - (fVar123 * auVar12._4_4_ + auVar5._4_4_))));
  fVar66 = fVar107 * (auVar10._8_4_ * fVar66 -
                     (auVar98._8_4_ * fVar66 +
                     (fVar125 * auVar6._8_4_ - (fVar125 * auVar12._8_4_ + auVar5._8_4_))));
  fVar67 = fVar109 * (auVar10._12_4_ * fVar67 -
                     (auVar98._12_4_ * fVar67 +
                     (fVar127 * auVar6._12_4_ - (fVar127 * auVar12._12_4_ + auVar5._12_4_))));
  fVar96 = fVar96 * (-(auVar10._0_4_ * fVar2) -
                    (-(fVar2 * auVar98._0_4_) +
                    -(auVar8._0_4_ * fVar117) + (fVar117 * auVar3._0_4_ - auVar9._0_4_)));
  fVar105 = fVar105 * (-(auVar10._4_4_ * fVar17) -
                      (-(fVar17 * auVar98._4_4_) +
                      -(auVar8._4_4_ * fVar123) + (fVar123 * auVar3._4_4_ - auVar9._4_4_)));
  fVar107 = fVar107 * (-(auVar10._8_4_ * fVar18) -
                      (-(fVar18 * auVar98._8_4_) +
                      -(auVar8._8_4_ * fVar125) + (fVar125 * auVar3._8_4_ - auVar9._8_4_)));
  fVar109 = fVar109 * (-(auVar10._12_4_ * fVar19) -
                      (-(fVar19 * auVar98._12_4_) +
                      -(auVar8._12_4_ * fVar127) + (fVar127 * auVar3._12_4_ - auVar9._12_4_)));
  auVar30 = vshufps_avx(auVar110,auVar110,0x55);
  auVar7 = vshufps_avx(auVar110,auVar110,0xff);
  auVar8 = vshufps_avx(auVar110,auVar110,0xaa);
  auVar42._0_4_ =
       fVar111 * auVar8._0_4_ +
       fVar75 * auVar110._0_4_ + fVar61 * auVar7._0_4_ + fVar96 * auVar30._0_4_;
  auVar42._4_4_ =
       fVar114 * auVar8._4_4_ +
       fVar78 * auVar110._0_4_ + fVar65 * auVar7._4_4_ + fVar105 * auVar30._4_4_;
  auVar42._8_4_ =
       fVar115 * auVar8._8_4_ +
       fVar79 * auVar110._0_4_ + fVar66 * auVar7._8_4_ + fVar107 * auVar30._8_4_;
  auVar42._12_4_ =
       fVar116 * auVar8._12_4_ +
       fVar80 * auVar110._0_4_ + fVar67 * auVar7._12_4_ + fVar109 * auVar30._12_4_;
  fVar2 = auVar4._0_4_;
  auVar30 = vshufps_avx(auVar4,auVar4,0x55);
  fVar20 = fVar20 * fVar2;
  fVar31 = fVar31 * fVar2;
  fVar33 = fVar33 * fVar2;
  fVar35 = fVar35 * fVar2;
  fVar95 = fVar37 * auVar30._0_4_ + fVar95;
  fVar104 = fVar52 * auVar30._4_4_ + fVar104;
  fVar106 = fVar53 * auVar30._8_4_ + fVar106;
  fVar108 = fVar54 * auVar30._12_4_ + fVar108;
  fVar2 = fVar20 + fVar21;
  fVar17 = fVar31 + fVar32;
  fVar18 = fVar33 + fVar34;
  fVar19 = fVar35 + fVar36;
  auVar27._0_4_ = fVar95 + fVar2;
  auVar27._4_4_ = fVar104 + fVar17;
  auVar27._8_4_ = fVar106 + fVar18;
  auVar27._12_4_ = fVar108 + fVar19;
  auVar5._0_4_ = fVar118 + fVar2;
  auVar5._4_4_ = fVar124 + fVar17;
  auVar5._8_4_ = fVar126 + fVar18;
  auVar5._12_4_ = fVar128 + fVar19;
  auVar30 = vrcpps_avx(auVar27);
  fVar17 = auVar30._0_4_;
  fVar18 = auVar30._4_4_;
  fVar19 = auVar30._8_4_;
  fVar2 = auVar30._12_4_;
  auVar69._0_4_ = -((auVar27._0_4_ * fVar17 - _DAT_145fc6ed8) * fVar17) + fVar17;
  auVar69._4_4_ = -((auVar27._4_4_ * fVar18 - _DAT_145fc6ed8) * fVar18) + fVar18;
  auVar69._8_4_ = -((auVar27._8_4_ * fVar19 - _DAT_145fc6ed8) * fVar19) + fVar19;
  auVar69._12_4_ = -((auVar27._12_4_ * fVar2 - _DAT_145fc6ed8) * fVar2) + fVar2;
  auVar30 = vshufps_avx(auVar69,auVar69,0xff);
  auVar28._0_4_ = auVar30._0_4_ * auVar27._0_4_;
  auVar28._4_4_ = auVar30._4_4_ * auVar27._4_4_;
  auVar28._8_4_ = auVar30._8_4_ * auVar27._8_4_;
  auVar28._12_4_ = auVar30._12_4_ * auVar27._12_4_;
  auVar4 = vshufps_avx(auVar28,auVar28,0x55);
  auVar7 = vshufps_avx(auVar28,auVar28,0xff);
  auVar8 = vshufps_avx(auVar28,auVar28,0xaa);
  auVar30 = vrcpps_avx(auVar5);
  auVar70._0_4_ =
       fVar111 * auVar8._0_4_ +
       fVar75 * auVar28._0_4_ + fVar61 * auVar7._0_4_ + fVar96 * auVar4._0_4_;
  auVar70._4_4_ =
       fVar114 * auVar8._4_4_ +
       fVar78 * auVar28._0_4_ + fVar65 * auVar7._4_4_ + fVar105 * auVar4._4_4_;
  auVar70._8_4_ =
       fVar115 * auVar8._8_4_ +
       fVar79 * auVar28._0_4_ + fVar66 * auVar7._8_4_ + fVar107 * auVar4._8_4_;
  auVar70._12_4_ =
       fVar116 * auVar8._12_4_ +
       fVar80 * auVar28._0_4_ + fVar67 * auVar7._12_4_ + fVar109 * auVar4._12_4_;
  fVar17 = auVar30._0_4_;
  fVar18 = auVar30._4_4_;
  fVar19 = auVar30._8_4_;
  fVar2 = auVar30._12_4_;
  auVar43._0_4_ = -((auVar5._0_4_ * fVar17 - _DAT_145fc6ed8) * fVar17) + fVar17;
  auVar43._4_4_ = -((auVar5._4_4_ * fVar18 - _DAT_145fc6ed8) * fVar18) + fVar18;
  auVar43._8_4_ = -((auVar5._8_4_ * fVar19 - _DAT_145fc6ed8) * fVar19) + fVar19;
  auVar43._12_4_ = -((auVar5._12_4_ * fVar2 - _DAT_145fc6ed8) * fVar2) + fVar2;
  auVar30 = vshufps_avx(auVar43,auVar43,0xff);
  auVar6._0_4_ = auVar30._0_4_ * auVar5._0_4_;
  auVar6._4_4_ = auVar30._4_4_ * auVar5._4_4_;
  auVar6._8_4_ = auVar30._8_4_ * auVar5._8_4_;
  auVar6._12_4_ = auVar30._12_4_ * auVar5._12_4_;
  auVar30 = vshufps_avx(auVar6,auVar6,0x55);
  auVar4 = vshufps_avx(auVar6,auVar6,0xff);
  auVar7 = vshufps_avx(auVar6,auVar6,0xaa);
  auVar8 = vsubps_avx(auVar42,auVar70);
  auVar71._0_4_ =
       fVar111 * auVar7._0_4_ +
       fVar75 * auVar6._0_4_ + fVar61 * auVar4._0_4_ + fVar96 * auVar30._0_4_;
  auVar71._4_4_ =
       fVar114 * auVar7._4_4_ +
       fVar78 * auVar6._0_4_ + fVar65 * auVar4._4_4_ + fVar105 * auVar30._4_4_;
  auVar71._8_4_ =
       fVar115 * auVar7._8_4_ +
       fVar79 * auVar6._0_4_ + fVar66 * auVar4._8_4_ + fVar107 * auVar30._8_4_;
  auVar71._12_4_ =
       fVar116 * auVar7._12_4_ +
       fVar80 * auVar6._0_4_ + fVar67 * auVar4._12_4_ + fVar109 * auVar30._12_4_;
  auVar5 = vsubps_avx(auVar71,auVar70);
  auVar30 = vshufps_avx(auVar8,auVar8,0xd2);
  auVar4 = vshufps_avx(auVar8,auVar8,0xc9);
  auVar7 = vshufps_avx(auVar5,auVar5,0xc9);
  auVar8 = vshufps_avx(auVar5,auVar5,0xd2);
  fVar37 = -(auVar4._0_4_ * auVar8._0_4_) + auVar7._0_4_ * auVar30._0_4_;
  fVar52 = -(auVar4._4_4_ * auVar8._4_4_) + auVar7._4_4_ * auVar30._4_4_;
  fVar53 = -(auVar4._8_4_ * auVar8._8_4_) + auVar7._8_4_ * auVar30._8_4_;
  fVar54 = -(auVar4._12_4_ * auVar8._12_4_) + auVar7._12_4_ * auVar30._12_4_;
  fVar20 = fVar21 * _DAT_146159ef4 + fVar20;
  fVar31 = fVar32 * _DAT_146159ef4 + fVar31;
  fVar33 = fVar34 * _DAT_146159ef4 + fVar33;
  fVar35 = fVar36 * _DAT_146159ef4 + fVar35;
  fVar68 = fVar21 * _DAT_146159ef4 + fVar68;
  fVar72 = fVar32 * _DAT_146159ef4 + fVar72;
  fVar73 = fVar34 * _DAT_146159ef4 + fVar73;
  fVar74 = fVar36 * _DAT_146159ef4 + fVar74;
  auVar7._0_4_ = fVar20 + fVar95;
  auVar7._4_4_ = fVar31 + fVar104;
  auVar7._8_4_ = fVar33 + fVar106;
  auVar7._12_4_ = fVar35 + fVar108;
  auVar30 = vrcpps_avx(auVar7);
  fVar17 = auVar30._0_4_;
  fVar18 = auVar30._4_4_;
  fVar19 = auVar30._8_4_;
  fVar2 = auVar30._12_4_;
  auVar57._0_4_ = -((auVar7._0_4_ * fVar17 - _DAT_145fc6ed8) * fVar17) + fVar17;
  auVar57._4_4_ = -((auVar7._4_4_ * fVar18 - _DAT_145fc6ed8) * fVar18) + fVar18;
  auVar57._8_4_ = -((auVar7._8_4_ * fVar19 - _DAT_145fc6ed8) * fVar19) + fVar19;
  auVar57._12_4_ = -((auVar7._12_4_ * fVar2 - _DAT_145fc6ed8) * fVar2) + fVar2;
  auVar30 = vshufps_avx(auVar57,auVar57,0xff);
  auVar8._0_4_ = auVar30._0_4_ * auVar7._0_4_;
  auVar8._4_4_ = auVar30._4_4_ * auVar7._4_4_;
  auVar8._8_4_ = auVar30._8_4_ * auVar7._8_4_;
  auVar8._12_4_ = auVar30._12_4_ * auVar7._12_4_;
  auVar30 = vshufps_avx(auVar8,auVar8,0x55);
  auVar4 = vshufps_avx(auVar8,auVar8,0xff);
  auVar7 = vshufps_avx(auVar8,auVar8,0xaa);
  auVar58._0_4_ =
       fVar111 * auVar7._0_4_ +
       fVar75 * auVar8._0_4_ + fVar61 * auVar4._0_4_ + fVar96 * auVar30._0_4_;
  auVar58._4_4_ =
       fVar114 * auVar7._4_4_ +
       fVar78 * auVar8._0_4_ + fVar65 * auVar4._4_4_ + fVar105 * auVar30._4_4_;
  auVar58._8_4_ =
       fVar115 * auVar7._8_4_ +
       fVar79 * auVar8._0_4_ + fVar66 * auVar4._8_4_ + fVar107 * auVar30._8_4_;
  auVar58._12_4_ =
       fVar116 * auVar7._12_4_ +
       fVar80 * auVar8._0_4_ + fVar67 * auVar4._12_4_ + fVar109 * auVar30._12_4_;
  auVar9._0_4_ = fVar118 + fVar68;
  auVar9._4_4_ = fVar124 + fVar72;
  auVar9._8_4_ = fVar126 + fVar73;
  auVar9._12_4_ = fVar128 + fVar74;
  auVar29._0_4_ = fVar95 + fVar68;
  auVar29._4_4_ = fVar104 + fVar72;
  auVar29._8_4_ = fVar106 + fVar73;
  auVar29._12_4_ = fVar108 + fVar74;
  auVar30 = vrcpps_avx(auVar9);
  fVar17 = auVar30._0_4_;
  fVar18 = auVar30._4_4_;
  fVar19 = auVar30._8_4_;
  fVar2 = auVar30._12_4_;
  auVar84._0_4_ = -((auVar9._0_4_ * fVar17 - _DAT_145fc6ed8) * fVar17) + fVar17;
  auVar84._4_4_ = -((auVar9._4_4_ * fVar18 - _DAT_145fc6ed8) * fVar18) + fVar18;
  auVar84._8_4_ = -((auVar9._8_4_ * fVar19 - _DAT_145fc6ed8) * fVar19) + fVar19;
  auVar84._12_4_ = -((auVar9._12_4_ * fVar2 - _DAT_145fc6ed8) * fVar2) + fVar2;
  auVar30 = vshufps_avx(auVar84,auVar84,0xff);
  auVar10._0_4_ = auVar30._0_4_ * auVar9._0_4_;
  auVar10._4_4_ = auVar30._4_4_ * auVar9._4_4_;
  auVar10._8_4_ = auVar30._8_4_ * auVar9._8_4_;
  auVar10._12_4_ = auVar30._12_4_ * auVar9._12_4_;
  auVar30 = vshufps_avx(auVar10,auVar10,0x55);
  auVar4 = vshufps_avx(auVar10,auVar10,0xff);
  auVar7 = vshufps_avx(auVar10,auVar10,0xaa);
  auVar85._0_4_ =
       fVar111 * auVar7._0_4_ +
       fVar75 * auVar10._0_4_ + fVar61 * auVar4._0_4_ + fVar96 * auVar30._0_4_;
  auVar85._4_4_ =
       fVar114 * auVar7._4_4_ +
       fVar78 * auVar10._0_4_ + fVar65 * auVar4._4_4_ + fVar105 * auVar30._4_4_;
  auVar85._8_4_ =
       fVar115 * auVar7._8_4_ +
       fVar79 * auVar10._0_4_ + fVar66 * auVar4._8_4_ + fVar107 * auVar30._8_4_;
  auVar85._12_4_ =
       fVar116 * auVar7._12_4_ +
       fVar80 * auVar10._0_4_ + fVar67 * auVar4._12_4_ + fVar109 * auVar30._12_4_;
  auVar11._0_4_ = fVar20 + fVar118;
  auVar11._4_4_ = fVar31 + fVar124;
  auVar11._8_4_ = fVar33 + fVar126;
  auVar11._12_4_ = fVar35 + fVar128;
  auVar30 = vrcpps_avx(auVar11);
  fVar17 = auVar30._0_4_;
  fVar18 = auVar30._4_4_;
  fVar19 = auVar30._8_4_;
  fVar2 = auVar30._12_4_;
  auVar119._0_4_ = -((auVar11._0_4_ * fVar17 - _DAT_145fc6ed8) * fVar17) + fVar17;
  auVar119._4_4_ = -((auVar11._4_4_ * fVar18 - _DAT_145fc6ed8) * fVar18) + fVar18;
  auVar119._8_4_ = -((auVar11._8_4_ * fVar19 - _DAT_145fc6ed8) * fVar19) + fVar19;
  auVar119._12_4_ = -((auVar11._12_4_ * fVar2 - _DAT_145fc6ed8) * fVar2) + fVar2;
  auVar30 = vshufps_avx(auVar119,auVar119,0xff);
  auVar12._0_4_ = auVar30._0_4_ * auVar11._0_4_;
  auVar12._4_4_ = auVar30._4_4_ * auVar11._4_4_;
  auVar12._8_4_ = auVar30._8_4_ * auVar11._8_4_;
  auVar12._12_4_ = auVar30._12_4_ * auVar11._12_4_;
  auVar30 = vshufps_avx(auVar12,auVar12,0x55);
  auVar4 = vshufps_avx(auVar12,auVar12,0xff);
  auVar7 = vshufps_avx(auVar12,auVar12,0xaa);
  auVar120._0_4_ =
       fVar111 * auVar7._0_4_ +
       fVar75 * auVar12._0_4_ + fVar61 * auVar4._0_4_ + fVar96 * auVar30._0_4_;
  auVar120._4_4_ =
       fVar114 * auVar7._4_4_ +
       fVar78 * auVar12._0_4_ + fVar65 * auVar4._4_4_ + fVar105 * auVar30._4_4_;
  auVar120._8_4_ =
       fVar115 * auVar7._8_4_ +
       fVar79 * auVar12._0_4_ + fVar66 * auVar4._8_4_ + fVar107 * auVar30._8_4_;
  auVar120._12_4_ =
       fVar116 * auVar7._12_4_ +
       fVar80 * auVar12._0_4_ + fVar67 * auVar4._12_4_ + fVar109 * auVar30._12_4_;
  auVar4 = vsubps_avx(auVar58,auVar85);
  auVar30 = vshufps_avx(auVar4,auVar4,0xd2);
  auVar4 = vshufps_avx(auVar4,auVar4,0xc9);
  auVar8 = vsubps_avx(auVar120,auVar85);
  auVar7 = vshufps_avx(auVar8,auVar8,0xc9);
  auVar8 = vshufps_avx(auVar8,auVar8,0xd2);
  fVar20 = -(auVar4._0_4_ * auVar8._0_4_) + auVar7._0_4_ * auVar30._0_4_;
  fVar21 = -(auVar4._4_4_ * auVar8._4_4_) + auVar7._4_4_ * auVar30._4_4_;
  fVar68 = -(auVar4._8_4_ * auVar8._8_4_) + auVar7._8_4_ * auVar30._8_4_;
  fVar31 = -(auVar4._12_4_ * auVar8._12_4_) + auVar7._12_4_ * auVar30._12_4_;
  auVar13._0_4_ = fVar95 + fVar88;
  auVar13._4_4_ = fVar104 + fVar92;
  auVar13._8_4_ = fVar106 + fVar93;
  auVar13._12_4_ = fVar108 + fVar94;
  auVar30 = vrcpps_avx(auVar13);
  fVar17 = auVar30._0_4_;
  fVar18 = auVar30._4_4_;
  fVar19 = auVar30._8_4_;
  fVar2 = auVar30._12_4_;
  auVar134._0_4_ = -((auVar13._0_4_ * fVar17 - _DAT_145fc6ed8) * fVar17) + fVar17;
  auVar134._4_4_ = -((auVar13._4_4_ * fVar18 - _DAT_145fc6ed8) * fVar18) + fVar18;
  auVar134._8_4_ = -((auVar13._8_4_ * fVar19 - _DAT_145fc6ed8) * fVar19) + fVar19;
  auVar134._12_4_ = -((auVar13._12_4_ * fVar2 - _DAT_145fc6ed8) * fVar2) + fVar2;
  auVar30 = vshufps_avx(auVar134,auVar134,0xff);
  auVar135._0_4_ = auVar30._0_4_ * auVar13._0_4_;
  auVar135._4_4_ = auVar30._4_4_ * auVar13._4_4_;
  auVar135._8_4_ = auVar30._8_4_ * auVar13._8_4_;
  auVar135._12_4_ = auVar30._12_4_ * auVar13._12_4_;
  auVar7 = vshufps_avx(auVar135,auVar135,0x55);
  auVar8 = vshufps_avx(auVar135,auVar135,0xff);
  auVar30 = vrcpps_avx(auVar29);
  fVar2 = auVar30._0_4_;
  fVar17 = auVar30._4_4_;
  fVar18 = auVar30._8_4_;
  fVar19 = auVar30._12_4_;
  auVar89._0_4_ = -((auVar29._0_4_ * fVar2 - _DAT_145fc6ed8) * fVar2) + fVar2;
  auVar89._4_4_ = -((auVar29._4_4_ * fVar17 - _DAT_145fc6ed8) * fVar17) + fVar17;
  auVar89._8_4_ = -((auVar29._8_4_ * fVar18 - _DAT_145fc6ed8) * fVar18) + fVar18;
  auVar89._12_4_ = -((auVar29._12_4_ * fVar19 - _DAT_145fc6ed8) * fVar19) + fVar19;
  auVar30 = vshufps_avx(auVar89,auVar89,0xff);
  auVar112._0_4_ = auVar30._0_4_ * auVar29._0_4_;
  auVar112._4_4_ = auVar30._4_4_ * auVar29._4_4_;
  auVar112._8_4_ = auVar30._8_4_ * auVar29._8_4_;
  auVar112._12_4_ = auVar30._12_4_ * auVar29._12_4_;
  auVar44._0_4_ = fVar37 * fVar37;
  auVar44._4_4_ = fVar52 * fVar52;
  auVar44._8_4_ = fVar53 * fVar53;
  auVar44._12_4_ = fVar54 * fVar54;
  auVar5 = vshufps_avx(auVar112,auVar112,0x55);
  auVar6 = vshufps_avx(auVar112,auVar112,0xff);
  auVar3 = ZEXT816(0) << 0x20;
  auVar30 = vblendps_avx(auVar44,auVar3,8);
  auVar30 = vhaddps_avx(auVar30,auVar30);
  auVar30 = vhaddps_avx(auVar30,auVar30);
  auVar4 = vrsqrtps_avx(auVar30);
  fVar2 = auVar4._0_4_;
  fVar17 = auVar4._4_4_;
  fVar18 = auVar4._8_4_;
  fVar19 = auVar4._12_4_;
  auVar77._0_4_ =
       ((_DAT_145fc6f08 * fVar2 * fVar2 * auVar30._0_4_ - _DAT_145fc6f08) * fVar2 + fVar2) * fVar37;
  auVar77._4_4_ =
       ((_DAT_145fc6f08 * fVar17 * fVar17 * auVar30._4_4_ - _DAT_145fc6f08) * fVar17 + fVar17) *
       fVar52;
  auVar77._8_4_ =
       ((_DAT_145fc6f08 * fVar18 * fVar18 * auVar30._8_4_ - _DAT_145fc6f08) * fVar18 + fVar18) *
       fVar53;
  auVar77._12_4_ =
       ((_DAT_145fc6f08 * fVar19 * fVar19 * auVar30._12_4_ - _DAT_145fc6f08) * fVar19 + fVar19) *
       fVar54;
  auVar90._0_4_ = fVar20 * fVar20;
  auVar90._4_4_ = fVar21 * fVar21;
  auVar90._8_4_ = fVar68 * fVar68;
  auVar90._12_4_ = fVar31 * fVar31;
  auVar30 = vblendps_avx(auVar90,auVar3,8);
  auVar30 = vhaddps_avx(auVar30,auVar30);
  auVar30 = vhaddps_avx(auVar30,auVar30);
  auVar4 = vrsqrtps_avx(auVar30);
  fVar2 = auVar4._0_4_;
  fVar17 = auVar4._4_4_;
  fVar18 = auVar4._8_4_;
  fVar19 = auVar4._12_4_;
  auVar91._0_4_ =
       fVar20 * ((_DAT_145fc6f08 * auVar30._0_4_ * fVar2 * fVar2 - _DAT_145fc6f08) * fVar2 + fVar2);
  auVar91._4_4_ =
       fVar21 * ((_DAT_145fc6f08 * auVar30._4_4_ * fVar17 * fVar17 - _DAT_145fc6f08) * fVar17 +
                fVar17);
  auVar91._8_4_ =
       fVar68 * ((_DAT_145fc6f08 * auVar30._8_4_ * fVar18 * fVar18 - _DAT_145fc6f08) * fVar18 +
                fVar18);
  auVar91._12_4_ =
       fVar31 * ((_DAT_145fc6f08 * auVar30._12_4_ * fVar19 * fVar19 - _DAT_145fc6f08) * fVar19 +
                fVar19);
  auVar30 = vshufps_avx(auVar135,auVar135,0xaa);
  auVar14._0_4_ =
       fVar111 * auVar30._0_4_ +
       fVar75 * auVar135._0_4_ + fVar61 * auVar8._0_4_ + fVar96 * auVar7._0_4_;
  auVar14._4_4_ =
       fVar114 * auVar30._4_4_ +
       fVar78 * auVar135._0_4_ + fVar65 * auVar8._4_4_ + fVar105 * auVar7._4_4_;
  auVar14._8_4_ =
       fVar115 * auVar30._8_4_ +
       fVar79 * auVar135._0_4_ + fVar66 * auVar8._8_4_ + fVar107 * auVar7._8_4_;
  auVar14._12_4_ =
       fVar116 * auVar30._12_4_ +
       fVar80 * auVar135._0_4_ + fVar67 * auVar8._12_4_ + fVar109 * auVar7._12_4_;
  auVar30 = vshufps_avx(auVar112,auVar112,0xaa);
  auVar101._0_4_ =
       fVar111 * auVar30._0_4_ +
       fVar75 * auVar112._0_4_ + fVar61 * auVar6._0_4_ + fVar96 * auVar5._0_4_;
  auVar101._4_4_ =
       fVar114 * auVar30._4_4_ +
       fVar78 * auVar112._0_4_ + fVar65 * auVar6._4_4_ + fVar105 * auVar5._4_4_;
  auVar101._8_4_ =
       fVar115 * auVar30._8_4_ +
       fVar79 * auVar112._0_4_ + fVar66 * auVar6._8_4_ + fVar107 * auVar5._8_4_;
  auVar101._12_4_ =
       fVar116 * auVar30._12_4_ +
       fVar80 * auVar112._0_4_ + fVar67 * auVar6._12_4_ + fVar109 * auVar5._12_4_;
  auVar8 = vsubps_avx(auVar14,auVar101);
  auVar7 = vsubps_avx(auVar58,auVar101);
  auVar30 = vshufps_avx(auVar8,auVar8,0xc9);
  auVar4 = vshufps_avx(auVar7,auVar7,0xd2);
  auVar7 = vshufps_avx(auVar7,auVar7,0xc9);
  auVar8 = vshufps_avx(auVar8,auVar8,0xd2);
  fVar96 = -(auVar30._0_4_ * auVar4._0_4_) + auVar7._0_4_ * auVar8._0_4_;
  fVar95 = -(auVar30._4_4_ * auVar4._4_4_) + auVar7._4_4_ * auVar8._4_4_;
  fVar104 = -(auVar30._8_4_ * auVar4._8_4_) + auVar7._8_4_ * auVar8._8_4_;
  fVar106 = -(auVar30._12_4_ * auVar4._12_4_) + auVar7._12_4_ * auVar8._12_4_;
  auVar45._0_4_ = fVar96 * fVar96;
  auVar45._4_4_ = fVar95 * fVar95;
  auVar45._8_4_ = fVar104 * fVar104;
  auVar45._12_4_ = fVar106 * fVar106;
  auVar30 = vblendps_avx(auVar45,auVar3,8);
  auVar30 = vhaddps_avx(auVar30,auVar30);
  auVar30 = vhaddps_avx(auVar30,auVar30);
  auVar4 = vrsqrtps_avx(auVar30);
  fVar2 = auVar4._0_4_;
  fVar17 = auVar4._4_4_;
  fVar18 = auVar4._8_4_;
  fVar19 = auVar4._12_4_;
  auVar7 = vsubps_avx(auVar101,auVar85);
  auVar4 = vshufps_avx(auVar7,auVar7,0xd2);
  auVar7 = vshufps_avx(auVar7,auVar7,0xc9);
  auVar64._0_4_ =
       ((_DAT_145fc6f08 * fVar2 * fVar2 * auVar30._0_4_ - _DAT_145fc6f08) * fVar2 + fVar2) * fVar96;
  auVar64._4_4_ =
       ((_DAT_145fc6f08 * fVar17 * fVar17 * auVar30._4_4_ - _DAT_145fc6f08) * fVar17 + fVar17) *
       fVar95;
  auVar64._8_4_ =
       ((_DAT_145fc6f08 * fVar18 * fVar18 * auVar30._8_4_ - _DAT_145fc6f08) * fVar18 + fVar18) *
       fVar104;
  auVar64._12_4_ =
       ((_DAT_145fc6f08 * fVar19 * fVar19 * auVar30._12_4_ - _DAT_145fc6f08) * fVar19 + fVar19) *
       fVar106;
  auVar102._0_4_ = auVar101._0_4_ * auVar64._0_4_;
  auVar102._4_4_ = auVar101._4_4_ * auVar64._4_4_;
  auVar102._8_4_ = auVar101._8_4_ * auVar64._8_4_;
  auVar102._12_4_ = auVar101._12_4_ * auVar64._12_4_;
  auVar30 = vblendps_avx(auVar102,auVar3,8);
  auVar30 = vhaddps_avx(auVar30,auVar30);
  auVar5 = vsubps_avx(auVar42,auVar85);
  auVar8 = vshufps_avx(auVar5,auVar5,0xc9);
  auVar5 = vshufps_avx(auVar5,auVar5,0xd2);
  auVar30 = vhaddps_avx(auVar30,auVar30);
  fVar96 = -(auVar8._0_4_ * auVar4._0_4_) + auVar7._0_4_ * auVar5._0_4_;
  fVar95 = -(auVar8._4_4_ * auVar4._4_4_) + auVar7._4_4_ * auVar5._4_4_;
  fVar104 = -(auVar8._8_4_ * auVar4._8_4_) + auVar7._8_4_ * auVar5._8_4_;
  fVar106 = -(auVar8._12_4_ * auVar4._12_4_) + auVar7._12_4_ * auVar5._12_4_;
  auVar46._0_4_ = fVar96 * fVar96;
  auVar46._4_4_ = fVar95 * fVar95;
  auVar46._8_4_ = fVar104 * fVar104;
  auVar46._12_4_ = fVar106 * fVar106;
  auVar103._0_4_ = auVar30._0_4_ ^ _DAT_145fc6f10;
  auVar103._4_4_ = auVar30._4_4_ ^ _DAT_145fc6f10;
  auVar103._8_4_ = auVar30._8_4_ ^ _DAT_145fc6f10;
  auVar103._12_4_ = auVar30._12_4_ ^ _DAT_145fc6f10;
  auVar30 = vblendps_avx(auVar64,auVar103,8);
  auVar4 = vblendps_avx(auVar46,auVar3,8);
  auVar4 = vhaddps_avx(auVar4,auVar4);
  auVar4 = vhaddps_avx(auVar4,auVar4);
  auVar7 = vrsqrtps_avx(auVar4);
  fVar2 = auVar7._0_4_;
  fVar17 = auVar7._4_4_;
  fVar18 = auVar7._8_4_;
  fVar19 = auVar7._12_4_;
  auVar113._0_4_ =
       fVar96 * ((_DAT_145fc6f08 * fVar2 * fVar2 * auVar4._0_4_ - _DAT_145fc6f08) * fVar2 + fVar2);
  auVar113._4_4_ =
       fVar95 * ((_DAT_145fc6f08 * fVar17 * fVar17 * auVar4._4_4_ - _DAT_145fc6f08) * fVar17 +
                fVar17);
  auVar113._8_4_ =
       fVar104 * ((_DAT_145fc6f08 * fVar18 * fVar18 * auVar4._8_4_ - _DAT_145fc6f08) * fVar18 +
                 fVar18);
  auVar113._12_4_ =
       fVar106 * ((_DAT_145fc6f08 * fVar19 * fVar19 * auVar4._12_4_ - _DAT_145fc6f08) * fVar19 +
                 fVar19);
  auVar5 = vsubps_avx(auVar71,auVar120);
  auVar8 = vsubps_avx(auVar85,auVar120);
  auVar4 = vshufps_avx(auVar5,auVar5,0xc9);
  auVar7 = vshufps_avx(auVar8,auVar8,0xd2);
  auVar8 = vshufps_avx(auVar8,auVar8,0xc9);
  auVar5 = vshufps_avx(auVar5,auVar5,0xd2);
  fVar96 = -(auVar4._0_4_ * auVar7._0_4_) + auVar8._0_4_ * auVar5._0_4_;
  fVar95 = -(auVar4._4_4_ * auVar7._4_4_) + auVar8._4_4_ * auVar5._4_4_;
  fVar104 = -(auVar4._8_4_ * auVar7._8_4_) + auVar8._8_4_ * auVar5._8_4_;
  fVar106 = -(auVar4._12_4_ * auVar7._12_4_) + auVar8._12_4_ * auVar5._12_4_;
  auVar47._0_4_ = fVar96 * fVar96;
  auVar47._4_4_ = fVar95 * fVar95;
  auVar47._8_4_ = fVar104 * fVar104;
  auVar47._12_4_ = fVar106 * fVar106;
  auVar4 = vblendps_avx(auVar47,auVar3,8);
  auVar4 = vhaddps_avx(auVar4,auVar4);
  auVar8 = vhaddps_avx(auVar4,auVar4);
  auVar4 = vrsqrtps_avx(auVar8);
  fVar2 = auVar4._0_4_;
  fVar17 = auVar4._4_4_;
  fVar18 = auVar4._8_4_;
  fVar19 = auVar4._12_4_;
  auVar131._0_4_ = auVar113._0_4_ * auVar85._0_4_;
  auVar131._4_4_ = auVar113._4_4_ * auVar85._4_4_;
  auVar131._8_4_ = auVar113._8_4_ * auVar85._8_4_;
  auVar131._12_4_ = auVar113._12_4_ * auVar85._12_4_;
  auVar86._0_4_ = auVar91._0_4_ * auVar85._0_4_;
  auVar86._4_4_ = auVar91._4_4_ * auVar85._4_4_;
  auVar86._8_4_ = auVar91._8_4_ * auVar85._8_4_;
  auVar86._12_4_ = auVar91._12_4_ * auVar85._12_4_;
  auVar4 = vblendps_avx(auVar131,auVar3,8);
  auVar7 = vblendps_avx(auVar86,auVar3,8);
  auVar4 = vhaddps_avx(auVar4,auVar4);
  auVar7 = vhaddps_avx(auVar7,auVar7);
  auVar4 = vhaddps_avx(auVar4,auVar4);
  auVar7 = vhaddps_avx(auVar7,auVar7);
  auVar15._0_4_ =
       fVar96 * ((_DAT_145fc6f08 * fVar2 * fVar2 * auVar8._0_4_ - _DAT_145fc6f08) * fVar2 + fVar2);
  auVar15._4_4_ =
       fVar95 * ((_DAT_145fc6f08 * fVar17 * fVar17 * auVar8._4_4_ - _DAT_145fc6f08) * fVar17 +
                fVar17);
  auVar15._8_4_ =
       fVar104 * ((_DAT_145fc6f08 * fVar18 * fVar18 * auVar8._8_4_ - _DAT_145fc6f08) * fVar18 +
                 fVar18);
  auVar15._12_4_ =
       fVar106 * ((_DAT_145fc6f08 * fVar19 * fVar19 * auVar8._12_4_ - _DAT_145fc6f08) * fVar19 +
                 fVar19);
  auVar48._0_4_ = auVar120._0_4_ * auVar15._0_4_;
  auVar48._4_4_ = auVar120._4_4_ * auVar15._4_4_;
  auVar48._8_4_ = auVar120._8_4_ * auVar15._8_4_;
  auVar48._12_4_ = auVar120._12_4_ * auVar15._12_4_;
  auVar5 = vsubps_avx(auVar120,auVar58);
  auVar132._0_4_ = auVar4._0_4_ ^ _DAT_145fc6f10;
  auVar132._4_4_ = auVar4._4_4_ ^ _DAT_145fc6f10;
  auVar132._8_4_ = auVar4._8_4_ ^ _DAT_145fc6f10;
  auVar132._12_4_ = auVar4._12_4_ ^ _DAT_145fc6f10;
  auVar87._0_4_ = _DAT_145fc6f10 ^ auVar7._0_4_;
  auVar87._4_4_ = _DAT_145fc6f10 ^ auVar7._4_4_;
  auVar87._8_4_ = _DAT_145fc6f10 ^ auVar7._8_4_;
  auVar87._12_4_ = _DAT_145fc6f10 ^ auVar7._12_4_;
  auVar4 = vblendps_avx(auVar48,auVar3,8);
  auVar7 = vblendps_avx(auVar113,auVar132,8);
  auVar8 = vblendps_avx(auVar91,auVar87,8);
  auVar4 = vhaddps_avx(auVar4,auVar4);
  auVar4 = vhaddps_avx(auVar4,auVar4);
  auVar49._0_4_ = _DAT_145fc6f10 ^ auVar4._0_4_;
  auVar49._4_4_ = _DAT_145fc6f10 ^ auVar4._4_4_;
  auVar49._8_4_ = _DAT_145fc6f10 ^ auVar4._8_4_;
  auVar49._12_4_ = _DAT_145fc6f10 ^ auVar4._12_4_;
  auVar4 = vblendps_avx(auVar15,auVar49,8);
  auVar10 = vunpcklps_avx(auVar113,auVar15);
  auVar9 = vunpckhps_avx(auVar7,auVar4);
  auVar6 = vsubps_avx(auVar70,auVar58);
  auVar4 = vshufps_avx(auVar5,auVar5,0xc9);
  auVar7 = vshufps_avx(auVar5,auVar5,0xd2);
  auVar5 = vshufps_avx(auVar6,auVar6,0xd2);
  auVar6 = vshufps_avx(auVar6,auVar6,0xc9);
  fVar96 = -(auVar6._0_4_ * auVar7._0_4_) + auVar4._0_4_ * auVar5._0_4_;
  fVar95 = -(auVar6._4_4_ * auVar7._4_4_) + auVar4._4_4_ * auVar5._4_4_;
  fVar104 = -(auVar6._8_4_ * auVar7._8_4_) + auVar4._8_4_ * auVar5._8_4_;
  fVar106 = -(auVar6._12_4_ * auVar7._12_4_) + auVar4._12_4_ * auVar5._12_4_;
  auVar50._0_4_ = fVar96 * fVar96;
  auVar50._4_4_ = fVar95 * fVar95;
  auVar50._8_4_ = fVar104 * fVar104;
  auVar50._12_4_ = fVar106 * fVar106;
  auVar4 = vblendps_avx(auVar50,auVar3,8);
  auVar4 = vhaddps_avx(auVar4,auVar4);
  auVar7 = vhaddps_avx(auVar4,auVar4);
  auVar4 = vrsqrtps_avx(auVar7);
  fVar2 = auVar4._0_4_;
  fVar17 = auVar4._4_4_;
  fVar18 = auVar4._8_4_;
  fVar19 = auVar4._12_4_;
  auVar121._0_4_ = auVar70._0_4_ * auVar77._0_4_;
  auVar121._4_4_ = auVar70._4_4_ * auVar77._4_4_;
  auVar121._8_4_ = auVar70._8_4_ * auVar77._8_4_;
  auVar121._12_4_ = auVar70._12_4_ * auVar77._12_4_;
  auVar4 = vblendps_avx(auVar121,auVar3,8);
  auVar5 = vhaddps_avx(auVar4,auVar4);
  auVar51._0_4_ =
       fVar96 * ((_DAT_145fc6f08 * fVar2 * fVar2 * auVar7._0_4_ - _DAT_145fc6f08) * fVar2 + fVar2);
  auVar51._4_4_ =
       fVar95 * ((_DAT_145fc6f08 * fVar17 * fVar17 * auVar7._4_4_ - _DAT_145fc6f08) * fVar17 +
                fVar17);
  auVar51._8_4_ =
       fVar104 * ((_DAT_145fc6f08 * fVar18 * fVar18 * auVar7._8_4_ - _DAT_145fc6f08) * fVar18 +
                 fVar18);
  auVar51._12_4_ =
       fVar106 * ((_DAT_145fc6f08 * fVar19 * fVar19 * auVar7._12_4_ - _DAT_145fc6f08) * fVar19 +
                 fVar19);
  auVar59._0_4_ = auVar51._0_4_ * auVar58._0_4_;
  auVar59._4_4_ = auVar51._4_4_ * auVar58._4_4_;
  auVar59._8_4_ = auVar51._8_4_ * auVar58._8_4_;
  auVar59._12_4_ = auVar51._12_4_ * auVar58._12_4_;
  auVar4 = vblendps_avx(auVar59,auVar3,8);
  auVar7 = vhaddps_avx(auVar5,auVar5);
  auVar4 = vhaddps_avx(auVar4,auVar4);
  auVar122._0_4_ = auVar7._0_4_ ^ _DAT_145fc6f10;
  auVar122._4_4_ = auVar7._4_4_ ^ _DAT_145fc6f10;
  auVar122._8_4_ = auVar7._8_4_ ^ _DAT_145fc6f10;
  auVar122._12_4_ = auVar7._12_4_ ^ _DAT_145fc6f10;
  auVar4 = vhaddps_avx(auVar4,auVar4);
  auVar60._0_4_ = _DAT_145fc6f10 ^ auVar4._0_4_;
  auVar60._4_4_ = _DAT_145fc6f10 ^ auVar4._4_4_;
  auVar60._8_4_ = _DAT_145fc6f10 ^ auVar4._8_4_;
  auVar60._12_4_ = _DAT_145fc6f10 ^ auVar4._12_4_;
  auVar4 = vblendps_avx(auVar51,auVar60,8);
  auVar5 = vunpcklps_avx(auVar51,auVar64);
  auVar7 = vblendps_avx(auVar77,auVar122,8);
  auVar30 = vunpckhps_avx(auVar4,auVar30);
  auVar7 = vunpckhps_avx(auVar7,auVar3);
  auVar6 = vunpckhps_avx(auVar30,auVar9);
  auVar11 = vunpcklps_avx(auVar30,auVar9);
  auVar4 = vunpckhps_avx(auVar5,auVar10);
  auVar30 = vunpcklps_avx(auVar5,auVar10);
  auVar8 = vunpckhps_avx(auVar8,auVar3);
  *param_4 = auVar30;
  param_4[1] = auVar4;
  auVar30 = vcmpps_avx(auVar30,auVar3,0);
  auVar4 = vcmpps_avx(auVar4,auVar3,0);
  auVar10 = vunpckhps_avx(auVar8,auVar7);
  auVar12 = vunpcklps_avx(auVar8,auVar7);
  auVar5 = vinsertps_avx(auVar77,auVar91,0x4c);
  auVar9 = vinsertps_avx(auVar91,auVar77,0x1c);
  auVar7 = vcmpps_avx(auVar6,auVar3,0);
  param_4[2] = auVar11;
  auVar8 = vcmpps_avx(auVar11,auVar3,0);
  param_4[3] = auVar6;
  param_4[4] = auVar9;
  param_4[5] = auVar5;
  auVar5 = vcmpps_avx(auVar5,auVar3,0);
  param_4[6] = auVar12;
  auVar6 = vcmpps_avx(auVar12,auVar3,0);
  param_4[7] = auVar10;
  auVar9 = vcmpps_avx(auVar9,auVar3,0);
  auVar10 = vcmpps_avx(auVar10,auVar3,0);
  auVar16._0_4_ = ~(auVar7._0_4_ & auVar30._0_4_ & auVar4._0_4_ & auVar8._0_4_) & _DAT_14615b3a0;
  auVar16._4_4_ = ~(auVar7._4_4_ & auVar30._4_4_ & auVar4._4_4_ & auVar8._4_4_) & _UNK_14615b3a4;
  auVar16._8_4_ = ~(auVar7._8_4_ & auVar30._8_4_ & auVar4._8_4_ & auVar8._8_4_) & _UNK_14615b3a8;
  auVar16._12_4_ =
       ~(auVar7._12_4_ & auVar30._12_4_ & auVar4._12_4_ & auVar8._12_4_) & _UNK_14615b3ac;
  auVar30._0_4_ = ~(auVar9._0_4_ & auVar5._0_4_ & auVar10._0_4_ & auVar6._0_4_) & _DAT_14615b3b0;
  auVar30._4_4_ = ~(auVar9._4_4_ & auVar5._4_4_ & auVar10._4_4_ & auVar6._4_4_) & _UNK_14615b3b4;
  auVar30._8_4_ = ~(auVar9._8_4_ & auVar5._8_4_ & auVar10._8_4_ & auVar6._8_4_) & _UNK_14615b3b8;
  auVar30._12_4_ =
       ~(auVar9._12_4_ & auVar5._12_4_ & auVar10._12_4_ & auVar6._12_4_) & _UNK_14615b3bc;
  auVar30 = vpmaxud_avx(auVar16,auVar30);
  auVar4 = vpshufd_avx(auVar30,0xee);
  auVar30 = vpmaxsd_avx(auVar30,auVar4);
  auVar4 = vpshufd_avx(auVar30,0x55);
  auVar30 = vpmaxsd_avx(auVar30,auVar4);
  iVar1 = 6;
  if (auVar30._0_4_ < 6) {
    iVar1 = auVar30._0_4_;
  }
  *(int *)param_4[8] = iVar1;
  return;
}

