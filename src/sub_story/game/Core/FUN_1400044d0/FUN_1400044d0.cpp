// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400044d0  size: 124 bytes
// Name:    FUN_1400044d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400044d0(longlong param_1,float param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  lVar3 = func_0x000144d9e2e0(param_1,0xefd30e69);
  if (lVar3 == 0) {
    if ((param_2 != 0.0) || (NAN(param_2))) {
      lVar3 = FUN_1440ab850(param_1,0xefd30e69,1);
      *(float *)(lVar3 + 8) = param_2;
      return;
    }
  }
  else {
    if ((param_2 == 0.0) && (!NAN(param_2))) {
      uVar8 = *(uint *)(param_1 + 0x14);
      uVar9 = (ulonglong)uVar8;
      uVar5 = *(uint *)(param_1 + 0x24);
      uVar6 = (ulonglong)uVar5;
      cVar1 = func_0x00014504db90(uVar9,uVar6);
      if (cVar1 != '\0') {
        if ((uVar8 & 0x7fffffff) != 0) {
          lVar4 = 0;
          lVar3 = *(longlong *)(param_1 + 0x18) + 0x18 + param_1;
          if (*(longlong *)(param_1 + 0x18) == 1) {
            lVar3 = lVar4;
          }
          do {
            if (*(int *)(lVar3 + lVar4) == -0x102cf197) {
              if (lVar3 + lVar4 + 0xc != lVar3 + uVar9 * 0xc) {
                lVar10 = (uVar9 * 0xc + -0xc) - lVar4;
                lVar3 = lVar3 + lVar4;
                do {
                  func_0x0001451764b0(lVar3,lVar3 + 0xc);
                  lVar10 = lVar10 + -0xc;
                  lVar3 = lVar3 + 0xc;
                } while (lVar10 != 0);
                uVar8 = *(uint *)(param_1 + 0x14);
              }
              *(uint *)(param_1 + 0x14) = uVar8 - 1;
              goto FUN_14504dba0;
            }
            lVar4 = lVar4 + 0xc;
          } while ((uVar9 & 0x7fffffff) * 0xc != lVar4);
        }
        if ((uVar5 & 0x7fffffff) != 0) {
          lVar4 = *(longlong *)(param_1 + 0x28);
          lVar7 = 0;
          lVar3 = lVar4 + 0x28 + param_1;
          lVar10 = lVar3;
          if (lVar4 == 1) {
            lVar10 = lVar7;
          }
          do {
            if (*(int *)(lVar10 + lVar7) == -0x102cf197) {
              if (lVar10 + lVar7 + 0x20 != uVar6 * 0x20 + lVar10) {
                lVar4 = (uVar6 * 0x20 + -0x20) - lVar7;
                lVar3 = lVar10 + lVar7;
                do {
                  FUN_145403200(lVar3,lVar3 + 0x20);
                  lVar4 = lVar4 + -0x20;
                  lVar3 = lVar3 + 0x20;
                } while (lVar4 != 0);
                lVar4 = *(longlong *)(param_1 + 0x28);
                uVar5 = *(uint *)(param_1 + 0x24);
                lVar3 = param_1 + 0x28 + lVar4;
              }
              lVar10 = 0;
              if (lVar4 != 1) {
                lVar10 = lVar3;
              }
              *(uint *)(param_1 + 0x24) = uVar5 - 1;
              FUN_14504dbc0((ulonglong)(uVar5 - 1) * 0x20 + lVar10);
FUN_14504dba0:
              uVar2 = FUN_140194a20();
              *(undefined4 *)(param_1 + 0x3c) = uVar2;
              return;
            }
            lVar7 = lVar7 + 0x20;
          } while ((uVar6 & 0x7fffffff) * 0x20 != lVar7);
        }
      }
      return;
    }
    *(float *)(lVar3 + 8) = param_2;
  }
  return;
}

