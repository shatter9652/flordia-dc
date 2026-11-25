// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400181c0  size: 313 bytes
// Name:    FUN_1400181c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f1eaf0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1400181c0(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  char cStack_2d;
  int iStack_2c;
  
  uVar4 = *(uint *)(param_1 + 0x100);
  if (uVar4 == 0) {
    iVar7 = 0;
  }
  else if (param_2 == (undefined1 *)0x0) {
    uVar8 = 0;
    iVar3 = 0;
    iVar7 = 0;
    do {
      uVar6 = (uint)*(ushort *)(param_1 + 0xb4 + (longlong)(int)uVar8 * 2);
      if (((uVar6 != 0xffff) && (_DAT_14ab73aa0 != 0)) &&
         (lVar1 = *(longlong *)
                   (_DAT_14ab73aa0 + 0x8ab8 + (ulonglong)*(byte *)(param_1 + 0x7e) * 0x8ad0),
         lVar1 != 0)) {
        cStack_2d = '\0';
        iVar5 = FUN_144f1eaf0(lVar1 + (ulonglong)(uVar6 * _DAT_14ab73a88),&cStack_2d);
        bVar2 = iVar7 < iVar5;
        iVar7 = iVar3;
        if (bVar2) {
          iVar7 = iVar5;
        }
        uVar4 = *(uint *)(param_1 + 0x100);
        iVar3 = iVar7;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar4);
  }
  else {
    uVar8 = 0;
    iVar7 = 0;
    do {
      uVar6 = (uint)*(ushort *)(param_1 + 0xb4 + (longlong)(int)uVar8 * 2);
      if (((uVar6 != 0xffff) && (_DAT_14ab73aa0 != 0)) &&
         (lVar1 = *(longlong *)
                   (_DAT_14ab73aa0 + 0x8ab8 + (ulonglong)*(byte *)(param_1 + 0x7e) * 0x8ad0),
         lVar1 != 0)) {
        cStack_2d = '\0';
        iVar3 = FUN_144f1eaf0(lVar1 + (ulonglong)(uVar6 * _DAT_14ab73a88),&cStack_2d);
        if (cStack_2d == '\x01') {
          *param_2 = 1;
        }
        if (iVar7 < iVar3) {
          iVar7 = iVar3;
        }
        uVar4 = *(uint *)(param_1 + 0x100);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar4);
  }
  iStack_2c = iVar7;
  func_0x000144f1eac0(*(undefined8 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0xfe),&iStack_2c);
  return iStack_2c;
}

