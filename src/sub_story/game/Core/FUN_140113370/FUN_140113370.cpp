// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140113370  size: 337 bytes
// Name:    FUN_140113370
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14014ba70, FUN_144e73f70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140113370(undefined2 *param_1,undefined8 param_2,undefined4 param_3,uint param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined2 uVar7;
  
  iVar3 = FUN_144e73f70(param_2,param_3);
  uVar2 = _DAT_148769c7e;
  uVar7 = _DAT_148769c7a;
  if (param_4 == 1) {
LAB_1401133c9:
    uVar6 = 0x40;
    goto LAB_1401133ce;
  }
  if (param_4 == 5) {
    uVar6 = 0xff;
    uVar7 = _DAT_149dd6f40;
code_r0x0001401133b4:
    uVar2 = FUN_14014ba70();
    goto LAB_1401133ce;
  }
  uVar2 = _DAT_148769c96;
  uVar7 = _DAT_148769b78;
  if (param_4 == 2) goto LAB_1401133c9;
  if ((param_4 & 0xfffffffe) == 6) {
    uVar6 = 0x40;
    puVar4 = (undefined2 *)&DAT_149c3d7e6;
LAB_14011342b:
    uVar7 = *puVar4;
    switch(param_4) {
    case 5:
      goto code_r0x0001401133b4;
    case 6:
    case 7:
      uVar2 = uRam00000001490a2e7a;
      break;
    case 8:
    case 9:
      uVar2 = uRam0000000149ab399a;
      break;
    case 10:
      uVar2 = uRam0000000149dd8f16;
      break;
    default:
      uVar2 = _DAT_149dd8f14;
      break;
    case 0xc:
      uVar2 = func_0x00014010a0b0();
      break;
    case 0xd:
      goto code_r0x00014011345e;
    }
  }
  else {
    uVar6 = 0xff;
    if (param_4 - 8 < 2) {
      puVar4 = (undefined2 *)&DAT_149dd6f40;
      goto LAB_14011342b;
    }
    uVar7 = _DAT_14909ebc0;
    if (param_4 != 0xd) {
      if (iVar3 == 2) {
        puVar4 = (undefined2 *)0x149dd8f12;
      }
      else if (iVar3 == 1) {
        puVar4 = (undefined2 *)0x149dd8f10;
      }
      else {
        puVar4 = (undefined2 *)&DAT_14909ebc0;
      }
      goto LAB_14011342b;
    }
code_r0x00014011345e:
    uVar2 = func_0x0001455af510();
  }
LAB_1401133ce:
  puVar5 = &DAT_14a9583d8;
  if (param_4 == 5) {
    puVar5 = &DAT_1485f9bf0;
  }
  uVar1 = *puVar5;
  *param_1 = uVar2;
  param_1[1] = uVar7;
  *(undefined1 *)(param_1 + 2) = uVar1;
  *(undefined1 *)((longlong)param_1 + 5) = 0;
  *(undefined4 *)(param_1 + 4) = uVar6;
  return;
}

