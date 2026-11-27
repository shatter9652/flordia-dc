// window.elf f73d8bde3636243e04df956e7df154afebded3ec85692b8da4b5fd9976ee3895
// FUN_083fd890 @ 083fd890 size=409
// undefined FUN_083fd890()


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_083fd890(long param_1)

{
  int *piVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  
  func_0x00001050(0xdf5ff60);
  lVar7 = _DAT_0df5ff58;
  iVar12 = _DAT_0df5ff54;
  lVar10 = (long)_DAT_0df5ff54;
  if (0 < lVar10) {
    lVar5 = 0;
    lVar8 = _DAT_0df5ff58 + 0x30;
    lVar13 = lVar10 * 0x20;
    do {
      lVar13 = lVar13 + -0x20;
      lVar11 = lVar5 * 0x20;
      lVar6 = (long)*(int *)(_DAT_0df5ff58 + 0x14 + lVar11);
      if (0 < lVar6) {
        lVar2 = _DAT_0df5ff58 + 0x10 + lVar11;
        lVar9 = 0;
        lVar4 = *(long *)(lVar2 + 8);
        do {
          if (*(long *)(lVar4 + lVar9 * 8) == param_1) {
            lVar5 = lVar4 + 8 + lVar9 * 8;
            func_0x08f689d0(lVar4 + lVar9 * 8,lVar5,(lVar4 + lVar6 * 8) - lVar5);
            piVar1 = (int *)(lVar2 + 4);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 != 0) {
              halt_baddata();
            }
            lVar11 = lVar7 + 0x20 + lVar11;
            *(undefined4 *)(lVar11 + -0xc) = 0;
            if (lVar11 != lVar10 * 0x20 + lVar7) {
              do {
                if (*(long *)(lVar8 + -0x30) != 0) {
                  func_0x003a4ca0();
                }
                *(undefined8 *)(lVar8 + -0x30) = *(undefined8 *)(lVar8 + -0x10);
                *(undefined8 *)(lVar8 + -0x10) = 0;
                *(undefined4 *)(lVar8 + -0x28) = *(undefined4 *)(lVar8 + -8);
                *(undefined4 *)(lVar8 + -0x1c) = 0;
                if (*(long *)(lVar8 + -0x18) != 0) {
                  func_0x003a4ca0();
                }
                *(undefined8 *)(lVar8 + -0x18) = 0;
                *(undefined4 *)(lVar8 + -0x20) = 0;
                FUN_083fbce0(lVar8 + -0x20,lVar8);
                lVar8 = lVar8 + 0x20;
                lVar13 = lVar13 + -0x20;
                lVar7 = _DAT_0df5ff58;
                iVar12 = _DAT_0df5ff54;
              } while (lVar13 != 0);
            }
            _DAT_0df5ff54 = iVar12 + -1;
            puVar3 = (undefined8 *)((long)iVar12 * 0x20 + -0x20 + lVar7);
            *(undefined4 *)((long)puVar3 + 0x14) = 0;
            if (puVar3[3] != 0) {
              func_0x003a4ca0();
            }
            *(undefined4 *)(puVar3 + 2) = 0;
            puVar3[3] = 0;
            func_0x003a4ca0(*puVar3);
            halt_baddata();
          }
          lVar9 = lVar9 + 1;
        } while (lVar6 != lVar9);
      }
      lVar5 = lVar5 + 1;
      lVar8 = lVar8 + 0x20;
    } while (lVar5 != lVar10);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


