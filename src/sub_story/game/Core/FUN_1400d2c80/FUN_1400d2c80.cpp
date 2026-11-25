// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400d2c80  size: 390 bytes
// Name:    FUN_1400d2c80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1400d2c80(longlong param_1,longlong param_2)

{
  float fVar1;
  byte bVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  char cVar5;
  ulonglong uVar6;
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  
  fVar1 = *(float *)(param_1 + 0x98);
  uVar6 = (ulonglong)(uint)fVar1;
  if ((fVar1 == _DAT_145fc6f50) && (!NAN(fVar1) && !NAN(_DAT_145fc6f50))) {
    auVar7 = ZEXT464(_DAT_14617073c);
    bVar2 = *(byte *)(param_2 + 0x140);
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
      if ((bVar3 & 0x20) != 0) {
        if ((bVar2 & 8) == 0 && (bVar3 & 0x90) == 0x10) {
          uVar6 = (ulonglong)*(uint *)(param_1 + 0x9c);
        }
        else if ((bVar2 & 8) == 0) {
          auVar8 = ZEXT464(_DAT_146170740);
          if ((*(byte *)(param_2 + 0x141) & 4) == 0) {
            cVar5 = func_0x0001400ca280(param_2);
            uVar6 = auVar8._0_8_;
            if ((cVar5 == '\0') && (uVar6 = auVar7._0_8_, -1 < (char)bVar3 || (bVar3 & 6) == 2)) {
              auVar4 = vcmpss_avx(ZEXT816(0) << 0x20,ZEXT416(*(uint *)(param_1 + 0x274)),0);
              uVar6 = (ulonglong)(~auVar4._0_4_ & _DAT_146166760);
            }
          }
          else {
            uVar6 = (ulonglong)_DAT_146170740;
          }
        }
        else if ((*(byte *)(param_2 + 0x14d) & 2) == 0) {
          if ((*(byte *)(param_2 + 0x141) & 1) == 0) {
            uVar6 = (ulonglong)_DAT_14abbd7c0;
          }
          else {
            uVar6 = (ulonglong)_DAT_14abbd7b8;
          }
        }
        else {
          uVar6 = (ulonglong)_DAT_14abbd7c4;
        }
        goto LAB_1400d2ced;
      }
    }
    uVar6 = (ulonglong)_DAT_14617073c;
  }
LAB_1400d2ced:
  if (_DAT_14abbd85c < (float)uVar6) {
    uVar6 = (ulonglong)(uint)_DAT_14abbd85c;
  }
  return uVar6;
}

