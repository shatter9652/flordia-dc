// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14004d9c0  size: 596 bytes
// Name:    FUN_14004d9c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14004d9c0(byte *param_1,undefined8 param_2)

{
  char cVar1;
  longlong unaff_GS_OFFSET;
  
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  if (*(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1448) == 0) {
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  cVar1 = func_0x000144e6f040(param_2,1);
  if (cVar1 != '\0') {
    *param_1 = *param_1 | 1;
  }
  cVar1 = func_0x000144e6f040(param_2,2);
  if (cVar1 != '\0') {
    *param_1 = *param_1 | 2;
  }
  cVar1 = func_0x000144e6f040(param_2,3);
  if (cVar1 != '\0') {
    *param_1 = *param_1 | 4;
  }
  cVar1 = func_0x000144e6f040(param_2,4);
  if (cVar1 == '\0') {
    cVar1 = func_0x000144e6f040(param_2,5);
    if (cVar1 == '\0') goto LAB_14004da6c;
  }
  *param_1 = *param_1 | 8;
LAB_14004da6c:
  cVar1 = func_0x000144e6f040(param_2,0);
  if (cVar1 != '\0') {
    *param_1 = *param_1 | 0x10;
  }
  cVar1 = func_0x000144e6f040(param_2,8);
  if (cVar1 != '\0') {
    *param_1 = *param_1 | 0x20;
  }
  cVar1 = func_0x000144e6f040(param_2,9);
  if (cVar1 != '\0') {
    *param_1 = *param_1 | 0x40;
  }
  cVar1 = func_0x000144e6f040(param_2,10);
  if (cVar1 != '\0') {
    *param_1 = *param_1 | 0x80;
  }
  cVar1 = func_0x000144e6f040(param_2,0xb);
  if (cVar1 != '\0') {
    param_1[1] = param_1[1] | 1;
  }
  cVar1 = func_0x000144e6f040(param_2,0xc);
  if (cVar1 != '\0') {
    param_1[1] = param_1[1] | 2;
  }
  cVar1 = func_0x000144e6f040(param_2,0xd);
  if (cVar1 != '\0') {
    param_1[1] = param_1[1] | 4;
  }
  cVar1 = func_0x000144e6f040(param_2,0xe);
  if (cVar1 != '\0') {
    param_1[1] = param_1[1] | 8;
  }
  cVar1 = func_0x000144e6f040(param_2,0xf);
  if (cVar1 != '\0') {
    param_1[1] = param_1[1] | 0x10;
  }
  cVar1 = func_0x000144e6f040(param_2,0x10);
  if (cVar1 != '\0') {
    param_1[1] = param_1[1] | 0x20;
  }
  cVar1 = func_0x000144e6f040(param_2,0x11);
  if (cVar1 != '\0') {
    param_1[1] = param_1[1] | 0x40;
  }
  cVar1 = func_0x000144e6f040(param_2,0x12);
  if (cVar1 != '\0') {
    param_1[1] = param_1[1] | 0x80;
  }
  cVar1 = func_0x000144e6f040(param_2,0x13);
  if (cVar1 != '\0') {
    param_1[2] = param_1[2] | 1;
  }
  return;
}

