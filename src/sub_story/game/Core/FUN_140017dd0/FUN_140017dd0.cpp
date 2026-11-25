// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140017dd0  size: 283 bytes
// Name:    FUN_140017dd0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fb8c70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x000140017eb9: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000140017ebe) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140017dd0(longlong *param_1,int param_2,byte param_3)

{
  ushort uVar1;
  short sVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  int iVar5;
  uint uVar6;
  ushort uVar7;
  float fVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 extraout_var [56];
  undefined1 in_ZMM1 [64];
  undefined8 uVar11;
  undefined1 auVar12 [64];
  float fVar13;
  undefined1 auVar14 [64];
  float fVar15;
  float fVar17;
  undefined1 auVar19 [64];
  undefined1 auStack_34 [4];
  int iStack_30;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auVar16 [64];
  undefined1 auVar18 [64];
  
  if (param_3 == 0) {
    *(byte *)((longlong)param_1 + 0x22b) = *(byte *)((longlong)param_1 + 0x22b) | 0x10;
  }
  if ((*(byte *)((longlong)param_1 + 0xfe) & 0xc) == 8) {
    FUN_144fb8c70(param_1,auStack_24,auStack_28,auStack_2c,auStack_34,&iStack_30);
    iVar5 = 0;
    if (-1 < (int)param_1[0xb]) {
      iVar5 = param_2 - (int)param_1[0xb];
    }
    if (iStack_30 < 0) {
      uVar6 = (uint)*(ushort *)((longlong)param_1 + 0x22a);
    }
    else {
      *(byte *)((longlong)param_1 + 0xf7) = *(byte *)((longlong)param_1 + 0xf7) | 0x80;
      uVar7 = *(ushort *)((longlong)param_1 + 0x22a);
      uVar6 = uVar7 | 0x200;
      *(short *)((longlong)param_1 + 0x22a) = (short)uVar6;
      if ((char)param_1[0x45] != '\x04') {
        *(undefined1 *)(param_1 + 0x45) = 4;
        *(int *)((longlong)param_1 + 0x1d4) = iVar5;
        *(int *)(param_1 + 0x3b) = iVar5 + iStack_30;
      }
      if ((uVar7 >> 0xd & 1) == 0) {
        return;
      }
    }
    if (((uVar6 >> 0xb & 1) == 0 & param_3) != 0) {
      return;
    }
    *(byte *)((longlong)param_1 + 0xf7) = *(byte *)((longlong)param_1 + 0xf7) | 0x80;
    (**(code **)(*param_1 + 0xb0))(param_1);
  }
  else {
    *(byte *)((longlong)param_1 + 0xf7) = *(byte *)((longlong)param_1 + 0xf7) | 0xc0;
    if ((*(ushort *)((longlong)param_1 + 0xd4) != 0xffff) &&
       (sVar2 = *(short *)(*(longlong *)
                            (_DAT_14ab73aa0 + 0x8ac0 +
                            (ulonglong)*(byte *)((longlong)param_1 + 0x7e) * 0x8ad0) + 0x626 +
                          (ulonglong)((uint)*(ushort *)((longlong)param_1 + 0xd4) * _DAT_14ab73a8c))
       , sVar2 != -1)) {
      *(short *)(param_1 + 0x10) = sVar2;
    }
    *(undefined2 *)((longlong)param_1 + 0x82) = 0xffff;
    auVar14._0_8_ = FUN_144de1230(param_1);
    auVar14._8_56_ = extraout_var;
    uVar7 = *(ushort *)(param_1 + 0x10);
    if (uVar7 != 0xffff) {
      if ((*(byte *)((longlong)param_1 + 0xfa) & 8) == 0) {
        auVar14 = ZEXT1664(CONCAT124(auVar14._4_12_,(float)(uint)(param_2 - (int)param_1[0xb])));
      }
      else {
        auVar14 = ZEXT464(*(uint *)((longlong)param_1 + 100));
      }
      fVar13 = auVar14._0_4_;
      auVar12 = ZEXT464((uint)_DAT_145fc6ed8);
      uVar1 = *(ushort *)((longlong)param_1 + 0x9e);
      fVar8 = _DAT_145fc6ed8;
      if (uVar1 != 0) {
        dVar9 = (double)func_0x000144ec2d90(param_1[4],(int)param_1[5]);
        fVar8 = auVar12._0_4_;
        fVar13 = auVar14._0_4_;
        fVar15 = -((float)*(ushort *)((longlong)param_1 + 0x8c) *
                  *(float *)((longlong)param_1 + 0x44)) + (float)(dVar9 * _DAT_145fc6ed0);
        auVar16 = ZEXT1664(CONCAT124(in_ZMM1._4_12_,fVar15));
        fVar17 = (float)uVar1;
        auVar18 = ZEXT1664(CONCAT124(in_ZMM1._4_12_,fVar17));
        if ((fVar15 <= 0.0) || (fVar15 <= fVar17)) {
          uVar6 = FUN_144ddb760(param_1);
          auVar19 = ZEXT1664(CONCAT124(in_ZMM1._4_12_,(float)uVar6));
          iVar5 = FUN_144ddb6f0(param_1);
          fVar8 = auVar12._0_4_;
          fVar13 = auVar19._0_4_ + (float)iVar5;
          auVar10 = vcmpss_avx(ZEXT416((uint)fVar13),ZEXT416(_DAT_146159d50),6);
          fVar15 = (float)(auVar10._0_4_ & (uint)fVar13) * *(float *)((longlong)param_1 + 0x44);
          fVar13 = auVar14._0_4_;
          if (fVar13 < ((float)*(ushort *)((longlong)param_1 + 0x9e) - auVar16._0_4_) + fVar15) {
            auVar10 = vroundss_avx(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15),0xb);
            uVar7 = *(ushort *)(param_1 + 0x10);
            bVar3 = fVar13 < auVar10._0_4_;
            auVar10._0_4_ = ((auVar16._0_4_ + fVar13) - fVar15) / auVar18._0_4_;
            auVar10._4_12_ = SUB6012((undefined1  [60])0x0,0);
            if ((bVar3) || (_DAT_145fc6ed8 < auVar10._0_4_)) {
              if (bVar3) goto code_r0x000144de2859;
              auVar4 = vminss_avx(ZEXT416((uint)_DAT_145fc6ed8),auVar10);
              auVar10 = vcmpss_avx(auVar10,ZEXT816(0),1);
              fVar15 = (float)(~auVar10._0_4_ & auVar4._0_4_);
              uVar11 = CONCAT44(~auVar10._4_4_ & auVar4._4_4_,fVar15);
            }
            else {
              auVar10 = vmaxss_avx(ZEXT816(0) << 0x20,auVar10);
              uVar11 = auVar10._0_8_;
              fVar15 = auVar10._0_4_;
            }
            fVar8 = (float)uVar11;
            if (((0.0 < fVar15) && (uVar7 != 0xffff)) && (cRam0000000149ce1050 == '\b')) {
              fVar8 = (float)func_0x000145f40850(uVar11);
              fVar13 = auVar14._0_4_;
              fVar8 = fVar8 / fRam0000000149ce1020 + _DAT_145fc6ed8;
            }
          }
          else {
            uVar7 = *(ushort *)(param_1 + 0x10);
          }
        }
      }
code_r0x000144de2859:
      *(float *)(param_1 + 0xc) = (float)uVar7 * (fVar8 + _DAT_145fc6f48) + fVar13;
      *(byte *)(param_1 + 0x1f) = *(byte *)(param_1 + 0x1f) | 1;
      return;
    }
    *(undefined2 *)(param_1 + 0x10) = 0;
    if (*(code **)(*param_1 + 0xb0) == (code *)&UNK_144de2a60) {
      func_0x000144de2a60(param_1);
    }
    else {
      (**(code **)(*param_1 + 0xb0))(param_1);
    }
  }
  *(undefined4 *)(param_1 + 9) =
       *(undefined4 *)(&DAT_14aa31a7c + ((*(byte *)((longlong)param_1 + 0x7f) & 0x1f) << 5));
  *(byte *)(param_1 + 0x1f) = *(byte *)(param_1 + 0x1f) | 0x10;
  return;
}

