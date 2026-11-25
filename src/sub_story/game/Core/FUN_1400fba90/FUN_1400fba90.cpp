// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400fba90  size: 222 bytes
// Name:    FUN_1400fba90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1400fba90(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 unaff_RSI;
  ulonglong uVar6;
  longlong lVar8;
  float fVar9;
  float fVar10;
  undefined7 uVar7;
  
  uVar7 = (undefined7)((ulonglong)unaff_RSI >> 8);
  uVar6 = CONCAT71(uVar7,1);
  if ((param_2 != 0) && ((*(byte *)((longlong)param_1 + 0x1c) & 0x1f) == 0)) {
    uVar1 = *(undefined4 *)(param_2 + 0x9c);
    if ((*(byte *)(param_1 + 0x1d) & 0x10) != 0) {
      lVar5 = func_0x000144fdf400();
      if ((lVar5 != 0) && (iVar4 = func_0x000144f3ad10(lVar5 + 0x330), iVar4 == 0x3b))
      goto LAB_1400fbadb;
      lVar5 = func_0x000144da10f0(uVar1);
      if ((lVar5 != 0) &&
         (((*(byte *)(lVar5 + 0x3c5) & 2) != 0 && (0 < (longlong)*(int *)(lVar5 + 0x3b8))))) {
        lVar8 = 0;
        do {
          if (*(short *)(lVar5 + 0x352 + lVar8 * 4) == 0x69) {
            lVar5 = func_0x000144f3ea40(*(undefined8 *)(lVar5 + 0x650),0x69);
            if (lVar5 != 0) goto LAB_1400fbadb;
            break;
          }
          lVar8 = lVar8 + 1;
        } while (*(int *)(lVar5 + 0x3b8) != lVar8);
      }
    }
    lVar5 = func_0x000144da10f0(uVar1);
    if (*(longlong *)(*(longlong *)(lVar5 + 0x650) + 0x20) == 0) {
      uVar6 = CONCAT71(uVar7,1);
      if ((*(byte *)((longlong)param_1 + 0x1c) & 0x1f) == 0) {
        if ((((*(byte *)(param_1 + 5) & 0x10) == 0) &&
            ((cVar3 = (**(code **)(*param_1 + 0xc0))(param_1), cVar3 != '\0' ||
             (cVar3 = (**(code **)(*param_1 + 200))(param_1), cVar3 != '\0')))) ||
           (cVar3 = func_0x000144f982e0((int)param_1[6]), cVar3 != '\0')) {
          uVar6 = 0;
        }
        else {
          if ((*(byte *)(param_1 + 4) & 1) == 0) {
            fVar10 = *(float *)((longlong)param_1 + 0x14);
            pcVar2 = *(code **)(*param_1 + 0x28);
            if (pcVar2 == FUN_145ea6300) {
              pcVar2 = *(code **)(*param_1 + 0x20);
              if (pcVar2 == (code *)&UNK_14522fbd0) {
                fVar9 = (float)func_0x00014522fbd0(param_1);
              }
              else {
                fVar9 = 0.0;
                if ((pcVar2 != (code *)&UNK_144e59bb0) &&
                   (fVar9 = _DAT_145fc6ed8, pcVar2 != (code *)&UNK_14093cd00)) {
                  fVar9 = (float)(*pcVar2)(param_1);
                }
              }
              fVar9 = fVar9 + *(float *)((longlong)param_1 + 0x2c);
            }
            else {
              fVar9 = (float)(*pcVar2)(param_1);
            }
            if (fVar9 < fVar10) goto code_r0x000144f980df;
            if (0.0 <= *(float *)(param_1 + 3)) {
              fVar10 = *(float *)((longlong)param_1 + 0x14);
              pcVar2 = *(code **)(*param_1 + 0x28);
              if (pcVar2 == FUN_145ea6300) {
                fVar9 = (float)(**(code **)(*param_1 + 0x20))();
                fVar9 = fVar9 + *(float *)((longlong)param_1 + 0x2c);
              }
              else {
                fVar9 = (float)(*pcVar2)(param_1);
              }
              if (fVar9 <= fVar10) goto code_r0x000144f980df;
            }
          }
          uVar6 = CONCAT71(uVar7,(*(byte *)((longlong)param_1 + 0x1c) & 0x1f) != 0);
        }
      }
code_r0x000144f980df:
      return uVar6 & 0xffffffff;
    }
    uVar6 = 0;
  }
LAB_1400fbadb:
  return uVar6 & 0xffffffff;
}

