// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401521b0  size: 467 bytes
// Name:    FUN_1401521b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f66310, FUN_144fbbec0, FUN_140080290, FUN_1452ca400
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401521b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  uVar8 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0;
  if ((*(uint *)(uVar8 + 0xb4) & 0x3e) == 0x2a) {
    cVar4 = FUN_144f66310(uVar8);
    uVar11 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
    if (cVar4 != '\0') goto LAB_140152354;
  }
  cVar4 = FUN_1452ca400(7,uVar8);
  if ((cVar4 == '\0') && (*(char *)(param_1 + 0x1e) != '\x01')) {
    return;
  }
  lVar1 = *(longlong *)(uVar8 + 0x80);
  if (lVar1 != 0) {
    uVar5 = func_0x000144e3bfa0(uVar8);
    lVar6 = func_0x000144e8f430(uVar5,_DAT_14925497c);
    if (lVar6 != 0) {
      auVar15._8_8_ = 0;
      auVar15._0_8_ = *(ulonglong *)(lVar6 + 0xc);
      auVar14._8_8_ = 0;
      auVar14._0_8_ = *(ulonglong *)(lVar6 + 0x18);
      auVar13._8_8_ = 0;
      auVar13._0_8_ = *(ulonglong *)(lVar6 + 0x24);
      auVar12._8_8_ = 0;
      auVar12._0_8_ = *(ulonglong *)(lVar6 + 0x30);
      uVar9 = (uint)*(short *)(uVar8 + 0x92);
      auVar3 = vmovlhps_avx(ZEXT416(*(uint *)(lVar6 + 8)),auVar15);
      auVar3 = vshufps_avx(auVar3,auVar15,0xd8);
      vinsertps_avx(auVar3,ZEXT416(*(uint *)(lVar6 + 8)),0x30);
      auVar3 = vmovlhps_avx(ZEXT416(*(uint *)(lVar6 + 0x14)),auVar14);
      auVar3 = vshufps_avx(auVar3,auVar14,0xd8);
      vinsertps_avx(auVar3,ZEXT416(*(uint *)(lVar6 + 0x14)),0x30);
      auVar3 = vmovlhps_avx(ZEXT416(*(uint *)(lVar6 + 0x20)),auVar13);
      auVar13 = vshufps_avx(auVar3,auVar13,0xd8);
      auVar3 = vmovlhps_avx(ZEXT416(*(uint *)(lVar6 + 0x2c)),auVar12);
      auVar3 = vshufps_avx(auVar3,auVar12,0xd8);
      vinsertps_avx(auVar13,ZEXT416(*(uint *)(lVar6 + 0x20)),0x30);
      vinsertps_avx(auVar3,ZEXT416(*(uint *)(lVar6 + 0x2c)),0x30);
      FUN_144fbbec0(lVar1,uVar9);
      lVar6 = *(longlong *)(lVar1 + 0x80);
      if ((lVar6 != 0) && (*(char *)(lVar6 + 0x30) == '\f')) {
        uVar7 = 0;
        uVar11 = 0;
        if (*(ushort *)(*(longlong *)(lVar1 + 0x110) + 0x88) <= uVar9) goto LAB_140152354;
        lVar2 = *(longlong *)(lVar6 + 0x150);
        if (*(longlong *)(lVar6 + 0x110) != 0) {
          uVar7 = (uint)*(ushort *)(*(longlong *)(lVar6 + 0x110) + 0x98);
        }
        uVar11 = 0;
        if ((lVar2 == 0) ||
           (iVar10 = (int)*(short *)(*(longlong *)(*(longlong *)(lVar1 + 0x110) + 0x80) +
                                    (ulonglong)uVar9 * 2), (int)uVar7 <= iVar10))
        goto LAB_140152354;
        cVar4 = FUN_140080290(lVar6,8,iVar10);
        if (cVar4 != '\0') {
          FUN_144fbbec0(lVar6,iVar10,lVar2 + (longlong)iVar10 * 0x40);
        }
      }
    }
  }
  uVar11 = 0;
LAB_140152354:
  lVar1 = *(longlong *)(uVar8 + 0x80);
  if (((lVar1 != 0) && ((*(byte *)(lVar1 + 0x94) & 1) != 0)) && (*(short *)(uVar8 + 0x92) != -1)) {
    FUN_1401ddd40(lVar1,7,(int)*(short *)(uVar8 + 0x92),uVar11 & 0xffffffff);
  }
  return;
}

