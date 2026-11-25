// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140196ad0  size: 372 bytes
// Name:    FUN_140196ad0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1455db8cc, FUN_1402c59f0, FUN_1455db934, FUN_141a9b770, FUN_1455dcc0c, FUN_141d561c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140196ad0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong unaff_GS_OFFSET;
  undefined8 uStack_20;
  char cStack_18;
  
  if (param_1 == 0) {
    uVar7 = 0;
  }
  else {
    if ((*(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 4) < _DAT_14764b560) && (FUN_1455db8cc(&DAT_14764b560), _DAT_14764b560 == -1)) {
      FUN_141d561c0(&DAT_14764b528,0x7aac1015);
      iVar2 = _DAT_14764b534;
      _DAT_14764b528 = &UNK_146719cd0;
      _DAT_14764b558 = 1;
      iVar4 = _DAT_14764b530;
      if (_DAT_14764b548 != 0 || _DAT_14764b538 != 0) {
        iVar4 = (*_DAT_14764b550)(&DAT_14764b538);
      }
      uVar3 = func_0x0001409d3e70(iVar4 + iVar2,1);
      _DAT_14764b558 = CONCAT11(DAT_14764b558_1,uVar3);
      FUN_1455dcc0c(&UNK_1425a2380);
      FUN_1455db934(&DAT_14764b560);
    }
    FUN_141a9b770(&uStack_20,0x14764b500,DAT_14764b558);
    lVar1 = (ulonglong)_DAT_149e675f4 * 0x20 + 0x149e675f8;
    if ((ulonglong)_DAT_149e675f4 == 0) {
      lVar6 = 0x149e675f8;
    }
    else {
      lVar5 = 0x149e675f8;
      do {
        if (*(ushort *)(lVar5 + 0x10) != 0) {
          lVar8 = 0;
          do {
            lVar6 = lVar5;
            if (*(int *)(*(longlong *)(lVar5 + 8) + lVar8) == *(int *)(param_1 + 0xa8))
            goto LAB_140196b89;
            lVar8 = lVar8 + 4;
          } while ((ulonglong)*(ushort *)(lVar5 + 0x10) * 4 != lVar8);
        }
        lVar5 = lVar5 + 0x20;
        lVar6 = lVar1;
      } while (lVar5 != lVar1);
    }
LAB_140196b89:
    uVar7 = CONCAT71((int7)((ulonglong)param_1 >> 8),lVar6 != lVar1);
    if (cStack_18 == '\x01') {
      FUN_1402c59f0(uStack_20);
    }
  }
  return uVar7 & 0xffffffff;
}

