// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14007c4d0  size: 355 bytes
// Name:    FUN_14007c4d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f13090, FUN_144f13100
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_14007c4d0(uint *param_1,undefined8 param_2,uint param_3)

{
  uint *puVar1;
  char cVar2;
  uint *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_1c [4];
  
  puVar1 = param_1 + 0x14;
  cVar2 = func_0x00014007c640(puVar1);
  if (cVar2 != '\0') {
    puVar3 = (uint *)FUN_144f13090(puVar1,auStack_1c);
    *(uint **)(param_1 + 0xc) = puVar3;
    if (puVar3 != (uint *)0x0) {
      param_1[0x16] = *puVar3;
      uVar4 = func_0x000144f12fc0(puVar1,param_1 + 0x17);
      *(undefined8 *)(param_1 + 0xe) = uVar4;
      puVar3 = (uint *)FUN_144f13100(puVar1,0xe787895a);
      if (puVar3 != (uint *)0x0) {
        uVar7 = 1;
        if (*puVar3 != 0xbc614e) {
          uVar7 = *puVar3;
        }
        if (uVar7 < 3) {
          if (uVar7 == 2) {
            uVar8 = puVar3[1];
            *(char *)(param_1 + 0x1e) = (char)uVar8;
            param_1[0x1c] = puVar3[2];
            uVar7 = puVar3[3];
            if (*(longlong *)(param_1 + 2) == 0) {
              *(uint **)(param_1 + 2) = puVar3 + 4;
            }
            *param_1 = uVar7;
            param_1[1] = uVar7;
            uVar8 = (uVar8 & 0xff) * uVar7;
            if (*(longlong *)(param_1 + 6) == 0) {
              *(uint **)(param_1 + 6) = puVar3 + 4 + (ulonglong)uVar7 * 5;
            }
            param_1[4] = uVar8;
            param_1[5] = uVar8;
          }
          else {
            uVar7 = 0xcccccccc;
            if (*(longlong *)(param_1 + 2) == 0) {
              *(uint **)(param_1 + 2) = puVar3 + 1;
            }
            *param_1 = 0xcccccccc;
            param_1[1] = 0xcccccccc;
            *(undefined1 *)(param_1 + 0x1e) = 0;
            param_1[0x1c] = puVar3[0x3fffffffd];
          }
        }
        else {
          uVar7 = param_1[1];
        }
        if (1 < uVar7) {
          lVar5 = FUN_144f13100(puVar1,0x8b946236,param_1 + 0x19);
          *(longlong *)(param_1 + 0x12) = lVar5;
          uVar6 = 0;
          if (lVar5 != 0) {
            uVar6 = (ulonglong)(param_1[0x19] >> 1);
            param_1[0x1a] = param_1[0x19] >> 1;
          }
          param_1[0x1b] = param_3;
          return CONCAT71((int7)(uVar6 >> 8),1);
        }
      }
    }
  }
  return 0;
}

