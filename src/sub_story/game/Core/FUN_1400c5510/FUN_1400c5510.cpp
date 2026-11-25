// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c5510  size: 3556 bytes
// Name:    FUN_1400c5510
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400c5510
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400c5510(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong *plVar15;
  ulonglong uVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  
  uVar7 = (longlong)param_2 - (longlong)param_1;
  do {
    if ((longlong)uVar7 < 0x101) {
      plVar8 = param_1;
      if (param_1 != param_2) {
        while (plVar9 = plVar8 + 1, plVar9 != param_2) {
          lVar11 = plVar8[1];
          fVar18 = 0.0;
          fVar19 = 0.0;
          cVar3 = *(char *)(*(longlong *)(lVar11 + 0x100) + 0x156);
          if (cVar3 == '\x01') {
            fVar19 = *(float *)(*(longlong *)(lVar11 + 0x118) + 0x1c) +
                     *(float *)(*(longlong *)(lVar11 + 0x118) + 0x14);
          }
          if (*(char *)(*(longlong *)(*param_1 + 0x100) + 0x156) == '\x01') {
            lVar14 = *(longlong *)(*param_1 + 0x118);
            fVar18 = *(float *)(lVar14 + 0x1c) + *(float *)(lVar14 + 0x14);
          }
          plVar2 = plVar9;
          if (fVar19 <= fVar18) {
            while( true ) {
              fVar18 = 0.0;
              fVar19 = 0.0;
              if (cVar3 == '\x01') {
                fVar19 = *(float *)(*(longlong *)(lVar11 + 0x118) + 0x1c) +
                         *(float *)(*(longlong *)(lVar11 + 0x118) + 0x14);
              }
              lVar14 = plVar2[-1];
              if (*(char *)(*(longlong *)(lVar14 + 0x100) + 0x156) == '\x01') {
                fVar18 = *(float *)(*(longlong *)(lVar14 + 0x118) + 0x1c) +
                         *(float *)(*(longlong *)(lVar14 + 0x118) + 0x14);
              }
              if (fVar19 <= fVar18) break;
              *plVar2 = lVar14;
              plVar2 = plVar2 + -1;
              cVar3 = *(char *)(*(longlong *)(lVar11 + 0x100) + 0x156);
            }
          }
          else {
            func_0x000140301860(param_1,plVar9,plVar8 + 2);
            plVar2 = param_1;
          }
          *plVar2 = lVar11;
          plVar8 = plVar9;
        }
      }
      return;
    }
    uVar4 = uVar7 >> 4;
    if ((longlong)param_3 < 1) {
      uVar13 = (uVar7 >> 3) - 1;
      uVar12 = uVar13 >> 1;
      do {
        uVar6 = uVar4 - 1;
        lVar11 = param_1[uVar4 - 1];
        uVar10 = uVar6;
        uVar16 = uVar6;
        if ((longlong)uVar4 <= (longlong)uVar12) {
          do {
            fVar18 = 0.0;
            fVar19 = 0.0;
            if (*(char *)(*(longlong *)(param_1[uVar16 * 2 + 2] + 0x100) + 0x156) == '\x01') {
              lVar14 = *(longlong *)(param_1[uVar16 * 2 + 2] + 0x118);
              fVar19 = *(float *)(lVar14 + 0x1c) + *(float *)(lVar14 + 0x14);
            }
            if (*(char *)(*(longlong *)(param_1[uVar16 * 2 + 1] + 0x100) + 0x156) == '\x01') {
              lVar14 = *(longlong *)(param_1[uVar16 * 2 + 1] + 0x118);
              fVar18 = *(float *)(lVar14 + 0x1c) + *(float *)(lVar14 + 0x14);
            }
            if (fVar18 < fVar19) {
              uVar10 = uVar16 * 2 + 1;
            }
            else {
              uVar10 = uVar16 * 2 + 2;
            }
            param_1[uVar16] = param_1[uVar10];
            uVar16 = uVar10;
          } while (uVar10 < uVar12);
        }
        if (((uVar7 & 8) == 0) && (uVar10 == uVar12)) {
          param_1[uVar12] = param_1[(uVar7 >> 3) - 1];
          uVar10 = uVar13;
        }
        while ((longlong)uVar4 <= (longlong)uVar10) {
          fVar18 = 0.0;
          fVar19 = 0.0;
          uVar16 = (longlong)(uVar10 - 1) >> 1;
          lVar14 = param_1[uVar16];
          if (*(char *)(*(longlong *)(lVar14 + 0x100) + 0x156) == '\x01') {
            fVar19 = *(float *)(*(longlong *)(lVar14 + 0x118) + 0x1c) +
                     *(float *)(*(longlong *)(lVar14 + 0x118) + 0x14);
          }
          if (*(char *)(*(longlong *)(lVar11 + 0x100) + 0x156) == '\x01') {
            fVar18 = *(float *)(*(longlong *)(lVar11 + 0x118) + 0x1c) +
                     *(float *)(*(longlong *)(lVar11 + 0x118) + 0x14);
          }
          if (fVar19 <= fVar18) break;
          param_1[uVar10] = lVar14;
          uVar10 = uVar16;
        }
        param_1[uVar10] = lVar11;
        bVar17 = 1 < (longlong)uVar4;
        uVar4 = uVar6;
      } while (bVar17);
      uVar7 = (longlong)param_2 - (longlong)param_1;
      do {
        if ((longlong)uVar7 < 9) {
          return;
        }
        lVar11 = param_2[-1];
        param_2[-1] = *param_1;
        param_2 = param_2 + -1;
        uVar7 = (longlong)param_2 - (longlong)param_1;
        uVar4 = ((longlong)uVar7 >> 3) - 1;
        uVar13 = (longlong)uVar4 >> 1;
        if ((longlong)uVar13 < 1) {
          uVar12 = 0;
        }
        else {
          uVar10 = 0;
          do {
            fVar18 = 0.0;
            fVar19 = 0.0;
            if (*(char *)(*(longlong *)(param_1[uVar10 * 2 + 2] + 0x100) + 0x156) == '\x01') {
              lVar14 = *(longlong *)(param_1[uVar10 * 2 + 2] + 0x118);
              fVar19 = *(float *)(lVar14 + 0x1c) + *(float *)(lVar14 + 0x14);
            }
            if (*(char *)(*(longlong *)(param_1[uVar10 * 2 + 1] + 0x100) + 0x156) == '\x01') {
              lVar14 = *(longlong *)(param_1[uVar10 * 2 + 1] + 0x118);
              fVar18 = *(float *)(lVar14 + 0x1c) + *(float *)(lVar14 + 0x14);
            }
            if (fVar18 < fVar19) {
              uVar12 = uVar10 * 2 + 1;
            }
            else {
              uVar12 = uVar10 * 2 + 2;
            }
            param_1[uVar10] = param_1[uVar12];
            uVar10 = uVar12;
          } while ((longlong)uVar12 < (longlong)uVar13);
        }
        if (((uVar7 & 8) == 0) && (uVar12 == uVar13)) {
          param_1[uVar13] = param_1[((longlong)uVar7 >> 3) + -1];
          uVar12 = uVar4;
        }
        if (0 < (longlong)uVar12) {
          do {
            uVar4 = uVar12 - 1;
            fVar18 = 0.0;
            fVar19 = 0.0;
            uVar13 = uVar4 >> 1;
            lVar14 = param_1[uVar13];
            if (*(char *)(*(longlong *)(lVar14 + 0x100) + 0x156) == '\x01') {
              fVar19 = *(float *)(*(longlong *)(lVar14 + 0x118) + 0x1c) +
                       *(float *)(*(longlong *)(lVar14 + 0x118) + 0x14);
            }
            if (*(char *)(*(longlong *)(lVar11 + 0x100) + 0x156) == '\x01') {
              fVar18 = *(float *)(*(longlong *)(lVar11 + 0x118) + 0x1c) +
                       *(float *)(*(longlong *)(lVar11 + 0x118) + 0x14);
            }
            if (fVar19 <= fVar18) goto LAB_1400c62d8;
            param_1[uVar12] = lVar14;
            uVar12 = uVar13;
          } while (1 < uVar4);
          uVar12 = 0;
        }
LAB_1400c62d8:
        param_1[uVar12] = lVar11;
      } while( true );
    }
    plVar8 = param_2 + -1;
    plVar9 = param_1 + uVar4;
    lVar11 = (longlong)plVar8 - (longlong)param_1 >> 3;
    if (lVar11 < 0x29) {
      lVar11 = *plVar9;
      fVar18 = 0.0;
      fVar19 = 0.0;
      if (*(char *)(*(longlong *)(lVar11 + 0x100) + 0x156) == '\x01') {
        fVar19 = *(float *)(*(longlong *)(lVar11 + 0x118) + 0x1c) +
                 *(float *)(*(longlong *)(lVar11 + 0x118) + 0x14);
      }
      lVar14 = *param_1;
      if (*(char *)(*(longlong *)(lVar14 + 0x100) + 0x156) == '\x01') {
        fVar18 = *(float *)(*(longlong *)(lVar14 + 0x118) + 0x1c) +
                 *(float *)(*(longlong *)(lVar14 + 0x118) + 0x14);
      }
      if (fVar18 < fVar19) {
        *plVar9 = lVar14;
        *param_1 = lVar11;
        lVar11 = *plVar9;
      }
      lVar14 = *plVar8;
      fVar18 = 0.0;
      fVar19 = 0.0;
      if (*(char *)(*(longlong *)(lVar14 + 0x100) + 0x156) == '\x01') {
        fVar19 = *(float *)(*(longlong *)(lVar14 + 0x118) + 0x1c) +
                 *(float *)(*(longlong *)(lVar14 + 0x118) + 0x14);
      }
      if (*(char *)(*(longlong *)(lVar11 + 0x100) + 0x156) == '\x01') {
        fVar18 = *(float *)(*(longlong *)(lVar11 + 0x118) + 0x1c) +
                 *(float *)(*(longlong *)(lVar11 + 0x118) + 0x14);
      }
      if (fVar18 < fVar19) {
        *plVar8 = lVar11;
        *plVar9 = lVar14;
        fVar18 = 0.0;
        fVar19 = 0.0;
        if (*(char *)(*(longlong *)(lVar14 + 0x100) + 0x156) == '\x01') {
          fVar19 = *(float *)(*(longlong *)(lVar14 + 0x118) + 0x1c) +
                   *(float *)(*(longlong *)(lVar14 + 0x118) + 0x14);
        }
        lVar11 = *param_1;
        if (*(char *)(*(longlong *)(lVar11 + 0x100) + 0x156) == '\x01') {
          fVar18 = *(float *)(*(longlong *)(lVar11 + 0x118) + 0x1c) +
                   *(float *)(*(longlong *)(lVar11 + 0x118) + 0x14);
        }
        if (fVar18 < fVar19) {
          *plVar9 = lVar11;
          *param_1 = lVar14;
        }
      }
    }
    else {
      uVar7 = lVar11 + 1;
      fVar18 = 0.0;
      fVar19 = 0.0;
      lVar11 = *(longlong *)((longlong)param_1 + (uVar7 & 0xfffffffffffffff8));
      if (*(char *)(*(longlong *)(lVar11 + 0x100) + 0x156) == '\x01') {
        fVar19 = *(float *)(*(longlong *)(lVar11 + 0x118) + 0x1c) +
                 *(float *)(*(longlong *)(lVar11 + 0x118) + 0x14);
      }
      lVar14 = *param_1;
      if (*(char *)(*(longlong *)(lVar14 + 0x100) + 0x156) == '\x01') {
        fVar18 = *(float *)(*(longlong *)(lVar14 + 0x118) + 0x1c) +
                 *(float *)(*(longlong *)(lVar14 + 0x118) + 0x14);
      }
      uVar7 = uVar7 >> 3;
      if (fVar18 < fVar19) {
        param_1[uVar7] = lVar14;
        *param_1 = lVar11;
        lVar11 = param_1[uVar7];
      }
      fVar18 = 0.0;
      fVar19 = 0.0;
      lVar14 = param_1[uVar7 * 2];
      if (*(char *)(*(longlong *)(lVar14 + 0x100) + 0x156) == '\x01') {
        fVar19 = *(float *)(*(longlong *)(lVar14 + 0x118) + 0x1c) +
                 *(float *)(*(longlong *)(lVar14 + 0x118) + 0x14);
      }
      if (*(char *)(*(longlong *)(lVar11 + 0x100) + 0x156) == '\x01') {
        fVar18 = *(float *)(*(longlong *)(lVar11 + 0x118) + 0x1c) +
                 *(float *)(*(longlong *)(lVar11 + 0x118) + 0x14);
      }
      if (fVar18 < fVar19) {
        param_1[uVar7 * 2] = lVar11;
        param_1[uVar7] = lVar14;
        fVar18 = 0.0;
        fVar19 = 0.0;
        if (*(char *)(*(longlong *)(lVar14 + 0x100) + 0x156) == '\x01') {
          fVar19 = *(float *)(*(longlong *)(lVar14 + 0x118) + 0x1c) +
                   *(float *)(*(longlong *)(lVar14 + 0x118) + 0x14);
        }
        lVar11 = *param_1;
        if (*(char *)(*(longlong *)(lVar11 + 0x100) + 0x156) == '\x01') {
          fVar18 = *(float *)(*(longlong *)(lVar11 + 0x118) + 0x1c) +
                   *(float *)(*(longlong *)(lVar11 + 0x118) + 0x14);
        }
        if (fVar18 < fVar19) {
          param_1[uVar7] = lVar11;
          *param_1 = lVar14;
        }
      }
      lVar11 = *plVar9;
      fVar18 = 0.0;
      fVar19 = 0.0;
      lVar14 = plVar9[-uVar7];
      if (*(char *)(*(longlong *)(lVar11 + 0x100) + 0x156) == '\x01') {
        fVar19 = *(float *)(*(longlong *)(lVar11 + 0x118) + 0x1c) +
                 *(float *)(*(longlong *)(lVar11 + 0x118) + 0x14);
      }
      if (*(char *)(*(longlong *)(lVar14 + 0x100) + 0x156) == '\x01') {
        fVar18 = *(float *)(*(longlong *)(lVar14 + 0x118) + 0x1c) +
                 *(float *)(*(longlong *)(lVar14 + 0x118) + 0x14);
      }
      if (fVar18 < fVar19) {
        *plVar9 = lVar14;
        plVar9[-uVar7] = lVar11;
        lVar11 = *plVar9;
      }
      lVar14 = plVar9[uVar7];
      fVar18 = 0.0;
      fVar19 = 0.0;
      if (*(char *)(*(longlong *)(lVar14 + 0x100) + 0x156) == '\x01') {
        fVar19 = *(float *)(*(longlong *)(lVar14 + 0x118) + 0x1c) +
                 *(float *)(*(longlong *)(lVar14 + 0x118) + 0x14);
      }
      if (*(char *)(*(longlong *)(lVar11 + 0x100) + 0x156) == '\x01') {
        fVar18 = *(float *)(*(longlong *)(lVar11 + 0x118) + 0x1c) +
                 *(float *)(*(longlong *)(lVar11 + 0x118) + 0x14);
      }
      if (fVar18 < fVar19) {
        plVar9[uVar7] = lVar11;
        *plVar9 = lVar14;
        fVar18 = 0.0;
        fVar19 = 0.0;
        if (*(char *)(*(longlong *)(lVar14 + 0x100) + 0x156) == '\x01') {
          fVar19 = *(float *)(*(longlong *)(lVar14 + 0x118) + 0x1c) +
                   *(float *)(*(longlong *)(lVar14 + 0x118) + 0x14);
        }
        lVar11 = plVar9[-uVar7];
        if (*(char *)(*(longlong *)(lVar11 + 0x100) + 0x156) == '\x01') {
          fVar18 = *(float *)(*(longlong *)(lVar11 + 0x118) + 0x1c) +
                   *(float *)(*(longlong *)(lVar11 + 0x118) + 0x14);
        }
        if (fVar18 < fVar19) {
          *plVar9 = lVar11;
          plVar9[-uVar7] = lVar14;
        }
      }
      fVar18 = 0.0;
      fVar19 = 0.0;
      lVar11 = plVar8[uVar7 * -2];
      lVar14 = plVar8[-uVar7];
      if (*(char *)(*(longlong *)(lVar14 + 0x100) + 0x156) == '\x01') {
        fVar19 = *(float *)(*(longlong *)(lVar14 + 0x118) + 0x1c) +
                 *(float *)(*(longlong *)(lVar14 + 0x118) + 0x14);
      }
      if (*(char *)(*(longlong *)(lVar11 + 0x100) + 0x156) == '\x01') {
        fVar18 = *(float *)(*(longlong *)(lVar11 + 0x118) + 0x1c) +
                 *(float *)(*(longlong *)(lVar11 + 0x118) + 0x14);
      }
      if (fVar18 < fVar19) {
        plVar8[-uVar7] = lVar11;
        plVar8[uVar7 * -2] = lVar14;
        lVar14 = plVar8[-uVar7];
      }
      lVar11 = *plVar8;
      fVar18 = 0.0;
      fVar19 = 0.0;
      if (*(char *)(*(longlong *)(lVar11 + 0x100) + 0x156) == '\x01') {
        fVar19 = *(float *)(*(longlong *)(lVar11 + 0x118) + 0x1c) +
                 *(float *)(*(longlong *)(lVar11 + 0x118) + 0x14);
      }
      if (*(char *)(*(longlong *)(lVar14 + 0x100) + 0x156) == '\x01') {
        fVar18 = *(float *)(*(longlong *)(lVar14 + 0x118) + 0x1c) +
                 *(float *)(*(longlong *)(lVar14 + 0x118) + 0x14);
      }
      if (fVar18 < fVar19) {
        *plVar8 = lVar14;
        plVar8[-uVar7] = lVar11;
        fVar18 = 0.0;
        fVar19 = 0.0;
        if (*(char *)(*(longlong *)(lVar11 + 0x100) + 0x156) == '\x01') {
          fVar19 = *(float *)(*(longlong *)(lVar11 + 0x118) + 0x1c) +
                   *(float *)(*(longlong *)(lVar11 + 0x118) + 0x14);
        }
        lVar14 = plVar8[uVar7 * -2];
        if (*(char *)(*(longlong *)(lVar14 + 0x100) + 0x156) == '\x01') {
          fVar18 = *(float *)(*(longlong *)(lVar14 + 0x118) + 0x1c) +
                   *(float *)(*(longlong *)(lVar14 + 0x118) + 0x14);
        }
        if (fVar18 < fVar19) {
          plVar8[-uVar7] = lVar14;
          plVar8[uVar7 * -2] = lVar11;
        }
      }
      lVar11 = *plVar9;
      lVar14 = param_1[uVar7];
      fVar18 = 0.0;
      fVar19 = 0.0;
      if (*(char *)(*(longlong *)(lVar11 + 0x100) + 0x156) == '\x01') {
        fVar19 = *(float *)(*(longlong *)(lVar11 + 0x118) + 0x1c) +
                 *(float *)(*(longlong *)(lVar11 + 0x118) + 0x14);
      }
      if (*(char *)(*(longlong *)(lVar14 + 0x100) + 0x156) == '\x01') {
        fVar18 = *(float *)(*(longlong *)(lVar14 + 0x118) + 0x1c) +
                 *(float *)(*(longlong *)(lVar14 + 0x118) + 0x14);
      }
      if (fVar18 < fVar19) {
        *plVar9 = lVar14;
        param_1[uVar7] = lVar11;
        lVar11 = *plVar9;
      }
      lVar14 = plVar8[-uVar7];
      fVar18 = 0.0;
      fVar19 = 0.0;
      if (*(char *)(*(longlong *)(lVar14 + 0x100) + 0x156) == '\x01') {
        fVar19 = *(float *)(*(longlong *)(lVar14 + 0x118) + 0x1c) +
                 *(float *)(*(longlong *)(lVar14 + 0x118) + 0x14);
      }
      if (*(char *)(*(longlong *)(lVar11 + 0x100) + 0x156) == '\x01') {
        fVar18 = *(float *)(*(longlong *)(lVar11 + 0x118) + 0x1c) +
                 *(float *)(*(longlong *)(lVar11 + 0x118) + 0x14);
      }
      if (fVar18 < fVar19) {
        plVar8[-uVar7] = lVar11;
        *plVar9 = lVar14;
        fVar18 = 0.0;
        fVar19 = 0.0;
        if (*(char *)(*(longlong *)(lVar14 + 0x100) + 0x156) == '\x01') {
          fVar19 = *(float *)(*(longlong *)(lVar14 + 0x118) + 0x1c) +
                   *(float *)(*(longlong *)(lVar14 + 0x118) + 0x14);
        }
        lVar11 = param_1[uVar7];
        if (*(char *)(*(longlong *)(lVar11 + 0x100) + 0x156) == '\x01') {
          fVar18 = *(float *)(*(longlong *)(lVar11 + 0x118) + 0x1c) +
                   *(float *)(*(longlong *)(lVar11 + 0x118) + 0x14);
        }
        if (fVar18 < fVar19) {
          *plVar9 = lVar11;
          param_1[uVar7] = lVar14;
        }
      }
    }
    do {
      plVar8 = plVar9;
      if (plVar8 <= param_1) break;
      lVar11 = *plVar8;
      if (*(char *)(*(longlong *)(plVar8[-1] + 0x100) + 0x156) == '\x01') {
        lVar14 = *(longlong *)(plVar8[-1] + 0x118);
        fVar19 = *(float *)(lVar14 + 0x1c) + *(float *)(lVar14 + 0x14);
        if (*(char *)(*(longlong *)(lVar11 + 0x100) + 0x156) == '\x01') {
          fVar18 = *(float *)(*(longlong *)(lVar11 + 0x118) + 0x1c) +
                   *(float *)(*(longlong *)(lVar11 + 0x118) + 0x14);
        }
        else {
          fVar18 = 0.0;
        }
LAB_1400c5c18:
        if (fVar18 < fVar19) break;
      }
      else {
        fVar18 = 0.0;
        fVar19 = 0.0;
        if (*(char *)(*(longlong *)(lVar11 + 0x100) + 0x156) == '\x01') {
          fVar18 = *(float *)(*(longlong *)(lVar11 + 0x118) + 0x1c) +
                   *(float *)(*(longlong *)(lVar11 + 0x118) + 0x14);
          fVar19 = 0.0;
          goto LAB_1400c5c18;
        }
      }
      plVar9 = plVar8 + -1;
    } while (fVar18 <= fVar19);
    plVar9 = param_1 + uVar4 + 1;
    do {
      plVar5 = plVar9;
      plVar2 = plVar8;
      plVar15 = plVar5;
      if (param_2 <= plVar5) break;
      lVar11 = *plVar8;
      if (*(char *)(*(longlong *)(*plVar5 + 0x100) + 0x156) == '\x01') {
        lVar14 = *(longlong *)(*plVar5 + 0x118);
        fVar19 = *(float *)(lVar14 + 0x1c) + *(float *)(lVar14 + 0x14);
        if (*(char *)(*(longlong *)(lVar11 + 0x100) + 0x156) == '\x01') {
          fVar18 = *(float *)(*(longlong *)(lVar11 + 0x118) + 0x1c) +
                   *(float *)(*(longlong *)(lVar11 + 0x118) + 0x14);
        }
        else {
          fVar18 = 0.0;
        }
LAB_1400c5cbb:
        if (fVar18 < fVar19) break;
      }
      else {
        fVar18 = 0.0;
        fVar19 = 0.0;
        if (*(char *)(*(longlong *)(lVar11 + 0x100) + 0x156) == '\x01') {
          fVar18 = *(float *)(*(longlong *)(lVar11 + 0x118) + 0x1c) +
                   *(float *)(*(longlong *)(lVar11 + 0x118) + 0x14);
          fVar19 = 0.0;
          goto LAB_1400c5cbb;
        }
      }
      plVar9 = plVar5 + 1;
    } while (fVar18 <= fVar19);
LAB_1400c5cd5:
    plVar9 = plVar8;
    if (plVar5 < param_2) {
      lVar11 = *plVar5;
      if (*(char *)(*(longlong *)(*plVar2 + 0x100) + 0x156) == '\x01') {
        lVar14 = *(longlong *)(*plVar2 + 0x118);
        fVar19 = *(float *)(lVar14 + 0x1c) + *(float *)(lVar14 + 0x14);
        if (*(char *)(*(longlong *)(lVar11 + 0x100) + 0x156) == '\x01') {
          fVar18 = *(float *)(*(longlong *)(lVar11 + 0x118) + 0x1c) +
                   *(float *)(*(longlong *)(lVar11 + 0x118) + 0x14);
        }
        else {
          fVar18 = 0.0;
        }
LAB_1400c5d5c:
        if (fVar19 <= fVar18) {
          if (fVar19 < fVar18) goto joined_r0x0001400c5d86;
          goto LAB_1400c5d68;
        }
      }
      else {
        if (*(char *)(*(longlong *)(lVar11 + 0x100) + 0x156) == '\x01') {
          fVar18 = *(float *)(*(longlong *)(lVar11 + 0x118) + 0x1c) +
                   *(float *)(*(longlong *)(lVar11 + 0x118) + 0x14);
          fVar19 = 0.0;
          goto LAB_1400c5d5c;
        }
LAB_1400c5d68:
        if (plVar5 != plVar15) {
          lVar14 = *plVar15;
          *plVar15 = lVar11;
          *plVar5 = lVar14;
        }
        plVar15 = plVar15 + 1;
      }
      plVar5 = plVar5 + 1;
      goto LAB_1400c5cd5;
    }
joined_r0x0001400c5d86:
    while (plVar8 = plVar9, param_1 < plVar8) {
      lVar11 = *plVar2;
      plVar9 = plVar8 + -1;
      lVar14 = plVar8[-1];
      if (*(char *)(*(longlong *)(lVar14 + 0x100) + 0x156) != '\x01') {
        if (*(char *)(*(longlong *)(lVar11 + 0x100) + 0x156) == '\x01') {
          fVar18 = *(float *)(*(longlong *)(lVar11 + 0x118) + 0x1c) +
                   *(float *)(*(longlong *)(lVar11 + 0x118) + 0x14);
          fVar19 = 0.0;
          goto LAB_1400c5e12;
        }
        goto LAB_1400c5e23;
      }
      fVar19 = *(float *)(*(longlong *)(lVar14 + 0x118) + 0x1c) +
               *(float *)(*(longlong *)(lVar14 + 0x118) + 0x14);
      if (*(char *)(*(longlong *)(lVar11 + 0x100) + 0x156) == '\x01') {
        fVar18 = *(float *)(*(longlong *)(lVar11 + 0x118) + 0x1c) +
                 *(float *)(*(longlong *)(lVar11 + 0x118) + 0x14);
      }
      else {
        fVar18 = 0.0;
      }
LAB_1400c5e12:
      if (fVar19 <= fVar18) {
        if (fVar19 < fVar18) break;
LAB_1400c5e23:
        plVar1 = plVar2 + -1;
        bVar17 = plVar8 != plVar2;
        plVar2 = plVar1;
        if (bVar17) {
          lVar11 = *plVar1;
          *plVar1 = lVar14;
          *plVar9 = lVar11;
        }
      }
    }
    if ((plVar5 != param_2) || (plVar8 != param_1)) {
      if (plVar8 == param_1) {
        lVar11 = *plVar2;
        if (plVar15 != plVar5) {
          *plVar2 = *plVar15;
          *plVar15 = lVar11;
          lVar11 = *plVar2;
        }
        *plVar2 = *plVar5;
        *plVar5 = lVar11;
        plVar5 = plVar5 + 1;
        plVar2 = plVar2 + 1;
        plVar15 = plVar15 + 1;
      }
      else {
        plVar9 = plVar8 + -1;
        if (plVar5 == param_2) {
          plVar1 = plVar2 + -1;
          lVar11 = plVar2[-1];
          if (plVar8 != plVar2) {
            lVar11 = *plVar9;
            *plVar9 = plVar2[-1];
            *plVar1 = lVar11;
          }
          *plVar1 = plVar15[-1];
          plVar15[-1] = lVar11;
          plVar8 = plVar9;
          plVar2 = plVar1;
          plVar15 = plVar15 + -1;
        }
        else {
          lVar11 = *plVar5;
          *plVar5 = *plVar9;
          *plVar9 = lVar11;
          plVar5 = plVar5 + 1;
          plVar8 = plVar9;
        }
      }
      goto LAB_1400c5cd5;
    }
    param_3 = (param_3 >> 2) + (param_3 >> 1);
    if ((longlong)plVar2 - (longlong)param_1 < (longlong)param_2 - (longlong)plVar15) {
      FUN_1400c5510(param_1,plVar2,param_3);
      plVar2 = param_2;
      param_1 = plVar15;
    }
    else {
      FUN_1400c5510(plVar15,param_2,param_3);
    }
    uVar7 = (longlong)plVar2 - (longlong)param_1;
    param_2 = plVar2;
  } while( true );
}

