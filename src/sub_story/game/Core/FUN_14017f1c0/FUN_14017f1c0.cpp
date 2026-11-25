// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14017f1c0  size: 223 bytes
// Name:    FUN_14017f1c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_14017f1c0(longlong param_1,longlong param_2,undefined1 (*param_3) [16],
                       longlong param_4,float param_5)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  char cVar3;
  ushort uVar4;
  ushort uVar5;
  undefined8 unaff_RSI;
  ulonglong uVar6;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auStack_38 [16];
  undefined7 uVar7;
  
  uVar1 = *(ushort *)(param_1 + 0x20);
  uVar7 = (undefined7)((ulonglong)unaff_RSI >> 8);
  uVar6 = CONCAT71(uVar7,1);
  if (uVar1 != 0) {
    param_5 = param_5 * *(float *)(param_1 + 0x1c);
    if ((param_5 != 0.0) || (NAN(param_5))) {
      auStack_38 = *param_3;
      auVar9._0_12_ = ZEXT812(0);
      auVar9._12_4_ = 0;
      auVar2 = vsubps_avx(*(undefined1 (*) [16])(param_4 + 0xf0),auStack_38);
      auVar8._0_4_ = auVar2._0_4_ * auVar2._0_4_;
      auVar8._4_4_ = auVar2._4_4_ * auVar2._4_4_;
      auVar8._8_4_ = auVar2._8_4_ * auVar2._8_4_;
      auVar8._12_4_ = auVar2._12_4_ * auVar2._12_4_;
      auVar2 = vblendps_avx(auVar8,auVar9,8);
      auVar2 = vhaddps_avx(auVar2,auVar2);
      auVar2 = vhaddps_avx(auVar2,auVar2);
      if ((auVar2._0_4_ < param_5 * param_5) &&
         ((*(char *)(param_1 + 0x24) != '\x01' ||
          (cVar3 = func_0x000144da2150(param_4,auStack_38), cVar3 != '\0')))) {
        if (*(ushort *)(param_2 + 8) == 0xffff) {
          uVar5 = *(ushort *)(param_1 + 0x22);
          do {
            uVar4 = uVar5;
            if (uVar1 <= uVar4) {
              uVar6 = 0;
              goto LAB_14017f1d5;
            }
            LOCK();
            uVar5 = *(ushort *)(param_1 + 0x22);
            if (uVar4 == uVar5) {
              *(ushort *)(param_1 + 0x22) = uVar4 + 1;
              uVar5 = uVar4;
            }
            UNLOCK();
          } while (uVar4 != uVar5);
          *(ushort *)(param_2 + 8) = uVar4;
        }
        else {
          uVar6 = CONCAT71(uVar7,*(ushort *)(param_2 + 8) < uVar1);
        }
      }
    }
  }
LAB_14017f1d5:
  return uVar6 & 0xffffffff;
}

