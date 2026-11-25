// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400be720  size: 293 bytes
// Name:    FUN_1400be720
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400be720(undefined8 *param_1)

{
  longlong lVar1;
  byte bVar2;
  byte *pbVar3;
  longlong unaff_GS_OFFSET;
  
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    pbVar3 = (byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1294);
    bVar2 = *pbVar3;
    if (*(char *)((*(longlong **)(unaff_GS_OFFSET + 0x58))[__tls_index] + 8) == '\0') {
      func_0x0001455db994();
    }
  }
  else {
    pbVar3 = (byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1294);
    bVar2 = *pbVar3;
  }
  lVar1 = **(longlong **)(unaff_GS_OFFSET + 0x58);
  if (*(longlong *)((ulonglong)((uint)bVar2 + (uint)*(byte *)(lVar1 + 0x1110)) * 8 + 0x14908f690) !=
      0) {
    func_0x0001455cc270(param_1[1]);
  }
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    bVar2 = *pbVar3;
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
  }
  else {
    bVar2 = *pbVar3;
  }
  if (*(longlong *)((ulonglong)((uint)bVar2 + (uint)*(byte *)(lVar1 + 0x1110)) * 8 + 0x14908f660) !=
      0) {
    *(undefined8 *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1218) = *param_1;
    return;
  }
  return;
}

