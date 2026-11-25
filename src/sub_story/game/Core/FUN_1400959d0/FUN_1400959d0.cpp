// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400959d0  size: 155 bytes
// Name:    FUN_1400959d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e91330, FUN_144f28db0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Removing unreachable block (ram,0x000144f29b5f) */
/* WARNING: Removing unreachable block (ram,0x000144f29b80) */
/* WARNING: Removing unreachable block (ram,0x000144f29d5a) */
/* WARNING: Removing unreachable block (ram,0x000144f29bcd) */
/* WARNING: Removing unreachable block (ram,0x000144f29c0e) */
/* WARNING: Removing unreachable block (ram,0x000144f29c12) */
/* WARNING: Removing unreachable block (ram,0x000144f29c1c) */
/* WARNING: Removing unreachable block (ram,0x000144f29c20) */
/* WARNING: Removing unreachable block (ram,0x000144f29c26) */
/* WARNING: Removing unreachable block (ram,0x000144f29c37) */
/* WARNING: Removing unreachable block (ram,0x000144f29c3c) */
/* WARNING: Removing unreachable block (ram,0x000144f29c6d) */
/* WARNING: Removing unreachable block (ram,0x000144f29c78) */
/* WARNING: Removing unreachable block (ram,0x000144f29c95) */
/* WARNING: Removing unreachable block (ram,0x000144f29c9d) */
/* WARNING: Removing unreachable block (ram,0x000144f29d73) */
/* WARNING: Removing unreachable block (ram,0x000144f29cb8) */
/* WARNING: Removing unreachable block (ram,0x000144f29cc8) */
/* WARNING: Removing unreachable block (ram,0x000144f29cd0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400959d0(longlong *param_1)

{
  float fVar1;
  ushort uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  char cVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 in_ZMM4 [64];
  undefined1 auVar18 [32];
  
  (**(code **)(*param_1 + 0x70))(param_1,1);
  lVar12 = FUN_144e91330(param_1);
  if (lVar12 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140095a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x70))(param_1,0);
    return;
  }
  fVar1 = *(float *)((longlong)param_1 + 0x7c);
  if ((fVar1 != 0.0) || (NAN(fVar1))) {
    if (*(longlong *)(lVar12 + 0x50) != 0) {
      *(float *)(lVar12 + 0x70) = fVar1 + *(float *)(lVar12 + 0x70);
    }
    if (*(longlong *)(lVar12 + 0x58) != 0) {
      *(float *)(lVar12 + 0x74) = *(float *)((longlong)param_1 + 0x7c) + *(float *)(lVar12 + 0x74);
    }
    if (*(longlong *)(lVar12 + 0x60) != 0) {
      *(float *)(lVar12 + 0x78) = *(float *)((longlong)param_1 + 0x7c) + *(float *)(lVar12 + 0x78);
    }
  }
  FUN_144f28db0(param_1,0);
  lVar12 = func_0x000144e8f430(param_1 + 2,uRam000000014999ec44);
  if ((lVar12 == 0) && (lVar12 = FUN_144e91330(param_1), lVar12 != 0)) {
    uVar2 = *(ushort *)(*(longlong *)(lVar12 + 0x10) + 0x18);
    if (uVar2 == 0) {
      lVar13 = 0;
    }
    else {
      lVar13 = func_0x000144d9c140(4,(uint)uVar2 * 4);
      lVar15 = (ulonglong)uVar2 - 1;
      auVar16._8_8_ = _DAT_145f437c0;
      auVar16._0_8_ = _DAT_145f437c0;
      auVar16._16_8_ = _DAT_145f437c0;
      auVar16._24_8_ = _DAT_145f437c0;
      auVar8 = vpmovsxbq_avx2(ZEXT416(_DAT_145f43804));
      uVar14 = 0;
      auVar7 = vpcmpeqd_avx2(in_ZMM4._0_32_,in_ZMM4._0_32_);
      auVar17._8_8_ = lVar15;
      auVar17._0_8_ = lVar15;
      auVar17._16_8_ = lVar15;
      auVar17._24_8_ = lVar15;
      auVar9 = vpmovsxbq_avx2(ZEXT416(_DAT_145f43800));
      do {
        auVar18._8_8_ = uVar14;
        auVar18._0_8_ = uVar14;
        auVar18._16_8_ = uVar14;
        auVar18._24_8_ = uVar14;
        auVar10 = vpor_avx2(auVar18,auVar9);
        auVar18 = vpor_avx2(auVar18,auVar8);
        auVar18 = vpcmpgtq_avx2(auVar18 ^ auVar16,auVar17 ^ auVar16);
        auVar10 = vpcmpgtq_avx2(auVar10 ^ auVar16,auVar17 ^ auVar16);
        auVar18 = vpackssdw_avx2(auVar10,auVar18);
        auVar6 = vpackssdw_avx(SUB3216(auVar18 ^ auVar7,0),SUB3216(auVar18 ^ auVar7,0x10));
        auVar6 = vpshufd_avx(auVar6,0xd8);
        auVar18 = vpmovzxwd_avx2(auVar6);
        auVar18 = vpslld_avx2(auVar18,0x1f);
        auVar18 = vpmaskmovd_avx2(auVar18,SUB6432(ZEXT1664((undefined1  [16])0x0),0));
        *(undefined1 (*) [32])(lVar13 + uVar14 * 4) = auVar18;
        uVar14 = uVar14 + 8;
      } while ((uVar2 + 7 & 0xfffffff8) != uVar14);
    }
    lVar15 = 0;
    do {
      plVar3 = *(longlong **)(lVar12 + 0x50 + lVar15 * 8);
      if ((plVar3 != (longlong *)0x0) && (uVar2 = *(ushort *)(plVar3 + 1), (ulonglong)uVar2 != 0)) {
        lVar4 = *plVar3;
        uVar14 = 0;
        do {
          lVar5 = *(longlong *)(lVar4 + uVar14 * 8);
          if ((lVar5 != 0) && ((*(byte *)((longlong)param_1 + 0x99) & 7) == 1)) {
            if (*(short *)(lVar5 + 0x16) == 0) {
              cVar11 = *(char *)(lVar5 + 0x30);
              if ((*(byte *)(lVar5 + 0x35) & 1) != 0) {
                cVar11 = '\0';
              }
              if (*(short *)(lVar5 + 0x14) != 0) {
                cVar11 = '\0';
              }
              if (cVar11 == '\0' && *(byte *)(lVar5 + 0x35) >> 1 == 0) goto code_r0x000144f29aaa;
            }
            FUN_1401d7710(2,lVar5);
          }
code_r0x000144f29aaa:
          uVar14 = uVar14 + 1;
        } while (uVar14 < uVar2);
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 != 4);
    if (lVar13 != 0) {
      func_0x000144d9c130(lVar13);
    }
  }
  return;
}

