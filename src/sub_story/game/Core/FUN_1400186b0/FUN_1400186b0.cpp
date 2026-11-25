// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400186b0  size: 136 bytes
// Name:    FUN_1400186b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x0001400186d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000140018709: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001400186dd) */
/* WARNING: Removing unreachable block (ram,0x00014001870e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400186b0(longlong param_1,float *param_2,float param_3,longlong param_4)

{
  float *pfVar1;
  short sVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  longlong lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  sVar2 = *(short *)(param_1 + 0x24a0);
  if (sVar2 != -1) {
    fVar4 = param_2[0xc];
    fVar5 = param_2[0xd];
    fVar6 = param_2[0xe];
    fVar7 = param_2[0xf];
    fVar8 = param_2[8];
    fVar9 = param_2[9];
    fVar10 = param_2[10];
    fVar11 = param_2[0xb];
    fVar12 = param_2[4];
    fVar13 = param_2[5];
    fVar14 = param_2[6];
    fVar15 = param_2[7];
    fVar16 = *param_2;
    fVar17 = param_2[1];
    fVar18 = param_2[2];
    fVar19 = param_2[3];
    auVar21._0_4_ = param_3 * fVar4 + param_3 * fVar8 + param_3 * fVar12 + param_3 * fVar16;
    auVar21._4_4_ = param_3 * fVar5 + param_3 * fVar9 + param_3 * fVar13 + param_3 * fVar17;
    auVar21._8_4_ = param_3 * fVar6 + param_3 * fVar10 + param_3 * fVar14 + param_3 * fVar18;
    auVar21._12_4_ = param_3 * fVar7 + param_3 * fVar11 + param_3 * fVar15 + param_3 * fVar19;
    auVar22._4_4_ = _UNK_14615f16c;
    auVar22._0_4_ = _UNK_14615f16c;
    auVar22._8_4_ = _UNK_14615f16c;
    auVar22._12_4_ = _UNK_14615f16c;
    auVar21 = vcmpps_avx(auVar21,auVar22,6);
    if ((((SUB161(auVar21 >> 0x1f,0) & 1) != 0 || (SUB161(auVar21 >> 0x3f,0) & 1) != 0) ||
        (SUB161(auVar21 >> 0x5f,0) & 1) != 0) || auVar21[0xf] < '\0') {
      uVar3 = *(uint *)(param_4 + 4);
      *(uint *)(param_4 + 4) = uVar3 + 1;
      *(int *)(param_4 + 8 + (ulonglong)uVar3 * 4) = (int)sVar2;
      lVar20 = (ulonglong)*(uint *)(param_4 + 0x54) * 0x40;
      *(uint *)(param_4 + 0x54) = *(uint *)(param_4 + 0x54) + 1;
      pfVar1 = (float *)(param_4 + 0x60 + lVar20);
      *pfVar1 = param_3 * fVar16;
      pfVar1[1] = param_3 * fVar17;
      pfVar1[2] = param_3 * fVar18;
      pfVar1[3] = param_3 * fVar19;
      pfVar1 = (float *)(param_4 + 0x70 + lVar20);
      *pfVar1 = param_3 * fVar12;
      pfVar1[1] = param_3 * fVar13;
      pfVar1[2] = param_3 * fVar14;
      pfVar1[3] = param_3 * fVar15;
      pfVar1 = (float *)(param_4 + 0x80 + lVar20);
      *pfVar1 = param_3 * fVar8;
      pfVar1[1] = param_3 * fVar9;
      pfVar1[2] = param_3 * fVar10;
      pfVar1[3] = param_3 * fVar11;
      pfVar1 = (float *)(param_4 + 0x90 + lVar20);
      *pfVar1 = param_3 * fVar4;
      pfVar1[1] = param_3 * fVar5;
      pfVar1[2] = param_3 * fVar6;
      pfVar1[3] = param_3 * fVar7;
      return;
    }
  }
  return;
}

