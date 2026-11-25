// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140120790  size: 536 bytes
// Name:    FUN_140120790
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1422159f0, FUN_140c9e330
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140120790(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  short sVar3;
  longlong lVar4;
  longlong unaff_GS_OFFSET;
  longlong lStack_18;
  
  FUN_1422159f0();
  QueryPerformanceCounter(&lStack_18);
  func_0x0001443a4710(param_1 + 0x1c,
                      (float)(lStack_18 - *(longlong *)(param_1 + 0x10)) * _DAT_14abc3ca4);
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  sVar3 = _DAT_149dd6f40;
  lVar2 = **(longlong **)(unaff_GS_OFFSET + 0x58);
  lVar4 = *(longlong *)(lVar2 + 0x12a8);
  if (*(short *)(lVar4 + 0x1236e) != _DAT_149dd6f40) {
    *(short *)(lVar4 + 0x1236e) = _DAT_149dd6f40;
    *(ulonglong *)(lVar4 + 0x12520) =
         (ulonglong)(*(short *)(lVar4 + 0x123ee) != sVar3) << 0x14 |
         *(ulonglong *)(lVar4 + 0x12520) & 0xffffffffffefffff;
  }
  plVar1 = (longlong *)(lVar2 + 0x12a8);
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    lVar4 = *plVar1;
  }
  if (*(int *)(lVar4 + 0x12368) != 0xff) {
    *(undefined4 *)(lVar4 + 0x12368) = 0xff;
    *(ulonglong *)(lVar4 + 0x12520) =
         (ulonglong)((uint)(*(int *)(lVar4 + 0x123e8) != 0xff) << 0x19) |
         *(ulonglong *)(lVar4 + 0x12520) & 0xfffffffffdffffff;
  }
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    lVar4 = *plVar1;
  }
  sVar3 = _DAT_149c3d7e6;
  if (*(short *)(lVar4 + 0x1236e) != _DAT_149c3d7e6) {
    *(short *)(lVar4 + 0x1236e) = _DAT_149c3d7e6;
    *(ulonglong *)(lVar4 + 0x12520) =
         (ulonglong)(*(short *)(lVar4 + 0x123ee) != sVar3) << 0x14 |
         *(ulonglong *)(lVar4 + 0x12520) & 0xffffffffffefffff;
  }
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    lVar4 = *plVar1;
  }
  if (*(int *)(lVar4 + 0x12368) != 0xff) {
    *(undefined4 *)(lVar4 + 0x12368) = 0xff;
    *(ulonglong *)(lVar4 + 0x12520) =
         (ulonglong)((uint)(*(int *)(lVar4 + 0x123e8) != 0xff) << 0x19) |
         *(ulonglong *)(lVar4 + 0x12520) & 0xfffffffffdffffff;
  }
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    lVar4 = *plVar1;
  }
  FUN_140c9e330(lVar4);
  return;
}

