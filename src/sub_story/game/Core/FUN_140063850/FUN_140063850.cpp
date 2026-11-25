// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140063850  size: 266 bytes
// Name:    FUN_140063850
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140063850(float *param_1,undefined8 *param_2,float param_3,float *param_4,float param_5,
                  float param_6)

{
  float fVar1;
  undefined1 auVar2 [16];
  float fVar3;
  ulonglong uVar4;
  float fVar5;
  float *pfVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  
  fVar3 = param_1[1];
  fVar1 = param_1[0x404];
  fVar5 = fVar1;
  if (0x7f < (int)fVar1) {
    if (param_5 < fVar3) {
      return;
    }
    fVar5 = (float)((int)fVar1 + -1);
    param_1[0x404] = fVar5;
    fVar3 = param_1[(ulonglong)((int)fVar1 - 2) * 8 + 8];
  }
  auVar2 = vinsertps_avx(ZEXT416((uint)fVar3),ZEXT416((uint)param_1[2]),0x10);
  auVar10._4_4_ = param_5;
  auVar10._0_4_ = param_5;
  auVar10._8_4_ = param_5;
  auVar10._12_4_ = param_5;
  auVar2 = vminps_avx(auVar2,auVar10);
  uVar8 = vmovlps_avx(auVar2);
  *(undefined8 *)(param_1 + 1) = uVar8;
  if (0 < (int)fVar5) {
    uVar4 = (ulonglong)(uint)fVar5;
    uVar7 = 0;
    pfVar6 = param_1;
    do {
      pfVar6 = pfVar6 + 8;
      if (*pfVar6 < param_5) {
        uVar8 = *param_2;
        uVar9 = param_2[1];
        fVar3 = *param_4;
        if ((int)uVar7 < (int)fVar5) {
          pfVar6 = param_1 + uVar4 * 8 + 4;
          do {
            uVar4 = uVar4 - 1;
            *(undefined8 *)pfVar6 = *(undefined8 *)(pfVar6 + -8);
            *(undefined8 *)(pfVar6 + 2) = *(undefined8 *)(pfVar6 + -6);
            *(undefined8 *)(pfVar6 + 4) = *(undefined8 *)(pfVar6 + -4);
            *(undefined8 *)(pfVar6 + 6) = *(undefined8 *)(pfVar6 + -2);
            pfVar6 = pfVar6 + -8;
          } while ((longlong)(int)uVar7 < (longlong)uVar4);
          fVar5 = param_1[0x404];
        }
        param_1[0x404] = (float)((int)fVar5 + 1);
        goto LAB_1400638c6;
      }
      uVar7 = uVar7 + 1;
    } while (uVar4 != uVar7);
  }
  uVar8 = *param_2;
  uVar9 = param_2[1];
  fVar3 = *param_4;
  uVar7 = (ulonglong)(int)fVar5;
  param_1[0x404] = (float)((int)fVar5 + 1);
LAB_1400638c6:
  *(undefined8 *)(param_1 + uVar7 * 8 + 4) = uVar8;
  *(undefined8 *)(param_1 + uVar7 * 8 + 4 + 2) = uVar9;
  param_1[uVar7 * 8 + 8] = param_5;
  param_1[uVar7 * 8 + 9] = param_3;
  param_1[uVar7 * 8 + 10] = fVar3;
  param_1[uVar7 * 8 + 0xb] = param_6;
  return;
}

