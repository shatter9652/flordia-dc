// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140031e30  size: 684 bytes
// Name:    FUN_140031e30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1455db934, FUN_1455db8cc, FUN_140004b40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_140031e30(int param_1,char param_2,ulonglong param_3,ulonglong param_4,uint param_5)

{
  ulonglong *puVar1;
  code *pcVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong unaff_GS_OFFSET;
  bool bVar9;
  ulonglong uStack_50;
  ulonglong uStack_48;
  
  uVar8 = *(ulonglong *)(&UNK_1462085c0 + (param_3 & 0xffffffff) * 8);
  uVar7 = param_4;
  uVar4 = uVar8;
  uStack_48 = uVar8;
  uStack_50 = param_4;
  if (uVar8 < param_4) {
    func_0x0001401f4510(&uStack_50,&uStack_48);
    uVar7 = uStack_50;
    uVar4 = uStack_48;
  }
  while (uVar5 = uVar7, uVar5 != 0) {
    uVar7 = uVar4 % uVar5;
    uVar4 = uVar5;
  }
  uVar7 = (ulonglong)param_5;
  uVar4 = (uVar8 * param_4) / uVar4;
  lVar6 = ((ulonglong)*(uint *)(uVar7 * 4 + 0x1477ae2a0) + *(longlong *)(uVar7 * 8 + 0x1477ae310)) -
          *(longlong *)(uVar7 * 0x18 + 0x1477ae1d0);
  uVar8 = *(ulonglong *)(uVar7 * 8 + 0x1477ae340);
  if (param_2 == '\0') {
    do {
      uVar3 = func_0x0001455b0890(uVar8 & 0xffffffff,lVar6,uVar4);
      if ((int)(uVar8 >> 0x20) < (int)(uVar3 + param_1)) {
        if ((*(int *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 4) <
             _DAT_1477ae4c8) && (FUN_1455db8cc(&DAT_1477ae4c8), _DAT_1477ae4c8 == -1)) {
          _DAT_1477ae4b0 = 0x7f;
          _DAT_1477ae4a8 = 0xffffffff00000000;
          _DAT_1477ae4b8 = 0;
          _DAT_1477ae4c4 = 1000;
          FUN_1455db934(&DAT_1477ae4c8);
        }
        FUN_140004b40(&DAT_1477ae4a8);
        pcVar2 = (code *)swi(3);
        lVar6 = (*pcVar2)();
        return lVar6;
      }
      puVar1 = (ulonglong *)(uVar7 * 8 + 0x1477ae340);
      LOCK();
      uVar5 = *puVar1;
      if (uVar8 == uVar5) {
        *puVar1 = (longlong)(int)(uVar3 + param_1) | uVar8 & 0xffffffff00000000;
        uVar5 = uVar8;
      }
      UNLOCK();
      bVar9 = uVar8 != uVar5;
      uVar8 = uVar5;
    } while (bVar9);
  }
  else {
    do {
      uVar3 = func_0x0001455b0c00((int)(uVar8 >> 0x20) - param_1 & 0xffffff80,lVar6,uVar4);
      if ((int)uVar3 < (int)uVar8) {
        if ((*(int *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 4) <
             _DAT_1477ae4c8) && (FUN_1455db8cc(&DAT_1477ae4c8), _DAT_1477ae4c8 == -1)) {
          _DAT_1477ae4b0 = 0x7f;
          _DAT_1477ae4a8 = 0xffffffff00000000;
          _DAT_1477ae4b8 = 0;
          _DAT_1477ae4c4 = 1000;
          FUN_1455db934(&DAT_1477ae4c8);
        }
        FUN_140004b40(&DAT_1477ae4a8);
        pcVar2 = (code *)swi(3);
        lVar6 = (*pcVar2)();
        return lVar6;
      }
      puVar1 = (ulonglong *)(uVar7 * 8 + 0x1477ae340);
      LOCK();
      uVar5 = *puVar1;
      if (uVar8 == uVar5) {
        *puVar1 = (longlong)(int)uVar8 | (ulonglong)uVar3 << 0x20;
        uVar5 = uVar8;
      }
      UNLOCK();
      bVar9 = uVar8 != uVar5;
      uVar8 = uVar5;
    } while (bVar9);
  }
  return (ulonglong)uVar3 + *(longlong *)(uVar7 * 8 + 0x1477ae310);
}

