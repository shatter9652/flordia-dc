// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f8c10  size: 522 bytes
// Name:    FUN_1400f8c10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145024b40, FUN_144f93d60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1400f8c10(undefined8 *param_1,int *param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong unaff_GS_OFFSET;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined *puStack_330;
  longlong lStack_328;
  undefined1 uStack_320;
  undefined1 auStack_310 [72];
  undefined1 auStack_2c8 [16];
  code *pcStack_2b8;
  int *apiStack_2b0 [10];
  code *pcStack_260;
  undefined *puStack_258;
  code *pcStack_250;
  undefined1 auStack_248 [32];
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 uStack_210;
  undefined4 uStack_20c;
  undefined1 auStack_208 [16];
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  
  bVar4 = false;
  if (((*param_2 == 0) && (param_2[1] == 0)) && (*(longlong *)(param_2 + 4) == 0)) {
    bVar4 = param_2[2] == 0;
  }
  if (((bVar4) && (param_2[6] == 0)) &&
     ((param_2[7] == 0 && ((*(longlong *)(param_2 + 8) == 0 && (param_2[10] == 0)))))) {
    auVar5._0_12_ = ZEXT812(0);
    auVar5._12_4_ = 0;
    auVar5 = vcmpps_avx(auVar5,*(undefined1 (*) [16])(param_2 + 0xc),0);
    uVar1 = vmovmskps_avx(auVar5);
    if (((~(byte)uVar1 & 7) == 0) && ((char)param_2[0x10] == '\0')) {
      uVar3 = 0;
      goto LAB_1400f8dd9;
    }
  }
  auStack_248 = ZEXT1232(ZEXT812(0));
  uStack_228 = *param_1;
  uStack_220 = param_1[1];
  uStack_218 = 0;
  uStack_210 = 0;
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  auStack_2c8._0_12_ = ZEXT812(0);
  auStack_2c8._12_4_ = 0;
  uStack_1f0 = 0x20000006d;
  lStack_328 = 0;
  uStack_320 = 1;
  puStack_330 = &UNK_1466d3e00;
  pcStack_2b8 = (code *)0x0;
  uStack_1f8 = 0;
  uStack_20c = 0x20;
  uStack_1e8 = _DAT_14ab76d7c;
  if (apiStack_2b0 != (int **)0x0) {
    apiStack_2b0[0] = param_2;
  }
  pcStack_260 = FUN_142d01510;
  puStack_258 = &UNK_1401167b0;
  pcStack_250 = (code *)&SUB_140004380;
  auStack_208 = auStack_2c8;
  FUN_145024b40(auStack_248,&puStack_330);
  if (lStack_328 == 0) {
LAB_1400f8da4:
    uVar3 = 0;
  }
  else {
    lVar2 = FUN_144f93d60(*(undefined4 *)(lStack_328 + 0x24),*(undefined8 *)(lStack_328 + 0x28),5);
    if (lVar2 == 0) goto LAB_1400f8da4;
    lVar2 = func_0x000142d011c0(*(undefined4 *)(lVar2 + 0x8c));
    if (lVar2 == 0) goto LAB_1400f8da4;
    uVar3 = CONCAT71((int7)((ulonglong)&puStack_330 >> 8),1);
    if (param_3 != (longlong *)0x0) {
      *param_3 = lVar2;
    }
  }
  puStack_330 = &UNK_1466d3e00;
  if (pcStack_250 != (code *)0x0) {
    (*pcStack_250)(apiStack_2b0);
  }
  if (pcStack_2b8 != (code *)0x0) {
    (*pcStack_2b8)(auStack_310);
  }
LAB_1400f8dd9:
  return uVar3 & 0xffffffff;
}

