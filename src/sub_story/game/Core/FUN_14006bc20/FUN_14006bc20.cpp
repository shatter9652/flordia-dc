// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006bc20  size: 210 bytes
// Name:    FUN_14006bc20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


int FUN_14006bc20(longlong param_1,int param_2,char param_3)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  
  iVar6 = (param_2 << 7) >> 0x19;
  if (iVar6 == 1) {
code_r0x00014006bc31:
    iVar4 = iVar6;
  }
  else {
    iVar4 = 0;
    switch(iVar6) {
    case 2:
      if (param_3 != '\0') {
        lVar5 = func_0x000144f1bf10(*(undefined4 *)(param_1 + 0x9c));
        lVar2 = *(longlong *)(param_1 + 0x20);
        if (lVar5 == 0) {
          if (*(char *)(lVar2 + 0x248) != '\0') {
            return 6;
          }
        }
        else {
          lVar5 = func_0x0001451f88f0(*(undefined4 *)(lVar5 + 0x24),*(undefined8 *)(lVar5 + 0x30),
                                      *(undefined4 *)(lVar2 + 0x24c));
          if (*(char *)(lVar2 + 0x248) != '\0') {
            if (lVar5 == 0) {
              return 6;
            }
            bVar1 = *(byte *)(*(longlong *)(lVar5 + 8) + 0x18);
            if ((bVar1 & 2) == 0) {
              if ((bVar1 & 1) != 0) {
                return 6;
              }
              if ((*(uint *)(lVar5 + 0x58) & 0x40008) != 0) {
                return 6;
              }
            }
          }
        }
        cVar3 = func_0x000144f1bda0(*(undefined4 *)(param_1 + 0x68));
        if (cVar3 != '\0') {
          return 6;
        }
      }
      iVar4 = 2;
      break;
    case 3:
    case 4:
    case 5:
    case 6:
      goto code_r0x00014006bc31;
    }
  }
  return iVar4;
}

