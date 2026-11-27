// window.elf d53960482354c9699902d859c4c2bc8b45357d43882a00ef57046c2f70004d8f
// FUN_008d0210 @ 008d0210 size=1125
// undefined FUN_008d0210()


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008d0210(long param_1)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  long *plVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  short sVar9;
  uint *puVar10;
  int iVar11;
  ulong uVar12;
  uint *puVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  uint uVar18;
  uint *puVar19;
  uint *puVar20;
  long lVar21;
  long lVar22;
  undefined8 *puVar23;
  undefined1 local_44 [12];
  long local_38;
  
  local_38 = *_DAT_0a3e9fa8;
  func_0x00001050();
  if ((*(long *)(param_1 + 0x7e60) != 0) &&
     (uVar12 = (ulong)*(ushort *)(param_1 + 0x7e58), uVar12 != 0)) {
    puVar23 = (undefined8 *)(param_1 + 0x7e50);
    sVar9 = 1;
    while( true ) {
      uVar12 = uVar12 - 1;
      if ((sVar9 != 0) && (*(long *)*puVar23 != 0)) {
        func_0x069a5e40(puVar23);
      }
      func_0x069a5dd0(puVar23);
      if (uVar12 == 0) break;
      sVar9 = *(short *)(param_1 + 0x7e58);
    }
  }
  puVar10 = (uint *)(param_1 + 0x7da0);
  puVar2 = (uint *)(param_1 + 0x7dc8);
  iVar11 = -1;
  do {
    puVar10 = *(uint **)(puVar10 + 8);
    iVar11 = iVar11 + 1;
  } while (puVar10 != puVar2);
  if ((iVar11 != 0) && (*(uint **)(param_1 + 0x7dc0) != puVar2)) {
    puVar10 = *(uint **)(param_1 + 0x7dc0);
    do {
      puVar3 = *(uint **)(puVar10 + 8);
      uVar18 = *puVar10 & 0x3fffff;
      if (uVar18 == 0x3fffff) {
        uVar18 = 0xfffffff;
      }
      iVar11 = FUN_008d0840(_DAT_0e5565a8,uVar18 + _DAT_0e7923b8 & 0xfffffff);
      uVar18 = *puVar10 & 0x3fffff;
      if (uVar18 == 0x3fffff) {
        uVar18 = 0xffffffff;
      }
      lVar17 = *(long *)(_DAT_0e7923e8 + (ulong)(uVar18 * _DAT_0e7923f0));
      if ((lVar17 == 0) || (**(long **)(lVar17 + 0x30) == 0)) {
        func_0x008c96e0(0xa942c18,1,0x7aa,0xbe7eb565);
        func_0x008cf900(*(undefined8 *)(puVar10 + 2));
        *puVar10 = 0x3fffff;
        puVar10[2] = 0;
        puVar10[3] = 0;
LAB_008d04f2:
        puVar10[4] = 0;
        *(undefined1 *)(puVar10 + 5) = 0;
        lVar17 = *(long *)(puVar10 + 6);
        lVar21 = *(long *)(puVar10 + 8);
        *(long *)(lVar21 + 0x18) = lVar17;
        *(long *)(lVar17 + 0x20) = lVar21;
        lVar17 = *(long *)(param_1 + 0x7e10);
        *(long *)(puVar10 + 8) = lVar17;
        *(uint **)(lVar17 + 0x18) = puVar10;
        *(long *)(puVar10 + 6) = param_1 + 0x7df0;
        *(uint **)(param_1 + 0x7e10) = puVar10;
      }
      else if ((iVar11 == 1) && (*(short *)(**(long **)(lVar17 + 0x30) + 0x46) == 1)) {
        LOCK();
        piVar1 = (int *)(lVar17 + 0x18);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          func_0x00c90030(lVar17);
          func_0x003a3d90(lVar17);
        }
        func_0x008cf900(*(undefined8 *)(puVar10 + 2));
        puVar10[2] = 0;
        puVar10[3] = 0;
        plVar4 = *(long **)(param_1 + 0x7d98);
        uVar18 = *puVar10;
        func_0x00c120b0(*(undefined4 *)(*plVar4 + 8),uVar18,2);
        lVar21 = _DAT_0e5565a8;
        lVar17 = *plVar4;
        uVar15 = uVar18 & 0x3fffff;
        uVar16 = uVar15;
        if (uVar15 == 0x3fffff) {
          uVar16 = 0xffffffff;
        }
        if (uVar15 == 0x3fffff) {
          uVar15 = 0xfffffff;
        }
        puVar23 = (undefined8 *)
                  ((ulong)(uVar16 * *(int *)(lVar17 + 0x40)) + *(long *)(lVar17 + 0x38));
        if ((*(byte *)(*(long *)(lVar17 + 0x58) + (ulong)(uVar16 >> 3)) >> (uVar16 & 7) & 1) == 0) {
          puVar23 = (undefined8 *)0x0;
        }
        uVar16 = uVar15 + *(int *)(lVar17 + 8) & 0xfffffff;
        func_0x011b7c70(local_44,7);
        uVar12 = (ulong)(uVar16 % 0x1f7);
        if (uVar16 == 0xfffffff) {
          uVar12 = 0xbd;
        }
        lVar14 = uVar12 * 0xa0 + lVar21;
        lVar21 = (ulong)*(uint *)(lVar21 + 0x14) * 0x10;
        puVar13 = *(uint **)(lVar21 + 0x28 + lVar14);
        uVar15 = *(uint *)(lVar21 + 0x24 + lVar14);
        uVar12 = (ulong)uVar15;
        puVar20 = puVar13;
        if (uVar12 != 0) {
          lVar22 = uVar12 * 0x1c;
          puVar19 = puVar13;
          do {
            puVar20 = puVar19;
            if ((*puVar19 & 0xfffffff) == uVar16) break;
            puVar19 = puVar19 + 7;
            lVar22 = lVar22 + -0x1c;
            puVar20 = puVar13 + uVar12 * 7;
          } while (lVar22 != 0);
        }
        uVar15 = uVar15 - 1;
        lVar14 = lVar21 + 0x20 + lVar14;
        puVar13 = puVar13 + (ulong)uVar15 * 7;
        if (puVar20 != puVar13) {
          uVar6 = *(undefined8 *)puVar13;
          uVar7 = *(undefined8 *)(puVar13 + 2);
          uVar8 = *(undefined8 *)(puVar13 + 5);
          *(undefined8 *)(puVar20 + 3) = *(undefined8 *)(puVar13 + 3);
          *(undefined8 *)(puVar20 + 5) = uVar8;
          *(undefined8 *)puVar20 = uVar6;
          *(undefined8 *)(puVar20 + 2) = uVar7;
          uVar15 = *(int *)(lVar14 + 4) - 1;
        }
        *(uint *)(lVar14 + 4) = uVar15;
        func_0x011d0270(local_44);
        *puVar23 = 0;
        func_0x008cff40(lVar17,uVar18);
        *puVar10 = 0x3fffff;
        puVar10[2] = 0;
        puVar10[3] = 0;
        goto LAB_008d04f2;
      }
      puVar10 = puVar3;
    } while (puVar3 != puVar2);
  }
  if (*(int *)(param_1 + 0x3b8c) != 0) {
    lVar17 = 0;
    uVar12 = 0;
    do {
      lVar21 = *(long *)(param_1 + 0x3b90);
      iVar11 = *(int *)(lVar21 + lVar17);
      if (iVar11 != 10) {
        if (*(char *)(lVar21 + 0x104 + lVar17) == '\x01') {
          func_0x066f6c10(lVar21 + lVar17);
        }
        else if (iVar11 == 2) {
          func_0x066f66c0(param_1);
        }
        else if (iVar11 == 3) {
          func_0x066f5fe0(param_1);
        }
        else if (iVar11 == 8) {
          func_0x066f6d10(param_1);
        }
      }
      uVar12 = uVar12 + 1;
      lVar17 = lVar17 + 0x108;
    } while (uVar12 < *(uint *)(param_1 + 0x3b8c));
  }
  lVar21 = _DAT_0c31ecc0;
  iVar11 = -1;
  lVar17 = _DAT_0c31ecc0;
  do {
    lVar17 = *(long *)(lVar17 + 0x20);
    iVar11 = iVar11 + 1;
  } while (lVar17 != _DAT_0c31ecc0 + 0x28);
  if (iVar11 != 0) {
    func_0x066f67c0(_DAT_0c31ecc0);
    func_0x066f6a70(lVar21);
  }
  if (*_DAT_0a3e9fa8 != local_38) {
    func_0x08f68a00();
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


