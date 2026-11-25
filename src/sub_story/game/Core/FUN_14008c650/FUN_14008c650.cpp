// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14008c650  size: 333 bytes
// Name:    FUN_14008c650
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14008ce40, FUN_14008db40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14008c650(undefined8 *param_1,uint param_2,uint param_3)

{
  undefined2 uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  
  func_0x00014008c7a0(param_1,&uStack_48,param_2,0);
  func_0x00014008c7a0(param_1,&uStack_4c,param_3,1);
  uStack_44 = param_3;
  if ((((short)param_2 != (short)param_3) || (param_2 >> 0x10 != param_3 >> 0x10)) ||
     ((((short)uStack_48 == -1 ||
       ((uStack_4c._2_2_ == -1 || (cVar3 = FUN_14008db40(*param_1,param_1[2]), cVar3 == '\0')))) &&
      ((uStack_48._2_2_ == -1 ||
       (((short)uStack_4c == -1 || (cVar3 = FUN_14008db40(*param_1,param_1[2]), cVar3 == '\0')))))))
     ) {
    uVar1 = *(undefined2 *)((longlong)param_1 + 0xac);
    FUN_14008ce40(uStack_48,0,uVar1,param_1 + 0x17);
    FUN_14008ce40(uStack_4c,1,uVar1,param_1 + 0x17);
    lVar2 = param_1[0x16];
    lVar4 = (ulonglong)*(uint *)((longlong)param_1 + 0xac) * 0x10;
    *(uint *)((longlong)param_1 + 0xac) = *(uint *)((longlong)param_1 + 0xac) + 1;
    *(short *)(lVar2 + lVar4) = (short)param_2;
    *(short *)(lVar2 + 2 + lVar4) = (short)uStack_44;
    *(short *)(lVar2 + 4 + lVar4) = (short)(param_2 >> 0x10);
    *(short *)(lVar2 + 6 + lVar4) = (short)(param_3 >> 0x10);
    *(undefined4 *)(lVar2 + 8 + lVar4) = uStack_48;
    *(undefined4 *)(lVar2 + 0xc + lVar4) = uStack_4c;
  }
  return;
}

