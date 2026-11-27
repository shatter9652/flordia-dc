// window.elf d53960482354c9699902d859c4c2bc8b45357d43882a00ef57046c2f70004d8f
// FUN_008e45b0 @ 008e45b0 size=770
// undefined FUN_008e45b0()


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_008e45b0(long *param_1,ulong param_2,int param_3,undefined1 *param_4)

{
  long *plVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  code *pcVar7;
  long *plVar8;
  int *piVar9;
  undefined8 uVar10;
  uint uVar11;
  ulong *puVar12;
  undefined1 *puVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  bool bVar21;
  undefined1 *local_58 [4];
  long local_38;
  
  plVar8 = _DAT_0a3e9fa8;
  local_38 = *_DAT_0a3e9fa8;
  bVar2 = *(byte *)(param_1 + 3);
  if ((bVar2 & 4) == 0) {
    if ((bVar2 & 8) == 0) goto LAB_008e468b;
    uVar16 = param_2 & 0xffffffff;
    param_2 = param_2 & 0xffffffff;
    func_0x089b17d0(local_58,param_1[2],uVar16,2);
    if (local_58[0] == (undefined1 *)0x0) goto LAB_008e468b;
    uVar16 = CONCAT71((int7)((ulong)local_58[0] >> 8),*local_58[0]);
    *param_4 = *local_58[0];
LAB_008e47b2:
    uVar10 = CONCAT71((int7)(uVar16 >> 8),1);
    goto LAB_008e46ef;
  }
  lVar5 = param_1[2];
  if (0 < (long)*(char *)(lVar5 + 0x80)) {
    lVar15 = 0;
    uVar16 = param_2 & 0xffffffff | 0x200000000;
    do {
      puVar6 = *(undefined8 **)(lVar5 + 0x40 + lVar15 * 8);
      if ((((puVar6 != (undefined8 *)0x0) &&
           (uVar17 = (ulong)*(uint *)((long)puVar6 + 0x14) & 0x7fff,
           (*(uint *)((long)puVar6 + 0x14) & 0x7fff) != 0)) && ((*(byte *)(puVar6 + 1) & 4) != 0))
         && ((*(uint *)(puVar6 + 2) >> ((uint)param_2 & 0x1f) & 1) != 0)) {
        puVar13 = (undefined1 *)*puVar6;
        uVar18 = uVar17;
        do {
          uVar20 = uVar18 >> 1;
          uVar19 = ~uVar20 + uVar18;
          uVar18 = uVar20;
          if (*(ulong *)(puVar13 + uVar20 * 0x20 + 0x20 + -8) < uVar16) {
            puVar13 = puVar13 + uVar20 * 0x20 + 0x20;
            uVar18 = uVar19;
          }
        } while (0 < (long)uVar18);
        if ((puVar13 != (undefined1 *)*puVar6 + (uint)((int)uVar17 << 5)) &&
           (*(ulong *)(puVar13 + 0x18) == uVar16)) {
          uVar16 = CONCAT71((int7)((ulong)lVar5 >> 8),*puVar13);
          *param_4 = *puVar13;
          goto LAB_008e47b2;
        }
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 != *(char *)(lVar5 + 0x80));
  }
LAB_008e468b:
  if ((bVar2 & 2) != 0) {
    iVar3 = *(int *)((long)param_1 + 0x1c);
    iVar4 = (int)param_1[4];
    plVar1 = (long *)(*param_1 + 0x650 + (ulong)*(uint *)(*param_1 + 0x648) * 0x30);
    bVar21 = *(short *)((long)plVar1 + 0x2a) < 0;
    uVar14 = (uint)param_2;
    if (param_3 == 0) {
      if (bVar21 && (iVar4 != 0 && iVar3 != 0)) {
LAB_008e47f0:
        uVar11 = (uint)*(ushort *)((long)plVar1 + 0x24);
        if (*(ushort *)((long)plVar1 + 0x24) != 0) {
          piVar9 = (int *)(((ulong)*(ushort *)(plVar1 + 5) + plVar1[1]) -
                          (ulong)*(ushort *)((long)plVar1 + 0x26));
          do {
            if ((((piVar9[2] == uVar14) && (*(char *)((long)piVar9 + 0xf) == '\x02')) &&
                (*piVar9 == iVar3)) && (piVar9[1] == iVar4)) goto LAB_008e47a7;
            piVar9 = (int *)((long)piVar9 + (ulong)*(byte *)((long)piVar9 + 0xe));
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        piVar9 = (int *)func_0x029f67f0(plVar1,param_2,2);
        if (piVar9 != (int *)0x0) {
LAB_008e47a7:
          uVar16 = (ulong)(*(ushort *)(piVar9 + 3) >> 0xd) & 0xffffffffffffff01;
          *param_4 = (char)uVar16;
          goto LAB_008e47b2;
        }
      }
      else {
LAB_008e46dd:
        if (((*(byte *)(plVar1 + 3) & 4) != 0) &&
           ((*(uint *)(plVar1 + 4) >> (uVar14 & 0x1f) & 1) != 0)) {
          lVar5 = *plVar1;
          if (lVar5 == 0) {
            uVar11 = (uint)*(ushort *)((long)plVar1 + 0x24);
            if (*(ushort *)((long)plVar1 + 0x24) != 0) {
              piVar9 = (int *)(((ulong)*(ushort *)(plVar1 + 5) + plVar1[1]) -
                              (ulong)*(ushort *)((long)plVar1 + 0x26));
              do {
                if (((piVar9[2] == uVar14) && (*(char *)((long)piVar9 + 0xf) == '\x02')) &&
                   (*piVar9 == 0)) goto LAB_008e47a7;
                piVar9 = (int *)((long)piVar9 + (ulong)*(byte *)((long)piVar9 + 0xe));
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
            }
          }
          else if ((ulong)*(uint *)(lVar5 + 0x1c8) != 0) {
            uVar16 = param_2 & 0xffffffff | 0x200000000;
            puVar12 = *(ulong **)
                       (*(long *)(lVar5 + 0x1c0) + (uVar16 % (ulong)*(uint *)(lVar5 + 0x1c8)) * 8);
            uVar10 = 0;
            if (puVar12 == (ulong *)0x0) goto LAB_008e46ef;
            do {
              if (uVar16 == *puVar12) {
                piVar9 = (int *)puVar12[1];
                if ((piVar9 != (int *)0x0) && (*(char *)((long)piVar9 + 0xf) == '\x02'))
                goto LAB_008e47a7;
                break;
              }
              puVar12 = (ulong *)puVar12[2];
            } while (puVar12 != (ulong *)0x0);
          }
        }
      }
    }
    else {
      if (param_3 == 2) goto LAB_008e46dd;
      if ((param_3 != 1) || (bVar21 && (iVar4 != 0 && iVar3 != 0))) goto LAB_008e47f0;
    }
  }
  uVar10 = 0;
LAB_008e46ef:
  if (*plVar8 == local_38) {
    return uVar10;
  }
  func_0x08f68a00();
                    /* WARNING: Does not return */
  pcVar7 = (code *)invalidInstructionException();
  (*pcVar7)();
}


