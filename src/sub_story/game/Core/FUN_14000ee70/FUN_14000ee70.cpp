// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14000ee70  size: 980 bytes
// Name:    FUN_14000ee70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14000ee70(int param_1,longlong *param_2,uint *param_3,uint param_4,uint param_5,
                  float *param_6)

{
  ushort uVar1;
  undefined2 uVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined7 uVar8;
  byte bVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  uVar7 = CONCAT71((int7)((ulonglong)param_2 >> 8),param_3 != (uint *)0x0);
  param_6[3] = 0.0;
  *param_6 = 0.0;
  if (param_3 != (uint *)0x0 || param_2 != (longlong *)0x0) {
    fVar13 = (float)param_1;
    fVar12 = 0.0;
    fVar14 = _DAT_145fc6f48;
    do {
      if ((param_5 == 0) || (fVar13 < fVar12)) {
        if ((uVar7 & 1) == 0) {
          param_3 = (uint *)0x0;
        }
        else {
          uVar10 = param_3[1];
          uVar7 = (ulonglong)(ushort)uVar10;
          if (param_3[4] == 2) {
            uVar3 = *(ushort *)((longlong)param_6 + 0xe);
            *(ushort *)((longlong)param_6 + 0xe) = uVar3 + 1;
            *(ushort *)((longlong)param_6 + (ulonglong)uVar3 * 2 + 0x210) = (ushort)uVar10;
          }
          if (_DAT_149ce1160 != 0) {
            lVar4 = _DAT_149ce1160 + uVar7 * 0x5c0;
            if ((*(byte *)(lVar4 + 0x5b9) & 2) == 0) {
              bVar9 = (*(int *)(lVar4 + 0x504) != -1) << 5;
            }
            else {
              bVar9 = 0;
            }
            uVar7 = CONCAT71((int7)(uVar7 * 0x5c0 >> 8),*(byte *)(lVar4 + 0x5b9)) &
                    0xffffffffffffffdf;
            bVar9 = (byte)uVar7 | bVar9;
            uVar7 = CONCAT71((int7)(uVar7 >> 8),bVar9);
            *(byte *)(lVar4 + 0x5b9) = bVar9;
          }
          param_3 = *(uint **)(param_3 + 6);
        }
        if (param_2 == (longlong *)0x0) {
LAB_14000f114:
          param_2 = (longlong *)0x0;
          fVar11 = fVar13;
        }
        else {
          for (lVar4 = *param_2; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x18)) {
            uVar3 = *(ushort *)(lVar4 + 4);
            uVar7 = (ulonglong)uVar3;
            if (*(int *)(lVar4 + 0x10) == 2) {
              uVar1 = *(ushort *)((longlong)param_6 + 0xe);
              *(ushort *)((longlong)param_6 + 0xe) = uVar1 + 1;
              *(ushort *)((longlong)param_6 + (ulonglong)uVar1 * 2 + 0x210) = uVar3;
            }
            if (_DAT_149ce1160 != 0) {
              lVar5 = _DAT_149ce1160 + uVar7 * 0x5c0;
              if ((*(byte *)(lVar5 + 0x5b9) & 2) == 0) {
                bVar9 = (*(int *)(lVar5 + 0x504) != -1) << 5;
              }
              else {
                bVar9 = 0;
              }
              uVar7 = CONCAT71((int7)(uVar7 * 0x5c0 >> 8),*(byte *)(lVar5 + 0x5b9)) &
                      0xffffffffffffffdf;
              bVar9 = (byte)uVar7 | bVar9;
              uVar7 = CONCAT71((int7)(uVar7 >> 8),bVar9);
              *(byte *)(lVar5 + 0x5b9) = bVar9;
            }
          }
LAB_14000f197:
          param_2 = (longlong *)param_2[3];
          fVar11 = fVar13;
        }
      }
      else if ((char)uVar7 == '\0') {
        uVar10 = *(uint *)((longlong)param_2 + 0x14);
        if (uVar10 <= param_5) {
          lVar4 = *param_2;
          fVar11 = (float)func_0x0001443b1060(lVar4,*(undefined4 *)((longlong)param_2 + 0xc));
          if (fVar11 <= fVar13) {
            for (; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x18)) {
              uVar7 = CONCAT71((int7)(uVar7 >> 8),*(undefined1 *)(lVar4 + 0xc));
              fVar11 = (float)func_0x0001455cbff0(*(undefined4 *)(lVar4 + 8),uVar7);
              if (*(int *)(lVar4 + 0x10) == 0) {
                if (param_4 < uVar10) break;
                uVar3 = *(ushort *)(param_6 + 3);
                uVar2 = *(undefined2 *)(lVar4 + 4);
                param_4 = param_4 - 1;
                uVar10 = uVar10 - 1;
                uVar6 = uVar3 + 1;
                uVar7 = (ulonglong)uVar6;
                *(short *)(param_6 + 3) = (short)uVar6;
                *(undefined2 *)((longlong)param_6 + (ulonglong)uVar3 * 2 + 0x12) = uVar2;
              }
              fVar13 = fVar13 - fVar11;
              param_5 = param_5 - 1;
              *param_6 = fVar11 + *param_6;
            }
          }
        }
        param_2 = (longlong *)param_2[3];
        param_3 = (uint *)0x0;
        fVar11 = fVar13;
      }
      else {
        fVar11 = fVar14;
        if (*param_3 != 0xffffffff) {
          uVar8 = (undefined7)(uVar7 >> 8);
          if (param_2 == (longlong *)0x0) {
            uVar7 = CONCAT71(uVar8,(char)param_3[3]);
            fVar11 = (float)func_0x0001455cbff0(param_3[2],uVar7);
            if (param_3[4] == 0) {
              if (param_4 == 0) {
                param_4 = 0;
              }
              else if (fVar11 <= fVar13) {
                uVar3 = *(ushort *)(param_6 + 3);
                uVar10 = param_3[1];
                param_4 = param_4 - 1;
                uVar6 = uVar3 + 1;
                uVar7 = (ulonglong)uVar6;
                *(short *)(param_6 + 3) = (short)uVar6;
                *(short *)((longlong)param_6 + (ulonglong)uVar3 * 2 + 0x12) = (short)uVar10;
                goto LAB_14000f0fe;
              }
            }
            else {
LAB_14000f0fe:
              fVar13 = fVar13 - fVar11;
              *param_6 = fVar11 + *param_6;
            }
            param_3 = *(uint **)(param_3 + 6);
            param_5 = param_5 - 1;
            goto LAB_14000f114;
          }
          if (*(uint *)(param_2 + 1) <= *param_3) {
            lVar4 = *param_2;
            fVar11 = (float)func_0x0001443b1060(lVar4,*(undefined4 *)((longlong)param_2 + 0xc));
            uVar10 = *(uint *)((longlong)param_2 + 0x14);
            if ((uVar10 <= param_5) && (fVar11 <= fVar13)) {
              for (; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x18)) {
                uVar7 = CONCAT71((int7)(uVar7 >> 8),*(undefined1 *)(lVar4 + 0xc));
                fVar11 = (float)func_0x0001455cbff0(*(undefined4 *)(lVar4 + 8),uVar7);
                if (*(int *)(lVar4 + 0x10) == 0) {
                  if (param_4 < uVar10) break;
                  uVar3 = *(ushort *)(param_6 + 3);
                  uVar2 = *(undefined2 *)(lVar4 + 4);
                  param_4 = param_4 - 1;
                  uVar10 = uVar10 - 1;
                  uVar6 = uVar3 + 1;
                  uVar7 = (ulonglong)uVar6;
                  *(short *)(param_6 + 3) = (short)uVar6;
                  *(undefined2 *)((longlong)param_6 + (ulonglong)uVar3 * 2 + 0x12) = uVar2;
                }
                fVar13 = fVar13 - fVar11;
                param_5 = param_5 - 1;
                *param_6 = fVar11 + *param_6;
              }
            }
            goto LAB_14000f197;
          }
          uVar7 = CONCAT71(uVar8,(char)param_3[3]);
          fVar11 = (float)func_0x0001455cbff0(param_3[2],uVar7);
          if (param_3[4] == 0) {
            if (param_4 == 0) {
              param_4 = 0;
            }
            else if (fVar11 <= fVar13) {
              uVar3 = *(ushort *)(param_6 + 3);
              uVar10 = param_3[1];
              param_4 = param_4 - 1;
              uVar6 = uVar3 + 1;
              uVar7 = (ulonglong)uVar6;
              *(short *)(param_6 + 3) = (short)uVar6;
              *(short *)((longlong)param_6 + (ulonglong)uVar3 * 2 + 0x12) = (short)uVar10;
              goto LAB_14000ef2f;
            }
          }
          else {
LAB_14000ef2f:
            fVar13 = fVar13 - fVar11;
            *param_6 = fVar11 + *param_6;
          }
          param_3 = *(uint **)(param_3 + 6);
          param_5 = param_5 - 1;
          fVar11 = fVar13;
        }
      }
      fVar13 = fVar11;
      uVar7 = CONCAT71((int7)(uVar7 >> 8),param_3 != (uint *)0x0);
    } while (param_3 != (uint *)0x0 || param_2 != (longlong *)0x0);
  }
  return;
}

