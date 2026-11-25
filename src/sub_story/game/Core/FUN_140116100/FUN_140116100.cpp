// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140116100  size: 255 bytes
// Name:    FUN_140116100
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e258f0, FUN_140038190
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


char FUN_140116100(undefined8 param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  char cVar5;
  undefined4 uVar6;
  longlong lVar7;
  short sVar8;
  uint uVar9;
  int iVar10;
  
  lVar7 = FUN_144e258f0();
  if (lVar7 != 0) {
    uVar6 = FUN_140038190(lVar7,param_2);
    lVar3 = *(longlong *)(lVar7 + 0x170);
    cVar5 = func_0x000144e3f970(lVar3,uVar6);
    if (cVar5 != '\0') {
      return '\x01';
    }
    sVar8 = (short)uVar6;
    if (sVar8 != -1) {
      if (lVar3 == 0) {
        lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0x1a8) + 0x20);
      }
      else {
        sVar1 = *(short *)(*(longlong *)(lVar3 + 0x180) + (ulonglong)(uint)(int)sVar8 * 2);
        if (*(longlong *)(lVar3 + 0x158) == 0 || sVar1 == -1) {
          return '\x01';
        }
        lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0x1a8) + 0x20);
        auVar4 = vcvtph2ps_f16c(ZEXT216(*(ushort *)(lVar7 + 0x32 + (longlong)sVar8 * 0x70)));
        if (*(float *)(*(longlong *)(lVar3 + 0x158) + (ulonglong)(uint)(int)sVar1 * 0x18) <
            auVar4._0_4_) {
          return '\x01';
        }
      }
      iVar10 = *(int *)(lVar7 + 0x14 + (longlong)sVar8 * 0x70);
      iVar2 = *(int *)(lVar7 + 0x18 + (longlong)sVar8 * 0x70);
      if ((short)iVar10 < (short)((short)iVar10 + (short)iVar2)) {
        uVar9 = iVar2 - 1;
        do {
          cVar5 = func_0x000144e3f970(lVar3,iVar10);
          sVar8 = (short)uVar9;
          uVar9 = (uint)(ushort)(sVar8 - 1);
          if (cVar5 != '\0') {
            return cVar5;
          }
          iVar10 = iVar10 + 1;
        } while (sVar8 != 0);
        return '\0';
      }
    }
  }
  return '\0';
}

