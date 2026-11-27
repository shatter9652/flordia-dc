// window.elf f73d8bde3636243e04df956e7df154afebded3ec85692b8da4b5fd9976ee3895
// FUN_083fb780 @ 083fb780 size=490
// undefined FUN_083fb780()


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_083fb780(long param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  code *pcVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  char *pcVar10;
  long *plVar11;
  long *in_FS_OFFSET;
  bool bVar12;
  char local_138 [256];
  long local_38;
  
  local_38 = *_DAT_0a3e9fa8;
  if (*(char *)(*in_FS_OFFSET + -0xc87) == '\0') {
    lVar7 = *in_FS_OFFSET;
    *(undefined1 *)(lVar7 + -0xc87) = 1;
    *(undefined4 *)(lVar7 + -0xccc) = 0;
  }
  lVar7 = *in_FS_OFFSET;
  uVar4 = func_0x021fbd60(1,param_2);
  *(undefined4 *)(lVar7 + -0xccc) = uVar4;
  cVar3 = func_0x0135cd30(param_2);
  if (cVar3 == '\0') {
LAB_083fb94e:
    uVar8 = 0;
    plVar11 = _DAT_0a3e9fa8;
  }
  else {
    if (param_2 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = func_0x08f66580(param_2);
    }
    if (iVar5 <= *(int *)(param_1 + 0x110)) goto LAB_083fb94e;
    lVar7 = 0;
    do {
      cVar3 = *(char *)(param_1 + 0x10 + lVar7);
      if (cVar3 == '\0') break;
      local_138[lVar7] = cVar3;
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0xff);
    local_138[lVar7] = '\0';
    iVar5 = *(int *)(param_1 + 0x110);
    iVar6 = func_0x08f66580(local_138);
    plVar11 = _DAT_0a3e9fa8;
    cVar3 = *(char *)(param_2 + iVar5);
    pcVar10 = local_138 + iVar6;
    if ((cVar3 != '\0') && (iVar6 != 0xff)) {
      lVar7 = 0;
      do {
        pcVar10[lVar7] = cVar3;
        lVar1 = lVar7 + 1;
        cVar3 = *(char *)((long)iVar5 + 1 + param_2 + lVar7);
        if (cVar3 == '\0') break;
        bVar12 = 0xfe - (long)iVar6 != lVar7;
        lVar7 = lVar1;
      } while (bVar12);
      pcVar10 = pcVar10 + lVar1;
    }
    *pcVar10 = '\0';
    uVar8 = (**(code **)(**(long **)(param_1 + 8) + 0x60))
                      (*(long **)(param_1 + 8),local_138,param_3,param_4);
    if ((int)uVar8 < 0) goto LAB_083fb913;
  }
  iVar5 = (int)uVar8;
  uVar8 = uVar8 & 0xffffffff;
  if (iVar5 < param_4) {
    param_4 = iVar5;
  }
  uVar9 = *(uint *)(*in_FS_OFFSET + -0xcd0);
  if (param_4 != 0) {
    lVar7 = 0;
    do {
      pcVar10 = (char *)(param_3 + lVar7);
      lVar7 = lVar7 + 1;
      uVar9 = ((int)*pcVar10 + uVar9) * 0x401;
      uVar9 = uVar9 >> 6 ^ uVar9;
    } while (param_4 != lVar7);
  }
  *(uint *)(*in_FS_OFFSET + -0xcd0) = uVar9;
  func_0x01c97710();
LAB_083fb913:
  if (*plVar11 == local_38) {
    return uVar8;
  }
  func_0x08f68a00();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


