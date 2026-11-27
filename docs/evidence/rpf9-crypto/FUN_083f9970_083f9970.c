// window.elf f73d8bde3636243e04df956e7df154afebded3ec85692b8da4b5fd9976ee3895
// FUN_083f9970 @ 083f9970 size=930
// undefined FUN_083f9970()


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_083f9970(long *param_1,uint *param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  undefined1 auVar3 [16];
  ushort uVar4;
  uint uVar5;
  long *plVar6;
  undefined1 uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  undefined1 uVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  long *in_FS_OFFSET;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uStack_80;
  undefined1 local_78 [16];
  undefined1 local_68;
  undefined1 uStack_67;
  undefined1 uStack_66;
  undefined1 uStack_65;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined1 uStack_5e;
  undefined1 uStack_5d;
  undefined1 uStack_5c;
  undefined1 uStack_5b;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  ulong local_58;
  long local_50;
  uint local_44;
  uint local_40;
  uint local_3c;
  long *local_38;
  
  puVar15 = (undefined8 *)local_78;
  local_3c = (uint)param_3 & 0xffffff7f;
  local_40 = (uint)(param_3 >> 7) & 0x1ffffff;
  local_78[0] = (undefined1)local_3c;
  local_78[1] = local_78[0];
  local_78[2] = local_78[0];
  local_78[3] = local_78[0];
  local_78[4] = local_78[0];
  local_78[5] = local_78[0];
  local_78[6] = local_78[0];
  local_78[7] = local_78[0];
  local_78[8] = local_78[0];
  local_78[9] = local_78[0];
  local_78[10] = local_78[0];
  local_78[0xb] = local_78[0];
  local_78[0xc] = local_78[0];
  local_78[0xd] = local_78[0];
  local_78[0xe] = local_78[0];
  local_78[0xf] = local_78[0];
  local_68 = DAT_09d1bcaf;
  uStack_67 = DAT_09d1bcaf;
  uStack_66 = DAT_09d1bcaf;
  uStack_65 = DAT_09d1bcaf;
  uStack_64 = DAT_09d1bcaf;
  uStack_63 = DAT_09d1bcaf;
  uStack_62 = DAT_09d1bcaf;
  uStack_61 = DAT_09d1bcaf;
  uStack_60 = DAT_09d1bcaf;
  uStack_5f = DAT_09d1bcaf;
  uStack_5e = DAT_09d1bcaf;
  uStack_5d = DAT_09d1bcaf;
  uStack_5c = DAT_09d1bcaf;
  uStack_5b = DAT_09d1bcaf;
  uStack_5a = DAT_09d1bcaf;
  uStack_59 = DAT_09d1bcaf;
  local_58 = param_3;
  local_38 = param_1;
LAB_083f99ba:
  uVar18 = *param_2;
  local_50 = *(long *)(param_2 + 2);
  uVar12 = 0;
  local_44 = 0;
  if (uVar18 != 0) {
    uVar12 = local_40;
    while( true ) {
      uVar12 = uVar12 & uVar18 - 1;
      auVar1 = *(undefined1 (*) [16])(local_50 + (ulong)uVar12 * 0x110);
      auVar3 = vpcmpeqb_avx(auVar1,local_78);
      lVar9 = local_50 + (ulong)uVar12 * 0x110;
      uVar4 = (ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar3[0xf] >> 7) << 0xf;
      if (uVar4 != 0) {
        uVar17 = (uint)uVar4;
        do {
          uVar10 = 0;
          for (uVar5 = uVar17; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
            uVar10 = uVar10 + 1;
          }
          if (*(ulong *)(lVar9 + 0x10 + (ulong)(uVar10 << 4)) == local_58) {
            uVar18 = uVar18 << 4;
            uVar10 = uVar10 | uVar12 << 4;
            uVar8 = (ulong)uVar10;
            if (uVar10 != uVar18) goto LAB_083f9c7a;
            uVar7 = 0;
            goto LAB_083f9c6e;
          }
          uVar17 = uVar17 - 1 & uVar17;
        } while (uVar17 != 0);
      }
      auVar1 = vpsignb_avx(auVar1,auVar1);
      uVar4 = (ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar1[0xf] >> 7) << 0xf;
      if (uVar4 != 0) break;
      uVar12 = uVar12 + 1;
    }
    if (param_2[1] != (uVar18 * 0x570) / 100) goto LAB_083f9cc2;
    uVar12 = param_2[1] * 2;
    local_44 = uVar18;
  }
  if (uVar12 < 0x11) {
    uVar12 = 0x10;
  }
  if (*(char *)(*in_FS_OFFSET + -0xad0) == '\0') {
    lVar9 = *in_FS_OFFSET;
    *(undefined1 *)(lVar9 + -0xad0) = 1;
    *(undefined4 *)(lVar9 + -0xb90) = 0;
  }
  plVar6 = _DAT_0e7911a8;
  plVar14 = *(long **)(*in_FS_OFFSET + -0x140);
  if (*(long **)(*in_FS_OFFSET + -0x140) == (long *)0x0) {
    *(long **)(*in_FS_OFFSET + -0x140) = _DAT_0e7911a8;
    plVar14 = plVar6;
  }
  uVar8 = ((ulong)uVar12 * 100 + 0x56) / 0x57 - 1;
  uVar8 = uVar8 >> 1 | uVar8;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = (uVar8 >> 0x10 | uVar8) + 1 >> 4;
  lVar19 = uVar8 * 0x110;
  pcVar2 = *(code **)*plVar14;
  puVar15[-1] = 0x83f9b01;
  lVar9 = (*pcVar2)(plVar14,lVar19,0x10);
  uVar20 = CONCAT17(uStack_61,
                    CONCAT16(uStack_62,
                             CONCAT15(uStack_63,
                                      CONCAT14(uStack_64,
                                               CONCAT13(uStack_65,
                                                        CONCAT12(uStack_66,
                                                                 CONCAT11(uStack_67,local_68)))))));
  uVar21 = CONCAT17(uStack_59,
                    CONCAT16(uStack_5a,
                             CONCAT15(uStack_5b,
                                      CONCAT14(uStack_5c,
                                               CONCAT13(uStack_5d,
                                                        CONCAT12(uStack_5e,
                                                                 CONCAT11(uStack_5f,uStack_60)))))))
  ;
  if (lVar9 == 0) {
    puVar16 = puVar15;
    if ((char)plVar14[3] == '\x01') {
      puVar15[-1] = 0x83f9c37;
      func_0x00001050(0xe0edbf0);
      pcVar2 = *(code **)(*plVar14 + 0x30);
      puVar15[-1] = 0x83f9c48;
      (*pcVar2)(plVar14,lVar19,0x10);
      pcVar2 = (code *)swi(0x41);
      (*pcVar2)();
      puVar16 = puVar15 + 1;
      *puVar15 = 0x83f9c56;
      func_0x00001000(0xe0edbf0);
      uVar20 = CONCAT17(uStack_61,
                        CONCAT16(uStack_62,
                                 CONCAT15(uStack_63,
                                          CONCAT14(uStack_64,
                                                   CONCAT13(uStack_65,
                                                            CONCAT12(uStack_66,
                                                                     CONCAT11(uStack_67,local_68))))
                                         )));
      uVar21 = CONCAT17(uStack_59,
                        CONCAT16(uStack_5a,
                                 CONCAT15(uStack_5b,
                                          CONCAT14(uStack_5c,
                                                   CONCAT13(uStack_5d,
                                                            CONCAT12(uStack_5e,
                                                                     CONCAT11(uStack_5f,uStack_60)))
                                                  ))));
    }
    lVar9 = 0;
    puVar15 = puVar16;
  }
  *(long *)(param_2 + 2) = lVar9;
  *param_2 = (uint)uVar8;
  lVar13 = 0;
  do {
    *(undefined8 *)(lVar9 + lVar13) = uVar20;
    ((undefined8 *)(lVar9 + lVar13))[1] = uVar21;
    lVar13 = lVar13 + 0x110;
  } while (lVar19 - lVar13 != 0);
  lVar9 = local_50;
  if (local_44 != 0) {
    do {
      lVar19 = 0;
      do {
        if (!SBORROW1('\0',*(char *)(lVar9 + lVar19))) {
          uVar8 = *(ulong *)(lVar9 + 0x10 + lVar19 * 0x10);
          uVar18 = (uint)(uVar8 >> 7) & 0x1ffffff;
          while( true ) {
            uVar18 = uVar18 & *param_2 - 1;
            lVar13 = (ulong)uVar18 * 0x110;
            auVar1 = *(undefined1 (*) [16])(*(long *)(param_2 + 2) + lVar13);
            auVar1 = vpsignb_avx(auVar1,auVar1);
            uVar4 = (ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1
                    | (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar1[0xf] >> 7) << 0xf;
            if (uVar4 != 0) break;
            uVar18 = uVar18 + 1;
          }
          uVar18 = 0;
          for (uVar12 = (uint)uVar4; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
            uVar18 = uVar18 + 1;
          }
          lVar13 = *(long *)(param_2 + 2) + lVar13;
          *(byte *)(lVar13 + (ulong)uVar18) = (byte)uVar8 & 0x7f;
          *(undefined1 (*) [16])(lVar13 + 0x10 + (ulong)(uVar18 << 4)) =
               *(undefined1 (*) [16])(lVar19 * 0x10 + lVar9 + 0x10);
          *(undefined1 *)(lVar9 + lVar19) = 0x80;
        }
        lVar19 = lVar19 + 1;
      } while (lVar19 != 0x10);
      lVar9 = lVar9 + 0x110;
    } while (lVar9 != (ulong)local_44 * 0x110 + local_50);
  }
  if (local_50 != 0) {
    *(undefined8 *)((long)puVar15 + -8) = 0x83f9beb;
    func_0x003a4ca0();
  }
  goto LAB_083f99ba;
LAB_083f9cc2:
  uVar17 = 0;
  for (uVar18 = (uint)uVar4; (uVar18 & 1) == 0; uVar18 = uVar18 >> 1 | 0x80000000) {
    uVar17 = uVar17 + 1;
  }
  *(char *)(lVar9 + (ulong)uVar17) = (char)local_3c;
  param_2[1] = param_2[1] + 1;
  uVar11 = 1;
  uVar17 = uVar12 << 4 | uVar17;
  uVar8 = (ulong)uVar17;
  local_50 = *(long *)(param_2 + 2);
  uVar18 = *param_2 << 4;
  uVar7 = 1;
  if (uVar17 == uVar18) {
LAB_083f9c6e:
    uVar11 = uVar7;
    uVar18 = (uint)uVar8;
    goto LAB_083f9c9f;
  }
  do {
    if (!SBORROW1('\0',*(char *)((ulong)((uint)uVar8 & 0xf) + (uVar8 >> 4) * 0x110 + local_50)))
    goto LAB_083f9c9f;
    uVar12 = (uint)uVar8 + 1;
    uVar8 = (ulong)uVar12;
  } while (uVar18 != uVar12);
  goto LAB_083f9c9d;
  while (uVar12 = (uint)uVar8 + 1, uVar8 = (ulong)uVar12, uVar18 != uVar12) {
LAB_083f9c7a:
    uVar11 = 0;
    if (!SBORROW1('\0',*(char *)((ulong)((uint)uVar8 & 0xf) + (uVar8 >> 4) * 0x110 + local_50)))
    goto LAB_083f9c9f;
  }
  uVar7 = 0;
LAB_083f9c9d:
  uVar11 = uVar7;
  uVar8 = (ulong)uVar18;
LAB_083f9c9f:
  *local_38 = local_50;
  local_38[1] = (ulong)uVar18 | uVar8 << 0x20;
  *(undefined1 *)(local_38 + 2) = uVar11;
  return;
}


