// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14003a7d0  size: 442 bytes
// Name:    FUN_14003a7d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144dd5ae0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14003a7d0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulonglong *puVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar11 = param_2[3];
  if (uVar11 < (ulonglong)param_1[3]) {
    uVar12 = *param_2;
    uVar13 = param_2[1];
    lVar7 = param_2[2];
    param_2[2] = 0;
    uVar1 = param_1[1];
    *param_2 = *param_1;
    param_2[1] = uVar1;
    lVar5 = param_1[2];
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      param_1[2] = 0;
      param_2[2] = lVar5;
      FUN_144dd5ae0(0);
      lVar5 = param_1[2];
    }
    param_2[3] = param_1[3];
    *param_1 = uVar12;
    param_1[1] = uVar13;
    if (lVar5 != lVar7) {
      param_1[2] = lVar7;
      FUN_144dd5ae0();
      lVar7 = 0;
    }
    param_1[3] = uVar11;
    FUN_144dd5ae0(lVar7);
    uVar11 = param_2[3];
  }
  uVar8 = param_3[3];
  if (uVar8 < uVar11) {
    uVar12 = *param_3;
    uVar13 = param_3[1];
    lVar7 = param_3[2];
    param_3[2] = 0;
    uVar1 = param_2[1];
    *param_3 = *param_2;
    param_3[1] = uVar1;
    lVar5 = param_2[2];
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      param_2[2] = 0;
      param_3[2] = lVar5;
      FUN_144dd5ae0(0);
      lVar5 = param_2[2];
    }
    param_3[3] = param_2[3];
    *param_2 = uVar12;
    param_2[1] = uVar13;
    if (lVar5 != lVar7) {
      param_2[2] = lVar7;
      FUN_144dd5ae0();
    }
    param_2[3] = uVar8;
    FUN_144dd5ae0();
    uVar11 = param_2[3];
    if (uVar11 < (ulonglong)param_1[3]) {
      uVar12 = *param_2;
      uVar13 = param_2[1];
      uVar8 = param_2[2];
      param_2[2] = 0;
      uVar1 = param_1[1];
      *param_2 = *param_1;
      param_2[1] = uVar1;
      lVar7 = param_1[2];
      if (lVar7 == 0) {
        uVar6 = 0;
      }
      else {
        param_1[2] = 0;
        param_2[2] = lVar7;
        FUN_144dd5ae0(0);
        uVar6 = param_1[2];
      }
      param_2[3] = param_1[3];
      *param_1 = uVar12;
      param_1[1] = uVar13;
      if (uVar6 != uVar8) {
        param_1[2] = uVar8;
        FUN_144dd5ae0();
        uVar8 = 0;
      }
      param_1[3] = uVar11;
      puVar2 = puRam0000000149e47988;
      if (uVar8 == 0) {
        return;
      }
      if (0 < (longlong)iRam0000000149e47994) {
        lVar7 = 0;
        do {
          if (*(char *)(lVar7 * 0x48 + 0x149e479b8) == '\x01') {
            uVar10 = *(uint *)(lVar7 * 0x48 + 0x149e479a8) & 0x7fffffff;
            uVar11 = (ulonglong)uVar10;
            if (uVar10 != 0) {
              puVar9 = *(ulonglong **)(lVar7 * 0x48 + 0x149e479b0);
              do {
                if ((*puVar9 <= uVar8) && (uVar8 < puVar9[1])) {
                  iVar4 = 100;
                  while( true ) {
                    LOCK();
                    bVar3 = (byte)puVar9[6];
                    if (bVar3 == 0) {
                      *(char *)(puVar9 + 6) = '\x01';
                      bVar3 = 0;
                    }
                    UNLOCK();
                    if ((bVar3 & 1) == 0) break;
                    iVar4 = iVar4 + -1;
                    if (iVar4 == 0) {
                      return;
                    }
                  }
                  goto code_r0x000144dd5b91;
                }
                puVar9 = puVar9 + 8;
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
            }
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 != iRam0000000149e47994);
      }
      if (uVar8 < *puRam0000000149e47988) {
        return;
      }
      if (puRam0000000149e47988[1] <= uVar8) {
        return;
      }
      iVar4 = 300;
      while( true ) {
        puVar9 = puVar2 + 6;
        LOCK();
        bVar3 = (byte)*puVar9;
        if (bVar3 == 0) {
          *(char *)puVar9 = '\x01';
          bVar3 = 0;
        }
        UNLOCK();
        puVar9 = puVar2;
        if ((bVar3 & 1) == 0) break;
        iVar4 = iVar4 + -1;
        if (iVar4 == 0) {
          return;
        }
      }
code_r0x000144dd5b91:
      FUN_144dd6500(puVar9);
      *(undefined1 *)(puVar9 + 6) = 0;
      return;
    }
  }
  return;
}

