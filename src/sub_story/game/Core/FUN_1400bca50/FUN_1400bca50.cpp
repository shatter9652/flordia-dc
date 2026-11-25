// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400bca50  size: 207 bytes
// Name:    FUN_1400bca50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1455311b0, FUN_140037af0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1400bca50(ulonglong param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  byte bVar2;
  ushort uVar3;
  char cVar4;
  uint *puVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong *puVar8;
  byte bVar9;
  
  if (param_2 == 0) {
    return 0;
  }
  puVar1 = param_3 + param_2;
  while( true ) {
    puVar5 = (uint *)FUN_140037af0(*param_3);
    if ((*puVar5 & 0x3ffff) != 0) break;
LAB_1400bcae6:
    param_3 = param_3 + 1;
    if (param_3 == puVar1) {
      return 0;
    }
  }
  puVar8 = (ulonglong *)(_DAT_1498cc2d8 + -0x30 + (ulonglong)((*puVar5 & 0x3ffff) * 0x30));
LAB_1400bca94:
  if (param_1 < *puVar8) {
    uVar3 = (ushort)puVar8[4];
    uVar7 = (*(byte *)((longlong)puVar8 + 0x24) & 3) << 0x10;
LAB_1400bcac0:
    if ((uVar7 | uVar3) != 0) goto code_r0x0001400bcac4;
  }
  else {
    if (puVar8[*(byte *)((longlong)puVar8 + 0x25)] < param_1) {
      uVar3 = *(ushort *)((longlong)puVar8 + 0x22);
      uVar7 = (*(uint *)((longlong)puVar8 + 0x24) & 0xc) << 0xe;
      goto LAB_1400bcac0;
    }
    lVar6 = 0;
    do {
      if (puVar8[lVar6] == param_1) {
        lVar6 = (longlong)puVar8 + lVar6 * 2 + 0x26;
        cVar4 = FUN_1455311b0(lVar6);
        if (cVar4 != '\0') {
          return 0;
        }
        lVar6 = FUN_144dee900(lVar6);
        if (lVar6 != 0) {
          lVar6 = (ulonglong)*(ushort *)(lVar6 + 6) * 0x10;
          bVar2 = *(byte *)(_DAT_149c3e108 + 0xe + lVar6);
          bVar9 = (byte)*(undefined4 *)(_DAT_149c3e108 + 0xc + lVar6);
          if (bVar2 < bVar9) {
            bVar9 = bVar2;
          }
          if (bVar9 != 0) {
            return *(undefined8 *)(_DAT_149c3e108 + lVar6);
          }
        }
        return 0;
      }
      lVar6 = lVar6 + 1;
    } while ((ulonglong)*(byte *)((longlong)puVar8 + 0x25) + 1 != lVar6);
  }
  goto LAB_1400bcae6;
code_r0x0001400bcac4:
  puVar8 = (ulonglong *)((ulonglong)(uVar7 | uVar3) * 0x30 + _DAT_1498cc2d8 + -0x30);
  goto LAB_1400bca94;
}

