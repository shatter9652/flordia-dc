// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400274e0  size: 232 bytes
// Name:    FUN_1400274e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400275d0, FUN_14505ef20, FUN_140026890
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1400274e0(longlong *param_1,int *param_2,int *param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 auStack_4c [4];
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  if ((*param_3 != -3) && (*param_3 = -1, *param_2 != -1)) {
    (**(code **)(*param_1 + 0x138))(param_1,&uStack_38);
    FUN_14505ef20(&uStack_38,&uStack_48);
    puVar4 = (undefined4 *)FUN_140026890(param_1[4]);
    func_0x0001401a1510(uStack_38,uStack_30,&uStack_50);
    lVar5 = FUN_1400275d0(*puVar4,*(undefined8 *)(puVar4 + 2),*param_2,uStack_50);
    if (lVar5 != 0) {
      func_0x0001401a1510(uStack_48,uStack_40,&uStack_54);
      iVar1 = *param_2;
      lVar5 = FUN_1400275d0(*puVar4,*(undefined8 *)(puVar4 + 2),iVar1,uStack_54);
      if (lVar5 != 0) {
        lVar5 = param_1[6];
        uVar3 = func_0x00014003a5f0((int)param_1[5]);
        cVar2 = func_0x00014003a640(puVar4,auStack_4c,uVar3,(int)lVar5);
        if (cVar2 != '\0') {
          *param_3 = iVar1;
          return 1;
        }
      }
    }
  }
  return 0;
}

