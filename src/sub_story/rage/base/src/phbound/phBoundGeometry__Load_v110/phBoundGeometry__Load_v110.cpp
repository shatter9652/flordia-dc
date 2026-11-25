// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1447c3b90  size: 7826 bytes
// Name:    phBoundGeometry::Load_v110
// Subsystem: physics
// Class:   phBoundGeometry
//
// Evidence:
//   GTAVSRC: phBoundGeometry::Load_v110  (rage/base/src/phbound/boundgeom.cpp)
//   literal: materialcolor
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14551ab80, FUN_1447c6f60, FUN_144fbd000, FUN_1428ca730, FUN_1456a6b70, FUN_144ec6720, FUN_14551a5f0, FUN_1447c7510, FUN_1447c68f0, FUN_1428ca690, FUN_1447c7fb0, FUN_1428ca6b0, FUN_1447c2870, FUN_144ec6670, phBoundGeometry::LoadGeomStats_v110, FUN_1428ca7b0, FUN_145034e00, FUN_1447c6c00, FUN_1447c7450
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/phBoundGeometry.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 phBoundGeometry__Load_v110(longlong *param_1,longlong *param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  float *pfVar3;
  undefined8 *puVar4;
  ushort uVar5;
  bool bVar6;
  code *pcVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  int iVar18;
  bool bVar19;
  ulonglong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  bool bVar27;
  char cVar28;
  byte bVar29;
  undefined1 uVar30;
  byte bVar31;
  undefined2 uVar32;
  undefined2 uVar33;
  undefined2 uVar34;
  undefined2 uVar35;
  int iVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  int iVar40;
  int iVar41;
  uint uVar42;
  longlong lVar43;
  ulonglong uVar44;
  undefined8 uVar45;
  undefined4 *puVar46;
  undefined1 *puVar47;
  undefined2 *puVar48;
  undefined1 (*pauVar49) [16];
  undefined1 (*pauVar50) [16];
  undefined4 *puVar51;
  longlong lVar52;
  undefined4 *puVar53;
  longlong lVar54;
  longlong lVar55;
  longlong lVar56;
  ulonglong uVar57;
  longlong lVar58;
  longlong lVar59;
  int iVar60;
  longlong lVar61;
  longlong lVar62;
  longlong lVar63;
  bool bVar64;
  undefined4 uVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar85;
  float fVar86;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar87;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  float fVar103;
  float fVar104;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [32];
  float fVar105;
  float fVar108;
  float fVar109;
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  float fVar110;
  float fVar111;
  float fVar114;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  float fVar119;
  undefined1 in_ZMM6 [64];
  undefined1 auVar118 [64];
  undefined1 auVar120 [16];
  undefined1 in_ZMM7 [64];
  undefined1 auVar121 [64];
  undefined1 auVar122 [64];
  undefined1 in_ZMM8 [64];
  undefined1 auVar123 [64];
  undefined1 auVar124 [64];
  float fVar126;
  undefined1 auVar125 [64];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 in_ZMM10 [64];
  undefined1 auVar129 [64];
  undefined1 auVar130 [64];
  undefined1 in_ZMM12 [64];
  undefined4 uVar131;
  longlong lStack_2e0;
  longlong lStack_2b8;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  undefined4 uStack_1e8;
  char cStack_1e4;
  undefined2 uStack_1e3;
  undefined1 uStack_1e1;
  char cStack_1e0;
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_88 [16];
  undefined1 auVar84 [32];
  
  auStack_88 = in_ZMM12._0_16_;
  auStack_a8 = in_ZMM10._0_16_;
  auStack_c8 = in_ZMM8._0_16_;
  auStack_d8 = in_ZMM7._0_16_;
  auStack_e8 = in_ZMM6._0_16_;
  if (DAT_149e4ed66 == '\0') {
    phBoundGeometry__LoadGeomStats_v110(param_2);
  }
  uVar37 = _DAT_149e4ed40;
  DAT_149e4ed66 = 0;
  *(uint *)(param_1 + 0x1a) = _DAT_149e4ed40;
  uVar38 = _DAT_149e4ed5c;
  *(uint *)((longlong)param_1 + 0xd4) = _DAT_149e4ed5c;
  *(undefined1 *)((longlong)param_1 + 0x82) = DAT_149e4ed44;
  bVar31 = DAT_149e4ed64;
  iVar60 = _DAT_149e4ed50;
  uVar42 = _DAT_149e4ed4c;
  if ((0xfffe < uVar37) || (0xfffe < uVar38)) {
    param_1[0x1a] = 0;
LAB_1447c5967:
    FUN_14551a5f0(param_1,0,0);
    (**(code **)(*param_1 + 0xc0))(param_1);
    auVar83._0_12_ = ZEXT812(0);
    auVar83._12_4_ = 0;
    *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
    param_1[0x11] = 0;
    param_1[0x23] = 0;
    *(undefined1 (*) [16])(param_1 + 0x16) = auVar83;
    return 1;
  }
  if (uVar37 == 0) goto LAB_1447c5967;
  uVar57 = (ulonglong)_DAT_149e4ed4c;
  if ((DAT_149e4ed64 & 1) != 0) {
    func_0x000144ee47b0(param_1);
  }
  if (DAT_149e4ed65 == '\x01') {
    auVar70._4_4_ = _DAT_149e4ed60;
    auVar70._0_4_ = _DAT_149e4ed60;
    auVar70._8_4_ = _DAT_149e4ed60;
    auVar70._12_4_ = _DAT_149e4ed60;
    auVar88._0_12_ = ZEXT812(0);
    auVar88._12_4_ = 0;
    auVar88 = vcmpps_avx(auVar88,auVar70,2);
    if (auVar88 == (undefined1  [16])0x0) {
      *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3d23d70a;
    }
    else {
      auVar88 = vblendps_avx(auVar70,*(undefined1 (*) [16])(param_1 + 4),7);
      *(undefined1 (*) [16])(param_1 + 4) = auVar88;
    }
  }
  cVar28 = FUN_1428ca7b0(param_2,&UNK_1467888ce,1);
  if (cVar28 == '\0') {
    bVar64 = false;
  }
  else {
    iVar36 = (**(code **)(*param_2 + 0x28))(param_2,1);
    bVar64 = iVar36 == 1;
  }
  cVar28 = FUN_1428ca7b0(param_2,&UNK_146788a8e,1);
  if (cVar28 != '\0') {
    (**(code **)(*param_2 + 0x28))(param_2,1);
  }
  cVar28 = FUN_1428ca7b0(param_2,&UNK_146788882,1);
  if (cVar28 != '\0') {
    (**(code **)(*param_2 + 0x40))(param_2,1);
  }
  uVar131 = *(undefined4 *)((longlong)param_1 + 0xd4);
  if (uVar57 == 0) {
    FUN_145034e00(param_1,(int)param_1[0x1a],*(undefined1 *)((longlong)param_1 + 0x82),1,uVar131,1);
    lStack_2e0 = param_1[0x11];
    *(undefined8 *)param_1[0x1e] = 0;
  }
  else {
    FUN_145034e00(param_1,(int)param_1[0x1a],*(undefined1 *)((longlong)param_1 + 0x82),uVar42,
                  uVar131,1);
    lStack_2e0 = param_1[0x11];
  }
  FUN_144ec6720();
  lVar43 = -1;
  if (-1 < (longlong)(int)param_1[0x1a]) {
    lVar43 = (longlong)(int)param_1[0x1a] << 4;
  }
  lVar43 = func_0x000144f97130(lVar43);
  FUN_144ec6670();
  uVar44 = (ulonglong)*(uint *)(param_1 + 0x1a);
  if (0 < (int)*(uint *)(param_1 + 0x1a)) {
    lVar58 = 0;
    puVar53 = (undefined4 *)(lVar43 + 8);
    do {
      FUN_1428ca6b0(param_2,&UNK_14677967d);
      auVar118._0_8_ = (**(code **)(*param_2 + 0x40))(param_2,1);
      auVar118._8_56_ = extraout_var;
      auVar118 = ZEXT1664(auVar118._0_16_);
      auVar121._0_8_ = (**(code **)(*param_2 + 0x40))(param_2,1);
      auVar121._8_56_ = extraout_var_00;
      in_ZMM7 = ZEXT1664(auVar121._0_16_);
      uVar65 = (**(code **)(*param_2 + 0x40))(param_2,1);
      puVar53[-2] = auVar118._0_4_;
      puVar53[-1] = in_ZMM7._0_4_;
      *puVar53 = uVar65;
      lVar58 = lVar58 + 1;
      puVar53 = puVar53 + 4;
      uVar44 = (ulonglong)(int)param_1[0x1a];
    } while (lVar58 < (longlong)uVar44);
    if (0 < (int)param_1[0x1a] && *(char *)((longlong)param_1 + 0x82) != '\0') {
      iVar36 = 0;
      do {
        cVar28 = FUN_1428ca7b0(param_2,&UNK_146785bee,1);
        uVar37 = 0xffffffff;
        if (cVar28 != '\0') {
          uVar37 = (**(code **)(*param_2 + 0x28))(param_2,1);
          uVar38 = (**(code **)(*param_2 + 0x28))(param_2,1);
          uVar39 = (**(code **)(*param_2 + 0x28))(param_2,1);
          iVar40 = (**(code **)(*param_2 + 0x28))(param_2,1);
          uVar37 = iVar40 << 0x18 | (uVar39 & 0xff) << 0x10 | (uVar38 & 0xff) << 8 | uVar37 & 0xff;
        }
        uVar38 = (uint)*(byte *)((longlong)param_1 + 0x82) * iVar36;
        iVar36 = iVar36 + 1;
        *(uint *)(param_1[0x17] + (ulonglong)uVar38 * 4) = uVar37;
        uVar44 = (ulonglong)*(uint *)(param_1 + 0x1a);
      } while (iVar36 < (int)*(uint *)(param_1 + 0x1a));
    }
  }
  *(short *)((longlong)param_1 + 0x84) = (short)uVar44;
  cVar28 = FUN_1428ca730(param_2,&UNK_146788a21,1);
  if (cVar28 == '\0') {
    lVar58 = 0;
  }
  else {
    FUN_144ec6720();
    lVar58 = -1;
    if (-1 < (longlong)(int)param_1[0x1a]) {
      lVar58 = (longlong)(int)param_1[0x1a] << 4;
    }
    lVar58 = func_0x000144f97130(lVar58);
    FUN_144ec6670();
    if (0 < (int)param_1[0x1a]) {
      lVar62 = 0;
      puVar53 = (undefined4 *)(lVar58 + 8);
      do {
        FUN_1428ca690(param_2);
        uVar65 = (**(code **)(*param_2 + 0x40))(param_2,1);
        puVar53[-2] = uVar65;
        uVar65 = (**(code **)(*param_2 + 0x40))(param_2,1);
        puVar53[-1] = uVar65;
        uVar65 = (**(code **)(*param_2 + 0x40))(param_2,1);
        *puVar53 = uVar65;
        lVar62 = lVar62 + 1;
        puVar53 = puVar53 + 4;
      } while (lVar62 < (int)param_1[0x1a]);
    }
  }
  if (0 < (int)uVar42) {
    uVar44 = 0;
    do {
      uVar45 = FUN_1447c2870(param_2);
      *(undefined8 *)(param_1[0x1e] + uVar44 * 8) = uVar45;
      uVar44 = uVar44 + 1;
    } while (uVar57 != uVar44);
  }
  if (0 < iVar60) {
    do {
      cVar28 = FUN_1428ca7b0(param_2,&UNK_14677d3f9,1);
      if (cVar28 != '\0') {
        (**(code **)(*param_2 + 0x28))(param_2,1);
        (**(code **)(*param_2 + 0x28))(param_2,1);
        (**(code **)(*param_2 + 0x28))(param_2,1);
        (**(code **)(*param_2 + 0x28))(param_2,1);
      }
      iVar60 = iVar60 + -1;
    } while (iVar60 != 0);
  }
  cVar28 = FUN_1428ca730(param_2,&UNK_1467889ff);
  if ((cVar28 != '\0') || (cVar28 = FUN_1428ca730(param_2), cVar28 != '\0')) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  if (0 < _DAT_149e4ed48) {
    iVar60 = 0;
    do {
      FUN_1428ca6b0(param_2,&UNK_146783518);
      (**(code **)(*param_2 + 0x28))(param_2,1);
      (**(code **)(*param_2 + 0x28))(param_2);
      if (bVar64) {
        (**(code **)(*param_2 + 0x50))(param_2);
      }
      iVar60 = iVar60 + 1;
    } while (iVar60 < _DAT_149e4ed48);
  }
  iVar36 = _DAT_149e4ed58;
  iVar60 = _DAT_149e4ed54;
  if ((char)param_1[2] == '\x05') {
    lVar54 = (longlong)_DAT_149e4ed54;
    lVar62 = lVar54 * 8;
    if (lVar54 < 0) {
      lVar62 = -1;
    }
    lVar62 = func_0x000144f97130(lVar62);
    param_1[0x27] = lVar62;
    *(short *)(param_1 + 0x28) = (short)iVar60;
    if (iVar36 < 1) goto LAB_1447c45a0;
    FUN_144ec6720();
    lVar62 = (longlong)*(int *)((longlong)param_1 + 0xd4) * 2;
    if ((longlong)*(int *)((longlong)param_1 + 0xd4) < 0) {
      lVar62 = -1;
    }
    lVar62 = func_0x000144f97130(lVar62);
    FUN_144ec6670();
    auVar88 = in_ZMM7._0_16_;
    if (0 < iVar60) {
      lVar63 = 0;
      do {
        FUN_1428ca690(param_2);
        uVar45 = (**(code **)(*param_2 + 0x38))(param_2,1);
        auVar88 = in_ZMM7._0_16_;
        *(undefined8 *)(param_1[0x27] + lVar63 * 8) = uVar45;
        lVar63 = lVar63 + 1;
      } while (lVar54 != lVar63);
    }
    uVar45 = _DAT_145f437c0;
    auVar118 = ZEXT1664(CONCAT88(_DAT_145f437c0,_DAT_145f437c0));
    iVar40 = 0;
    auVar88 = vpcmpeqd_avx(auVar88,auVar88);
    auVar121 = ZEXT1664(auVar88);
    iVar60 = 0;
    do {
      auVar118 = ZEXT1664(auVar118._0_16_);
      auVar121 = ZEXT1664(auVar121._0_16_);
      auVar124 = ZEXT1664(in_ZMM12._0_16_);
      FUN_1428ca690(param_2);
      uVar32 = (**(code **)(*param_2 + 0x28))(param_2,1);
      uVar37 = (**(code **)(*param_2 + 0x28))(param_2);
      auVar70 = auVar121._0_16_;
      auVar88 = auVar118._0_16_;
      auVar8._8_8_ = uVar45;
      auVar8._0_8_ = uVar45;
      auVar8._16_8_ = uVar45;
      auVar8._24_8_ = uVar45;
      auVar11 = vpcmpeqd_avx2(auVar124._0_32_,auVar124._0_32_);
      in_ZMM12 = ZEXT3264(auVar11);
      if (0 < (int)uVar37) {
        auVar13 = vpmovsxbq_avx2(ZEXT416(_DAT_145f43800));
        auVar102 = vpmovsxbq_avx2(ZEXT416(_DAT_145f43804));
        auVar14 = vpmovsxbq_avx2(ZEXT416(_DAT_145fc3d2c));
        auVar15 = vpmovsxbq_avx2(ZEXT416(_DAT_145fc3d28));
        lVar63 = (ulonglong)uVar37 - 1;
        lVar54 = lVar62 + 0x1e + (longlong)iVar40 * 2;
        lVar55 = 0;
        auVar71._8_8_ = lVar63;
        auVar71._0_8_ = lVar63;
        auVar84._16_8_ = lVar63;
        auVar84._0_16_ = auVar71;
        auVar84._24_8_ = lVar63;
        auVar17 = auVar8 ^ auVar84;
        do {
          auVar120 = vpcmpgtq_avx(auVar13._0_16_ ^ auVar88,auVar71 ^ auVar88);
          auVar120 = vpackssdw_avx(auVar120,auVar120);
          auVar120 = vpackssdw_avx(auVar120 ^ auVar70,auVar120 ^ auVar70);
          auVar120 = vpacksswb_avx(auVar120,auVar120);
          if ((auVar120._0_4_ & 1) != 0) {
            *(undefined2 *)(lVar54 + lVar55 + -0x1e) = uVar32;
          }
          auVar120 = vpcmpgtq_avx(auVar13._0_16_ ^ auVar88,auVar71 ^ auVar88);
          auVar120 = vpackssdw_avx(auVar120,auVar120);
          auVar120 = vpackssdw_avx(auVar120 ^ auVar70,auVar120 ^ auVar70);
          auVar120 = vpacksswb_avx(auVar120,auVar120);
          if ((auVar120[1] & 1) != 0) {
            *(undefined2 *)(lVar54 + lVar55 + -0x1c) = uVar32;
          }
          auVar12 = vpcmpgtq_avx2(auVar8 ^ auVar13,auVar17);
          auVar16 = vpshuflw_avx2(auVar12,0xe8);
          auVar120._0_4_ = auVar16._16_4_;
          auVar120._4_4_ = auVar120._0_4_;
          auVar120._8_4_ = auVar120._0_4_;
          auVar120._12_4_ = auVar120._0_4_;
          auVar120 = vpackssdw_avx(auVar120 ^ auVar70,auVar120 ^ auVar70);
          auVar120 = vpacksswb_avx(auVar120,auVar120);
          if ((auVar120[2] & 1) != 0) {
            *(undefined2 *)(lVar54 + lVar55 + -0x1a) = uVar32;
          }
          auVar120 = vpackssdw_avx(auVar12._16_16_,auVar12._16_16_);
          auVar120 = vpackssdw_avx(auVar120 ^ auVar70,auVar120 ^ auVar70);
          auVar120 = vpacksswb_avx(auVar120,auVar120);
          if ((auVar120[3] & 1) != 0) {
            *(undefined2 *)(lVar54 + lVar55 + -0x18) = uVar32;
          }
          auVar120 = vpcmpgtq_avx(auVar102._0_16_ ^ auVar88,auVar71 ^ auVar88);
          auVar120 = vpackssdw_avx(auVar120,auVar120);
          auVar12 = vpermq_avx2(ZEXT1632(auVar120 ^ auVar70),0x55);
          auVar12 = vpackssdw_avx2(auVar12,auVar84);
          auVar120 = vpacksswb_avx(auVar12._16_16_,auVar12._16_16_);
          if ((auVar120[8] & 1) != 0) {
            *(undefined2 *)(lVar54 + lVar55 + -0x16) = uVar32;
          }
          auVar120 = vpcmpgtq_avx(auVar102._0_16_ ^ auVar88,auVar71 ^ auVar88);
          auVar120 = vpshufhw_avx(auVar120,0x84);
          auVar12 = vpermq_avx2(ZEXT1632(auVar120 ^ auVar70),0x55);
          auVar12 = vpackssdw_avx2(auVar12,auVar84);
          auVar120 = vpacksswb_avx(auVar12._16_16_,auVar12._16_16_);
          if ((auVar120[9] & 1) != 0) {
            *(undefined2 *)(lVar54 + lVar55 + -0x14) = uVar32;
          }
          auVar16 = vpcmpgtq_avx2(auVar8 ^ auVar102,auVar17);
          auVar12 = vpackssdw_avx2(auVar84,auVar16);
          auVar12 = vpackssdw_avx2(auVar12 ^ auVar11,auVar84);
          auVar120 = vpacksswb_avx(auVar12._16_16_,auVar12._16_16_);
          if ((auVar120[10] & 1) != 0) {
            *(undefined2 *)(lVar54 + lVar55 + -0x12) = uVar32;
          }
          auVar12 = vpackssdw_avx2(auVar84,auVar16);
          auVar12 = vpackssdw_avx2(auVar12 ^ auVar11,auVar84);
          auVar120 = vpacksswb_avx(auVar12._16_16_,auVar12._16_16_);
          if ((auVar120[0xb] & 1) != 0) {
            *(undefined2 *)(lVar54 + lVar55 + -0x10) = uVar32;
          }
          auVar120 = vpcmpgtq_avx(auVar14._0_16_ ^ auVar88,auVar71 ^ auVar88);
          auVar120 = vpackssdw_avx(auVar120,auVar120);
          auVar120 = vpackssdw_avx(auVar120 ^ auVar70,auVar120 ^ auVar70);
          auVar120 = vpacksswb_avx(auVar120,auVar120);
          if ((auVar120[4] & 1) != 0) {
            *(undefined2 *)(lVar54 + lVar55 + -0xe) = uVar32;
          }
          auVar120 = vpcmpgtq_avx(auVar14._0_16_ ^ auVar88,auVar71 ^ auVar88);
          auVar120 = vpackssdw_avx(auVar120,auVar120);
          auVar120 = vpackssdw_avx(auVar120 ^ auVar70,auVar120 ^ auVar70);
          auVar120 = vpacksswb_avx(auVar120,auVar120);
          if ((auVar120[5] & 1) != 0) {
            *(undefined2 *)(lVar54 + lVar55 + -0xc) = uVar32;
          }
          auVar12 = vpcmpgtq_avx2(auVar8 ^ auVar14,auVar17);
          auVar16 = vpshuflw_avx2(auVar12,0xe8);
          auVar127._0_4_ = auVar16._16_4_;
          auVar127._4_4_ = auVar127._0_4_;
          auVar127._8_4_ = auVar127._0_4_;
          auVar127._12_4_ = auVar127._0_4_;
          auVar120 = vpackssdw_avx(auVar127 ^ auVar70,auVar127 ^ auVar70);
          auVar120 = vpacksswb_avx(auVar120,auVar120);
          if ((auVar120[6] & 1) != 0) {
            *(undefined2 *)(lVar54 + lVar55 + -10) = uVar32;
          }
          auVar120 = vpackssdw_avx(auVar12._16_16_,auVar12._16_16_);
          auVar120 = vpackssdw_avx(auVar120 ^ auVar70,auVar120 ^ auVar70);
          auVar120 = vpacksswb_avx(auVar120,auVar120);
          if ((auVar120[7] & 1) != 0) {
            *(undefined2 *)(lVar54 + lVar55 + -8) = uVar32;
          }
          auVar120 = vpcmpgtq_avx(auVar15._0_16_ ^ auVar88,auVar71 ^ auVar88);
          auVar120 = vpackssdw_avx(auVar120,auVar120);
          auVar12 = vpermq_avx2(ZEXT1632(auVar120 ^ auVar70),0x55);
          auVar12 = vpackssdw_avx2(auVar84,auVar12);
          auVar120 = vpacksswb_avx(auVar12._16_16_,auVar12._16_16_);
          if ((auVar120[0xc] & 1) != 0) {
            *(undefined2 *)(lVar54 + lVar55 + -6) = uVar32;
          }
          auVar120 = vpcmpgtq_avx(auVar15._0_16_ ^ auVar88,auVar71 ^ auVar88);
          auVar120 = vpshufhw_avx(auVar120,0x84);
          auVar12 = vpermq_avx2(ZEXT1632(auVar120 ^ auVar70),0x55);
          auVar12 = vpackssdw_avx2(auVar84,auVar12);
          auVar120 = vpacksswb_avx(auVar12._16_16_,auVar12._16_16_);
          if ((auVar120[0xd] & 1) != 0) {
            *(undefined2 *)(lVar54 + lVar55 + -4) = uVar32;
          }
          auVar16 = vpcmpgtq_avx2(auVar15 ^ auVar8,auVar17);
          auVar12 = vpackssdw_avx2(auVar84,auVar16);
          auVar12 = vpackssdw_avx2(auVar84,auVar12 ^ auVar11);
          auVar120 = vpacksswb_avx(auVar12._16_16_,auVar12._16_16_);
          if ((auVar120[0xe] & 1) != 0) {
            *(undefined2 *)(lVar54 + lVar55 + -2) = uVar32;
          }
          auVar12 = vpackssdw_avx2(auVar84,auVar16);
          auVar12 = vpackssdw_avx2(auVar84,auVar12 ^ auVar11);
          auVar120 = vpacksswb_avx(auVar12._16_16_,auVar12._16_16_);
          if ((auVar120[0xf] & 1) != 0) {
            *(undefined2 *)(lVar54 + lVar55) = uVar32;
          }
          lVar55 = lVar55 + 0x20;
          auVar12._0_8_ = _DAT_146159e28 + auVar13._0_8_;
          auVar12._8_8_ = _DAT_146159e28 + auVar13._8_8_;
          auVar12._16_8_ = _DAT_146159e28 + auVar13._16_8_;
          auVar12._24_8_ = _DAT_146159e28 + auVar13._24_8_;
          auVar16._0_8_ = _DAT_146159e28 + auVar102._0_8_;
          auVar16._8_8_ = _DAT_146159e28 + auVar102._8_8_;
          auVar16._16_8_ = _DAT_146159e28 + auVar102._16_8_;
          auVar16._24_8_ = _DAT_146159e28 + auVar102._24_8_;
          auVar9._0_8_ = _DAT_146159e28 + auVar14._0_8_;
          auVar9._8_8_ = _DAT_146159e28 + auVar14._8_8_;
          auVar9._16_8_ = _DAT_146159e28 + auVar14._16_8_;
          auVar9._24_8_ = _DAT_146159e28 + auVar14._24_8_;
          auVar10._0_8_ = auVar15._0_8_ + _DAT_146159e28;
          auVar10._8_8_ = auVar15._8_8_ + _DAT_146159e28;
          auVar10._16_8_ = auVar15._16_8_ + _DAT_146159e28;
          auVar10._24_8_ = auVar15._24_8_ + _DAT_146159e28;
          auVar13 = auVar12;
          auVar102 = auVar16;
          auVar14 = auVar9;
          auVar15 = auVar10;
        } while ((ulonglong)(uVar37 + 0xf >> 4) << 5 != lVar55);
      }
      iVar40 = iVar40 + uVar37;
      iVar60 = iVar60 + 1;
    } while (iVar60 != iVar36);
  }
  else {
LAB_1447c45a0:
    lVar62 = 0;
  }
  FUN_144ec6720();
  iVar60 = *(int *)((longlong)param_1 + 0xd4);
  lVar63 = (longlong)iVar60;
  lVar54 = -1;
  if (-1 < lVar63) {
    lVar54 = lVar63 * 0x10;
  }
  puVar53 = (undefined4 *)func_0x000144f97130(lVar54);
  if (puVar53 != (undefined4 *)0x0 && lVar63 != 0) {
    puVar46 = puVar53;
    do {
      *(undefined2 *)(puVar46 + 1) = 0;
      *puVar46 = 0;
      *(undefined8 *)((longlong)puVar46 + 6) = 0xffffffff00000000;
      *(undefined2 *)((longlong)puVar46 + 0xe) = 0xffff;
      puVar46 = puVar46 + 4;
    } while (puVar46 != puVar53 + lVar63 * 4);
  }
  lVar54 = func_0x000144f97130(lVar63);
  if (lVar62 == 0) {
    lStack_2b8 = 0;
  }
  else {
    lVar55 = -1;
    if (-1 < iVar60) {
      lVar55 = lVar63 * 2;
    }
    lStack_2b8 = func_0x000144f97130(lVar55);
  }
  FUN_144ec6670();
  FUN_144ec6720();
  lVar63 = func_0x0001420ad0f0((longlong)*(int *)((longlong)param_1 + 0xd4));
  FUN_144ec6670();
  uVar37 = *(uint *)((longlong)param_1 + 0xd4);
  if ((longlong)(int)uVar37 < 1) {
    uVar42 = 0;
  }
  else {
    lVar55 = 0;
    do {
      *(undefined2 *)(lVar63 + 0x3c + lVar55) = 0;
      *(undefined1 *)(lVar63 + 0x3e + lVar55) = 0;
      uVar38 = _DAT_145fc6f10;
      lVar55 = lVar55 + 0x40;
    } while ((longlong)(int)uVar37 * 0x40 != lVar55);
    auVar121 = ZEXT1664(CONCAT412(_DAT_146159bfc,
                                  CONCAT48(_DAT_146159bfc,CONCAT44(_DAT_146159bfc,_DAT_146159bfc))))
    ;
    auVar118 = ZEXT1664(CONCAT412(_DAT_145fc6ed8,
                                  CONCAT48(_DAT_145fc6ed8,CONCAT44(_DAT_145fc6ed8,_DAT_145fc6ed8))))
    ;
    lVar55 = 0;
    lVar61 = 0;
    uVar42 = 0;
    fVar119 = _DAT_145fc6f08;
    fVar69 = _DAT_145fc6f08;
    fVar111 = _DAT_145fc6f08;
    fVar114 = _DAT_145fc6f08;
    fVar105 = _DAT_145fc6f88;
    do {
      (**(code **)(*param_2 + 0x10))(param_2,&uStack_1e8,0x100);
      bVar6 = uStack_1e8 == 0x31697274;
      bVar27 = cStack_1e4 == '\0';
      bVar64 = uStack_1e8 != 0x64617571;
      bVar19 = cStack_1e4 != '\0';
      if (((uStack_1e8 == 0x64617571 && cStack_1e4 == '\0') || (uStack_1e8 == 0x697274)) ||
         (bVar6 && bVar27)) {
        iVar36 = (**(code **)(*param_2 + 0x28))(param_2,1);
        iVar40 = (**(code **)(*param_2 + 0x28))(param_2,1);
        iVar60 = (**(code **)(*param_2 + 0x28))(param_2,1);
        iVar41 = 0;
        if (!bVar64 && !bVar19) {
          iVar41 = (**(code **)(*param_2 + 0x28))(param_2,1);
        }
        uVar30 = (**(code **)(*param_2 + 0x28))(param_2,1);
        cVar28 = FUN_1428ca730(param_2);
        uVar32 = (undefined2)iVar40;
        if (((cVar28 == '\0') && (cVar28 = FUN_1428ca730(param_2), cVar28 == '\0')) &&
           ((cVar28 = FUN_1428ca730(param_2), cVar28 == '\0' &&
            (cVar28 = FUN_1428ca730(param_2), cVar28 == '\0')))) {
          if (bVar6 && bVar27) {
            uVar45 = (**(code **)(*param_2 + 0x40))(param_2,1);
            fVar66 = (float)(**(code **)(*param_2 + 0x40))(param_2,1);
            fVar67 = (float)(**(code **)(*param_2 + 0x40))(param_2);
            auVar88 = *(undefined1 (*) [16])(lVar43 + (longlong)iVar36 * 0x10);
            auVar70 = *(undefined1 (*) [16])(lVar43 + (longlong)iVar40 * 0x10);
            auVar124 = ZEXT1664(auVar70);
            fVar126 = (float)uVar45;
            bVar6 = fVar105 <= fVar126;
            auVar71 = *(undefined1 (*) [16])(lVar43 + (longlong)iVar60 * 0x10);
            auVar120 = vsubps_avx(auVar88,auVar70);
            auVar115 = vsubps_avx(auVar71,auVar70);
            auVar70 = vshufps_avx(auVar120,auVar120,0xd2);
            auVar120 = vshufps_avx(auVar120,auVar120,0xc9);
            auVar127 = vshufps_avx(auVar115,auVar115,0xc9);
            auVar115 = vshufps_avx(auVar115,auVar115,0xd2);
            auVar125 = ZEXT1664(auVar115);
            fVar68 = -(auVar115._0_4_ * auVar120._0_4_) + auVar70._0_4_ * auVar127._0_4_;
            fVar85 = -(auVar115._4_4_ * auVar120._4_4_) + auVar70._4_4_ * auVar127._4_4_;
            fVar86 = -(auVar115._8_4_ * auVar120._8_4_) + auVar70._8_4_ * auVar127._8_4_;
            fVar87 = -(auVar115._12_4_ * auVar120._12_4_) + auVar70._12_4_ * auVar127._12_4_;
            auVar89._0_4_ = fVar68 * fVar68;
            auVar89._4_4_ = fVar85 * fVar85;
            auVar89._8_4_ = fVar86 * fVar86;
            auVar89._12_4_ = fVar87 * fVar87;
            auVar70 = vblendps_avx(auVar89,(undefined1  [16])0x0,8);
            auVar70 = vhaddps_avx(auVar70,auVar70);
            auVar120 = vhaddps_avx(auVar70,auVar70);
            auVar70 = vrsqrtps_avx(auVar120);
            fVar108 = auVar70._0_4_;
            fVar109 = auVar70._4_4_;
            fVar110 = auVar70._8_4_;
            fVar103 = auVar70._12_4_;
            auVar89 = auVar121._0_16_;
            auVar70 = vcmpps_avx(auVar89,auVar120,2);
            auVar90._0_4_ =
                 (float)(auVar70._0_4_ &
                        (uint)(((fVar119 * fVar108 * fVar108 * auVar120._0_4_ - fVar119) * fVar108 +
                               fVar108) * auVar120._0_4_));
            auVar90._4_4_ =
                 (float)(auVar70._4_4_ &
                        (uint)(((fVar69 * fVar109 * fVar109 * auVar120._4_4_ - fVar69) * fVar109 +
                               fVar109) * auVar120._4_4_));
            auVar90._8_4_ =
                 (float)(auVar70._8_4_ &
                        (uint)(((fVar111 * fVar110 * fVar110 * auVar120._8_4_ - fVar111) * fVar110 +
                               fVar110) * auVar120._8_4_));
            auVar90._12_4_ =
                 (float)(auVar70._12_4_ &
                        (uint)(((fVar114 * fVar103 * fVar103 * auVar120._12_4_ - fVar114) * fVar103
                               + fVar103) * auVar120._12_4_));
            auVar70 = vrcpps_avx(auVar90);
            fVar108 = auVar70._0_4_;
            fVar109 = auVar70._4_4_;
            fVar110 = auVar70._8_4_;
            fVar103 = auVar70._12_4_;
            auVar128._0_4_ =
                 (-((fVar108 * auVar90._0_4_ - auVar118._0_4_) * fVar108) + fVar108) * fVar68;
            auVar128._4_4_ =
                 (-((fVar109 * auVar90._4_4_ - auVar118._4_4_) * fVar109) + fVar109) * fVar85;
            auVar128._8_4_ =
                 (-((fVar110 * auVar90._8_4_ - auVar118._8_4_) * fVar110) + fVar110) * fVar86;
            auVar128._12_4_ =
                 (-((fVar103 * auVar90._12_4_ - auVar118._12_4_) * fVar103) + fVar103) * fVar87;
            auVar129 = ZEXT1664(auVar128);
            auVar70 = vshufps_avx(auVar128,auVar128,0xc9);
            auVar115._0_4_ = auVar70._0_4_ ^ uVar38;
            auVar115._4_4_ = auVar70._4_4_ ^ uVar38;
            auVar115._8_4_ = auVar70._8_4_ ^ uVar38;
            auVar115._12_4_ = auVar70._12_4_ ^ uVar38;
            auVar70 = vshufps_avx(auVar128,auVar128,0xd2);
            auVar130 = ZEXT1664(auVar70);
            if (bVar6) {
              auVar120 = auVar118._0_16_;
            }
            else {
              auVar123 = ZEXT1664(auVar88);
              auVar122 = ZEXT1664(auVar115);
              fVar68 = (float)func_0x000145f40770(uVar45);
              auVar90 = vsubps_avx(auVar124._0_16_,auVar123._0_16_);
              auVar112._0_12_ = ZEXT812(0);
              auVar112._12_4_ = 0;
              auVar72._0_4_ = -(fVar68 * fVar68) + _DAT_145fc6ed8;
              auVar115 = auVar122._0_16_;
              auVar89 = auVar121._0_16_;
              auVar120 = vshufps_avx(auVar90,auVar90,0xc9);
              auVar90 = vshufps_avx(auVar90,auVar90,0xd2);
              fVar85 = auVar122._0_4_ * auVar90._0_4_ + auVar130._0_4_ * auVar120._0_4_;
              fVar86 = auVar122._4_4_ * auVar90._4_4_ + auVar130._4_4_ * auVar120._4_4_;
              fVar87 = auVar122._8_4_ * auVar90._8_4_ + auVar130._8_4_ * auVar120._8_4_;
              fVar104 = auVar122._12_4_ * auVar90._12_4_ + auVar130._12_4_ * auVar120._12_4_;
              auVar120 = auVar118._0_16_;
              auVar106._0_4_ = fVar85 * fVar85;
              auVar106._4_4_ = fVar86 * fVar86;
              auVar106._8_4_ = fVar87 * fVar87;
              auVar106._12_4_ = fVar104 * fVar104;
              auVar72._4_4_ = auVar72._0_4_;
              auVar72._8_4_ = auVar72._0_4_;
              auVar72._12_4_ = auVar72._0_4_;
              auVar128 = vmaxps_avx(auVar72,auVar112);
              auVar90 = vblendps_avx(auVar106,auVar112,8);
              auVar90 = vhaddps_avx(auVar90,auVar90);
              auVar90 = vhaddps_avx(auVar90,auVar90);
              auVar72 = vrcpps_avx(auVar90);
              fVar108 = auVar72._0_4_;
              fVar109 = auVar72._4_4_;
              fVar110 = auVar72._8_4_;
              fVar103 = auVar72._12_4_;
              auVar73._0_4_ =
                   (-((fVar108 * auVar90._0_4_ - auVar118._0_4_) * fVar108) + fVar108) *
                   auVar128._0_4_;
              auVar73._4_4_ =
                   (-((fVar109 * auVar90._4_4_ - auVar118._4_4_) * fVar109) + fVar109) *
                   auVar128._4_4_;
              auVar73._8_4_ =
                   (-((fVar110 * auVar90._8_4_ - auVar118._8_4_) * fVar110) + fVar110) *
                   auVar128._8_4_;
              auVar73._12_4_ =
                   (-((fVar103 * auVar90._12_4_ - auVar118._12_4_) * fVar103) + fVar103) *
                   auVar128._12_4_;
              auVar90 = vrsqrtps_avx(auVar73);
              fVar108 = auVar90._0_4_;
              fVar109 = auVar90._4_4_;
              fVar110 = auVar90._8_4_;
              fVar103 = auVar90._12_4_;
              auVar90 = vcmpps_avx(auVar89,auVar73,2);
              pfVar3 = (float *)(lVar63 + lVar55 * 4);
              *pfVar3 = fVar85 * (float)(auVar90._0_4_ &
                                        (uint)(((fVar119 * fVar108 * fVar108 * auVar73._0_4_ -
                                                fVar119) * fVar108 + fVar108) * auVar73._0_4_)) +
                        auVar129._0_4_ * fVar68;
              pfVar3[1] = fVar86 * (float)(auVar90._4_4_ &
                                          (uint)(((fVar69 * fVar109 * fVar109 * auVar73._4_4_ -
                                                  fVar69) * fVar109 + fVar109) * auVar73._4_4_)) +
                          auVar129._4_4_ * fVar68;
              pfVar3[2] = fVar87 * (float)(auVar90._8_4_ &
                                          (uint)(((fVar111 * fVar110 * fVar110 * auVar73._8_4_ -
                                                  fVar111) * fVar110 + fVar110) * auVar73._8_4_)) +
                          auVar129._8_4_ * fVar68;
              pfVar3[3] = fVar104 * (float)(auVar90._12_4_ &
                                           (uint)(((fVar114 * fVar103 * fVar103 * auVar73._12_4_ -
                                                   fVar114) * fVar103 + fVar103) * auVar73._12_4_))
                          + auVar129._12_4_ * fVar68;
              *(float *)(lVar63 + 0x30 + lVar55 * 4) = fVar126;
            }
            auVar124 = ZEXT1664(auVar89);
            auVar118 = ZEXT1664(auVar120);
            auVar121 = ZEXT1264(ZEXT812(0));
            *(bool *)(lVar63 + 0x3c + lVar55 * 4) = !bVar6;
            bVar6 = fVar66 < fVar105;
            fStack_258 = auVar70._0_4_;
            fStack_254 = auVar70._4_4_;
            fStack_250 = auVar70._8_4_;
            fStack_24c = auVar70._12_4_;
            fVar108 = _DAT_145fc6ed8;
            if (bVar6) {
              auVar130 = ZEXT1664(auVar115);
              fVar85 = (float)func_0x000145f40770(fVar66);
              fVar108 = _DAT_145fc6ed8;
              auVar115 = auVar130._0_16_;
              auVar120 = auVar118._0_16_;
              fVar86 = auVar130._0_4_ * auVar125._0_4_ + auVar127._0_4_ * fStack_258;
              fVar87 = auVar130._4_4_ * auVar125._4_4_ + auVar127._4_4_ * fStack_254;
              fVar126 = auVar130._8_4_ * auVar125._8_4_ + auVar127._8_4_ * fStack_250;
              fVar104 = auVar130._12_4_ * auVar125._12_4_ + auVar127._12_4_ * fStack_24c;
              auVar98._0_4_ = fVar86 * fVar86;
              auVar98._4_4_ = fVar87 * fVar87;
              auVar98._8_4_ = fVar126 * fVar126;
              auVar98._12_4_ = fVar104 * fVar104;
              auVar70 = vblendps_avx(auVar98,auVar121._0_16_,8);
              auVar74._0_4_ = -(fVar85 * fVar85) + _DAT_145fc6ed8;
              auVar70 = vhaddps_avx(auVar70,auVar70);
              auVar74._4_4_ = auVar74._0_4_;
              auVar74._8_4_ = auVar74._0_4_;
              auVar74._12_4_ = auVar74._0_4_;
              auVar127 = vmaxps_avx(auVar74,auVar121._0_16_);
              auVar70 = vhaddps_avx(auVar70,auVar70);
              auVar89 = vrcpps_avx(auVar70);
              fVar109 = auVar89._0_4_;
              fVar110 = auVar89._4_4_;
              fVar103 = auVar89._8_4_;
              fVar68 = auVar89._12_4_;
              auVar75._0_4_ =
                   (-((fVar109 * auVar70._0_4_ - auVar118._0_4_) * fVar109) + fVar109) *
                   auVar127._0_4_;
              auVar75._4_4_ =
                   (-((fVar110 * auVar70._4_4_ - auVar118._4_4_) * fVar110) + fVar110) *
                   auVar127._4_4_;
              auVar75._8_4_ =
                   (-((fVar103 * auVar70._8_4_ - auVar118._8_4_) * fVar103) + fVar103) *
                   auVar127._8_4_;
              auVar75._12_4_ =
                   (-((fVar68 * auVar70._12_4_ - auVar118._12_4_) * fVar68) + fVar68) *
                   auVar127._12_4_;
              auVar70 = vrsqrtps_avx(auVar75);
              fVar109 = auVar70._0_4_;
              fVar110 = auVar70._4_4_;
              fVar103 = auVar70._8_4_;
              fVar68 = auVar70._12_4_;
              auVar70 = vcmpps_avx(auVar124._0_16_,auVar75,2);
              auVar91._0_4_ =
                   fVar86 * (float)(auVar70._0_4_ &
                                   (uint)(((fVar119 * fVar109 * fVar109 * auVar75._0_4_ - fVar119) *
                                           fVar109 + fVar109) * auVar75._0_4_)) +
                   auVar129._0_4_ * fVar85;
              auVar91._4_4_ =
                   fVar87 * (float)(auVar70._4_4_ &
                                   (uint)(((fVar69 * fVar110 * fVar110 * auVar75._4_4_ - fVar69) *
                                           fVar110 + fVar110) * auVar75._4_4_)) +
                   auVar129._4_4_ * fVar85;
              auVar91._8_4_ =
                   fVar126 * (float)(auVar70._8_4_ &
                                    (uint)(((fVar111 * fVar103 * fVar103 * auVar75._8_4_ - fVar111)
                                            * fVar103 + fVar103) * auVar75._8_4_)) +
                   auVar129._8_4_ * fVar85;
              auVar91._12_4_ =
                   fVar104 * (float)(auVar70._12_4_ &
                                    (uint)(((fVar114 * fVar68 * fVar68 * auVar75._12_4_ - fVar114) *
                                            fVar68 + fVar68) * auVar75._12_4_)) +
                   auVar129._12_4_ * fVar85;
              *(undefined1 (*) [16])(lVar63 + 0x10 + lVar55 * 4) = auVar91;
              *(float *)(lVar63 + 0x34 + lVar55 * 4) = fVar66;
            }
            auVar118 = ZEXT1664(auVar120);
            auVar125 = ZEXT464((uint)fVar67);
            *(bool *)(lVar63 + 0x3d + lVar55 * 4) = bVar6;
            bVar6 = fVar105 <= fVar67;
            if (bVar6) {
              auVar70 = auVar124._0_16_;
            }
            else {
              auVar130 = ZEXT1664(auVar115);
              fVar66 = (float)func_0x000145f40770(fVar67);
              auVar76._0_4_ = -(fVar66 * fVar66) + fVar108;
              auVar70 = auVar124._0_16_;
              auVar120 = vsubps_avx(auVar88,auVar71);
              auVar76._4_4_ = auVar76._0_4_;
              auVar76._8_4_ = auVar76._0_4_;
              auVar76._12_4_ = auVar76._0_4_;
              auVar71 = vmaxps_avx(auVar76,auVar121._0_16_);
              auVar88 = vshufps_avx(auVar120,auVar120,0xc9);
              auVar120 = vshufps_avx(auVar120,auVar120,0xd2);
              fVar67 = auVar130._0_4_ * auVar120._0_4_ + auVar88._0_4_ * fStack_258;
              fVar68 = auVar130._4_4_ * auVar120._4_4_ + auVar88._4_4_ * fStack_254;
              fVar85 = auVar130._8_4_ * auVar120._8_4_ + auVar88._8_4_ * fStack_250;
              fVar86 = auVar130._12_4_ * auVar120._12_4_ + auVar88._12_4_ * fStack_24c;
              auVar107._0_4_ = fVar67 * fVar67;
              auVar107._4_4_ = fVar68 * fVar68;
              auVar107._8_4_ = fVar85 * fVar85;
              auVar107._12_4_ = fVar86 * fVar86;
              auVar88 = vblendps_avx(auVar107,auVar121._0_16_,8);
              auVar88 = vhaddps_avx(auVar88,auVar88);
              auVar88 = vhaddps_avx(auVar88,auVar88);
              auVar120 = vrcpps_avx(auVar88);
              fVar108 = auVar120._0_4_;
              fVar109 = auVar120._4_4_;
              fVar110 = auVar120._8_4_;
              fVar103 = auVar120._12_4_;
              auVar77._0_4_ =
                   (-((fVar108 * auVar88._0_4_ - auVar118._0_4_) * fVar108) + fVar108) *
                   auVar71._0_4_;
              auVar77._4_4_ =
                   (-((fVar109 * auVar88._4_4_ - auVar118._4_4_) * fVar109) + fVar109) *
                   auVar71._4_4_;
              auVar77._8_4_ =
                   (-((fVar110 * auVar88._8_4_ - auVar118._8_4_) * fVar110) + fVar110) *
                   auVar71._8_4_;
              auVar77._12_4_ =
                   (-((fVar103 * auVar88._12_4_ - auVar118._12_4_) * fVar103) + fVar103) *
                   auVar71._12_4_;
              auVar88 = vrsqrtps_avx(auVar77);
              fVar108 = auVar88._0_4_;
              fVar109 = auVar88._4_4_;
              fVar110 = auVar88._8_4_;
              fVar103 = auVar88._12_4_;
              auVar88 = vcmpps_avx(auVar70,auVar77,2);
              auVar92._0_4_ =
                   fVar67 * (float)(auVar88._0_4_ &
                                   (uint)(((fVar119 * fVar108 * fVar108 * auVar77._0_4_ - fVar119) *
                                           fVar108 + fVar108) * auVar77._0_4_)) +
                   auVar129._0_4_ * fVar66;
              auVar92._4_4_ =
                   fVar68 * (float)(auVar88._4_4_ &
                                   (uint)(((fVar69 * fVar109 * fVar109 * auVar77._4_4_ - fVar69) *
                                           fVar109 + fVar109) * auVar77._4_4_)) +
                   auVar129._4_4_ * fVar66;
              auVar92._8_4_ =
                   fVar85 * (float)(auVar88._8_4_ &
                                   (uint)(((fVar111 * fVar110 * fVar110 * auVar77._8_4_ - fVar111) *
                                           fVar110 + fVar110) * auVar77._8_4_)) +
                   auVar129._8_4_ * fVar66;
              auVar92._12_4_ =
                   fVar86 * (float)(auVar88._12_4_ &
                                   (uint)(((fVar114 * fVar103 * fVar103 * auVar77._12_4_ - fVar114)
                                           * fVar103 + fVar103) * auVar77._12_4_)) +
                   auVar129._12_4_ * fVar66;
              *(undefined1 (*) [16])(lVar63 + 0x20 + lVar55 * 4) = auVar92;
              *(int *)(lVar63 + 0x38 + lVar55 * 4) = auVar125._0_4_;
            }
            auVar121 = ZEXT1664(auVar70);
            *(bool *)(lVar63 + 0x3e + lVar55 * 4) = !bVar6;
            goto LAB_1447c4d7f;
          }
          (**(code **)(*param_2 + 0x28))(param_2);
          (**(code **)(*param_2 + 0x28))(param_2);
          (**(code **)(*param_2 + 0x28))(param_2);
          uVar33 = (undefined2)((uint)uVar131 >> 0x10);
          if (bVar64 || bVar19) goto LAB_1447c4d83;
          (**(code **)(*param_2 + 0x28))(param_2,0);
LAB_1447c4db0:
          uVar131 = CONCAT22(uVar33,(short)iVar41);
          cVar28 = FUN_1447c68f0(param_1,iVar36,iVar40,iVar60,uVar131);
          lVar59 = (longlong)(int)uVar42;
          iVar18 = iVar41;
          if (cVar28 == '\0') {
            iVar18 = iVar36;
            iVar36 = iVar40;
            uVar32 = (short)iVar60;
            iVar60 = iVar41;
          }
          *(short *)(lStack_2e0 + 4 + lVar55) = (short)iVar36;
          *(undefined2 *)(lStack_2e0 + 6 + lVar55) = uVar32;
          *(short *)(lStack_2e0 + 8 + lVar55) = (short)iVar60;
          pbVar1 = (byte *)(lStack_2e0 + 3 + lVar55);
          *pbVar1 = *pbVar1 & 0xf8;
          pbVar1 = (byte *)((longlong)puVar53 + lVar59 * 0x10 + 3);
          *pbVar1 = *pbVar1 & 0xf8;
          *(short *)(puVar53 + lVar59 * 4 + 1) = (short)iVar60;
          *(short *)((longlong)puVar53 + lVar59 * 0x10 + 6) = (short)iVar18;
          *(short *)(puVar53 + lVar59 * 4 + 2) = (short)iVar36;
          *(undefined1 *)(lVar54 + lVar59) = uVar30;
          if (lVar62 != 0) {
            *(undefined2 *)(lStack_2b8 + lVar59 * 2) = *(undefined2 *)(lVar62 + lVar61 * 2);
          }
          uVar42 = uVar42 + 1;
        }
        else {
LAB_1447c4d7f:
          uVar33 = (undefined2)((uint)uVar131 >> 0x10);
          if (!bVar64 && !bVar19) goto LAB_1447c4db0;
LAB_1447c4d83:
          *(short *)(lStack_2e0 + 4 + lVar55) = (short)iVar36;
          *(undefined2 *)(lStack_2e0 + 6 + lVar55) = uVar32;
          *(short *)(lStack_2e0 + 8 + lVar55) = (short)iVar60;
          pbVar1 = (byte *)(lStack_2e0 + 3 + lVar55);
          *pbVar1 = *pbVar1 & 0xf8;
        }
        if ((char)param_1[0x24] != '\0') goto LAB_1447c4e78;
      }
      else {
        if (CONCAT22(uStack_1e3,CONCAT11(cStack_1e4,uStack_1e8._3_1_)) == 0x657265 &&
            uStack_1e8 == 0x65687073) {
          uVar32 = (**(code **)(*param_2 + 0x28))(param_2,0x657201);
          uVar65 = (**(code **)(*param_2 + 0x40))(param_2,1);
          *(byte *)(lStack_2e0 + 3 + lVar55) = (*(byte *)(lStack_2e0 + 3 + lVar55) & 0xf8) + 1;
          *(undefined2 *)(lStack_2e0 + lVar55) = uVar32;
LAB_1447c49c8:
          *(undefined4 *)(lStack_2e0 + 4 + lVar55) = uVar65;
        }
        else {
          if (CONCAT17(uStack_1e1,CONCAT25(uStack_1e3,CONCAT14(cStack_1e4,uStack_1e8))) ==
              0x656c7573706163) {
            uVar33 = (**(code **)(*param_2 + 0x28))(param_2,0x657201);
            uVar32 = (**(code **)(*param_2 + 0x28))(param_2,1);
            uVar65 = (**(code **)(*param_2 + 0x40))(param_2,1);
            bVar29 = *(byte *)(lStack_2e0 + 3 + lVar55) & 0xf8 | 2;
LAB_1447c49b8:
            *(byte *)(lStack_2e0 + 3 + lVar55) = bVar29;
            *(undefined2 *)(lStack_2e0 + lVar55) = uVar33;
            *(undefined2 *)(lStack_2e0 + 8 + lVar55) = uVar32;
            goto LAB_1447c49c8;
          }
          if (uStack_1e8 != 0x786f62) {
            if (cStack_1e0 != '\0' ||
                CONCAT17(uStack_1e1,CONCAT25(uStack_1e3,CONCAT14(cStack_1e4,uStack_1e8))) !=
                0x7265646e696c7963) {
              pcVar7 = (code *)swi(3);
              uVar45 = (*pcVar7)();
              return uVar45;
            }
            uVar33 = (**(code **)(*param_2 + 0x28))(param_2,0x657201);
            uVar32 = (**(code **)(*param_2 + 0x28))(param_2,1);
            uVar65 = (**(code **)(*param_2 + 0x40))(param_2,1);
            bVar29 = *(byte *)(lStack_2e0 + 3 + lVar55) & 0xf8 | 4;
            goto LAB_1447c49b8;
          }
          uVar32 = (**(code **)(*param_2 + 0x28))(param_2,0x657201);
          uVar33 = (**(code **)(*param_2 + 0x28))(param_2,1);
          uVar34 = (**(code **)(*param_2 + 0x28))(param_2,1);
          uVar35 = (**(code **)(*param_2 + 0x28))(param_2,1);
          *(byte *)(lStack_2e0 + 3 + lVar55) = *(byte *)(lStack_2e0 + 3 + lVar55) & 0xf8 | 3;
          *(undefined2 *)(lStack_2e0 + 4 + lVar55) = uVar32;
          *(undefined2 *)(lStack_2e0 + 6 + lVar55) = uVar33;
          *(undefined2 *)(lStack_2e0 + 8 + lVar55) = uVar34;
          *(undefined2 *)(lStack_2e0 + 10 + lVar55) = uVar35;
        }
        uVar30 = (**(code **)(*param_2 + 0x28))(param_2);
LAB_1447c4e78:
        *(undefined1 *)(param_1[0x23] + lVar61) = uVar30;
      }
      uVar37 = *(uint *)((longlong)param_1 + 0xd4);
      lVar61 = lVar61 + 1;
      lVar55 = lVar55 + 0x10;
    } while (lVar61 < (int)uVar37);
  }
  iVar60 = uVar42 + uVar37;
  lVar61 = (longlong)iVar60;
  lVar55 = -1;
  if (-1 < iVar60) {
    lVar55 = lVar61 * 0x10;
  }
  puVar46 = (undefined4 *)func_0x000144f97130(lVar55);
  if (puVar46 != (undefined4 *)0x0 && iVar60 != 0) {
    puVar51 = puVar46;
    do {
      *(undefined2 *)(puVar51 + 1) = 0;
      *puVar51 = 0;
      *(undefined8 *)((longlong)puVar51 + 6) = 0xffffffff00000000;
      *(undefined2 *)((longlong)puVar51 + 0xe) = 0xffff;
      puVar51 = puVar51 + 4;
    } while (puVar51 != puVar46 + lVar61 * 4);
  }
  lVar55 = func_0x000144f97130(lVar61);
  if (0 < (int)uVar37) {
    lVar61 = param_1[0x11];
    lVar59 = param_1[0x23];
    lVar56 = 0;
    uVar57 = 0;
    do {
      uVar45 = ((undefined8 *)(lVar61 + lVar56))[1];
      *(undefined8 *)((longlong)puVar46 + lVar56) = *(undefined8 *)(lVar61 + lVar56);
      ((undefined8 *)((longlong)puVar46 + lVar56))[1] = uVar45;
      lVar56 = lVar56 + 0x10;
      *(undefined1 *)(lVar55 + uVar57) = *(undefined1 *)(lVar59 + uVar57);
      uVar57 = uVar57 + 1;
    } while (uVar37 != uVar57);
  }
  if (0 < (int)uVar42) {
    lVar59 = (longlong)(int)uVar37;
    func_0x000145f40560(lVar55 + lVar59,lVar54,(ulonglong)uVar42);
    func_0x000145f40560(puVar46 + lVar59 * 4,puVar53,(ulonglong)uVar42 << 4);
    FUN_144ec6720();
    lVar61 = func_0x0001420ad0f0();
    FUN_144ec6670();
    iVar36 = *(int *)((longlong)param_1 + 0xd4);
    if (0 < iVar36) {
      lVar56 = 0;
      lVar52 = 0;
      do {
        puVar2 = (undefined8 *)(lVar63 + lVar56);
        uVar45 = *puVar2;
        uVar21 = puVar2[1];
        uVar22 = puVar2[2];
        uVar23 = puVar2[3];
        puVar2 = (undefined8 *)(lVar63 + 0x20 + lVar56);
        uVar24 = puVar2[1];
        uVar25 = puVar2[2];
        uVar26 = puVar2[3];
        lVar52 = lVar52 + 1;
        puVar4 = (undefined8 *)(lVar61 + 0x20 + lVar56);
        *puVar4 = *puVar2;
        puVar4[1] = uVar24;
        puVar4[2] = uVar25;
        puVar4[3] = uVar26;
        puVar2 = (undefined8 *)(lVar61 + lVar56);
        *puVar2 = uVar45;
        puVar2[1] = uVar21;
        puVar2[2] = uVar22;
        puVar2[3] = uVar23;
        lVar56 = lVar56 + 0x40;
        iVar36 = *(int *)((longlong)param_1 + 0xd4);
      } while (lVar52 < iVar36);
    }
    if (iVar36 < iVar60) {
      lVar59 = (lVar59 + (int)uVar42) - (longlong)iVar36;
      puVar47 = (undefined1 *)((longlong)iVar36 * 0x40 + 0x3e + lVar61);
      do {
        *(undefined2 *)(puVar47 + -2) = 0;
        *puVar47 = 0;
        puVar47 = puVar47 + 0x40;
        lVar59 = lVar59 + -1;
      } while (lVar59 != 0);
    }
    FUN_144ec6720();
    if (lVar63 != 0) {
      func_0x000144d9c130();
    }
    FUN_144ec6670();
    lVar63 = lVar61;
  }
  if ((lVar62 != 0) && ((char)param_1[2] == '\x05')) {
    lVar59 = (longlong)(int)uVar42 + (longlong)*(int *)((longlong)param_1 + 0xd4);
    FUN_144ec6720();
    lVar61 = -1;
    if (-1 < (int)lVar59) {
      lVar61 = lVar59 * 2;
    }
    lVar61 = func_0x000144f97130(lVar61);
    param_1[0x29] = lVar61;
    FUN_144ec6670();
    *(short *)((longlong)param_1 + 0x144) = (short)lVar59;
    lVar61 = (longlong)*(int *)((longlong)param_1 + 0xd4);
    if (0 < lVar61) {
      lVar59 = param_1[0x29];
      lVar56 = 0;
      do {
        *(undefined2 *)(lVar59 + lVar56 * 2) = *(undefined2 *)(lVar62 + lVar56 * 2);
        lVar56 = lVar56 + 1;
      } while (lVar61 != lVar56);
    }
    if (0 < (int)uVar42) {
      lVar59 = param_1[0x29];
      uVar57 = 0;
      do {
        *(undefined2 *)(lVar61 * 2 + lVar59 + uVar57 * 2) = *(undefined2 *)(lStack_2b8 + uVar57 * 2)
        ;
        uVar57 = uVar57 + 1;
      } while (uVar42 != uVar57);
    }
    FUN_144ec6720();
    func_0x000144d9c130(lVar62);
    if (lStack_2b8 != 0) {
      func_0x000144d9c130(lStack_2b8);
    }
    FUN_144ec6670();
  }
  FUN_144ec6720();
  if (param_1[0x11] != 0) {
    func_0x000144d9c130();
  }
  if (param_1[0x23] != 0) {
    func_0x000144d9c130();
  }
  if (puVar53 != (undefined4 *)0x0) {
    func_0x000144d9c130();
  }
  if (lVar54 != 0) {
    func_0x000144d9c130();
  }
  FUN_144ec6670();
  *(int *)((longlong)param_1 + 0xd4) = iVar60;
  param_1[0x11] = (longlong)puVar46;
  param_1[0x23] = lVar55;
  FUN_14551a5f0(param_1,lVar43,lVar58);
  fVar119 = _DAT_14615a2ac;
  fVar69 = _DAT_145fc6edc;
  auVar88 = *(undefined1 (*) [16])(param_1 + 4);
  auVar93._0_4_ = (auVar88._0_4_ + *(float *)(param_1 + 6)) * _DAT_145fc6edc;
  auVar93._4_4_ = (auVar88._4_4_ + *(float *)((longlong)param_1 + 0x34)) * _DAT_145fc6edc;
  auVar93._8_4_ = (auVar88._8_4_ + *(float *)(param_1 + 7)) * _DAT_145fc6edc;
  auVar93._12_4_ = (auVar88._12_4_ + *(float *)((longlong)param_1 + 0x3c)) * _DAT_145fc6edc;
  auVar88 = vsubps_avx(auVar88,auVar93);
  *(undefined1 (*) [16])(param_1 + 0x14) = auVar93;
  auVar78._0_4_ = auVar88._0_4_ * fVar119;
  auVar78._4_4_ = auVar88._4_4_ * fVar119;
  auVar78._8_4_ = auVar88._8_4_ * fVar119;
  auVar78._12_4_ = auVar88._12_4_ * fVar119;
  *(undefined1 (*) [16])(param_1 + 0x12) = auVar78;
  fVar119 = _DAT_145fc6ed8;
  lVar62 = param_1[0x1a];
  lVar54 = (longlong)(int)lVar62;
  if (0 < lVar54) {
    lVar55 = 0;
    puVar48 = (undefined2 *)(param_1[0x16] + 4);
    do {
      auVar88 = *(undefined1 (*) [16])(param_1 + 0x12);
      auVar71 = vsubps_avx(*(undefined1 (*) [16])(param_1 + 0x14),
                           *(undefined1 (*) [16])(lVar43 + lVar55));
      lVar55 = lVar55 + 0x10;
      auVar70 = vrcpps_avx(auVar88);
      fVar111 = auVar70._0_4_;
      fVar114 = auVar70._4_4_;
      fVar105 = auVar70._8_4_;
      fVar108 = auVar70._12_4_;
      auVar94._0_4_ =
           (int)(((fVar111 * auVar88._0_4_ - fVar119) * fVar111 - fVar111) * auVar71._0_4_ + fVar69)
      ;
      auVar94._4_4_ =
           (int)(((fVar114 * auVar88._4_4_ - fVar119) * fVar114 - fVar114) * auVar71._4_4_ + fVar69)
      ;
      auVar94._8_4_ =
           (int)(((fVar105 * auVar88._8_4_ - fVar119) * fVar105 - fVar105) * auVar71._8_4_ + fVar69)
      ;
      auVar94._12_4_ =
           (int)(((fVar108 * auVar88._12_4_ - fVar119) * fVar108 - fVar108) * auVar71._12_4_ +
                fVar69);
      auVar88 = vpshuflw_avx(auVar94,0xe8);
      *(int *)(puVar48 + -2) = auVar88._0_4_;
      *puVar48 = (short)auVar94._8_4_;
      puVar48 = puVar48 + 3;
    } while (lVar54 << 4 != lVar55);
  }
  if (lVar58 != 0) {
    fVar119 = fVar69;
    fVar111 = fVar69;
    fVar114 = fVar69;
    lVar55 = func_0x000144f97130();
    param_1[0xf] = lVar55;
    if (0 < (int)lVar62) {
      auVar88 = *(undefined1 (*) [16])(param_1 + 0x12);
      fVar105 = *(float *)((longlong)param_1 + 0x2c);
      auVar99._4_4_ = fVar105;
      auVar99._0_4_ = fVar105;
      auVar99._8_4_ = fVar105;
      auVar99._12_4_ = fVar105;
      auVar70 = *(undefined1 (*) [16])(param_1 + 0x14);
      puVar48 = (undefined2 *)(lVar55 + 4);
      lVar62 = 0;
      auVar71 = vrcpps_avx(auVar88);
      auVar120 = vsubps_avx(*(undefined1 (*) [16])(param_1 + 4),auVar99);
      auVar100._0_4_ = fVar105 + *(float *)(param_1 + 6);
      auVar100._4_4_ = fVar105 + *(float *)((longlong)param_1 + 0x34);
      auVar100._8_4_ = fVar105 + *(float *)(param_1 + 7);
      auVar100._12_4_ = fVar105 + *(float *)((longlong)param_1 + 0x3c);
      fVar103 = auVar71._0_4_;
      fVar105 = fVar103 * auVar88._0_4_ - _DAT_145fc6ed8;
      fVar66 = auVar71._4_4_;
      fVar108 = fVar66 * auVar88._4_4_ - _DAT_145fc6ed8;
      fVar67 = auVar71._8_4_;
      fVar109 = fVar67 * auVar88._8_4_ - _DAT_145fc6ed8;
      fVar68 = auVar71._12_4_;
      fVar110 = fVar68 * auVar88._12_4_ - _DAT_145fc6ed8;
      do {
        pauVar49 = (undefined1 (*) [16])(lVar58 + lVar62);
        lVar62 = lVar62 + 0x10;
        auVar88 = vmaxps_avx(*pauVar49,auVar100);
        auVar88 = vminps_avx(auVar88,auVar120);
        auVar88 = vsubps_avx(auVar88,auVar70);
        auVar113._0_4_ = (int)((-(fVar105 * fVar103) + fVar103) * auVar88._0_4_ + fVar69);
        auVar113._4_4_ = (int)((-(fVar108 * fVar66) + fVar66) * auVar88._4_4_ + fVar119);
        auVar113._8_4_ = (int)((-(fVar109 * fVar67) + fVar67) * auVar88._8_4_ + fVar111);
        auVar113._12_4_ = (int)((-(fVar110 * fVar68) + fVar68) * auVar88._12_4_ + fVar114);
        auVar88 = vpshuflw_avx(auVar113,0xe8);
        *(int *)(puVar48 + -2) = auVar88._0_4_;
        *puVar48 = (short)auVar113._8_4_;
        puVar48 = puVar48 + 3;
      } while (lVar54 * 0x10 != lVar62);
    }
    FUN_144ec6720();
    func_0x000144d9c130(lVar58);
    FUN_144ec6670();
  }
  FUN_14551ab80(param_1);
  FUN_144ec6720();
  if (lVar43 != 0) {
    func_0x000144d9c130(lVar43);
  }
  FUN_144ec6670();
  FUN_1447c6c00(param_1,_DAT_145fc6f90,lVar63);
  FUN_1447c6f60(param_1);
  uVar30 = func_0x0001447c7400(param_1[0x11],*(undefined4 *)((longlong)param_1 + 0xd4));
  *(undefined1 *)((longlong)param_1 + 0xd9) = uVar30;
  if ((char)param_1[2] == '\x05') {
    if ((bVar31 & 1) != 0) goto LAB_1447c5384;
    func_0x000144ee47b0(param_1);
  }
  else {
    FUN_1456a6b70(param_1);
    if ((bVar31 & 1) == 0) {
      FUN_1447c7450(param_1);
    }
    FUN_144fbd000(param_1);
  }
  if ((char)param_1[2] == '\x04') {
    FUN_1447c7510(param_1,_DAT_146159c24);
    FUN_1447c7fb0(param_1);
  }
LAB_1447c5384:
  *(byte *)((longlong)param_1 + 0x11) = *(byte *)((longlong)param_1 + 0x11) | 0x40;
  FUN_144ec6720();
  pauVar49 = (undefined1 (*) [16])func_0x0001447c8060((longlong)(int)param_1[0x1a]);
  lVar43 = func_0x0001447c8060();
  FUN_144ec6670();
  if (0 < (int)param_1[0x1a]) {
    lVar58 = 4;
    lVar62 = 0;
    pauVar50 = pauVar49;
    do {
      auVar70 = vpermilps_avx(*(undefined1 (*) [16])(param_1 + 0x12),0x24);
      auVar71 = vpermilps_avx(*(undefined1 (*) [16])(param_1 + 0x14),0x24);
      lVar62 = lVar62 + 1;
      auVar88 = vpinsrw_avx(ZEXT416(*(uint *)(param_1[0x16] + -4 + lVar58)),
                            (uint)*(ushort *)(param_1[0x16] + lVar58),2);
      auVar8 = vcvtps2pd_avx(auVar70);
      auVar13 = vcvtps2pd_avx(auVar71);
      lVar58 = lVar58 + 6;
      auVar88 = vpshuflw_avx(auVar88,0x24);
      auVar88 = vpmovsxwd_avx(auVar88);
      auVar11 = vcvtdq2pd_avx(auVar88);
      auVar102._0_8_ = auVar11._0_8_ * auVar8._0_8_ + auVar13._0_8_;
      auVar102._8_8_ = auVar11._8_8_ * auVar8._8_8_ + auVar13._8_8_;
      auVar102._16_8_ = auVar11._16_8_ * auVar8._16_8_ + auVar13._16_8_;
      auVar102._24_8_ = auVar11._24_8_ * auVar8._24_8_ + auVar13._24_8_;
      auVar88 = vcvtpd2ps_avx(auVar102);
      *pauVar50 = auVar88;
      pauVar50 = pauVar50 + 1;
    } while (lVar62 < (int)param_1[0x1a]);
  }
  fVar69 = _DAT_145fc6f08;
  fVar119 = _DAT_145fc6ed8;
  uVar37 = *(uint *)((longlong)param_1 + 0xd4);
  uVar57 = param_1[0x11];
  uVar44 = (longlong)(int)uVar37 * 0x10 + uVar57;
  if (0 < (longlong)(int)uVar37) {
    do {
      if ((*(byte *)(uVar57 + 3) & 7) == 0) break;
      uVar57 = uVar57 + 0x10;
    } while (uVar57 < uVar44);
  }
  if (uVar57 != uVar44) {
    auVar101._4_4_ = _DAT_146159bfc;
    auVar101._0_4_ = _DAT_146159bfc;
    auVar101._8_4_ = _DAT_146159bfc;
    auVar101._12_4_ = _DAT_146159bfc;
    auVar79._0_12_ = ZEXT812(0);
    auVar79._12_4_ = 0;
    do {
      auVar70 = vsubps_avx(pauVar49[*(ushort *)(uVar57 + 4)],pauVar49[*(ushort *)(uVar57 + 6)]);
      auVar88 = vshufps_avx(auVar70,auVar70,0xd2);
      auVar70 = vshufps_avx(auVar70,auVar70,0xc9);
      auVar120 = vsubps_avx(pauVar49[*(ushort *)(uVar57 + 8)],pauVar49[*(ushort *)(uVar57 + 6)]);
      auVar71 = vshufps_avx(auVar120,auVar120,0xc9);
      auVar120 = vshufps_avx(auVar120,auVar120,0xd2);
      fVar111 = -(auVar120._0_4_ * auVar70._0_4_) + auVar71._0_4_ * auVar88._0_4_;
      fVar114 = -(auVar120._4_4_ * auVar70._4_4_) + auVar71._4_4_ * auVar88._4_4_;
      fVar105 = -(auVar120._8_4_ * auVar70._8_4_) + auVar71._8_4_ * auVar88._8_4_;
      fVar108 = -(auVar120._12_4_ * auVar70._12_4_) + auVar71._12_4_ * auVar88._12_4_;
      auVar116._0_4_ = fVar111 * fVar111;
      auVar116._4_4_ = fVar114 * fVar114;
      auVar116._8_4_ = fVar105 * fVar105;
      auVar116._12_4_ = fVar108 * fVar108;
      auVar88 = vblendps_avx(auVar116,auVar79,8);
      auVar88 = vhaddps_avx(auVar88,auVar88);
      auVar70 = vhaddps_avx(auVar88,auVar88);
      auVar88 = vcmpps_avx(auVar70,auVar79,4);
      if ((((SUB161(auVar88 >> 0x1f,0) & 1) != 0 || (SUB161(auVar88 >> 0x3f,0) & 1) != 0) ||
          (SUB161(auVar88 >> 0x5f,0) & 1) != 0) || auVar88[0xf] < '\0') {
        auVar88 = vrsqrtps_avx(auVar70);
        fVar109 = auVar88._0_4_;
        fVar110 = auVar88._4_4_;
        fVar103 = auVar88._8_4_;
        fVar66 = auVar88._12_4_;
        auVar88 = vcmpps_avx(auVar101,auVar70,2);
        auVar117._0_4_ =
             (float)(auVar88._0_4_ &
                    (uint)(((fVar69 * fVar109 * fVar109 * auVar70._0_4_ - fVar69) * fVar109 +
                           fVar109) * auVar70._0_4_));
        auVar117._4_4_ =
             (float)(auVar88._4_4_ &
                    (uint)(((fVar69 * fVar110 * fVar110 * auVar70._4_4_ - fVar69) * fVar110 +
                           fVar110) * auVar70._4_4_));
        auVar117._8_4_ =
             (float)(auVar88._8_4_ &
                    (uint)(((fVar69 * fVar103 * fVar103 * auVar70._8_4_ - fVar69) * fVar103 +
                           fVar103) * auVar70._8_4_));
        auVar117._12_4_ =
             (float)(auVar88._12_4_ &
                    (uint)(((fVar69 * fVar66 * fVar66 * auVar70._12_4_ - fVar69) * fVar66 + fVar66)
                          * auVar70._12_4_));
        auVar88 = vrcpps_avx(auVar117);
        fVar109 = auVar88._0_4_;
        fVar110 = auVar88._4_4_;
        fVar103 = auVar88._8_4_;
        fVar66 = auVar88._12_4_;
        fVar111 = (-((fVar109 * auVar117._0_4_ - fVar119) * fVar109) + fVar109) * fVar111;
        fVar114 = (-((fVar110 * auVar117._4_4_ - fVar119) * fVar110) + fVar110) * fVar114;
        fVar105 = (-((fVar103 * auVar117._8_4_ - fVar119) * fVar103) + fVar103) * fVar105;
        fVar108 = (-((fVar66 * auVar117._12_4_ - fVar119) * fVar66) + fVar66) * fVar108;
      }
      pfVar3 = (float *)(lVar43 + (ulonglong)((int)uVar57 - (int)param_1[0x11] & 0xffff0));
      *pfVar3 = fVar111;
      pfVar3[1] = fVar114;
      pfVar3[2] = fVar105;
      pfVar3[3] = fVar108;
      uVar20 = uVar57;
      do {
        uVar57 = uVar20 + 0x10;
        if (uVar44 <= uVar57) break;
        pbVar1 = (byte *)(uVar20 + 0x13);
        uVar20 = uVar57;
      } while ((*pbVar1 & 7) != 0);
    } while (uVar57 != uVar44);
    uVar37 = *(uint *)((longlong)param_1 + 0xd4);
  }
  if (0 < (int)uVar37) {
    auVar121 = ZEXT1664(CONCAT412(_DAT_145fc6ed8,
                                  CONCAT48(_DAT_145fc6ed8,CONCAT44(_DAT_145fc6ed8,_DAT_145fc6ed8))))
    ;
    auVar124 = ZEXT464(_DAT_145fc6f48);
    auVar125 = ZEXT464((uint)_DAT_145fc6f88);
    auVar129 = ZEXT464(_DAT_146180e48);
    auVar130 = ZEXT464(_DAT_14615e650);
    lVar58 = param_1[0x11];
    lVar62 = 0;
    auVar118 = ZEXT1264(ZEXT812(0));
    lVar54 = 0;
    do {
      if ((*(byte *)(lVar58 + 3 + lVar62) & 7) == 0) {
        uVar5 = *(ushort *)(lVar58 + 10 + lVar62);
        if ((uVar5 != 0xffff) || (bVar31 = 0xff, *(char *)(lVar63 + 0x3c + lVar54) == '\x01')) {
          pfVar3 = (float *)(lVar43 + lVar62);
          pauVar50 = (undefined1 (*) [16])((ulonglong)uVar5 * 0x10 + lVar43);
          if (uVar5 == 0xffff) {
            pauVar50 = (undefined1 (*) [16])(lVar63 + lVar54);
          }
          auVar120 = vsubps_avx(pauVar49[*(ushort *)(lVar58 + 6 + lVar62)],
                                pauVar49[*(ushort *)(lVar58 + 4 + lVar62)]);
          auVar88 = *pauVar50;
          auVar70 = vshufps_avx(auVar88,auVar88,0xc9);
          auVar71 = vshufps_avx(auVar120,auVar120,0xd2);
          auVar120 = vshufps_avx(auVar120,auVar120,0xc9);
          auVar127 = vshufps_avx(auVar88,auVar88,0xd2);
          auVar95._0_4_ =
               (-(auVar127._0_4_ * auVar120._0_4_) + auVar70._0_4_ * auVar71._0_4_) * *pfVar3;
          auVar95._4_4_ =
               (-(auVar127._4_4_ * auVar120._4_4_) + auVar70._4_4_ * auVar71._4_4_) * pfVar3[1];
          auVar95._8_4_ =
               (-(auVar127._8_4_ * auVar120._8_4_) + auVar70._8_4_ * auVar71._8_4_) * pfVar3[2];
          auVar95._12_4_ =
               (-(auVar127._12_4_ * auVar120._12_4_) + auVar70._12_4_ * auVar71._12_4_) * pfVar3[3];
          auVar80._0_4_ = auVar88._0_4_ * *pfVar3;
          auVar80._4_4_ = auVar88._4_4_ * pfVar3[1];
          auVar80._8_4_ = auVar88._8_4_ * pfVar3[2];
          auVar80._12_4_ = auVar88._12_4_ * pfVar3[3];
          auVar71 = auVar118._0_16_;
          auVar88 = vblendps_avx(auVar95,auVar71,8);
          auVar70 = vblendps_avx(auVar80,auVar71,8);
          auVar88 = vhaddps_avx(auVar88,auVar88);
          auVar70 = vhaddps_avx(auVar70,auVar70);
          auVar88 = vhaddps_avx(auVar88,auVar88);
          auVar70 = vhaddps_avx(auVar70,auVar70);
          auVar88 = vcmpps_avx(auVar71,auVar88,1);
          auVar120 = auVar121._0_16_;
          auVar88 = vblendvps_avx(auVar120,auVar70,auVar88);
          auVar88 = vmaxss_avx(auVar88,auVar124._0_16_);
          vminss_avx(auVar88,auVar120);
          auVar118 = ZEXT1664(auVar71);
          auVar121 = ZEXT1664(auVar120);
          auVar124 = ZEXT1664(auVar124._0_16_);
          auVar125 = ZEXT1664(auVar125._0_16_);
          auVar129 = ZEXT1664(auVar129._0_16_);
          auVar130 = ZEXT1664(auVar130._0_16_);
          fVar69 = (float)func_0x000145f40740();
          fVar119 = fVar69;
          if (uVar5 == 0xffff) {
            fVar119 = *(float *)(lVar63 + 0x30 + lVar54);
          }
          bVar31 = 0xff;
          if (fVar69 < auVar125._0_4_) {
            fVar69 = auVar129._0_4_ * fVar69;
            auVar70 = vroundss_avx(ZEXT416((uint)fVar69),ZEXT416((uint)fVar69),9);
            auVar71 = vroundss_avx(ZEXT416((uint)fVar69),ZEXT416((uint)fVar69),10);
            auVar88 = vcmpss_avx(ZEXT416((uint)(auVar130._0_4_ * fVar119)),
                                 ZEXT416((uint)(fVar69 - auVar70._0_4_)),6);
            auVar88 = vblendvps_avx(auVar71,auVar70,auVar88);
            iVar60 = (int)auVar88._0_4_;
            if (0xfd < iVar60) {
              iVar60 = 0xfe;
            }
            bVar31 = ~(byte)(iVar60 >> 0x1f) & (byte)iVar60;
          }
        }
        *(byte *)(lVar58 + lVar62) = bVar31;
        uVar5 = *(ushort *)(lVar58 + 0xc + lVar62);
        if ((uVar5 != 0xffff) || (bVar31 = 0xff, *(char *)(lVar63 + 0x3d + lVar54) == '\x01')) {
          pfVar3 = (float *)(lVar43 + lVar62);
          auVar88 = vsubps_avx(pauVar49[*(ushort *)(lVar58 + 8 + lVar62)],
                               pauVar49[*(ushort *)(lVar58 + 6 + lVar62)]);
          pauVar50 = (undefined1 (*) [16])(lVar63 + 0x10 + lVar54);
          if (uVar5 != 0xffff) {
            pauVar50 = (undefined1 (*) [16])((ulonglong)uVar5 * 0x10 + lVar43);
          }
          auVar70 = *pauVar50;
          auVar71 = vshufps_avx(auVar88,auVar88,0xd2);
          auVar120 = vshufps_avx(auVar70,auVar70,0xc9);
          auVar88 = vshufps_avx(auVar88,auVar88,0xc9);
          auVar127 = vshufps_avx(auVar70,auVar70,0xd2);
          auVar96._0_4_ =
               (-(auVar127._0_4_ * auVar88._0_4_) + auVar120._0_4_ * auVar71._0_4_) * *pfVar3;
          auVar96._4_4_ =
               (-(auVar127._4_4_ * auVar88._4_4_) + auVar120._4_4_ * auVar71._4_4_) * pfVar3[1];
          auVar96._8_4_ =
               (-(auVar127._8_4_ * auVar88._8_4_) + auVar120._8_4_ * auVar71._8_4_) * pfVar3[2];
          auVar96._12_4_ =
               (-(auVar127._12_4_ * auVar88._12_4_) + auVar120._12_4_ * auVar71._12_4_) * pfVar3[3];
          auVar81._0_4_ = auVar70._0_4_ * *pfVar3;
          auVar81._4_4_ = auVar70._4_4_ * pfVar3[1];
          auVar81._8_4_ = auVar70._8_4_ * pfVar3[2];
          auVar81._12_4_ = auVar70._12_4_ * pfVar3[3];
          auVar71 = auVar118._0_16_;
          auVar88 = vblendps_avx(auVar96,auVar71,8);
          auVar70 = vblendps_avx(auVar81,auVar71,8);
          auVar88 = vhaddps_avx(auVar88,auVar88);
          auVar70 = vhaddps_avx(auVar70,auVar70);
          auVar88 = vhaddps_avx(auVar88,auVar88);
          auVar70 = vhaddps_avx(auVar70,auVar70);
          auVar88 = vcmpps_avx(auVar71,auVar88,1);
          auVar120 = auVar121._0_16_;
          auVar88 = vblendvps_avx(auVar120,auVar70,auVar88);
          auVar88 = vmaxss_avx(auVar88,auVar124._0_16_);
          vminss_avx(auVar88,auVar120);
          auVar118 = ZEXT1664(auVar71);
          auVar121 = ZEXT1664(auVar120);
          auVar124 = ZEXT1664(auVar124._0_16_);
          auVar125 = ZEXT1664(auVar125._0_16_);
          auVar129 = ZEXT1664(auVar129._0_16_);
          auVar130 = ZEXT1664(auVar130._0_16_);
          fVar69 = (float)func_0x000145f40740();
          fVar119 = fVar69;
          if (uVar5 == 0xffff) {
            fVar119 = *(float *)(lVar63 + 0x34 + lVar54);
          }
          bVar31 = 0xff;
          if (fVar69 < auVar125._0_4_) {
            fVar69 = auVar129._0_4_ * fVar69;
            auVar70 = vroundss_avx(ZEXT416((uint)fVar69),ZEXT416((uint)fVar69),9);
            auVar71 = vroundss_avx(ZEXT416((uint)fVar69),ZEXT416((uint)fVar69),10);
            auVar88 = vcmpss_avx(ZEXT416((uint)(auVar130._0_4_ * fVar119)),
                                 ZEXT416((uint)(fVar69 - auVar70._0_4_)),6);
            auVar88 = vblendvps_avx(auVar71,auVar70,auVar88);
            iVar60 = (int)auVar88._0_4_;
            if (0xfd < iVar60) {
              iVar60 = 0xfe;
            }
            bVar31 = ~(byte)(iVar60 >> 0x1f) & (byte)iVar60;
          }
        }
        *(byte *)(lVar58 + 1 + lVar62) = bVar31;
        uVar5 = *(ushort *)(lVar58 + 0xe + lVar62);
        if ((uVar5 != 0xffff) || (bVar31 = 0xff, *(char *)(lVar63 + 0x3e + lVar54) == '\x01')) {
          pfVar3 = (float *)(lVar43 + lVar62);
          auVar88 = vsubps_avx(pauVar49[*(ushort *)(lVar58 + 4 + lVar62)],
                               pauVar49[*(ushort *)(lVar58 + 8 + lVar62)]);
          pauVar50 = (undefined1 (*) [16])(lVar63 + 0x20 + lVar54);
          if (uVar5 != 0xffff) {
            pauVar50 = (undefined1 (*) [16])((ulonglong)uVar5 * 0x10 + lVar43);
          }
          auVar70 = *pauVar50;
          auVar71 = vshufps_avx(auVar88,auVar88,0xd2);
          auVar120 = vshufps_avx(auVar70,auVar70,0xc9);
          auVar88 = vshufps_avx(auVar88,auVar88,0xc9);
          auVar127 = vshufps_avx(auVar70,auVar70,0xd2);
          auVar97._0_4_ =
               (-(auVar127._0_4_ * auVar88._0_4_) + auVar120._0_4_ * auVar71._0_4_) * *pfVar3;
          auVar97._4_4_ =
               (-(auVar127._4_4_ * auVar88._4_4_) + auVar120._4_4_ * auVar71._4_4_) * pfVar3[1];
          auVar97._8_4_ =
               (-(auVar127._8_4_ * auVar88._8_4_) + auVar120._8_4_ * auVar71._8_4_) * pfVar3[2];
          auVar97._12_4_ =
               (-(auVar127._12_4_ * auVar88._12_4_) + auVar120._12_4_ * auVar71._12_4_) * pfVar3[3];
          auVar82._0_4_ = auVar70._0_4_ * *pfVar3;
          auVar82._4_4_ = auVar70._4_4_ * pfVar3[1];
          auVar82._8_4_ = auVar70._8_4_ * pfVar3[2];
          auVar82._12_4_ = auVar70._12_4_ * pfVar3[3];
          auVar71 = auVar118._0_16_;
          auVar88 = vblendps_avx(auVar97,auVar71,8);
          auVar70 = vblendps_avx(auVar82,auVar71,8);
          auVar88 = vhaddps_avx(auVar88,auVar88);
          auVar70 = vhaddps_avx(auVar70,auVar70);
          auVar88 = vhaddps_avx(auVar88,auVar88);
          auVar70 = vhaddps_avx(auVar70,auVar70);
          auVar88 = vcmpps_avx(auVar71,auVar88,1);
          auVar120 = auVar121._0_16_;
          auVar88 = vblendvps_avx(auVar120,auVar70,auVar88);
          auVar88 = vmaxss_avx(auVar88,auVar124._0_16_);
          vminss_avx(auVar88,auVar120);
          auVar118 = ZEXT1664(auVar71);
          auVar121 = ZEXT1664(auVar120);
          auVar124 = ZEXT1664(auVar124._0_16_);
          auVar125 = ZEXT1664(auVar125._0_16_);
          auVar129 = ZEXT1664(auVar129._0_16_);
          auVar130 = ZEXT1664(auVar130._0_16_);
          fVar69 = (float)func_0x000145f40740();
          fVar119 = fVar69;
          if (uVar5 == 0xffff) {
            fVar119 = *(float *)(lVar63 + 0x38 + lVar54);
          }
          bVar31 = 0xff;
          if (fVar69 < auVar125._0_4_) {
            fVar69 = auVar129._0_4_ * fVar69;
            auVar70 = vroundss_avx(ZEXT416((uint)fVar69),ZEXT416((uint)fVar69),9);
            auVar71 = vroundss_avx(ZEXT416((uint)fVar69),ZEXT416((uint)fVar69),10);
            auVar88 = vcmpss_avx(ZEXT416((uint)(auVar130._0_4_ * fVar119)),
                                 ZEXT416((uint)(fVar69 - auVar70._0_4_)),6);
            auVar88 = vblendvps_avx(auVar71,auVar70,auVar88);
            iVar60 = (int)auVar88._0_4_;
            if (0xfd < iVar60) {
              iVar60 = 0xfe;
            }
            bVar31 = ~(byte)(iVar60 >> 0x1f) & (byte)iVar60;
          }
        }
        *(byte *)(lVar58 + 2 + lVar62) = bVar31;
      }
      lVar54 = lVar54 + 0x40;
      lVar62 = lVar62 + 0x10;
    } while ((ulonglong)uVar37 << 6 != lVar54);
  }
  FUN_144ec6720();
  if (pauVar49 != (undefined1 (*) [16])0x0) {
    func_0x000144d9c130(pauVar49);
  }
  if (lVar43 != 0) {
    func_0x000144d9c130(lVar43);
  }
  if (lVar63 != 0) {
    func_0x000144d9c130(lVar63);
  }
  FUN_144ec6670();
  return 1;
}

