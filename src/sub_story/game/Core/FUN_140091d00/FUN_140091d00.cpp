// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140091d00  size: 527 bytes
// Name:    FUN_140091d00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145567700, FUN_1426b0b60, FUN_144db7b20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140091d00(undefined4 *param_1,longlong *param_2,byte param_3)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 unaff_RSI;
  ulonglong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [64];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined1 aauStack_68 [2] [16];
  
  lVar2 = param_2[2];
  uVar10 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (lVar2 == 0) goto LAB_140091ef6;
  uVar7 = *(undefined4 *)(lVar2 + 0x9c);
  cVar5 = func_0x000144ecebe0(uVar7);
  if ((((cVar5 == '\0') || (cVar5 = FUN_144db7b20(uVar7), cVar5 != '\0')) ||
      (lVar3 = *param_2, lVar3 == 0)) || (param_2[1] == 0)) goto LAB_140091ef6;
  bVar1 = *(byte *)(param_2 + 4);
  if (((bVar1 == 0 && param_3 == 0) && (lVar8 = FUN_145567700(lVar2), lVar8 != 0)) &&
     (((byte)(*(char *)(lVar8 + 0xfa) - 9U) < 3 || (lVar9 = FUN_145567700(lVar3), lVar8 == lVar9))))
  {
    FUN_1426b0b60(param_2);
    *param_1 = 3;
    goto LAB_140091ef6;
  }
  uVar7 = _DAT_14615ada0;
  if (bVar1 == 0) {
    uVar7 = _DAT_146161700;
  }
  uStack_88 = *(undefined8 *)(lVar3 + 0x70);
  uStack_80 = *(undefined8 *)(lVar3 + 0x78);
  auVar13 = ZEXT1664(CONCAT412(uVar7,CONCAT48(uVar7,CONCAT44(uVar7,uVar7))));
  func_0x000144dc3790(&uStack_88,aauStack_68);
  uStack_98 = *(undefined8 *)(lVar2 + 0x70);
  uStack_90 = *(undefined8 *)(lVar2 + 0x78);
  func_0x000144dc3790(&uStack_98,auStack_78);
  auVar12._0_12_ = ZEXT812(0);
  auVar12._12_4_ = 0;
  auVar4 = vsubps_avx(auStack_78,aauStack_68[0]);
  auVar11._0_4_ = auVar4._0_4_ * auVar4._0_4_;
  auVar11._4_4_ = auVar4._4_4_ * auVar4._4_4_;
  auVar11._8_4_ = auVar4._8_4_ * auVar4._8_4_;
  auVar11._12_4_ = auVar4._12_4_ * auVar4._12_4_;
  auVar4 = vblendps_avx(auVar11,auVar12,8);
  auVar4 = vhaddps_avx(auVar4,auVar4);
  auVar4 = vhaddps_avx(auVar4,auVar4);
  auVar4 = vcmpps_avx(auVar13._0_16_,auVar4,5);
  if ((((SUB161(auVar4 >> 0x1f,0) & 1) == 0 && (SUB161(auVar4 >> 0x3f,0) & 1) == 0) &&
      (SUB161(auVar4 >> 0x5f,0) & 1) == 0) && -1 < auVar4[0xf]) goto LAB_140091ef6;
  switch(*param_1) {
  case 0:
    iVar6 = FUN_14523cfd0(param_2);
    if (iVar6 != 2) {
      if (iVar6 == 0) goto LAB_140091ef6;
      if ((param_3 | *(byte *)(param_2 + 4)) == 1) {
        FUN_14100df40();
        uVar7 = 1;
      }
      else {
        FUN_1426b0dc0(param_2);
        uVar7 = 2;
      }
      *param_1 = uVar7;
    }
    break;
  case 1:
    if ((byte)(param_3 ^ 1 | bVar1) == 1) {
      if (param_3 != 0) {
        FUN_14100df40(param_2);
        goto LAB_140091ef6;
      }
      *param_1 = 2;
    }
    break;
  case 2:
    if (param_3 != 0) goto code_r0x000140091eb4;
    cVar5 = FUN_145252740(param_2);
    if (cVar5 != '\0') {
      *param_1 = 3;
    }
    FUN_1426b0dc0(param_2);
    break;
  case 3:
    if (param_3 == 0) {
      FUN_1426b0b60(param_2);
      goto LAB_140091ef6;
    }
code_r0x000140091eb4:
    *param_1 = 1;
    break;
  default:
    goto LAB_140091ef6;
  }
  uVar10 = 0;
LAB_140091ef6:
  return uVar10 & 0xffffffff;
}

