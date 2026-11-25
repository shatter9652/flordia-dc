// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f1480  size: 491 bytes
// Name:    FUN_1400f1480
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1448aaa10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400f1480(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 uVar4;
  longlong lVar5;
  byte bVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 uVar9;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  lVar8 = *(longlong *)(param_1 + 8);
  lVar1 = (ulonglong)((uint)DAT_14abc3ad8 * 2) * 3;
  bVar6 = *(byte *)(lVar8 + 0x18 + lVar1);
  if (((((bVar6 != 0x1e) || (bVar6 = *(byte *)(lVar8 + 0x19 + lVar1), bVar6 != 0x1e)) ||
       (bVar6 = *(byte *)(lVar8 + 0x1a + lVar1), bVar6 != 0x1e)) ||
      (((bVar6 = *(byte *)(lVar8 + 0x1b + lVar1), bVar6 != 0x1e ||
        (bVar6 = *(byte *)(lVar8 + 0x1c + lVar1), bVar6 != 0x1e)) ||
       (bVar6 = *(byte *)(lVar8 + 0x1d + lVar1), bVar6 != 0x1e)))) &&
     (lVar1 = *(longlong *)(lVar8 + 0xa0 + (ulonglong)bVar6 * 8), lVar1 != 0)) {
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    lVar5 = func_0x000144db7870(lVar8);
    lVar1 = *(longlong *)(lVar5 + 0xb0);
    if (lVar1 != 0) {
      uVar7 = (ulonglong)*(byte *)(lVar5 + 0xc0 + (ulonglong)DAT_14a952378);
      if ((uVar7 == 0xff) || (lVar3 = *(longlong *)(lVar5 + 0x10 + uVar7 * 8), lVar3 == 0)) {
        uVar4 = 0;
      }
      else {
        uVar4 = func_0x00014536b2c0(*(undefined8 *)(lVar3 + 0x80));
        lVar8 = *(longlong *)(param_1 + 8);
      }
      uStack_38 = 0;
      uStack_48 = 0;
      uStack_30 = 0;
      uStack_40 = 0;
      lVar3 = (ulonglong)((uint)DAT_14ab83d38 * 2) * 3;
      bVar6 = *(byte *)(lVar8 + 0x18 + lVar3);
      if ((((((bVar6 != 0x1e) || (bVar6 = *(byte *)(lVar8 + 0x19 + lVar3), bVar6 != 0x1e)) ||
            (bVar6 = *(byte *)(lVar8 + 0x1a + lVar3), bVar6 != 0x1e)) ||
           ((bVar6 = *(byte *)(lVar8 + 0x1b + lVar3), bVar6 != 0x1e ||
            (bVar6 = *(byte *)(lVar8 + 0x1c + lVar3), bVar6 != 0x1e)))) ||
          (bVar6 = *(byte *)(lVar8 + 0x1d + lVar3), bVar6 != 0x1e)) &&
         (lVar8 = *(longlong *)(lVar8 + 0xa0 + (ulonglong)bVar6 * 8), lVar8 != 0)) {
        uStack_38 = *(undefined8 *)(lVar8 + 0xe8);
        uStack_30 = *(undefined4 *)(lVar8 + 0xe4);
        uStack_48 = *(undefined8 *)(lVar8 + 0xf8);
        uStack_40 = *(undefined4 *)(lVar8 + 0xf4);
      }
      if (*(longlong *)(param_1 + 0x1b8) == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined1 *)(*(longlong *)(param_1 + 0x1b8) + 9);
      }
      FUN_1448aaa10(uVar2,lVar1,lVar5,&uStack_38,&uStack_48,uVar4,
                    (char)((*(byte *)(param_1 + 0x10b) & 2) >> 1),
                    (char)((*(byte *)(param_1 + 0x10b) & 4) >> 2),*(undefined4 *)(param_1 + 0x1c0),
                    uVar9);
    }
  }
  return;
}

