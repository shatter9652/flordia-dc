// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14018d860  size: 2826 bytes
// Name:    FUN_14018d860
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1445464c0, FUN_141c7fc70, FUN_14018eb70, FUN_14018e5b0, FUN_140603290, FUN_140192d90, FUN_1453f5f50, FUN_140192bd0, FUN_1401906a0, FUN_14018e3d0, FUN_140191e60, FUN_140190660, FUN_1453b65a0, FUN_144ec35b0, FUN_140191da0, FUN_14018e6d0, FUN_14018efb0, FUN_14018e4d0, FUN_14018e410, FUN_1401929b0, FUN_14549ce10, FUN_140835e70, FUN_1456aa6e0, FUN_14018e850, FUN_140191e10, FUN_1452b2e40, FUN_14169d340, FUN_140191ea0, FUN_144eb3750, FUN_14018e380
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14018d860(longlong *param_1)

{
  int iVar1;
  byte bVar2;
  undefined1 uVar3;
  char cVar4;
  char cVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  byte bVar17;
  uint uVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 extraout_var [56];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 in_register_00001304 [12];
  undefined1 auVar27 [64];
  undefined1 auVar28 [64];
  char cStack_71;
  
  lVar7 = func_0x000144da3240(param_1[8]);
  lVar7 = func_0x000144db7a10(*(undefined4 *)(lVar7 + 0x9c));
  if ((lVar7 == 0) || ((*(byte *)(lVar7 + 0x222) & 1) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  *(undefined1 *)(param_1 + 0x160) = uVar3;
  lVar7 = param_1[0x44];
  uVar6 = (**(code **)(*param_1 + 0x30))(param_1);
  FUN_140835e70(param_1[8],uVar6,lVar7,param_1 + 0x3d,param_1 + 0x3e);
  lVar8 = func_0x000144da3240(param_1[8]);
  uVar6 = *(undefined4 *)(lVar8 + 0x9c);
  lVar7 = *(longlong *)(param_1[8] + 0x690);
  lVar9 = func_0x0001450572a0(uVar6);
  uVar10 = func_0x000144ec2d10(uVar6);
  if (lVar9 == 0) {
    cStack_71 = FUN_1453f5f50(lVar8);
    lVar11 = FUN_144eb3750(*(undefined4 *)(lVar8 + 0x9c));
    uVar16 = 0;
    uVar18 = 0;
    bVar17 = 0;
LAB_14018d973:
    if (lVar11 == 0) goto LAB_14018d97f;
    uVar12 = (ulonglong)*(uint *)(lVar11 + 0x9c);
    lVar11 = func_0x000144dd7540(uVar12);
    if (lVar11 == 0 || (byte)uVar16 != 0) {
      uVar12 = CONCAT71((int7)(uVar12 >> 8),lVar11 != 0 | (byte)uVar16) & 0xffffffff;
    }
    else {
      uVar12 = CONCAT71((int7)((ulonglong)lVar8 >> 8),*(byte *)(lVar11 + 0x12) >> 7);
    }
  }
  else {
    uVar16 = *(uint *)(lVar9 + 0x10);
    bVar17 = (byte)uVar16 >> 4 & 1;
    uVar18 = (uVar16 & 4) >> 2;
    uVar16 = (uVar16 & 8) >> 3;
    cStack_71 = FUN_1453f5f50(lVar8);
    cVar4 = FUN_140603290(lVar9,0);
    lVar11 = FUN_144eb3750(*(undefined4 *)(lVar8 + 0x9c));
    if (cVar4 == '\0') goto LAB_14018d973;
LAB_14018d97f:
    uVar12 = (ulonglong)uVar16;
  }
  uVar16 = _DAT_145fc6ed8;
  bVar2 = (byte)uVar12;
  auVar22._0_12_ = ZEXT812(0);
  auVar22._12_4_ = 0;
  auVar28 = ZEXT464(_DAT_145fc6ed8);
  cVar4 = (char)uVar18;
  *(char *)((longlong)param_1 + 0x64c) = cVar4;
  *(byte *)((longlong)param_1 + 0x64d) = bVar2;
  *(byte *)((longlong)param_1 + 0x64e) = bVar17;
  auVar20._0_4_ = *(float *)(lVar8 + 0x60) * _DAT_14614f7f0;
  auVar20._4_4_ = *(float *)(lVar8 + 100) * _UNK_14614f7f4;
  auVar20._8_4_ = *(float *)(lVar8 + 0x68) * _UNK_14614f7f8;
  auVar20._12_4_ = *(float *)(lVar8 + 0x6c) * _UNK_14614f7fc;
  auVar20 = vblendps_avx(auVar20,auVar22,8);
  auVar20 = vhaddps_avx(auVar20,auVar20);
  auVar20 = vhaddps_avx(auVar20,auVar20);
  auVar22 = vminss_avx(ZEXT416(uVar16),auVar20);
  auVar21 = ZEXT416(*(uint *)(lVar7 + 0x70));
  auVar20 = vcmpss_avx(auVar20,auVar21,1);
  auVar20 = vblendvps_avx(auVar22,auVar21,auVar20);
  *(int *)(param_1 + 0xb9) = auVar20._0_4_;
  auVar27._0_8_ = func_0x000145334d30(uVar10);
  auVar27._8_56_ = extraout_var;
  auVar27 = ZEXT1664(auVar27._0_16_);
  lVar7 = func_0x000145299740(*(undefined4 *)(lVar8 + 0x9c));
  uVar10 = auVar27._0_8_;
  if ((lVar7 != 0) && ((0.0 < *(float *)(lVar7 + 0x250) || ((*(uint *)(param_1 + 0xc9) | 2) == 3))))
  {
    auVar23._4_4_ = _DAT_14615d78c;
    auVar23._0_4_ = _DAT_14615d78c;
    auVar23._8_4_ = _DAT_14615d78c;
    auVar23._12_4_ = _DAT_14615d78c;
    auVar21._0_4_ = auVar27._0_4_ ^ _DAT_145fc6f10;
    auVar21._4_4_ = auVar27._4_4_ ^ _DAT_145fc6f10;
    auVar21._8_4_ = auVar27._8_4_ ^ _DAT_145fc6f10;
    auVar21._12_4_ = auVar27._12_4_ ^ _DAT_145fc6f10;
    auVar20 = vmaxss_avx(auVar21,auVar27._0_16_);
    auVar20 = vcmpss_avx(auVar20,ZEXT416((uint)_DAT_146159fa0),1);
    auVar20 = vblendvps_avx(auVar27._0_16_,auVar23,auVar20);
    uVar10 = auVar20._0_8_;
  }
  fVar19 = (float)func_0x000144f5f270((longlong)param_1 + 0x51c,uVar10);
  auVar26._0_12_ = ZEXT812(0);
  auVar26._12_4_ = 0;
  auVar20 = ZEXT416((uint)(fVar19 * *(float *)(param_1 + 0xc5) * _DAT_145fc6edc + _DAT_145fc6edc));
  *(float *)(param_1 + 0xba) = fVar19 * *(float *)(param_1 + 0xc5);
  auVar22 = vminss_avx(auVar28._0_16_,auVar20);
  auVar20 = vcmpss_avx(auVar20,auVar26,1);
  *(uint *)((longlong)param_1 + 0x5d4) = ~auVar20._0_4_ & auVar22._0_4_;
  if (*(short *)(param_1[8] + 0xa2) != -1) {
    func_0x0001450467d0(param_1[8],0x9baad098);
    func_0x0001450467d0(param_1[8],0xe120ddf,(int)param_1[0xbc]);
    func_0x0001450467d0(param_1[8],0x303ebba4,(int)param_1[0xbf]);
    func_0x0001450467d0(param_1[8],0xb85e929e,(int)param_1[0xbe]);
    func_0x0001450467d0(param_1[8],0xb184680e,*(undefined4 *)((longlong)param_1 + 0x5ec));
    func_0x0001450467d0(param_1[8],0x4a74bd9c,(int)param_1[0xc5]);
    func_0x0001450467d0(param_1[8],0xea2108ad,*(undefined4 *)((longlong)param_1 + 0x624));
    func_0x0001450467d0(param_1[8],0x5daee086,*(undefined4 *)((longlong)param_1 + 0x5cc));
    auVar25._0_4_ = (float)(int)param_1[0xbb];
    auVar25._4_12_ = in_register_00001304;
    func_0x0001450467d0(param_1[8],0x3200270e,auVar25._0_8_);
    func_0x0001450467d0(param_1[8],0x4e0ba2df,*(undefined4 *)((longlong)param_1 + 0x5dc));
    func_0x0001450467d0(param_1[8],0xde29e2d6,*(undefined4 *)((longlong)param_1 + 0xaec));
    func_0x0001450467d0(param_1[8],0x74c60248,*(undefined4 *)((longlong)param_1 + 0xadc));
    func_0x0001450467d0(param_1[8],0x8deb6f82,*(undefined4 *)((longlong)param_1 + 0xae4));
    func_0x0001450467d0(param_1[8],0x38951bf4,(int)param_1[0x15c]);
    func_0x0001450467d0(param_1[8],0x10a48525,(int)param_1[0x15d]);
    func_0x0001450467d0(param_1[8],0x4599cbae,(int)param_1[0x15e]);
    func_0x0001450467d0(param_1[8],0x509e2325,*(undefined4 *)((longlong)param_1 + 0xaf4));
    auVar20 = vmaxss_avx(ZEXT416(*(uint *)(param_1 + 0xcb)),
                         ZEXT416(*(uint *)((longlong)param_1 + 0x65c)));
    func_0x0001450467d0(param_1[8],0xf8599818,auVar20._0_8_);
    func_0x0001450467d0(param_1[8],0xd504654,(int)param_1[0xcc]);
    func_0x0001450467d0(param_1[8],0x5581e85c,*(undefined4 *)((longlong)param_1 + 0x664));
    func_0x0001450467d0(param_1[8],0x38f36a3d,(int)param_1[0xbc]);
    func_0x0001450467d0(param_1[8],0x886a7451,(int)param_1[0xbf]);
    func_0x0001450467d0(param_1[8],0xd6bb74f6,*(undefined4 *)((longlong)param_1 + 0x5cc));
    func_0x0001450467d0(param_1[8],0xea0151dc,(int)param_1[0xba]);
    func_0x0001450467d0(param_1[8],0xf8543300,*(undefined4 *)((longlong)param_1 + 0xaec));
    func_0x0001450467d0(param_1[8],0xd8b32a40,(int)param_1[0xc5]);
    func_0x0001450467d0(param_1[8],0x5785ce8e,*(undefined4 *)((longlong)param_1 + 0x624));
  }
  if (((int)param_1[0xc9] != 0) && (cVar5 = FUN_1453b65a0(lVar8,7), cVar5 != '\0')) {
    FUN_140191e10(param_1,0);
    uVar14 = 5000;
    FUN_141c7fc70(param_1,5000);
    goto LAB_14018dd9d;
  }
  if (lVar9 == 0) {
    bVar17 = 0;
  }
  else {
    bVar17 = (*(byte *)(lVar9 + 0x11) & 0x40) >> 6;
  }
  uVar10 = func_0x000144da3240(param_1[8]);
  uVar14 = 0;
  uVar6 = FUN_1453b65a0(uVar10,0x25);
  iVar1 = (int)param_1[0xc9];
  bVar17 = (byte)uVar6 | bVar17;
  uVar15 = (ulonglong)CONCAT31((int3)((uint)uVar6 >> 8),bVar17);
  if (iVar1 == 2) {
    *(int *)((longlong)param_1 + 0x62c) = (int)param_1[0xbe];
    uVar6 = FUN_14018e6d0(param_1,uVar15,uVar18);
    *(undefined4 *)(param_1 + 0xc5) = uVar6;
    if (*(float *)((longlong)param_1 + 0x62c) < *(float *)(*(longlong *)(param_1[9] + 0x10) + 0x200)
       ) {
      *(undefined1 *)((longlong)param_1 + 0x5fc) = 1;
    }
    FUN_14018efb0(param_1);
    FUN_14018e5b0(param_1,uVar15);
    uVar14 = uVar15;
    if (cVar4 == '\0') {
      uVar14 = 0;
      FUN_140191e10(param_1,3);
      if ((*(longlong *)(param_1[9] + 0x10) != 0) &&
         (*(float *)(*(longlong *)(param_1[9] + 0x10) + 0x178) < *(float *)(param_1 + 0xc5))) {
LAB_14018e35d:
        FUN_1445464c0(param_1);
      }
    }
LAB_14018dd8c:
    if ((int)param_1[0xc9] == 0) goto LAB_14018dd9d;
  }
  else {
    if (iVar1 == 3) {
      *(int *)((longlong)param_1 + 0x62c) = (int)param_1[0xbe];
      lVar7 = func_0x000144da3240(param_1[8]);
      lVar7 = func_0x000144db7a10(*(undefined4 *)(lVar7 + 0x9c));
      plVar13 = (longlong *)((longlong)param_1 + 0x54c);
      if ((*(uint *)(lVar7 + 0x220) >> 0x10 & 1) == 0) {
        plVar13 = param_1 + 0xac;
      }
      uVar6 = func_0x000145123bd0(plVar13,*(undefined4 *)((longlong)param_1 + 0x62c),_DAT_14abbef40)
      ;
      *(undefined4 *)(param_1 + 0xc5) = uVar6;
      FUN_14018efb0(param_1);
      FUN_14018e5b0(param_1,uVar15);
      uVar6 = _DAT_14abbef40;
      *(undefined4 *)(param_1 + 0xca) = _DAT_14abbef40;
      cVar5 = FUN_140191da0(*(undefined4 *)(lVar8 + 0x9c));
      if ((cVar4 == '\0' && bVar2 == 0) || (cVar5 != '\0')) {
        uVar14 = uVar15;
        if (*(float *)(param_1 + 0xc5) <= _DAT_146159fa0) {
          *(float *)(param_1 + 0xad) = *(float *)(param_1 + 0xc5);
          *(undefined4 *)((longlong)param_1 + 0x56c) = uVar6;
          FUN_140191e10(param_1,0);
          uVar14 = 5000;
          FUN_141c7fc70(param_1,5000);
          FUN_1456aa6e0(param_1);
        }
      }
      else {
        FUN_1456aa6e0(param_1);
        uVar14 = 0;
        FUN_140191e10(param_1,1);
        uVar6 = _DAT_14abbef40;
        *(float *)(param_1 + 0xad) = *(float *)((longlong)param_1 + 0x62c);
        *(undefined4 *)((longlong)param_1 + 0x56c) = uVar6;
        if (*(float *)((longlong)param_1 + 0x62c) <
            *(float *)((ulonglong)DAT_149e2ea68 * 4 + 0x149e2ea5c)) {
          uVar14 = 0;
          *(undefined1 *)((longlong)param_1 + 0x64d) = 1;
          FUN_140191ea0(param_1,0);
        }
      }
      goto LAB_14018dd8c;
    }
    if (iVar1 == 0) {
      cVar5 = FUN_140191e60(param_1[8]);
      if ((cVar4 != '\0' || bVar2 != 0) && (cVar5 == '\0')) {
        if ((int)param_1[0xd] == -2) {
          if (cStack_71 == '\0') {
LAB_14018dfce:
            cVar4 = FUN_1401929b0(param_1);
            if (cVar4 != '\0') {
              lVar7 = func_0x000144da3240(param_1[8]);
              lVar7 = func_0x000144ebbf10(*(undefined4 *)(lVar7 + 0x9c));
              lVar9 = func_0x000144da3240(param_1[8]);
              if ((lVar7 != 0) && ((byte)(*(char *)(lVar9 + 0xfa) - 5U) < 2)) {
                func_0x000144da3240(param_1[8]);
                uVar6 = FUN_140192bd0(lVar7);
                *(undefined4 *)((longlong)param_1 + 0x5f4) = uVar6;
              }
              if ((*(byte *)(param_1[8] + 0x680) & 8) == 0) {
                _DAT_149e2ea48 = _DAT_149e2ea48 + 1 + ((ushort)(_DAT_149e2ea48 + 1U) / 3) * -3;
                *(short *)((longlong)param_1 + 0x644) = _DAT_149e2ea48;
              }
              FUN_140191e10(param_1,1);
              FUN_140191ea0(param_1,CONCAT71((int7)(uVar12 >> 8),~bVar2 | bVar17) & 0xffffff01);
              *(int *)((longlong)param_1 + 0x62c) = (int)param_1[0xbe];
              uVar6 = FUN_14018e6d0(param_1,uVar15,uVar18);
              *(undefined4 *)(param_1 + 0xc5) = uVar6;
              FUN_14018efb0(param_1);
              uVar14 = 0;
              FUN_144ec35b0(lVar8,0x25,0);
            }
            goto LAB_14018dd8c;
          }
        }
        else {
          lVar7 = param_1[0xe];
          if (lVar7 != 0) {
            uVar14 = (ulonglong)*(uint *)(lVar7 + 0x1c);
            cVar4 = FUN_1452b2e40(*(undefined8 *)(lVar7 + 0x10),uVar14);
            if (cStack_71 == '\0' && cVar4 == '\x01') goto LAB_14018dfce;
          }
        }
      }
      *(int *)((longlong)param_1 + 0x62c) = (int)param_1[0xbe];
      uVar6 = FUN_14018e6d0(param_1,uVar15,uVar18);
      *(undefined4 *)(param_1 + 0xc5) = uVar6;
      FUN_14549ce10(param_1[0x3b],0x7585d45d);
      FUN_14549ce10(param_1[0x3c],0x7585d45d);
      uVar14 = 0x7585d45d;
      FUN_14549ce10(param_1[0x3a],0x7585d45d);
      FUN_140190660(param_1);
      goto LAB_14018dd8c;
    }
    if (iVar1 == 1) {
      *(int *)((longlong)param_1 + 0x62c) = (int)param_1[0xbe];
      uVar6 = FUN_14018e6d0(param_1,uVar15,uVar18);
      *(undefined4 *)(param_1 + 0xc5) = uVar6;
      lVar7 = *(longlong *)(param_1[9] + 0x10);
      FUN_140192d90(param_1,CONCAT71((int7)((uVar12 & 0xffffffff) >> 8),
                                     ~(byte)(uVar12 & 0xffffffff) | bVar17) & 0xffffffffffffff01);
      FUN_14018efb0(param_1);
      FUN_14018e5b0(param_1,uVar15);
      if (cVar4 == '\0' && bVar2 == 0) {
        if (*(float *)((longlong)param_1 + 0x62c) < auVar28._0_4_) {
          auVar24._0_4_ = auVar28._0_4_ / (float)*(uint *)(lVar7 + 0x100);
          auVar24._4_12_ = auVar28._4_12_;
          func_0x000144ef0d70(param_1 + 0xac,auVar24._0_8_,
                              _DAT_145fc6f88 / (float)*(uint *)(lVar7 + 0x104));
        }
        uVar14 = 0;
        FUN_140191e10(param_1,3);
        FUN_14169d340(param_1[0x38]);
        if ((lVar7 != 0) && (*(float *)(lVar7 + 0x178) < *(float *)(param_1 + 0xc5)))
        goto LAB_14018e35d;
      }
      else {
        uVar14 = uVar15;
        if ((*(float *)((longlong)param_1 + 0x654) <= *(float *)(param_1 + 0xc5)) &&
           (*(float *)(lVar7 + 0x200) < *(float *)((longlong)param_1 + 0x62c))) {
          uVar14 = 0;
          FUN_140191e10(param_1,2);
        }
      }
      goto LAB_14018dd8c;
    }
  }
  FUN_1401906a0(param_1);
LAB_14018dd9d:
  FUN_14018e850(param_1);
  auVar27 = ZEXT1264(ZEXT812(0));
  if ((int)param_1[0xc9] != 0) {
    auVar27 = ZEXT464(*(uint *)((longlong)param_1 + 0x62c));
  }
  uVar10 = func_0x000144da3240(param_1[8]);
  FUN_14018e4d0(uVar10,auVar27._0_8_);
  FUN_14018e380(param_1[8],(int)param_1[0xc0]);
  if ((int)param_1[0xc9] != 0) {
    FUN_14018eb70(param_1);
  }
  FUN_14018e3d0(param_1);
  FUN_14018e410(param_1,CONCAT71((int7)(uVar14 >> 8),*(undefined1 *)(param_1[8] + 0x120)) &
                        0xffffffffffffff01);
  *(undefined1 *)((longlong)param_1 + 0x64f) = *(undefined1 *)((longlong)param_1 + 0x64c);
  return;
}

