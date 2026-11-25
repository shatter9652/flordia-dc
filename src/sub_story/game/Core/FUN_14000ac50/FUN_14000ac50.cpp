// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14000ac50  size: 526 bytes
// Name:    FUN_14000ac50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144dc2900
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14000ac50(longlong param_1,undefined8 param_2,char param_3)

{
  uint uVar1;
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  byte bVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 in_ZMM3 [64];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined4 uVar17;
  longlong alStack_e8 [24];
  
  uVar1 = *(uint *)(param_1 + 0xf4);
  uVar7 = (ulonglong)uVar1;
  if (uVar7 != 0) {
    lVar8 = uVar7 - 1;
    auVar12._8_8_ = _DAT_145f437c0;
    auVar12._0_8_ = _DAT_145f437c0;
    auVar12._16_8_ = _DAT_145f437c0;
    auVar12._24_8_ = _DAT_145f437c0;
    auVar14._8_8_ = _DAT_146183a10;
    auVar14._0_8_ = _DAT_146183a10;
    auVar14._16_8_ = _DAT_146183a10;
    auVar14._24_8_ = _DAT_146183a10;
    auVar3 = vpcmpeqd_avx2(in_ZMM3._0_32_,in_ZMM3._0_32_);
    lVar11 = param_1 + 0x100;
    lVar10 = 0;
    uVar17 = 0x10;
    auVar13._8_8_ = lVar8;
    auVar13._0_8_ = lVar8;
    auVar13._16_8_ = lVar8;
    auVar13._24_8_ = lVar8;
    auVar4 = vpmovsxbq_avx2(ZEXT416(_DAT_145f43800));
    do {
      auVar15 = vpsrlq_avx2(auVar4,0x20);
      auVar5 = vpmuludq_avx2(auVar4,auVar14);
      auVar2._0_8_ = auVar4._0_8_ + _DAT_145fc1608;
      auVar2._8_8_ = auVar4._8_8_ + _DAT_145fc1608;
      auVar2._16_8_ = auVar4._16_8_ + _DAT_145fc1608;
      auVar2._24_8_ = auVar4._24_8_ + _DAT_145fc1608;
      auVar16 = vpmuludq_avx2(auVar15,auVar14);
      auVar15 = vpcmpgtq_avx2(auVar4 ^ auVar12,auVar13 ^ auVar12);
      auVar16 = vpsllq_avx2(auVar16,0x20);
      auVar4._0_8_ = auVar5._0_8_ + lVar11 + auVar16._0_8_;
      auVar4._8_8_ = auVar5._8_8_ + lVar11 + auVar16._8_8_;
      auVar4._16_8_ = auVar5._16_8_ + lVar11 + auVar16._16_8_;
      auVar4._24_8_ = auVar5._24_8_ + lVar11 + auVar16._24_8_;
      auVar4 = vpmaskmovq_avx2(auVar15 ^ auVar3,auVar4);
      *(undefined1 (*) [32])((longlong)alStack_e8 + lVar10) = auVar4;
      lVar10 = lVar10 + 0x20;
      auVar4 = auVar2;
    } while ((uVar7 + 3 >> 2) * 0x20 != lVar10);
    qsort(alStack_e8,uVar7,8,&UNK_144a65a80);
    if ((ulonglong)uVar1 != 0) {
      lVar8 = (ulonglong)uVar1 << 3;
      lVar11 = 0;
      if (param_3 == '\0') {
        iVar9 = 0;
        do {
          if (5 < iVar9) {
            return;
          }
          lVar10 = *(longlong *)((longlong)alStack_e8 + lVar11);
          if ((*(char *)(lVar10 + 0x7e) == '\x01') && (*(char *)(lVar10 + 0x81) == '\0')) {
            bVar6 = FUN_144dc2900(param_1,param_2,*(undefined4 *)(lVar10 + 0x6c),
                                  *(undefined4 *)(lVar10 + 100),*(undefined4 *)(lVar10 + 0x68),
                                  lVar10 + 0x74,lVar10 + 0x78,uVar17);
            iVar9 = iVar9 + (uint)bVar6;
          }
          lVar11 = lVar11 + 8;
        } while (lVar8 != lVar11);
      }
      else {
        iVar9 = 0;
        do {
          if (5 < iVar9) {
            return;
          }
          lVar10 = *(longlong *)((longlong)alStack_e8 + lVar11);
          if (*(char *)(lVar10 + 0x7e) == '\x01') {
            bVar6 = FUN_144dc2900(param_1,param_2,*(undefined4 *)(lVar10 + 0x6c),
                                  *(undefined4 *)(lVar10 + 100),*(undefined4 *)(lVar10 + 0x68),
                                  lVar10 + 0x74,lVar10 + 0x78,uVar17);
            iVar9 = iVar9 + (uint)bVar6;
          }
          lVar11 = lVar11 + 8;
        } while (lVar8 != lVar11);
      }
    }
  }
  return;
}

