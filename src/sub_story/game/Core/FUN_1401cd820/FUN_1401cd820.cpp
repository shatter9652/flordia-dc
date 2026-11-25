// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401cd820  size: 191 bytes
// Name:    FUN_1401cd820
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450879c0, FUN_140686df0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1401cd820(longlong param_1)

{
  short sVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  char cVar4;
  char cVar5;
  undefined1 extraout_var [56];
  undefined1 auVar6 [16];
  undefined1 auVar8 [64];
  ulonglong uVar7;
  
  sVar1 = *(short *)(*(longlong *)(param_1 + 0x40) + 0x20);
  if ((sVar1 == 5) || (sVar1 == 9)) {
    cVar5 = FUN_1450879c0(*(undefined1 *)(param_1 + 0x7e));
    if (cVar5 == '\0') {
      uVar7 = 0;
    }
    else {
      uVar7 = (ulonglong)_DAT_14615a5c8;
    }
  }
  else {
    uVar7 = 0;
    auVar8 = ZEXT1264(ZEXT812(0));
    if ((ushort)(sVar1 - 1U) < 2) {
      cVar5 = *(char *)(*(longlong *)(param_1 + 0x50) + 0xd);
      cVar4 = FUN_1450879c0(*(undefined1 *)(param_1 + 0x7e));
      uVar7 = auVar8._0_8_;
      if ((cVar4 != '\0') && ((byte)(cVar5 - 0xcU) < 0xfb)) {
        auVar8._0_8_ = FUN_140686df0(*(undefined8 *)(param_1 + 8));
        auVar8._8_56_ = extraout_var;
        auVar6._4_4_ = _DAT_145fc6ed8;
        auVar6._0_4_ = _DAT_145fc6ed8;
        auVar6._8_4_ = _DAT_145fc6ed8;
        auVar6._12_4_ = _DAT_145fc6ed8;
        auVar3 = vminss_avx(ZEXT416(_DAT_14614f808),auVar8._0_16_);
        auVar2 = vcmpss_avx(auVar8._0_16_,ZEXT416(_DAT_145fc6ed8),1);
        auVar2 = vblendvps_avx(auVar3,auVar6,auVar2);
        auVar2 = vmaxss_avx(ZEXT416(_DAT_145fc6ed8),auVar2);
        uVar7 = (ulonglong)(uint)(auVar2._0_4_ * _DAT_146159ef0 + _DAT_14615d954);
      }
    }
  }
  return uVar7;
}

