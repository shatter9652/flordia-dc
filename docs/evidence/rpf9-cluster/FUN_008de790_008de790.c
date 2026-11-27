// window.elf d53960482354c9699902d859c4c2bc8b45357d43882a00ef57046c2f70004d8f
// FUN_008de790 @ 008de790 size=401
// undefined FUN_008de790()


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Possible PIC construction at 0x008de910: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x008de915) */

void FUN_008de790(long param_1)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  byte bVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  bool bVar14;
  
  bVar4 = *(byte *)(param_1 + 0xd);
  lVar13 = (ulong)*(byte *)(param_1 + 0xb) * 0x40;
  lVar10 = (ulong)*(byte *)(param_1 + 0xc) * 0x6008;
  puVar2 = (uint *)(*(long *)(lVar13 + 0xe0ef2c8) + lVar10);
  uVar9 = *(uint *)(*(long *)(lVar13 + 0xe0ef2c8) + lVar10);
  do {
    while (uVar8 = (ulong)(uVar9 & 0x7ff), puVar2[uVar8 + 2] != uVar9) {
      uVar9 = *puVar2;
    }
    uVar12 = uVar9 + 1;
    LOCK();
    uVar7 = *puVar2;
    if (uVar9 == uVar7) {
      *puVar2 = uVar12;
      uVar7 = uVar9;
    }
    UNLOCK();
    bVar14 = uVar9 != uVar7;
    uVar9 = uVar7;
  } while (bVar14);
  *(long *)(puVar2 + uVar8 * 2 + 0x802) = param_1;
  puVar2[uVar8 + 2] = uVar12;
  LOCK();
  piVar1 = (int *)(lVar13 + 0xe0ef2dc);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + (uint)bVar4;
  UNLOCK();
  uVar9 = *(uint *)(lVar13 + 0xe0ef2d4);
  uVar8 = (ulong)uVar9;
  uVar12 = bVar4 + 0xf + iVar3 >> 4;
  if (uVar8 != 0) {
    if ((int)uVar12 < (int)uVar9) {
      uVar9 = uVar12;
    }
    lVar10 = 0;
    do {
      piVar1 = (int *)(*(long *)(lVar13 + 0xe0ef2c0) + 0x10 + lVar10);
      lVar10 = lVar10 + 0x40;
      uVar9 = uVar9 - *piVar1;
    } while (uVar8 << 6 != lVar10);
    if (0 < (int)uVar9) {
      uVar11 = 1;
      lVar10 = 0x10;
      uVar7 = 0;
      do {
        lVar5 = *(long *)(lVar13 + 0xe0ef2c0);
        if (*(int *)(lVar5 + lVar10) == 0) {
          *(undefined4 *)(lVar5 + lVar10) = 1;
          uVar9 = uVar9 - 1;
          uVar7 = uVar7 | *(uint *)(lVar5 + 4 + lVar10);
        }
        if (uVar8 <= uVar11) break;
        uVar11 = uVar11 + 1;
        lVar10 = lVar10 + 0x40;
      } while (0 < (int)uVar9);
      if (uVar7 != 0) {
        halt_baddata();
      }
    }
  }
  uVar12 = uVar12 - *(int *)(lVar13 + 0xe0ef2d4);
  if ((0 < (int)uVar12) && (plVar6 = *(long **)(lVar13 + 0xe0ef2e8), plVar6 != (long *)0x0)) {
    uVar9 = *(uint *)((long)plVar6 + 0x14);
    uVar8 = (ulong)uVar9;
    if (uVar8 != 0) {
      if ((int)uVar9 <= (int)uVar12) {
        uVar12 = uVar9;
      }
      lVar13 = 0;
      do {
        piVar1 = (int *)(*plVar6 + 0x10 + lVar13);
        lVar13 = lVar13 + 0x40;
        uVar12 = uVar12 - *piVar1;
      } while (uVar8 << 6 != lVar13);
      if (0 < (int)uVar12) {
        uVar11 = 1;
        lVar13 = 0x10;
        uVar9 = 0;
        do {
          lVar10 = *plVar6;
          if (*(int *)(lVar10 + lVar13) == 0) {
            *(undefined4 *)(lVar10 + lVar13) = 1;
            uVar12 = uVar12 - 1;
            uVar9 = uVar9 | *(uint *)(lVar10 + 4 + lVar13);
          }
          if (uVar8 <= uVar11) break;
          uVar11 = uVar11 + 1;
          lVar13 = lVar13 + 0x40;
        } while (0 < (int)uVar12);
        if (uVar9 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
    }
  }
  return;
}


