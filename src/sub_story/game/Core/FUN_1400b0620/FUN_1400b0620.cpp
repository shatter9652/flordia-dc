// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b0620  size: 149 bytes
// Name:    FUN_1400b0620
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400b06f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400b0620(char *param_1,char param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  
  LOCK();
  param_1[0x4c] = '\0';
  param_1[0x4d] = '\0';
  param_1[0x4e] = '\0';
  param_1[0x4f] = '\0';
  UNLOCK();
  param_1[0x2050] = '\0';
  param_1[0x2051] = '\0';
  param_1[0x2052] = '\0';
  param_1[0x2053] = '\0';
  _DAT_147c179f8 = _DAT_147c179f8 + 1;
  *(longlong *)(param_1 + 8) = _DAT_147c179f8;
  *param_1 = param_2;
  param_1[0x10] = (char)param_3;
  *(undefined8 *)(param_1 + 0x18) = param_4;
  param_1[0x20] = '\0';
  param_1[0x21] = '\0';
  param_1[0x22] = '\0';
  param_1[0x23] = '\0';
  param_1[0x24] = '\0';
  param_1[0x25] = '\0';
  param_1[0x26] = '\0';
  param_1[0x27] = '\0';
  param_1[0x11] = '\0';
  FUN_1400b06f0(param_2,param_3 ^ 1);
  cVar1 = func_0x0001400b06c0(param_1 + 0x2058);
  if (cVar1 == '\0') {
    do {
      lVar2 = func_0x0001455b5f60(param_1 + 0x2058);
    } while (lVar2 != 0);
  }
  param_1[0x8060] = param_2 == '\0' & (byte)(param_3 ^ 1);
  return;
}

