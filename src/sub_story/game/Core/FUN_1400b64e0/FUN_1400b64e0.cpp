// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b64e0  size: 286 bytes
// Name:    FUN_1400b64e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400b7ed0, FUN_1400b7020, FUN_1400ba990, FUN_1400b6600
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


uint FUN_1400b64e0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((((*(byte *)(param_2 + 0x126) & 0x40) == 0) ||
      (uVar4 = FUN_1400b7020(), (char)uVar4 == '\x03')) ||
     (lVar1 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x10), *(short *)(lVar1 + 0x18) == 0)) {
    uVar5 = 0;
  }
  else {
    uVar8 = 0;
    uVar9 = 0;
    do {
      puVar2 = *(undefined8 **)(*(longlong *)(lVar1 + 0x10) + uVar8 * 8);
      lVar6 = *(longlong *)*puVar2;
      bVar3 = FUN_1400b6600(lVar6,0);
      uVar5 = uVar9;
      if (bVar3 != 0) {
        lVar6 = *(longlong *)(lVar6 + 0x50);
        if ((*(char *)(lVar6 + -4 + (ulonglong)bVar3 * 0x10) == '\0') &&
           (lVar6 = func_0x000144ee12a0(puVar2[2],
                                        *(undefined2 *)(lVar6 + (ulonglong)bVar3 * 0x10 + -8)),
           lVar6 != 0)) {
          uStack_58 = 0;
          uStack_50 = 0;
          uVar7 = FUN_1400b7ed0(&uStack_58,uVar4,*(undefined8 *)(*(longlong *)(lVar6 + 8) + 0x30));
          if (((char)uVar7 != '\0') &&
             (uVar5 = (uint)CONCAT71((int7)((ulonglong)uVar7 >> 8),1), (uVar9 & 1) == 0)) {
            uStack_68 = 0;
            uStack_60 = 0;
            uVar5 = FUN_1400ba990(&uStack_68,uVar4,lVar6,param_2);
          }
        }
      }
      uVar8 = uVar8 + 1;
      uVar9 = uVar5;
    } while (uVar8 < *(ushort *)(lVar1 + 0x18));
  }
  return uVar5 & 0xffffff01;
}

