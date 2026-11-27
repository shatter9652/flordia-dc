// window.elf f73d8bde3636243e04df956e7df154afebded3ec85692b8da4b5fd9976ee3895
// FUN_083fab80 @ 083fab80 size=2280
// undefined FUN_083fab80()


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_083fab80(long param_1,long param_2,ulong param_3,long param_4,long param_5,long param_6,
                 long param_7,long param_8,long param_9,long param_10,long param_11,ulong param_12)

{
  undefined1 auVar1 [16];
  long lVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  ushort uVar5;
  uint uVar6;
  byte bVar7;
  long *plVar8;
  undefined4 uVar9;
  char cVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 (*pauVar14) [16];
  ulong uVar15;
  ulong uVar16;
  byte bVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  long *plVar21;
  ulong uVar22;
  long *plVar23;
  ulong *puVar24;
  ulong *puVar25;
  uint uVar26;
  ulong *puVar27;
  long lVar28;
  long lVar29;
  ulong *puVar30;
  uint *puVar31;
  ulong *puVar32;
  ulong uVar33;
  long *in_FS_OFFSET;
  bool bVar34;
  undefined1 auVar35 [16];
  ulong local_1a78;
  long local_1a70;
  long local_1a68;
  long local_1a60;
  long local_1a58;
  long local_1a50;
  long local_1a48;
  long local_1a40;
  long local_1a38;
  uint *local_1a30;
  long local_1a28;
  ulong local_1a20;
  long local_1a18;
  ulong local_1a10;
  int local_1a04;
  ulong local_1a00;
  ulong *local_19f8;
  uint local_19ec;
  uint local_19e8;
  int local_19e4 [2];
  undefined4 local_19dc;
  undefined1 local_19d8 [40];
  ulong local_19b0;
  uint local_19a4;
  char local_19a0;
  long local_1988;
  long local_1938 [200];
  int local_12f8 [200];
  long alStack_fd8 [200];
  ulong local_998 [200];
  uint local_358 [200];
  long local_38;
  
  plVar23 = _DAT_0a3e9fa8;
  puVar24 = &local_1a78;
  local_38 = *_DAT_0a3e9fa8;
  local_1a68 = param_2;
  local_1a48 = param_6;
  local_1a40 = param_5;
  local_1a38 = param_4;
  local_1a18 = param_1;
  local_1a10 = param_3;
  func_0x04387740(local_19d8);
  if (*(char *)(*in_FS_OFFSET + -0xad0) == '\0') {
    lVar12 = *in_FS_OFFSET;
    *(undefined1 *)(lVar12 + -0xad0) = 1;
    *(undefined4 *)(lVar12 + -0xb90) = 0;
  }
  plVar8 = _DAT_0e7911a8;
  plVar21 = *(long **)(*in_FS_OFFSET + -0x140);
  if (*(long **)(*in_FS_OFFSET + -0x140) == (long *)0x0) {
    *(long **)(*in_FS_OFFSET + -0x140) = _DAT_0e7911a8;
    plVar21 = plVar8;
  }
  lVar12 = (**(code **)*plVar21)(plVar21,0x1000,0x10);
  puVar25 = &local_1a78;
  if (lVar12 == 0) {
    if ((char)plVar21[3] == '\x01') {
      func_0x00001050(0xe0edbf0);
      (**(code **)(*plVar21 + 0x30))(plVar21,0x1000,0x10);
      pcVar3 = (code *)swi(0x41);
      (*pcVar3)();
      puVar24 = (ulong *)&local_1a70;
      local_1a78 = 0x83fb42d;
      func_0x00001000(0xe0edbf0);
    }
    lVar12 = 0;
    puVar25 = puVar24;
  }
  *(undefined8 *)((long)puVar25 + -8) = 0x83fac42;
  func_0x043876b0(local_19d8,lVar12,0x1000);
  local_19dc = 0;
  if (local_1a10 != 0) {
    local_19e8 = 0;
    local_1a58 = local_1a18 + 0x68;
    local_1a30 = (uint *)(local_1a18 + 0x10);
    local_19f8 = (ulong *)(local_1a18 + 0x20);
    local_1a70 = local_1a18 + 0x28;
    uVar33 = local_1a10;
    local_1a60 = lVar12;
    iVar11 = 0;
    do {
      local_1a04 = iVar11;
      uVar18 = (int)uVar33 - local_1a04;
      local_1a28 = (long)local_1a04;
      local_1a00 = CONCAT44(local_1a00._4_4_,uVar18);
      local_19ec = 200;
      if ((int)uVar18 < 200) {
        local_19ec = uVar18;
      }
      if (0 < (int)uVar18) {
        uVar18 = *(uint *)(local_1a18 + 0x88);
        lVar12 = local_1a68 + local_1a28 * 8;
        uVar33 = 1;
        if (1 < (int)local_19ec) {
          uVar33 = (ulong)local_19ec;
        }
        uVar22 = 0;
        do {
          lVar28 = local_1a58;
          lVar29 = *(long *)(lVar12 + uVar22 * 8);
          *(undefined8 *)((long)puVar25 + -8) = 0x83fad20;
          iVar11 = func_0x08f66610(lVar29,lVar28,(ulong)uVar18);
          if (iVar11 == 0) {
            lVar29 = lVar29 + (ulong)uVar18;
          }
          else {
            *(undefined8 *)((long)puVar25 + -8) = 0x83fad48;
            local_1a20 = func_0x08f66a50(lVar29,0x9c5f1fa);
            if (local_1a20 != 0) {
              *(undefined8 *)((long)puVar25 + -8) = 0x83fad5c;
              uVar15 = func_0x08f66580(lVar29);
              if (local_1a20 != uVar15) {
                lVar29 = lVar29 + 1 + local_1a20;
              }
            }
          }
          local_1938[uVar22] = lVar29;
          uVar22 = uVar22 + 1;
        } while (uVar33 != uVar22);
      }
      uVar18 = local_19ec;
      lVar12 = local_1a58;
      *(undefined8 *)((long)puVar25 + -8) = 0x83fada1;
      func_0x04387810(lVar12,local_1938,uVar18,local_358,local_998,local_12f8);
      uVar9 = local_19dc;
      if ((local_19e8 & 1) != 0) {
        *(undefined8 *)((long)puVar25 + -8) = 0x83fadb5;
        iVar11 = func_0x043878e0(uVar9);
        if (iVar11 != 0) {
          pcVar3 = (code *)swi(0x41);
          (*pcVar3)();
          puVar25 = (ulong *)((long)puVar25 + 8);
        }
      }
      puVar25[-1] = 0x83fadc7;
      func_0x043876a0(local_19d8);
      puVar27 = local_19f8;
      if ((int)local_1a00 < 1) {
        local_19e8 = 0;
        uVar33 = local_1a10;
        puVar31 = local_1a30;
        lVar12 = local_1a18;
      }
      else {
        local_19e8 = 0;
        uVar33 = 1;
        if (1 < (int)local_19ec) {
          uVar33 = (ulong)local_19ec;
        }
        plVar23 = (long *)(param_9 * local_1a28 + param_8);
        puVar32 = (ulong *)(param_7 * local_1a28 + local_1a48);
        uVar22 = 0;
        puVar30 = (ulong *)(local_1a40 * local_1a28 + local_1a38);
        lVar28 = local_1a28 * param_11 + param_10;
        lVar29 = local_1a40;
        local_1a78 = uVar33;
        do {
          if (local_12f8[uVar22] == 0) {
            uVar33 = (ulong)local_358[uVar22];
            local_1a28 = lVar28;
            if (param_10 != 0) {
              if (local_998[uVar22] < param_12) {
                puVar25[-1] = 0x83faea2;
                func_0x08f67830(lVar28,0,param_12);
              }
              else {
                puVar25[-1] = 0x83faeb9;
                uVar13 = func_0x043877a0(local_19d8,uVar33,lVar28,param_12,0);
                local_19e8 = (uint)CONCAT71((int7)((ulong)uVar13 >> 8),1);
              }
            }
            puVar25[-1] = 0x83faed0;
            iVar11 = func_0x04387850(uVar33,&local_19b0);
            if (iVar11 == 0) {
              local_1a50 = local_1988 * 10000000 + 0x19db1ded53e8000;
            }
            else {
              local_1a50 = 0;
            }
            local_1a00 = local_998[uVar22];
            if (*(char *)(*in_FS_OFFSET + -0xad0) == '\0') {
              lVar12 = *in_FS_OFFSET;
              *(undefined1 *)(lVar12 + -0xad0) = 1;
              *(undefined4 *)(lVar12 + -0xb90) = 0;
            }
            plVar8 = _DAT_0e7911a8;
            plVar21 = *(long **)(*in_FS_OFFSET + -0x140);
            if (*(long **)(*in_FS_OFFSET + -0x140) == (long *)0x0) {
              *(long **)(*in_FS_OFFSET + -0x140) = _DAT_0e7911a8;
              plVar21 = plVar8;
            }
            pcVar3 = *(code **)*plVar21;
            local_1a20 = uVar33;
            puVar25[-1] = 0x83faf58;
            pauVar14 = (undefined1 (*) [16])(*pcVar3)(plVar21,0x20,0x10);
            if (pauVar14 == (undefined1 (*) [16])0x0) {
              puVar25[-1] = 0x83fb448;
              func_0x00001050(0xe0edbf0);
              pcVar3 = *(code **)(*plVar21 + 0x30);
              puVar25[-1] = 0x83fb45c;
              (*pcVar3)(plVar21,0x20,0x10);
              pcVar3 = (code *)swi(0x41);
              (*pcVar3)();
              *puVar25 = 0x83fb466;
              func_0x00001000(0xe0edbf0);
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            *pauVar14 = (undefined1  [16])0x0;
            *(int *)*pauVar14 = (int)local_1a20;
            *(ulong *)pauVar14[1] = local_1a00;
            *(long *)(pauVar14[1] + 8) = local_1a50;
            alStack_fd8[uVar22] = (long)pauVar14;
            if (local_1a38 != 0) {
              *puVar30 = local_1a20;
            }
            if (local_1a48 != 0) {
              *puVar32 = local_1a00;
            }
            lVar29 = local_1a40;
            puVar27 = local_19f8;
            lVar28 = local_1a28;
            uVar33 = local_1a78;
            if (param_8 != 0) {
              *plVar23 = local_1a50;
            }
          }
          else {
            alStack_fd8[uVar22] = -1;
          }
          lVar12 = local_1a18;
          puVar31 = local_1a30;
          uVar22 = uVar22 + 1;
          plVar23 = (long *)((long)plVar23 + param_9);
          puVar32 = (ulong *)((long)puVar32 + param_7);
          puVar30 = (ulong *)((long)puVar30 + lVar29);
          lVar28 = lVar28 + param_11;
        } while (uVar33 != uVar22);
        uVar33 = local_1a10;
        if ((local_19e8 & 1) != 0) {
          puVar25[-1] = 0x83fb079;
          iVar11 = func_0x043878b0(local_19d8,1,local_19e4,&local_19dc);
          uVar33 = local_1a10;
          puVar27 = local_19f8;
          if (iVar11 != 0) {
            pcVar3 = (code *)swi(0x41);
            (*pcVar3)();
            puVar25 = puVar25 + 1;
            puVar27 = local_19f8;
          }
        }
      }
      uVar18 = *puVar31;
LAB_083fb0e3:
      do {
        uVar26 = uVar18;
        if ((uVar26 & 0x10000ff) != 0) {
          LOCK();
          uVar18 = *puVar31;
          bVar34 = uVar26 == uVar18;
          if (bVar34) {
            *puVar31 = uVar26 + 0x10000;
            uVar18 = uVar26;
          }
          UNLOCK();
          if (bVar34) {
            uVar19 = (uint)(*puVar27 >> 7) & 0xffffff;
            uVar22 = *puVar27;
            if ((*puVar27 >> 7 & 0xffffff) != 0) {
              do {
                if ((long)uVar22 < 0x100000000) {
                  uVar15 = *puVar27;
                }
                else {
                  LOCK();
                  uVar15 = *puVar27;
                  if (uVar22 == uVar15) {
                    *puVar27 = uVar22 - 0x100000000;
                    uVar15 = uVar22;
                  }
                  UNLOCK();
                  uVar18 = uVar26;
                  if (uVar22 == uVar15) goto LAB_083fb0e3;
                }
                uVar19 = uVar19 - 1;
                uVar22 = uVar15;
              } while (uVar19 != 0);
            }
            uVar22 = *puVar27;
            do {
              while (local_19b0 = uVar22, puVar30 = local_19f8, (long)local_19b0 < 0x100000000) {
                *(undefined8 *)((long)puVar25 + -8) = 0x83fb173;
                cVar10 = func_0x00e8c1f0(puVar30,1,&local_19b0);
                puVar27 = local_19f8;
                uVar18 = uVar26;
                uVar22 = local_19b0;
                if (cVar10 != '\0') goto LAB_083fb0e3;
              }
              LOCK();
              uVar22 = *puVar27;
              if (local_19b0 == uVar22) {
                *puVar27 = local_19b0 - 0x100000000;
                uVar22 = local_19b0;
              }
              UNLOCK();
              uVar18 = uVar26;
            } while (local_19b0 != uVar22);
          }
          goto LAB_083fb0e3;
        }
        LOCK();
        uVar18 = *puVar31;
        bVar34 = uVar26 == uVar18;
        if (bVar34) {
          *puVar31 = uVar26 | 0x1000000;
          uVar18 = uVar26;
        }
        UNLOCK();
      } while (!bVar34);
      if ((int)uVar33 != local_1a04) {
        local_1a00 = (ulong)(int)local_19ec;
        uVar22 = 0;
        do {
          lVar29 = alStack_fd8[uVar22];
          if (lVar29 != -1) {
            lVar28 = local_1938[uVar22];
            *(undefined8 *)((long)puVar25 + -8) = 0x83fb1ec;
            uVar15 = func_0x008d8240(1,lVar28);
            lVar28 = local_1a70;
            uVar18 = *(uint *)(lVar12 + 0x28);
            if (uVar18 != 0) {
              bVar7 = (byte)uVar15;
              lVar2 = *(long *)(lVar12 + 0x30);
              bVar17 = bVar7 & 0x7f;
              uVar16 = uVar15 >> 7 & 0x1ffffff;
              auVar35._0_8_ =
                   CONCAT17(bVar7,CONCAT16(bVar7,CONCAT15(bVar7,CONCAT14(bVar7,CONCAT13(bVar7,
                                                  CONCAT12(bVar7,CONCAT11(bVar7,bVar7))))))) &
                   0x7f7f7f7f7f7f7f7f;
              auVar35[8] = bVar17;
              auVar35[9] = bVar17;
              auVar35[10] = bVar17;
              auVar35[0xb] = bVar17;
              auVar35[0xc] = bVar17;
              auVar35[0xd] = bVar17;
              auVar35[0xe] = bVar17;
              auVar35[0xf] = bVar17;
              do {
                uVar26 = (uint)uVar16 & uVar18 - 1;
                auVar1 = *(undefined1 (*) [16])(lVar2 + (ulong)uVar26 * 0x110);
                auVar4 = vpcmpeqb_avx(auVar1,auVar35);
                uVar5 = (ushort)(SUB161(auVar4 >> 7,0) & 1) |
                        (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                        (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                        (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                        (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                        (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                        (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                        (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                        (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                        (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                        (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                        (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                        (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                        (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                        (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auVar4[0xf] >> 7) << 0xf;
                if (uVar5 != 0) {
                  uVar19 = (uint)uVar5;
LAB_083fb23e:
                  uVar20 = 0;
                  for (uVar6 = uVar19; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                    uVar20 = uVar20 + 1;
                  }
                  if (*(ulong *)((ulong)uVar26 * 0x110 + lVar2 + 0x10 + (ulong)(uVar20 << 4)) !=
                      uVar15) goto code_r0x083fb250;
                  uVar20 = uVar20 | uVar26 << 4;
                  if (uVar20 != 0xffffffff) {
                    uVar26 = uVar20;
                    while ((uVar20 != uVar18 * 0x10 &&
                           (uVar26 = uVar20,
                           SBORROW1('\0',*(char *)((ulong)(uVar20 & 0xf) +
                                                  (ulong)(uVar20 >> 4) * 0x110 + lVar2))))) {
                      uVar20 = uVar20 + 1;
                      uVar26 = uVar18 * 0x10;
                    }
                    goto LAB_083fb2a9;
                  }
                  break;
                }
LAB_083fb257:
                auVar1 = vpsignb_avx(auVar1,auVar1);
                if ((((((((((((((((SUB161(auVar1 >> 7,0) & 1) != 0 ||
                                 (SUB161(auVar1 >> 0xf,0) & 1) != 0) ||
                                (SUB161(auVar1 >> 0x17,0) & 1) != 0) ||
                               (SUB161(auVar1 >> 0x1f,0) & 1) != 0) ||
                              (SUB161(auVar1 >> 0x27,0) & 1) != 0) ||
                             (SUB161(auVar1 >> 0x2f,0) & 1) != 0) ||
                            (SUB161(auVar1 >> 0x37,0) & 1) != 0) ||
                           (SUB161(auVar1 >> 0x3f,0) & 1) != 0) ||
                          (SUB161(auVar1 >> 0x47,0) & 1) != 0) ||
                         (SUB161(auVar1 >> 0x4f,0) & 1) != 0) || (SUB161(auVar1 >> 0x57,0) & 1) != 0
                        ) || (SUB161(auVar1 >> 0x5f,0) & 1) != 0) ||
                      (SUB161(auVar1 >> 0x67,0) & 1) != 0) || (SUB161(auVar1 >> 0x6f,0) & 1) != 0)
                    || (SUB161(auVar1 >> 0x77,0) & 1) != 0) || auVar1[0xf] < '\0') break;
                uVar16 = (ulong)(uVar26 + 1);
              } while( true );
            }
            uVar26 = uVar18 << 4;
LAB_083fb2a9:
            if ((ulong)((uVar26 & 0xf) << 4) + (ulong)(uVar26 >> 4) * 0x110 ==
                (ulong)(uVar18 & 0xfffffff) * 0x110) {
              *(undefined8 *)((long)puVar25 + -8) = 0x83fb2e5;
              FUN_083f9970(&local_19b0,lVar28,uVar15);
              if (local_19a0 == '\x01') {
                uVar16 = (ulong)((local_19a4 & 0xf) << 4);
                lVar28 = (ulong)(local_19a4 >> 4) * 0x110 + local_19b0;
                *(ulong *)(uVar16 + 0x10 + lVar28) = uVar15;
                *(long *)(uVar16 + 0x18 + lVar28) = lVar29;
              }
            }
            else if (lVar29 != 0) {
              *(undefined8 *)((long)puVar25 + -8) = 0x83fb32b;
              func_0x003a4ca0(lVar29,0x20);
            }
          }
          uVar22 = uVar22 + 1;
        } while (uVar22 != local_1a00);
      }
      puVar31 = local_1a30;
      *(undefined8 *)((long)puVar25 + -8) = 0x83fb347;
      func_0x017ade80(puVar31);
      uVar9 = local_19dc;
      lVar12 = local_1a60;
      plVar23 = _DAT_0a3e9fa8;
      iVar11 = local_1a04 + local_19ec;
    } while ((ulong)(long)(int)(local_1a04 + local_19ec) < uVar33);
    if ((local_19e8 & 1) != 0) {
      *(undefined8 *)((long)puVar25 + -8) = 0x83fb381;
      iVar11 = func_0x043878e0(uVar9);
      if (iVar11 != 0) {
        pcVar3 = (code *)swi(0x41);
        (*pcVar3)();
        puVar25 = (ulong *)((long)puVar25 + 8);
      }
      if (local_19e4[0] != 0) {
        pcVar3 = (code *)swi(0x41);
        (*pcVar3)();
        puVar25 = (ulong *)((long)puVar25 + 8);
      }
    }
  }
  if (lVar12 != 0) {
    *(undefined8 *)((long)puVar25 + -8) = 0x83fb39f;
    func_0x003a4ca0(lVar12);
  }
  *(undefined8 *)((long)puVar25 + -8) = 0x83fb3ab;
  func_0x04387770(local_19d8);
  if (*plVar23 == local_38) {
    return;
  }
  *(undefined8 *)((long)puVar25 + -8) = 0x83fb437;
  func_0x08f68a00();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
code_r0x083fb250:
  uVar19 = uVar19 - 1 & uVar19;
  if (uVar19 == 0) goto LAB_083fb257;
  goto LAB_083fb23e;
}


