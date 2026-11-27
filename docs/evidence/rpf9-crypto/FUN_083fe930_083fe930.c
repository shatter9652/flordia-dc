// window.elf f73d8bde3636243e04df956e7df154afebded3ec85692b8da4b5fd9976ee3895
// FUN_083fe930 @ 083fe930 size=300
// undefined FUN_083fe930()


long FUN_083fe930(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  
  iVar1 = func_0x08f66610(param_2,0x9c65621,7);
  lVar7 = -1;
  if (iVar1 != 0) {
    return -1;
  }
  lVar8 = 0;
  pcVar3 = (char *)(param_2 + 8 + (ulong)(*(char *)(param_2 + 9) == 'x') * 2);
  do {
    iVar1 = (int)*pcVar3;
    uVar6 = iVar1 - 0x30;
    if (9 < uVar6) {
      if (iVar1 - 0x61U < 6) {
        uVar6 = iVar1 - 0x57;
      }
      else {
        if (iVar1 - 0x47U < 0xfffffffa) break;
        uVar6 = iVar1 - 0x37;
      }
    }
    pcVar3 = pcVar3 + 1;
    lVar8 = lVar8 * 0x10 + (ulong)uVar6;
  } while( true );
  lVar4 = func_0x08f665b0(param_2,0x2c);
  if (lVar4 != 0) {
    uVar2 = func_0x08f66640(lVar4 + 1,0,10);
    lVar4 = func_0x08f665b0(lVar4 + 1,0x2c);
    if (lVar4 != 0) {
      lVar7 = 0;
      iVar1 = func_0x08f66640(lVar4 + 1,0,10);
      func_0x00001050(0xdf600b0);
      plVar5 = (long *)&DAT_0df600d0;
      do {
        if (*plVar5 == 0) {
          *plVar5 = lVar8;
          *(undefined4 *)(plVar5 + 1) = uVar2;
          *(undefined4 *)((long)plVar5 + 0xc) = 0;
          *(bool *)(plVar5 + 2) = iVar1 != 0;
          goto LAB_083fea4b;
        }
        lVar7 = lVar7 + 1;
        plVar5 = plVar5 + 3;
      } while (lVar7 != 0x40);
      lVar7 = -1;
LAB_083fea4b:
      func_0x00001000(0xdf600b0);
    }
  }
  return lVar7;
}


