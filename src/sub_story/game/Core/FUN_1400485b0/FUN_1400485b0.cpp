// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400485b0  size: 347 bytes
// Name:    FUN_1400485b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14513cab0, FUN_14513cd50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_1400485b0(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 unaff_R14;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar5 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1);
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    if (*(int *)(param_1 + 100) != 0) {
      lVar6 = 0;
      uVar3 = 0;
      do {
        cVar1 = FUN_14513cab0(*(undefined8 *)(*(longlong *)(param_1 + 0x68) + lVar6),
                              *(undefined8 *)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0x100),
                              param_4,*(longlong *)(param_1 + 0xe8) != 0);
        if (cVar1 == '\0') goto LAB_1400486f6;
        uVar3 = uVar3 + 1;
        lVar6 = lVar6 + 0x10;
      } while (uVar3 < *(uint *)(param_1 + 100));
    }
    uVar2 = *(uint *)(param_1 + 4);
    if (uVar2 != 0) {
      if (param_4 == 0) {
        lVar6 = 0;
        uVar3 = 0;
        do {
          if ((*(byte *)(*(longlong *)(param_1 + 8) + 0x24 + lVar6) & 0x7f) == 0) {
            cVar1 = FUN_14513cd50(*(longlong *)(param_1 + 8) + lVar6,param_1,0,param_2,param_3,
                                  *(undefined8 *)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0x100),0
                                 );
            if (cVar1 == '\0') goto LAB_1400486f6;
            uVar2 = *(uint *)(param_1 + 4);
          }
          uVar3 = uVar3 + 1;
          lVar6 = lVar6 + 0x28;
        } while (uVar3 < uVar2);
      }
      else {
        lVar6 = *(longlong *)(param_1 + 8);
        uVar3 = 1;
        lVar4 = 0;
        while( true ) {
          uVar2 = FUN_14513cd50(lVar6,param_1,0,param_2,param_3,*(undefined8 *)(param_1 + 0xe0),
                                *(undefined8 *)(param_1 + 0x100),param_4);
          uVar5 = (ulonglong)uVar2;
          if (((char)uVar2 == '\0') || (*(uint *)(param_1 + 4) <= uVar3)) break;
          lVar4 = lVar4 + 1;
          uVar3 = uVar3 + 1;
          lVar6 = lVar4 * 0x28 + *(longlong *)(param_1 + 8);
        }
      }
    }
  }
LAB_1400486f9:
  return uVar5 & 0xffffffff;
LAB_1400486f6:
  uVar5 = 0;
  goto LAB_1400486f9;
}

