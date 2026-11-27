// window.elf f73d8bde3636243e04df956e7df154afebded3ec85692b8da4b5fd9976ee3895
// FUN_08411aa0 @ 08411aa0 size=335
// undefined FUN_08411aa0()


void FUN_08411aa0(uint *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  uint *puVar9;
  
  uVar7 = param_1[1];
  if (uVar7 == *param_1) {
    uVar5 = 2;
    if (2 < uVar7) {
      uVar5 = uVar7;
    }
    uVar7 = (uVar5 >> 1) + uVar7;
    lVar6 = func_0x005d0100((ulong)uVar7 * 0x88,4);
    if ((ulong)param_1[1] != 0) {
      lVar3 = *(long *)(param_1 + 2);
      lVar8 = 0;
      lVar4 = (ulong)param_1[1] * 0x88;
      do {
        puVar9 = (uint *)(lVar6 + lVar8);
        if (puVar9 != (uint *)0x0) {
          *(undefined8 *)(lVar6 + lVar8) = 0x20;
          uVar2 = *(undefined8 *)(lVar3 + lVar8);
          uVar5 = (uint)((ulong)uVar2 >> 0x20);
          if ((uint)uVar2 < 0x21 && uVar5 != 0) {
            if (0x20 < uVar5) {
              *puVar9 = uVar5;
            }
            lVar1 = lVar3 + 8 + lVar8;
            func_0x08f67840(lVar6 + 8 + lVar8,lVar1,(ulong)uVar5 << 2);
            uVar2 = *(undefined8 *)(lVar1 + -8);
          }
          *(undefined8 *)puVar9 = uVar2;
          *(undefined8 *)(lVar3 + lVar8) = 0x20;
        }
        lVar8 = lVar8 + 0x88;
      } while (lVar4 != lVar8);
      lVar8 = 0;
      do {
        *(undefined8 *)(lVar3 + lVar8) = 0x20;
        lVar8 = lVar8 + 0x88;
      } while (lVar4 != lVar8);
    }
    if (*(long *)(param_1 + 2) != 0) {
      func_0x003a4ca0();
    }
    *(long *)(param_1 + 2) = lVar6;
    *param_1 = uVar7;
    uVar7 = param_1[1];
  }
  else {
    lVar6 = *(long *)(param_1 + 2);
  }
  param_1[1] = uVar7 + 1;
  if (lVar6 != 0) {
    *(undefined8 *)((ulong)uVar7 * 0x88 + lVar6) = 0x20;
  }
  return;
}


