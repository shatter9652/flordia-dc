// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b4390  size: 367 bytes
// Name:    FUN_1401b4390
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e08970
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1401b4390(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong unaff_GS_OFFSET;
  
  *param_1 = &UNK_14669ff50;
  param_1[1] = param_2;
  FUN_144e08970(param_1 + 2);
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 3;
  *(undefined1 *)((longlong)param_1 + 0x44) = 0;
  *(undefined1 (*) [32])((longlong)param_1 + 0x65) = ZEXT1232(ZEXT812(0));
  *(undefined1 (*) [32])((longlong)param_1 + 0x76) = ZEXT1232(ZEXT812(0));
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  lVar2 = **(longlong **)(unaff_GS_OFFSET + 0x58);
  lVar3 = *(longlong *)(lVar2 + 0x1448);
  if (lVar3 == 0) {
    param_1[0x14] = 0;
  }
  plVar1 = (longlong *)(lVar2 + 0x1448);
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    lVar3 = *plVar1;
  }
  if (lVar3 == 0) {
    param_1[0x15] = 0;
  }
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    lVar3 = *plVar1;
  }
  if (lVar3 == 0) {
    param_1[0x16] = 0;
  }
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    lVar3 = *plVar1;
  }
  if (lVar3 == 0) {
    param_1[0x17] = 0;
  }
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  return param_1;
}

