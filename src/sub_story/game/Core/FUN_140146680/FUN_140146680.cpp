// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140146680  size: 328 bytes
// Name:    FUN_140146680
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145a147b0, FUN_1401438b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140146680(longlong param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong lStack_68;
  longlong *plStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  uVar7 = *(uint *)(param_1 + 0x5d0);
  if ((int)uVar7 < *(int *)(param_1 + 0x3c)) {
    do {
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar7 * 8);
      if (*(char *)(lVar6 + 0xe0) != '\x03') {
        uVar1 = *(undefined4 *)(lVar6 + 0x88);
        uVar3 = *(undefined8 *)(*(longlong *)(lVar6 + 0x80) + 0x20);
        lVar4 = func_0x000144f2e340(uVar3,uVar1);
        uVar2 = *(uint *)(lVar4 + 0x780);
        lVar5 = func_0x000144f2e340(uVar3,uVar1);
        if (((uVar2 | *(uint *)(lVar5 + 0xa80)) & 1) != 0) {
          plStack_60 = &lStack_68;
          puStack_58 = &UNK_1421c71d0;
          puStack_50 = &UNK_1401167b0;
          puStack_48 = &SUB_140004380;
          lStack_68 = param_1;
          lVar6 = FUN_145a147b0(lVar6,&plStack_60);
          if (lVar6 != 0) {
            *(byte *)(lVar4 + 0x780) = *(byte *)(lVar4 + 0x780) & 0xfe;
            *(byte *)(lVar4 + 0x7c0) = *(byte *)(lVar4 + 0x7c0) & 0xfe;
            *(byte *)(lVar4 + 0x800) = *(byte *)(lVar4 + 0x800) & 0xfe;
            *(byte *)(lVar4 + 0x840) = *(byte *)(lVar4 + 0x840) & 0xfe;
            *(byte *)(lVar4 + 0x880) = *(byte *)(lVar4 + 0x880) & 0xfe;
            *(byte *)(lVar4 + 0x8c0) = *(byte *)(lVar4 + 0x8c0) & 0xfe;
            *(byte *)(lVar5 + 0xa80) = *(byte *)(lVar5 + 0xa80) & 0xfe;
            *(byte *)(lVar5 + 0xac0) = *(byte *)(lVar5 + 0xac0) & 0xfe;
            *(byte *)(lVar5 + 0xb00) = *(byte *)(lVar5 + 0xb00) & 0xfe;
            *(byte *)(lVar5 + 0xb40) = *(byte *)(lVar5 + 0xb40) & 0xfe;
            *(byte *)(lVar5 + 0xb80) = *(byte *)(lVar5 + 0xb80) & 0xfe;
            *(byte *)(lVar5 + 0xbc0) = *(byte *)(lVar5 + 0xbc0) & 0xfe;
          }
        }
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < *(int *)(param_1 + 0x3c));
  }
  FUN_1401438b0(param_1);
  return;
}

