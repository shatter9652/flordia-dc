// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140093bb0  size: 479 bytes
// Name:    FUN_140093bb0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_140093bb0(byte *param_1)

{
  byte *pbVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  byte bVar5;
  longlong unaff_GS_OFFSET;
  
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  plVar3 = *(longlong **)(unaff_GS_OFFSET + 0x58);
  bVar5 = *(byte *)(*plVar3 + 0x1414);
  *param_1 = bVar5 & 1;
  if (*(char *)(plVar3[__tls_index] + 8) == '\0') {
    func_0x0001455db994();
    lVar4 = (*(longlong **)(unaff_GS_OFFSET + 0x58))[__tls_index];
    pbVar1 = (byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1414);
    *pbVar1 = *pbVar1 | 1;
    if (*(char *)(lVar4 + 8) != '\0') goto LAB_140093c21;
    func_0x0001455db994();
    bVar5 = *(byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1418);
    cVar2 = *(char *)((*(longlong **)(unaff_GS_OFFSET + 0x58))[__tls_index] + 8);
    param_1[1] = bVar5 & 1;
    if (cVar2 != '\0') goto LAB_140093c3b;
    func_0x0001455db994();
    lVar4 = (*(longlong **)(unaff_GS_OFFSET + 0x58))[__tls_index];
    pbVar1 = (byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1418);
    *pbVar1 = *pbVar1 | 1;
    if (*(char *)(lVar4 + 8) == '\0') {
      func_0x0001455db994();
      bVar5 = *(byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1419);
      cVar2 = *(char *)((*(longlong **)(unaff_GS_OFFSET + 0x58))[__tls_index] + 8);
      param_1[2] = bVar5 & 1;
      if (cVar2 == '\0') {
        func_0x0001455db994();
        bVar5 = *(byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1419);
      }
      goto LAB_140093c6a;
    }
  }
  else {
    *(byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1414) = bVar5 | 1;
LAB_140093c21:
    bVar5 = *(byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1418);
    param_1[1] = bVar5 & 1;
LAB_140093c3b:
    *(byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1418) = bVar5 | 1;
  }
  bVar5 = *(byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1419);
  param_1[2] = bVar5 & 1;
LAB_140093c6a:
  *(byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1419) = bVar5 | 1;
  return param_1;
}

