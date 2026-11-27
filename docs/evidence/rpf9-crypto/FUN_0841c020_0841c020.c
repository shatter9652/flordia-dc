// window.elf f73d8bde3636243e04df956e7df154afebded3ec85692b8da4b5fd9976ee3895
// FUN_0841c020 @ 0841c020 size=283
// undefined FUN_0841c020()


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0841c020(undefined8 param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *in_FS_OFFSET;
  
  if (*(char *)(*in_FS_OFFSET + -0xad0) == '\0') {
    lVar1 = *in_FS_OFFSET;
    *(undefined1 *)(lVar1 + -0xad0) = 1;
    *(undefined4 *)(lVar1 + -0xb90) = 0;
  }
  plVar4 = _DAT_0e7911a8;
  plVar6 = *(long **)(*in_FS_OFFSET + -0x140);
  if (*(long **)(*in_FS_OFFSET + -0x140) == (long *)0x0) {
    *(long **)(*in_FS_OFFSET + -0x140) = _DAT_0e7911a8;
    plVar6 = plVar4;
  }
  puVar5 = (undefined8 *)(**(code **)*plVar6)(plVar6,0x58,0x10);
  if (puVar5 == (undefined8 *)0x0) {
    if ((char)plVar6[3] == '\x01') {
      func_0x00001050(0xe0edbf0);
      (**(code **)(*plVar6 + 0x30))(plVar6,0x58,0x10);
      pcVar2 = (code *)swi(0x41);
      (*pcVar2)();
      func_0x00001000(0xe0edbf0);
    }
    puVar5 = (undefined8 *)0x0;
  }
  else {
    puVar5[1] = param_1;
    puVar5[2] = 0x9fb03f0;
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    puVar5[3] = *(undefined8 *)(param_2 + 8);
    puVar5[4] = uVar3;
    *(undefined1 *)(puVar5 + 5) = 0;
    *puVar5 = 0xa396c68;
    *(undefined4 *)((long)puVar5 + 0x2c) = 0;
    puVar5[6] = 0;
    *(undefined1 *)(puVar5 + 7) = 0;
    *(undefined1 *)((long)puVar5 + 0x57) = 0;
    *(undefined1 (*) [16])((long)puVar5 + 0x3c) = ZEXT816(0) << 0x20;
    *(undefined8 *)((long)puVar5 + 0x4c) = 0;
  }
  return puVar5;
}


