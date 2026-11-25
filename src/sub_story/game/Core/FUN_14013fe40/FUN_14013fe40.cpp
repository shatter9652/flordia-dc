// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14013fe40  size: 250 bytes
// Name:    FUN_14013fe40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e25cf0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14013fe40(undefined8 param_1,undefined1 (*param_2) [16],int param_3,char param_4)

{
  undefined1 auVar1 [16];
  ushort uVar2;
  ushort uVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  short sVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auVar10 [64];
  
  if (param_3 != -1) {
    lVar7 = func_0x000144e25990();
    lVar7 = *(longlong *)(lVar7 + 0x18);
    sVar6 = FUN_144e25cf0(lVar7,param_3);
    if (sVar6 != -1) {
      lVar7 = *(longlong *)(lVar7 + 0x1a8);
      uVar2 = *(ushort *)(*(longlong *)(lVar7 + 0x20) + 0x1a + (longlong)sVar6 * 0x70);
      uVar3 = *(ushort *)(*(longlong *)(lVar7 + 0x20) + 0x20 + (longlong)sVar6 * 0x70);
      if (uVar2 < uVar3) {
        auVar10 = ZEXT1664(*param_2);
        if (param_4 == '\0') {
          auVar1 = param_2[1];
          lVar8 = (ulonglong)uVar3 - (ulonglong)uVar2;
          lVar9 = (ulonglong)((uint)uVar2 * 0x50) + 0x30;
          do {
            lVar4 = *(longlong *)(*(longlong *)(lVar7 + 0x28) + lVar9);
            lVar9 = lVar9 + 0x50;
            lVar8 = lVar8 + -1;
            auVar5 = vminps_avx(*(undefined1 (*) [16])(lVar4 + 0x30),auVar10._0_16_);
            auVar10 = ZEXT1664(auVar5);
            auVar1 = vmaxps_avx(*(undefined1 (*) [16])(lVar4 + 0x20),auVar1);
            *param_2 = auVar5;
            param_2[1] = auVar1;
          } while (lVar8 != 0);
        }
        else {
          lVar8 = (ulonglong)uVar3 - (ulonglong)uVar2;
          lVar9 = (ulonglong)((uint)uVar2 * 0x50) + 0x30;
          do {
            lVar4 = *(longlong *)(*(longlong *)(lVar7 + 0x28) + lVar9);
            if (*(char *)(lVar4 + 0x10) != '\x05') {
              auVar1 = *(undefined1 (*) [16])(lVar4 + 0x20);
              auVar5 = vminps_avx(*(undefined1 (*) [16])(lVar4 + 0x30),auVar10._0_16_);
              auVar10 = ZEXT1664(auVar5);
              *param_2 = auVar5;
              auVar1 = vmaxps_avx(auVar1,param_2[1]);
              param_2[1] = auVar1;
            }
            lVar9 = lVar9 + 0x50;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
      }
    }
  }
  return;
}

