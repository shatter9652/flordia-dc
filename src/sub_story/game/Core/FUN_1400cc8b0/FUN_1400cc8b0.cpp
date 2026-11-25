// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400cc8b0  size: 1537 bytes
// Name:    FUN_1400cc8b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f63330
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400cc8b0(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  float param_5,longlong param_6,longlong param_7)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  undefined8 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auVar10 [64];
  undefined4 uVar11;
  
  if ((*(byte *)(param_1 + 0x91) & 4) != 0) goto LAB_1400ccb33;
  cVar1 = *(char *)(param_1 + 0x60);
  if (cVar1 == '\x01') {
    auVar10 = ZEXT464(_DAT_14614f808);
  }
  else {
    if (*(int *)(param_1 + 0x378) < 1) {
      auVar10 = ZEXT1664(ZEXT416(*(uint *)(param_1 + 0xa0)));
    }
    else {
      auVar10 = ZEXT464(_DAT_145fc6edc);
    }
    if (*(int *)(param_1 + 0x380) == 2) {
      auVar10 = ZEXT1664(ZEXT416(*(uint *)(param_1 + 0xa0)));
    }
  }
  uVar9 = *(undefined4 *)(param_6 + 0xec);
  if (*(char *)(param_1 + 0x38b) == '\x01') {
    uVar8 = *param_3;
    uVar11 = 0x3f800000;
    uVar6 = 0x14abbd610;
  }
  else {
    bVar2 = *(byte *)(param_6 + 0x140);
    if ((bVar2 & 2) == 0) {
      bVar3 = *(byte *)(param_7 + 0x110);
      if ((bVar3 & 4) == 0) {
        uVar11 = auVar10._0_4_;
        if (((*(byte *)(param_6 + 0xe1) & 1) == 0) || ((*(byte *)(param_6 + 0x14c) & 1) == 0)) {
          if ((*(float *)(param_7 + 0x78) - *(float *)(param_1 + 0x350) < param_5) ||
             (*(float *)(param_7 + 0xa8) - *(float *)(param_1 + 0x354) < param_5)) {
            bVar4 = *(byte *)(param_6 + 0x120);
            if ((bVar4 & 4) != 0) goto LAB_1400ccd2a;
            if ((bVar4 & 1) == 0) {
              if ((bVar2 & 8) == 0) {
                cVar5 = func_0x0001400ca280(param_6);
                uVar11 = auVar10._0_4_;
                if (cVar5 == '\0') {
                  if (((*(byte *)(param_6 + 0x14d) & 8) == 0) || ((bVar3 & 0x10) == 0)) {
                    if ((*(byte *)(param_6 + 0x141) & 4) == 0) {
                      fVar7 = _DAT_14615cd00;
                      if (-1 < *(char *)(param_6 + 0x14c)) {
                        fVar7 = _DAT_14abbd80c;
                      }
                      if (cVar1 != '\x01') {
                        fVar7 = _DAT_14abbd80c;
                      }
                      if ((bVar4 & 0x20) == 0) {
                        if ((*(float *)(param_6 + 0xf4) <= _DAT_14abbd808) &&
                           ((float)(*(uint *)(param_6 + 0xfc) & _DAT_145fc6f4c) <= fVar7)) {
                          if (-1 < (char)bVar4) goto LAB_1400ccb0c;
                          if (((bVar2 & 0x40) == 0) || ((*(byte *)(param_6 + 0x141) & 1) == 0))
                          goto LAB_1400ccaf2;
                        }
                        uVar8 = *param_3;
                        uVar6 = 0x14abbd5d4;
                      }
                      else {
                        uVar8 = *param_3;
                        uVar6 = 0x14abbd5ec;
                      }
                    }
                    else {
                      uVar8 = *param_3;
                      uVar6 = 0x14abbd700;
                    }
                  }
                  else {
                    uVar8 = *param_3;
LAB_1400ccd96:
                    uVar6 = 0x14abbd748;
                  }
                }
                else {
                  uVar8 = *param_3;
                  if ((*(byte *)(param_6 + 0x14d) & 8) != 0) goto LAB_1400ccd96;
                  uVar6 = 0x14abbd730;
                }
              }
              else {
                uVar8 = *param_3;
                if ((*(byte *)(param_6 + 0x14d) & 2) != 0) goto LAB_1400cce99;
                uVar6 = 0x14abbd6c4;
              }
            }
            else {
              uVar8 = *param_3;
              uVar6 = 0x14abbd658;
            }
          }
          else {
            bVar4 = *(byte *)(param_6 + 0x120);
            if ((bVar4 & 4) == 0) {
              if ((bVar4 & 1) == 0) {
                if ((bVar2 & 8) == 0) {
                  cVar5 = func_0x0001400ca280(param_6);
                  uVar11 = auVar10._0_4_;
                  if (cVar5 == '\0') {
                    if (((*(byte *)(param_6 + 0x14d) & 8) == 0) || ((bVar3 & 0x10) == 0)) {
                      if ((*(byte *)(param_6 + 0x141) & 4) == 0) {
                        fVar7 = _DAT_14615cd00;
                        if (-1 < *(char *)(param_6 + 0x14c)) {
                          fVar7 = _DAT_14abbd80c;
                        }
                        if (cVar1 != '\x01') {
                          fVar7 = _DAT_14abbd80c;
                        }
                        if ((bVar4 & 0x20) == 0) {
                          if (((_DAT_14abbd808 < *(float *)(param_6 + 0xf4)) ||
                              (fVar7 < (float)(*(uint *)(param_6 + 0xfc) & _DAT_145fc6f4c))) ||
                             (*(char *)(param_1 + 0x38e) == '\x01')) {
                            uVar8 = *param_3;
                            uVar6 = 0x14abbd5c8;
                          }
                          else {
                            if ((char)bVar4 < '\0') {
LAB_1400ccaf2:
                              if (_DAT_146159fa0 <
                                  (float)(*(uint *)(param_6 + 0x100) & _DAT_145fc6f4c)) {
                                uVar8 = *param_3;
                                uVar6 = 0x14abbd664;
                                goto LAB_1400ccb23;
                              }
                            }
LAB_1400ccb0c:
                            uVar8 = *param_3;
                            uVar6 = 0x14abbd604;
                          }
                        }
                        else {
                          uVar8 = *param_3;
                          uVar6 = 0x14abbd5e0;
                        }
                      }
                      else {
                        uVar8 = *param_3;
                        uVar6 = 0x14abbd6f4;
                      }
                    }
                    else {
                      uVar8 = *param_3;
LAB_1400ccd12:
                      uVar6 = 0x14abbd73c;
                    }
                  }
                  else {
                    uVar8 = *param_3;
                    if ((*(byte *)(param_6 + 0x14d) & 8) != 0) goto LAB_1400ccd12;
                    uVar6 = 0x14abbd724;
                  }
                }
                else {
                  uVar8 = *param_3;
                  if ((*(byte *)(param_6 + 0x14d) & 2) == 0) {
                    uVar6 = 0x14abbd6b8;
                  }
                  else {
LAB_1400cce99:
                    uVar6 = 0x14abbd6d0;
                  }
                }
              }
              else {
                uVar8 = *param_3;
                uVar6 = 0x14abbd64c;
              }
            }
            else {
LAB_1400ccd2a:
              uVar8 = *param_3;
              uVar6 = 0x14abbd628;
            }
          }
        }
        else if ((_DAT_14abbd808 < *(float *)(param_6 + 0xf4)) ||
                (_DAT_14abbd80c < (float)(*(uint *)(param_6 + 0xfc) & _DAT_145fc6f4c))) {
          uVar8 = *param_3;
          uVar6 = 0x14abbd634;
        }
        else {
          uVar8 = *param_3;
          uVar6 = 0x14abbd640;
        }
      }
      else {
        uVar8 = *param_3;
        uVar11 = 0x3f800000;
        uVar6 = 0x14abbd5f8;
      }
    }
    else {
      uVar8 = *param_3;
      uVar11 = 0x3f800000;
      uVar6 = 0x14abbd61c;
    }
  }
LAB_1400ccb23:
  param_2 = FUN_144f63330(uVar6,uVar8,param_2,param_4,uVar9,uVar11);
LAB_1400ccb33:
  *param_3 = (int)param_2;
  return;
}

