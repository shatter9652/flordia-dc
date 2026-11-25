// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140057f40  size: 387 bytes
// Name:    FUN_140057f40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14335c250, FUN_1400ff260
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140057f40(undefined8 param_1,longlong param_2,uint param_3,undefined4 *param_4,byte param_5
                  )

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lStack_58;
  uint uStack_4c;
  char cStack_48;
  
  if (param_3 != 0) {
    lVar6 = (ulonglong)param_3 << 3;
    do {
      FUN_14335c250(param_1,&lStack_58,param_4);
      if (cStack_48 == '\x01') {
        lVar2 = (ulonglong)(uStack_4c >> 4) * 0x90 + lStack_58;
        *(undefined4 *)(lVar2 + 0x10 + (ulonglong)(uStack_4c & 0xf) * 8) = *param_4;
        *(undefined4 *)(lVar2 + 0x14 + (ulonglong)(uStack_4c & 0xf) * 8) = param_4[1];
      }
      param_4 = param_4 + 2;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  plVar1 = (longlong *)
           FUN_1400ff260(*(undefined8 *)(param_2 + 0x48),*(undefined2 *)(param_2 + 0x50),
                         _DAT_149e526b4);
  if ((plVar1 != (longlong *)0x0) && ((short)plVar1[1] != 0)) {
    lVar6 = 0;
    uVar4 = 0;
    do {
      lVar2 = *plVar1;
      FUN_14335c250(param_1,&lStack_58,lVar2 + lVar6);
      if (cStack_48 == '\x01') {
        lVar3 = (ulonglong)(uStack_4c >> 4) * 0x90 + lStack_58;
        *(undefined4 *)(lVar3 + 0x10 + (ulonglong)(uStack_4c & 0xf) * 8) =
             *(undefined4 *)(lVar2 + lVar6);
        *(undefined4 *)(lVar3 + 0x14 + (ulonglong)(uStack_4c & 0xf) * 8) =
             *(undefined4 *)(lVar2 + 4 + lVar6);
      }
      uVar4 = uVar4 + 1;
      lVar6 = lVar6 + 0xc;
    } while (uVar4 < *(ushort *)(plVar1 + 1));
  }
  if (*(short *)(param_2 + 0x28 + (ulonglong)param_5 * 0x10) != 0) {
    uVar5 = (ulonglong)param_5 * 0x10 | 0x20;
    lVar6 = 0;
    uVar4 = 0;
    do {
      lVar2 = *(longlong *)(param_2 + uVar5);
      FUN_14335c250(param_1,&lStack_58,lVar2 + lVar6);
      if (cStack_48 == '\x01') {
        lVar3 = (ulonglong)(uStack_4c >> 4) * 0x90 + lStack_58;
        *(undefined4 *)(lVar3 + 0x10 + (ulonglong)(uStack_4c & 0xf) * 8) =
             *(undefined4 *)(lVar2 + lVar6);
        *(undefined4 *)(lVar3 + 0x14 + (ulonglong)(uStack_4c & 0xf) * 8) =
             *(undefined4 *)(lVar2 + 4 + lVar6);
      }
      uVar4 = uVar4 + 1;
      lVar6 = lVar6 + 0xc;
    } while (uVar4 < *(ushort *)(param_2 + 8 + uVar5));
  }
  return;
}

