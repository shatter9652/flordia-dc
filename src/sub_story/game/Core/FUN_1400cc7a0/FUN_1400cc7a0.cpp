// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400cc7a0  size: 263 bytes
// Name:    FUN_1400cc7a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145180510
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400cc7a0(undefined1 (*param_1) [16],longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auStack_28 [16];
  
  if (param_2 != 0) {
    lVar4 = func_0x000144e63d10(*(undefined4 *)(param_2 + 0x9c));
    if (lVar4 != 0) {
      cVar2 = func_0x000144fc6390(lVar4);
      if (cVar2 != '\0') {
        auVar5._0_12_ = ZEXT812(0);
        auVar5._12_4_ = 0;
        if (((*(float *)(lVar4 + 0x648) != _DAT_14615bd54) ||
            (NAN(*(float *)(lVar4 + 0x648)) || NAN(_DAT_14615bd54))) &&
           (*(char *)(lVar4 + 0x698) == '\x01')) {
          auVar5 = *(undefined1 (*) [16])(lVar4 + 0x660);
        }
        if (((*(float *)(lVar4 + 0x6e8) != _DAT_14615bd54) ||
            (NAN(*(float *)(lVar4 + 0x6e8)) || NAN(_DAT_14615bd54))) &&
           (*(char *)(lVar4 + 0x738) == '\x01')) {
          auVar5 = vcmpps_avx(auVar5,ZEXT816(0),0);
          uVar3 = vmovmskps_avx(auVar5);
          if ((~(byte)uVar3 & 7) == 0) {
            auVar5 = *(undefined1 (*) [16])(lVar4 + 0x700);
          }
          else {
            FUN_145180510(auStack_28);
            auVar5 = auStack_28;
          }
        }
        auVar6._0_12_ = ZEXT812(0);
        auVar6._12_4_ = 0;
        auVar6 = vcmpps_avx(auVar5,auVar6,0);
        uVar3 = vmovmskps_avx(auVar6);
        if ((~(byte)uVar3 & 7) != 0) {
          *param_1 = auVar5;
          return;
        }
      }
    }
  }
  uVar1 = _UNK_14614f7f8;
  *(undefined8 *)*param_1 = _DAT_14614f7f0;
  *(undefined8 *)(*param_1 + 8) = uVar1;
  return;
}

