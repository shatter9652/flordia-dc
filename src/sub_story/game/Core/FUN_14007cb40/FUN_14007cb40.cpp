// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14007cb40  size: 560 bytes
// Name:    FUN_14007cb40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14007cd90, FUN_1400c6350
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14007cb40(longlong param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  
  if ((*(int *)(param_1 + 0xb4) != 0) && (*(uint *)(param_1 + 0xc4) < 2)) {
    lVar3 = FUN_14007cd90();
    if (lVar3 != 0) {
      *(undefined4 *)(lVar3 + 0x120) = 0;
      uVar5 = *(undefined8 *)(param_1 + 0xb8);
      FUN_1400c6350(lVar3,uVar5,0);
      uVar6 = CONCAT71((int7)((ulonglong)uVar5 >> 8),*(undefined1 *)(param_1 + 0x1a8)) &
              0xffffffffffffff04;
      func_0x00014007cd70(lVar3,CONCAT71((int7)(uVar6 >> 8),(byte)uVar6 >> 2),
                          *(undefined1 *)(param_1 + 0x1e));
      uVar2 = *(uint *)(param_1 + 0xc4);
      if (uVar2 == *(uint *)(param_1 + 0xc0)) {
        uVar7 = 1;
        if (1 < uVar2) {
          uVar7 = uVar2 >> 1;
        }
        puVar4 = (undefined8 *)func_0x000144d9c140(8,(ulonglong)(uVar7 + uVar2) * 8);
        uVar6 = (ulonglong)*(uint *)(param_1 + 0xc4);
        if (uVar6 != 0) {
          puVar1 = *(undefined8 **)(param_1 + 200);
          if (uVar6 == 2) {
            uVar5 = puVar1[1];
            *puVar4 = *puVar1;
            puVar4[1] = uVar5;
          }
          else if (*(uint *)(param_1 + 0xc4) == 1) {
            *puVar4 = *puVar1;
          }
          else {
            func_0x000145f40560(puVar4,puVar1,uVar6 << 3);
          }
        }
        if (*(longlong *)(param_1 + 200) != 0) {
          func_0x000144d9c130();
        }
        *(undefined8 **)(param_1 + 200) = puVar4;
        *(uint *)(param_1 + 0xc0) = uVar7 + uVar2;
        uVar2 = *(uint *)(param_1 + 0xc4);
      }
      else {
        puVar4 = *(undefined8 **)(param_1 + 200);
      }
      *(uint *)(param_1 + 0xc4) = uVar2 + 1;
      puVar4[uVar2] = lVar3;
    }
    lVar3 = FUN_14007cd90();
    if (lVar3 != 0) {
      *(undefined4 *)(lVar3 + 0x120) = 0;
      uVar5 = *(undefined8 *)(param_1 + 0xb8);
      FUN_1400c6350(lVar3,uVar5,0);
      uVar6 = CONCAT71((int7)((ulonglong)uVar5 >> 8),*(undefined1 *)(param_1 + 0x1a8)) &
              0xffffffffffffff04;
      func_0x00014007cd70(lVar3,CONCAT71((int7)(uVar6 >> 8),(byte)uVar6 >> 2),
                          *(undefined1 *)(param_1 + 0x1e));
      uVar2 = *(uint *)(param_1 + 0xc4);
      if (uVar2 == *(uint *)(param_1 + 0xc0)) {
        uVar7 = 1;
        if (1 < uVar2) {
          uVar7 = uVar2 >> 1;
        }
        puVar4 = (undefined8 *)func_0x000144d9c140(8,(ulonglong)(uVar7 + uVar2) * 8);
        uVar6 = (ulonglong)*(uint *)(param_1 + 0xc4);
        if (uVar6 != 0) {
          puVar1 = *(undefined8 **)(param_1 + 200);
          if (uVar6 == 1) {
            *puVar4 = *puVar1;
          }
          else if (*(uint *)(param_1 + 0xc4) == 2) {
            uVar5 = puVar1[1];
            *puVar4 = *puVar1;
            puVar4[1] = uVar5;
          }
          else {
            func_0x000145f40560(puVar4,puVar1,uVar6 << 3);
          }
        }
        if (*(longlong *)(param_1 + 200) != 0) {
          func_0x000144d9c130();
        }
        *(undefined8 **)(param_1 + 200) = puVar4;
        *(uint *)(param_1 + 0xc0) = uVar7 + uVar2;
        uVar2 = *(uint *)(param_1 + 0xc4);
      }
      else {
        puVar4 = *(undefined8 **)(param_1 + 200);
      }
      *(uint *)(param_1 + 0xc4) = uVar2 + 1;
      puVar4[uVar2] = lVar3;
    }
  }
  return;
}

