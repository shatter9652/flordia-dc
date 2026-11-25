// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b8be0  size: 184 bytes
// Name:    FUN_1400b8be0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140993d40, FUN_14501d6a0, FUN_1400b8ca0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400b8be0(longlong param_1,longlong param_2,uint param_3)

{
  ushort uVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  short sVar7;
  uint uVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong unaff_GS_OFFSET;
  undefined1 auStack_cc [4];
  uint auStack_c8 [2];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_60 = 0x1400b8bfe;
  lVar10 = FUN_14501d6a0(param_2);
  if (lVar10 == 0) {
    return;
  }
  uVar19 = (ulonglong)param_3;
  lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x18) + uVar19 * 8);
  if (lVar11 != 0) {
    uStack_60 = 0x1400b8c22;
    FUN_140993d40(lVar11);
    uStack_60 = 0x1400b8c2f;
    func_0x000144d9c130(lVar11,0x1e0);
    *(undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar19 * 8) = 0;
  }
  uStack_60 = 0x1400b8c45;
  lVar11 = func_0x000144f97130(0x1e0);
  uStack_60 = 0x1400b8c50;
  func_0x000140328550(lVar11);
  uStack_60 = 0x1400b8c5e;
  FUN_1400b8ca0(lVar11,lVar10,0);
  *(longlong *)(lVar11 + 8) = param_2 + 0x40;
  *(longlong *)(*(longlong *)(param_1 + 0x18) + uVar19 * 8) = lVar11;
  uVar12 = func_0x000144e3bfa0(param_2);
  lVar10 = func_0x000144e8f430(uVar12,_DAT_14999e814);
  if ((((lVar10 != 0) &&
       (lVar13 = func_0x000144e8f430(*(longlong *)(param_2 + 0x20) + 0x10,uRam000000014999e85c),
       lVar13 != 0)) && (*(short *)(lVar10 + 0x10) != 0)) &&
     (lVar14 = FUN_14501d6a0(param_2), lVar14 != 0)) {
    iVar2 = *(int *)(*(longlong *)(lVar10 + 8) + (ulonglong)param_3 * 4);
    if ((iVar2 != 0) &&
       (lVar10 = FUN_144e4c850(*(undefined4 *)(*(longlong *)(param_2 + 0x20) + 0x58),
                               CONCAT71((int7)((ulonglong)*(longlong *)(lVar10 + 8) >> 8),
                                        *(undefined1 *)(*(longlong *)(param_2 + 0x20) + 0x84))),
       lVar10 != 0)) {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      if (*(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1448) == 0) {
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_50 = 0;
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_78 = 0;
        uStack_70 = 0;
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        auStack_c8[0] = 0;
        auStack_c8[1] = 0;
        uStack_c0 = 0;
        uStack_b8 = 0;
        uStack_b0 = 0;
      }
      if (*(ushort *)(lVar13 + 0x38) != 0) {
        plVar15 = *(longlong **)(lVar13 + 0x30);
        lVar13 = (ulonglong)*(ushort *)(lVar13 + 0x38) * 0x18;
        do {
          if ((int)plVar15[2] == iVar2) {
            uVar1 = *(ushort *)(plVar15 + 1);
            if (uVar1 == 0) {
              return;
            }
            lVar13 = *plVar15;
            lVar20 = 0;
            do {
              if (*(char *)(lVar13 + 4 + lVar20) == '\x01') {
                uVar8 = func_0x00014006bb80(*(undefined8 *)(lVar10 + 0x20),
                                            *(undefined2 *)(lVar10 + 0x34),
                                            *(undefined4 *)(lVar13 + lVar20));
                if ((short)uVar8 != -1) {
                  auStack_c8[(uint)(int)(short)uVar8 >> 5] =
                       auStack_c8[(uint)(int)(short)uVar8 >> 5] | 1 << (uVar8 & 0x1f);
                }
              }
              lVar20 = lVar20 + 8;
            } while ((ulonglong)uVar1 * 8 != lVar20);
            if ((auStack_c8[1] == 0 && auStack_c8[0] == 0) &&
               (auVar5._8_8_ = uStack_98, auVar5._0_8_ = uStack_a0, auVar5._16_8_ = uStack_90,
               auVar5._24_8_ = uStack_88, auVar4._8_8_ = uStack_b8, auVar4._0_8_ = uStack_c0,
               auVar4._16_8_ = uStack_b0, auVar4._24_8_ = uStack_a8,
               auVar4 = vpor_avx2(auVar5,auVar4), auVar4 == (undefined1  [32])0x0)) {
              auVar6._8_8_ = uStack_78;
              auVar6._0_8_ = uStack_80;
              auVar6._16_8_ = uStack_70;
              auVar6._24_8_ = uStack_68;
              auVar4 = vpcmpeqd_avx2(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar6);
              uVar9 = vmovmskps_avx(auVar4);
              if ((char)uVar9 == -1) {
                auVar3._8_8_ = uStack_58;
                auVar3._0_8_ = uStack_60;
                auVar3 = vpcmpeqd_avx((undefined1  [16])0x0,auVar3);
                uVar9 = vmovmskps_avx(auVar3);
                if ((((char)uVar9 == '\x0f') && ((int)uStack_50 == 0)) && (uStack_50._4_4_ == 0)) {
                  return;
                }
              }
            }
            iVar16 = *(int *)(lVar11 + 0x1d4);
            if (0 < iVar16) {
              iVar18 = 0;
              do {
                lVar13 = func_0x000144da1090(lVar11,iVar18,auStack_cc);
                sVar7 = FUN_1400b8cd0(*(undefined8 *)(lVar10 + 0x20),*(undefined2 *)(lVar10 + 0x34),
                                      lVar14,*(undefined4 *)(lVar13 + 0x1c));
                if ((auStack_c8[(uint)(int)sVar7 >> 5] >> ((int)sVar7 & 0x1fU) & 1) != 0) {
                  func_0x000144f43dd0(lVar11,iVar18);
                  iVar16 = *(int *)(lVar11 + 0x1d4);
                }
                iVar18 = iVar18 + 1;
              } while (iVar18 < iVar16);
            }
            if (*(ushort *)(param_2 + 0x128) <= param_3) {
              return;
            }
            uVar8 = *(uint *)(*(longlong *)(param_2 + 0x120) + (ulonglong)param_3 * 4);
            if (uVar8 == 0x1ffff) {
              return;
            }
            uVar17 = *(uint *)(_DAT_14abbe2e8[5] + (ulonglong)(uVar8 & 0x1ffff) * 4);
            if ((~uVar17 & *(uint *)(_DAT_14abbe2e8 + 6)) != 0) {
              return;
            }
            uVar17 = uVar17 & 0x7fe0000;
            if (uVar17 != (uVar8 & 0xfffe0000)) {
              return;
            }
            if (*_DAT_14abbe2e8 == 0) {
              return;
            }
            FUN_141cb3070(*_DAT_14abbe2e8 + (ulonglong)((uVar8 & 0x1ffff) * (int)_DAT_14abbe2e8[1]),
                          iVar2,CONCAT71((uint7)(uint3)(uVar17 >> 8),1),0);
            return;
          }
          plVar15 = plVar15 + 3;
          lVar13 = lVar13 + -0x18;
        } while (lVar13 != 0);
      }
    }
  }
  return;
}

