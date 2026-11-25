// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14013a6f0  size: 463 bytes
// Name:    FUN_14013a6f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013a6f0(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  char cVar4;
  longlong lVar5;
  int iVar6;
  longlong unaff_GS_OFFSET;
  undefined1 auVar7 [16];
  
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  cVar4 = DAT_149c3d7e4;
  lVar2 = **(longlong **)(unaff_GS_OFFSET + 0x58);
  lVar5 = *(longlong *)(lVar2 + 0x12a8);
  if (*(char *)(lVar5 + 0x1236c) != DAT_149c3d7e4) {
    *(char *)(lVar5 + 0x1236c) = DAT_149c3d7e4;
    *(ulonglong *)(lVar5 + 0x12520) =
         (ulonglong)(*(char *)(lVar5 + 0x123ec) != cVar4) << 0x13 |
         *(ulonglong *)(lVar5 + 0x12520) & 0xfffffffffff7ffff;
  }
  plVar1 = (longlong *)(lVar2 + 0x12a8);
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    lVar5 = *plVar1;
  }
  if (*(short *)(lVar5 + 0x12378) != _DAT_149c3d7e8) {
    *(short *)(lVar5 + 0x12378) = _DAT_149c3d7e8;
    *(byte *)(lVar5 + 0x12522) = *(byte *)(lVar5 + 0x12522) | 0x20;
  }
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    lVar5 = *plVar1;
  }
  auVar7._4_4_ = _DAT_145fc6ed8;
  auVar7._0_4_ = _DAT_145fc6ed8;
  auVar7._8_4_ = _DAT_145fc6ed8;
  auVar7._12_4_ = _DAT_145fc6ed8;
  auVar3 = vcmpps_avx(auVar7,*(undefined1 (*) [16])(lVar5 + 0x12310),4);
  if ((((SUB161(auVar3 >> 0x1f,0) & 1) != 0 || (SUB161(auVar3 >> 0x3f,0) & 1) != 0) ||
      (SUB161(auVar3 >> 0x5f,0) & 1) != 0) || auVar3[0xf] < '\0') {
    *(undefined1 (*) [16])(lVar5 + 0x12310) = auVar7;
    auVar3 = vcmpps_avx(auVar7,*(undefined1 (*) [16])(lVar5 + 0x12390),4);
    *(ulonglong *)(lVar5 + 0x12520) =
         (ulonglong)
         ((uint)((((SUB161(auVar3 >> 0x1f,0) & 1) != 0 || (SUB161(auVar3 >> 0x3f,0) & 1) != 0) ||
                 (SUB161(auVar3 >> 0x5f,0) & 1) != 0) || auVar3[0xf] < '\0') << 0x1a) |
         *(ulonglong *)(lVar5 + 0x12520) & 0xfffffffffbffffff;
  }
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    lVar5 = *plVar1;
  }
  if (*(longlong *)(lVar5 + 0x12360) != -1) {
    *(undefined8 *)(lVar5 + 0x12360) = 0xffffffffffffffff;
    *(byte *)(lVar5 + 0x12522) = *(byte *)(lVar5 + 0x12522) | 0x20;
  }
  iVar6 = *(int *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x998);
  if (iVar6 != -2) {
    if (iVar6 < 0) {
      iVar6 = 2;
    }
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    lVar2 = *plVar1;
    *(undefined1 *)(lVar2 + 0x12741) = 0;
    *(char *)(lVar2 + 0x12742) = (char)iVar6;
  }
  return;
}

