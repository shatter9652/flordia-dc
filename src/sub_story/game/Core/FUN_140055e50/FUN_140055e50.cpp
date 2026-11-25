// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140055e50  size: 593 bytes
// Name:    FUN_140055e50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140274750, FUN_142495400, FUN_144e34030, FUN_1443c5b80, FUN_140037a50, FUN_140056cb0, FUN_1443c5570
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140055e50(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint *puVar3;
  char cVar4;
  int iVar5;
  longlong unaff_GS_OFFSET;
  longlong lStack_48;
  longlong lStack_40;
  longlong lStack_30;
  int iStack_28;
  
  lVar1 = **(longlong **)(unaff_GS_OFFSET + 0x58);
  *(longlong *)(lVar1 + 0x1170) = param_1;
  cVar4 = FUN_1443c5570(param_1,0,0);
  if ((cVar4 == '\0') && (iVar5 = FUN_144e34030(param_1), iVar5 != 0)) {
    cVar4 = FUN_142495400(*(undefined8 *)(param_1 + 0x40));
    if (cVar4 != '\0') {
      return;
    }
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    func_0x000144e72fd0(&lStack_48);
    if ((((*(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1148) != lStack_48) ||
         (*(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1150) != lStack_40)) ||
        (*(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1160) != lStack_30)) ||
       (*(int *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1168) != iStack_28)) {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      func_0x0001452db2e0(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1148,0);
    }
    if (iVar5 == 2) {
      FUN_1443c5b80(*(undefined8 *)(param_1 + 0x40),0);
    }
    else {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      lVar2 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12a8);
      FUN_140274750(lVar2,*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8),0,0);
      if (((**(uint **)(lVar2 + 0x12198) & 0xc000000) == 0) &&
         (cVar4 = func_0x000144e88f60(lVar2), cVar4 != '\0')) {
        puVar3 = *(uint **)(lVar2 + 0x12198);
        while ((*puVar3 & 0xe000000) != 0x2000000) {
          FUN_140037a50(puVar3,0,1);
        }
        FUN_140056cb0(lVar2);
      }
    }
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    lVar2 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12a8);
    if (*(char *)(lVar2 + 0x1237d) != '\x04') {
      *(undefined1 *)(lVar2 + 0x1237d) = 4;
      *(ulonglong *)(lVar2 + 0x12520) =
           (ulonglong)(*(char *)(lVar2 + 0x123fd) != '\x04') << 0x12 |
           *(ulonglong *)(lVar2 + 0x12520) & 0xfffffffffffbffff;
    }
  }
  *(undefined8 *)(lVar1 + 0x1170) = 0;
  return;
}

