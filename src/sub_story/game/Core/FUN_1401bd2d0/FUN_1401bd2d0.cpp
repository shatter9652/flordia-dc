// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401bd2d0  size: 947 bytes
// Name:    FUN_1401bd2d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145647140, FUN_145080170, FUN_145080420
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1401bd2d0(longlong param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined1 auVar16 [16];
  undefined1 auVar17 [64];
  longlong alStackX_8 [3];
  undefined1 auStackX_20 [8];
  undefined8 uStack_48;
  
  uStack_48 = 0x1401bd2e6;
  lVar7 = FUN_145647140();
  lVar7 = -lVar7;
  *(undefined8 *)(&stack0x00004450 + lVar7) = unaff_XMM6_Qa;
  *(undefined8 *)(&stack0x00004458 + lVar7) = unaff_XMM6_Qb;
  uVar12 = 0;
  *(undefined8 *)(&stack0x000002b8 + lVar7) = 0;
  (&stack0x000002c5)[lVar7] = 0;
  *(undefined8 *)(&stack0x000001c8 + lVar7) = 0;
  (&stack0x000001d5)[lVar7] = 0;
  *(undefined1 (*) [32])(&stack0x00000290 + lVar7) = ZEXT1232(ZEXT812(0));
  *(undefined4 *)(&stack0x000002b0 + lVar7) = 0;
  *(undefined1 (*) [32])(&stack0x000001a0 + lVar7) = ZEXT1232(ZEXT812(0));
  *(undefined4 *)(&stack0x000001c0 + lVar7) = 0;
  lVar2 = *(longlong *)(param_1 + 0x140);
  if (lVar2 != 0) {
    auVar15._4_4_ = _DAT_145fc6f70;
    auVar15._0_4_ = _DAT_145fc6f70;
    auVar15._8_4_ = _DAT_145fc6f70;
    auVar15._12_4_ = _DAT_145fc6f70;
    lVar3 = *(longlong *)(&stack0x000044d8 + lVar7);
    uVar4 = *(undefined8 *)(&stack0x000044d0 + lVar7);
    auVar13._0_4_ = _DAT_145fc6f4c & *(uint *)(param_2 + 0x88);
    auVar13._4_4_ = _DAT_145fc6f4c & *(uint *)((longlong)param_2 + 0x444);
    auVar13._8_4_ = _DAT_145fc6f4c & *(uint *)(param_2 + 0x89);
    auVar13._12_4_ = _DAT_145fc6f4c & *(uint *)((longlong)param_2 + 0x44c);
    auVar13 = vcmpps_avx(auVar13,auVar15,0x11);
    uVar9 = vmovmskps_avx(auVar13);
    lVar5 = param_2[0x8e];
    lVar6 = param_2[0x8f];
    *(longlong *)((longlong)alStackX_8 + lVar7) = param_4 + 0x90;
    *(longlong *)((longlong)alStackX_8 + lVar7 + 8) = param_4 + 0xd0;
    *(undefined1 **)(auStackX_20 + lVar7 + -0x20) = &stack0x000003a0 + lVar7;
    plVar11 = param_2 + 0x88;
    if ((~(byte)uVar9 & 7) != 0) {
      plVar11 = (longlong *)0x0;
    }
    *(longlong *)(&stack0xfffffffffffffff8 + lVar7) = param_3 + 0xd0;
    *(longlong *)(&stack0xfffffffffffffff0 + lVar7) = param_3 + 0x90;
    *(longlong *)(&stack0xffffffffffffffe8 + lVar7) = lVar5;
    *(longlong *)(&stack0xffffffffffffffe0 + lVar7) = lVar6;
    *(longlong **)((longlong)alStackX_8 + lVar7 + 0x10) = plVar11;
    *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x1401bd40b;
    FUN_145080170(&stack0x00000230 + lVar7,0,lVar2,0);
    (&stack0x000002c8)[lVar7] = *(undefined1 *)(param_1 + 0x165);
    *(int *)(&stack0x0000026c + lVar7) = (int)param_2[0x91];
    *(undefined8 *)(&stack0x000000d0 + lVar7) = 0;
    *(undefined8 *)(&stack0x000000d8 + lVar7) = 0;
    *(undefined8 *)(&stack0x000000e0 + lVar7) = 0;
    *(undefined8 *)(&stack0x000000e8 + lVar7) = 0;
    *(undefined8 *)(&stack0x000000f0 + lVar7) = 0;
    *(undefined8 *)(&stack0x000000f8 + lVar7) = 0;
    *(undefined8 *)(&stack0x00000100 + lVar7) = 0;
    *(undefined8 *)(&stack0x00000108 + lVar7) = 0;
    *(undefined4 *)(&stack0x000000d0 + lVar7) = 0x3f800000;
    *(undefined4 *)(&stack0x000000e4 + lVar7) = 0x3f800000;
    *(undefined4 *)(&stack0x000000f8 + lVar7) = 0x3f800000;
    lVar2 = *(longlong *)(lVar3 + 0x40);
    if (lVar2 == 0) {
      uVar8 = 0xffffffffffffffff;
      uVar10 = 0xffffffffffffffff;
    }
    else {
      uVar8 = *(undefined8 *)(lVar2 + 0xf8);
      uVar10 = *(undefined8 *)(lVar2 + 0x100);
    }
    auVar16._0_12_ = ZEXT812(0);
    auVar16._12_4_ = 0;
    *(longlong **)((longlong)alStackX_8 + lVar7 + 0x10) = plVar11;
    *(undefined1 (*) [16])((longlong)alStackX_8 + lVar7) = auVar16;
    *(undefined1 **)(auStackX_20 + lVar7 + -0x20) = &stack0x00000320 + lVar7;
    *(undefined8 *)(&stack0xffffffffffffffe8 + lVar7) = uVar10;
    *(undefined8 *)(&stack0xffffffffffffffe0 + lVar7) = uVar8;
    *(undefined1 **)(&stack0xfffffffffffffff8 + lVar7) = &stack0x000000d0 + lVar7;
    *(undefined1 **)(&stack0xfffffffffffffff0 + lVar7) = &stack0x000000d0 + lVar7;
    auVar17 = ZEXT1664(auVar16);
    *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x1401bd4c9;
    FUN_145080170(&stack0x00000140 + lVar7,0,uVar4,1);
    auVar14._4_4_ = _DAT_146159ef4;
    auVar14._0_4_ = _DAT_146159ef4;
    auVar14._8_4_ = _DAT_146159ef4;
    auVar14._12_4_ = _DAT_146159ef4;
    puVar1 = &stack0x00000428 + lVar7;
    auVar13 = auVar17._0_16_;
    *(undefined1 (*) [16])(auStackX_20 + lVar7) = auVar13;
    *(undefined **)(&stack0x00000098 + lVar7) = &UNK_146622c88;
    *(undefined2 *)(&stack0x00000128 + lVar7) = 0;
    *(undefined1 (*) [16])(&stack0x00000130 + lVar7) = auVar13;
    *(undefined1 **)(&stack0x00000118 + lVar7) = &stack0x00000230 + lVar7;
    *(longlong **)(&stack0x000000a0 + lVar7) = param_2;
    *(longlong *)(&stack0x000000a8 + lVar7) = param_1;
    *(longlong *)(&stack0x000000b0 + lVar7) = param_3;
    *(undefined8 *)(&stack0x000000b8 + lVar7) = uVar4;
    *(longlong *)(&stack0x000000c0 + lVar7) = lVar3;
    *(undefined1 **)(&stack0x00000120 + lVar7) = &stack0x00000140 + lVar7;
    *(undefined4 *)(&stack0x000000c8 + lVar7) = 0xffff;
    *(undefined8 *)(&stack0x00004448 + lVar7) = 0;
    (&stack0x00004440)[lVar7] = 0;
    *(undefined1 **)(&stack0x00004430 + lVar7) = puVar1;
    *(undefined1 **)(&stack0x00004438 + lVar7) = &stack0x00004428 + lVar7;
    *(undefined1 **)(&stack0x00004428 + lVar7) = puVar1;
    *(longlong *)(&stack0x00000030 + lVar7) = _DAT_14a95dee0 + 0x130;
    *(undefined1 (*) [16])(&stack0x00000038 + lVar7) = auVar13;
    *(undefined8 *)(&stack0x00000048 + lVar7) = 0;
    *(undefined1 **)(&stack0x00000050 + lVar7) = puVar1;
    *(undefined1 **)(&stack0x00000058 + lVar7) = &stack0x00000118 + lVar7;
    *(undefined4 *)(&stack0x00000068 + lVar7) = 1;
    *(undefined1 (*) [16])(&stack0x00000070 + lVar7) = auVar14;
    *(undefined4 *)(&stack0x00000080 + lVar7) = 0xffffffff;
    *(undefined2 *)(&stack0x0000008a + lVar7) = 0;
    (&stack0x00000087)[lVar7] = 1;
    *(undefined2 *)(&stack0x00000084 + lVar7) = 1;
    (&stack0x0000008c)[lVar7] = 0;
    lVar2 = *param_2;
    if ((*(char *)(lVar2 + 0x1e) == '\x03') && (*(char *)(lVar2 + 0x166) == '\x01')) {
      (&stack0x00000084)[lVar7] = 0;
    }
    if ((*(short *)(lVar2 + 0x18) == 0) || ((*(byte *)(lVar2 + 0x1f) & 7) == 6)) {
      (&stack0x00000085)[lVar7] = 1;
    }
    (&stack0x00000086)[lVar7] = 0;
    (&stack0x00000088)[lVar7] = (*(byte *)(param_1 + 0x1f) & 0x20) == 0;
    (&stack0x00000089)[lVar7] = 0;
    *(undefined1 **)(&stack0x00000060 + lVar7) = &stack0x00000098 + lVar7;
    *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x1401bd61e;
    FUN_145080420(auStackX_20 + lVar7,0,0);
    uVar12 = CONCAT71((int7)((ulonglong)uVar4 >> 8),(&stack0x000000cb)[lVar7]);
    if (((&stack0x00004440)[lVar7] == '\x01') && (*(longlong *)(&stack0x00004430 + lVar7) != 0)) {
      *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x1401bd674;
      func_0x000144d9c130();
    }
  }
  return uVar12 & 0xffffffff;
}

