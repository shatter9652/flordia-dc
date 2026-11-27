// window.elf d53960482354c9699902d859c4c2bc8b45357d43882a00ef57046c2f70004d8f
// FUN_008ddc80 @ 008ddc80 size=962
// undefined FUN_008ddc80()


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ddc80(ulong param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  code *pcVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  undefined1 *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  long *plVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  bool bVar21;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar22 [64];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 auStack_68 [8];
  undefined8 local_60;
  long *local_58;
  uint local_4c;
  long *local_48;
  long local_40;
  ulong local_38;
  
  puVar12 = auStack_68;
  uVar5 = *(uint *)(param_2 + 1);
  if (0 < (int)uVar5) {
    plVar17 = (long *)(param_1 + 0x20);
    lVar18 = param_1 + 0x10;
    auVar22 = ZEXT1264(ZEXT812(0));
    local_60 = param_3;
    do {
      lVar1 = *param_2;
      *param_2 = *(long *)(lVar1 + 0x18);
      bVar4 = *(byte *)(lVar1 + 0x2c);
      uVar19 = uVar5;
      if (bVar4 == 1) {
        if (*(ushort *)(lVar1 + 0x38) != 0) {
          lVar20 = *(long *)(lVar1 + 0x30);
          lVar10 = lVar20 + (ulong)*(ushort *)(lVar1 + 0x38) * 8;
          do {
            uVar6 = *(uint *)(lVar20 + 4);
            if ((int)uVar6 < 0) {
              pcVar2 = (code *)swi(0x41);
              uVar6 = (*pcVar2)();
              auVar22._8_56_ = extraout_var_00;
              auVar22._0_8_ = extraout_XMM0_Qa;
              puVar12 = puVar12 + 8;
            }
            if ((uVar6 >> 0x1c & 1) == 0) goto LAB_008ddd37;
            if ((uVar6 >> 0x1e & 1) == 0) {
              uVar9 = uVar6 & 0xfffffff;
              uVar3 = uVar9;
              if (uVar9 == 0xfffffff) {
                uVar3 = 0xffffffff;
              }
              if (((*(uint *)(*(long *)(_DAT_0e5565a8 + 0x16850) + (ulong)(uVar3 >> 5) * 4) >>
                    (uVar3 & 0x1f) & 1) == 0) ||
                 ((*(uint *)(*(long *)(_DAT_0e5565a8 + 0x16850) + (ulong)(uVar3 >> 5) * 4) &
                  1 << (uVar3 & 0x1f)) == 0)) goto LAB_008ddd37;
              local_48 = plVar17;
              local_40 = lVar18;
              local_38 = param_1;
              if (uVar9 == 0xfffffff) {
LAB_008de03c:
                pcVar2 = (code *)swi(0x41);
                (*pcVar2)();
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              iVar14 = 0 << (uVar3 & 0x1f);
              iVar16 = (int)(_DAT_0e7c4270 - 1) >> 1;
              iVar15 = _DAT_0e7c4270 - 1;
              while( true ) {
                while (iVar13 = iVar16, *(uint *)(_DAT_0e7c4268 + 8 + (long)iVar13 * 0x10) <= uVar9)
                {
                  if (iVar15 <= iVar13) goto LAB_008de03c;
                  iVar14 = iVar13 + 1;
                  iVar16 = iVar13 + 1 + iVar15 >> 1;
                  iVar16 = (uint)(iVar16 == iVar13) + iVar16;
                }
                if (iVar14 == iVar13) break;
                iVar16 = iVar14 + iVar13 >> 1;
                iVar16 = iVar16 - (uint)(iVar16 == iVar13);
                iVar15 = iVar13;
              }
              plVar17 = *(long **)(_DAT_0e7c4268 + (long)iVar13 * 0x10);
              pcVar2 = *(code **)(*plVar17 + 0x70);
              uVar9 = uVar6 - (int)plVar17[1] & 0x3fffff;
              if ((pcVar2 == (code *)0x11d7730) || (pcVar2 == (code *)0x11d7730)) {
                if (uVar9 == 0x3fffff) {
                  uVar9 = 0xffffffff;
                }
                lVar8 = *(long *)(plVar17[7] + (ulong)(uVar9 * (int)plVar17[8]));
              }
              else if (pcVar2 == (code *)0x11d7580) {
                uVar11 = 0xffffffff;
                if (uVar9 != 0x3fffff) {
                  uVar11 = uVar9;
                }
                lVar8 = *(long *)(plVar17[7] + (ulong)(uVar11 * (int)plVar17[8]));
              }
              else {
                uVar11 = *(uint *)((long)plVar17 + 0xc);
                local_58 = param_2;
                local_4c = uVar6;
                *(undefined8 *)(puVar12 + -8) = 0x8ddff7;
                lVar8 = (*pcVar2)(plVar17,(uVar11 & 0x3f) << 0x16 | uVar9);
                auVar22 = ZEXT1264(ZEXT812(0));
                param_2 = local_58;
                uVar6 = local_4c;
              }
              param_1 = local_38;
              plVar17 = local_48;
              lVar18 = local_40;
              if (lVar8 == 0) goto LAB_008ddd37;
              LOCK();
              uVar9 = *(uint *)(lVar20 + 4);
              bVar21 = uVar6 == uVar9;
              if (bVar21) {
                *(uint *)(lVar20 + 4) = uVar6 | 0x40000000;
                uVar9 = uVar6;
              }
              UNLOCK();
              if ((((!bVar21) || ((uVar9 & 0xfffffff) != uVar3)) || ((uVar9 & 0x40000000) == 0)) &&
                 ((!bVar21 && (((uVar9 & 0xfffffff) != uVar3 || ((uVar9 & 0x40000000) == 0)))))) {
                pcVar2 = (code *)swi(0x41);
                auVar22._0_8_ = (*pcVar2)();
                auVar22._8_56_ = extraout_var;
                puVar12 = puVar12 + 8;
                goto LAB_008ddd37;
              }
            }
            lVar20 = lVar20 + 8;
          } while (lVar20 != lVar10);
        }
        *(undefined1 *)(lVar1 + 0x2c) = 2;
        *(undefined8 *)(lVar1 + 0x40) = 0x6292e40;
        *(undefined4 *)(lVar1 + 0x48) = 0;
        *(undefined2 *)(lVar1 + 0x4c) = 0x500;
        *(long *)(lVar1 + 0x50) = lVar1;
        *(undefined8 *)(lVar1 + 0x58) = local_60;
        local_38 = (ulong)uVar5;
        *(undefined8 *)(puVar12 + -8) = 0x8dde21;
        FUN_008de790(lVar1 + 0x40);
        auVar22 = ZEXT1264(ZEXT812(0));
        uVar19 = (uint)local_38;
LAB_008ddd37:
        bVar4 = *(byte *)(lVar1 + 0x2c);
      }
      if (bVar4 == 1) {
        plVar7 = plVar17;
        if (plVar17 != param_2) goto LAB_008ddd85;
      }
      else {
        plVar7 = (long *)0x0;
        if (bVar4 < 5) {
                    /* WARNING: Could not emulate address calculation at 0x008ddd73 */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((long)*(int *)((ulong)(uint)bVar4 * 4 + 0x9d2ef04) + 0x9d2ef04))();
          return;
        }
LAB_008ddd85:
        lVar10 = *(long *)(lVar1 + 0x18);
        if (lVar10 == lVar1) {
          lVar10 = 0;
LAB_008ddf98:
          *param_2 = lVar10;
        }
        else {
          lVar20 = *(long *)(lVar1 + 0x20);
          *(long *)(lVar10 + 0x20) = lVar20;
          *(long *)(lVar20 + 0x18) = lVar10;
          if (*param_2 == lVar1) {
            lVar10 = *(long *)*(undefined1 (*) [16])(lVar1 + 0x18);
            goto LAB_008ddf98;
          }
        }
        *(undefined1 (*) [16])(lVar1 + 0x18) = auVar22._0_16_;
        *(int *)(param_2 + 1) = (int)param_2[1] + -1;
        if (plVar7 != (long *)0x0) {
          lVar10 = *plVar7;
          if (lVar10 == 0) {
            *plVar7 = lVar1;
            *(long *)(lVar1 + 0x20) = lVar1;
            lVar10 = lVar1;
          }
          else {
            lVar20 = *(long *)(lVar10 + 0x20);
            *(long *)(lVar1 + 0x20) = lVar20;
            *(long *)(lVar20 + 0x18) = lVar1;
            *(long *)(lVar10 + 0x20) = lVar1;
          }
          *(long *)(lVar1 + 0x18) = lVar10;
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        }
      }
      uVar5 = uVar19 - 1;
    } while (1 < (int)uVar19);
  }
  return;
}


