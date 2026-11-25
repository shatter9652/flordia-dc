// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140168500  size: 1353 bytes
// Name:    FUN_140168500
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145177d50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140168500(longlong param_1,ushort *param_2,longlong param_3,longlong *param_4,uint param_5,
                  undefined8 param_6,undefined8 param_7)

{
  longlong lVar1;
  longlong *plVar2;
  float fVar3;
  undefined1 auVar4 [16];
  byte bVar5;
  undefined1 auVar6 [16];
  byte bVar7;
  longlong lVar8;
  longlong lVar9;
  ushort uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  ushort uStack_102;
  ushort *puStack_100;
  longlong alStack_f8 [4];
  longlong lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  longlong lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  
  uVar12 = (ulonglong)param_5;
  lVar1 = param_1 + 0x210;
  lStack_98 = param_4[uVar12 * 2];
  lStack_90 = (param_4 + uVar12 * 2)[1];
  uVar11 = (ulonglong)((1 - param_5) * 0x10);
  plVar2 = (longlong *)((longlong)param_4 + uVar11);
  lVar8 = FUN_145177d50(*(longlong *)(param_1 + 0x240) + 0x4000,&lStack_98,param_6,
                        *(undefined4 *)(param_1 + 0xd0 + uVar12 * 0xb8));
  *(undefined8 *)(param_3 + 0x30) = *(undefined8 *)(param_3 + 0x40);
  *(undefined8 *)(param_3 + 0x38) = *(undefined8 *)(param_3 + 0x48);
  alStack_f8[0] = *param_4;
  alStack_f8[1] = param_4[1];
  alStack_f8[2] = param_4[2];
  alStack_f8[3] = param_4[3];
  bVar5 = *(byte *)(param_1 + 0x275);
  *param_2 = 0;
  lVar9 = *(longlong *)((longlong)param_4 + uVar11);
  plVar13 = *(longlong **)(lVar8 + 0x20);
  fVar3 = *(float *)(lVar9 + 0x3c);
  auVar15 = ZEXT464((uint)fVar3);
  puStack_100 = param_2;
  if (((fVar3 == _DAT_145fc6f48) && (!NAN(fVar3) && !NAN(_DAT_145fc6f48))) ||
     (*(char *)(*(longlong *)(param_4[uVar12 * 2] + 0x40) + 0x142) == '\0')) {
    if (plVar13 == (longlong *)0x0) {
      return;
    }
    if (bVar5 == 0) {
      do {
        alStack_f8[uVar12 * 2] = (longlong)(plVar13 + 4);
        alStack_f8[uVar12 * 2 + 1] = (longlong)(plVar13 + 0x10);
        lStack_d8 = *(undefined8 *)plVar2[1];
        uStack_d0 = ((undefined8 *)plVar2[1])[1];
        (**(code **)(*plVar13 + 0x20))
                  (plVar13,&uStack_102,lVar1,param_3,alStack_f8 + 4,alStack_f8,param_4,param_5,
                   param_7);
        uVar10 = uStack_102;
        if ((uStack_102 >> 8 & 1) != 0) break;
        plVar13 = (longlong *)plVar13[2];
      } while (plVar13 != (longlong *)0x0);
    }
    else {
      do {
        alStack_f8[uVar12 * 2] = (longlong)(plVar13 + 4);
        alStack_f8[uVar12 * 2 + 1] = (longlong)(plVar13 + 0x10);
        lStack_d8 = *(undefined8 *)plVar2[1];
        uStack_d0 = ((undefined8 *)plVar2[1])[1];
        (**(code **)(*plVar13 + 0x20))
                  (plVar13,&uStack_102,lVar1,param_3,alStack_f8 + 4,alStack_f8,param_4,param_5,
                   param_7);
        uVar10 = uStack_102;
        if (((uStack_102 >> 8 & 1) != 0) || ((uStack_102 & 1) != 0)) break;
        plVar13 = (longlong *)plVar13[2];
      } while (plVar13 != (longlong *)0x0);
    }
  }
  else {
    if (plVar13 != (longlong *)0x0) {
      auVar16 = ZEXT464(_DAT_14615b74c);
      auVar17 = ZEXT1264(ZEXT812(0));
      lStack_b0 = lVar8;
      do {
        lVar9 = plVar13[0xc];
        auVar4 = *(undefined1 (*) [16])(lVar9 + 0x20);
        auVar6 = vmaxss_avx(auVar16._0_16_,ZEXT416((uint)(*(float *)(lVar9 + 0x2c) - auVar15._0_4_))
                           );
        auVar14._0_4_ = auVar6._0_4_;
        auVar14._4_4_ = auVar14._0_4_;
        auVar14._8_4_ = auVar14._0_4_;
        auVar14._12_4_ = auVar14._0_4_;
        auVar6 = vcmpps_avx(auVar17._0_16_,auVar14,2);
        if (auVar6 == (undefined1  [16])0x0) {
          *(undefined4 *)(lVar9 + 0x2c) = 0x3d23d70a;
        }
        else {
          auVar6 = vblendps_avx(auVar4,auVar14,8);
          *(undefined1 (*) [16])(lVar9 + 0x20) = auVar6;
        }
        alStack_f8[uVar12 * 2] = (longlong)(plVar13 + 4);
        alStack_f8[uVar12 * 2 + 1] = (longlong)(plVar13 + 0x10);
        uStack_a8 = *(undefined8 *)plVar2[1];
        uStack_a0 = ((undefined8 *)plVar2[1])[1];
        auVar15 = ZEXT1664(auVar15._0_16_);
        auVar16 = ZEXT1664(auVar16._0_16_);
        auVar17 = ZEXT1664(auVar17._0_16_);
        auVar18 = ZEXT1664(auVar4);
        (**(code **)(*plVar13 + 0x20))
                  (plVar13,&uStack_102,lVar1,param_3,&uStack_a8,alStack_f8,param_4,param_5,param_7);
        auVar4 = vcmpps_avx(auVar17._0_16_,auVar18._0_16_,2);
        lVar9 = plVar13[0xc];
        auVar4 = vshufps_avx(auVar4,auVar4,0xff);
        if (auVar4 == (undefined1  [16])0x0) {
          *(undefined4 *)(lVar9 + 0x2c) = 0x3d23d70a;
        }
        else {
          auVar4 = vblendps_avx(auVar18._0_16_,*(undefined1 (*) [16])(lVar9 + 0x20),7);
          *(undefined1 (*) [16])(lVar9 + 0x20) = auVar4;
        }
        bVar7 = (byte)uStack_102 & bVar5;
      } while (((~bVar7 & (uStack_102 >> 8 & 1) == 0) != 0) &&
              (plVar13 = (longlong *)plVar13[2], plVar13 != (longlong *)0x0));
      *puStack_100 = uStack_102;
      if (((bVar7 | (byte)(uStack_102 >> 8)) & 1) != 0) {
        return;
      }
      lVar9 = *plVar2;
      lVar8 = lStack_b0;
    }
    if ((*(byte *)(lVar9 + 0x2c) & 4) == 0) {
      return;
    }
    plVar13 = *(longlong **)(lVar8 + 0x20);
    if (plVar13 == (longlong *)0x0) {
      return;
    }
    if (bVar5 == 0) {
      do {
        alStack_f8[uVar12 * 2] = (longlong)(plVar13 + 4);
        alStack_f8[uVar12 * 2 + 1] = (longlong)(plVar13 + 0x10);
        (**(code **)(*plVar13 + 8))(plVar13,1);
        uStack_c8 = *(undefined8 *)plVar2[1];
        uStack_c0 = ((undefined8 *)plVar2[1])[1];
        (**(code **)(*plVar13 + 0x20))
                  (plVar13,&uStack_102,lVar1,param_3,&uStack_c8,alStack_f8,param_4,param_5,param_7);
        uVar10 = uStack_102;
        (**(code **)(*plVar13 + 8))(plVar13,0);
        if ((uVar10 >> 8 & 1) != 0) break;
        plVar13 = (longlong *)plVar13[2];
      } while (plVar13 != (longlong *)0x0);
    }
    else {
      do {
        alStack_f8[uVar12 * 2] = (longlong)(plVar13 + 4);
        alStack_f8[uVar12 * 2 + 1] = (longlong)(plVar13 + 0x10);
        (**(code **)(*plVar13 + 8))(plVar13,1);
        uStack_c8 = *(undefined8 *)plVar2[1];
        uStack_c0 = ((undefined8 *)plVar2[1])[1];
        (**(code **)(*plVar13 + 0x20))
                  (plVar13,&uStack_102,lVar1,param_3,&uStack_c8,alStack_f8,param_4,param_5,param_7);
        uVar10 = uStack_102;
        (**(code **)(*plVar13 + 8))(plVar13,0);
        if (((uVar10 >> 8 & 1) != 0) || ((uVar10 & 1) != 0)) break;
        plVar13 = (longlong *)plVar13[2];
      } while (plVar13 != (longlong *)0x0);
    }
  }
  *puStack_100 = uVar10;
  return;
}

