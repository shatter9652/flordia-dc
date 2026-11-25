// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 143dce5d0  size: 1002 bytes
// Name:    rlScTaskBase::HandleError
// Subsystem: core
// Class:   rlScTaskBase
//
// Evidence:
//   GTAVSRC: rlScTaskBase::HandleError  (rage/base/src/rline/socialclub/rlsocialclubtask.cpp)
//   literal: InvalidCredentials
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_143da5f80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/rlScTaskBase.h"


void rlScTaskBase__HandleError(undefined8 param_1,uint *param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  
  cVar1 = FUN_143da5f80(param_1,&UNK_14677b184,&UNK_1467800f8);
  uVar3 = 2;
  if (cVar1 == '\0') {
    cVar1 = FUN_143da5f80(param_1,&UNK_14677b184,&UNK_1467829f5);
    uVar3 = 3;
    if (cVar1 == '\0') {
      cVar1 = FUN_143da5f80(param_1,&UNK_14677b184,&UNK_14677f461);
      uVar3 = 0;
      if (cVar1 == '\0') {
        cVar1 = FUN_143da5f80(param_1,&UNK_14677b184,&UNK_1467829fc);
        uVar3 = 4;
        if (cVar1 == '\0') {
          cVar1 = FUN_143da5f80(param_1,&UNK_1467848ff,&UNK_146783dba);
          uVar3 = 5;
          if (cVar1 == '\0') {
            cVar1 = FUN_143da5f80(param_1,&UNK_1467848ff,&UNK_14677bd95);
            if (cVar1 == '\0') {
              cVar1 = FUN_143da5f80(param_1,&UNK_1467848ff,&UNK_14677aa4a);
              uVar3 = 6;
              if (cVar1 == '\0') {
                cVar1 = FUN_143da5f80(param_1,&UNK_1467848ff,&UNK_14677b207);
                uVar3 = 7;
                if (cVar1 == '\0') {
                  cVar1 = FUN_143da5f80(param_1,&UNK_146779ba1,&UNK_146779f28);
                  uVar3 = 9;
                  if (cVar1 == '\0') {
                    cVar1 = FUN_143da5f80(param_1,&UNK_146779ba1,&UNK_146779f36);
                    uVar3 = 10;
                    if (cVar1 == '\0') {
                      cVar1 = FUN_143da5f80(param_1,&UNK_14677a3ee,&UNK_1467837ff);
                      uVar3 = 0xc;
                      if (cVar1 == '\0') {
                        cVar1 = FUN_143da5f80(param_1,&UNK_14677a3ee,&UNK_146785a4b);
                        uVar3 = 0xd;
                        if (cVar1 == '\0') {
                          cVar1 = FUN_143da5f80(param_1,&UNK_14677a3ee,&UNK_1467800ee);
                          uVar3 = 0xe;
                          if (cVar1 == '\0') {
                            cVar1 = FUN_143da5f80(param_1,&UNK_14677a3ee,&UNK_1467829fc);
                            uVar3 = 0xf;
                            if (cVar1 == '\0') {
                              cVar1 = FUN_143da5f80(param_1,&UNK_14677a3ee,&UNK_146783da8);
                              uVar3 = 0x10;
                              if (cVar1 == '\0') {
                                cVar1 = FUN_143da5f80(param_1,&UNK_14677a3ee,&UNK_14678385c);
                                uVar3 = 0x12;
                                if (cVar1 == '\0') {
                                  cVar1 = FUN_143da5f80(param_1,&UNK_14677a3ee,&UNK_146784ce3);
                                  uVar3 = 0x13;
                                  if (cVar1 == '\0') {
                                    cVar1 = FUN_143da5f80(param_1,&UNK_146784684,&UNK_146784a34);
                                    uVar3 = 0x14;
                                    if (cVar1 == '\0') {
                                      cVar1 = FUN_143da5f80(param_1,&UNK_146784684,&UNK_1467787dc);
                                      uVar3 = 0x15;
                                      if (cVar1 == '\0') {
                                        cVar1 = FUN_143da5f80(param_1,&UNK_146784684,&UNK_1467834e7)
                                        ;
                                        uVar3 = 0x16;
                                        if (cVar1 == '\0') {
                                          cVar1 = FUN_143da5f80(param_1,&UNK_1467834dc,
                                                                &UNK_146783699);
                                          uVar3 = 0x17;
                                          if (cVar1 == '\0') {
                                            cVar1 = FUN_143da5f80(param_1,&UNK_1467834dc,
                                                                  &UNK_146783139);
                                            uVar3 = 0x18;
                                            if (cVar1 == '\0') {
                                              cVar1 = FUN_143da5f80(param_1,&UNK_1467834dc,
                                                                    &UNK_146780ac6);
                                              uVar3 = 0x19;
                                              if (cVar1 == '\0') {
                                                cVar1 = FUN_143da5f80(param_1,&UNK_1467834dc,
                                                                      &UNK_146780ae3);
                                                uVar3 = 0x1a;
                                                if (cVar1 == '\0') {
                                                  cVar1 = FUN_143da5f80(param_1,&UNK_1467828bf,
                                                                        &UNK_1467829fc);
                                                  uVar3 = 0x1b;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = FUN_143da5f80(param_1,&UNK_14677a4e0,0);
                                                    uVar3 = 9;
                                                    if (cVar1 == '\0') {
                                                      cVar1 = FUN_143da5f80(param_1,&UNK_14677d35a,
                                                                            &UNK_1467800f4);
                                                      uVar3 = 0x1c;
                                                      if (cVar1 == '\0') {
                                                        cVar1 = FUN_143da5f80(param_1,&UNK_1467828bf
                                                                              ,&UNK_1467799db);
                                                        uVar3 = 0x1d;
                                                        if (cVar1 == '\0') {
                                                          bVar2 = FUN_143da5f80(param_1,&
                                                  UNK_1467828bf,&UNK_146781962);
                                                  uVar3 = bVar2 - 1 | 0x20;
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  *param_2 = uVar3;
  return;
}

