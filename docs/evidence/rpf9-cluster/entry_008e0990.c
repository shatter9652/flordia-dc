// window.elf d53960482354c9699902d859c4c2bc8b45357d43882a00ef57046c2f70004d8f
// entry @ 008e0990 size=1878
// undefined entry()


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * processEntry entry(int param_1,undefined8 param_2,byte param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  long *plVar7;
  char cVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  byte bVar15;
  int *in_RCX;
  long lVar16;
  ulong uVar17;
  long in_RSI;
  undefined8 *in_RDI;
  int iVar18;
  undefined8 *in_R8;
  char in_R9B;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  long *plVar23;
  long *in_FS_OFFSET;
  bool bVar24;
  undefined1 auVar25 [16];
  long local_a0;
  undefined8 local_88;
  undefined1 auStack_80 [32];
  undefined1 local_60 [32];
  long local_38;
  
  local_38 = *_DAT_0a3e9fa8;
  if (*(char *)(*in_FS_OFFSET + -0xad0) == '\0') {
    lVar4 = *in_FS_OFFSET;
    *(undefined1 *)(lVar4 + -0xad0) = 1;
    *(undefined4 *)(lVar4 + -0xb90) = 0;
  }
  plVar10 = _DAT_0e7911a8;
  plVar22 = *(long **)(*in_FS_OFFSET + -0x140);
  if (*(long **)(*in_FS_OFFSET + -0x140) == (long *)0x0) {
    *(long **)(*in_FS_OFFSET + -0x140) = _DAT_0e7911a8;
    plVar22 = plVar10;
  }
  plVar10 = (long *)(**(code **)*plVar22)(plVar22,0x80,8);
  if (plVar10 == (long *)0x0) {
    func_0x00001050(0xe0edbf0);
    (**(code **)(*plVar22 + 0x30))(plVar22,0x80,8);
    pcVar6 = (code *)swi(0x41);
    (*pcVar6)();
    goto LAB_008e105b;
  }
  bVar24 = _DAT_0a3e9c40 != 0;
  auVar25._0_12_ = ZEXT812(0);
  auVar25._12_4_ = 0;
  *plVar10 = 0xa3dca50;
  plVar10[1] = in_RSI;
  *(undefined1 (*) [16])(plVar10 + 2) = auVar25;
  plVar10[4] = 0;
  *(undefined4 *)(plVar10 + 5) = 2;
  *(undefined1 (*) [32])(plVar10 + 10) = ZEXT832(0) << 0x20;
  *(undefined1 (*) [32])(plVar10 + 6) = ZEXT832(0) << 0x20;
  *(undefined1 (*) [32])((long)plVar10 + 0x5c) = ZEXT832(0) << 0x20;
  if (bVar24) {
    func_0x00000000();
  }
  if (*(long *)(*in_FS_OFFSET + -0x40) == 0) {
    bVar15 = 0;
  }
  else {
    bVar15 = *(byte *)((long)plVar10 + 0x7c) & 0xfe;
  }
  *(undefined1 *)((long)plVar10 + 0x7f) = 0;
  *(undefined2 *)((long)plVar10 + 0x7d) = 0;
  *(byte *)((long)plVar10 + 0x7c) = bVar15 | param_3;
  FUN_008d89f0(plVar10);
  if (in_RCX == (int *)0x0) {
    lVar4 = plVar10[1];
    uVar5 = *(undefined8 *)(lVar4 + 0x18);
    lVar16 = *(long *)(lVar4 + 0x20);
    plVar22 = *(long **)(lVar4 + 0x10);
    if (in_R8 == (undefined8 *)0x0) {
      iVar18 = (**(code **)(*plVar22 + 0x68))(plVar22,uVar5,lVar16,&local_88,0x10);
      if (iVar18 != 0x10) goto LAB_008e0e3f;
    }
    else {
      local_88 = *in_R8;
      auStack_80._0_8_ = in_R8[1];
    }
    if ((int)local_88 == 0x52504639) {
      iVar18 = *(int *)(auStack_80 + (ulong)(param_1 != 0) * 4 + -4);
      if (*(char *)(*in_FS_OFFSET + -0xad0) == '\0') {
        lVar4 = *in_FS_OFFSET;
        *(undefined1 *)(lVar4 + -0xad0) = 1;
        *(undefined4 *)(lVar4 + -0xb90) = 0;
      }
      plVar7 = _DAT_0e7911a8;
      plVar23 = *(long **)(*in_FS_OFFSET + -0x140);
      if (*(long **)(*in_FS_OFFSET + -0x140) == (long *)0x0) {
        *(long **)(*in_FS_OFFSET + -0x140) = _DAT_0e7911a8;
        plVar23 = plVar7;
      }
      puVar12 = (undefined8 *)(**(code **)*plVar23)(plVar23,iVar18,0x10);
      if (puVar12 == (undefined8 *)0x0) {
        func_0x00001050(0xe0edbf0);
        (**(code **)(*plVar23 + 0x30))(plVar23,iVar18,0x10);
        pcVar6 = (code *)swi(0x41);
        (*pcVar6)();
LAB_008e105b:
        func_0x00001000(0xe0edbf0);
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      plVar10[3] = (long)puVar12;
      *puVar12 = local_88;
      puVar12[1] = auStack_80._0_8_;
      iVar9 = (**(code **)(*plVar22 + 0x68))(plVar22,uVar5,lVar16 + 0x10,puVar12 + 2,iVar18 + -0x10)
      ;
      if (iVar9 == iVar18 + -0x10) {
        if (param_1 == 1) {
          uVar17 = (ulong)(uint)auStack_80._0_4_;
          if (local_88._4_4_ != auStack_80._0_4_) {
            iVar18 = local_88._4_4_ - auStack_80._0_4_;
            lVar13 = func_0x005d0100(iVar18,1);
            lVar4 = plVar10[4];
            lVar14 = lVar4;
            if (lVar4 != lVar13) {
              plVar10[4] = lVar13;
              lVar14 = lVar13;
              lVar13 = lVar4;
            }
            if (lVar13 != 0) {
              func_0x003a4ca0(lVar13);
              lVar14 = plVar10[4];
            }
            iVar9 = (**(code **)(*plVar22 + 0x68))(plVar22,uVar5,lVar16 + uVar17,lVar14,iVar18);
            if (iVar9 != iVar18) goto LAB_008e0e3f;
          }
        }
        in_RCX = (int *)plVar10[3];
        local_a0 = plVar10[4];
        local_88 = CONCAT44(local_88._4_4_,2);
        auStack_80 = ZEXT1232(ZEXT812(0));
        local_60 = auStack_80;
        if (in_RCX != (int *)0x0) goto LAB_008e0af1;
        goto LAB_008e0bca;
      }
    }
LAB_008e0e3f:
    plVar10[1] = 0;
  }
  else {
    plVar10[3] = (long)in_RCX;
    if (*in_RCX != 0x52504639) goto LAB_008e0e3f;
    local_a0 = plVar10[4];
    local_60 = ZEXT1232(ZEXT812(0));
LAB_008e0af1:
    auStack_80._8_8_ = 0xfffffffffffffff0;
    local_88 = CONCAT44(local_88._4_4_,param_1);
    uVar17 = (ulong)*(byte *)(in_RCX + 0xb);
    uVar1 = *(ushort *)((long)in_RCX + 0x22);
    bVar24 = (*(byte *)((long)in_RCX + 0x2d) & 1) == 0;
    lVar4 = (long)in_RCX + 0xf;
    if (bVar24) {
      auStack_80._8_8_ = 0xfffffffffffffffc;
      lVar4 = (long)in_RCX + 3;
    }
    uVar11 = (ulong)(*(byte *)((long)in_RCX + 0x2d) & 1);
    auStack_80._8_8_ = lVar4 + 0x40U & auStack_80._8_8_;
    auStack_80._24_8_ = (ulong)bVar24 << 3 | 0xfffffffffffffff0;
    auStack_80._16_8_ =
         auStack_80._8_8_ + (ulong)*(ushort *)((long)in_RCX + 0x1a) * 8 + 7 + uVar11 * 8 &
         auStack_80._24_8_;
    uVar19 = -uVar17;
    auStack_80._24_8_ =
         (ulong)(uint)in_RCX[7] + auStack_80._16_8_ + 7 + uVar11 * 8 & auStack_80._24_8_;
    auStack_80._0_8_ = in_RCX;
    iVar18 = in_RCX[9] * (uint)*(byte *)(in_RCX + 0xb);
    uVar11 = (uVar17 - 1) + auStack_80._24_8_ + (ulong)*(ushort *)(in_RCX + 8) * 0x18 & uVar19;
    local_60._8_8_ =
         uVar11 + 7 + (ulong)(((uint)*(ushort *)(in_RCX + 8) - (uint)uVar1) * iVar18) &
         0xfffffffffffffff8;
    local_60._0_8_ = uVar11;
    if (param_1 == 2) {
      local_60._16_12_ = ZEXT812(0);
      local_60._28_4_ = 0;
    }
    else if (param_1 == 0) {
      local_60._16_8_ = (long)in_RCX + (uVar17 - 1) + (ulong)(uint)in_RCX[2] & uVar19;
      local_60._24_8_ = local_60._16_8_ + 7 + (ulong)(iVar18 * (uint)uVar1) & 0xfffffffffffffff8;
    }
    else if (param_1 == 1) {
      local_60._16_8_ = (uVar17 - 1) + local_a0 & uVar19;
      local_60._24_8_ = local_60._16_8_ + 7 + (ulong)(iVar18 * (uint)uVar1) & 0xfffffffffffffff8;
    }
LAB_008e0bca:
    cVar8 = FUN_008e1100(&local_88,(*(byte *)(plVar10[1] + 8) & 1) == 0);
    if (cVar8 == '\0') goto LAB_008e0e3f;
    lVar4 = plVar10[3];
    if (lVar4 == 0) {
      *(undefined4 *)(plVar10 + 5) = 2;
      plVar10[10] = 0;
      plVar10[0xb] = 0;
      plVar10[0xc] = 0;
      plVar10[0xd] = 0;
      plVar10[6] = 0;
      plVar10[7] = 0;
      plVar10[8] = 0;
      plVar10[9] = 0;
    }
    else {
      lVar16 = plVar10[4];
      uVar17 = 0xfffffffffffffff0;
      *(int *)(plVar10 + 5) = param_1;
      plVar10[6] = lVar4;
      uVar3 = *(uint *)(lVar4 + 0x1c);
      uVar1 = *(ushort *)(lVar4 + 0x20);
      bVar24 = (*(byte *)(lVar4 + 0x2d) & 1) == 0;
      lVar14 = lVar4 + 0xf;
      if (bVar24) {
        uVar17 = 0xfffffffffffffffc;
        lVar14 = lVar4 + 3;
      }
      uVar20 = (ulong)(*(byte *)(lVar4 + 0x2d) & 1);
      uVar2 = *(ushort *)(lVar4 + 0x22);
      uVar17 = lVar14 + 0x40U & uVar17;
      uVar21 = (ulong)bVar24 << 3 | 0xfffffffffffffff0;
      iVar18 = *(int *)(lVar4 + 0x24);
      uVar19 = uVar17 + (ulong)*(ushort *)(lVar4 + 0x1a) * 8 + 7 + uVar20 * 8 & uVar21;
      bVar15 = *(byte *)(lVar4 + 0x2c);
      uVar11 = (ulong)bVar15;
      plVar10[7] = uVar17;
      plVar10[8] = uVar19;
      uVar21 = uVar3 + uVar19 + 7 + uVar20 * 8 & uVar21;
      plVar10[9] = uVar21;
      iVar18 = iVar18 * (uint)bVar15;
      uVar17 = (uVar11 - 1) + uVar21 + (ulong)uVar1 * 0x18 & -uVar11;
      plVar10[10] = uVar17;
      plVar10[0xb] = uVar17 + 7 + (ulong)(((uint)uVar1 - (uint)uVar2) * iVar18) & 0xfffffffffffffff8
      ;
      if (param_1 == 2) {
        plVar10[0xc] = 0;
        plVar10[0xd] = 0;
      }
      else {
        if (param_1 == 0) {
          lVar16 = (ulong)*(uint *)(lVar4 + 8) + lVar4;
        }
        else if (param_1 != 1) goto LAB_008e0cd5;
        uVar17 = (uVar11 - 1) + lVar16 & -uVar11;
        plVar10[0xc] = uVar17;
        plVar10[0xd] = uVar17 + 7 + (ulong)(iVar18 * (uint)uVar2) & 0xfffffffffffffff8;
      }
    }
LAB_008e0cd5:
    if ((*(byte *)(plVar10[1] + 8) & 1) == 0) {
      func_0x03544790(plVar10[1],plVar10);
    }
  }
  cVar8 = (**(code **)(*plVar10 + 0x398))(plVar10);
  if (cVar8 == '\0') {
    *in_RDI = 0;
    (**(code **)(*plVar10 + 8))(plVar10);
    if (*_DAT_0a3e9fa8 != local_38) goto LAB_008e1092;
  }
  else {
    if (in_R9B != '\0') {
      LOCK();
      *(long **)(in_RSI + 0x58) = plVar10;
      UNLOCK();
    }
    plVar22 = _DAT_0a3e9fa8;
    *in_RDI = plVar10;
    if (*plVar22 != local_38) {
LAB_008e1092:
      func_0x08f68a00();
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
  }
  return in_RDI;
}


