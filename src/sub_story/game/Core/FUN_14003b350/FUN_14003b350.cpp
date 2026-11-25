// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14003b350  size: 332 bytes
// Name:    FUN_14003b350
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14003b4a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14003b350(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  FUN_14003b4a0();
  uVar1 = *(uint *)(param_1 + 0xa8c);
  uVar4 = (*(uint *)(param_2 + 0xb0) & 0x4000) << 0xb;
  *(uint *)(param_1 + 0xa8c) = uVar1 & 0xfdffffff | uVar4;
  if ((*(byte *)(param_2 + 0x100) & 0x40) != 0) {
    lVar5 = func_0x000144dd11e0(*(undefined4 *)(param_2 + 0x9c));
    if (lVar5 != 0) {
      lVar5 = func_0x000144de7c70(*(undefined4 *)(lVar5 + 0x27c));
      if (lVar5 != 0) {
        auVar7[1] = DAT_1461593f9;
        auVar7[0] = DAT_1461593f9;
        auVar7[2] = DAT_1461593f9;
        auVar7[3] = DAT_1461593f9;
        auVar7[4] = DAT_1461593f9;
        auVar7[5] = DAT_1461593f9;
        auVar7[6] = DAT_1461593f9;
        auVar7[7] = DAT_1461593f9;
        auVar7[8] = DAT_1461593f9;
        auVar7[9] = DAT_1461593f9;
        auVar7[10] = DAT_1461593f9;
        auVar7[0xb] = DAT_1461593f9;
        auVar7[0xc] = DAT_1461593f9;
        auVar7[0xd] = DAT_1461593f9;
        auVar7[0xe] = DAT_1461593f9;
        auVar7[0xf] = DAT_1461593f9;
        auVar8[1] = DAT_1461593fa;
        auVar8[0] = DAT_1461593fa;
        auVar8[2] = DAT_1461593fa;
        auVar8[3] = DAT_1461593fa;
        auVar8[4] = DAT_1461593fa;
        auVar8[5] = DAT_1461593fa;
        auVar8[6] = DAT_1461593fa;
        auVar8[7] = DAT_1461593fa;
        auVar8[8] = DAT_1461593fa;
        auVar8[9] = DAT_1461593fa;
        auVar8[10] = DAT_1461593fa;
        auVar8[0xb] = DAT_1461593fa;
        auVar8[0xc] = DAT_1461593fa;
        auVar8[0xd] = DAT_1461593fa;
        auVar8[0xe] = DAT_1461593fa;
        auVar8[0xf] = DAT_1461593fa;
        auVar2 = vpmovsxwq_avx(ZEXT416(_DAT_14615b4ac));
        auVar3 = vpor_avx(*(undefined1 (*) [16])(param_1 + 0x339),auVar7);
        auVar7 = vpand_avx(*(undefined1 (*) [16])(param_1 + 0x339),auVar8);
        auVar7 = vpblendvb_avx(auVar3,auVar7,auVar2);
        *(undefined1 (*) [16])(param_1 + 0x339) = auVar7;
        *(uint *)(param_1 + 0x349) = *(uint *)(param_1 + 0x349) & 0xfafafafa;
        *(byte *)(param_1 + 0x34d) = *(byte *)(param_1 + 0x34d) & 0xfa;
        *(byte *)(param_1 + 0x34e) = *(byte *)(param_1 + 0x34e) & 0xfa;
        *(byte *)(param_1 + 0x34f) = *(byte *)(param_1 + 0x34f) & 0xfa;
        *(undefined8 *)(param_1 + 0x350) = 0;
        *(undefined8 *)(param_1 + 0x358) = 0;
        *(undefined8 *)(param_1 + 0x360) = 0;
        *(undefined8 *)(param_1 + 0x368) = 0;
        *(undefined8 *)(param_1 + 0x35c) = 0;
        *(undefined8 *)(param_1 + 0x364) = 0;
        *(undefined8 *)(param_1 + 0x36c) = 0;
        *(undefined8 *)(param_1 + 0x374) = 0;
      }
    }
  }
  *(byte *)(param_1 + 0x123) = *(byte *)(param_1 + 0x123) & 0xf7;
  if ((*(byte *)(param_1 + 0x126) & 4) != 0) {
    lVar5 = func_0x000144f56f90(param_1);
    if (lVar5 != 0) {
      *(undefined4 *)(param_1 + 0xa84) = *(undefined4 *)(lVar5 + 0x680);
      uVar6 = (*(byte *)(lVar5 + 0x8b0) & 1) << 0x18;
      *(uint *)(param_1 + 0xa8c) = uVar1 & 0xfcffffff | uVar4 | uVar6;
      *(undefined4 *)(param_1 + 0xa88) = *(undefined4 *)(lVar5 + 0x684);
      *(uint *)(param_1 + 0xa8c) =
           uVar1 & 0xfc000000 | uVar4 | uVar6 | *(uint *)(lVar5 + 0x8ac) & 0xffffff;
    }
  }
  return;
}

