// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400921b0  size: 963 bytes
// Name:    FUN_1400921b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e75ec0, FUN_145408670, FUN_144e90590, FUN_144e90390, FUN_141451960, FUN_140058310, FUN_140b6c9d0, FUN_14006e840
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400921b0(longlong *param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  float fVar11;
  undefined1 extraout_var [56];
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  ulonglong uVar14;
  undefined1 auVar15 [16];
  float fStack_10c;
  char acStack_108 [4];
  int iStack_104;
  float fStack_100;
  longlong lStack_f8;
  longlong lStack_f0;
  longlong lStack_e8;
  longlong lStack_e0;
  longlong lStack_d8;
  longlong lStack_d0;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [24];
  uint auStack_a0 [2];
  longlong *plStack_98;
  longlong lStack_90;
  undefined1 auVar16 [64];
  
  puVar5 = (undefined4 *)func_0x000144f54fa0(*(undefined4 *)(param_1[4] + 0x288));
  if (((puVar5 != (undefined4 *)0x0) &&
      (plVar6 = (longlong *)func_0x00014016a080(puVar5[2]), plVar6 != (longlong *)0x0)) &&
     (lVar7 = func_0x000144f205d0(*puVar5), lVar7 != 0)) {
    lVar10 = *plVar6;
    lVar8 = func_0x000145025af0(*(undefined4 *)(lVar10 + 0x10 + (ulonglong)param_2 * 0x30));
    iVar1 = *(int *)(lVar7 + 0x134);
    if ((iVar1 != 0) && (fVar11 = (float)FUN_145408670(), fVar11 <= 0.0)) {
      lStack_d8 = param_1[0xe];
      lStack_d0 = param_1[0xf];
      func_0x000144dc3790(&lStack_d8,auStack_b8);
      fVar11 = (float)FUN_144e75ec0(auStack_b8,0);
      if (fVar11 <= *(float *)(lVar8 + 0xe8) * *(float *)(lVar8 + 0xe8)) {
        puVar5 = (undefined4 *)(lVar10 + (ulonglong)param_2 * 0x30);
        fStack_10c = 0.0;
        lStack_e8 = param_1[0xe];
        lStack_e0 = param_1[0xf];
        func_0x000144dc3790(&lStack_e8,auStack_c8);
        cVar3 = FUN_141451960(param_1,auStack_c8,&fStack_10c);
        if (cVar3 == '\0') {
          auVar13 = ZEXT464(_DAT_145fc6ed8);
          auVar12 = ZEXT1264(ZEXT812(0));
        }
        else {
          lStack_f8 = param_1[0xe];
          lStack_f0 = param_1[0xf];
          func_0x000144dc3790(&lStack_f8,acStack_108);
          auVar12 = ZEXT464((uint)(fStack_100 - fStack_10c));
          auVar13._0_8_ =
               func_0x000144e8f130(fStack_100 - fStack_10c,*(undefined4 *)(lVar7 + 0x148),
                                   *(undefined4 *)(lVar7 + 0x14c));
          auVar13._8_56_ = extraout_var;
          auVar13 = ZEXT1664(auVar13._0_16_);
        }
        uVar2 = *puVar5;
        cVar3 = (**(code **)(*param_1 + 0x288))(param_1);
        if (cVar3 != '\0') {
          uVar9 = (**(code **)(*param_1 + 0xa8))(param_1);
          FUN_14006e840(uVar9,acStack_108,uVar2);
          if ((acStack_108[0] != '\0') && (iStack_104 != -1)) {
            acStack_108[0] = '\0';
            plVar6 = *(longlong **)((ulonglong)*(byte *)(param_1 + 6) * 8 + 0x14abbe7c0);
            lStack_90 = (longlong)(int)(param_2 + 0x35);
            uVar4 = (uint)((ulonglong)((longlong)param_1 - *plVar6) /
                          (ulonglong)*(uint *)(plVar6 + 1)) & 0x1ffff;
            auStack_a0[0] =
                 (*(byte *)(param_1 + 6) & 0x1f) << 0x11 | uVar4 |
                 (*(uint *)(plVar6[5] + (ulonglong)uVar4 * 4) & 0x7fe0000) << 5;
            auStack_a0[1] = 0;
            plStack_98 = param_1;
            lVar10 = FUN_140058310(auStack_a0,iVar1,acStack_108,0,0,0);
            if (lVar10 != 0) {
              FUN_144e90590(lVar10,param_1,iStack_104,0,0);
              iVar1 = puVar5[2];
              *(undefined1 *)(lVar10 + 0x388) = 0;
              if ((iVar1 == 2) || (iVar1 == 0)) {
                *(undefined1 *)(lVar10 + 0x388) = 4;
              }
              uVar9 = func_0x000144e8f130(param_3,*(undefined4 *)(lVar7 + 0x140),
                                          *(undefined4 *)(lVar7 + 0x144));
              FUN_144e90390(lVar10,0x7e909ec5,uVar9);
              auVar15._0_12_ = ZEXT812(0);
              auVar15._12_4_ = 0;
              auVar16 = ZEXT1664(auVar15);
              auVar15 = vmaxss_avx(ZEXT416((uint)(*(float *)(lVar7 + 0x138) -
                                                 *(float *)(lVar7 + 0x13c))),auVar15);
              uVar9 = func_0x000144e8f130(param_3,auVar15._0_8_);
              FUN_144e90390(lVar10,0x3485ca6f,uVar9);
              lVar8 = func_0x000144dd1230(*(undefined4 *)((longlong)param_1 + 0x9c));
              uVar14 = auVar16._0_8_;
              if (lVar8 != 0) {
                if ((*(byte *)(lVar8 + 0x10) & 1) == 0) {
                  uVar14 = 0;
                }
                else {
                  uVar14 = (ulonglong)_DAT_145fc6ed8;
                }
              }
              FUN_144e90390(lVar10,0x3612ee1e,uVar14);
              FUN_144e90390(lVar10,0x45cfe2ae,auVar13._0_8_);
              auVar15 = vcmpss_avx(ZEXT416(*(uint *)(lVar7 + 0x150)),auVar12._0_16_,1);
              FUN_144e90390(lVar10,0x9f18f302,auVar15._0_4_ & _DAT_145fc6ed8);
              if (acStack_108[0] == '\x01') {
                FUN_140b6c9d0(lVar10);
              }
            }
          }
        }
      }
    }
  }
  return;
}

