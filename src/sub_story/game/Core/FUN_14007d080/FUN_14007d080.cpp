// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14007d080  size: 281 bytes
// Name:    FUN_14007d080
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144d9e5f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14007d080(void)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  undefined1 (*pauVar4) [16];
  ulonglong uVar5;
  longlong unaff_GS_OFFSET;
  undefined1 auVar6 [16];
  
  lVar2 = _DAT_14764fb90;
  uVar5 = 0xffffffff;
  if (*(longlong *)(_DAT_14764fb90 + 0x20) != 0) {
    pauVar4 = (undefined1 (*) [16])func_0x0001401377e0(_DAT_14764fb90);
    if (pauVar4 != (undefined1 (*) [16])0x0) {
      auVar6._0_12_ = ZEXT812(0);
      auVar6._12_4_ = 0;
      *(undefined1 (*) [32])(pauVar4 + 7) = ZEXT1632(auVar6);
      *(undefined1 (*) [32])(pauVar4 + 5) = ZEXT1632(auVar6);
      *(undefined1 (*) [32])(pauVar4 + 3) = ZEXT1632(auVar6);
      *(undefined1 (*) [32])(pauVar4 + 1) = ZEXT1632(auVar6);
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      *(undefined8 *)pauVar4[9] = 0;
      pauVar4[9][8] = 5;
      FUN_144d9e5f0(pauVar4 + 10);
      FUN_144d9e5f0(pauVar4 + 0x14);
      *(undefined1 (*) [32])(pauVar4 + 0x1e) = ZEXT1232(ZEXT812(0));
      *(undefined1 (*) [32])(pauVar4 + 0x20) = ZEXT1232(ZEXT812(0));
      pauVar4[0x22][0] = pauVar4[0x22][0] & 0xfe;
      *pauVar4 = ZEXT416(0) << 0x20;
    }
    uVar3 = (uint)((ulonglong)((longlong)pauVar4 - *(longlong *)(lVar2 + 0x10)) /
                  *(ulonglong *)(lVar2 + 0x28));
    puVar1 = (uint *)(*(longlong *)(lVar2 + 0x40) + (ulonglong)(uVar3 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << (uVar3 & 0x1f);
    if (pauVar4 != (undefined1 (*) [16])0x0) {
      uVar5 = (ulonglong)((longlong)pauVar4 - *(longlong *)(_DAT_14764fb90 + 0x10)) /
              *(ulonglong *)(_DAT_14764fb90 + 0x28);
    }
  }
  return uVar5 & 0xffffffff;
}

