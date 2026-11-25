// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400cdc90  size: 761 bytes
// Name:    FUN_1400cdc90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400e2e50, FUN_1400cb830
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1400cdc90(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 unaff_RBP;
  undefined7 uVar8;
  ulonglong uVar7;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [64];
  int aiStack_f8 [6];
  float fStack_e0;
  byte bStack_b8;
  undefined1 auStack_a8 [24];
  float fStack_90;
  byte bStack_68;
  
  bVar3 = *(byte *)(param_1 + 0x90);
  if ((bVar3 & 0x20) == 0) {
    bVar4 = *(byte *)(param_2 + 0x14d);
    if (((bVar3 & 0x40) == 0) || ((bVar4 & 0x10) != 0)) {
      *(byte *)(param_2 + 0x14d) = bVar4 | 0x20;
LAB_1400cdd26:
      uVar8 = (undefined7)((ulonglong)unaff_RBP >> 8);
      if (*(char *)(param_2 + 0xe0) == '\x03') {
        if ((*(byte *)(param_1 + 0x91) & 1) == 0) {
          uVar7 = CONCAT71(uVar8,(*(byte *)(param_3 + 0x110) & 0x40) == 0);
          goto LAB_1400cdcff;
        }
      }
      else {
        lVar1 = *(longlong *)(param_2 + 0x20);
        bVar3 = 1;
        if (lVar1 != 0) {
          if (((*(uint *)(lVar1 + 0x10) & 0x20) == 0) || (*(longlong *)(lVar1 + 0x898) == 0)) {
            bVar3 = *(longlong *)(lVar1 + 0x8e8) != 0 & (byte)(*(uint *)(lVar1 + 0x10) >> 0xb);
          }
          else {
            bVar3 = 0;
          }
        }
        auVar12 = ZEXT464(*(uint *)(param_2 + 0xf4));
        lVar1 = *(longlong *)(param_1 + 0x188);
        func_0x000144f65360(aiStack_f8);
        plVar5 = (longlong *)func_0x000144f63b60(param_1 + 0x2a0,(ulonglong)param_4,0);
        if (((plVar5 != (longlong *)0x0) && ((int)plVar5[4] == 4)) &&
           (*(short *)((longlong)plVar5 + 0x1e) != 0)) {
          FUN_1400cb830(param_1,plVar5,aiStack_f8,param_2,bVar3,1,0);
        }
        uVar7 = CONCAT71(uVar8,1);
        if ((bStack_b8 & 1) == 0) goto LAB_1400cdcff;
        if ((((longlong)aiStack_f8[0] < 0) ||
            (lVar6 = func_0x00014540d1f0(*(undefined4 *)
                                          (*plVar5 + 0x20 + (longlong)aiStack_f8[0] * 0x40)),
            lVar6 == 0)) ||
           ((*(char *)(lVar6 + 0x30) != '\x03' ||
            (cVar2 = FUN_1400e2e50(*(undefined8 *)(lVar6 + 0x20),*(undefined4 *)(lVar6 + 0x9c)),
            cVar2 == '\0')))) {
          if ((*(byte *)(param_2 + 0x120) & 0x20) != 0) goto LAB_1400cdcff;
          func_0x000144f65360(auStack_a8);
          lVar6 = func_0x000144f63b60(param_1 + 0x2a0,(ulonglong)(1 - param_4),0);
          auVar11 = auVar12._0_16_;
          if (((lVar6 != 0) && (*(int *)(lVar6 + 0x20) == 4)) && (*(short *)(lVar6 + 0x1e) != 0)) {
            FUN_1400cb830(param_1,lVar6,auStack_a8,param_2,bVar3,1,0);
            auVar11 = auVar12._0_16_;
          }
          if ((bStack_68 & 1) != 0) {
            bVar3 = *(byte *)(lVar1 + 0x1a4 + (ulonglong)param_4 * 0x1b0) & 0x40;
            if ((bool)(bVar3 >> 6) !=
                ((*(uint *)(lVar1 + 0x1a4 + (ulonglong)(1 - param_4) * 0x1b0) >> 6 & 1) != 0)) {
              auVar11 = vcmpss_avx(auVar11,ZEXT416(_DAT_146159ec4),1);
              auVar9._4_4_ = _DAT_145fc7020;
              auVar9._0_4_ = _DAT_145fc7020;
              auVar9._8_4_ = _DAT_145fc7020;
              auVar9._12_4_ = _DAT_145fc7020;
              auVar10._4_4_ = _DAT_146159fa0;
              auVar10._0_4_ = _DAT_146159fa0;
              auVar10._8_4_ = _DAT_146159fa0;
              auVar10._12_4_ = _DAT_146159fa0;
              auVar11 = vblendvps_avx(auVar10,auVar9,auVar11);
              if (bVar3 == 0) {
                if (fStack_90 <= fStack_e0) goto LAB_1400cdcfd;
                fStack_90 = fStack_90 - auVar11._0_4_;
              }
              else {
                if (fStack_e0 < fStack_90) {
                  uVar7 = CONCAT71(uVar8,1);
                  goto LAB_1400cdcff;
                }
                fStack_90 = fStack_90 + auVar11._0_4_;
              }
            }
            uVar7 = CONCAT71(uVar8,fStack_e0 < fStack_90);
            goto LAB_1400cdcff;
          }
        }
      }
    }
    else {
      if ((char)bVar3 < '\0') goto LAB_1400cdf42;
      *(byte *)(param_2 + 0x14d) = bVar4 & 0xcf | *(byte *)(param_2 + 0x14c) >> 2 & 0x20;
      if ((char)*(byte *)(param_2 + 0x14c) < '\0') goto LAB_1400cdd26;
    }
  }
  else {
    bVar4 = *(byte *)(param_2 + 0x14d);
LAB_1400cdf42:
    *(byte *)(param_2 + 0x14d) = bVar4 & 0xdf;
  }
LAB_1400cdcfd:
  uVar7 = 0;
LAB_1400cdcff:
  return uVar7 & 0xffffffff;
}

