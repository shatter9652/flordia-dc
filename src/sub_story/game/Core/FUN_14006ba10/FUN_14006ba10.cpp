// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006ba10  size: 243 bytes
// Name:    FUN_14006ba10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e25ab0, FUN_144fd0040
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14006ba10(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  char cVar2;
  ushort uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uStack_30;
  short sStack_2c;
  
  lVar6 = *(longlong *)(param_1 + 0x10);
  lVar4 = func_0x000144e25990(*(undefined4 *)(lVar6 + 0x9c));
  uVar1 = *(undefined8 *)(lVar4 + 0x18);
  cVar2 = FUN_144fd0040(lVar6,*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x30));
  if ((cVar2 != '\0') &&
     (FUN_144e25ab0(uVar1,&uStack_30,*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x30)),
     uStack_30 != 0)) {
    uVar5 = (ulonglong)((uStack_30 & 0xffff) << 4);
    if ((*(short *)(*(longlong *)(_DAT_14abbf348 + 0x28) + 8 + uVar5) == (short)(uStack_30 >> 0x10))
       && (lVar6 = *(longlong *)(*(longlong *)(_DAT_14abbf348 + 0x28) + uVar5), lVar6 != 0)) {
      uVar5 = *(ulonglong *)(lVar6 + 8);
      lVar6 = *(longlong *)(uVar5 + 0x20);
      if (lVar6 != 0) {
        if ((*(char *)(lVar6 + 0x10) != '\x06') || (sStack_2c == -2)) {
LAB_14006badf:
          uVar1 = *(undefined8 *)(lVar6 + 0x38);
          *param_2 = *(undefined8 *)(lVar6 + 0x30);
          param_2[1] = uVar1;
          uVar1 = *(undefined8 *)(lVar6 + 0x28);
          *param_3 = *(undefined8 *)(lVar6 + 0x20);
          param_3[1] = uVar1;
          return CONCAT71((int7)(uVar5 >> 8),1);
        }
        uVar3 = func_0x0001403dc2f0();
        if ((uVar3 != 0xffff) && (uVar3 < *(ushort *)(lVar6 + 0x9a))) {
          uVar5 = (ulonglong)uVar3;
          lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x70) + uVar5 * 8);
          if (lVar6 != 0) goto LAB_14006badf;
        }
      }
    }
  }
  return 0;
}

