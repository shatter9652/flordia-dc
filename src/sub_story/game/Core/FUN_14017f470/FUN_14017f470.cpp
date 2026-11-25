// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14017f470  size: 249 bytes
// Name:    FUN_14017f470
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400f7d20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14017f470(longlong param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  longlong lVar4;
  uint *puVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) & 0x7f;
  uVar6 = (uint)*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x180);
  if ((uVar6 >> 0x13 & 1) != 0) {
    lVar1 = *(longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x188) +
             (ulonglong)(uint)POPCOUNT(uVar6 & 0x7ffff) * 8);
    if ((lVar1 != 0) && (*(char *)(lVar1 + 0x1d9) == '\x01')) {
      lVar4 = func_0x000144e36e50(*(undefined8 *)(param_1 + 0x98));
      if ((lVar4 != 0) && (*(uint *)(lVar4 + 0x28) != 0)) {
        for (puVar5 = *(uint **)(*(longlong *)(lVar4 + 0x20) +
                                ((ulonglong)*(uint *)(lVar1 + 0x30) %
                                (ulonglong)*(uint *)(lVar4 + 0x28)) * 8); puVar5 != (uint *)0x0;
            puVar5 = *(uint **)(puVar5 + 4)) {
          if (*(uint *)(lVar1 + 0x30) == *puVar5) {
            lVar4 = *(longlong *)(puVar5 + 2);
            func_0x000144f902b0(lVar1 + 0x10,&uStack_48);
            if (lVar4 == 0) goto LAB_14017f509;
            uStack_28 = uStack_48;
            uStack_20 = uStack_40;
            FUN_1400f7d20(lVar4,&uStack_38);
            goto LAB_14017f515;
          }
        }
      }
      func_0x000144f902b0(lVar1 + 0x10,&uStack_48);
LAB_14017f509:
      uStack_38 = uStack_48;
      uStack_30 = uStack_40;
LAB_14017f515:
      auVar7._0_12_ = ZEXT812(0);
      auVar7._12_4_ = 0;
      auVar2._8_8_ = uStack_30;
      auVar2._0_8_ = uStack_38;
      auVar2 = vcmpps_avx(auVar7,auVar2,0);
      uVar3 = vmovmskps_avx(auVar2);
      if ((~(byte)uVar3 & 3) != 0) {
        *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) | 0x80;
      }
    }
  }
  return;
}

