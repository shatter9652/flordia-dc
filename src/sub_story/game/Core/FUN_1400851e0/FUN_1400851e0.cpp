// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400851e0  size: 341 bytes
// Name:    FUN_1400851e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141f7b910, FUN_1450a0e20, FUN_1424a6ad0, FUN_140d110c0, FUN_140140130
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1400851e0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  uint3 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined7 uVar8;
  ulonglong uVar9;
  undefined1 auStack_14 [4];
  
  uVar8 = (undefined7)((ulonglong)param_1 >> 8);
  uVar5 = FUN_141f7b910(CONCAT71(uVar8,*(undefined1 *)(param_1 + 0x30)),
                        *(undefined4 *)(param_1 + 0x9c),param_2);
  if ((char)uVar5 != '\0') {
    uVar5 = 0;
    goto LAB_14008527c;
  }
  if (*(char *)(param_2 + 0x30) != '\x03') {
    uVar9 = 0;
    goto LAB_140085279;
  }
  if (*(char *)(param_1 + 0x30) == '\x03') {
    cVar3 = FUN_1450a0e20(param_1,param_2);
    if (cVar3 == '\0') goto LAB_140085229;
    uVar9 = CONCAT71(uVar8,1);
LAB_140085277:
    uVar5 = 0;
  }
  else {
LAB_140085229:
    uVar1 = *(undefined4 *)(param_2 + 0x9c);
    cVar3 = func_0x000144e238f0(uVar1);
    if (cVar3 == '\0') goto LAB_140085275;
    lVar6 = func_0x0001450bd950(uVar1);
    if ((lVar6 != 0) && ((*(byte *)(lVar6 + 0x10) & 0x80) != 0)) {
      cVar3 = FUN_140d110c0(param_2,1);
      uVar2 = (uint3)((uint)uVar1 >> 8);
      uVar9 = CONCAT71((uint7)uVar2,1);
      if (cVar3 == '\0') {
        cVar3 = FUN_140d110c0(param_2,3);
        if (cVar3 == '\0') {
          lVar6 = func_0x000144e6ea40(*(undefined4 *)(param_2 + 0x9c));
          uVar9 = (ulonglong)CONCAT31(uVar2,1);
          if (lVar6 != 0) {
            uVar7 = func_0x000144e6e9f0(lVar6);
            cVar3 = FUN_140140130(uVar7,0x10adda23d,auStack_14);
            if (cVar3 != '\0') {
              lVar6 = func_0x000144da10f0(*(undefined4 *)(param_2 + 0x9c));
              if (lVar6 != 0) {
                lVar6 = func_0x000144f3ea40(*(undefined8 *)(lVar6 + 0x660),0x1a);
                if (lVar6 != 0) {
                  uVar4 = func_0x000144dc06c0(*(undefined4 *)(lVar6 + 0x2c8));
                  if (_DAT_146159cc0 < (float)uVar4 * _DAT_146159ec4) goto LAB_140085277;
                }
              }
            }
          }
          uVar5 = 1;
          goto LAB_140085279;
        }
      }
      goto LAB_140085277;
    }
    lVar6 = func_0x000144d9f7c0(uVar1);
    if (lVar6 == 0) {
LAB_140085275:
      uVar9 = 0;
      goto LAB_140085277;
    }
    cVar3 = func_0x000144f14c70(*(undefined4 *)(lVar6 + 0x14),1);
    if (cVar3 == '\0') goto LAB_140085275;
    uVar5 = FUN_1424a6ad0(param_2);
    uVar9 = uVar5 & 0xffffffff;
  }
LAB_140085279:
  uVar5 = CONCAT71((int7)(uVar9 >> 8),(byte)uVar9 & (byte)uVar5);
LAB_14008527c:
  return uVar5 & 0xffffffff;
}

