// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140125ba0  size: 2915 bytes
// Name:    FUN_140125ba0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140b39840, FUN_14031a7f0, FUN_1452b8c20, FUN_144dbce00, FUN_1402aacf0, FUN_141f8e960, FUN_145003f30, FUN_1425f3220, FUN_14517a290, FUN_1454793f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140125ba0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  byte *pbVar2;
  undefined8 uVar3;
  short sVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 uVar12;
  ushort uVar13;
  char cVar14;
  longlong *plVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  longlong lVar18;
  byte bVar19;
  ulonglong uVar20;
  uint uVar21;
  longlong lVar22;
  uint uVar23;
  byte *pbVar24;
  longlong *plVar25;
  longlong unaff_GS_OFFSET;
  undefined1 auVar26 [12];
  undefined1 extraout_var_00 [56];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [64];
  undefined1 auVar30 [64];
  ushort in_stack_fffffffffffffeb8;
  undefined4 uStack_fe;
  undefined2 uStack_fa;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  float fStack_d4;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [6];
  undefined1 auStack_c2 [26];
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined1 auStack_9c [32];
  undefined4 uStack_7c;
  undefined1 extraout_var [56];
  
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  cVar14 = DAT_14a9583d8;
  lVar22 = **(longlong **)(unaff_GS_OFFSET + 0x58);
  lVar18 = *(longlong *)(lVar22 + 0x12a8);
  if (*(char *)(lVar18 + 0x1236c) != DAT_14a9583d8) {
    *(char *)(lVar18 + 0x1236c) = DAT_14a9583d8;
    *(ulonglong *)(lVar18 + 0x12520) =
         (ulonglong)(*(char *)(lVar18 + 0x123ec) != cVar14) << 0x13 |
         *(ulonglong *)(lVar18 + 0x12520) & 0xfffffffffff7ffff;
  }
  plVar1 = (longlong *)(lVar22 + 0x12a8);
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    lVar18 = *plVar1;
  }
  sVar4 = _DAT_149dd6f40;
  if (*(short *)(lVar18 + 0x1236e) != _DAT_149dd6f40) {
    *(short *)(lVar18 + 0x1236e) = _DAT_149dd6f40;
    *(ulonglong *)(lVar18 + 0x12520) =
         (ulonglong)(*(short *)(lVar18 + 0x123ee) != sVar4) << 0x14 |
         *(ulonglong *)(lVar18 + 0x12520) & 0xffffffffffefffff;
  }
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    lVar18 = *plVar1;
  }
  if (*(short *)(lVar18 + 0x12378) != _DAT_149ab399c) {
    *(short *)(lVar18 + 0x12378) = _DAT_149ab399c;
    *(byte *)(lVar18 + 0x12522) = *(byte *)(lVar18 + 0x12522) | 0x20;
  }
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    lVar18 = *plVar1;
  }
  lVar22 = *(longlong *)(param_1 + 8);
  if ((ushort)(*(short *)(lVar22 + 0x12) - 1U) < _DAT_14a943ab8) {
    auStack_c8._4_2_ = *(undefined2 *)(param_1 + 0x1c);
    auStack_c8._0_4_ = *(undefined4 *)(param_1 + 0x18);
    *(undefined1 *)(lVar18 + 0x121a4) = 1;
    in_stack_fffffffffffffeb8 = 0x103;
    FUN_144dbce00(lVar18,0,lVar22,auStack_c8,0x103);
  }
  if (param_2 == 0) {
    param_2 = FUN_14031a7f0(0);
  }
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  _auStack_c8 = param_2;
  FUN_1452b8c20(*plVar1,param_2 != 0,auStack_c8,0,in_stack_fffffffffffffeb8 & 0xff00,0,0,0);
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    plVar25 = (longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12b8);
    lVar22 = *plVar25;
    if (*(char *)((*(longlong **)(unaff_GS_OFFSET + 0x58))[__tls_index] + 8) != '\0')
    goto LAB_140125e20;
    func_0x0001455db994();
    lVar18 = *plVar25;
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) != '\0') {
      plVar15 = *(longlong **)(unaff_GS_OFFSET + 0x58);
      goto LAB_140125e2c;
    }
    func_0x0001455db994();
    pbVar24 = (byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1110);
    bVar19 = *pbVar24;
    if (*(char *)((*(longlong **)(unaff_GS_OFFSET + 0x58))[__tls_index] + 8) == '\0') {
      func_0x0001455db994();
    }
  }
  else {
    plVar25 = (longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12b8);
    lVar22 = *plVar25;
LAB_140125e20:
    plVar15 = *(longlong **)(unaff_GS_OFFSET + 0x58);
    lVar18 = lVar22;
LAB_140125e2c:
    pbVar24 = (byte *)(*plVar15 + 0x1110);
    bVar19 = *pbVar24;
  }
  pbVar2 = (byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1294);
  if (lVar22 != *(longlong *)
                 ((ulonglong)(((uint)*pbVar2 + ((bVar19 + 1) - (uint)(lVar18 == 0))) * 8) +
                 0x1487669c0)) {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
      lVar18 = *plVar25;
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) !=
          '\0') goto LAB_140125ec2;
      func_0x0001455db994();
      bVar19 = *pbVar24;
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
    }
    else {
      lVar18 = *plVar25;
LAB_140125ec2:
      bVar19 = *pbVar24;
    }
    FUN_145003f30(*(undefined8 *)
                   ((ulonglong)(((uint)*pbVar2 + ((bVar19 + 1) - (uint)(lVar18 == 0))) * 8) +
                   0x1487669c0),1);
  }
  cVar14 = func_0x000144fd22c0();
  if (cVar14 == '\0') {
    lVar18 = *(longlong *)(param_1 + 8);
    if (lVar18 != 0) {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      uVar13 = _DAT_148fdc502;
      if (_DAT_148fdc502 != 0) {
        lVar6 = *plVar1;
        uVar20 = (ulonglong)(_DAT_148fdc502 >> 2);
        if (*(longlong *)(lVar6 + 0x40 + uVar20 * 8) != *(longlong *)(lVar18 + 0x28)) {
          *(longlong *)(lVar6 + 0x40 + uVar20 * 8) = *(longlong *)(lVar18 + 0x28);
          *(ulonglong *)(lVar6 + 0x20) = *(ulonglong *)(lVar6 + 0x20) | 1L << ((byte)uVar13 & 3);
          func_0x000144d9dcb0(lVar6,uVar13,0);
          *(undefined2 *)(lVar6 + 0x6200 + uVar20 * 2) = 0;
        }
      }
    }
    uVar8 = DAT_148fdc501;
    uVar12 = DAT_148fdc500;
    uVar3 = _DAT_148fdc4f8;
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    if (lVar18 == 0) {
      uVar8 = uVar12;
    }
    auVar29._0_8_ = FUN_1454793f0(uVar3,*plVar1,uVar8,0);
    auVar29._8_56_ = extraout_var;
    auVar26 = auVar29._4_12_;
    bVar19 = *(byte *)(param_2 + 0x12) >> 1 & 0xf;
    uVar21 = (uint)(*(ushort *)(*(longlong *)(param_2 + 8) + 0x3a) >> bVar19);
    uVar23 = (uint)(*(ushort *)(*(longlong *)(param_2 + 8) + 0x38) >> bVar19);
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      auVar30._0_8_ = func_0x0001455db994();
      auVar30._8_56_ = extraout_var_00;
      auVar26 = auVar30._4_12_;
    }
    lVar18 = *plVar1;
    if (*(longlong *)(lVar18 + 0x12320) != _DAT_149dd6f38) {
      *(longlong *)(lVar18 + 0x12320) = _DAT_149dd6f38;
      *(byte *)(lVar18 + 0x12522) = *(byte *)(lVar18 + 0x12522) | 0x80;
    }
    auVar29 = ZEXT1664(CONCAT124(auVar26,(float)(uVar21 + (uVar21 == 0))));
    auVar30 = ZEXT1664(CONCAT124(auVar26,(float)(uVar23 + (uVar23 == 0))));
    if (*(char *)(lVar18 + 0x1237d) != '\x11') {
      *(undefined1 *)(lVar18 + 0x1237d) = 0x11;
      *(ulonglong *)(lVar18 + 0x12520) =
           (ulonglong)(*(char *)(lVar18 + 0x123fd) != '\x11') << 0x12 |
           *(ulonglong *)(lVar18 + 0x12520) & 0xfffffffffffbffff;
    }
    uVar20 = (ulonglong)*(uint *)(lVar18 + 0x12190);
    *(undefined4 *)(uVar20 * 4 + 0x149ab3b80) = 1;
    *(undefined4 *)(uVar20 * 4 + 0x149ab3be0) = 3;
    *(undefined4 *)(lVar18 + 0x12530) = 1;
    uVar17 = FUN_14517a290(lVar18,3,0x18,uVar20 * 4 + 0x149ab3bb0);
    uVar3 = _DAT_146159bc0;
    auVar27._4_4_ = _DAT_145fc6ed8;
    auVar27._0_4_ = _DAT_145fc6ed8;
    auVar27._8_4_ = _DAT_145fc6ed8;
    auVar27._12_4_ = _DAT_145fc6ed8;
    *(undefined8 *)(uVar20 * 8 + 0x149ab3c10) = uVar17;
    uVar21 = *(uint *)(lVar18 + 0x12190);
    puVar7 = *(undefined8 **)((ulonglong)uVar21 * 8 + 0x149ab3c10);
    *puVar7 = 0;
    puVar7[1] = 0xffffffff00000000;
    puVar7[2] = 0;
    *(undefined4 *)(puVar7 + 3) = 0;
    *(int *)((longlong)puVar7 + 0x1c) = auVar29._0_4_;
    puVar7[4] = 0xffffffff00000000;
    puVar7[5] = uVar3;
    *(undefined8 **)((ulonglong)uVar21 * 8 + 0x149ab3c10) = puVar7 + 9;
    *(int *)(puVar7 + 6) = auVar30._0_4_;
    *(int *)((longlong)puVar7 + 0x34) = auVar29._0_4_;
    puVar7[7] = 0xffffffff00000000;
    uVar3 = vmovlps_avx(auVar27);
    puVar7[8] = uVar3;
    FUN_1402aacf0(lVar18);
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    lVar18 = *plVar1;
    if ((*(longlong *)(lVar18 + 0x12748) != 0) &&
       (bVar19 = *(byte *)(*(longlong *)(lVar18 + 0x12748) + 10), (bVar19 & 0xf) != 0)) {
      if (((bVar19 & 1) != 0) &&
         (cVar14 = *(char *)(lVar18 + 0x12750), *(char *)(lVar18 + 0x1236c) != cVar14)) {
        *(char *)(lVar18 + 0x1236c) = cVar14;
        if (*(char *)(lVar18 + 0x123ec) == cVar14) {
          uVar20 = *(ulonglong *)(lVar18 + 0x12520) & 0xfffffffffff7ffff;
        }
        else {
          uVar20 = *(ulonglong *)(lVar18 + 0x12520) | 0x80000;
        }
        *(ulonglong *)(lVar18 + 0x12520) = uVar20;
      }
      if (((bVar19 & 2) != 0) &&
         (sVar4 = *(short *)(lVar18 + 0x12752), *(short *)(lVar18 + 0x1236e) != sVar4)) {
        *(short *)(lVar18 + 0x1236e) = sVar4;
        if (*(short *)(lVar18 + 0x123ee) == sVar4) {
          uVar20 = *(ulonglong *)(lVar18 + 0x12520) & 0xffffffffffefffff;
        }
        else {
          uVar20 = *(ulonglong *)(lVar18 + 0x12520) | 0x100000;
        }
        *(ulonglong *)(lVar18 + 0x12520) = uVar20;
      }
      if (((bVar19 & 8) != 0) &&
         (iVar5 = *(int *)(lVar18 + 0x12758), *(int *)(lVar18 + 0x12368) != iVar5)) {
        *(int *)(lVar18 + 0x12368) = iVar5;
        if (*(int *)(lVar18 + 0x123e8) == iVar5) {
          uVar20 = *(ulonglong *)(lVar18 + 0x12520) & 0xfffffffffdffffff;
        }
        else {
          uVar20 = *(ulonglong *)(lVar18 + 0x12520) | 0x2000000;
        }
        *(ulonglong *)(lVar18 + 0x12520) = uVar20;
      }
      if (((bVar19 & 4) != 0) && (*(short *)(lVar18 + 0x12378) != *(short *)(lVar18 + 0x12754))) {
        *(short *)(lVar18 + 0x12378) = *(short *)(lVar18 + 0x12754);
        *(byte *)(lVar18 + 0x12522) = *(byte *)(lVar18 + 0x12522) | 0x20;
      }
    }
    *(undefined8 *)(lVar18 + 0x12748) = 0;
  }
  else {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    func_0x00014011f850(*plVar1);
    FUN_1425f3220(&uStack_e8);
    uStack_d8 = func_0x0001425f32d0();
    auVar28._4_4_ = _DAT_145fc6ed8;
    auVar28._0_4_ = _DAT_145fc6ed8;
    auVar28._8_4_ = _DAT_145fc6ed8;
    auVar28._12_4_ = _DAT_145fc6ed8;
    _auStack_c8 = ZEXT1232(ZEXT812(0));
    fStack_d4 = (float)(int)DAT_149162ca6;
    uStack_a8 = vmovlps_avx(auVar28);
    uStack_a0 = 0x3f800000;
    uStack_7c = 0;
    uStack_d0 = 0;
    uStack_f8 = uStack_e8;
    uStack_f0 = uStack_e0;
    auVar29 = ZEXT1664(auVar28);
    auStack_9c = _auStack_c8;
    func_0x0001425d7680();
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    lVar18 = *(longlong *)(param_1 + 8);
    if ((ushort)(*(short *)(lVar18 + 0x12) - 1U) < _DAT_14a943ab8) {
      lVar6 = *plVar1;
      *(undefined1 *)(lVar6 + 0x121a4) = 1;
      uStack_fe = 0xffffffff;
      uStack_fa = 0xffff;
      FUN_144dbce00(lVar6,0,lVar18,&uStack_fe,0x103);
      lVar18 = *(longlong *)(param_1 + 8);
    }
    FUN_140b39840(auStack_c8,5,*(undefined8 *)(lVar18 + 0x28));
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    lVar18 = *plVar1;
    if (*(longlong *)(lVar18 + 0x12320) != _DAT_149dd6f38) {
      *(longlong *)(lVar18 + 0x12320) = _DAT_149dd6f38;
      *(byte *)(lVar18 + 0x12522) = *(byte *)(lVar18 + 0x12522) | 0x80;
    }
    if (*(char *)(lVar18 + 0x1237d) != '\x11') {
      *(undefined1 *)(lVar18 + 0x1237d) = 0x11;
      *(ulonglong *)(lVar18 + 0x12520) =
           (ulonglong)(*(char *)(lVar18 + 0x123fd) != '\x11') << 0x12 |
           *(ulonglong *)(lVar18 + 0x12520) & 0xfffffffffffbffff;
    }
    uVar20 = (ulonglong)*(uint *)(lVar18 + 0x12190);
    *(undefined4 *)(uVar20 * 4 + 0x149ab3b80) = 1;
    *(undefined4 *)(uVar20 * 4 + 0x149ab3be0) = 3;
    *(undefined4 *)(lVar18 + 0x12530) = 1;
    uVar16 = FUN_14517a290(lVar18,3,0x18,uVar20 * 4 + 0x149ab3bb0);
    uVar11 = _UNK_14615a128;
    uVar10 = _DAT_14615a120;
    uVar9 = _UNK_14615a118;
    uVar17 = _DAT_14615a110;
    uVar3 = _DAT_14615a100;
    *(undefined8 *)(uVar20 * 8 + 0x149ab3c10) = uVar16;
    uVar21 = *(uint *)(lVar18 + 0x12190);
    puVar7 = *(undefined8 **)((ulonglong)uVar21 * 8 + 0x149ab3c10);
    *puVar7 = uVar3;
    puVar7[1] = 0xffffffff00000000;
    puVar7[2] = uVar17;
    puVar7[3] = uVar9;
    puVar7[4] = 0xffffffff00000000;
    *(undefined8 **)((ulonglong)uVar21 * 8 + 0x149ab3c10) = puVar7 + 9;
    puVar7[5] = uVar10;
    puVar7[6] = uVar11;
    puVar7[7] = 0xffffffff00000000;
    uVar3 = vmovlps_avx(auVar29._0_16_);
    puVar7[8] = uVar3;
    FUN_1402aacf0(lVar18);
    FUN_141f8e960(auStack_c8);
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    *(undefined1 *)(*plVar1 + 0x1237c) = 0;
  }
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    lVar18 = *plVar25;
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
      bVar19 = *pbVar24;
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      goto LAB_1401264cb;
    }
  }
  else {
    lVar18 = *plVar25;
  }
  bVar19 = *pbVar24;
LAB_1401264cb:
  if (lVar22 != *(longlong *)
                 ((ulonglong)(((uint)*pbVar2 + ((bVar19 + 1) - (uint)(lVar18 == 0))) * 8) +
                 0x1487669c0)) {
    FUN_145003f30(lVar22,1);
  }
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  if (*(char *)(*plVar1 + 0x1237c) == '\x01') {
    *(undefined1 *)(*plVar1 + 0x1237c) = 0;
  }
  return;
}

