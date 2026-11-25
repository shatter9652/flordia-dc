// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a7930  size: 313 bytes
// Name:    FUN_1401a7930
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401a7930(ulonglong param_1,float *param_2,uint *param_3)

{
  float fVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  uint uVar4;
  longlong unaff_GS_OFFSET;
  uint uVar5;
  
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  lVar3 = **(longlong **)(unaff_GS_OFFSET + 0x58);
  uVar4 = *(uint *)(lVar3 + 0x12d8);
  if ((uVar4 & 6) == 0) {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
      uVar4 = *(uint *)(lVar3 + 0x12d8);
    }
    lVar3 = (ulonglong)(((uVar4 & 0x20) >> 5) << 7) + 0x80;
  }
  else {
    lVar3 = 0x100;
  }
  fVar1 = *(float *)(lVar3 + 0x14a15e080);
  *param_2 = fVar1;
  uVar4 = (uint)param_1;
  if (uVar4 < 0x31) {
    if ((0x100001fc00000U >> (param_1 & 0x3f) & 1) == 0) {
      if ((0x80000040000U >> (param_1 & 0x3f) & 1) == 0) goto LAB_1401a79db;
      goto LAB_1401a79e5;
    }
  }
  else {
LAB_1401a79db:
    if (uVar4 != 0x55) {
      uVar5 = _DAT_1468bd190;
      if (uVar4 != 0x56) goto LAB_1401a7a09;
LAB_1401a79e5:
      *param_2 = fVar1 * _DAT_1468bd13c;
      if (((6 < uVar4 - 0x16) && (uVar4 != 0x30)) && (uVar5 = _DAT_1468bd190, uVar4 != 0x55))
      goto LAB_1401a7a09;
    }
  }
  auVar2 = vminss_avx(ZEXT416(_DAT_1468bd190),ZEXT416(_DAT_145fc6ed8));
  uVar5 = auVar2._0_4_;
LAB_1401a7a09:
  *param_3 = uVar5;
  return;
}

