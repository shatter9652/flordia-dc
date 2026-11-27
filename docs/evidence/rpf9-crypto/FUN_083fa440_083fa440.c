// window.elf f73d8bde3636243e04df956e7df154afebded3ec85692b8da4b5fd9976ee3895
// FUN_083fa440 @ 083fa440 size=96
// undefined FUN_083fa440()


int FUN_083fa440(undefined8 param_1,undefined4 *param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  char cVar2;
  int iVar3;
  
  lVar1 = *(long *)(param_2 + 2);
  if (*(ulong *)(param_2 + 4) < (ulong)(lVar1 + param_4)) {
    param_4 = (int)*(ulong *)(param_2 + 4) - (int)lVar1;
  }
  if (param_4 == 0) {
    iVar3 = 0;
  }
  else {
    cVar2 = FUN_083f96f0(*param_2,param_3,lVar1,(long)param_4);
    iVar3 = -1;
    if (cVar2 != '\0') {
      *(long *)(param_2 + 2) = *(long *)(param_2 + 2) + (long)param_4;
      iVar3 = param_4;
    }
  }
  return iVar3;
}


