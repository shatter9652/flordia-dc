// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401812e0  size: 218 bytes
// Name:    FUN_1401812e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401812e0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar3 = param_1[2];
  if (param_3 < (ulonglong)param_1[1]) {
    if (uVar3 >> 1 <= param_3) goto LAB_140181397;
    if (param_3 == 0) goto LAB_140181377;
    lVar1 = *param_1;
    uVar3 = param_3 + 3 & 0xfffffffffffffffc;
    if (lVar1 != 0) goto LAB_1401813a3;
    puVar4 = &uStack_20;
LAB_140181335:
    *puVar4 = 2;
    lVar1 = (**(code **)(*_DAT_14abcc310 + 0x70))();
    goto LAB_140181390;
  }
  if ((param_3 <= uVar3) || (uVar2 = (param_3 >> 2) + param_3, uVar3 == uVar2)) goto LAB_140181397;
  if (uVar2 == 0) {
LAB_140181377:
    if (*param_1 != 0) {
      (**(code **)(*_DAT_14abcc310 + 0x60))();
      lVar1 = 0;
      uVar3 = 0;
      goto LAB_140181390;
    }
    uVar3 = 0;
  }
  else {
    lVar1 = *param_1;
    uVar3 = uVar2 + 3 & 0xfffffffffffffffc;
    if (lVar1 == 0) {
      puVar4 = &uStack_1c;
      goto LAB_140181335;
    }
LAB_1401813a3:
    lVar1 = (**(code **)(*_DAT_14abcc310 + 0x58))(_DAT_14abcc310,lVar1,uVar3 * 8);
LAB_140181390:
    *param_1 = lVar1;
  }
  param_1[2] = uVar3;
LAB_140181397:
  param_1[1] = param_3;
  return;
}

