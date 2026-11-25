// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140123950  size: 544 bytes
// Name:    FUN_140123950
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fd2cf0, FUN_144e310f0, FUN_144fd29e0, FUN_144e31500, FUN_140123b70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140123950(void)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  ushort uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong unaff_GS_OFFSET;
  
  uVar5 = _DAT_1476511d0;
  if (DAT_14765118c == '\x01') {
    _DAT_147651188 = ~_DAT_147651188 & 1;
    lVar6 = func_0x000144fd29c0(0x10);
    if (lVar6 != 0) {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      plVar3 = *(longlong **)(unaff_GS_OFFSET + 0x58);
      plVar1 = (longlong *)(*plVar3 + 0x12a8);
      *(undefined1 *)(*plVar1 + 0x1220c) = 0;
      FUN_140123b70();
      if (*(char *)(plVar3[__tls_index] + 8) == '\0') {
        func_0x0001455db994();
      }
      lVar7 = *plVar1;
      *(undefined1 *)(lVar7 + 0x1220c) = 1;
      uVar2 = *_DAT_147651178;
      if ((uVar2 >> 0x10 & 1) != 0) {
        if (*(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
            '\0') {
          func_0x0001455db994();
          lVar7 = *plVar1;
        }
        uVar4 = _DAT_147651170;
        if ((_DAT_147651170 != 0) &&
           (uVar8 = (ulonglong)(_DAT_147651170 >> 2), *(longlong *)(lVar7 + 0x40 + uVar8 * 8) != 0))
        {
          *(undefined8 *)(lVar7 + 0x40 + uVar8 * 8) = 0;
          *(ulonglong *)(lVar7 + 0x20) = *(ulonglong *)(lVar7 + 0x20) | 1L << ((byte)uVar4 & 3);
          func_0x000144d9dcb0(lVar7,uVar4,0);
          *(undefined2 *)(lVar7 + 0x6200 + uVar8 * 2) = 0;
        }
      }
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      FUN_144e31500(*plVar1);
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      FUN_144fd29e0(*plVar1,lVar6);
      if ((uVar2 >> 0x10 & 1) != 0) {
        if (*(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
            '\0') {
          func_0x0001455db994();
        }
        FUN_144e310f0(*plVar1,lVar6,uVar5);
        if (*(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
            '\0') {
          func_0x0001455db994();
        }
        FUN_144fd2cf0();
      }
    }
    DAT_1476511a0 = 1;
  }
  return;
}

