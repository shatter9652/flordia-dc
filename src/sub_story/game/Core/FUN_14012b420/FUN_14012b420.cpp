// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14012b420  size: 418 bytes
// Name:    FUN_14012b420
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_14012b420(longlong param_1,int *param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  
  cVar1 = func_0x00014501bbd0(*(undefined4 *)(param_1 + 0x11c0),*(undefined1 *)(param_1 + 0x1210));
  if (cVar1 == '\0') {
    cVar1 = func_0x00014501bbd0(*(undefined4 *)(param_1 + 0x10a0),*(undefined1 *)(param_1 + 0x10f0))
    ;
    if (cVar1 == '\0') {
      cVar1 = func_0x00014501bbd0(*(undefined4 *)(param_1 + 0xf80),*(undefined1 *)(param_1 + 0xfd0))
      ;
      if (cVar1 == '\0') {
        cVar1 = func_0x00014501bbd0(*(undefined4 *)(param_1 + 0xe60),
                                    *(undefined1 *)(param_1 + 0xeb0));
        if (cVar1 == '\0') {
          cVar1 = func_0x00014501bbd0(*(undefined4 *)(param_1 + 0xd40),
                                      *(undefined1 *)(param_1 + 0xd90));
          if (cVar1 == '\0') {
            cVar1 = func_0x00014501bbd0(*(undefined4 *)(param_1 + 0xc20),
                                        *(undefined1 *)(param_1 + 0xc70));
            if (cVar1 == '\0') {
              cVar1 = func_0x00014501bbd0(*(undefined4 *)(param_1 + 0xb00),
                                          *(undefined1 *)(param_1 + 0xb50));
              if (cVar1 == '\0') {
                cVar1 = func_0x00014501bbd0(*(undefined4 *)(param_1 + 0x9e0),
                                            *(undefined1 *)(param_1 + 0xa30));
                if (cVar1 == '\0') {
                  cVar1 = func_0x00014501bbd0(*(undefined4 *)(param_1 + 0x8c0),
                                              *(undefined1 *)(param_1 + 0x910));
                  if (cVar1 == '\0') {
                    bVar2 = func_0x00014501bbd0(*(undefined4 *)(param_1 + 0x7a0),
                                                *(undefined1 *)(param_1 + 0x7f0));
                    iVar3 = bVar2 - 1;
                    lVar4 = 0;
                    if (bVar2 != 0) {
                      lVar4 = param_1 + 0x740;
                    }
                  }
                  else {
                    lVar4 = param_1 + 0x860;
                    iVar3 = 1;
                  }
                }
                else {
                  lVar4 = param_1 + 0x980;
                  iVar3 = 2;
                }
              }
              else {
                lVar4 = param_1 + 0xaa0;
                iVar3 = 3;
              }
            }
            else {
              lVar4 = param_1 + 0xbc0;
              iVar3 = 4;
            }
          }
          else {
            lVar4 = param_1 + 0xce0;
            iVar3 = 5;
          }
        }
        else {
          lVar4 = param_1 + 0xe00;
          iVar3 = 6;
        }
      }
      else {
        lVar4 = param_1 + 0xf20;
        iVar3 = 7;
      }
    }
    else {
      lVar4 = param_1 + 0x1040;
      iVar3 = 8;
    }
  }
  else {
    lVar4 = param_1 + 0x1160;
    iVar3 = 9;
  }
  *param_2 = iVar3;
  return lVar4;
}

