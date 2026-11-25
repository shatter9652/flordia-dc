// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14018a690  size: 326 bytes
// Name:    FUN_14018a690
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14032d8c0, FUN_1451ebae0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14018a690(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 extraout_var [56];
  undefined1 auVar8 [16];
  undefined1 auVar9 [64];
  
  uVar5 = (ulonglong)_DAT_145fc6f50;
  if (*(char *)(param_1 + 0xc48) == '\0') {
    uVar1 = *(uint *)(param_1 + 0xbec);
    uVar6 = (ulonglong)uVar1;
    if (uVar6 != 0xffffffff) {
      auVar9._0_8_ = FUN_1451ebae0(param_1);
      auVar9._8_56_ = extraout_var;
      uVar5 = (ulonglong)*(uint *)(param_1 + 0x764 + uVar6 * 0x18);
      if (uVar5 != 0) {
        lVar2 = *(longlong *)(param_1 + 0x768 + uVar6 * 0x18);
        lVar7 = 0;
        do {
          if ((*param_2 == *(longlong *)(lVar2 + lVar7)) &&
             (bVar3 = true, (char)param_2[1] == *(char *)(lVar2 + 8 + lVar7))) goto LAB_14018a71e;
          lVar7 = lVar7 + 0x10;
        } while (uVar5 << 4 != lVar7);
      }
      bVar3 = false;
LAB_14018a71e:
      uVar6 = (ulonglong)(uVar1 + 1) % (ulonglong)*(uint *)(param_1 + 0x754);
      uVar5 = auVar9._0_8_;
      if ((uint)uVar6 != uVar1) {
        do {
          uVar5 = (ulonglong)*(uint *)(param_1 + 0x764 + uVar6 * 0x18);
          if (uVar5 != 0) {
            lVar2 = *(longlong *)(param_1 + 0x768 + uVar6 * 0x18);
            lVar7 = 0;
            do {
              if ((*param_2 == *(longlong *)(lVar2 + lVar7)) &&
                 ((char)param_2[1] == *(char *)(lVar2 + 8 + lVar7))) {
                if (!bVar3) {
                  return auVar9._0_8_;
                }
                goto LAB_14018a792;
              }
              lVar7 = lVar7 + 0x10;
            } while (uVar5 << 4 != lVar7);
          }
          if (bVar3) {
            return auVar9._0_8_;
          }
LAB_14018a792:
          auVar9 = ZEXT1664(auVar9._0_16_);
          if ((int)uVar6 == *(int *)(param_1 + 0xbf0)) {
            cVar4 = FUN_14032d8c0(param_1);
            auVar8 = auVar9._0_16_;
            if (cVar4 == '\0') goto LAB_14018a7aa;
          }
          else {
LAB_14018a7aa:
            auVar8 = ZEXT416((uint)(auVar9._0_4_ + _DAT_1461728e4 +
                                   *(float *)(param_1 + 0x758 + uVar6 * 0x18)));
          }
          auVar9 = ZEXT1664(auVar8);
          uVar5 = auVar8._0_8_;
          uVar6 = (ulonglong)((int)uVar6 + 1) % (ulonglong)*(uint *)(param_1 + 0x754);
        } while ((int)uVar6 != *(int *)(param_1 + 0xbec));
      }
    }
  }
  return uVar5;
}

