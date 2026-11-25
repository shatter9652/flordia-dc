// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400d32e0  size: 915 bytes
// Name:    FUN_1400d32e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400d3680, FUN_144f63330
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400d32e0(longlong param_1,longlong param_2,undefined8 param_3,float *param_4,
                  undefined8 param_5)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [64];
  undefined1 auVar11 [16];
  float fVar13;
  undefined1 auVar12 [64];
  
  auVar12 = ZEXT464(*(uint *)(param_2 + 0xec));
  auVar11 = ZEXT416(*(uint *)(param_2 + 0xec));
  fVar13 = *param_4;
  auVar10 = ZEXT464((uint)fVar13);
  if ((*(byte *)(param_1 + 0x91) & 4) != 0) goto LAB_1400d346b;
  fVar13 = *(float *)(param_1 + 0xa0);
  cVar3 = *(char *)(param_1 + 0x388);
  if ((((cVar3 == '\x01') && ((*(byte *)(param_2 + 0x14d) & 8) == 0)) &&
      (-1 < *(char *)(param_2 + 0x14c))) && ((*(byte *)(param_2 + 0x140) & 4) == 0)) {
    fVar13 = fVar13 * _DAT_14615a200;
  }
  lVar4 = func_0x000144e63d10(*(undefined4 *)(*(longlong *)(param_1 + 0x2f8) + 0x9c));
  if (*(char *)(param_1 + 0x38b) == '\0') {
    bVar1 = *(byte *)(param_2 + 0x140);
    if ((bVar1 & 2) == 0) {
      if (cVar3 == '\0') {
LAB_1400d3386:
        if ((*(byte *)(param_2 + 0xf0) & 2) == 0) {
          bVar2 = *(byte *)(param_2 + 0x120);
          if ((bVar2 & 1) == 0) {
            if ((bVar1 & 8) == 0) {
              cVar3 = func_0x0001400ca280(param_2);
              if (cVar3 == '\0') {
                if ((*(byte *)(param_2 + 0x141) & 4) == 0) {
                  if ((lVar4 == 0) ||
                     (fVar8 = (float)FUN_1400d3680(*(undefined8 *)(lVar4 + 8)),
                     fVar8 <= _DAT_145fc7020)) {
                    if ((bVar2 & 0x20) == 0) {
                      if ((bVar2 & 8) == 0) {
                        uVar6 = 0x14abbd544;
                        if (((*(float *)(param_2 + 0xf4) <= _DAT_14abbd808) &&
                            ((float)(*(uint *)(param_2 + 0xfc) & _DAT_145fc6f4c) <= _DAT_14abbd80c))
                           && (uVar6 = 0x14abbd538, *(char *)(param_1 + 0x38e) != '\0')) {
                          uVar6 = 0x14abbd544;
                        }
                      }
                      else {
                        uVar6 = 0x14abbd55c;
                      }
                    }
                    else {
                      uVar6 = 0x14abbd568;
                      if ((bVar2 & 8) == 0) {
                        uVar6 = 0x14abbd550;
                      }
                      fVar13 = fVar13 * (*(float *)(param_1 + 0x274) * _DAT_146170738 +
                                        _DAT_145fc6ed8);
                    }
                    goto LAB_1400d344b;
                  }
                  bVar7 = (bVar2 & 0x20) == 0;
                  uVar5 = 0x14abbd574;
                  uVar6 = 0x14abbd580;
                }
                else {
                  bVar7 = (bVar2 & 0x20) == 0;
                  uVar5 = 0x14abbd6dc;
                  uVar6 = 0x14abbd6e8;
                }
              }
              else {
                bVar7 = (bVar2 & 0x20) == 0;
                uVar5 = 0x14abbd70c;
                uVar6 = 0x14abbd718;
              }
LAB_1400d354b:
              if (bVar7) {
                uVar6 = uVar5;
              }
            }
            else if ((*(byte *)(param_2 + 0x14d) & 2) == 0) {
              if ((bVar2 & 0x20) == 0) {
                bVar7 = (bVar2 & 8) == 0;
                uVar5 = 0x14abbd670;
                uVar6 = 0x14abbd694;
                goto LAB_1400d354b;
              }
              if ((bVar2 & 8) == 0) {
                uVar6 = 0x14abbd6ac;
                if (*(int *)(param_1 + 0x380) == 2) {
                  uVar6 = 0x14abbd67c;
                }
                if ((bVar1 & 0x10) == 0) {
                  uVar6 = 0x14abbd67c;
                }
              }
              else {
                uVar6 = 0x14abbd6a0;
              }
            }
            else {
              uVar6 = 0x14abbd688;
            }
          }
          else {
            uVar6 = 0x14abbd5bc;
          }
        }
        else {
          uVar6 = 0x14abbd58c;
        }
      }
      else if (*(char *)(param_2 + 0x14c) < '\0') {
        if (((bVar1 & 1) == 0) && (*(int *)(param_1 + 0x374) < 1)) goto LAB_1400d3386;
        *(undefined4 *)(param_1 + 0x374) = _DAT_14abbd810;
        uVar6 = 0x14abbd598;
      }
      else {
        if (*(int *)(param_1 + 0x374) < 1) goto LAB_1400d3386;
        *(int *)(param_1 + 0x374) =
             *(int *)(param_1 + 0x374) - (int)(auVar12._0_4_ * _DAT_146159c28);
        uVar6 = 0x14abbd598;
      }
    }
    else {
      uVar6 = 0x14abbd5b0;
    }
  }
  else {
    uVar6 = 0x14abbd5a4;
  }
LAB_1400d344b:
  param_3 = FUN_144f63330(uVar6,auVar10._0_8_,param_3,param_5,auVar12._0_4_,fVar13);
  auVar11 = auVar12._0_16_;
  fVar13 = auVar10._0_4_;
LAB_1400d346b:
  auVar9._0_12_ = ZEXT812(0);
  auVar9._12_4_ = 0;
  *param_4 = (float)param_3;
  auVar9 = vcmpss_avx(auVar11,auVar9,4);
  *(uint *)(param_2 + 0x100) = auVar9._0_4_ & (uint)(((float)param_3 - fVar13) / auVar11._0_4_);
  return;
}

