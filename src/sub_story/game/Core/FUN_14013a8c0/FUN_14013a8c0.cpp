// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14013a8c0  size: 532 bytes
// Name:    FUN_14013a8c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013a8c0(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  short sVar4;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong unaff_GS_OFFSET;
  undefined1 auVar8 [16];
  
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  sVar4 = _DAT_148769ca2;
  lVar2 = **(longlong **)(unaff_GS_OFFSET + 0x58);
  lVar6 = *(longlong *)(lVar2 + 0x12a8);
  if (*(short *)(lVar6 + 0x1236e) != _DAT_148769ca2) {
    *(short *)(lVar6 + 0x1236e) = _DAT_148769ca2;
    *(ulonglong *)(lVar6 + 0x12520) =
         (ulonglong)(*(short *)(lVar6 + 0x123ee) != sVar4) << 0x14 |
         *(ulonglong *)(lVar6 + 0x12520) & 0xffffffffffefffff;
  }
  cVar5 = DAT_148769ca4;
  if (*(char *)(lVar6 + 0x1236c) != DAT_148769ca4) {
    *(char *)(lVar6 + 0x1236c) = DAT_148769ca4;
    if (*(char *)(lVar6 + 0x123ec) == cVar5) {
      uVar7 = *(ulonglong *)(lVar6 + 0x12520) & 0xfffffffffff7ffff;
    }
    else {
      uVar7 = *(ulonglong *)(lVar6 + 0x12520) | 0x80000;
    }
    *(ulonglong *)(lVar6 + 0x12520) = uVar7;
  }
  if (*(short *)(lVar6 + 0x12378) != _DAT_148769ca0) {
    *(short *)(lVar6 + 0x12378) = _DAT_148769ca0;
    *(byte *)(lVar6 + 0x12522) = *(byte *)(lVar6 + 0x12522) | 0x20;
  }
  plVar1 = (longlong *)(lVar2 + 0x12a8);
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    lVar6 = *plVar1;
  }
  if (*(int *)(lVar6 + 0x12368) != 0xff) {
    *(undefined4 *)(lVar6 + 0x12368) = 0xff;
    *(ulonglong *)(lVar6 + 0x12520) =
         (ulonglong)((uint)(*(int *)(lVar6 + 0x123e8) != 0xff) << 0x19) |
         *(ulonglong *)(lVar6 + 0x12520) & 0xfffffffffdffffff;
  }
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    lVar6 = *plVar1;
  }
  auVar8._4_4_ = _DAT_145fc6ed8;
  auVar8._0_4_ = _DAT_145fc6ed8;
  auVar8._8_4_ = _DAT_145fc6ed8;
  auVar8._12_4_ = _DAT_145fc6ed8;
  auVar3 = vcmpps_avx(auVar8,*(undefined1 (*) [16])(lVar6 + 0x12310),4);
  if ((((SUB161(auVar3 >> 0x1f,0) & 1) != 0 || (SUB161(auVar3 >> 0x3f,0) & 1) != 0) ||
      (SUB161(auVar3 >> 0x5f,0) & 1) != 0) || auVar3[0xf] < '\0') {
    *(undefined1 (*) [16])(lVar6 + 0x12310) = auVar8;
    auVar3 = vcmpps_avx(auVar8,*(undefined1 (*) [16])(lVar6 + 0x12390),4);
    *(ulonglong *)(lVar6 + 0x12520) =
         (ulonglong)
         ((uint)((((SUB161(auVar3 >> 0x1f,0) & 1) != 0 || (SUB161(auVar3 >> 0x3f,0) & 1) != 0) ||
                 (SUB161(auVar3 >> 0x5f,0) & 1) != 0) || auVar3[0xf] < '\0') << 0x1a) |
         *(ulonglong *)(lVar6 + 0x12520) & 0xfffffffffbffffff;
  }
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    lVar6 = *plVar1;
  }
  if (*(longlong *)(lVar6 + 0x12360) != -1) {
    *(undefined8 *)(lVar6 + 0x12360) = 0xffffffffffffffff;
    *(byte *)(lVar6 + 0x12522) = *(byte *)(lVar6 + 0x12522) | 0x20;
  }
  return;
}

