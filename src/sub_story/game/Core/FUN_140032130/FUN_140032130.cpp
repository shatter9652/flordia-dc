// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140032130  size: 1005 bytes
// Name:    FUN_140032130
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_142484aa0, FUN_140188430
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140032130(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  byte bVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  longlong *plVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lStack_48;
  
  lVar9 = *(longlong *)(param_1 + 0x12328);
  plVar11 = *(longlong **)(param_1 + 0x127c8);
  if (plVar11 == (longlong *)0x0) {
    FUN_140188430(param_1 + 0x12780);
    plVar11 = *(longlong **)(param_1 + 0x127c8);
  }
  lVar14 = 0x6430;
  do {
    uVar13 = (ulonglong)*(byte *)(lVar9 + -0x63e0 + lVar14);
    if (uVar13 != 0xff) {
      lVar1 = *(longlong *)(lVar9 + -0x32150 + lVar14 * 8);
      lVar12 = *(longlong *)(param_1 + -0x20 + lVar14 * 8);
      if (((param_2 >> (lVar14 - 0x6430U & 0x3f) & 0x1011) == 0) &&
         (lVar3 = *(longlong *)(param_1 + lVar14 * 8), lVar3 != 0)) {
        if (((uint)param_2 >> 0x10 & 1) != 0) {
          puVar2 = (uint *)plVar11[3];
          if (puVar2 < (uint *)plVar11[6]) {
            uVar7 = *(uint *)((longlong)plVar11 + uVar13 * 4 + 0x144);
            if (uVar7 < 0x40000000) {
              *(undefined1 *)(plVar11 + 0x28) = 1;
              uVar10 = uVar7;
            }
            else {
              uVar10 = uVar7 + 0x400;
              if (0xe0ff < (uVar7 & 0xff00)) {
                uVar10 = uVar7;
              }
              if ((*(byte *)(plVar11 + 0xa9) & 3) == 0) {
                uVar10 = uVar7;
              }
            }
            *puVar2 = uVar10;
            puVar2[1] = (uint)lVar3;
            plVar11[3] = (longlong)(puVar2 + 2);
          }
          else {
            (**(code **)(*plVar11 + 0x120))(plVar11);
          }
        }
      }
      else {
        if (lVar12 == 0) {
          if (*(short *)(lVar1 + 8) == 0) goto LAB_140032206;
          FUN_142484aa0(param_1 + 0x12780,&lStack_48);
          lVar12 = lStack_48;
          func_0x000144d9efc0(param_1,lVar1,lStack_48);
          lVar12 = lVar12 + _DAT_1475e73b0;
        }
        *(longlong *)(param_1 + lVar14 * 8) = lVar12;
        uVar13 = (ulonglong)*(byte *)(lVar9 + -0x63e0 + lVar14);
        puVar2 = (uint *)plVar11[3];
        if (puVar2 < (uint *)plVar11[6]) {
          uVar7 = *(uint *)((longlong)plVar11 + uVar13 * 4 + 0x144);
          if (uVar7 < 0x40000000) {
            *(undefined1 *)(plVar11 + 0x28) = 1;
            uVar10 = uVar7;
          }
          else {
            uVar10 = uVar7 + 0x400;
            if (0xe0ff < (uVar7 & 0xff00)) {
              uVar10 = uVar7;
            }
            if ((*(byte *)(plVar11 + 0xa9) & 3) == 0) {
              uVar10 = uVar7;
            }
          }
          *puVar2 = uVar10;
          puVar2[1] = (uint)lVar12;
          plVar11[3] = (longlong)(puVar2 + 2);
        }
        else {
          (**(code **)(*plVar11 + 0x120))(plVar11,uVar13,lVar12);
        }
      }
    }
LAB_140032206:
    lVar14 = lVar14 + 1;
    if (lVar14 == 0x6434) {
      if (((param_2 >> 0x24 & 1) != 0) && (bVar5 = *(byte *)(lVar9 + 0x59), bVar5 != 0)) {
        uVar13 = 0;
        do {
          uVar4 = *(undefined8 *)(param_1 + 0xda40 + uVar13 * 8);
          puVar2 = (uint *)plVar11[3];
          if (puVar2 < (uint *)plVar11[6]) {
            uVar7 = *(uint *)((longlong)plVar11 +
                             (*(byte *)(lVar9 + 0x58) + uVar13 & 0xffffffff) * 4 + 0x144);
            if (uVar7 < 0x40000000) {
              *(undefined1 *)(plVar11 + 0x28) = 1;
            }
            else {
              uVar10 = uVar7 + 0x100;
              uVar7 = uVar7 + 0x500;
              if (0xe0ff < (uVar10 & 0xff00)) {
                uVar7 = uVar10;
              }
              if ((*(byte *)(plVar11 + 0xa9) & 3) == 0) {
                uVar7 = uVar10;
              }
            }
            *puVar2 = uVar7;
            *(undefined8 *)(puVar2 + 1) = uVar4;
            plVar11[3] = (longlong)(puVar2 + 3);
          }
          else {
            (**(code **)(*plVar11 + 0x160))(plVar11);
            bVar5 = *(byte *)(lVar9 + 0x59);
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < bVar5);
      }
      if (((param_2 >> 0x25 & 1) != 0) && (bVar5 = *(byte *)(lVar9 + 0x5b), bVar5 != 0)) {
        uVar13 = 0;
        do {
          uVar4 = *(undefined8 *)(param_1 + 0xda80 + uVar13 * 8);
          puVar2 = (uint *)plVar11[3];
          if (puVar2 < (uint *)plVar11[6]) {
            uVar7 = *(uint *)((longlong)plVar11 +
                             (*(byte *)(lVar9 + 0x5a) + uVar13 & 0xffffffff) * 4 + 0x144);
            if (uVar7 < 0x40000000) {
              *(undefined1 *)(plVar11 + 0x28) = 1;
            }
            else {
              uVar10 = uVar7 + 0x100;
              uVar7 = uVar7 + 0x500;
              if (0xe0ff < (uVar10 & 0xff00)) {
                uVar7 = uVar10;
              }
              if ((*(byte *)(plVar11 + 0xa9) & 3) == 0) {
                uVar7 = uVar10;
              }
            }
            *puVar2 = uVar7;
            *(undefined8 *)(puVar2 + 1) = uVar4;
            plVar11[3] = (longlong)(puVar2 + 3);
          }
          else {
            (**(code **)(*plVar11 + 0x170))(plVar11);
            bVar5 = *(byte *)(lVar9 + 0x5b);
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < bVar5);
      }
      if (((param_2 >> 0x26 & 1) != 0) && (bVar5 = *(byte *)(lVar9 + 0x57), bVar5 != 0)) {
        piVar6 = (int *)plVar11[3];
        if (piVar6 < (int *)plVar11[6]) {
          uVar7 = *(uint *)((longlong)plVar11 + (ulonglong)*(byte *)(lVar9 + 0x56) * 4 + 0x144);
          uVar10 = (uint)bVar5;
          if (uVar7 < 0x40000000) {
            *(undefined1 *)(plVar11 + 0x28) = 1;
            uVar8 = uVar7;
          }
          else {
            if (uVar10 != 1) {
              if (uVar10 == 4) {
                uVar7 = uVar7 + 0x200;
              }
              else if (bVar5 == 2) {
                uVar7 = uVar7 + 0x100;
              }
              else {
                uVar7 = uVar7 + 0x300;
              }
            }
            uVar8 = uVar7 + 0x400;
            if (0xe0ff < (uVar7 & 0xff00)) {
              uVar8 = uVar7;
            }
            if ((*(byte *)(plVar11 + 0xa9) & 3) == 0) {
              uVar8 = uVar7;
            }
          }
          *piVar6 = uVar10 * 0x10000 + -0x10000 + uVar8;
          piVar6 = piVar6 + 1;
          lVar9 = 0;
          do {
            lVar14 = lVar9 * 4;
            lVar9 = lVar9 + 1;
            *piVar6 = *(int *)(param_1 + 0x47a48 + lVar14);
            piVar6 = piVar6 + 1;
          } while ((uint)bVar5 != (uint)lVar9);
          plVar11[3] = (longlong)piVar6;
        }
        else {
          (**(code **)(*plVar11 + 0x140))
                    (plVar11,(ulonglong)*(byte *)(lVar9 + 0x56),bVar5,param_1 + 0x47a48,0);
        }
      }
      return;
    }
  } while( true );
}

