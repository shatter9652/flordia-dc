// window.elf f73d8bde3636243e04df956e7df154afebded3ec85692b8da4b5fd9976ee3895
// FUN_083e47b0 @ 083e47b0 size=721
// undefined FUN_083e47b0()


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_083e47b0(long param_1,byte *param_2,ulong param_3,ushort *param_4)

{
  ushort uVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  char cVar4;
  byte bVar5;
  ulong uVar6;
  ushort uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  bool bVar12;
  ushort local_40;
  ushort local_3e;
  undefined4 local_3c;
  long local_38;
  
  plVar11 = _DAT_0a3e9fa8;
  local_38 = *_DAT_0a3e9fa8;
  bVar5 = *param_2;
  uVar6 = (ulong)bVar5;
  uVar7 = (ushort)param_3;
  if (*(short *)(param_2 + 2) == -1) {
    bVar12 = bVar5 == 4;
    if (bVar12) {
      uVar1 = *(ushort *)(param_2 + 0x12);
      lVar10 = *(long *)(*(long *)(param_1 + 0x10) + 8);
      if (*(ulong *)(lVar10 + (ulong)uVar1 * 0x18) <= *(ulong *)(lVar10 + (param_3 & 0xffff) * 0x18)
         ) {
        *param_4 = uVar7;
        param_4[1] = 0xffff;
        bVar12 = true;
        goto LAB_083e49c0;
      }
      *(ushort *)(param_2 + 0x12) = uVar7;
      uVar7 = *(ushort *)(param_2 + 10);
      param_2[10] = 0xff;
      param_2[0xb] = 0xff;
      *param_4 = uVar1;
      bVar5 = 3;
      param_4[1] = uVar7;
    }
    else {
      *param_2 = bVar5 + 1;
      *(ushort *)(param_2 + uVar6 * 2 + 0xc) = uVar7;
      (param_2 + (ulong)(byte)(bVar5 + 1) * 2 + 2)[0] = 0xff;
      (param_2 + (ulong)(byte)(bVar5 + 1) * 2 + 2)[1] = 0xff;
      if (bVar5 == 0) goto LAB_083e49be;
      lVar10 = *(long *)(*(long *)(param_1 + 0x10) + 8);
    }
    do {
      uVar6 = (ulong)bVar5;
      uVar7 = *(ushort *)(param_2 + uVar6 * 2 + 0xc);
      if (*(ulong *)(lVar10 + (ulong)*(ushort *)(param_2 + (ulong)(bVar5 - 1) * 2 + 0xc) * 0x18) <=
          *(ulong *)(lVar10 + (ulong)uVar7 * 0x18)) break;
      *(ushort *)(param_2 + uVar6 * 2 + 0xc) = *(ushort *)(param_2 + (ulong)(bVar5 - 1) * 2 + 0xc);
      *(ushort *)(param_2 + (ulong)(bVar5 - 1) * 2 + 0xc) = uVar7;
      auVar3 = vpshuflw_avx(ZEXT416(*(uint *)(param_2 + uVar6 * 2 + 2)),0xe1);
      *(int *)(param_2 + uVar6 * 2 + 2) = auVar3._0_4_;
      bVar5 = bVar5 - 1;
    } while (bVar5 != 0);
  }
  else {
    if (bVar5 != 0) {
      uVar8 = 0;
      lVar10 = *(long *)(*(long *)(param_1 + 0x10) + 8);
      do {
        uVar9 = uVar8;
        if ((*(ulong *)(lVar10 + (param_3 & 0xffff) * 0x18) <
             *(ulong *)(lVar10 + (ulong)*(ushort *)(param_2 + uVar8 * 2 + 0xc) * 0x18)) ||
           (uVar9 = uVar6, bVar5 - 1 == uVar8)) {
          uVar7 = *(ushort *)(param_2 + uVar9 * 2 + 2);
          if (uVar7 != 0xffff) {
            lVar10 = (ulong)((uint)(byte)uVar7 * 0x14) +
                     **(long **)(*(long *)(*(long *)(param_1 + 0x18) + 0x10) +
                                (ulong)(uVar7 >> 8) * 8);
            goto LAB_083e4935;
          }
          break;
        }
        uVar8 = uVar8 + 1;
      } while (uVar6 != uVar8);
    }
    lVar10 = 0;
LAB_083e4935:
    local_3c = 0xffff0000;
    cVar4 = FUN_083e47b0(param_1,lVar10,param_3,&local_3c);
    if (cVar4 != '\0') {
      func_0x083c4960(param_1,lVar10,(undefined2)local_3c,local_3c._2_2_,&local_40);
      plVar11 = _DAT_0a3e9fa8;
      bVar5 = *param_2;
      uVar6 = (ulong)bVar5;
      bVar12 = uVar6 == 4;
      if (bVar12) {
        uVar7 = *(ushort *)(param_2 + 0x12);
        lVar10 = *(long *)(*(long *)(param_1 + 0x10) + 8);
        if (*(ulong *)(lVar10 + (ulong)uVar7 * 0x18) <= *(ulong *)(lVar10 + (ulong)local_40 * 0x18))
        {
          *param_4 = local_40;
          param_4[1] = local_3e;
          goto LAB_083e49c0;
        }
        *(ushort *)(param_2 + 0x12) = local_40;
        plVar11 = _DAT_0a3e9fa8;
        uVar1 = *(ushort *)(param_2 + 10);
        *(ushort *)(param_2 + 10) = local_3e;
        *param_4 = uVar7;
        uVar6 = 3;
        param_4[1] = uVar1;
      }
      else {
        *param_2 = bVar5 + 1;
        *(ushort *)(param_2 + uVar6 * 2 + 0xc) = local_40;
        *(ushort *)(param_2 + (ulong)(byte)(bVar5 + 1) * 2 + 2) = local_3e;
        if (bVar5 == 0) goto LAB_083e49c0;
        lVar10 = *(long *)(*(long *)(param_1 + 0x10) + 8);
      }
      do {
        uVar7 = *(ushort *)(param_2 + uVar6 * 2 + 0xc);
        uVar8 = (ulong)((int)uVar6 - 1);
        if (*(ulong *)(lVar10 + (ulong)*(ushort *)(param_2 + uVar8 * 2 + 0xc) * 0x18) <=
            *(ulong *)(lVar10 + (ulong)uVar7 * 0x18)) break;
        *(ushort *)(param_2 + uVar6 * 2 + 0xc) = *(ushort *)(param_2 + uVar8 * 2 + 0xc);
        *(ushort *)(param_2 + uVar8 * 2 + 0xc) = uVar7;
        auVar3 = vpshuflw_avx(ZEXT416(*(uint *)(param_2 + uVar6 * 2 + 2)),0xe1);
        *(int *)(param_2 + uVar6 * 2 + 2) = auVar3._0_4_;
        bVar5 = (char)uVar6 - 1;
        uVar6 = (ulong)bVar5;
      } while (bVar5 != 0);
      goto LAB_083e49c0;
    }
LAB_083e49be:
    bVar12 = false;
  }
LAB_083e49c0:
  if (*plVar11 != local_38) {
    func_0x08f68a00();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  return bVar12;
}


