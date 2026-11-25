// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140007c20  size: 266 bytes
// Name:    FUN_140007c20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14532beb0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140007c20(longlong param_1,char param_2)

{
  uint *puVar1;
  ushort *puVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  undefined4 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  longlong unaff_GS_OFFSET;
  undefined1 auVar11 [16];
  uint auStack_30 [2];
  
  lVar3 = *(longlong *)(param_1 + 0x4a0);
  if (*(longlong *)(lVar3 + 0x488) == param_1) {
    *(undefined8 *)(lVar3 + 0x488) = *(undefined8 *)(*(longlong *)(lVar3 + 0x488) + 0x478);
    *(undefined8 *)(param_1 + 0x478) = 0;
    if (*(longlong *)(lVar3 + 0x488) == 0) {
      *(undefined8 *)(lVar3 + 0x490) = 0;
    }
    else {
      *(undefined8 *)(*(longlong *)(lVar3 + 0x488) + 0x480) = 0;
    }
  }
  else if (*(longlong *)(lVar3 + 0x490) == param_1) {
    *(undefined8 *)(lVar3 + 0x490) = *(undefined8 *)(*(longlong *)(lVar3 + 0x490) + 0x480);
    *(undefined8 *)(param_1 + 0x480) = 0;
    if (*(longlong *)(lVar3 + 0x490) != 0) {
      *(undefined8 *)(*(longlong *)(lVar3 + 0x490) + 0x478) = 0;
    }
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x478);
    auVar11._0_12_ = ZEXT812(0);
    auVar11._12_4_ = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x480) + 0x478) = lVar4;
    *(undefined8 *)(lVar4 + 0x480) = *(undefined8 *)(param_1 + 0x480);
    *(undefined1 (*) [16])(param_1 + 0x478) = auVar11;
  }
  *(longlong *)(lVar3 + 0x498) = *(longlong *)(lVar3 + 0x498) + -1;
  *(undefined8 *)(param_1 + 0x4a0) = 0;
  if ((param_2 == '\0') && ((*(byte *)(lVar3 + 0x51d) & 4) == 0)) {
    auStack_30[0] = 0x40007cd9;
    auStack_30[1] = 1;
    FUN_14532beb0(lVar3,0);
    if (*(int *)(lVar3 + 0x4f8) != 0 || *(int *)(lVar3 + 0x4f4) != 0) {
      lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x100) + 0x1a0);
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      if (*(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1448) == 0) {
        auStack_30[0] = 0;
        auStack_30[1] = 0;
      }
      lVar7 = *(longlong *)(lVar3 + 0x488);
      if (lVar7 != 0) {
        if (*(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
            '\0') {
          uVar9 = 0;
          uVar10 = 0;
          cVar5 = '\0';
          do {
            if (cVar5 == '\0') {
              func_0x0001455db994();
              cVar5 = *(char *)(*(longlong *)
                                 (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8
                                 ) + 8);
            }
            puVar1 = (uint *)(lVar7 + 0x4f4);
            puVar2 = (ushort *)(lVar7 + 0x4f8);
            lVar7 = *(longlong *)(lVar7 + 0x478);
            uVar10 = uVar10 | ~*puVar1;
            uVar9 = uVar9 | *puVar2 ^ 0xffff;
          } while (lVar7 != 0);
        }
        else {
          uVar9 = 0;
          uVar10 = 0;
          do {
            puVar1 = (uint *)(lVar7 + 0x4f4);
            puVar2 = (ushort *)(lVar7 + 0x4f8);
            lVar7 = *(longlong *)(lVar7 + 0x478);
            uVar10 = uVar10 | ~*puVar1;
            uVar9 = uVar9 | *puVar2 ^ 0xffff;
          } while (lVar7 != 0);
        }
        auStack_30[1] = uVar9;
        auStack_30[0] = uVar10;
      }
      if (0 < *(int *)(lVar4 + 0x14)) {
        uVar8 = 0;
        do {
          uVar9 = (uint)uVar8;
          uVar6 = func_0x000144dacad0(lVar4,uVar8);
          if (((*(uint *)(lVar3 + 0x4f4 + (uVar8 >> 5) * 4) >> (uVar9 & 0x1f) & 1) == 0) ||
             ((auStack_30[uVar8 >> 5] & 1 << (uVar9 & 0x1f)) != 0)) {
            FUN_144dacb30(lVar3,uVar6,0x20);
          }
          else {
            FUN_144ec8fa0(lVar3,uVar6,0x20);
          }
          uVar8 = (ulonglong)(uVar9 + 1);
        } while ((int)(uVar9 + 1) < *(int *)(lVar4 + 0x14));
      }
    }
    return;
  }
  return;
}

