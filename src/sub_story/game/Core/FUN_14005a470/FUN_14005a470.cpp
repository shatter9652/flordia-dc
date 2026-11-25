// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14005a470  size: 748 bytes
// Name:    FUN_14005a470
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e6b090, FUN_1451d17a0, FUN_144e3d5c0, FUN_14005a760, FUN_144e96470, FUN_1451d1b40, FUN_140755860, FUN_144dbce00, FUN_145003f30, FUN_14005a930
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14005a470(ulonglong *param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  ulonglong uVar6;
  undefined8 uVar7;
  longlong unaff_GS_OFFSET;
  undefined1 auVar8 [16];
  undefined8 in_stack_fffffffffffff818;
  undefined4 uVar11;
  undefined8 uVar9;
  undefined4 uVar12;
  ulonglong uVar10;
  uint uVar13;
  uint uVar14;
  undefined4 uStack_7c8;
  undefined2 uStack_7c4;
  undefined2 uStack_7c2;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined1 auStack_798 [16];
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined1 auStack_778 [16];
  undefined1 auStack_768 [1813];
  char cStack_53;
  
  uVar11 = (undefined4)((ulonglong)in_stack_fffffffffffff818 >> 0x20);
  uVar6 = *param_1;
  uVar12 = *(undefined4 *)((longlong)param_1 + 4);
  uVar10 = param_1[0x2f];
  uVar2 = param_1[0x15];
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  lVar3 = **(longlong **)(unaff_GS_OFFSET + 0x58);
  uVar7 = FUN_144e6b090(*(undefined8 *)(lVar3 + 0x12a8));
  uVar9 = CONCAT44(uVar11,(int)uVar6);
  FUN_14005a760(param_1,uVar7,uVar2,uVar10,uVar9,uVar12);
  uVar12 = (undefined4)((ulonglong)uVar9 >> 0x20);
  FUN_1451d17a0(auStack_768);
  uVar14 = 0x44480000;
  uVar13 = 0xc4480000;
  uVar10 = CONCAT44(uVar12,(int)param_1[5]);
  func_0x000145432060(auStack_768,(int)param_1[4],*(undefined4 *)((longlong)param_1 + 0x24),
                      *(undefined4 *)((longlong)param_1 + 0x2c),uVar10,0xc4480000,0x44480000);
  uStack_7c8 = 0;
  uStack_7c4 = 0;
  uStack_7c2 = 0;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = *param_1;
  auVar8 = vcvtdq2ps_avx(auVar8);
  auVar5._8_8_ = _UNK_146159bc8;
  auVar5._0_8_ = _DAT_146159bc0;
  auVar8 = vunpcklpd_avx(auVar8,auVar5);
  uStack_7c0 = auVar8._0_8_;
  uStack_7b8 = auVar8._8_8_;
  FUN_1451d1b40(auStack_768);
  if (cStack_53 == '\0') {
    uStack_7c8 = _DAT_145fc6ed8;
    uStack_7c4 = 0;
    uStack_7c2 = 0;
    uStack_7c0 = 0;
    uStack_7b8 = _DAT_146159bc0;
    uStack_7b0 = 0;
    uStack_7a8 = _DAT_14614f7f0;
    uStack_7a0 = _UNK_14614f7f8;
    auStack_798 = ZEXT816(0) << 0x20;
    FUN_144e3d5c0(auStack_768,&uStack_7c8,0);
  }
  cStack_53 = 1;
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  uVar7 = *(undefined8 *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12b8);
  FUN_145003f30(auStack_768,1);
  uVar2 = param_1[0x15];
  if ((uVar2 != 0) &&
     (lVar4 = *(longlong *)(uVar2 + 8), (ushort)(*(short *)(lVar4 + 0x12) - 1U) < _DAT_14a943ab8)) {
    uStack_7c4 = *(undefined2 *)(uVar2 + 0x1c);
    uStack_7c8 = *(undefined4 *)(uVar2 + 0x18);
    *(undefined1 *)(param_2 + 0x121a4) = 1;
    uVar10 = CONCAT62((int6)(uVar10 >> 0x10),0x10e);
    FUN_144dbce00(param_2,0,lVar4,&uStack_7c8,uVar10);
  }
  plVar1 = (longlong *)(lVar3 + 0x12a8);
  FUN_14005a930();
  func_0x0001452d22e0(param_2,0x18);
  uVar2 = param_1[0x15];
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  uStack_7c8 = (undefined4)uVar2;
  uStack_7c4 = (undefined2)(uVar2 >> 0x20);
  uStack_7c2 = (undefined2)(uVar2 >> 0x30);
  FUN_144e96470(*plVar1,uVar2 != 0,&uStack_7c8,0,uVar10 & 0xffffffffffffff00,uVar13 & 0xffffff00,
                uVar14 & 0xffffff00);
  uStack_788 = _DAT_147c82240;
  uStack_780 = uRam0000000147c82248;
  auStack_778 = ZEXT816(0) << 0x20;
  FUN_140755860(4,1,&UNK_140004870,_DAT_147c82238,&uStack_788);
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  lVar3 = *plVar1;
  if (*(char *)(lVar3 + 0x1237c) == '\x01') {
    *(undefined1 *)(lVar3 + 0x1237c) = 0;
  }
  func_0x000144fa7ab0(param_2);
  FUN_145003f30(uVar7,1);
  return;
}

