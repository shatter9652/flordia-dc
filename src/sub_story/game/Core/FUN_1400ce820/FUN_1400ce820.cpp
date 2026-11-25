// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ce820  size: 471 bytes
// Name:    FUN_1400ce820
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fe4920, FUN_144e40a00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400ce820(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined1 auVar9 [64];
  
  if (param_3 != 0) {
    cVar4 = *(char *)(param_1 + 0xe0);
    bVar3 = *(byte *)(param_2 + 0x110);
    *(byte *)(param_2 + 0x110) = bVar3 | 1;
    bVar2 = (*(char *)(param_3 + 0x30) == '\x04') * '\x02';
    *(byte *)(param_2 + 0x110) = bVar3 & 0xfd | 1 | bVar2;
    *(byte *)(param_2 + 0x110) =
         bVar3 & 0xed | 1 | bVar2 | (*(char *)(param_3 + 0x30) == '\x03') << 4;
    *(byte *)(param_1 + 0x141) =
         *(byte *)(param_1 + 0x141) & 0xef |
         (*(char *)(param_3 + 0x30) == '\x03' && cVar4 != '\x03') << 4;
    uVar1 = *(undefined4 *)(param_3 + 0x9c);
    if (((*(char *)(param_3 + 0x30) != '\x03') || (lVar5 = func_0x0001450f21c0(uVar1), lVar5 == 0))
       || (bVar3 = func_0x000144ead4e0(*(undefined8 *)(lVar5 + 8),*(undefined8 *)(lVar5 + 0x28)),
          (byte)(bVar3 ^ 1 | cVar4 != '\x03') == 1)) {
      lVar5 = func_0x000144dd1230(uVar1);
      if (lVar5 == 0) {
        bVar3 = 0;
      }
      else if ((*(byte *)(lVar5 + 0x10) & 1) == 0) {
        bVar3 = *(byte *)(lVar5 + 0x10) * '\x02' & 4;
      }
      else {
        bVar3 = 4;
      }
      *(byte *)(param_2 + 0x110) = *(byte *)(param_2 + 0x110) | bVar3;
      lVar5 = func_0x0001450bb780(*(undefined4 *)(param_3 + 0x9c));
      if (lVar5 != 0) {
        FUN_144e40a00(lVar5,&fStack_48);
        auVar8._0_12_ = ZEXT812(0);
        auVar8._12_4_ = 0;
        auVar9 = ZEXT1664(auVar8);
        auVar6._0_4_ = fStack_48 * fStack_48;
        auVar6._4_4_ = fStack_44 * fStack_44;
        auVar6._8_4_ = fStack_40 * fStack_40;
        auVar6._12_4_ = fStack_3c * fStack_3c;
        auVar6 = vblendps_avx(auVar6,auVar8,8);
        auVar6 = vhaddps_avx(auVar6,auVar6);
        auVar6 = vhaddps_avx(auVar6,auVar6);
        if (_DAT_145fc6f78 < auVar6._0_4_) {
          bVar3 = 4;
        }
        else {
          FUN_144fe4920(lVar5,&fStack_58);
          auVar7._0_4_ = fStack_58 * fStack_58;
          auVar7._4_4_ = fStack_54 * fStack_54;
          auVar7._8_4_ = fStack_50 * fStack_50;
          auVar7._12_4_ = fStack_4c * fStack_4c;
          auVar6 = vblendps_avx(auVar7,auVar9._0_16_,8);
          auVar6 = vhaddps_avx(auVar6,auVar6);
          auVar6 = vhaddps_avx(auVar6,auVar6);
          bVar3 = (_DAT_145fc6f78 < auVar6._0_4_) << 2;
        }
        *(byte *)(param_2 + 0x110) = *(byte *)(param_2 + 0x110) | bVar3;
      }
      if (*(longlong *)(param_3 + 0x20) != 0) {
        cVar4 = func_0x000140c416c0();
        *(byte *)(param_2 + 0x110) = *(byte *)(param_2 + 0x110) & 0xf7 | cVar4 << 3;
      }
    }
  }
  return;
}

