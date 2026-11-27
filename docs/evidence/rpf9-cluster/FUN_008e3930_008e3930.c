// window.elf d53960482354c9699902d859c4c2bc8b45357d43882a00ef57046c2f70004d8f
// FUN_008e3930 @ 008e3930 size=946
// undefined FUN_008e3930()


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_008e3930(long *param_1,uint param_2,int param_3,int *param_4)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  code *pcVar7;
  long *plVar8;
  undefined8 uVar9;
  int *piVar10;
  ulong *puVar11;
  uint uVar12;
  int *piVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  bool bVar21;
  int *local_58 [4];
  long local_38;
  
  plVar8 = _DAT_0a3e9fa8;
  local_38 = *_DAT_0a3e9fa8;
  bVar2 = *(byte *)(param_1 + 3);
  if ((bVar2 & 4) == 0) {
    if (((bVar2 & 8) != 0) &&
       (func_0x089b17d0(local_58,param_1[2],param_2,5), local_58[0] != (int *)0x0)) {
      iVar4 = *local_58[0];
      *param_4 = iVar4;
      goto LAB_008e3b57;
    }
  }
  else {
    lVar15 = (long)*(char *)(param_1[2] + 0x80);
    if (0 < lVar15) {
      lVar16 = 0;
      do {
        puVar6 = *(undefined8 **)(param_1[2] + 0x40 + lVar16 * 8);
        if ((((puVar6 != (undefined8 *)0x0) &&
             (uVar17 = (ulong)*(uint *)((long)puVar6 + 0x14) & 0x7fff,
             (*(uint *)((long)puVar6 + 0x14) & 0x7fff) != 0)) &&
            ((*(byte *)(puVar6 + 1) & 0x20) != 0)) &&
           ((*(uint *)(puVar6 + 2) >> (param_2 & 0x1f) & 1) != 0)) {
          piVar10 = (int *)*puVar6;
          uVar20 = uVar17;
          do {
            uVar18 = uVar20 >> 1;
            uVar19 = ~uVar18 + uVar20;
            uVar20 = uVar18;
            if (*(ulong *)(piVar10 + uVar18 * 8 + 8 + -2) < ((ulong)param_2 | 0x500000000)) {
              piVar10 = piVar10 + uVar18 * 8 + 8;
              uVar20 = uVar19;
            }
          } while (0 < (long)uVar20);
          if ((piVar10 != (int *)((long)*puVar6 + (ulong)(uint)((int)uVar17 << 5))) &&
             (*(ulong *)(piVar10 + 6) == ((ulong)param_2 | 0x500000000))) {
            iVar4 = *piVar10;
            goto LAB_008e3b55;
          }
        }
        lVar16 = lVar16 + 1;
      } while (lVar16 != lVar15);
    }
  }
  if ((bVar2 & 2) != 0) {
    lVar15 = *param_1;
    iVar4 = *(int *)((long)param_1 + 0x1c);
    iVar5 = (int)param_1[4];
    lVar16 = (ulong)*(uint *)(lVar15 + 0x648) * 0x30;
    plVar1 = (long *)(lVar15 + 0x650 + lVar16);
    bVar21 = *(short *)(lVar15 + 0x67a + lVar16) < 0;
    if (param_3 == 0) {
      if (bVar21 && (iVar5 != 0 && iVar4 != 0)) {
LAB_008e3b75:
        piVar13 = (int *)(((ulong)*(ushort *)(plVar1 + 5) + plVar1[1]) -
                         (ulong)*(ushort *)((long)plVar1 + 0x26));
        uVar14 = (uint)*(ushort *)((long)plVar1 + 0x24);
        piVar10 = piVar13;
        uVar12 = uVar14;
        if (*(ushort *)((long)plVar1 + 0x24) != 0) {
          do {
            if ((((piVar10[2] == param_2) && (*(char *)((long)piVar10 + 0xf) == '\x05')) &&
                (*piVar10 == iVar4)) && (piVar10[1] == iVar5)) goto LAB_008e3b52;
            uVar12 = uVar12 - 1;
            piVar10 = (int *)((long)piVar10 + (ulong)*(byte *)((long)piVar10 + 0xe));
          } while (uVar12 != 0);
        }
        if (((*(byte *)(plVar1 + 3) & 0x20) != 0) &&
           ((*(uint *)(plVar1 + 4) >> (param_2 & 0x1f) & 1) != 0)) {
          lVar15 = *plVar1;
          piVar10 = piVar13;
          if (lVar15 == 0) {
            for (; uVar14 != 0; uVar14 = uVar14 - 1) {
              if (((piVar10[2] == param_2) && (*(char *)((long)piVar10 + 0xf) == '\x05')) &&
                 (*piVar10 == 0)) goto LAB_008e3b52;
              piVar10 = (int *)((long)piVar10 + (ulong)*(byte *)((long)piVar10 + 0xe));
            }
          }
          else if ((ulong)*(uint *)(lVar15 + 0x1c8) != 0) {
            puVar11 = *(ulong **)
                       (*(long *)(lVar15 + 0x1c0) +
                       (((ulong)param_2 | 0x500000000) % (ulong)*(uint *)(lVar15 + 0x1c8)) * 8);
            uVar9 = 0;
            if (puVar11 == (ulong *)0x0) goto LAB_008e3a92;
            do {
              if (((ulong)param_2 | 0x500000000) == *puVar11) {
                piVar10 = (int *)puVar11[1];
                if (piVar10 != (int *)0x0) {
                  cVar3 = *(char *)((long)piVar10 + 0xf);
                  goto joined_r0x008e3c62;
                }
                break;
              }
              puVar11 = (ulong *)puVar11[2];
            } while (puVar11 != (ulong *)0x0);
          }
        }
      }
      else {
LAB_008e3a82:
        if (((*(byte *)(plVar1 + 3) & 0x20) != 0) &&
           ((*(uint *)(plVar1 + 4) >> (param_2 & 0x1f) & 1) != 0)) {
          lVar15 = *plVar1;
          if (lVar15 == 0) {
            uVar12 = (uint)*(ushort *)((long)plVar1 + 0x24);
            if (*(ushort *)((long)plVar1 + 0x24) != 0) {
              piVar10 = (int *)(((ulong)*(ushort *)(plVar1 + 5) + plVar1[1]) -
                               (ulong)*(ushort *)((long)plVar1 + 0x26));
              do {
                if (((piVar10[2] == param_2) && (*(char *)((long)piVar10 + 0xf) == '\x05')) &&
                   (*piVar10 == 0)) goto LAB_008e3b52;
                piVar10 = (int *)((long)piVar10 + (ulong)*(byte *)((long)piVar10 + 0xe));
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
          }
          else if ((ulong)*(uint *)(lVar15 + 0x1c8) != 0) {
            puVar11 = *(ulong **)
                       (*(long *)(lVar15 + 0x1c0) +
                       (((ulong)param_2 | 0x500000000) % (ulong)*(uint *)(lVar15 + 0x1c8)) * 8);
            uVar9 = 0;
            if (puVar11 != (ulong *)0x0) {
LAB_008e3b27:
              if (((ulong)param_2 | 0x500000000) != *puVar11) goto code_r0x008e3b2c;
              piVar10 = (int *)puVar11[1];
              if (piVar10 != (int *)0x0) {
                cVar3 = *(char *)((long)piVar10 + 0xf);
joined_r0x008e3c62:
                if (cVar3 == '\x05') goto LAB_008e3b52;
              }
              goto LAB_008e3a90;
            }
            goto LAB_008e3a92;
          }
        }
      }
    }
    else {
      if (param_3 == 2) goto LAB_008e3a82;
      if ((param_3 != 1) || (bVar21 && (iVar5 != 0 && iVar4 != 0))) goto LAB_008e3b75;
    }
  }
LAB_008e3a90:
  uVar9 = 0;
LAB_008e3a92:
  if (*plVar8 == local_38) {
    return uVar9;
  }
  func_0x08f68a00();
                    /* WARNING: Does not return */
  pcVar7 = (code *)invalidInstructionException();
  (*pcVar7)();
code_r0x008e3b2c:
  puVar11 = (ulong *)puVar11[2];
  if (puVar11 == (ulong *)0x0) goto LAB_008e3a90;
  goto LAB_008e3b27;
LAB_008e3b52:
  iVar4 = piVar10[4];
LAB_008e3b55:
  *param_4 = iVar4;
LAB_008e3b57:
  uVar9 = CONCAT71((uint7)(uint3)((uint)iVar4 >> 8),1);
  goto LAB_008e3a92;
}


