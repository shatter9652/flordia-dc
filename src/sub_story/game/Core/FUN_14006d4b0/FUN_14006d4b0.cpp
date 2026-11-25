// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006d4b0  size: 821 bytes
// Name:    FUN_14006d4b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1409013e0, FUN_1445538b0, FUN_144f82240
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14006d4b0(longlong *param_1,char param_2)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  bool bVar8;
  char cVar9;
  byte bVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  byte bVar14;
  uint *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined8 uVar20;
  
  lVar5 = *param_1;
  if ((ulonglong)*(uint *)(lVar5 + 0x6c) != 0) {
    lVar16 = *(longlong *)(lVar5 + 0x70);
    lVar2 = lVar16 + (ulonglong)*(uint *)(lVar5 + 0x6c) * 0x28;
    do {
      bVar14 = *(byte *)(lVar16 + 0x24);
      if (((ulonglong)bVar14 != 0x40) &&
         (((*(ulonglong *)(param_1[1] + (ulonglong)(bVar14 >> 6) * 8) >> ((ulonglong)bVar14 & 0x3f)
           & 1) != 0) == (bool)param_2)) {
        lVar13 = *(longlong *)(lVar16 + 8);
        uVar19 = (ulonglong)*(uint *)(lVar13 + 0x74);
        if (uVar19 != 0) {
          uVar17 = *(ulonglong *)(lVar5 + 8) & 0xfffffffffffffff0;
          lVar11 = func_0x000144fcff50(*(undefined4 *)(uVar17 + 0x9c));
          if (lVar11 == 0) {
            return;
          }
          puVar15 = *(uint **)(lVar13 + 0x78);
          puVar1 = puVar15 + uVar19 * 3;
          do {
            uVar3 = *puVar15;
            plVar12 = (longlong *)func_0x000140562f00(lVar11,(ulonglong)uVar3);
            if (plVar12 == (longlong *)0x0) {
              lVar13 = func_0x000144d9fa60(*(undefined4 *)(uVar17 + 0x9c));
              if ((lVar13 != 0) && (lVar13 = *(longlong *)(lVar13 + 0x30), lVar13 != 0)) {
                lVar6 = (ulonglong)((uint)DAT_14abc3b18 * 2) * 3;
                bVar14 = *(byte *)(lVar13 + 0x18 + lVar6);
                if ((((bVar14 != 0x1e) ||
                     (((bVar14 = *(byte *)(lVar13 + 0x19 + lVar6), bVar14 != 0x1e ||
                       (bVar14 = *(byte *)(lVar13 + 0x1a + lVar6), bVar14 != 0x1e)) ||
                      (bVar14 = *(byte *)(lVar13 + 0x1b + lVar6), bVar14 != 0x1e)))) ||
                    ((bVar14 = *(byte *)(lVar13 + 0x1c + lVar6), bVar14 != 0x1e ||
                     (bVar14 = *(byte *)(lVar13 + 0x1d + lVar6), bVar14 != 0x1e)))) &&
                   (lVar13 = *(longlong *)(lVar13 + 0xa0 + (ulonglong)bVar14 * 8), lVar13 != 0)) {
                  uVar19 = (ulonglong)uVar3 | 0x2deefadd00000000;
                  if ((*(ulonglong *)(param_1[1] + (ulonglong)(*(byte *)(lVar16 + 0x24) >> 6) * 8)
                       >> ((ulonglong)*(byte *)(lVar16 + 0x24) & 0x3f) & 1) == 0) {
                    FUN_144f82240(lVar13 + 0xa8,uVar19,0);
                    *(byte *)(lVar16 + 0x25) = *(byte *)(lVar16 + 0x25) & 0xbf;
                  }
                  else {
                    auVar7 = vcvtph2ps_f16c(ZEXT216((ushort)puVar15[1]));
                    FUN_144f82240(lVar13 + 0xa8,uVar19,auVar7._0_8_);
                    *(byte *)(lVar16 + 0x25) = *(byte *)(lVar16 + 0x25) | 0x40;
                  }
                }
              }
            }
            else {
              cVar9 = (**(code **)(*plVar12 + 0x40))(plVar12,0x4e711233);
              if (cVar9 != '\0') {
                bVar14 = *(byte *)(lVar16 + 0x25);
                auVar7 = vcvtph2ps_f16c(ZEXT216((ushort)puVar15[2]));
                bVar8 = auVar7._0_4_ < *(float *)((longlong)plVar12 + 0xfc);
                bVar10 = bVar14 & 0x7f | bVar8 << 7;
                *(byte *)(lVar16 + 0x25) = bVar10;
                if (-1 < (char)bVar14 == bVar8) {
                  *(byte *)(lVar5 + 0x60) = *(byte *)(lVar5 + 0x60) | 0x40;
                  bVar10 = *(byte *)(lVar16 + 0x25);
                }
                *(byte *)(lVar16 + 0x25) = bVar10 & 0xbf | (char)plVar12[1] << 6;
                lVar6 = param_1[2];
                iVar4 = *(int *)((longlong)plVar12 + 0xc);
                uVar3 = *(uint *)(lVar6 + 4);
                lVar13 = (ulonglong)uVar3 * 4;
                if ((ulonglong)uVar3 != 0) {
                  lVar18 = 0;
                  do {
                    if (*(int *)(lVar6 + 8 + lVar18) == iVar4) goto LAB_14006d7b8;
                    lVar18 = lVar18 + 4;
                  } while (lVar13 - lVar18 != 0);
                }
                *(uint *)(lVar6 + 4) = uVar3 + 1;
                *(int *)(lVar6 + 8 + lVar13) = iVar4;
                lVar13 = plVar12[1];
                iVar4 = *(int *)((longlong)plVar12 + 0xc);
                if ((*(ulonglong *)(param_1[1] + (ulonglong)(*(byte *)(lVar16 + 0x24) >> 6) * 8) >>
                     ((ulonglong)*(byte *)(lVar16 + 0x24) & 0x3f) & 1) == 0) {
                  uVar20 = 0;
                  if ((iVar4 != -0x63a180c9) || ((*(byte *)(lVar5 + 0x62) & 1) == 0))
                  goto LAB_14006d663;
                }
                else {
                  auVar7 = vcvtph2ps_f16c(ZEXT216(*(ushort *)((longlong)puVar15 + 6)));
                  uVar20 = auVar7._0_8_;
LAB_14006d663:
                  vcvtph2ps_f16c(ZEXT216((ushort)puVar15[1]));
                  FUN_1409013e0(plVar12,uVar20);
                }
                if (((iVar4 == -0x63a180c9) && ((char)lVar13 == '\0')) &&
                   ((char)plVar12[1] == '\x01')) {
                  FUN_1445538b0(uVar17,plVar12);
                }
              }
            }
LAB_14006d7b8:
            puVar15 = puVar15 + 3;
          } while (puVar15 != puVar1);
        }
      }
      lVar16 = lVar16 + 0x28;
    } while (lVar16 != lVar2);
  }
  return;
}

