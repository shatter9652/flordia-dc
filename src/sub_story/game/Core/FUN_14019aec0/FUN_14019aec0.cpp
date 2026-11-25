// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14019aec0  size: 275 bytes
// Name:    FUN_14019aec0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14127aaf0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x00014019afb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00014019afb9) */
/* WARNING: Removing unreachable block (ram,0x00014019afbd) */

void * FUN_14019aec0(void *param_1,void *param_2,undefined4 *param_3,void *param_4,
                    undefined8 param_5)

{
  undefined4 uVar1;
  char cVar2;
  char cVar3;
  void *pvVar4;
  undefined8 unaff_RBP;
  ulonglong uVar5;
  undefined4 uVar6;
  
  uVar1 = *param_3;
  cVar3 = *(char *)(param_3 + 1);
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),*(undefined1 *)((longlong)param_3 + 5));
  cVar2 = func_0x00014019afe0();
  if (cVar2 != '\0') {
    uVar6 = 0;
    if (cVar3 == '\x01') {
      uVar6 = uVar1;
    }
    cVar3 = func_0x000140576790(uVar6);
    if (cVar3 != '\0') {
      param_1 = (void *)FUN_14127aaf0(param_1,param_2,uVar6,uVar5 & 0xffffffff);
      param_4 = (void *)FUN_14127aaf0(param_4,param_5,uVar6,uVar5 & 0xffffffff);
      param_2 = (void *)0x0;
    }
                    /* WARNING: Could not recover jumptable at 0x000145f40550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar4 = memcmp(param_1,param_4,param_2);
    return pvVar4;
  }
  return (void *)0x0;
}

