// window.elf f73d8bde3636243e04df956e7df154afebded3ec85692b8da4b5fd9976ee3895
// FUN_083fbce0 @ 083fbce0 size=201
// undefined FUN_083fbce0()


void FUN_083fbce0(int *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 auStack_28 [8];
  
  puVar5 = auStack_28;
  puVar4 = auStack_28;
  uVar7 = *param_2;
  iVar6 = (int)((ulong)uVar7 >> 0x20);
  if ((int)uVar7 < 1 && iVar6 != 0) {
    puVar5 = auStack_28;
    if (*param_1 < iVar6) {
      if (*(long *)(param_1 + 2) != 0) {
        func_0x003a4ca0();
      }
      param_1[2] = 0;
      param_1[3] = 0;
      *param_1 = 0;
      lVar3 = func_0x005d0100((long)iVar6 << 3,8);
      *(long *)(param_1 + 2) = lVar3;
      if (lVar3 == 0) {
        pcVar2 = (code *)swi(0x41);
        (*pcVar2)();
        puVar4 = &stack0xffffffffffffffe0;
      }
      *param_1 = iVar6;
      iVar6 = *(int *)((long)param_2 + 4);
      puVar5 = puVar4;
    }
    uVar7 = param_2[1];
    uVar1 = *(undefined8 *)(param_1 + 2);
    *(undefined8 *)(puVar5 + -8) = 0x83fbd64;
    func_0x08f67840(uVar1,uVar7,(long)iVar6 << 3);
    uVar7 = *param_2;
  }
  *(undefined8 *)param_1 = uVar7;
  *param_2 = 0;
  if (*(long *)(param_1 + 2) != 0) {
    *(undefined8 *)(puVar5 + -8) = 0x83fbd82;
    func_0x003a4ca0();
  }
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)(param_1 + 2) = param_2[1];
  param_2[1] = 0;
  *(undefined4 *)param_2 = 0;
  return;
}


