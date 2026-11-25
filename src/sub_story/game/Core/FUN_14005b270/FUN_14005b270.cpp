// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14005b270  size: 903 bytes
// Name:    FUN_14005b270
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ee9de0, FUN_140acc3f0, FUN_144ee9d60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14005b270(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  char cVar7;
  byte bVar8;
  longlong lVar9;
  longlong lVar10;
  byte bVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined1 auVar17 [16];
  undefined1 auVar18 [64];
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined1 auStack_6d8 [8];
  float fStack_6d0;
  undefined1 auStack_6c8 [64];
  undefined8 uStack_688;
  undefined8 uStack_680;
  int iStack_5b8;
  int iStack_5b4;
  undefined4 uStack_5a4;
  undefined8 uStack_598;
  float fStack_590;
  undefined4 uStack_584;
  
  bVar11 = *(byte *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x10) = bVar11 & 0xbf;
  uVar12 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0;
  uVar1 = *(undefined4 *)(uVar12 + 0x9c);
  lVar9 = func_0x000144dd1230(uVar1);
  if (lVar9 == 0) {
    *(byte *)(param_1 + 0x10) = bVar11 & 0x9f;
    return;
  }
  if ((*(byte *)(lVar9 + 0x10) & 1) == 0) {
LAB_14005b4bf:
    bVar11 = bVar11 & 0x9f;
  }
  else {
    if ((*(float *)(lVar9 + 0x44) == _DAT_145fc6ed8) &&
       (!NAN(*(float *)(lVar9 + 0x44)) && !NAN(_DAT_145fc6ed8))) goto LAB_14005b4bf;
    if (*(char *)(uVar12 + 0x30) != '\x03') {
      plVar3 = *(longlong **)(uVar12 + 0x38);
      if (plVar3 != (longlong *)0x0) {
        auVar16 = ZEXT1664(*(undefined1 (*) [16])(param_1 + 0x80));
        auVar15 = ZEXT1664(*(undefined1 (*) [16])(param_1 + 0x90));
        iVar2 = *(int *)(lVar9 + 0x14);
        if (*(longlong *)(param_1 + 0xa0) == 0) {
          auVar17 = ZEXT816(0);
        }
        else {
          auVar17 = *(undefined1 (*) [16])(*(longlong *)(param_1 + 0xa0) + 0x50);
        }
        auVar18 = ZEXT1664(auVar17);
        func_0x000144e43930(plVar3,&uStack_598);
        fVar13 = (float)(**(code **)(*plVar3 + 0x38))(plVar3,uStack_598,0,0,0);
        auVar17 = vshufpd_avx(auVar16._0_16_,auVar16._0_16_,1);
        auVar4 = vshufpd_avx(auVar15._0_16_,auVar15._0_16_,1);
        auVar5 = vshufpd_avx(auVar18._0_16_,auVar18._0_16_,1);
        fVar14 = _DAT_1461738a8;
        if (iVar2 != 2) {
          fVar14 = *(float *)(&UNK_1461738a0 + (ulonglong)(iVar2 == 1) * 4);
        }
        if (fVar14 * fVar13 + auVar17._0_4_ + auVar4._0_4_ + auVar5._0_4_ <= 0.0) {
          *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xdf;
        }
        else {
          FUN_144ee9d60(&uStack_598,uVar12);
          cVar7 = FUN_144ee9de0(uStack_598,uStack_584);
          bVar11 = 0x20;
          if (cVar7 != '\0') {
            FUN_140acc3f0(&uStack_598,auStack_6c8,1);
            if ((((iStack_5b8 == 0) || (iStack_5b4 == 0)) ||
                (lVar10 = func_0x00014507deb0(), lVar10 == 0)) ||
               (*(char *)(lVar10 + 0x156) != '\x03')) {
              bVar11 = 0x20;
            }
            else {
              uStack_6e8 = uStack_688;
              uStack_6e0 = uStack_680;
              func_0x000140aa8120(&uStack_6e8,uStack_5a4,auStack_6d8);
              bVar11 = (fStack_6d0 <= _DAT_145fc6edc) << 5;
            }
            func_0x0001451f5440(auStack_6c8);
          }
          *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xdf | bVar11;
        }
        goto LAB_14005b3db;
      }
      goto LAB_14005b4bf;
    }
    lVar10 = func_0x000144e63d10(uVar1);
    if (lVar10 == 0) {
      bVar8 = 0;
    }
    else {
      bVar8 = *(byte *)(lVar10 + 0x234) >> 1 & 0x20;
    }
    bVar11 = bVar11 & 0x9f | bVar8;
  }
  *(byte *)(param_1 + 0x10) = bVar11;
LAB_14005b3db:
  if (*(char *)(uVar12 + 0x30) == '\x04') {
    if (((*(float *)(lVar9 + 0x44) == _DAT_145fc6ed8) &&
        (!NAN(*(float *)(lVar9 + 0x44)) && !NAN(_DAT_145fc6ed8))) &&
       (plVar3 = *(longlong **)(uVar12 + 0x38), plVar3 != (longlong *)0x0)) {
      fVar14 = *(float *)(param_1 + 0x88);
      func_0x000144e43930(plVar3,&uStack_598);
      fVar13 = (float)(**(code **)(*plVar3 + 0x38))(plVar3,uStack_598,0,0,0);
      *(byte *)(param_1 + 0x10) =
           *(byte *)(param_1 + 0x10) & 0xbf | (fVar14 < fVar13 * _DAT_1461738ac) << 6;
    }
    if ((*(byte *)(lVar9 + 0x10) & 1) != 0) {
      fVar14 = *(float *)(lVar9 + 0x18);
      iVar2 = *(int *)(lVar9 + 0x14);
      fVar13 = _DAT_14615a400;
      fVar6 = _DAT_14615a400;
      if (iVar2 != 0) {
        fVar13 = *(float *)(lVar9 + 0x1c);
        fVar6 = fVar14;
      }
      if (fVar6 <= fVar13) {
        uStack_6f8 = *(undefined8 *)(uVar12 + 0x70);
        uStack_6f0 = *(undefined8 *)(uVar12 + 0x78);
        func_0x000144dc3790(&uStack_6f8,&uStack_598);
        if (iVar2 == 0) {
          fVar14 = _DAT_14615a400;
        }
        if ((fStack_590 - *(float *)(param_1 + 0xe0)) - fVar14 < _DAT_145fc7020) {
          *(undefined4 *)(param_1 + 0x1c) = _DAT_14abbef40;
        }
      }
    }
  }
  return;
}

