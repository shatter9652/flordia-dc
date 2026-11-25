// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ea220  size: 461 bytes
// Name:    FUN_1400ea220
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong * FUN_1400ea220(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 uVar19;
  
  switch(*(undefined1 *)(*param_2 + 0x1e)) {
  case 0:
  case 1:
  case 2:
    uVar19 = 0x4f0;
    break;
  case 3:
    lVar2 = param_2[1];
    lVar3 = param_2[2];
    lVar4 = param_2[3];
    *param_1 = *param_2;
    param_1[1] = lVar2;
    param_1[2] = lVar3;
    param_1[3] = lVar4;
    param_1[4] = 0x100;
    uVar1 = *(uint *)((longlong)param_2 + 0x24);
    if ((ulonglong)uVar1 != 0) {
      if (0x100 < uVar1) {
        *(uint *)(param_1 + 4) = uVar1;
      }
      func_0x000145f40560(param_1 + 5,param_2 + 5,(ulonglong)uVar1 << 2);
      *(uint *)((longlong)param_1 + 0x24) = uVar1;
    }
    lVar2 = param_2[0x85];
    lVar3 = param_2[0x86];
    lVar4 = param_2[0x87];
    lVar5 = param_2[0x88];
    lVar6 = param_2[0x89];
    lVar7 = param_2[0x8a];
    lVar8 = param_2[0x8b];
    lVar9 = param_2[0x8c];
    lVar10 = param_2[0x8d];
    lVar11 = param_2[0x8e];
    lVar12 = param_2[0x8f];
    lVar13 = param_2[0x90];
    uVar19 = *(undefined8 *)((longlong)param_2 + 0x47d);
    uVar14 = *(undefined8 *)((longlong)param_2 + 0x485);
    uVar15 = *(undefined8 *)((longlong)param_2 + 0x48d);
    *(undefined8 *)((longlong)param_1 + 0x475) = *(undefined8 *)((longlong)param_2 + 0x475);
    *(undefined8 *)((longlong)param_1 + 0x47d) = uVar19;
    *(undefined8 *)((longlong)param_1 + 0x485) = uVar14;
    *(undefined8 *)((longlong)param_1 + 0x48d) = uVar15;
    param_1[0x8d] = lVar10;
    param_1[0x8e] = lVar11;
    param_1[0x8f] = lVar12;
    param_1[0x90] = lVar13;
    param_1[0x89] = lVar6;
    param_1[0x8a] = lVar7;
    param_1[0x8b] = lVar8;
    param_1[0x8c] = lVar9;
    param_1[0x85] = lVar2;
    param_1[0x86] = lVar3;
    param_1[0x87] = lVar4;
    param_1[0x88] = lVar5;
    lVar2 = param_2[0x95];
    lVar3 = param_2[0x96];
    lVar4 = param_2[0x97];
    param_1[0x94] = param_2[0x94];
    param_1[0x95] = lVar2;
    param_1[0x96] = lVar3;
    param_1[0x97] = lVar4;
    param_1[0x98] = param_2[0x98];
    lVar2 = param_2[0x9b];
    lVar3 = param_2[0x9c];
    lVar4 = param_2[0x9d];
    lVar5 = param_2[0x9e];
    lVar6 = param_2[0x9f];
    lVar7 = param_2[0xa0];
    lVar8 = param_2[0xa1];
    lVar9 = param_2[0xa2];
    lVar10 = param_2[0xa3];
    lVar11 = param_2[0xa4];
    lVar12 = param_2[0xa5];
    lVar13 = param_2[0xa6];
    lVar16 = param_2[0xa7];
    lVar17 = param_2[0xa8];
    lVar18 = param_2[0xa9];
    param_1[0x9a] = param_2[0x9a];
    param_1[0x9b] = lVar2;
    param_1[0x9c] = lVar3;
    param_1[0x9d] = lVar4;
    param_1[0x9e] = lVar5;
    param_1[0x9f] = lVar6;
    param_1[0xa0] = lVar7;
    param_1[0xa1] = lVar8;
    param_1[0xa2] = lVar9;
    param_1[0xa3] = lVar10;
    param_1[0xa4] = lVar11;
    param_1[0xa5] = lVar12;
    param_1[0xa6] = lVar13;
    param_1[0xa7] = lVar16;
    param_1[0xa8] = lVar17;
    param_1[0xa9] = lVar18;
    func_0x000145f40560(param_1 + 0xaa,param_2 + 0xaa,0x90);
    lVar2 = param_2[0xbc];
    param_1[0xbc] = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 0x3c) = *(int *)(lVar2 + 0x3c) + 1;
      UNLOCK();
    }
    lVar2 = param_2[0xbd];
    lVar3 = param_2[0xbe];
    uVar19 = *(undefined8 *)((longlong)param_2 + 0x5ff);
    *(undefined8 *)((longlong)param_1 + 0x5f7) = *(undefined8 *)((longlong)param_2 + 0x5f7);
    *(undefined8 *)((longlong)param_1 + 0x5ff) = uVar19;
    param_1[0xbd] = lVar2;
    param_1[0xbe] = lVar3;
    goto code_r0x0001400ea3df;
  case 4:
  case 8:
  case 9:
    uVar19 = 0x500;
    break;
  case 5:
    uVar19 = 0x590;
    break;
  case 6:
  case 7:
    uVar19 = 0x510;
    break;
  case 10:
    uVar19 = 0x560;
    break;
  case 0xb:
    uVar19 = 0x5b0;
    break;
  case 0xc:
    uVar19 = 0x520;
    break;
  default:
    goto LAB_1400ea3e2;
  }
  func_0x000145f40560(param_1,param_2,uVar19);
code_r0x0001400ea3df:
  *param_1 = (longlong)(param_1 + 0x94);
LAB_1400ea3e2:
  return param_1;
}

