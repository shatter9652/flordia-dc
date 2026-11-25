// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1459feb00  size: 268 bytes
// Name:    fiDeviceLocal::GetInstance
// Subsystem: core
// Class:   fiDeviceLocal
//
// Evidence:
//   GTAVSRC: fiDeviceLocal::GetInstance  (rage/base/src/parsercore/utils.cpp)
//   literal: memory:$%p,%d
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140643cd0, FUN_1412da520, FUN_140048c90, FUN_140048b50, FUN_1451d2260
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/fiDeviceLocal.h"


ulonglong fiDeviceLocal__GetInstance
                    (undefined8 param_1,undefined8 *param_2,int *param_3,char param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  uint in_stack_ffffffffffffffc8;
  int iVar6;
  undefined8 uStack_30;
  
  uStack_30 = 0;
  iVar6 = 0;
  *param_2 = 0;
  *param_3 = 0;
  iVar1 = strncmp((char)param_1,'!',(void *)0x7,param_4,(void *)(ulonglong)in_stack_ffffffffffffffc8
                 );
  if (iVar1 == 0) {
    puVar4 = &UNK_14678546f;
LAB_1459febed:
    iVar1 = FUN_1412da520(param_1,puVar4,&uStack_30,&stack0xffffffffffffffcc);
    uVar5 = 0;
    if (iVar1 != 2) goto LAB_1459febcf;
  }
  else {
    iVar1 = strncmp((char)param_1,'m',(void *)0xb,param_4,
                    (void *)CONCAT44(iVar6,in_stack_ffffffffffffffc8));
    if (iVar1 == 0) {
      puVar4 = &UNK_14678547d;
      goto LAB_1459febed;
    }
    uVar2 = FUN_140643cd0();
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    puVar3 = (undefined8 *)FUN_140048c90(uVar2,param_1,&UNK_14678d1bb,1);
    if (puVar3 == (undefined8 *)0x0) {
      uVar5 = 0;
      goto LAB_1459febcf;
    }
    iVar1 = func_0x000140048a50(*puVar3,puVar3[1]);
    iVar6 = iVar1;
    uStack_30 = func_0x000144d9c140(0x10,(longlong)iVar1);
    FUN_1451d2260(puVar3,uStack_30,iVar1);
    FUN_140048b50(puVar3);
  }
  *param_2 = uStack_30;
  *param_3 = iVar6;
LAB_1459febcf:
  return uVar5 & 0xffffffff;
}

