// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a1ca0  size: 605 bytes
// Name:    FUN_1401a1ca0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14042acc0, FUN_14422ccb0, FUN_140b79480, FUN_1401a19d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401a1ca0(longlong param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  uint *puVar7;
  void *pvVar8;
  byte bVar9;
  byte bVar10;
  bool bVar11;
  byte bVar12;
  bool bVar13;
  uint uVar14;
  uint uVar17;
  undefined8 uVar15;
  ulonglong uVar16;
  uint uVar18;
  uint uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  undefined1 auVar23 [64];
  uint uVar24;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  undefined1 auVar25 [64];
  
  bVar3 = 0;
  cVar2 = FUN_140b79480(0);
  if (cVar2 != '\0') {
    bVar3 = FUN_14042acc0();
  }
  lVar5 = func_0x000145073c10();
  bVar10 = 1;
  if (*(char *)(lVar5 + 0xbef) == '\0') {
    lVar5 = func_0x000145073c10();
    bVar10 = bVar3 | *(byte *)(lVar5 + 0xbee);
  }
  bVar3 = *(byte *)(param_1 + 0x3f6);
  bVar9 = bVar3 * '\x02' & 2;
  *(byte *)(param_1 + 0x3f6) = bVar3 & 0xfd | bVar9;
  lVar5 = *(longlong *)(param_1 + 0x298);
  if ((lVar5 == 0) || ((*(byte *)(lVar5 + 0x34) & 8) == 0)) {
    bVar1 = *(byte *)(param_1 + 0x3f7);
    bVar12 = (bVar3 & 0x60) != 0 & bVar1;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x3f7);
    bVar12 = 1;
  }
  bVar13 = (bool)((bVar3 & 4) >> 2 & bVar1 >> 3 | bVar12);
  bVar11 = (bool)(bVar3 & 1);
  if ((bVar9 != 0) == bVar13) {
    bVar11 = bVar13;
  }
  if (bVar10 == 0) {
    bVar11 = bVar13;
  }
  bVar10 = bVar11 | bVar3 & 0xfc | bVar9;
  *(byte *)(param_1 + 0x3f6) = bVar10;
  bVar3 = FUN_1401a19d0(bVar10);
  bVar3 = bVar3 | bVar10;
  *(byte *)(param_1 + 0x3f6) = bVar3;
  if ((bVar9 == 0) && ((bVar3 & 1) != 0)) {
    if (lVar5 == 0) goto LAB_1401a1ea7;
    lVar5 = *(longlong *)(lVar5 + 0x18);
  }
  else {
    if ((bVar9 == 0) ||
       (((bVar3 & 1) != 0 || (plVar6 = *(longlong **)(param_1 + 0x290), plVar6 == (longlong *)0x0)))
       ) goto LAB_1401a1ea7;
    cVar2 = func_0x000144da4370(*(undefined1 *)(*plVar6 + 0x26));
    if (cVar2 != '\0') {
      *(longlong **)(param_1 + 0x288) = plVar6;
      plVar6 = (longlong *)func_0x000140e77500(plVar6[3],*(undefined1 *)((longlong)plVar6 + 0x34));
      if ((plVar6 != (longlong *)0x0) && ((*(byte *)(param_1 + 0x3f9) & 0x40) != 0)) {
        pvVar8 = (void *)*plVar6;
        puVar7 = (uint *)(**(code **)((longlong)pvVar8 + 0x30))();
        auVar23 = ZEXT464(puVar7[2]);
        uVar14 = *puVar7 ^ _DAT_145fc6f10;
        uVar17 = _DAT_145fc6f10;
        uVar18 = _DAT_145fc6f10;
        uVar19 = _DAT_145fc6f10;
        uVar24 = _DAT_145fc6f10;
        uVar26 = _DAT_145fc6f10;
        uVar27 = _DAT_145fc6f10;
        uVar28 = _DAT_145fc6f10;
        atan2f(plVar6,pvVar8);
        fVar22 = auVar23._0_4_;
        auVar20._0_4_ = (uint)fVar22 ^ uVar24;
        auVar20._4_4_ = auVar23._4_4_ ^ uVar26;
        auVar20._8_4_ = auVar23._8_4_ ^ uVar27;
        auVar20._12_4_ = auVar23._12_4_ ^ uVar28;
        auVar21._0_12_ = ZEXT812(0);
        auVar21._12_4_ = 0;
        auVar20 = vmaxss_avx(auVar20,auVar23._0_16_);
        auVar20 = vcmpss_avx(auVar21,ZEXT416((uint)(auVar20._0_4_ + _DAT_145fc6f48)),2);
        uVar15 = CONCAT44(~auVar20._4_4_ & uVar17,~auVar20._0_4_ & uVar14);
        if (fVar22 <= _DAT_145fc6f48) {
          uVar16 = (ulonglong)_DAT_14615a1a0;
        }
        else if (_DAT_145fc6ed8 <= fVar22) {
          uVar16 = (ulonglong)_DAT_146159bdc;
        }
        else {
          auVar25 = ZEXT1664(CONCAT412(~auVar20._12_4_ & uVar19,
                                       CONCAT48(~auVar20._8_4_ & uVar18,uVar15)));
          uVar16 = func_0x000145f40890(auVar23._0_8_);
          uVar15 = auVar25._0_8_;
        }
        FUN_14422ccb0(uVar15,uVar16,0,3,0);
      }
      goto LAB_1401a1ea7;
    }
    lVar5 = plVar6[3];
  }
  func_0x000145dede90(lVar5);
LAB_1401a1ea7:
  if (((*(byte *)(param_1 + 0x3f6) >> 1 | ~*(byte *)(param_1 + 0x3f6)) & 1) == 0) {
    uVar4 = func_0x000144ed0ab0(0);
    *(undefined4 *)(param_1 + 0x3d8) = uVar4;
    if ((((*(byte *)(param_1 + 0x3f7) & 8) != 0) && ((*(byte *)(param_1 + 0x3f7) & 0x10) != 0)) &&
       ((*(byte *)(param_1 + 0x3f6) & 4) != 0)) {
      *(undefined4 *)(param_1 + 0x3dc) = uVar4;
    }
  }
  return;
}

