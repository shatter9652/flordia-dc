// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400027a0  size: 301 bytes
// Name:    FUN_1400027a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141159950, FUN_1456a2130, FUN_141159e50, FUN_144ead9e0, FUN_141159e20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1400027a0(longlong param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if (*(char *)(param_1 + 0xd8) == '\0') {
    cVar2 = FUN_141159950(param_1);
    iVar1 = _DAT_14abbef40;
    if (cVar2 != '\0') {
      *(int *)(param_1 + 200) = _DAT_14abbef40;
      lVar4 = *(longlong *)(param_1 + 0xb0);
      *(int *)(param_1 + 0xcc) = (int)(longlong)(*(float *)(lVar4 + 0x44) * _DAT_146159c28) + iVar1;
      *(undefined1 *)(param_1 + 0xd8) = 1;
      if (*(char *)(lVar4 + 0x6c) == '\0') {
        auVar7._4_4_ = _DAT_145fc6f70;
        auVar7._0_4_ = _DAT_145fc6f70;
        auVar7._8_4_ = _DAT_145fc6f70;
        auVar7._12_4_ = _DAT_145fc6f70;
        auVar6._0_4_ = _DAT_145fc6f4c & *(uint *)(param_1 + 0x50);
        auVar6._4_4_ = _DAT_145fc6f4c & *(uint *)(param_1 + 0x54);
        auVar6._8_4_ = _DAT_145fc6f4c & *(uint *)(param_1 + 0x58);
        auVar6._12_4_ = _DAT_145fc6f4c & *(uint *)(param_1 + 0x5c);
        auVar6 = vcmpps_avx(auVar6,auVar7,0x11);
        uVar3 = vmovmskps_avx(auVar6);
        if (((~(byte)uVar3 & 7) != 0) &&
           ((*(char *)(lVar4 + 0x69) != '\0' || (*(char *)(lVar4 + 0x6a) == '\x01')))) {
          uStack_48 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + 0x70);
          uStack_40 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + 0x78);
          func_0x000144dc3790(&uStack_48,&uStack_38);
          *(undefined8 *)(param_1 + 0x50) = uStack_38;
          *(undefined8 *)(param_1 + 0x58) = uStack_30;
        }
      }
      if (*(char *)(lVar4 + 0x58) == '\x01') {
        uVar5 = *(undefined8 *)(param_1 + 0xb8);
        lVar4 = FUN_141159e50(uVar5);
        cVar2 = FUN_144ead9e0(*(undefined4 *)(*(longlong *)(lVar4 + 0x20) + 0x264));
        if (cVar2 != '\0') {
          uVar5 = FUN_141159e20(uVar5);
          func_0x000141262550(uVar5,0,0);
        }
      }
    }
  }
  else {
    cVar2 = FUN_1456a2130(param_1);
    if (cVar2 != '\0') {
      *(undefined1 *)(param_1 + 0xd8) = 0;
    }
  }
  return *(undefined1 *)(param_1 + 0xd8);
}

