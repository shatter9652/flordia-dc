// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401aec80  size: 325 bytes
// Name:    FUN_1401aec80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145071880, FUN_1455c0b00, FUN_1403d3f80, FUN_1450714c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined4 FUN_1401aec80(longlong param_1,undefined8 param_2)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  int *piVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  undefined4 uStack_b8;
  short sStack_b4;
  char cStack_b2;
  undefined1 uStack_b1;
  ulonglong uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [128];
  
  uStack_b8 = 1;
  lVar6 = FUN_145071880();
  if (((*(char *)(param_1 + 0x2ea) != '\0') && (*(short *)(param_1 + 0x2e8) != 0)) &&
     ((*(byte *)(param_1 + 0xe0) & 0x10) == 0)) {
    uStack_b0 = 8;
    uStack_b1 = 0;
    sStack_b4 = *(short *)(param_1 + 0x2e8);
    cStack_b2 = *(char *)(param_1 + 0x2ea);
    puStack_a8 = auStack_a0;
    FUN_1403d3f80(lVar6 + 0x2c0);
    if (uStack_b0 >> 0x20 != 0) {
      lVar6 = (uStack_b0 >> 0x20) << 4;
      lVar7 = 0;
      bVar8 = false;
      do {
        if (*(longlong *)(puStack_a8 + lVar7 + 8) != 0) {
          uVar2 = *(uint *)(*(longlong *)(puStack_a8 + lVar7 + 8) + 0x1c);
          if (3 < uVar2) goto LAB_1401aed29;
          bVar8 = (bool)(bVar8 | uVar2 == 3);
        }
        lVar7 = lVar7 + 0x10;
      } while (lVar6 != lVar7);
      if (bVar8) {
        FUN_1455c0b00(&uStack_b0);
        return 0x15;
      }
LAB_1401aed29:
      lVar7 = 0;
      auVar9._0_12_ = ZEXT812(0);
      auVar9._12_4_ = 0;
      do {
        pauVar1 = (undefined1 (*) [16])(puStack_a8 + lVar7);
        if (*(longlong *)(puStack_a8 + lVar7 + 8) != 0) {
          piVar3 = *(int **)*pauVar1;
          LOCK();
          *piVar3 = *piVar3 + -1;
          UNLOCK();
        }
        lVar7 = lVar7 + 0x10;
        *pauVar1 = auVar9;
      } while (lVar6 != lVar7);
    }
    uStack_b0 = uStack_b0 & 0xffffffff;
    if ((auStack_a0 != puStack_a8) && (puStack_a8 != (undefined1 *)0x0)) {
      func_0x000144d9c130();
    }
  }
  cVar4 = FUN_1450714c0(param_1,param_2,&uStack_b8);
  uVar5 = 1;
  if (cVar4 != '\0') {
    uVar5 = uStack_b8;
  }
  return uVar5;
}

