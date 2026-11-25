// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140198480  size: 125 bytes
// Name:    FUN_140198480
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140358990, FUN_1402c59f0, FUN_140347fd0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_140198480(longlong param_1,undefined4 param_2,float param_3,undefined4 param_4)

{
  char cVar1;
  longlong *plVar2;
  ulonglong uVar3;
  float fVar4;
  undefined8 auStack_30 [3];
  
  FUN_140347fd0(auStack_30,param_1 + 0x30);
  plVar2 = (longlong *)
           FUN_140358990(*(undefined4 *)(param_1 + 4),*(undefined8 *)(param_1 + 8),param_2,param_4);
  if (plVar2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*plVar2 + 0x58))(plVar2);
    if (cVar1 == '\0') {
      fVar4 = (float)(**(code **)(*plVar2 + 0x38))(plVar2);
      uVar3 = CONCAT71((int7)((ulonglong)plVar2 >> 8),param_3 < fVar4);
      goto LAB_1401984e3;
    }
  }
  uVar3 = 0;
LAB_1401984e3:
  FUN_1402c59f0(auStack_30[0]);
  return uVar3 & 0xffffffff;
}

