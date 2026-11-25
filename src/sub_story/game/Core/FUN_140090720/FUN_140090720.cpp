// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140090720  size: 264 bytes
// Name:    FUN_140090720
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ecc3e0, FUN_144e3f530, FUN_144f180a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x000140090803: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000140090808) */
/* WARNING: Removing unreachable block (ram,0x000144e2aab8) */

void FUN_140090720(longlong param_1,longlong param_2)

{
  short *psVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uStack_58;
  undefined8 uStack_50;
  longlong lStack_30;
  undefined4 uStack_20;
  
  if ((*(longlong *)(param_1 + 0x58) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x58) + 8) != 0)) {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    uVar4 = func_0x000144e29fa0(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x38));
    FUN_144e3f530(&uStack_58,uVar4,uVar2);
    if (lStack_30 != *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x28)) {
      auVar6._0_12_ = ZEXT812(0);
      auVar6._12_4_ = 0;
      FUN_144ecc3e0(*(undefined8 *)
                     (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x38) + 0x98) +
                     0xa8),param_1 + 0x50,uStack_50,
                    *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 8),auVar6);
      lVar5 = *(longlong *)(param_1 + 0x50);
      if (lVar5 != 0) {
        lVar5 = lVar5 + 0x20;
      }
      auVar7._9_7_ = auVar6._9_7_;
      auVar7._0_8_ = auVar6._0_8_;
      auVar7[8] = 0;
      auVar3[0xf] = 0;
      auVar3._0_15_ = auVar7._1_15_;
      FUN_144f180a0(uStack_58,**(undefined8 **)(param_1 + 0x58),lVar5,uStack_20,auVar3 << 8);
      func_0x000144e3f340(&uStack_58);
      return;
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x50);
  if (lVar5 != 0) {
    if (lVar5 != 0) {
      LOCK();
      psVar1 = (short *)(*(longlong *)(lVar5 + 8) + 8);
      *psVar1 = *psVar1 + -1;
      UNLOCK();
    }
    *(longlong *)(param_1 + 0x50) = 0;
  }
  return;
}

