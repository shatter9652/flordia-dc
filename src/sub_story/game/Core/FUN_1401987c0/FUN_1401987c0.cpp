// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401987c0  size: 390 bytes
// Name:    FUN_1401987c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e66270, FUN_145335670, FUN_144dd3550, FUN_140198bb0, FUN_1401989b0, FUN_140198950, FUN_1402538c0, FUN_144dd3330
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined4 FUN_1401987c0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  longlong lStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  char cStack_a9;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_80 [8];
  longlong lStack_78;
  undefined1 auStack_70 [16];
  longlong lStack_60;
  uint uStack_58;
  
  lVar1 = param_2[6];
  lStack_78 = 0;
  FUN_1402538c0(param_1,0,&lStack_78,auStack_80);
  if (lStack_78 != 0) {
    lStack_60 = 0;
    uStack_58 = 0;
    FUN_140198950(lStack_78,auStack_70);
    lVar2 = lStack_60;
    uVar8 = (ulonglong)uStack_58;
    if (uVar8 != 0) {
      lVar6 = 0;
      do {
        uVar3 = *(undefined4 *)(lVar2 + lVar6);
        uVar4 = func_0x000144ddb100(0);
        FUN_144dd3330(uVar3,&uStack_c0);
        lVar5 = FUN_144dd3550(uVar4,uStack_c0,0x147);
        if (lVar5 != 0) {
          FUN_140198bb0(&uStack_c0,lVar5 + 0xd,*(undefined1 *)(lVar5 + 0xc));
          if ((cStack_a9 != -0x80) &&
             ((undefined4 *)CONCAT44(uStack_bc,uStack_c0) != (undefined4 *)0x0)) {
            puVar7 = (undefined4 *)CONCAT44(uStack_bc,uStack_c0);
            if (cStack_a9 < '\0') {
              puVar7 = &uStack_c0;
            }
            func_0x00014114d220(&uStack_98,puVar7);
            uStack_a8 = uStack_98;
            uStack_a0 = uStack_90;
            FUN_145335670(&uStack_a8,&lStack_c8);
            if (*param_2 == lStack_c8) {
              uVar3 = FUN_144e66270(*(undefined4 *)(lVar5 + 4));
              FUN_1401989b0(&uStack_c0);
              return uVar3;
            }
          }
          FUN_1401989b0(&uStack_c0);
        }
        lVar6 = lVar6 + 4;
      } while (uVar8 << 2 != lVar6);
    }
  }
  return (int)lVar1;
}

