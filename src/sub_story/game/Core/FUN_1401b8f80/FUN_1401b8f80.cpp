// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b8f80  size: 156 bytes
// Name:    FUN_1401b8f80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144370000
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1401b8f80(longlong param_1,undefined8 param_2,ulonglong *param_3,longlong *param_4)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uStack_48;
  ulonglong uStack_40;
  undefined4 auStack_30 [2];
  undefined8 uStack_28;
  
  if ((int)param_2 != 0) {
    auStack_30[0] = 0;
    uStack_28 = 0;
    FUN_144370000(auStack_30,param_2,*(undefined8 *)(param_1 + 8),0);
    uVar1 = auStack_30[0];
    cVar2 = func_0x00014505bd10(auStack_30[0],uStack_28);
    if (cVar2 != '\0') {
      func_0x000140019da0(uVar1,&uStack_48);
      uVar4 = uStack_48 & 0xffffffff;
      if ((int)uStack_48 != 0) {
        uStack_48 = *param_3;
        uStack_40 = param_3[1];
        if (*param_4 != 0) {
          uVar3 = (*(code *)param_4[1])();
          return uVar3;
        }
        uVar3 = (*(code *)param_4[1])(uVar4,&uStack_48);
        return uVar3;
      }
    }
  }
  return 0;
}

