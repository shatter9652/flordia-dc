// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14012b5d0  size: 170 bytes
// Name:    FUN_14012b5d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Removing unreachable block (ram,0x000144fdcc68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_14012b5d0(undefined8 param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ushort uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  bool bVar10;
  bool bVar11;
  undefined1 auVar12 [32];
  
  uVar4 = (ulonglong)(((uint)param_1 & 0xffff) << 4);
  if ((((*(short *)(*(longlong *)(_DAT_14abbf348 + 0x28) + 8 + uVar4) ==
         (short)((ulonglong)param_1 >> 0x10)) &&
       (lVar8 = *(longlong *)(*(longlong *)(_DAT_14abbf348 + 0x28) + uVar4), lVar8 != 0)) &&
      (plVar6 = *(longlong **)(*(longlong *)(lVar8 + 8) + 0x20), plVar6 != (longlong *)0x0)) &&
     ((((short)((ulonglong)param_1 >> 0x20) == -2 || ((char)plVar6[2] != '\x06')) ||
      ((uVar3 = func_0x0001403dc2f0(), uVar3 != 0xffff &&
       ((uVar3 < *(ushort *)((longlong)plVar6 + 0x9a) &&
        (plVar6 = *(longlong **)(plVar6[0xe] + (ulonglong)uVar3 * 8), plVar6 != (longlong *)0x0)))))
      ))) {
    uVar4 = (**(code **)(*plVar6 + 0x48))(plVar6);
  }
  else {
    uVar4 = 0;
  }
  uVar7 = uVar4 & 0xffff;
  auVar2 = ZEXT116(0) * *(undefined1 (*) [16])(_DAT_14a9b33c0 + 0x128) |
           ZEXT116(1) * *(undefined1 (*) [16])(_DAT_14a9b33c0 + 0x148);
  auVar1 = ZEXT116(1) * *(undefined1 (*) [16])(_DAT_14a9b33c0 + 0x128);
  auVar12._0_8_ = -(ulonglong)(uVar7 == auVar2._0_8_);
  auVar12._8_8_ = -(ulonglong)(uVar7 == auVar2._8_8_);
  auVar12._16_8_ = -(ulonglong)(uVar7 == auVar1._0_8_);
  auVar12._24_8_ = -(ulonglong)(uVar7 == auVar1._8_8_);
  if (((((((SUB321(auVar12 >> 0x3f,0) & 1) == 0 && SUB321(auVar12 >> 0x7f,0) == '\0') &&
         SUB321(auVar12 >> 0xbf,0) == '\0') && -1 < auVar12._24_8_) &&
       (uVar7 != *(ulonglong *)(_DAT_14a9b33c0 + 0x158) &&
        uVar7 != *(ulonglong *)(_DAT_14a9b33c0 + 0x160))) &&
      ((uVar7 != *(ulonglong *)(_DAT_14a9b33c0 + 0x168) &&
       uVar7 != *(ulonglong *)(_DAT_14a9b33c0 + 0x170)) &&
       uVar7 != *(ulonglong *)(_DAT_14a9b33c0 + 0x138))) &&
     ((uVar7 != *(ulonglong *)(_DAT_14a9b33c0 + 0x140) &&
       uVar7 != *(ulonglong *)(_DAT_14a9b33c0 + 0x118) &&
      (uVar7 != *(ulonglong *)(_DAT_14a9b33c0 + 0x120))))) {
    if ((uVar4 & 0x88000000) == 0) {
      uVar7 = (ulonglong)*(uint *)(_DAT_14a9b33c0 + 0x18);
      lVar8 = *(longlong *)(_DAT_14a9b33c0 + 0x20);
      uVar5 = *(ulonglong *)(_DAT_14a9b33c0 + 0x10) & uVar4;
      if (uVar5 < uVar7) {
        uVar9 = (ulonglong)*(uint *)(_DAT_14a9b33c0 + 0x1c);
        if ((*(byte *)(lVar8 + 0x88 + uVar5 * uVar9) & 2) != 0) goto code_r0x000144fdcc75;
      }
      else {
        if ((*(byte *)(lVar8 + 0x88) & 2) != 0) goto code_r0x000144fdcc75;
        uVar9 = (ulonglong)*(uint *)(_DAT_14a9b33c0 + 0x1c);
        uVar5 = 0;
      }
      if ((*(byte *)(lVar8 + 0x88 + uVar9 * uVar5) & 4) == 0) goto code_r0x000144fdcc35;
    }
    else {
      uVar7 = (ulonglong)*(uint *)(_DAT_14a9b33c0 + 0x18);
    }
code_r0x000144fdcc75:
    uVar4 = *(ulonglong *)(_DAT_14a9b33c0 + 0x10) & uVar4;
    if (uVar7 <= uVar4) {
      uVar4 = 0;
    }
    auVar1 = vcmpss_avx(ZEXT816(0) << 0x40,
                        ZEXT416(*(uint *)(*(longlong *)(_DAT_14a9b33c0 + 0x20) + 0x78 +
                                         *(uint *)(_DAT_14a9b33c0 + 0x1c) * uVar4)),4);
    return auVar1._0_4_ & 1;
  }
code_r0x000144fdcc35:
  if ((ulonglong)uRam0000000149e56d54 == 0) {
    return 1;
  }
  lVar8 = 0;
  do {
    bVar10 = *(ulonglong *)(lRam0000000149e56d58 + lVar8 * 8) != uVar4;
    bVar11 = (ulonglong)uRam0000000149e56d54 - 1 != lVar8;
    lVar8 = lVar8 + 1;
  } while (bVar10 && bVar11);
  return (uint)bVar10;
}

