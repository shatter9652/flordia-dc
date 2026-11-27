// window.elf f73d8bde3636243e04df956e7df154afebded3ec85692b8da4b5fd9976ee3895
// FUN_083fa6b0 @ 083fa6b0 size=107
// undefined FUN_083fa6b0()


void FUN_083fa6b0(undefined8 param_1,long param_2,int param_3)

{
  undefined1 uVar1;
  code *pcVar2;
  int iVar3;
  
  if (param_3 == 0) {
    *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
    func_0x04387720(param_2 + 0x50,*(undefined1 *)(param_2 + 0x70));
    uVar1 = *(undefined1 *)(param_2 + 0x70);
    iVar3 = *(int *)(param_2 + 0x20);
    param_2 = param_2 + 0x28;
  }
  else {
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    func_0x04387720(param_2 + 0x28,*(undefined1 *)(param_2 + 0x71));
    uVar1 = *(undefined1 *)(param_2 + 0x71);
    iVar3 = *(int *)(param_2 + 0x24);
    param_2 = param_2 + 0x50;
  }
  iVar3 = func_0x043876e0(param_2,uVar1,iVar3 + -1,1,0);
  if (iVar3 != 0) {
    pcVar2 = (code *)swi(0x41);
    (*pcVar2)();
  }
  return;
}


