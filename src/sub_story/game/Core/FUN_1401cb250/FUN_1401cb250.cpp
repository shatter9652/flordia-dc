// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401cb250  size: 498 bytes
// Name:    FUN_1401cb250
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401cb460, FUN_144dd33e0, FUN_144dd3330, FUN_144dd3550
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


uint * FUN_1401cb250(longlong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  uint *puVar8;
  ulonglong uVar9;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [24];
  
  puVar8 = *(uint **)(param_1 + 0x368);
  if (puVar8 != (uint *)0x0) {
    *(undefined8 *)(param_1 + 0x368) = 0;
    return puVar8;
  }
  lVar4 = func_0x000145103000(param_1);
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)(lVar4 + 0x2f0);
  }
  if (*(char *)(param_1 + 0x651) == '\x01') {
    lVar4 = func_0x000144ddb100(2);
    uVar5 = 0x949f37d0;
  }
  else {
    cVar3 = func_0x0001401cb450(*(undefined1 *)(param_1 + 0x64e),*(undefined1 *)(param_1 + 0x652));
    if (cVar3 == '\0') {
      FUN_144dd3330(*(undefined4 *)(*(longlong *)(param_1 + 0x360) + 0x18),&uStack_4c);
      uVar5 = func_0x000144ddb100(2);
      lVar6 = FUN_144dd3550(uVar5,uStack_4c,0x1e);
      if (lVar6 != 0) {
        if (*(char *)(lVar6 + 0xc) != '\0') {
          uVar9 = 0;
          do {
            FUN_144dd3330(*(undefined4 *)(lVar6 + 0x10 + uVar9 * 8),&uStack_58);
            uVar2 = uStack_58;
            uVar5 = func_0x000144ddb100(2);
            lVar7 = FUN_144dd3550(uVar5,uVar2,0x1c);
            if ((lVar7 != 0) && (lVar7 == lVar4)) {
              FUN_144dd3330(*(undefined4 *)(lVar6 + 0x14 + uVar9 * 8),&uStack_50);
              uVar5 = func_0x000144ddb100(2);
              lVar4 = FUN_144dd3550(uVar5,uStack_50,0x1f);
              if (lVar4 != 0) goto LAB_1401cb3a3;
              break;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < *(byte *)(lVar6 + 0xc));
        }
        FUN_144dd3330(*(undefined4 *)(lVar6 + 8),&uStack_54);
        uVar5 = func_0x000144ddb100(2);
        lVar4 = FUN_144dd3550(uVar5,uStack_54,0x1f);
        if (lVar4 == 0) {
          return (uint *)0x0;
        }
LAB_1401cb3a3:
        auStack_48._0_12_ = ZEXT812(0);
        auStack_48._12_4_ = 0;
        FUN_1401cb460(param_1,lVar4,auStack_48);
        uVar5 = auStack_48._0_8_;
        cVar3 = FUN_144dd33e0(auStack_48._0_8_,auStack_48._8_8_,0x1c,2);
        if (cVar3 == '\0') {
          return (uint *)0x0;
        }
        return (uint *)uVar5;
      }
    }
    lVar4 = func_0x000144ddb100(2);
    uVar5 = 0x2be42a81;
  }
  auStack_48._8_8_ = &UNK_144e7e105;
  puVar8 = (uint *)FUN_144e7e150(lVar4,uVar5,0x1c,0);
  if (puVar8 != (uint *)0x0) {
    uVar1 = *puVar8 & 0xff;
    if (*(char *)(lVar4 + 0xd4) != '\0') {
      uVar1 = *puVar8;
    }
    if (*(code **)(lVar4 + 0x38) == FUN_144dd3480) {
      auStack_48._8_8_ = &UNK_144e7e133;
      cVar3 = FUN_144dd3480(uVar1,0x1c);
    }
    else {
      auStack_48._8_8_ = &UNK_144e7e14a;
      cVar3 = (**(code **)(lVar4 + 0x38))(uVar1,0x1c);
    }
    if (cVar3 != '\0') {
      return puVar8;
    }
  }
  return (uint *)0x0;
}

