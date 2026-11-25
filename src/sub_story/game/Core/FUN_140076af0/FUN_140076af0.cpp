// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140076af0  size: 155 bytes
// Name:    FUN_140076af0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140076140
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140076af0(longlong param_1,ulonglong param_2,undefined1 (*param_3) [16])

{
  longlong lVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  
  auVar4._4_4_ = _DAT_145fc6ed8;
  auVar4._0_4_ = _DAT_145fc6ed8;
  auVar4._8_4_ = _DAT_145fc6ed8;
  auVar4._12_4_ = _DAT_145fc6ed8;
  lVar1 = *(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) + 0x28 +
           (ulonglong)((uint)(ushort)(*(short *)(param_1 + 0x20) + (short)param_2) * 0x50));
  if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x70) + (param_2 & 0xffff) * 8) ==
      lVar1) {
    auVar4 = vcmpps_avx(auVar4,*param_3,0);
    uVar2 = vmovmskps_avx(auVar4);
    if (((byte)uVar2 & 7) == 7) {
      return;
    }
  }
  plVar3 = (longlong *)FUN_140076140(*(longlong *)(param_1 + 8),param_2,lVar1);
  (**(code **)(*plVar3 + 0x80))(plVar3,lVar1);
  return;
}

