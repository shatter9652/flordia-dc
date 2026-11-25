// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401aeeb0  size: 260 bytes
// Name:    FUN_1401aeeb0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401b1750
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1401aeeb0(longlong param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  
  if (-1 < *(int *)(param_1 + 0x154)) {
    FUN_1401b1750();
  }
  uVar3 = *(uint *)(param_1 + 0x48);
  uVar6 = *(uint *)(param_1 + 0x148) & 0xffffffbf;
  uVar8 = (ulonglong)uVar6;
  uVar9 = (ulonglong)uVar3 & 0x1ffff;
  *(uint *)(param_1 + 0x148) = uVar6;
  *(undefined4 *)(param_1 + 0x154) = 0xffffffff;
  if ((((uVar9 != 0x1ffff) &&
       (plVar4 = *(longlong **)((ulonglong)(uVar3 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
       plVar4 != (longlong *)0x0)) &&
      (uVar6 = *(uint *)(plVar4[5] + uVar9 * 4), (uVar6 >> 0x11 & 0x3ff) == uVar3 >> 0x16)) &&
     (((uVar6 & *(uint *)(plVar4 + 6)) == *(uint *)(plVar4 + 6) && (*plVar4 != 0)))) {
    uVar9 = *plVar4 + (ulonglong)(uint)((int)uVar9 * (int)plVar4[1]);
    if (*(char *)(uVar9 + 0x30) == '\x04') {
      func_0x0001401b24e0(uVar9,0);
      uVar8 = (ulonglong)*(uint *)(param_1 + 0x148);
    }
    lVar5 = _DAT_14ab56e38;
    if ((((uint)uVar8 >> 0xb & 1) != 0) && (_DAT_14ab56e38 != 0)) {
      lVar7 = func_0x000144da6540(*(undefined4 *)(_DAT_14ab56e38 + 0x9c));
      uVar8 = 0;
      if ((lVar7 != 0) && (uVar8 = 0, *(longlong *)(lVar7 + 0x10c8) != 0)) {
        uVar8 = func_0x000144de7c70(*(undefined4 *)(*(longlong *)(lVar7 + 0x10c8) + 0x14f0));
        if (uVar9 == uVar8) {
          uVar10 = *(undefined4 *)(lVar5 + 0x9c);
          lVar7 = func_0x000144da6540(uVar10);
          if ((lVar7 != 0) && (*(longlong *)(lVar7 + 0x10c8) != 0)) {
            func_0x000141806560(*(longlong *)(lVar7 + 0x10c8),0,1,0);
            uVar10 = *(undefined4 *)(lVar5 + 0x9c);
          }
          uVar8 = func_0x000144da6540(uVar10);
          if ((uVar8 != 0) && (*(longlong *)(uVar8 + 0x10b0) != 0)) {
            LOCK();
            pbVar1 = (byte *)(*(longlong *)(uVar8 + 0x10b0) + 0x169a);
            bVar2 = *pbVar1;
            *pbVar1 = 1;
            UNLOCK();
            return (ulonglong)bVar2;
          }
          return uVar8;
        }
      }
    }
  }
  return uVar8;
}

