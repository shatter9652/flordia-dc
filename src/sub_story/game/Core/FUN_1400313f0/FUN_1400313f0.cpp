// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400313f0  size: 741 bytes
// Name:    FUN_1400313f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400313f0(int param_1,longlong *param_2,uint param_3)

{
  longlong *plVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  ushort uVar6;
  ushort uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined2 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong unaff_GS_OFFSET;
  
  lVar8 = (**(code **)(*param_2 + 0x130))(param_2);
  bVar2 = *(byte *)(*(longlong *)(lVar8 + 0x10) + 0xb + (ulonglong)param_3 * 0x10);
  if ((bVar2 & 1) == 0) {
    lVar9 = 0;
    if (((bVar2 & 0x70) != 0x50) && (param_3 < *(uint *)(lVar8 + 0x1c))) {
      uVar11 = bVar2 >> 4 & 7;
      if (*(int *)(lVar8 + 0x148) <= (int)uVar11) goto LAB_140031428;
      lVar9 = *(longlong *)(lVar8 + 0x120 + (ulonglong)uVar11 * 8);
    }
  }
  else {
LAB_140031428:
    lVar9 = 0;
  }
  if (((((param_1 == 0x23) || (param_1 == 0x53)) || (param_1 - 0x41U < 0x12)) || (param_1 == 0x2b))
     && ((lVar9 != 0 && (*(int *)(lVar9 + 0x1dc) != 0)))) {
    lVar8 = *(longlong *)(lVar9 + 0x1e0);
    cVar3 = *(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
    if ((lVar8 != 0) && (lVar4 = *(longlong *)(lVar9 + 0x1e8), lVar4 != 0)) {
      if (cVar3 == '\0') {
        func_0x0001455db994();
      }
      uVar7 = _DAT_14a9d76d8;
      plVar1 = (longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12a8);
      if (_DAT_14a9d76d8 != 0) {
        lVar5 = *plVar1;
        uVar6 = _DAT_14a9d76d8 >> 2;
        func_0x000144da8e30(lVar5,_DAT_14a9d76d8,lVar8,0x10);
        func_0x000144da8e20(lVar5,uVar7,0);
        *(undefined2 *)(lVar5 + 0x70c0 + (ulonglong)uVar6 * 2) = 0;
      }
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      uVar7 = _DAT_14a9d76da;
      if (_DAT_14a9d76da == 0) {
        return;
      }
      lVar8 = *plVar1;
      uVar6 = _DAT_14a9d76da >> 2;
      func_0x000144d9dcc0(lVar8,_DAT_14a9d76da,lVar4,(ulonglong)*(uint *)(lVar9 + 0x1dc) << 7,0x80,0
                         );
      func_0x000144d9dcb0(lVar8,uVar7,0);
      puVar10 = (undefined2 *)(lVar8 + 0x6200 + (ulonglong)uVar6 * 2);
      goto LAB_1400316b3;
    }
  }
  else {
    cVar3 = *(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
  }
  if (cVar3 == '\0') {
    func_0x0001455db994();
  }
  uVar7 = _DAT_14a9d76d8;
  lVar8 = **(longlong **)(unaff_GS_OFFSET + 0x58);
  if (_DAT_14a9d76d8 != 0) {
    lVar9 = *(longlong *)(lVar8 + 0x12a8);
    uVar12 = (ulonglong)(_DAT_14a9d76d8 >> 2);
    if (*(longlong *)(lVar9 + 0x5540 + uVar12 * 8) != _DAT_14a9d7978) {
      *(longlong *)(lVar9 + 0x5540 + uVar12 * 8) = _DAT_14a9d7978;
      *(ulonglong *)(lVar9 + 0x20) = *(ulonglong *)(lVar9 + 0x20) | 0x1000L << ((byte)uVar7 & 3);
      func_0x000144da8e20(lVar9,uVar7,0);
      *(undefined2 *)(lVar9 + 0x70c0 + uVar12 * 2) = 0;
    }
  }
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  uVar7 = _DAT_14a9d76da;
  if (_DAT_14a9d7980 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = *(longlong *)(_DAT_14a9d7980 + 0x28);
  }
  if (_DAT_14a9d76da == 0) {
    return;
  }
  lVar8 = *(longlong *)(lVar8 + 0x12a8);
  uVar12 = (ulonglong)(_DAT_14a9d76da >> 2);
  if (*(longlong *)(lVar8 + 0x40 + uVar12 * 8) == lVar9) {
    return;
  }
  *(longlong *)(lVar8 + 0x40 + uVar12 * 8) = lVar9;
  *(ulonglong *)(lVar8 + 0x20) = *(ulonglong *)(lVar8 + 0x20) | 1L << ((byte)uVar7 & 3);
  func_0x000144d9dcb0(lVar8,uVar7,0);
  puVar10 = (undefined2 *)(lVar8 + 0x6200 + uVar12 * 2);
LAB_1400316b3:
  *puVar10 = 0;
  return;
}

