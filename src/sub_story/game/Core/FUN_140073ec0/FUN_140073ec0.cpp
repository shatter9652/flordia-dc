// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140073ec0  size: 158 bytes
// Name:    FUN_140073ec0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140073ec0(void)

{
  uint uVar1;
  longlong lVar2;
  longlong unaff_GS_OFFSET;
  undefined1 auVar3 [16];
  
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  lVar2 = **(longlong **)(unaff_GS_OFFSET + 0x58);
  uVar1 = *(uint *)(lVar2 + 0x12d8);
  if ((uVar1 & 6) == 0) {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
      uVar1 = *(uint *)(lVar2 + 0x12d8);
    }
    lVar2 = (ulonglong)(((uVar1 & 0x20) >> 5) << 7) + 0xa8;
  }
  else {
    lVar2 = 0x128;
  }
  auVar3 = vmaxss_avx(ZEXT416((uint)_DAT_145fc6ed8),ZEXT416(*(uint *)(lVar2 + 0x14a15e080)));
  auVar3._0_4_ = _DAT_145fc6ed8 / auVar3._0_4_;
  auVar3._4_12_ = SUB6012((undefined1  [60])0x0,0);
  return auVar3._0_8_;
}

