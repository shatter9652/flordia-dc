// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14010a0c0  size: 472 bytes
// Name:    FUN_14010a0c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14010a0c0(float *param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  float fVar4;
  bool bVar5;
  longlong lStack_30;
  
  if (DAT_14a943998 != '\x01') {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 4);
  if ((lVar1 == -2) || ((lVar1 != -1 && (cVar3 = func_0x000144dad000(lVar1), cVar3 == '\0')))) {
    bVar2 = false;
    bVar5 = false;
  }
  else {
    func_0x000144dace90(&lStack_30,0);
    bVar5 = lVar1 != lStack_30;
    if (bVar5) {
      *(longlong *)(param_1 + 4) = lStack_30;
    }
    bVar2 = true;
  }
  lVar1 = *(longlong *)(param_1 + 6);
  if ((lVar1 == -2) || ((lVar1 != -1 && (cVar3 = func_0x000144dad000(lVar1), cVar3 == '\0')))) {
    bVar2 = false;
  }
  else {
    func_0x000144dace90(&lStack_30,1);
    if (lVar1 != lStack_30) {
      bVar5 = true;
      *(longlong *)(param_1 + 6) = lStack_30;
    }
  }
  lVar1 = *(longlong *)(param_1 + 8);
  if ((lVar1 == -2) || ((lVar1 != -1 && (cVar3 = func_0x000144dad000(lVar1), cVar3 == '\0')))) {
    bVar2 = false;
  }
  else {
    func_0x000144dace90(&lStack_30,2);
    if (lVar1 != lStack_30) {
      bVar5 = true;
      *(longlong *)(param_1 + 8) = lStack_30;
    }
  }
  lVar1 = *(longlong *)(param_1 + 10);
  if ((lVar1 == -2) || ((lVar1 != -1 && (cVar3 = func_0x000144dad000(lVar1), cVar3 == '\0')))) {
    bVar2 = false;
  }
  else {
    func_0x000144dace90(&lStack_30,3);
    if (lVar1 != lStack_30) {
      bVar5 = true;
      *(longlong *)(param_1 + 10) = lStack_30;
    }
  }
  lVar1 = *(longlong *)(param_1 + 0xc);
  if ((lVar1 == -2) || ((lVar1 != -1 && (cVar3 = func_0x000144dad000(lVar1), cVar3 == '\0')))) {
    if (bVar5) goto LAB_14010a267;
  }
  else {
    func_0x000144dace90(&lStack_30,4);
    if (lVar1 != lStack_30) {
      *(longlong *)(param_1 + 0xc) = lStack_30;
      goto LAB_14010a267;
    }
    if (bVar2 || bVar5) goto LAB_14010a267;
  }
  fVar4 = param_1[1];
  if ((9 < (uint)fVar4) && (0.0 < *param_1)) {
    QueryPerformanceCounter(&lStack_30);
    if (*param_1 < (float)(lStack_30 - *(longlong *)(param_1 + 2)) * _DAT_149e4f5c0) {
      func_0x000142474870();
LAB_14010a267:
      QueryPerformanceCounter(&lStack_30);
      *(longlong *)(param_1 + 2) = lStack_30;
      param_1[1] = 0.0;
      return;
    }
    fVar4 = param_1[1];
  }
  param_1[1] = (float)((int)fVar4 + 1);
  return;
}

