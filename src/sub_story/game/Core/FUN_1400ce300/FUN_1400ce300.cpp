// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ce300  size: 181 bytes
// Name:    FUN_1400ce300
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400ce300(longlong *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  ulonglong uVar5;
  float fVar6;
  undefined1 auVar7 [64];
  
  if (((param_1 != (longlong *)0x0) && ((int)param_1[4] == 4)) &&
     (*(ushort *)((longlong)param_1 + 0x1e) != 0)) {
    auVar7 = ZEXT464((uint)_DAT_145fc6f50);
    lVar2 = *param_1;
    lVar4 = 0;
    do {
      uVar1 = *(uint *)(lVar2 + 0x20 + lVar4);
      uVar5 = (ulonglong)((uVar1 & 0xffff) << 4);
      if (((*(short *)(*(longlong *)(_DAT_14abbf348 + 0x28) + 8 + uVar5) == (short)(uVar1 >> 0x10))
          && (*(longlong *)(uVar5 + *(longlong *)(_DAT_14abbf348 + 0x28)) != 0)) &&
         (*(float *)(lVar2 + 0x38 + lVar4) < _DAT_1461706f0)) {
        auVar3 = vminss_avx(auVar7._0_16_,ZEXT416(*(uint *)(lVar2 + 8 + lVar4)));
        auVar7 = ZEXT1664(auVar3);
      }
      lVar4 = lVar4 + 0x40;
    } while ((ulonglong)*(ushort *)((longlong)param_1 + 0x1e) * 0x40 != lVar4);
    fVar6 = auVar7._0_4_;
    if ((fVar6 != _DAT_145fc6f50) || (NAN(fVar6) || NAN(_DAT_145fc6f50))) {
      auVar3._4_4_ = fVar6;
      auVar3._0_4_ = fVar6;
      auVar3._8_4_ = fVar6;
      auVar3._12_4_ = fVar6;
      auVar3 = vblendps_avx(*(undefined1 (*) [16])(param_2 + 0x130),auVar3,4);
      *(undefined1 (*) [16])(param_2 + 0x130) = auVar3;
      *(byte *)(param_2 + 0x140) = *(byte *)(param_2 + 0x140) | 2;
    }
  }
  return;
}

