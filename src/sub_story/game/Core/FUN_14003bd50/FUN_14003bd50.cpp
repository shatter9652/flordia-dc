// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14003bd50  size: 40 bytes
// Name:    FUN_14003bd50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


char * FUN_14003bd50(char *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  void *unaff_RBX;
  void *in_stack_ffffffffffffffd8;
  
  pvVar3 = (void *)func_0x000145f407f0(param_2);
  cVar1 = *param_1;
  while( true ) {
    if (cVar1 == '\0') {
      return (char *)0x0;
    }
    iVar2 = _strnicmp((char)param_1,(char)param_2,pvVar3,param_4,in_stack_ffffffffffffffd8,unaff_RBX
                     );
    if (iVar2 == 0) break;
    cVar1 = param_1[1];
    param_1 = param_1 + 1;
  }
  return param_1;
}

