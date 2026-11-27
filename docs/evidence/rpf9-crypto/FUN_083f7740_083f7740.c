// window.elf f73d8bde3636243e04df956e7df154afebded3ec85692b8da4b5fd9976ee3895
// FUN_083f7740 @ 083f7740 size=216
// undefined FUN_083f7740()


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_083f7740(long param_1,char *param_2,int param_3)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  undefined1 local_39;
  long local_38;
  
  plVar7 = _DAT_0a3e9fa8;
  local_38 = *_DAT_0a3e9fa8;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (*param_2 == '\0') {
    param_2 = (char *)0x9c569cd;
  }
  iVar4 = func_0x08f66580(param_2);
  iVar5 = func_0x01f408c0(*(undefined8 *)(param_1 + 0x18),param_2,iVar4);
  if (param_3 != 0) {
    iVar6 = param_3;
    do {
      lVar2 = *(long *)(param_1 + 0x18);
      if (*(int *)(lVar2 + 0x24) == 0) {
        iVar1 = *(int *)(lVar2 + 0x20);
        if (*(int *)(lVar2 + 0x28) <= iVar1) goto LAB_083f77cd;
        *(int *)(lVar2 + 0x20) = iVar1 + 1;
        *(undefined1 *)(*(long *)(lVar2 + 0x10) + (long)iVar1) = 9;
      }
      else {
LAB_083f77cd:
        local_39 = 9;
        func_0x01f408c0(lVar2,&local_39,1);
      }
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    iVar5 = iVar5 + param_3;
    plVar7 = _DAT_0a3e9fa8;
  }
  if (*plVar7 == local_38) {
    return iVar5 == param_3 + iVar4;
  }
  func_0x08f68a00();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}


