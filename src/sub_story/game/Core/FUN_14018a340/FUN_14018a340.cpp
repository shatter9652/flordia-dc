// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14018a340  size: 306 bytes
// Name:    FUN_14018a340
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140189850, FUN_145042740, FUN_1401899d0, FUN_1450420c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14018a340(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 aauStack_68 [3] [16];
  
  FUN_145042740();
  if ((ulonglong)*(uint *)(param_2 + 0x44) != 0) {
    lVar7 = *(longlong *)(param_2 + 0x48);
    lVar4 = lVar7 + (ulonglong)*(uint *)(param_2 + 0x44) * 4;
    fVar11 = _DAT_146163f30;
    fVar12 = _DAT_146163f30;
    fVar13 = _DAT_146163f30;
    fVar14 = _DAT_146163f30;
    fVar15 = _DAT_146159cb0;
    fVar16 = _DAT_146159cb0;
    fVar17 = _DAT_146159cb0;
    fVar18 = _DAT_146159cb0;
    do {
      uVar1 = *(uint *)(lVar4 + -4);
      if (uVar1 != 0x1ffff) {
        uVar5 = *(uint *)(_DAT_14abb6918[5] + (ulonglong)(uVar1 & 0x1ffff) * 4);
        if ((~uVar5 & *(uint *)(_DAT_14abb6918 + 6)) == 0) {
          uVar5 = uVar5 & 0x7fe0000;
          if ((uVar5 == (uVar1 & 0xfffe0000)) && (*_DAT_14abb6918 != 0)) {
            lVar6 = *_DAT_14abb6918 + (ulonglong)((uVar1 & 0x1ffff) * (int)_DAT_14abb6918[1]);
            lVar3 = func_0x000144e591d0(*(undefined4 *)(lVar6 + 0x9c),uVar1 & 0xfffe0000,uVar5,0);
            if (lVar3 != 0) {
              FUN_1450420c0(aauStack_68,lVar6);
              auVar10._0_4_ = *(float *)(param_2 + 0x10) + fVar11;
              auVar10._4_4_ = *(float *)(param_2 + 0x14) + fVar12;
              auVar10._8_4_ = *(float *)(param_2 + 0x18) + fVar13;
              auVar10._12_4_ = *(float *)(param_2 + 0x1c) + fVar14;
              auVar9._0_4_ = *(float *)(param_2 + 0x10) + fVar15;
              auVar9._4_4_ = *(float *)(param_2 + 0x14) + fVar16;
              auVar9._8_4_ = *(float *)(param_2 + 0x18) + fVar17;
              auVar9._12_4_ = *(float *)(param_2 + 0x1c) + fVar18;
              auVar10 = vcmpps_avx(auVar10,aauStack_68[0],2);
              auVar9 = vcmpps_avx(aauStack_68[0],auVar9,2);
              auVar8._0_4_ = auVar10._0_4_ & auVar9._0_4_;
              auVar8._4_4_ = auVar10._4_4_ & auVar9._4_4_;
              auVar8._8_4_ = auVar10._8_4_ & auVar9._8_4_;
              auVar8._12_4_ = auVar10._12_4_ & auVar9._12_4_;
              uVar2 = vmovmskps_avx(auVar8);
              if ((~(byte)uVar2 & 7) != 0) {
                FUN_140189850(*(undefined8 *)(param_1 + 8),lVar3);
                FUN_1401899d0(param_2,lVar4);
              }
              lVar7 = *(longlong *)(param_2 + 0x48);
            }
          }
        }
      }
      lVar4 = lVar4 + -4;
    } while (lVar4 != lVar7);
  }
  return;
}

