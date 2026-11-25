// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401013c0  size: 208 bytes
// Name:    FUN_1401013c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Removing unreachable block (ram,0x000144fa0a1c) */
/* WARNING: Removing unreachable block (ram,0x000144fa0bb9) */
/* WARNING: Removing unreachable block (ram,0x000144fa0a3e) */
/* WARNING: Removing unreachable block (ram,0x000144fa0ab2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1401013c0(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  char cVar18;
  undefined4 uVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong lVar22;
  undefined8 uVar23;
  uint uVar24;
  longlong *plVar25;
  undefined1 (*unaff_RSI) [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  longlong lVar30;
  undefined1 auVar29 [16];
  undefined1 auStack_e8 [4];
  undefined1 auStack_e4 [8];
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined1 auStack_c8 [8];
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  longlong alStack_a8 [2];
  longlong lStack_98;
  longlong lStack_90;
  longlong alStack_88 [2];
  ulonglong uStack_78;
  undefined8 uStack_40;
  
  uStack_40 = 0x1401013d4;
  uVar21 = func_0x000145311e80(param_2);
  if ((char)uVar21 == '\0') {
    auVar26._0_12_ = ZEXT812(0);
    auVar26._12_4_ = 0;
    *param_1 = auVar26;
    return uVar21;
  }
  uVar20 = *(uint *)(param_2[2] + 8);
  uVar21 = (ulonglong)uVar20 & 0x1ffff;
  if ((((uVar21 != 0x1ffff) &&
       (plVar25 = *(longlong **)((ulonglong)(uVar20 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
       plVar25 != (longlong *)0x0)) &&
      (uVar24 = *(uint *)(plVar25[5] + uVar21 * 4), (uVar24 >> 0x11 & 0x3ff) == uVar20 >> 0x16)) &&
     (((uVar24 & *(uint *)(plVar25 + 6)) == *(uint *)(plVar25 + 6) && (*plVar25 != 0)))) {
    uStack_40 = 0x14010144c;
    lVar22 = func_0x0001401b01d0(*(undefined4 *)
                                  (*plVar25 + 0x9c +
                                  (ulonglong)(uint)((int)uVar21 * (int)plVar25[1])));
    if ((lVar22 != 0) && (plVar25 = *(longlong **)(lVar22 + 0x10), plVar25 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014010146d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar21 = (**(code **)(*plVar25 + 0x80))(plVar25,param_1);
      return uVar21;
    }
  }
  auVar27._0_12_ = ZEXT812(0);
  auVar27._12_4_ = 0;
  *param_1 = auVar27;
  uVar20 = *(uint *)(param_2[2] + 8);
  uVar24 = uVar20 & 0x1ffff;
  if ((((ulonglong)uVar24 == 0x1ffff) ||
      (plVar25 = *(longlong **)((ulonglong)(uVar20 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
      plVar25 == (longlong *)0x0)) ||
     (uVar13 = *(uint *)(plVar25[5] + (ulonglong)uVar24 * 4),
     (uVar13 >> 0x11 & 0x3ff) != uVar20 >> 0x16 || (~uVar13 & *(uint *)(plVar25 + 6)) != 0)) {
    plVar25 = (longlong *)0x0;
  }
  else {
    plVar25 = (longlong *)((ulonglong)(uVar24 * (int)plVar25[1]) + *plVar25);
  }
  switch((*(int *)param_2[1] << 0x19) >> 0x19) {
  case 0:
    if (plVar25 == (longlong *)0x0) goto code_r0x000144fa0ac2;
    if ((param_2[1][4] & 1) == 0) {
      FUN_144fa0c80(0,param_1,0,0);
      break;
    }
    lVar22 = plVar25[0xe];
    lVar30 = plVar25[0xf];
    plVar25 = alStack_a8;
code_r0x000144fa089f:
    unaff_RSI = (undefined1 (*) [16])auStack_e8;
    *plVar25 = lVar22;
    plVar25[1] = lVar30;
    func_0x000144dc3790(plVar25,unaff_RSI);
    *(undefined8 *)*param_1 = _auStack_e8;
    *(undefined8 *)(*param_1 + 8) = stack0xffffffffffffff20;
    break;
  case 1:
    if (plVar25 == (longlong *)0x0) goto code_r0x000144fa0ac2;
    if ((param_2[1][4] & 1) == 0) {
      FUN_144fa0c80(0,param_1,0,0);
      unaff_RSI = param_1;
    }
    else {
      lStack_98 = plVar25[0xe];
      lStack_90 = plVar25[0xf];
      unaff_RSI = (undefined1 (*) [16])auStack_e8;
      func_0x000144dc3790(&lStack_98,unaff_RSI);
      *(undefined8 *)*param_1 = _auStack_e8;
      *(undefined8 *)(*param_1 + 8) = stack0xffffffffffffff20;
    }
    fVar1 = *(float *)*param_2;
    fVar15 = *(float *)((longlong)plVar25 + 0x44);
    fVar16 = *(float *)(plVar25 + 9);
    fVar17 = *(float *)((longlong)plVar25 + 0x4c);
    fVar2 = *(float *)(*param_2 + 4);
    fVar3 = *(float *)(*param_2 + 8);
    fVar4 = *(float *)(*param_1 + 4);
    fVar7 = *(float *)(*param_1 + 8);
    fVar10 = *(float *)(*param_1 + 0xc);
    fVar5 = *(float *)((longlong)plVar25 + 0x54);
    fVar8 = *(float *)(plVar25 + 0xb);
    fVar11 = *(float *)((longlong)plVar25 + 0x5c);
    fVar6 = *(float *)((longlong)plVar25 + 100);
    fVar9 = *(float *)(plVar25 + 0xd);
    fVar12 = *(float *)((longlong)plVar25 + 0x6c);
    *(float *)*param_1 =
         fVar3 * *(float *)(plVar25 + 0xc) +
         fVar2 * *(float *)(plVar25 + 10) + fVar1 * *(float *)(plVar25 + 8) + *(float *)*param_1;
    *(float *)(*param_1 + 4) = fVar3 * fVar6 + fVar2 * fVar5 + fVar1 * fVar15 + fVar4;
    *(float *)(*param_1 + 8) = fVar3 * fVar9 + fVar2 * fVar8 + fVar1 * fVar16 + fVar7;
    *(float *)(*param_1 + 0xc) = fVar3 * fVar12 + fVar2 * fVar11 + fVar1 * fVar17 + fVar10;
    break;
  case 2:
  case 4:
    uVar23 = *(undefined8 *)(*param_2 + 8);
    *(undefined8 *)*param_1 = *(undefined8 *)*param_2;
    *(undefined8 *)(*param_1 + 8) = uVar23;
    break;
  case 3:
    if (plVar25 != (longlong *)0x0) {
      iVar14 = *(int *)param_2[3];
      if (iVar14 != 0) {
        if ((char)plVar25[6] == '\x03') {
          uVar23 = func_0x000144fa1020(*(undefined4 *)((longlong)plVar25 + 0x9c));
          auVar29._0_12_ = ZEXT812(0);
          auVar29._12_4_ = 0;
          auVar26 = vcmpps_avx(auVar29,*param_2,0);
          uVar19 = vmovmskps_avx(auVar26);
          if ((~(byte)uVar19 & 7) == 0) {
            uVar20 = FUN_1403e2d30(uVar23,iVar14,param_1);
            uVar21 = (ulonglong)uVar20;
          }
          else {
            _auStack_e4 = SUB3228(ZEXT832(0),0);
            auStack_e8 = (undefined1  [4])0x3f800000;
            fStack_d4 = 1.0;
            _fStack_d0 = 0;
            _auStack_c8 = ZEXT412(0x3f800000) << 0x40;
            _auStack_c8 = ZEXT1232(_auStack_c8);
            cVar18 = FUN_1403e2be0(uVar23,iVar14);
            if (cVar18 == '\0') {
              uVar21 = 0;
            }
            else {
              uVar23 = *(undefined8 *)(*param_2 + 8);
              uVar21 = CONCAT71((uint7)(uint3)((uint)iVar14 >> 8),1);
              *(undefined8 *)*param_1 = *(undefined8 *)*param_2;
              *(undefined8 *)(*param_1 + 8) = uVar23;
              fVar1 = *(float *)*param_1;
              fVar2 = *(float *)(*param_1 + 4);
              fVar3 = *(float *)(*param_1 + 8);
              *(float *)*param_1 =
                   fVar3 * (float)auStack_c8._0_4_ +
                   fVar2 * fStack_d8 + fVar1 * (float)auStack_e8 + fStack_b8;
              *(float *)(*param_1 + 4) =
                   fVar3 * (float)auStack_c8._4_4_ +
                   fVar2 * fStack_d4 + fVar1 * (float)auStack_e4._0_4_ + fStack_b4;
              *(float *)(*param_1 + 8) =
                   fVar3 * fStack_c0 +
                   fVar2 * fStack_d0 + fVar1 * (float)auStack_e4._4_4_ + fStack_b0;
              *(float *)(*param_1 + 0xc) =
                   fVar3 * fStack_bc + fVar2 * fStack_cc + fVar1 * fStack_dc + fStack_ac;
            }
          }
          if ((char)uVar21 == '\0') goto code_r0x000144fa07be;
        }
        else {
          uVar21 = 0;
code_r0x000144fa07be:
          if (*(code **)(*plVar25 + 0xa8) == FUN_144e258a0) {
            lVar22 = FUN_144e258a0();
          }
          else {
            lVar22 = (**(code **)(*plVar25 + 0xa8))();
          }
          if ((lVar22 == 0) ||
             (cVar18 = FUN_14014b540(lVar22,*(undefined4 *)param_2[3]), cVar18 == '\0')) {
            lVar22 = (**(code **)(*plVar25 + 0x290))(plVar25);
            if (lVar22 != 0) {
              uVar19 = *(undefined4 *)param_2[3];
              FUN_14002cac0(lVar22,auStack_e8,uVar19);
              if (auStack_e8[0] == '\x01') {
                FUN_140047dc0(lVar22,uVar19);
              }
            }
          }
          else {
            uStack_78 = CONCAT44(uStack_78._4_4_,0xffffffff);
            cVar18 = FUN_1400746e0(lVar22,*(undefined4 *)param_2[3]);
            if ((cVar18 != '\0') && ((int)uStack_78 != -1)) {
              auVar28._0_12_ = ZEXT812(0);
              auVar28._12_4_ = 0;
              auVar26 = vcmpps_avx(auVar28,*param_2,0);
              uVar19 = vmovmskps_avx(auVar26);
              if ((~(byte)uVar19 & 7) == 0) {
                FUN_144fb4f10(lVar22,auStack_e8);
                *(undefined8 *)*param_1 = _auStack_e8;
                *(undefined8 *)(*param_1 + 8) = stack0xffffffffffffff20;
              }
              else {
                _auStack_e4 = SUB3228(ZEXT832(0),0);
                auStack_e8 = (undefined1  [4])0x3f800000;
                fStack_d4 = 1.0;
                _fStack_d0 = 0;
                _auStack_c8 = ZEXT412(0x3f800000) << 0x40;
                _auStack_c8 = ZEXT1232(_auStack_c8);
                FUN_145026220(lVar22,uStack_78 & 0xffffffff,auStack_e8);
                uVar23 = *(undefined8 *)(*param_2 + 8);
                *(undefined8 *)*param_1 = *(undefined8 *)*param_2;
                *(undefined8 *)(*param_1 + 8) = uVar23;
                fVar1 = *(float *)*param_1;
                fVar2 = *(float *)(*param_1 + 4);
                fVar3 = *(float *)(*param_1 + 8);
                *(float *)*param_1 =
                     fVar3 * (float)auStack_c8._0_4_ +
                     fVar2 * fStack_d8 + fVar1 * (float)auStack_e8 + fStack_b8;
                *(float *)(*param_1 + 4) =
                     fVar3 * (float)auStack_c8._4_4_ +
                     fVar2 * fStack_d4 + fVar1 * (float)auStack_e4._0_4_ + fStack_b4;
                *(float *)(*param_1 + 8) =
                     fVar3 * fStack_c0 +
                     fVar2 * fStack_d0 + fVar1 * (float)auStack_e4._4_4_ + fStack_b0;
                *(float *)(*param_1 + 0xc) =
                     fVar3 * fStack_bc + fVar2 * fStack_cc + fVar1 * fStack_dc + fStack_ac;
              }
              uVar21 = CONCAT71((int7)((ulonglong)auStack_e8 >> 8),1);
            }
          }
        }
        if ((char)uVar21 != '\0') goto code_r0x000144fa077c;
      }
      lVar22 = plVar25[0xe];
      lVar30 = plVar25[0xf];
      plVar25 = alStack_88;
      goto code_r0x000144fa089f;
    }
  default:
code_r0x000144fa0ac2:
    uVar21 = 0;
    goto code_r0x000144fa077c;
  }
  uVar21 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
code_r0x000144fa077c:
  return uVar21 & 0xffffffff;
}

