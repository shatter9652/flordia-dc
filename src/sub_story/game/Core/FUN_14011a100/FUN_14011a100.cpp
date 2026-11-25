// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011a100  size: 38 bytes
// Name:    FUN_14011a100
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14011a130
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_14011a100(longlong param_1)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  uint *puVar7;
  ulonglong uVar8;
  bool bVar9;
  uint uStack_20;
  uint uStack_1c;
  
  cVar3 = FUN_14011a130();
  if (cVar3 == '\0') {
    return 0;
  }
  cVar3 = FUN_14011a130();
  if (cVar3 == '\0') {
    return 0;
  }
  puVar7 = (uint *)(param_1 + 4);
  uVar1 = *puVar7;
  if ((uVar1 & 0x90000000) == 0x10000000) {
    if (0x3fffffff < uVar1) {
      return 0x10000001;
    }
    func_0x000144d9ede0(&uStack_20,uVar1 & 0xfffffff);
    lVar4 = func_0x000144d9eda0();
    uVar6 = uStack_20 & 0xfffffff;
    if (uVar6 == 0xfffffff) {
      uVar6 = 0xffffffff;
    }
    if ((*(uint *)(*(longlong *)(lVar4 + 0x16850) + (ulonglong)(uVar6 >> 5) * 4) >> (uVar6 & 0x1f) &
        1) != 0) {
      uStack_1c = uStack_20;
      cVar3 = FUN_144da2360();
      if (cVar3 != '\0') {
        LOCK();
        uVar6 = *puVar7;
        bVar9 = uVar1 == uVar6;
        if (bVar9) {
          *puVar7 = uVar1 | 0x40000000;
          uVar6 = uVar1;
        }
        UNLOCK();
code_r0x000144e7aca8:
        uVar5 = CONCAT71((uint7)(uint3)(uVar6 >> 8),1);
        if (bVar9) {
          return uVar5;
        }
        if ((((uStack_20 & 0xfffffff) != 0xfffffff) &&
            ((uStack_20 & 0xfffffff) == (uVar6 & 0xfffffff))) && ((uVar6 & 0x40000000) != 0)) {
          return uVar5;
        }
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return uVar5;
      }
    }
  }
  else {
    if ((int)uVar1 < 0) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
    if ((uVar1 >> 0x1c & 1) != 0) {
      if ((uVar1 >> 0x1e & 1) != 0) {
        return CONCAT71((uint7)(uint3)((uVar1 & 0x90000000) >> 8),1);
      }
      func_0x000144d9ede0(&uStack_20,uVar1 & 0xfffffff);
      lVar4 = func_0x000144d9eda0();
      uVar8 = 0xffffffff;
      if ((uStack_20 & 0xfffffff) != 0xfffffff) {
        uVar8 = (ulonglong)(uStack_20 & 0xfffffff);
      }
      if ((*(uint *)(*(longlong *)(lVar4 + 0x16850) + (uVar8 >> 5) * 4) >> ((uint)uVar8 & 0x1f) & 1)
          != 0) {
        uStack_1c = uStack_20;
        cVar3 = FUN_144da2360();
        if (cVar3 != '\0') {
          LOCK();
          uVar6 = *puVar7;
          bVar9 = uVar1 == uVar6;
          if (bVar9) {
            *puVar7 = uVar1 | 0x40000000;
            uVar6 = uVar1;
          }
          UNLOCK();
          goto code_r0x000144e7aca8;
        }
      }
    }
  }
  return 0;
}

