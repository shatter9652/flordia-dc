// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a7e00  size: 438 bytes
// Name:    FUN_1401a7e00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401a7ff0, FUN_140769500
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401a7e00(longlong param_1)

{
  byte *pbVar1;
  float fVar2;
  undefined1 auVar3 [16];
  char cVar4;
  byte bVar5;
  longlong lVar6;
  ulonglong uVar7;
  float fVar8;
  undefined1 auVar9 [64];
  float fVar10;
  float fVar11;
  
  *(undefined2 *)(param_1 + 0xe4) = 0;
  *(undefined1 *)(param_1 + 0xe6) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  cVar4 = func_0x0001401a7fc0(*(undefined1 *)(param_1 + 0xe7),*(undefined1 *)(param_1 + 0xe8));
  if ((((cVar4 == '\0') && (cVar4 = FUN_1401a7ff0(), cVar4 != '\0')) &&
      (cVar4 = func_0x0001401a7fd0(*(undefined4 *)(param_1 + 0xe0)), cVar4 == '\0')) &&
     (*(longlong *)(param_1 + 8) != 0)) {
    lVar6 = func_0x000144da6540(*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x9c));
    if ((lVar6 == 0) || (*(longlong *)(lVar6 + 0x10d8) == 0)) {
      bVar5 = 0;
    }
    else {
      bVar5 = FUN_140769500();
    }
    auVar9 = ZEXT1264(ZEXT812(0));
    if (*(short *)(param_1 + 0x28) != 0) {
      fVar10 = 0.0;
      uVar7 = 0;
      fVar11 = _DAT_145fc6ed8;
      do {
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x20) + uVar7 * 8);
        if ((~bVar5 & (*(byte *)(lVar6 + 0x92) & 0x40) == 0) == 0) {
          if ((*(uint *)(lVar6 + 0x8c) < 0x10) ||
             (((*(byte *)(lVar6 + 0x92) & 0xc) == 4 && (*(int *)(lVar6 + 0x6c) != 0)))) {
            auVar3 = vmaxss_avx(auVar9._0_16_,ZEXT416(*(uint *)(lVar6 + 0x3c)));
            auVar9 = ZEXT1664(auVar3);
          }
          fVar2 = *(float *)(param_1 + 0xb4);
          fVar8 = auVar9._0_4_;
          if (((fVar11 <= fVar2) || (fVar8 < fVar11)) ||
             ((*(float *)(lVar6 + 0x3c) == 0.0 && (!NAN(*(float *)(lVar6 + 0x3c)))))) {
            if ((((fVar2 != fVar10) || (NAN(fVar2) || NAN(fVar10))) ||
                ((*(byte *)(lVar6 + 0x93) & 4) == 0)) || (fVar8 <= fVar10)) {
              if (((fVar2 == fVar10) && (!NAN(fVar2) && !NAN(fVar10))) &&
                 ((*(byte *)(lVar6 + 0x93) & 8) != 0)) {
                if ((fVar8 == fVar10) && (!NAN(fVar8) && !NAN(fVar10))) {
                  func_0x0001440f8a40(param_1);
                  pbVar1 = (byte *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + uVar7 * 8) + 0x93)
                  ;
                  *pbVar1 = *pbVar1 & 0xf7;
                }
              }
            }
            else {
              func_0x0001440f8a00(param_1);
              pbVar1 = (byte *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + uVar7 * 8) + 0x93);
              *pbVar1 = *pbVar1 & 0xfb;
            }
          }
          else {
            func_0x0001456aabc0(param_1);
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(ushort *)(param_1 + 0x28));
    }
    *(int *)(param_1 + 0xb4) = auVar9._0_4_;
  }
  return;
}

