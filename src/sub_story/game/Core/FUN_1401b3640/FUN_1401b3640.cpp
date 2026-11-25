// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b3640  size: 47 bytes
// Name:    FUN_1401b3640
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401b3720
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_1401b3640(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  ulonglong uVar3;
  undefined4 uStack_78;
  uint uStack_74;
  undefined1 auStack_70 [20];
  undefined4 uStack_5c;
  undefined1 *puStack_58;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  
  uStack_40 = 0x1401b3651;
  cVar2 = FUN_1401b3720();
  if (cVar2 != '\0') {
    uVar3 = 1;
    if (*(int *)(param_1 + 0x44) - 1U < 2) {
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      uStack_74 = 0;
      uStack_78 = 0;
      FUN_140458a60(uVar1,&uStack_74);
      FUN_140458a90(uVar1,&uStack_78);
      func_0x000140458ac0(auStack_70,uStack_74,uStack_78,2);
      uVar3 = func_0x000140458ae0(auStack_70,*(int *)(param_1 + 0x44) == 2,*param_2,param_2[1]);
      uStack_5c = 0;
      if ((auStack_50 != puStack_58) && (puStack_58 != (undefined1 *)0x0)) {
        uVar3 = uVar3 & 0xffffffff;
        func_0x000144d9c130();
      }
    }
    return uVar3;
  }
  return 0;
}

