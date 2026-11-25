// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140132820  size: 67 bytes
// Name:    FUN_140132820
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140132820(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  int *piVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  longlong unaff_GS_OFFSET;
  
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  lVar2 = _DAT_14abb6910;
  piVar3 = (int *)FUN_144fdf3e0(*(undefined4 *)(param_1 + 0x9c));
  if ((piVar3 == (int *)0x0) ||
     ((((*piVar3 == 0 && (piVar3[1] == 0)) && (piVar3[2] == 0)) && (piVar3[3] == 0)))) {
code_r0x0001403acce1:
    uVar4 = 0;
  }
  else {
    uVar1 = *(uint *)(lVar2 + 8);
    lVar2 = *(longlong *)(lVar2 + 0x10);
    uVar5 = uVar1 << 4;
    if (uVar5 == 0) {
      uVar6 = 0;
    }
    else {
      uVar9 = 0;
      do {
        uVar6 = uVar9;
        if (!SBORROW1('\0',*(char *)((ulonglong)(uVar9 & 0xf) +
                                    (ulonglong)(uVar9 >> 4) * 0x410 + lVar2))) break;
        uVar9 = uVar9 + 1;
        uVar6 = uVar5;
      } while (uVar5 != uVar9);
    }
    lVar8 = (ulonglong)(uVar1 & 0xfffffff) * 0x410;
    uVar7 = (ulonglong)((uVar6 & 0xf) << 6);
    lVar10 = (ulonglong)(uVar6 >> 4) * 0x410;
    uVar4 = CONCAT71((uint7)(uint3)(uVar6 >> 0xc),1);
    if (lVar10 + uVar7 != lVar8) {
      lVar10 = lVar10 + 0x10 + uVar7;
      do {
        uVar1 = *(uint *)(lVar2 + lVar10);
        uVar9 = uVar6;
        if (((uVar1 != 0) && ((*(uint *)(lVar2 + 8 + lVar10) & 1) != 0)) &&
           (((uint)piVar3[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0)) goto code_r0x0001403acce1;
        while (uVar6 = uVar5, uVar9 != uVar5) {
          while (uVar6 = uVar9 + 1, uVar9 = uVar6, uVar6 < uVar5) {
            if (!SBORROW1('\0',*(char *)((ulonglong)(uVar6 & 0xf) +
                                        (ulonglong)(uVar6 >> 4) * 0x410 + lVar2)))
            goto code_r0x0001403acdb2;
          }
        }
code_r0x0001403acdb2:
        lVar10 = (ulonglong)(uVar6 >> 4) * 0x410 + 0x10 + (ulonglong)((uVar6 & 0xf) << 6);
      } while (lVar10 != lVar8 + 0x10);
    }
  }
  return uVar4;
}

