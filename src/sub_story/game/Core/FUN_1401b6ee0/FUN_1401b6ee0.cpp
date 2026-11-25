// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b6ee0  size: 590 bytes
// Name:    FUN_1401b6ee0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1455cb930, FUN_145078de0, FUN_145078e80, FUN_145078050, FUN_14438bb70, FUN_1401b7720, FUN_144e96700, FUN_144fac3c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_1401b6ee0(longlong *param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  lVar3 = FUN_1455cb930(*(undefined4 *)((longlong)param_1 + 0xa4),param_1[0x15],param_2);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)FUN_144e96700(0x149aaf9c8);
    if (puVar4 == (undefined8 *)0x0) {
      uVar7 = func_0x000144fc99c0(0,0);
      puVar4 = (undefined8 *)FUN_144fac3c0(uVar7,0x50,0x10);
    }
    FUN_145078de0(puVar4);
    *puVar4 = &UNK_1465e6120;
    if (puVar4[5] != lVar3) {
      LOCK();
      *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + 1;
      UNLOCK();
      puVar5 = (undefined8 *)puVar4[5];
      if (puVar5 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar5 + 2);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar5)(puVar5,1);
        }
      }
      puVar4[5] = lVar3;
    }
    func_0x000144e474c0(puVar4 + 6);
    FUN_145078050(param_1,puVar4);
    return puVar4;
  }
  cVar2 = FUN_14438bb70(*(undefined8 *)(*(longlong *)(*param_1 + 8) + 0x18),param_2);
  if (cVar2 == '\0') {
    return (undefined8 *)0x0;
  }
  puVar4 = (undefined8 *)FUN_144e96700(0x149aaf9c8);
  if (puVar4 == (undefined8 *)0x0) {
    uVar7 = func_0x000144fc99c0(0,0);
    puVar4 = (undefined8 *)FUN_144fac3c0(uVar7,0x50,0x10);
  }
  FUN_145078de0(puVar4);
  *puVar4 = &UNK_1465e6120;
  puVar5 = (undefined8 *)FUN_144e96700(0x149aafb20);
  if (puVar5 == (undefined8 *)0x0) {
    uVar7 = func_0x000144fc99c0(0,0);
    puVar5 = (undefined8 *)FUN_144fac3c0(uVar7,0x120,0x10);
    if (puVar5 != (undefined8 *)0x0) goto LAB_1401b6fdd;
    puVar8 = (undefined8 *)puVar4[5];
    puVar5 = (undefined8 *)0x0;
LAB_1401b7115:
    LOCK();
    piVar1 = (int *)(puVar8 + 2);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    puVar6 = puVar5;
    if (*piVar1 == 0) {
      (**(code **)*puVar8)(puVar8,1);
    }
  }
  else {
LAB_1401b6fdd:
    FUN_145078e80(puVar5,0xffffffff);
    *(undefined4 *)(puVar5 + 10) = 0;
    puVar5[0xb] = 0;
    puVar5[0xc] = 0xffffffff00000000;
    *(undefined4 *)(puVar5 + 0x22) = 10;
    *(byte *)((longlong)puVar5 + 0x114) = *(byte *)((longlong)puVar5 + 0x114) & 0xfe;
    *puVar5 = &UNK_1465e9810;
    *(undefined4 *)(puVar5 + 5) = 10;
    puVar6 = (undefined8 *)puVar4[5];
    if (puVar6 == puVar5) goto LAB_1401b704f;
    LOCK();
    *(int *)(puVar5 + 2) = *(int *)(puVar5 + 2) + 1;
    UNLOCK();
    puVar8 = (undefined8 *)puVar4[5];
    puVar6 = puVar5;
    if (puVar8 != (undefined8 *)0x0) goto LAB_1401b7115;
  }
  puVar4[5] = puVar6;
LAB_1401b704f:
  *(undefined4 *)(puVar6 + 0xc) = param_2;
  func_0x000144e474c0(puVar4 + 6);
  FUN_1401b7720(param_1,4,puVar4);
  return puVar4;
}

