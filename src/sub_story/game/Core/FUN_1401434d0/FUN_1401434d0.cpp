// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401434d0  size: 455 bytes
// Name:    FUN_1401434d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401434d0(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  byte bVar3;
  undefined1 (*pauVar4) [32];
  ulonglong *puVar5;
  ulonglong uVar6;
  bool bVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [16];
  undefined1 auVar10 [32];
  undefined1 auVar11 [16];
  
  func_0x0001421c33e0();
  func_0x0001421c33f0(param_1);
  func_0x0001421c3390(param_1);
  func_0x0001421c33a0(param_1);
  func_0x0001421c33b0(param_1);
  func_0x0001421c33c0(param_1);
  func_0x0001421c33d0(param_1);
  func_0x0001421c3320(param_1);
  func_0x0001421c3330(param_1);
  func_0x0001421c3340(param_1);
  func_0x0001421c3350(param_1);
  func_0x0001421c3360(param_1);
  func_0x0001421c3370(param_1);
  func_0x0001421c3380(param_1);
  func_0x0001421c32c0(param_1);
  func_0x0001421c32d0(param_1);
  func_0x0001421c32e0(param_1);
  func_0x0001421c32f0(param_1);
  func_0x0001421c3300(param_1);
  func_0x0001421c3310();
  lVar2 = 0;
  bVar3 = 0;
  do {
    uVar6 = 0;
    pauVar4 = (undefined1 (*) [32])(lVar2 * 0x40 + param_1);
    puVar5 = (ulonglong *)(param_1 + 0x38);
    bVar1 = bVar3;
    do {
      if ((*(ulonglong *)(*pauVar4 + (uVar6 >> 6 & 0x3ffffff) * 8) >> (uVar6 & 0x3f) & 1) != 0) {
        if ((((((~*(ulonglong *)*pauVar4 & puVar5[-7]) != 0) ||
              ((*(ulonglong *)(*pauVar4 + 8) & puVar5[-6]) != puVar5[-6])) ||
             ((~*(ulonglong *)(*pauVar4 + 0x10) & puVar5[-5]) != 0)) ||
            (((~*(ulonglong *)(*pauVar4 + 0x18) & puVar5[-4]) != 0 ||
             ((~*(ulonglong *)pauVar4[1] & puVar5[-3]) != 0)))) ||
           (((~*(ulonglong *)(pauVar4[1] + 8) & puVar5[-2]) != 0 ||
            (((~*(ulonglong *)(pauVar4[1] + 0x10) & puVar5[-1]) != 0 ||
             ((~*(ulonglong *)(pauVar4[1] + 0x18) & *puVar5) != 0)))))) {
          auVar8._16_16_ = ZEXT116(1) * *(undefined1 (*) [16])(puVar5 + -5);
          auVar8._0_16_ =
               ZEXT116(0) * *(undefined1 (*) [16])(puVar5 + -5) |
               ZEXT116(1) * *(undefined1 (*) [16])(puVar5 + -7);
          bVar1 = 1;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = *(ulonglong *)(*pauVar4 + 8);
          auVar11._8_8_ = 0;
          auVar11._0_8_ = *(ulonglong *)*pauVar4;
          auVar9 = vpunpcklqdq_avx(auVar11,auVar9);
          auVar10._16_16_ = ZEXT116(1) * *(undefined1 (*) [16])(*pauVar4 + 0x10);
          auVar10._0_16_ =
               ZEXT116(0) * *(undefined1 (*) [16])(*pauVar4 + 0x10) | ZEXT116(1) * auVar9;
          auVar8 = vpor_avx2(auVar10,auVar8);
          *pauVar4 = auVar8;
          auVar8 = vpor_avx2(pauVar4[1],*(undefined1 (*) [32])(puVar5 + -3));
          pauVar4[1] = auVar8;
        }
      }
      uVar6 = uVar6 + 1;
      puVar5 = puVar5 + 8;
    } while (uVar6 != 0x1d3);
    bVar7 = lVar2 + 1 != 0x1d3;
    lVar2 = lVar2 + 1;
    if (!bVar7) {
      lVar2 = 0;
    }
    bVar3 = bVar1 & bVar7;
  } while ((bool)(bVar7 | bVar1));
  return;
}

