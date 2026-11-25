// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c5130  size: 942 bytes
// Name:    FUN_1400c5130
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145578740, FUN_144e55600
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400c5130(longlong param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  char cVar8;
  ulonglong uVar9;
  longlong unaff_GS_OFFSET;
  
  lVar7 = _DAT_14a943760;
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  lVar4 = **(longlong **)(unaff_GS_OFFSET + 0x58);
  uVar9 = (ulonglong)(param_2 - 0x16U);
  *(undefined1 *)(lVar4 + 0x1280) = 0;
  *(undefined1 *)(lVar4 + 0x97c) = 1;
  if (param_2 - 0x16U < 0x40) {
    puVar1 = (undefined1 *)(lVar4 + 0x97c);
    if ((0x800000000400007fU >> (uVar9 & 0x3f) & 1) != 0) {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
        lVar5 = **(longlong **)(unaff_GS_OFFSET + 0x58);
        cVar8 = *(char *)((*(longlong **)(unaff_GS_OFFSET + 0x58))[__tls_index] + 8);
        *(uint *)(lVar5 + 0x978) = param_3 == 3 | 6;
        *(undefined1 *)((ulonglong)*(byte *)(lVar5 + 0x1294) + 0x14a942f20) = 1;
        if (cVar8 != '\0') goto LAB_1400c528e;
        func_0x0001455db994();
        cVar8 = *(char *)((*(longlong **)(unaff_GS_OFFSET + 0x58))[__tls_index] + 8);
        *puVar1 = (char)(1 << ((byte)(*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x9fc) + 1
                                     ) & 0x1f));
        if (cVar8 == '\0') {
          func_0x0001455db994();
        }
      }
      else {
        lVar5 = **(longlong **)(unaff_GS_OFFSET + 0x58);
        *(undefined1 *)((ulonglong)*(byte *)(lVar5 + 0x1294) + 0x14a942f20) = 1;
        *(uint *)(lVar5 + 0x978) = param_3 == 3 | 6;
LAB_1400c528e:
        *puVar1 = (char)(1 << ((byte)(*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x9fc) + 1
                                     ) & 0x1f));
      }
      *(undefined1 *)(lVar4 + 0x1280) = 1;
      goto LAB_1400c52b5;
    }
    if ((0x2000000000002000U >> (uVar9 & 0x3f) & 1) == 0) {
      if (uVar9 == 0x15) {
        plVar6 = *(longlong **)(unaff_GS_OFFSET + 0x58);
        lVar5 = *plVar6;
        *puVar1 = 0x20;
        *(undefined4 *)(lVar5 + 0x978) = 3;
        if (*(char *)(plVar6[__tls_index] + 8) == '\0') {
          func_0x0001455db994();
        }
        *(undefined1 *)(lVar4 + 0x1280) = 2;
        goto LAB_1400c52b5;
      }
      goto LAB_1400c53e3;
    }
  }
  else {
LAB_1400c53e3:
    if (0x11 < param_2 - 0x41U) {
      if (param_2 == 0x3c) {
        plVar6 = *(longlong **)(unaff_GS_OFFSET + 0x58);
        *(undefined4 *)(*plVar6 + 0x978) = 10;
        if (*(char *)(plVar6[__tls_index] + 8) == '\0') {
          func_0x0001455db994();
        }
        pbVar3 = (byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1290);
        *pbVar3 = *pbVar3 | 2;
      }
      else {
        cVar8 = func_0x000144e555a0();
        if (cVar8 == '\0') {
          cVar8 = func_0x000144f5de40();
          if (cVar8 != '\0') {
            plVar6 = *(longlong **)(unaff_GS_OFFSET + 0x58);
            *(undefined4 *)(*plVar6 + 0x978) = 0xd;
            if (*(char *)(plVar6[__tls_index] + 8) == '\0') {
              func_0x0001455db994();
            }
            pbVar3 = (byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1290);
            *pbVar3 = *pbVar3 | 0x10;
          }
        }
        else {
          plVar6 = *(longlong **)(unaff_GS_OFFSET + 0x58);
          *(undefined4 *)(*plVar6 + 0x978) = 0xc;
          if (*(char *)(plVar6[__tls_index] + 8) == '\0') {
            func_0x0001455db994();
          }
          pbVar3 = (byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1290);
          *pbVar3 = *pbVar3 | 8;
        }
      }
      goto LAB_1400c52b5;
    }
  }
  puVar2 = (undefined4 *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x978);
  if (param_3 == 3) {
    *puVar2 = 2;
  }
  else {
    *puVar2 = 1;
  }
LAB_1400c52b5:
  FUN_144e55600((float)*(byte *)(param_1 + 0x430) * _DAT_14615a130);
  FUN_145578740();
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  plVar6 = *(longlong **)(unaff_GS_OFFSET + 0x58);
  lVar4 = *plVar6;
  uVar9 = (ulonglong)*(byte *)(lVar4 + 0x1294);
  *(int *)(lVar7 + 0x295e8 + uVar9 * 4) = param_3;
  if (*(char *)(plVar6[__tls_index] + 8) == '\0') {
    func_0x0001455db994();
    uVar9 = (ulonglong)*(byte *)(lVar4 + 0x1294);
  }
  *(undefined4 *)(lVar7 + 0x295fc + uVar9 * 4) = param_4;
  return;
}

