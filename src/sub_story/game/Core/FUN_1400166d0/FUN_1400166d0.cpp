// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400166d0  size: 420 bytes
// Name:    FUN_1400166d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144dd8df0, FUN_144dd85b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400166d0(longlong param_1)

{
  int iVar1;
  
  FUN_144dd8df0(param_1,param_1 + 0xbc,*(undefined4 *)(param_1 + 0xb48));
  FUN_144dd8df0(param_1,param_1 + 0x9b0,*(undefined4 *)(param_1 + 0xb60));
  FUN_144dd85b0(param_1,param_1 + 0xb70);
  if (*(short *)(param_1 + 0xae2) == 0) {
    if (*(short *)(param_1 + 0xaaa) == 0) {
      if (*(short *)(param_1 + 0xade) == 0) {
        if (*(short *)(param_1 + 0xaae) == 0) {
          if (*(short *)(param_1 + 0xada) == 0) {
            if (*(short *)(param_1 + 0xab2) == 0) {
              if (*(short *)(param_1 + 0xad6) == 0) {
                if (*(short *)(param_1 + 0xab6) == 0) {
                  if (*(short *)(param_1 + 0xad2) == 0) {
                    if (*(short *)(param_1 + 0xaba) == 0) {
                      if (*(short *)(param_1 + 0xace) == 0) {
                        if (*(short *)(param_1 + 0xabe) == 0) {
                          if (*(short *)(param_1 + 0xaca) == 0) {
                            if (*(short *)(param_1 + 0xac2) == 0) {
                              if (*(short *)(param_1 + 0xac6) == 0) {
                                iVar1 = 3 - (uint)(*(short *)(param_1 + 0xaa6) == 0);
                              }
                              else {
                                iVar1 = 4;
                              }
                            }
                            else {
                              iVar1 = 5;
                            }
                          }
                          else {
                            iVar1 = 6;
                          }
                        }
                        else {
                          iVar1 = 7;
                        }
                      }
                      else {
                        iVar1 = 8;
                      }
                    }
                    else {
                      iVar1 = 9;
                    }
                  }
                  else {
                    iVar1 = 10;
                  }
                }
                else {
                  iVar1 = 0xb;
                }
              }
              else {
                iVar1 = 0xc;
              }
            }
            else {
              iVar1 = 0xd;
            }
          }
          else {
            iVar1 = 0xe;
          }
        }
        else {
          iVar1 = 0xf;
        }
      }
      else {
        iVar1 = 0x10;
      }
    }
    else {
      iVar1 = 0x11;
    }
  }
  else {
    iVar1 = 0x12;
  }
  *(int *)(param_1 + 0x1700) = *(int *)(param_1 + 0x1700) + 0x11 + iVar1 * 3;
  return;
}

