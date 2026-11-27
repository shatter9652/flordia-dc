// window.elf f73d8bde3636243e04df956e7df154afebded3ec85692b8da4b5fd9976ee3895
// FUN_083f96f0 @ 083f96f0 size=622
// undefined FUN_083f96f0()


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_083f96f0(undefined4 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  code *pcVar1;
  int iVar2;
  long *in_RAX;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *in_FS_OFFSET;
  long *aplStack_40 [2];
  
  puVar5 = aplStack_40 + 1;
  aplStack_40[1] = in_RAX;
  func_0x00001050(0xdf5fda0);
  puVar4 = aplStack_40 + 1;
  if (DAT_0e062d98 == '\0') {
    iVar2 = func_0x08f66530(&DAT_0e062d98);
    puVar4 = aplStack_40 + 1;
    if (iVar2 != 0) {
      if (*(char *)(*in_FS_OFFSET + -0xad0) == '\0') {
        lVar3 = *in_FS_OFFSET;
        *(undefined1 *)(lVar3 + -0xad0) = 1;
        *(undefined4 *)(lVar3 + -0xb90) = 0;
      }
      aplStack_40[1] = *(long **)(*in_FS_OFFSET + -0x140);
      if (aplStack_40[1] == (long *)0x0) {
        aplStack_40[1] = _DAT_0e7911a8;
        *(long **)(*in_FS_OFFSET + -0x140) = _DAT_0e7911a8;
      }
      lVar3 = (**(code **)*aplStack_40[1])(aplStack_40[1],0x10108,8);
      if (lVar3 == 0) {
        if ((char)aplStack_40[1][3] == '\x01') {
          func_0x00001050(0xe0edbf0);
          (**(code **)(*aplStack_40[1] + 0x30))(aplStack_40[1],0x10108,8);
          pcVar1 = (code *)swi(0x41);
          (*pcVar1)();
          puVar5 = (undefined8 *)&stack0xffffffffffffffd0;
          aplStack_40[1] = (long *)0x83f9959;
          func_0x00001000(0xe0edbf0);
        }
        lVar3 = 0;
      }
      else {
        func_0x08f67830(lVar3,0,0x10108);
        puVar5 = aplStack_40 + 1;
      }
      puVar5[0xffffffffffffffff] = 0x83f98e8;
      _DAT_0e062d90 = lVar3;
      func_0x08f66540(&DAT_0e062d98);
      puVar4 = puVar5;
    }
  }
  if (DAT_0e062dc8 == '\0') {
    puVar4[0xffffffffffffffff] = 0x83f98a3;
    iVar2 = func_0x08f66530(&DAT_0e062dc8);
    if (iVar2 != 0) {
      puVar4[0xffffffffffffffff] = 0x83f98b7;
      func_0x04387740(0xe062da0);
      puVar4[0xffffffffffffffff] = 0x83f98c3;
      func_0x08f66540(&DAT_0e062dc8);
    }
  }
  puVar4[0xffffffffffffffff] = 0x83f9752;
  func_0x043876b0(0xe062da0,_DAT_0e062d90 + 0x10000,0x100);
  puVar4[0xffffffffffffffff] = 0x83f975a;
  iVar2 = func_0x043876a0(0xe062da0);
  lVar3 = _DAT_0e062d90;
  if (iVar2 == 0) {
    *(undefined8 *)(_DAT_0e062d90 + 0x10100) = 0;
    if (0x10000 < param_4) {
      lVar3 = param_2;
    }
    puVar4[0xffffffffffffffff] = 0x83f9790;
    iVar2 = func_0x043877a0(0xe062da0,param_1,lVar3,param_4,param_3);
    if (iVar2 == 0) {
      puVar4[0xffffffffffffffff] = 0x83f97d5;
      func_0x04387710(0xe062da0,_DAT_0e062d90 + 0x10100,4);
      puVar4[0xffffffffffffffff] = 0x83f97e2;
      iVar2 = func_0x04387880(0xe062da0,1);
      if (iVar2 != 0) {
        pcVar1 = (code *)swi(0x41);
        (*pcVar1)();
        puVar4 = puVar4 + 1;
      }
      while (*(long *)(_DAT_0e062d90 + 0x10100) != 4) {
        *(undefined8 *)((long)puVar4 + -8) = 0x83f97f4;
        func_0x08f670e0(10);
      }
      uVar6 = 0xe062d01;
      if (param_4 < 0x10001) {
        *(undefined8 *)((long)puVar4 + -8) = 0x83f981f;
        func_0x08f67840(param_2,_DAT_0e062d90,param_4);
      }
      goto LAB_083f9797;
    }
  }
  uVar6 = 0;
LAB_083f9797:
  *(undefined8 *)((long)puVar4 + -8) = 0x83f97a3;
  func_0x00001000(0xdf5fda0);
  return uVar6;
}


