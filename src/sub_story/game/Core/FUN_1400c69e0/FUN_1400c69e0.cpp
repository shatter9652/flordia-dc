// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c69e0  size: 249 bytes
// Name:    FUN_1400c69e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ed3290
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1400c69e0(undefined8 *param_1,char param_2,undefined8 param_3,longlong *param_4)

{
  undefined1 auVar1 [16];
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fStack_40;
  undefined1 auStack_3c [4];
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_38 = *param_1;
  uStack_30 = param_1[1];
  lVar3 = FUN_144ed3290(&uStack_38,auStack_3c,&fStack_40,param_3,1);
  uVar4 = 0;
  if (lVar3 != 0) {
    if (param_4 != (longlong *)0x0) {
      *param_4 = lVar3;
    }
    if (param_2 == '\0') {
      uVar4 = 0;
      if ((ulonglong)_DAT_148d7aa04 != 0) {
        uVar2 = (uint)((ulonglong)(lVar3 - *_DAT_14abbe8c8) /
                      (ulonglong)*(uint *)(_DAT_14abbe8c8 + 1)) & 0x1ffff;
        lVar3 = 0;
        do {
          if ((*(uint *)(_DAT_148d7aa08 + 8 + lVar3) ==
               (*(uint *)(_DAT_14abbe8c8[5] + (ulonglong)uVar2 * 4) & 0xfffe0000 | uVar2)) &&
             (*(short *)(**(longlong **)(_DAT_148d7aa08 + lVar3) + 0x28) != 0)) {
            auVar6._0_12_ = ZEXT812(0);
            auVar6._12_4_ = 0;
            auVar5 = ZEXT416((uint)((fStack_40 - (float)param_3) * _DAT_14614f808));
            auVar1 = vminss_avx(ZEXT416(_DAT_145fc6ed8),auVar5);
            auVar5 = vcmpss_avx(auVar5,auVar6,1);
            return CONCAT44(~auVar5._4_4_ & auVar1._4_4_,~auVar5._0_4_ & auVar1._0_4_);
          }
          lVar3 = lVar3 + 0x40;
        } while ((ulonglong)_DAT_148d7aa04 << 6 != lVar3);
      }
    }
    else {
      uVar4 = (ulonglong)_DAT_145fc6ed8;
    }
  }
  return uVar4;
}

