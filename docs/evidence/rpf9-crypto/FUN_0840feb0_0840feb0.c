// window.elf f73d8bde3636243e04df956e7df154afebded3ec85692b8da4b5fd9976ee3895
// FUN_0840feb0 @ 0840feb0 size=199
// undefined FUN_0840feb0()


void FUN_0840feb0(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  
  if (param_2 != 0) {
    LOCK();
    plVar2 = *(long **)(param_2 + 0x28);
    if (param_1 == plVar2) {
      *(long *)(param_2 + 0x28) = 0;
      plVar2 = param_1;
    }
    UNLOCK();
    if (param_1 == plVar2) {
      for (puVar3 = (undefined8 *)param_1[3]; puVar3 != (undefined8 *)0x0;
          puVar3 = (undefined8 *)*puVar3) {
        lVar1 = puVar3[1];
        if (param_2 == lVar1 && lVar1 != puVar3[3]) {
          puVar3[1] = *(undefined8 *)(lVar1 + 0x18);
          *(byte *)(puVar3 + 5) = *(byte *)(puVar3 + 5) & 0xfe;
        }
      }
      if (param_2 == *param_1) {
        *param_1 = *(long *)(*param_1 + 0x18);
        *(undefined8 *)(param_2 + 0x18) = 0;
        if (*param_1 == 0) {
          param_1[1] = 0;
        }
        else {
          *(undefined8 *)(*param_1 + 0x20) = 0;
        }
      }
      else if (param_2 == param_1[1]) {
        param_1[1] = *(long *)(param_1[1] + 0x20);
        *(undefined8 *)(param_2 + 0x20) = 0;
        if (param_1[1] != 0) {
          *(undefined8 *)(param_1[1] + 0x18) = 0;
        }
      }
      else {
        lVar1 = *(long *)(param_2 + 0x18);
        auVar4._0_12_ = ZEXT812(0);
        auVar4._12_4_ = 0;
        *(long *)(*(long *)(param_2 + 0x20) + 0x18) = lVar1;
        *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
        *(undefined1 (*) [16])(param_2 + 0x18) = auVar4;
      }
      param_1[2] = param_1[2] + -1;
    }
  }
  return;
}


