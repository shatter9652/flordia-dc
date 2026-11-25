// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400bcbf0  size: 68 bytes
// Name:    FUN_1400bcbf0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400bcbf0(longlong *param_1)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  cVar2 = (**(code **)(*param_1 + 0x28))();
  if (cVar2 == '\0') {
    if ((ulonglong)*(uint *)((longlong)param_1 + 0x2c) != 0) {
      lVar3 = (ulonglong)*(uint *)((longlong)param_1 + 0x2c) * 8 + param_1[6];
      lVar4 = lVar3;
      do {
        uVar1 = *(undefined8 *)(lVar4 + -8);
        lVar4 = lVar4 + -8;
        func_0x000140072350(param_1,lVar3);
        FUN_140072380(param_1,uVar1);
        lVar3 = lVar3 + -8;
      } while (lVar4 != param_1[6]);
    }
    if ((ulonglong)*(uint *)((longlong)param_1 + 0x3c) != 0) {
      lVar3 = (ulonglong)*(uint *)((longlong)param_1 + 0x3c) * 8 + param_1[8];
      lVar4 = lVar3;
      do {
        uVar1 = *(undefined8 *)(lVar4 + -8);
        lVar4 = lVar4 + -8;
        func_0x000140071eb0(param_1,lVar3);
        FUN_140072380(param_1,uVar1);
        lVar3 = lVar3 + -8;
      } while (lVar4 != param_1[8]);
    }
    return;
  }
  if (param_1[3] == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001400bcc31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x40))(param_1,_DAT_14abbef40);
    return;
  }
  return;
}

