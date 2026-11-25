// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14056eb30  size: 307 bytes
// Name:    FUN_14056eb30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14128bae0, FUN_14128bb70, FUN_140643c90, FUN_1419f4000
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_14056eb30(longlong param_1,undefined1 *param_2,char *param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  char *pcVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lStack_40;
  
  if (0 < *(int *)(param_1 + 0xc04)) {
    uVar6 = 0;
    lVar7 = param_1;
    do {
      if ((*(char *)(param_1 + 0xc0c) != '\x01') || (uVar6 != *(uint *)(param_1 + 0xc08))) {
        cVar2 = FUN_140643c90(param_3);
        pcVar5 = param_3;
        if (cVar2 == '\0') {
          lStack_40 = lVar7;
          func_0x000144dac8f0(param_2,&lStack_40,0x100);
          if (*param_3 == '$') {
            pcVar5 = param_3 + 2;
          }
          else if ((longlong)*(int *)(param_1 + 0xc00) != 0) {
            lVar1 = (longlong)*(int *)(param_1 + 0xc00) * 0x100 + 0x300 + param_1;
            cVar2 = FUN_140643c90(lVar1);
            if (cVar2 == '\0') {
              FUN_1419f4000(param_2,lVar1,0x100);
            }
            else {
              func_0x000145352510();
            }
          }
        }
        else {
          *param_2 = 0;
        }
        FUN_14128bb70(param_2,0x100,pcVar5,param_4);
        FUN_14128bae0(param_2);
        plVar4 = (longlong *)func_0x000140968480(param_2,1);
        if ((plVar4 != (longlong *)0x0) &&
           (iVar3 = (**(code **)(*plVar4 + 0x168))(plVar4,param_2), iVar3 != -1)) {
          return 1;
        }
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x100;
    } while ((longlong)uVar6 < (longlong)*(int *)(param_1 + 0xc04));
  }
  return 0;
}

