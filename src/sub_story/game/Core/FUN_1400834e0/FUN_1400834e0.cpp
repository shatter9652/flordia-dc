// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400834e0  size: 568 bytes
// Name:    FUN_1400834e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1451ad320, FUN_14113ef70, FUN_142af27a0, FUN_140004b40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1400834e0(undefined4 param_1,longlong param_2,longlong param_3,char param_4)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  uint *puVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_98 [16];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lVar5 = func_0x000144fc04a0(*(undefined4 *)(param_2 + 0x9c));
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    FUN_140004b40(0x1492c73e8);
    if (param_4 == '\0') {
      auStack_98._0_12_ = ZEXT812(0);
      auStack_98._12_4_ = 0;
    }
    else {
      uStack_68 = *(undefined8 *)(param_2 + 0x70);
      uStack_60 = *(undefined8 *)(param_2 + 0x78);
      func_0x000144dc3790();
    }
    puVar6 = (uint *)func_0x000144e28f80();
    if (param_3 == 0) {
      lVar7 = *(longlong *)(puVar6 + 2);
      uVar3 = *puVar6 << 4;
      if (uVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar10 = 0;
        do {
          uVar4 = uVar10;
          if (!SBORROW1('\0',*(char *)((ulonglong)(uVar10 & 0xf) +
                                      (ulonglong)(uVar10 >> 4) * 0x110 + lVar7))) break;
          uVar10 = uVar10 + 1;
          uVar4 = uVar3;
        } while (uVar3 != uVar10);
      }
      lVar11 = (ulonglong)(*puVar6 & 0xfffffff) * 0x110;
      uVar9 = (ulonglong)((uVar4 & 0xf) << 4);
      lVar5 = (ulonglong)(uVar4 >> 4) * 0x110;
      if (lVar5 + uVar9 == lVar11) {
        lVar5 = 0;
      }
      else {
        lVar8 = lVar5 + 0x10 + uVar9;
        lVar5 = 0;
        do {
          lVar8 = *(longlong *)(lVar7 + 8 + lVar8);
          uVar10 = uVar4;
          lVar1 = lVar5;
          if (lVar8 != 0) {
            uStack_78 = auStack_98._0_8_;
            uStack_70 = auStack_98._8_8_;
            lVar8 = FUN_142af27a0(lVar8,param_1,&uStack_78);
            if (((lVar8 != 0) && (lVar1 = lVar8, lVar5 != 0)) &&
               (cVar2 = FUN_14113ef70(lVar8,lVar5), lVar1 = lVar5, cVar2 != '\0')) {
              lVar1 = lVar8;
            }
          }
          while (lVar5 = lVar1, uVar4 = uVar3, uVar10 != uVar3) {
            while (uVar4 = uVar10 + 1, uVar10 = uVar4, lVar1 = lVar5, uVar4 < uVar3) {
              if (!SBORROW1('\0',*(char *)((ulonglong)(uVar4 & 0xf) +
                                          (ulonglong)(uVar4 >> 4) * 0x110 + lVar7)))
              goto LAB_1400836d3;
            }
          }
LAB_1400836d3:
          lVar8 = (ulonglong)(uVar4 >> 4) * 0x110 + 0x10 + (ulonglong)((uVar4 & 0xf) << 4);
        } while (lVar8 != lVar11 + 0x10);
      }
    }
    else {
      lVar5 = 0;
      uVar3 = (uint)((ulonglong)(param_3 - *_DAT_14abb6918) /
                    (ulonglong)*(uint *)(_DAT_14abb6918 + 1)) & 0x1ffff;
      lVar7 = FUN_1451ad320(*puVar6,*(undefined8 *)(puVar6 + 2),
                            *(uint *)(_DAT_14abb6918[5] + (ulonglong)uVar3 * 4) & 0xfffe0000 | uVar3
                           );
      if (lVar7 != 0) {
        uStack_58 = auStack_98._0_8_;
        uStack_50 = auStack_98._8_8_;
        lVar5 = FUN_142af27a0(lVar7,param_1);
      }
    }
    func_0x000144d9dab0(0x1492c73e8);
  }
  return lVar5;
}

