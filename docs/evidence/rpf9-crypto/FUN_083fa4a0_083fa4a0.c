// window.elf f73d8bde3636243e04df956e7df154afebded3ec85692b8da4b5fd9976ee3895
// FUN_083fa4a0 @ 083fa4a0 size=72
// undefined FUN_083fa4a0()


int FUN_083fa4a0(undefined8 param_1,undefined4 *param_2,ulong param_3,undefined8 param_4,int param_5
                )

{
  ulong uVar1;
  char cVar2;
  int iVar3;
  
  uVar1 = *(ulong *)(param_2 + 4);
  iVar3 = 0;
  if (param_3 < uVar1) {
    iVar3 = param_5;
    if (uVar1 < param_3 + (long)param_5) {
      iVar3 = (int)uVar1 - (int)param_3;
    }
    cVar2 = FUN_083f96f0(*param_2,param_4,(int)param_3,(long)iVar3);
    if (cVar2 == '\0') {
      iVar3 = -1;
    }
  }
  return iVar3;
}


