// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400fb230  size: 268 bytes
// Name:    FUN_1400fb230
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400fb230(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong unaff_GS_OFFSET;
  
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  *(undefined4 *)((longlong)param_1 + 0x94) = 1;
  uVar3 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar3;
  pcVar2 = (code *)param_1[0xd];
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)((longlong)param_2 + 0x1fU & 0xfffffffffffffff0,
              (longlong)param_1 + 0x1fU & 0xfffffffffffffff0);
  }
  param_2[0xc] = param_1[0xc];
  param_2[0xd] = pcVar2;
  param_2[0xe] = param_1[0xe];
  uVar3 = param_1[0x10];
  param_2[0xf] = param_1[0xf];
  param_2[0x10] = uVar3;
  *(undefined4 *)(param_2 + 0x11) = *(undefined4 *)(param_1 + 0x11);
  *(undefined4 *)((longlong)param_2 + 0x8c) = *(undefined4 *)((longlong)param_1 + 0x8c);
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    cVar1 = *(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
    *(undefined4 *)(param_2 + 0x12) = *(undefined4 *)(param_1 + 0x12);
    if (cVar1 == '\0') {
      func_0x0001455db994();
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x12) = *(undefined4 *)(param_1 + 0x12);
  }
  *(undefined8 *)((longlong)param_2 + 0x94) = *(undefined8 *)((longlong)param_1 + 0x94);
  return;
}

