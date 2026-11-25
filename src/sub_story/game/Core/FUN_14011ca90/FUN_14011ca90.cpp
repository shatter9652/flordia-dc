// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011ca90  size: 163 bytes
// Name:    FUN_14011ca90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145761eb0, FUN_145514f10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14011ca90(longlong param_1,byte param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uStack_60;
  longlong lStack_58;
  uint uStack_4c;
  char cStack_48;
  undefined8 uStack_40;
  
  if (param_1 != 0) {
    uStack_40 = 0x14011caa9;
    bVar5 = func_0x0001450ec630();
    if (((param_2 & 10) == 2 & bVar5) == 1) {
      uStack_40 = 0x14011cac1;
      FUN_145514f10(param_1);
      if (*(char *)(param_1 + 0xd49) == '\x01') {
        lVar7 = (ulonglong)_DAT_14a210d10 * 0x10;
        uVar6 = *(uint *)(lVar7 + 0x14999e474);
        if (uVar6 == *(uint *)(lVar7 + 0x14999e470)) {
          uVar9 = 1;
          if (1 < uVar6) {
            uVar9 = uVar6 >> 1;
          }
          uStack_40 = 0x14011cb2e;
          FUN_145761eb0((uint *)(lVar7 + 0x14999e470),uVar9 + uVar6);
          uVar6 = *(uint *)(lVar7 + 0x14999e474);
        }
        *(uint *)(lVar7 + 0x14999e474) = uVar6 + 1;
        *(longlong *)(*(longlong *)(lVar7 + 0x14999e478) + (ulonglong)uVar6 * 8) = param_1;
        if (*(char *)(param_1 + 0xd49) != '\0') {
          uVar6 = *(uint *)(param_1 + 0xcdc);
          if (uVar6 != 0) {
            lVar7 = 4;
            uVar10 = 0;
            do {
              if (*(int *)(param_1 + 0xcfc) == 0) {
                uVar8 = 0;
              }
              else {
                uVar8 = *(ulonglong *)(*(longlong *)(param_1 + 0xd00) + uVar10 * 8);
              }
              if ((*(ulonglong *)(param_1 + 0xd28) & uVar8) != 0) {
                lVar1 = *(longlong *)(param_1 + 0xcf0);
                uVar2 = *(undefined8 *)(lVar1 + -0x10 + lVar7 * 8);
                uVar3 = *(undefined8 *)(lVar1 + -8 + lVar7 * 8);
                uVar4 = *(undefined8 *)(lVar1 + lVar7 * 8);
                uStack_60 = uVar2;
                FUN_1421f8960(param_3,&lStack_58,&uStack_60);
                if (cStack_48 == '\x01') {
                  *(undefined8 *)
                   ((ulonglong)((uStack_4c & 0xf) << 4) + 0x10 +
                   (ulonglong)(uStack_4c >> 4) * 0x110 + lStack_58) = uVar2;
                }
                *(undefined4 *)
                 ((ulonglong)((uStack_4c & 0xf) << 4) + 0x18 +
                 lStack_58 + (ulonglong)(uStack_4c >> 4) * 0x110) = 1;
                uStack_60 = uVar3;
                FUN_1421f8960(param_3,&lStack_58,&uStack_60);
                if (cStack_48 == '\x01') {
                  *(undefined8 *)
                   ((ulonglong)((uStack_4c & 0xf) << 4) + 0x10 +
                   (ulonglong)(uStack_4c >> 4) * 0x110 + lStack_58) = uVar3;
                }
                *(undefined4 *)
                 ((ulonglong)((uStack_4c & 0xf) << 4) + 0x18 +
                 lStack_58 + (ulonglong)(uStack_4c >> 4) * 0x110) = 1;
                uStack_60 = uVar4;
                FUN_1421f8960(param_3,&lStack_58,&uStack_60);
                if (cStack_48 == '\x01') {
                  *(undefined8 *)
                   ((ulonglong)((uStack_4c & 0xf) << 4) + 0x10 +
                   (ulonglong)(uStack_4c >> 4) * 0x110 + lStack_58) = uVar4;
                }
                *(undefined4 *)
                 ((ulonglong)((uStack_4c & 0xf) << 4) + 0x18 +
                 lStack_58 + (ulonglong)(uStack_4c >> 4) * 0x110) = 1;
                uVar6 = *(uint *)(param_1 + 0xcdc);
              }
              uVar10 = uVar10 + 1;
              lVar7 = lVar7 + 5;
            } while (uVar10 < uVar6);
          }
        }
        return;
      }
    }
  }
  return;
}

