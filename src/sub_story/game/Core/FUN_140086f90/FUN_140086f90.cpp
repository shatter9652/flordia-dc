// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140086f90  size: 40 bytes
// Name:    FUN_140086f90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145283330
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void * FUN_140086f90(undefined8 param_1,undefined8 param_2,void *param_3,char param_4,int param_5,
                    void *param_6)

{
  byte bVar1;
  char cVar2;
  char *pcVar3;
  code *pcVar4;
  longlong lVar5;
  void *pvVar6;
  int unaff_EBX;
  void *unaff_retaddr;
  
  lVar5 = FUN_145283330();
  if (lVar5 == 0) {
    return param_3;
  }
  bVar1 = *(byte *)(lVar5 + 0x10);
  if (1 < bVar1 - 2) {
    if (bVar1 != 0) {
      if (bVar1 == 1) {
        return *(void **)(lVar5 + 8);
      }
      pcVar4 = (code *)swi(3);
      pvVar6 = (void *)(*pcVar4)();
      return pvVar6;
    }
    pcVar3 = *(char **)(lVar5 + 8);
    if (pcVar3 != (char *)0x0) {
      cVar2 = *pcVar3;
      if ((cVar2 == '0') && ((byte)(pcVar3[1] | 0x20U) == 0x78)) {
                    /* WARNING: Could not recover jumptable at 0x00014405d3bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pvVar6 = _strtoui64((char)pcVar3 + '\x02','\0',(void *)0x10,param_4,param_5,param_6);
        return pvVar6;
      }
      pvVar6 = _strtoui64((char)pcVar3 + (cVar2 == '-'),'\0',(void *)0xa,param_4,unaff_EBX,
                          unaff_retaddr);
      if (cVar2 == '-') {
        return (void *)-(longlong)pvVar6;
      }
      return pvVar6;
    }
  }
  return (void *)0x0;
}

