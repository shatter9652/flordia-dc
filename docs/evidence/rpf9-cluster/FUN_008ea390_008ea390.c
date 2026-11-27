// window.elf d53960482354c9699902d859c4c2bc8b45357d43882a00ef57046c2f70004d8f
// FUN_008ea390 @ 008ea390 size=737
// undefined FUN_008ea390()


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_008ea390(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  char cVar3;
  long lVar4;
  uint *puVar5;
  long lVar6;
  uint uVar7;
  undefined4 uVar8;
  
  lVar6 = *(long *)(param_1 + 0x40);
  if ((lVar6 == 0) || (*(char *)(lVar6 + 0x30) != '\x03')) {
    return 0;
  }
  uVar8 = *(undefined4 *)(lVar6 + 0x9c);
  lVar4 = func_0x0028bf40(uVar8);
  if ((lVar4 == 0) || (plVar2 = *(long **)(lVar4 + 0x60), plVar2 == (long *)0x0)) {
    lVar4 = 0;
  }
  else {
    lVar4 = (**(code **)(*plVar2 + 0xa8))(plVar2,0);
    uVar8 = *(undefined4 *)(lVar6 + 0x9c);
  }
  cVar3 = func_0x0008dba0(uVar8);
  if (cVar3 != '\0') {
    if (_DAT_0ae600f8 != 0 && lVar4 != 0) {
      return _DAT_0ae600f8;
    }
    iVar1 = *(int *)(param_2 + 0x98);
    lVar6 = 0xadc9ea8;
    goto LAB_008ea41b;
  }
  if ((lVar4 != 0) && ((long)*(int *)(param_2 + 0x94) != 4)) {
    uVar7 = *(uint *)(*(long *)(param_1 + 0x30) + 0xa8);
    if ((uVar7 != 0xffffffff) && (_DAT_0ae600e8 != 0)) {
      for (puVar5 = *(uint **)(_DAT_0ae600e0 + ((ulong)uVar7 % (ulong)_DAT_0ae600e8) * 8);
          puVar5 != (uint *)0x0; puVar5 = *(uint **)(puVar5 + 0x16)) {
        if (uVar7 == *puVar5) goto LAB_008ea4ff;
      }
    }
    if (_DAT_0ae600d0 != 0) {
      uVar7 = (uint)*(short *)(lVar4 + 0x34c);
      if (uVar7 != 0xffffffff) {
        for (puVar5 = *(uint **)(_DAT_0ae600c8 + ((ulong)uVar7 % (ulong)_DAT_0ae600d0) * 8);
            puVar5 != (uint *)0x0; puVar5 = *(uint **)(puVar5 + 0x16)) {
          if (*puVar5 == uVar7) goto LAB_008ea4ff;
        }
      }
      uVar7 = (uint)*(short *)(lVar4 + 0x374);
      if (uVar7 != 0xffffffff) {
        for (puVar5 = *(uint **)(_DAT_0ae600c8 + ((ulong)uVar7 % (ulong)_DAT_0ae600d0) * 8);
            puVar5 != (uint *)0x0; puVar5 = *(uint **)(puVar5 + 0x16)) {
          if (*puVar5 == uVar7) goto LAB_008ea4ff;
        }
      }
      uVar7 = (uint)*(short *)(lVar4 + 0x39c);
      if (uVar7 != 0xffffffff) {
        for (puVar5 = *(uint **)(_DAT_0ae600c8 + ((ulong)uVar7 % (ulong)_DAT_0ae600d0) * 8);
            puVar5 != (uint *)0x0; puVar5 = *(uint **)(puVar5 + 0x16)) {
          if (*puVar5 == uVar7) goto LAB_008ea4ff;
        }
      }
      uVar7 = (uint)*(short *)(lVar4 + 0x3c4);
      if (uVar7 != 0xffffffff) {
        for (puVar5 = *(uint **)(_DAT_0ae600c8 + ((ulong)uVar7 % (ulong)_DAT_0ae600d0) * 8);
            puVar5 != (uint *)0x0; puVar5 = *(uint **)(puVar5 + 0x16)) {
          if (*puVar5 == uVar7) goto LAB_008ea4ff;
        }
      }
      uVar7 = (uint)*(short *)(lVar4 + 0x3ec);
      if (uVar7 != 0xffffffff) {
        for (puVar5 = *(uint **)(_DAT_0ae600c8 + ((ulong)uVar7 % (ulong)_DAT_0ae600d0) * 8);
            puVar5 != (uint *)0x0; puVar5 = *(uint **)(puVar5 + 0x16)) {
          if (*puVar5 == uVar7) goto LAB_008ea4ff;
        }
      }
      uVar7 = (uint)*(short *)(lVar4 + 0x414);
      if (uVar7 != 0xffffffff) {
        for (puVar5 = *(uint **)(_DAT_0ae600c8 + ((ulong)uVar7 % (ulong)_DAT_0ae600d0) * 8);
            puVar5 != (uint *)0x0; puVar5 = *(uint **)(puVar5 + 0x16)) {
          if (*puVar5 == uVar7) goto LAB_008ea4ff;
        }
      }
      uVar7 = (uint)*(short *)(lVar4 + 0x43c);
      if (uVar7 != 0xffffffff) {
        for (puVar5 = *(uint **)(_DAT_0ae600c8 + ((ulong)uVar7 % (ulong)_DAT_0ae600d0) * 8);
            puVar5 != (uint *)0x0; puVar5 = *(uint **)(puVar5 + 0x16)) {
          if (*puVar5 == uVar7) goto LAB_008ea4ff;
        }
      }
      for (puVar5 = *(uint **)(_DAT_0ae600c8 + (0xffffffffU % (ulong)_DAT_0ae600d0) * 8);
          puVar5 != (uint *)0x0; puVar5 = *(uint **)(puVar5 + 0x16)) {
        if (*puVar5 == 0xffffffff) goto LAB_008ea4ff;
      }
    }
  }
LAB_008ea40b:
  lVar6 = 0;
  iVar1 = *(int *)(param_2 + 0x98);
LAB_008ea41b:
  if (iVar1 == 2) {
    lVar6 = 0xadc9ec0;
  }
  return lVar6;
LAB_008ea4ff:
  if (*(long *)(puVar5 + (long)*(int *)(param_2 + 0x94) * 4 + 2) != 0) {
    return *(long *)(puVar5 + (long)*(int *)(param_2 + 0x94) * 4 + 2);
  }
  goto LAB_008ea40b;
}


