// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400d2e10  size: 427 bytes
// Name:    FUN_1400d2e10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1400d2e10(longlong param_1,longlong param_2)

{
  float fVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  ulonglong uVar7;
  undefined1 auVar8 [64];
  
  fVar1 = *(float *)(param_1 + 0x94);
  uVar5 = (ulonglong)(uint)fVar1;
  if ((fVar1 == _DAT_145fc6f54) && (!NAN(fVar1) && !NAN(_DAT_145fc6f54))) {
    auVar8 = ZEXT464(_DAT_14615d7e0);
    bVar2 = *(byte *)(param_2 + 0x140);
    uVar5 = (ulonglong)_DAT_14615d7e0;
    if (((bVar2 & 4) == 0) && ((bVar2 & 1) == 0)) {
      bVar3 = *(byte *)(param_2 + 0x14c);
      if ((bVar3 & 0xc) == 0 && (~bVar3 & 1) == 0) {
        if ((bVar3 & 0x10) == 0) {
          return 0;
        }
        if (*(int *)(param_1 + 0x380) != 2) {
          return 0;
        }
      }
      bVar3 = *(byte *)(param_2 + 0x120);
      if ((bVar3 & 1) == 0) {
        if ((bVar3 & 0x20) == 0) {
          cVar4 = func_0x0001400ca280(param_2);
          uVar7 = auVar8._0_8_;
          uVar5 = uVar7;
          if ((((cVar4 != '\0') && ((*(byte *)(param_2 + 0x14d) & 0x20) != 0)) &&
              (uVar5 = 0, *(char *)(param_2 + 0xe0) == '\x03')) &&
             (uVar5 = uVar7, (*(byte *)(param_1 + 0x91) & 1) == 0)) {
            uVar5 = 0;
          }
        }
        else if ((bVar2 & 8) == 0 && (bVar3 & 0x90) == 0x10) {
          uVar5 = (ulonglong)*(uint *)(param_1 + 0x9c);
        }
        else if ((bVar2 & 8) == 0) {
          cVar4 = func_0x0001400ca280(param_2);
          if (cVar4 == '\0') {
            if ((*(byte *)(param_2 + 0x141) & 4) == 0) {
              auVar6._0_12_ = ZEXT812(0);
              auVar6._12_4_ = 0;
              auVar6 = vcmpss_avx(auVar6,ZEXT416(*(uint *)(param_1 + 0x274)),0);
              uVar5 = (ulonglong)(~auVar6._0_4_ & _DAT_14615a708);
              goto LAB_1400d2e92;
            }
          }
          else {
            uVar5 = (ulonglong)_DAT_146170744;
            if (((*(byte *)(param_2 + 0x14d) & 0x20) == 0) ||
               ((*(char *)(param_2 + 0xe0) == '\x03' && ((*(byte *)(param_1 + 0x91) & 1) != 0))))
            goto LAB_1400d2e92;
          }
          uVar5 = 0;
        }
        else if ((*(byte *)(param_2 + 0x141) & 1) == 0) {
          uVar5 = (ulonglong)_DAT_14abbd7bc;
        }
        else {
          uVar5 = (ulonglong)_DAT_14abbd7b4;
        }
      }
      else {
        uVar5 = (ulonglong)_DAT_14abbd7c8;
      }
    }
  }
LAB_1400d2e92:
  if ((float)uVar5 < _DAT_14abbd858) {
    uVar5 = (ulonglong)(uint)_DAT_14abbd858;
  }
  return uVar5;
}

