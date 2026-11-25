// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140004390  size: 154 bytes
// Name:    FUN_140004390
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_143dde930
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140004390(longlong param_1)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  uint uVar8;
  int iVar9;
  longlong unaff_GS_OFFSET;
  undefined1 auVar10 [16];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [64];
  undefined1 auVar14 [32];
  
  if (*(char *)(param_1 + 0x20) != '\0') {
    iVar9 = *(int *)(param_1 + 0x48);
    if (iVar9 != -1) {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      FUN_143dde930(*(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1470) + 0x17d8,iVar9);
    }
    if (*(longlong *)(param_1 + 0x68) != 0) {
      func_0x000144d9c130();
    }
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    func_0x000144d9c130();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    func_0x000144d9c130();
  }
  lVar4 = *(longlong *)(param_1 + 8);
  if (lVar4 != 0) {
    uVar2 = *(uint *)(param_1 + 0x10);
    uVar3 = *(uint *)(param_1 + 0x14);
    if (uVar3 < 0x10) {
      uVar8 = 0;
    }
    else {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = _UNK_146159b28;
      auVar5 = vpmovsxbd_avx2(auVar1);
      auVar14._4_4_ = _DAT_145f43778;
      auVar14._0_4_ = _DAT_145f43778;
      auVar14._8_4_ = _DAT_145f43778;
      auVar14._12_4_ = _DAT_145f43778;
      auVar14._16_4_ = _DAT_145f43778;
      auVar14._20_4_ = _DAT_145f43778;
      auVar14._24_4_ = _DAT_145f43778;
      auVar14._28_4_ = _DAT_145f43778;
      auVar13 = ZEXT1664((undefined1  [16])0x0);
      iVar9 = (uVar3 >> 4) - 1;
      uVar8 = (uVar3 >> 4) + 7 & 0xfffffff8;
      do {
        auVar7 = auVar5;
        auVar12 = auVar13._0_32_;
        auVar6 = vpsllvd_avx2(auVar14,auVar7);
        auVar5._0_4_ = auVar7._0_4_ + _DAT_145f43840;
        auVar5._4_4_ = auVar7._4_4_ + _DAT_145f43840;
        auVar5._8_4_ = auVar7._8_4_ + _DAT_145f43840;
        auVar5._12_4_ = auVar7._12_4_ + _DAT_145f43840;
        auVar5._16_4_ = auVar7._16_4_ + _DAT_145f43840;
        auVar5._20_4_ = auVar7._20_4_ + _DAT_145f43840;
        auVar5._24_4_ = auVar7._24_4_ + _DAT_145f43840;
        auVar5._28_4_ = auVar7._28_4_ + _DAT_145f43840;
        uVar8 = uVar8 - 8;
        auVar6 = vpor_avx2(auVar6,auVar12);
        auVar13 = ZEXT3264(auVar6);
      } while (uVar8 != 0);
      auVar11._4_4_ = iVar9;
      auVar11._0_4_ = iVar9;
      auVar11._8_4_ = iVar9;
      auVar11._12_4_ = iVar9;
      auVar11._16_4_ = iVar9;
      auVar11._20_4_ = iVar9;
      auVar11._24_4_ = iVar9;
      auVar11._28_4_ = iVar9;
      auVar5 = vpminud_avx2(auVar7,auVar11);
      auVar5 = vpcmpeqd_avx2(auVar7,auVar5);
      auVar5 = vblendvps_avx(auVar12,auVar6,auVar5);
      auVar10 = auVar5._0_16_ | auVar5._16_16_;
      auVar1 = vshufps_avx(auVar10,auVar10,0xee);
      auVar10 = auVar10 | auVar1;
      auVar1 = vshufps_avx(auVar10,auVar10,0x55);
      uVar8 = auVar10._0_4_ | auVar1._0_4_;
    }
    LOCK();
    *(uint *)(lVar4 + 0x1018) = *(uint *)(lVar4 + 0x1018) ^ uVar8 << (uVar2 >> 4 & 0x1f);
    UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x000145f40580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    memset((void *)(lVar4 + 8 + (ulonglong)uVar2 * 8),(void *)0x0,(void *)((ulonglong)uVar3 << 3));
    return;
  }
  return;
}

