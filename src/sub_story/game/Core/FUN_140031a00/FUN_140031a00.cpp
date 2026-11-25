// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140031a00  size: 382 bytes
// Name:    FUN_140031a00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1452a0a00, FUN_144e3d5c0, FUN_145004770
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140031a00(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  longlong unaff_GS_OFFSET;
  undefined1 auVar5 [16];
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 auStack_28 [16];
  
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  lVar2 = **(longlong **)(unaff_GS_OFFSET + 0x58);
  lVar3 = *(longlong *)(lVar2 + 0x12b8);
  if (*(char *)(lVar3 + 0x715) == '\0') {
    auStack_58 = ZEXT416(_DAT_145fc6ed8);
    uStack_48 = _DAT_146159bc0;
    uStack_40 = 0;
    uStack_38 = _DAT_14614f7f0;
    uStack_30 = _UNK_14614f7f8;
    auStack_28 = ZEXT816(0) << 0x20;
    FUN_144e3d5c0(lVar3,auStack_58,0);
  }
  *(undefined1 *)(lVar3 + 0x715) = 1;
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  lVar2 = *(longlong *)(lVar2 + 0x12b8);
  FUN_1452a0a00(lVar2,param_1);
  uVar1 = *(undefined8 *)(lVar2 + 0x720);
  auVar5._0_4_ = (float)uVar1 + _DAT_145fc6edc;
  auVar5._4_4_ = (float)((ulonglong)uVar1 >> 0x20) + _DAT_145fc6edc;
  auVar5._8_4_ = _DAT_145fc6edc + 0.0;
  auVar5._12_4_ = _DAT_145fc6edc + 0.0;
  auVar4 = vroundps_avx(auVar5,0xb);
  uVar1 = vmovlps_avx(auVar4);
  auStack_58._0_8_ = uVar1;
  FUN_145004770(auStack_58);
  (**(code **)(*param_1 + 0x110))
            (param_1,_DAT_149dd8002,
             *(undefined8 *)
              (_DAT_14a943760 + 0x29508 + (ulonglong)*(byte *)(_DAT_14a943ab0 + 1) * 0x10),
             (ulonglong)*(byte *)(_DAT_14a943760 + 0x29500) << 7,0x80);
  auVar4._12_4_ = 0;
  auVar4._0_12_ = auStack_58._4_12_;
  auStack_58 = auVar4 << 0x20;
  (**(code **)(*param_1 + 0xb8))(param_1,_DAT_149dd7ffe,auStack_58,0x10);
  return;
}

