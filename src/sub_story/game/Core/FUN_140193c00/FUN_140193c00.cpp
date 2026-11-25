// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140193c00  size: 360 bytes
// Name:    FUN_140193c00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1451ee050, FUN_144e62f00, FUN_14540c4c0, FUN_140735f40, FUN_1450f0720
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140193c00(undefined8 param_1,longlong *param_2,ulonglong param_3)

{
  short sVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int aiStack_70 [2];
  ulonglong uStack_68;
  uint auStack_60 [2];
  undefined1 auStack_58 [16];
  longlong lStack_48;
  
  uVar6 = param_3 >> 0x20;
  uVar2 = FUN_144e62f00(*(undefined8 *)(param_2[0x766] + 0x10));
  func_0x000144e43930(uVar2,auStack_60);
  if ((uint)param_3 != auStack_60[0]) {
    FUN_1450f0720(auStack_58,
                  *(undefined8 *)
                   (*(longlong *)(_DAT_14abbf348 + 0x28) +
                   (ulonglong)(((uint)param_3 & 0xffff) << 4)));
    if (lStack_48 != 0) {
      lVar3 = 0;
      if ((*(byte *)(*(longlong *)(**(longlong **)(lStack_48 + 0xa8) + 0x80) + 0x1a) & 0x20) == 0) {
        lVar3 = **(longlong **)(lStack_48 + 0xa8);
      }
      if (lStack_48 != lVar3) {
        uVar4 = param_3;
        lVar5 = lStack_48;
        do {
          uVar2 = FUN_144e62f00(*(undefined8 *)(param_2[0x766] + 0x10));
          func_0x000144e43930(uVar2,aiStack_70);
          param_3 = *(ulonglong *)(lVar5 + 0xb0);
          if ((int)param_3 == aiStack_70[0]) {
            lVar3 = FUN_1451ee050(uVar4 & 0xffffffff | uVar6 << 0x20);
            if ((lVar3 != 0) && (sVar1 = *(short *)(lVar3 + 0x40), sVar1 != -1)) {
              uVar2 = FUN_144e62f00(*(undefined8 *)(param_2[0x766] + 0x10));
              FUN_14540c4c0(uVar2,&uStack_68,(int)sVar1);
              param_3 = uStack_68;
            }
            uVar6 = param_3 >> 0x20;
            break;
          }
          lVar5 = *(longlong *)(lVar5 + 0x88);
          uVar6 = param_3 >> 0x20;
          uVar4 = param_3;
        } while (lVar5 != lVar3);
      }
    }
    FUN_140735f40(auStack_58);
  }
  (**(code **)(*param_2 + 0x38))(param_2,param_1,param_3 & 0xffffffff | uVar6 << 0x20);
  return;
}

