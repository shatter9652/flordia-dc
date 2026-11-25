// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140181a50  size: 570 bytes
// Name:    FUN_140181a50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_140181a50(longlong *param_1,longlong *param_2,short *param_3)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  byte bVar10;
  ulonglong uVar11;
  uint uVar12;
  bool bVar13;
  longlong alStack_78 [7];
  
  if ((*(uint *)(param_1 + 2) & 0x7fffffff) < (*(uint *)(param_2 + 2) & 0x7fffffff)) {
LAB_140181c22:
    bVar13 = false;
  }
  else {
    puVar7 = (undefined8 *)*param_1;
    puVar8 = (undefined8 *)*param_2;
    if ((puVar7 != (undefined8 *)0x0) && (puVar8 != (undefined8 *)0x0)) {
      uVar12 = 0;
      uVar9 = 0;
      uVar11 = 0;
      do {
        if (uVar9 == uVar12) {
          uVar1 = *(uint *)(puVar7[3] + 0xc);
          if ((short)uVar1 < 0) goto LAB_140181bbe;
          bVar10 = 0;
          if ((((uVar1 >> 0xd & 1) != 0) && (puVar7[4] == puVar8[4])) &&
             (bVar10 = 0, puVar7[3] == puVar8[3])) {
            if (param_3 != (short *)0x0) {
              uVar6 = param_1[0xb];
              if (uVar11 < uVar6) {
                puVar4 = (undefined8 *)param_1[uVar11 + 3];
              }
              else {
                puVar4 = (undefined8 *)0x0;
              }
              if (puVar4 == (undefined8 *)0x0) {
                puVar4 = puVar7;
              }
              do {
                puVar5 = puVar4;
                puVar4 = (undefined8 *)puVar5[1];
              } while ((undefined8 *)puVar5[1] != (undefined8 *)0x0);
              puVar5[1] = puVar8;
              *(short *)(puVar5 + 2) = *(short *)(puVar5[7] + 0x48) - *param_3;
              if (uVar6 <= uVar11) {
                if (7 < uVar11) goto LAB_140181b34;
                if (uVar6 <= uVar11 && uVar11 - uVar6 != 0) {
                  func_0x000145f40580(param_1 + uVar6 + 3,0,(uVar11 - uVar6) * 8);
                  uVar6 = uVar11;
                }
                param_1[0xb] = uVar6 + 1;
              }
              param_1[uVar11 + 3] = (longlong)puVar8;
            }
LAB_140181b34:
            bVar10 = 1;
            if (puVar8 == (undefined8 *)param_2[1]) {
              puVar8 = (undefined8 *)0x0;
            }
            else {
              puVar8 = (undefined8 *)*puVar8;
            }
          }
        }
        else {
LAB_140181bbe:
          bVar10 = 0;
        }
        puVar4 = puVar7 + 3;
        if ((*(byte *)(puVar7[3] + 0xd) & 0x10) == 0) {
          if (uVar12 == 0) {
            uVar12 = 0;
          }
          else {
            uVar1 = uVar12 - 1;
            plVar2 = *(longlong **)alStack_78[uVar1];
            iVar3 = (**(code **)(*plVar2 + 0x18))
                              (plVar2,((undefined8 *)alStack_78[uVar1])[1],puVar4);
            if (iVar3 != 0) {
              if ((uVar9 == uVar12 & (bVar10 ^ 1)) != 0) goto LAB_140181c22;
              if (iVar3 == 2) {
                uVar9 = uVar9 - (uVar9 == uVar12);
                uVar12 = uVar1;
              }
              else {
                alStack_78[uVar1] = (longlong)puVar4;
              }
            }
          }
        }
        else {
          if (uVar12 == 6) goto LAB_140181c22;
          uVar6 = (ulonglong)uVar12;
          uVar12 = uVar12 + 1;
          alStack_78[uVar6] = (longlong)puVar4;
          uVar9 = uVar9 + bVar10;
        }
        if (puVar7 == (undefined8 *)param_1[1]) goto LAB_140181c73;
        puVar7 = (undefined8 *)*puVar7;
        uVar11 = uVar11 + 1;
      } while (puVar8 != (undefined8 *)0x0);
      puVar8 = (undefined8 *)0x0;
    }
LAB_140181c73:
    bVar13 = puVar8 == (undefined8 *)0x0;
  }
  return bVar13;
}

