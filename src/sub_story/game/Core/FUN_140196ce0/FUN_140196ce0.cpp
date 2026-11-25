// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140196ce0  size: 220 bytes
// Name:    FUN_140196ce0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450508b0, FUN_14526e1b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140196ce0(longlong param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined4 uStack_248;
  undefined8 auStack_238 [67];
  
  iVar2 = 0;
  if (((param_2 == 0) && (iVar2 = 0, *(char *)(param_1 + 0x1569) == '\x01')) &&
     (iVar2 = 0, *(char *)(param_1 + 0x156a) == '\x01')) {
    cVar1 = func_0x000144dacd70();
    if (cVar1 == '\0') {
      iVar2 = -(_DAT_14abbef50 / 2);
    }
  }
  uStack_258 = 0;
  uStack_250 = 0;
  uStack_248 = 0;
  auStack_238[0] = 0x20;
  uStack_278 = 0;
  uStack_270 = 0;
  uStack_268 = 0;
  uStack_264 = 0;
  uStack_260 = 0;
  FUN_14526e1b0(&uStack_278);
  uStack_288 = CONCAT44(uStack_264,uStack_268);
  uStack_280 = uStack_260;
  uStack_2a8 = uStack_258;
  uStack_2a0 = uStack_250;
  uStack_298 = uStack_278;
  uStack_290 = uStack_270;
  FUN_1450508b0(param_1 + 0xfb8,&uStack_298,&uStack_2a8,uStack_248,auStack_238,&uStack_288,iVar2);
  return;
}

