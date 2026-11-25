// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140193010  size: 639 bytes
// Name:    FUN_140193010
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400935d0, FUN_144f23ee0, FUN_140a295b0, FUN_14554a890
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140193010(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined7 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  longlong unaff_GS_OFFSET;
  
  lVar9 = param_2;
  plVar7 = (longlong *)func_0x0001451ba520(*(undefined4 *)((longlong)param_1 + 0x9c));
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  uVar4 = _DAT_146cad4d0;
  plVar2 = *(longlong **)(unaff_GS_OFFSET + 0x58);
  plVar1 = (longlong *)(*plVar2 + 0x1098);
  lVar3 = *plVar1;
  lVar8 = (**(code **)(*param_1 + 0x88))(param_1);
  if (*(char *)(plVar2[__tls_index] + 8) == '\0') {
    func_0x0001455db994();
  }
  *plVar1 = lVar8;
  if ((param_2 == 0) || ((*(byte *)(param_2 + 0xe9) & 2) != 0)) {
    if ((_DAT_149c3a8f0 == 0) &&
       ((uVar6 = *(uint *)(param_1 + 0x1d), -1 < (char)uVar6 &&
        (uVar10 = (undefined7)((ulonglong)lVar9 >> 8),
        plVar7 != (longlong *)0x0 && (uVar6 >> 0xc & 1) == 0)))) {
      uVar6 = uVar6 >> 0xe & 7;
      if ((uVar6 != 0) && (_DAT_146cad4d0 = 6, uVar6 != 5)) {
        _DAT_146cad4d0 = 5;
      }
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
        puVar11 = (undefined8 *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1400);
        uVar12 = *puVar11;
        if (*(char *)((*(longlong **)(unaff_GS_OFFSET + 0x58))[__tls_index] + 8) == '\0') {
          func_0x0001455db994();
        }
      }
      else {
        puVar11 = (undefined8 *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1400);
        uVar12 = *puVar11;
      }
      *puVar11 = 0x149975278;
      *(byte *)((longlong)param_1 + 0xe9) = *(byte *)((longlong)param_1 + 0xe9) | 0x10;
      cVar5 = (**(code **)(*plVar7 + 0x28))(plVar7,CONCAT71(uVar10,1));
      if (cVar5 != '\0') {
        FUN_1400935d0(param_1);
        *(byte *)((longlong)param_1 + 0xe9) = *(byte *)((longlong)param_1 + 0xe9) | 2;
        FUN_144f23ee0(param_1);
        func_0x000144f23d20();
        if (*(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
            '\0') {
          func_0x0001455db994();
        }
        *plVar1 = 0;
      }
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      *puVar11 = uVar12;
    }
  }
  else {
    FUN_14554a890(param_2,param_1);
  }
  cVar5 = *(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
  if (cVar5 == '\0') {
    func_0x0001455db994();
    cVar5 = *(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
  }
  lVar9 = *plVar1;
  if (lVar9 != 0) {
    if (cVar5 == '\0') {
      func_0x0001455db994();
      lVar9 = *plVar1;
    }
    FUN_140a295b0(lVar9,0xffffffff);
    cVar5 = *(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
  }
  if (cVar5 == '\0') {
    func_0x0001455db994();
  }
  *plVar1 = lVar3;
  _DAT_146cad4d0 = uVar4;
  return;
}

