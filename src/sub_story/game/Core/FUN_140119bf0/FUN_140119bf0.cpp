// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140119bf0  size: 379 bytes
// Name:    FUN_140119bf0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1453fa0a0, FUN_140119d70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140119bf0(longlong *param_1,longlong param_2,undefined1 param_3,char param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  longlong unaff_GS_OFFSET;
  longlong lStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  *param_1 = param_2;
  *(undefined1 *)((longlong)param_1 + 9) = param_3;
  cVar3 = *(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
  if (cVar3 == '\0') {
    func_0x0001455db994();
    cVar3 = *(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
  }
  plVar1 = (longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12a8);
  lVar4 = *plVar1;
  cVar2 = *(char *)(lVar4 + 0x1237c);
  *(char *)(param_1 + 1) = cVar2;
  if (cVar2 == '\x01') {
    if (cVar3 == '\0') {
      func_0x0001455db994();
      lVar4 = *plVar1;
    }
    FUN_1453fa0a0(lVar4);
    cVar3 = *(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
  }
  if (cVar3 == '\0') {
    func_0x0001455db994();
  }
  lStack_30 = param_2;
  FUN_140119d70(*plVar1,param_2 != 0,&lStack_30,0);
  if (((param_2 != 0) && (param_4 != '\0')) && (DAT_14abbe2e0 == '\0')) {
    cVar3 = func_0x000144f7b6a0();
    if ((cVar3 == '\0') && (DAT_14abbe2e1 == '\0')) {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      uStack_28 = *param_5;
      uStack_20 = param_5[1];
      lVar4 = *plVar1;
      *(undefined1 *)(lVar4 + 0x121a4) = 1;
      func_0x00014011f830(lVar4,0xff,&uStack_28,0,0,0,0);
    }
  }
  return;
}

