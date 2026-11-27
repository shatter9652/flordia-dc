// window.elf f73d8bde3636243e04df956e7df154afebded3ec85692b8da4b5fd9976ee3895
// FUN_0840fa30 @ 0840fa30 size=240
// undefined FUN_0840fa30()


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0840fa30(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long local_58;
  long *local_50;
  long *local_48;
  long *local_40;
  long *local_38;
  byte local_30;
  long local_28;
  
  plVar1 = _DAT_0a3e9fa8;
  local_28 = *_DAT_0a3e9fa8;
  plVar2 = (long *)*param_1;
  local_40 = (long *)0x0;
  local_30 = 0xff;
  lVar4 = param_1[3];
  param_1[3] = (long)&local_58;
  local_58 = lVar4;
  local_50 = plVar2;
  local_48 = param_1;
  local_38 = param_1;
  if (plVar2 != (long *)0x0) {
    do {
      if (*plVar2 == 0) {
        (*(code *)plVar2[1])(param_2);
      }
      else {
        plVar5 = (long *)(*plVar2 + plVar2[2]);
        pcVar3 = (code *)plVar2[1];
        if (((ulong)pcVar3 & 1) != 0) {
          pcVar3 = *(code **)(pcVar3 + *plVar5 + -1);
        }
        (*pcVar3)(plVar5,param_2);
      }
      if ((local_30 & 1) == 0) {
        local_30 = local_30 | 1;
        plVar2 = local_50;
      }
      else if (local_50 == (long *)0x0) {
        if (((ulong)local_48 & 1) == 0 || local_48 < (long *)0x2) {
          plVar2 = (long *)0x0;
        }
        else {
          local_48 = (long *)((ulong)local_48 & 0xfffffffffffffffe);
          plVar2 = (long *)*local_48;
          local_50 = plVar2;
        }
      }
      else {
        plVar2 = (long *)local_50[3];
        local_50 = plVar2;
      }
    } while (plVar2 != local_40);
    lVar4 = *(long *)param_1[3];
  }
  param_1[3] = lVar4;
  if (*plVar1 != local_28) {
    func_0x08f68a00();
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  return;
}


