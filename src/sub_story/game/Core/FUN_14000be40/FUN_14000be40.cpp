// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14000be40  size: 285 bytes
// Name:    FUN_14000be40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_14000be40(longlong param_1,float param_2)

{
  float fVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  char cVar7;
  char cVar8;
  float fVar9;
  float fVar10;
  
  fVar9 = 0.0;
  if ((0.0 <= param_2) && (fVar9 = 0.0, param_2 < (float)*(int *)(param_1 + 0x15f0))) {
    iVar5 = (int)param_2;
    fVar9 = *(float *)(param_1 + 0xa4 + (longlong)iVar5 * 0xa0);
    if (*(int *)(param_1 + 0x15f0) + -1 != iVar5) {
      fVar10 = (float)iVar5;
      if ((fVar10 != param_2) || (NAN(fVar10) || NAN(param_2))) {
        param_2 = param_2 - fVar10;
        cVar7 = *(char *)(param_1 + (longlong)iVar5 * 0xa0 + 0xad);
        lVar6 = (longlong)(iVar5 + 1) * 0xa0;
        fVar10 = *(float *)(param_1 + 0xa4 + lVar6);
        cVar2 = *(char *)(param_1 + 0xad + lVar6);
        cVar8 = cVar7 << 4;
        if (cVar8 == -0x10) {
          cVar8 = cVar7;
        }
        cVar7 = cVar2 << 4;
        if (cVar7 == -0x10) {
          cVar7 = cVar2;
        }
        if (cVar8 >> 4 == cVar7 >> 4) {
          fVar9 = (fVar10 - fVar9) * param_2 + fVar9;
        }
        else {
          fVar1 = *(float *)(&UNK_14615d3c8 + (ulonglong)(cVar8 >> 4 < cVar7 >> 4) * 4);
          fVar4 = _DAT_145fc6ed8 - fVar1 * fVar9;
          fVar10 = fVar1 * fVar10 + _DAT_145fc6ed8 + fVar4;
          fVar3 = fVar10 * param_2;
          if (param_2 < fVar4 / fVar10) {
            fVar9 = fVar3 * fVar1 + fVar9;
          }
          else {
            fVar9 = (fVar1 * fVar9 + _DAT_14614f804 + fVar3) * fVar1;
          }
        }
      }
    }
  }
  return fVar9;
}

