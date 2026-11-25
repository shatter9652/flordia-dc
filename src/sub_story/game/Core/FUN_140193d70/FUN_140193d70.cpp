// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140193d70  size: 349 bytes
// Name:    FUN_140193d70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1402c59f0, FUN_145351650, FUN_1400063f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_140193d70(longlong param_1,ulonglong param_2,char param_3)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  short sVar4;
  int iVar5;
  short *psVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 unaff_RSI;
  undefined6 uVar10;
  ulonglong uVar9;
  longlong lVar11;
  longlong unaff_GS_OFFSET;
  longlong *plStack_48;
  short asStack_40 [4];
  longlong lStack_38;
  short *psStack_30;
  
  uVar10 = (undefined6)((ulonglong)unaff_RSI >> 0x10);
  if ((short)(param_2 >> 0x20) == -2) {
    uVar9 = CONCAT62(uVar10,0xffff);
    if (param_3 != '\0') {
      FUN_145351650(&plStack_48,param_1);
      lVar11 = plStack_48[0x2e];
      if (lVar11 == 0) {
        psVar6 = asStack_40;
      }
      else {
        psVar6 = (short *)(*(longlong *)(lVar11 + 0x158) + 8 +
                          (ulonglong)(uint)(int)asStack_40[0] * 0x18);
      }
      sVar4 = *psVar6;
      iVar5 = func_0x0001454e3ba0(lVar11,(longlong)sVar4 & 0xffffffff);
      lVar11 = (longlong)sVar4 * 0x70 + *(longlong *)(plStack_48[0x35] + 0x20);
      uVar1 = *(ushort *)
               (lVar11 + 0x1a + (longlong)*(int *)(&UNK_1466c7130 + (uint)(iVar5 << 2)) * 2);
      uVar9 = (ulonglong)uVar1;
      uVar2 = *(ushort *)
               (lVar11 + 0x1a + (longlong)*(int *)(&UNK_146161460 + (uint)(iVar5 << 2)) * 2);
      if (uVar1 < uVar2) {
        do {
          sVar4 = (**(code **)(*plStack_48 + 0x408))(plStack_48,uVar9);
          if (sVar4 != -1) goto LAB_140193e4f;
          uVar8 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar8;
        } while (uVar2 != (ushort)uVar8);
        uVar9 = (ulonglong)uVar2;
      }
LAB_140193e4f:
      if ((lStack_38 != 0) && (*psStack_30 = *psStack_30 + -1, *psStack_30 == 0)) {
        lVar11 = *(longlong *)(lStack_38 + 0x18);
        if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) == '\x01') {
          lVar7 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1438);
        }
        else {
          lVar3 = **(longlong **)(unaff_GS_OFFSET + 0x58);
          *(undefined1 *)(lVar3 + 0x1440) = 1;
          lVar7 = FUN_1400063f0();
          *(longlong *)(lVar3 + 0x1438) = lVar7;
        }
        if (lVar7 != lVar11) {
          FUN_1402c59f0(lStack_38);
        }
      }
    }
  }
  else if ((int)param_2 == 0) {
    uVar9 = CONCAT62(uVar10,0xffff);
  }
  else {
    uVar9 = 0xffff;
    if (*(int *)(param_1 + 0x10) == (int)param_2) {
      uVar9 = param_2 >> 0x20;
    }
  }
  return uVar9 & 0xffffffff;
}

