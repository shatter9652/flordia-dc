// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140115900  size: 385 bytes
// Name:    FUN_140115900
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14128b5a0, FUN_144ec6670, FUN_1401156d0, FUN_144ec6720
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140115900(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  uint *puVar7;
  uint uVar8;
  longlong unaff_GS_OFFSET;
  uint uStack_3c;
  
  lVar6 = **(longlong **)(unaff_GS_OFFSET + 0x58);
  lVar5 = *(longlong *)(lVar6 + 0x1258);
  lVar2 = _DAT_14abcd240 + 0x68;
  if (lVar5 != 0) {
    lVar2 = lVar5;
  }
  uVar8 = (uint)*(undefined8 *)(lVar2 + 0x10);
  if ((uVar8 >> 0x14 & 1) != 0) {
    FUN_144ec6720();
  }
  uStack_3c = 0xffffffff;
  FUN_1401156d0(param_1,param_2,&uStack_3c);
  uVar4 = 0;
  if ((uStack_3c != 0xffffffff) && (uStack_3c != 4)) {
    if (*(uint *)(param_1 + 0x20) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      puVar7 = *(uint **)(*(longlong *)(param_1 + 0x18) +
                         ((ulonglong)uStack_3c % (ulonglong)*(uint *)(param_1 + 0x20)) * 8);
      if (puVar7 != (uint *)0x0) {
        plVar1 = (longlong *)(lVar6 + 0x1258);
        uVar4 = 0;
        do {
          if (uStack_3c == *puVar7) {
            lVar6 = *plVar1;
            if (lVar6 == 0) {
              lVar6 = param_1 + 0x68;
            }
            if (*(longlong *)(puVar7 + 6) == 0) {
              plVar3 = (longlong *)(**(code **)(puVar7 + 8))(param_2,lVar6);
            }
            else {
              plVar3 = (longlong *)(**(code **)(puVar7 + 8))(*(longlong *)(puVar7 + 6),param_2);
            }
            if (plVar3 == (longlong *)0x0) {
              lVar6 = *plVar1;
              lVar5 = param_1 + 0x68;
              if (lVar6 != 0) {
                lVar5 = lVar6;
              }
              if (*(longlong *)(puVar7 + 10) == 0) {
                uVar4 = (**(code **)(puVar7 + 0xc))(param_2,lVar5,0);
              }
              else {
                uVar4 = (**(code **)(puVar7 + 0xc))(*(longlong *)(puVar7 + 10),param_2,lVar5);
              }
            }
            else {
              (**(code **)(*plVar3 + 8))(plVar3,0);
              uVar4 = FUN_14128b5a0(plVar3);
              (**(code **)*plVar3)(plVar3,1);
            }
            break;
          }
          puVar7 = *(uint **)(puVar7 + 0x10);
        } while (puVar7 != (uint *)0x0);
      }
    }
  }
  if ((uVar8 >> 0x14 & 1) != 0) {
    FUN_144ec6670();
  }
  return uVar4;
}

