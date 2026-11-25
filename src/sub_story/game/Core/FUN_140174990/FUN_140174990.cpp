// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140174990  size: 548 bytes
// Name:    FUN_140174990
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145077d30, FUN_145077d60, FUN_145077d90, FUN_140008c80, FUN_14039a010, FUN_14039a2e0, FUN_140174bd0, FUN_140acbfc0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_140174990(int *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  char cStack_95;
  int iStack_94;
  undefined8 uStack_90;
  int iStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  longlong lStack_70;
  undefined4 uStack_68;
  undefined1 auStack_60 [32];
  
  lVar4 = *(longlong *)(param_1 + 4) + 0x38;
  FUN_145077d30(lVar4,&uStack_7c);
  FUN_145077d60(lVar4,&uStack_80);
  FUN_145077d90(&iStack_84,uStack_7c,uStack_80);
  if (iStack_84 == -1) {
    uVar6 = 0;
  }
  else {
    FUN_14039a010(auStack_60,param_2,param_3);
    FUN_14039a2e0(&cStack_95,lVar4,auStack_60);
    uVar6 = CONCAT71((int7)((ulonglong)&cStack_95 >> 8),cStack_95);
    if (cStack_95 == '\x01') {
      FUN_140acbfc0(lVar4,param_1[6]);
      FUN_140008c80(lVar4,&uStack_78);
      lVar4 = *(longlong *)(param_1 + 2);
      uVar5 = *param_1 << 4;
      if (uVar5 == 0) {
        uVar1 = 0;
      }
      else {
        uVar8 = 0;
        do {
          uVar1 = uVar8;
          if (!SBORROW1('\0',*(char *)((ulonglong)(uVar8 & 0xf) +
                                      (ulonglong)(uVar8 >> 4) * 0x50 + lVar4))) break;
          uVar8 = uVar8 + 1;
          uVar1 = uVar5;
        } while (uVar5 != uVar8);
      }
      uVar2 = (ulonglong)(uint)(*param_1 << 4);
      lVar3 = (ulonglong)(uVar1 >> 4) * 0x50;
      if (lVar3 + (ulonglong)(uVar1 & 0xf) * 4 != uVar2 * 5) {
        lVar3 = lVar3 + 0x10 + (ulonglong)(uVar1 & 0xf) * 4;
        uStack_90 = uStack_78;
        do {
          iStack_94 = *(int *)(lVar4 + lVar3);
          uVar8 = uVar1;
          if (lStack_70 == 0) {
            lStack_70 = func_0x000140174bc0(uStack_90,uStack_68);
            lStack_70 = lStack_70 + 0x10;
          }
          else {
            lVar3 = 0;
            if (*(longlong *)(lStack_70 + 8) != 1) {
              lVar3 = *(longlong *)(lStack_70 + 8) + 8 + lStack_70;
            }
            if ((*(uint *)(lStack_70 + 4) & 0x7fffffff) != 0) {
              lVar7 = 0;
              do {
                if (*(int *)(lVar3 + lVar7) == iStack_94) goto joined_r0x000140174b17;
                lVar7 = lVar7 + 4;
              } while (((ulonglong)*(uint *)(lStack_70 + 4) & 0x7fffffff) * 4 != lVar7);
            }
          }
          FUN_140174bd0(lStack_70,&iStack_94);
joined_r0x000140174b17:
          while (uVar1 = uVar5, uVar8 != uVar5) {
            while (uVar1 = uVar8 + 1, uVar8 = uVar1, uVar1 < uVar5) {
              if (!SBORROW1('\0',*(char *)((ulonglong)(uVar1 & 0xf) +
                                          (ulonglong)(uVar1 >> 4) * 0x50 + lVar4)))
              goto LAB_140174b46;
            }
          }
LAB_140174b46:
          lVar3 = (ulonglong)(uVar1 >> 4) * 0x50 + 0x10 + (ulonglong)(uVar1 & 0xf) * 4;
        } while (lVar3 != uVar2 * 5 + 0x10);
      }
    }
  }
  return uVar6 & 0xffffffff;
}

