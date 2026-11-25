// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14003a170  size: 703 bytes
// Name:    FUN_14003a170
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144daa2b0, FUN_140004b40, FUN_142200200, FUN_144e463f0, FUN_1422000a0, FUN_1421c1400, FUN_142200120
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14003a170(void)

{
  longlong lVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_858 [8];
  uint uStack_850;
  uint uStack_84c;
  undefined4 *puStack_848;
  undefined4 auStack_840 [512];
  
  FUN_140004b40(0x147128880);
  FUN_144daa2b0(auStack_858);
  FUN_144e463f0(0x147129070);
  FUN_144e463f0();
  lVar11 = _DAT_1471288c8;
  uVar9 = 0;
  uStack_850 = 0x200;
  uStack_84c = 0;
  uVar7 = _DAT_1471288c0 << 4;
  uVar4 = uVar9;
  if (uVar7 != 0) {
    do {
      uVar4 = uVar9;
      if (!SBORROW1('\0',*(char *)((ulonglong)(uVar9 & 0xf) +
                                  (ulonglong)(uVar9 >> 4) * 0x110 + _DAT_1471288c8))) break;
      uVar9 = uVar9 + 1;
      uVar4 = uVar7;
    } while (uVar7 != uVar9);
  }
  lVar12 = (ulonglong)(_DAT_1471288c0 & 0xfffffff) * 0x110;
  uVar6 = (ulonglong)((uVar4 & 0xf) << 4);
  lVar5 = (ulonglong)(uVar4 >> 4) * 0x110;
  puStack_848 = auStack_840;
  if (lVar5 + uVar6 != lVar12) {
    lVar5 = lVar5 + 0x10 + uVar6;
    do {
      lVar1 = *(longlong *)(lVar11 + 8 + lVar5);
      func_0x0001421f9620(lVar1);
      cVar3 = func_0x0001421f9640(*(undefined4 *)(lVar1 + 0x4c));
      if (cVar3 != '\0') {
        lVar1 = *(longlong *)(lVar11 + 8 + lVar5);
        if (lVar1 != 0) {
          FUN_1421c1400(lVar1);
          func_0x000144d9c130(lVar1,0x58);
        }
        *(undefined8 *)(lVar11 + 8 + lVar5) = 0;
        if (uStack_84c == uStack_850) {
          uVar9 = uStack_84c >> 1;
          if (uStack_84c < 2) {
            uVar9 = 1;
          }
          FUN_1422000a0(&uStack_850,uVar9 + uStack_84c);
        }
        uStack_84c = 1;
        *puStack_848 = *(undefined4 *)(lVar11 + lVar5);
      }
      puVar2 = puStack_848;
      uVar6 = (ulonglong)uVar7;
      if (uVar4 != uVar7) {
        do {
          while( true ) {
            uVar4 = uVar4 + 1;
            uVar6 = (ulonglong)uVar4;
            if (uVar7 <= uVar4) break;
            if (!SBORROW1('\0',*(char *)((ulonglong)(uVar4 & 0xf) +
                                        (ulonglong)(uVar4 >> 4) * 0x110 + lVar11)))
            goto LAB_14003a389;
          }
        } while (uVar4 != uVar7);
        uVar6 = (ulonglong)uVar7;
      }
LAB_14003a389:
      uVar4 = (uint)uVar6;
      lVar5 = (uVar6 >> 4) * 0x110 + 0x10 + (ulonglong)((uVar4 & 0xf) << 4);
    } while (lVar5 != lVar12 + 0x10);
    uVar6 = (ulonglong)uStack_84c;
    if (uVar6 != 0) {
      lVar11 = 0;
      do {
        iVar8 = FUN_142200120(*(undefined4 *)((longlong)puVar2 + lVar11));
        if (iVar8 != -1) {
          FUN_142200200(iVar8);
        }
        lVar11 = lVar11 + 4;
      } while (uVar6 << 2 != lVar11);
    }
  }
  uVar6 = (ulonglong)_DAT_147128808;
  _DAT_1471287fc = 0;
  if (_DAT_147128810 != 0 && uVar6 != 0) {
    uVar10 = 0;
    lVar11 = _DAT_147128800;
    iVar8 = _DAT_147128810;
    do {
      lVar5 = *(longlong *)(lVar11 + uVar10 * 8);
      while (lVar5 != 0) {
        lVar11 = *(longlong *)(lVar5 + 0x10);
        func_0x000144d9c130(lVar5,0x18);
        iVar8 = iVar8 + -1;
        lVar5 = lVar11;
        lVar11 = _DAT_147128800;
      }
      *(undefined8 *)(lVar11 + uVar10 * 8) = 0;
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar6 && iVar8 != 0);
  }
  uStack_84c = 0;
  _DAT_147128810 = 0;
  if ((auStack_840 != puStack_848) && (puStack_848 != (undefined4 *)0x0)) {
    func_0x000144d9c130();
  }
  func_0x000144d9dab0(0x147128880);
  return;
}

