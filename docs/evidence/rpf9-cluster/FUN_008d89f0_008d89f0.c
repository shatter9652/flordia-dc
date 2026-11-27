// window.elf d53960482354c9699902d859c4c2bc8b45357d43882a00ef57046c2f70004d8f
// FUN_008d89f0 @ 008d89f0 size=478
// undefined FUN_008d89f0()


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008d89f0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  long *in_FS_OFFSET;
  undefined1 local_138 [256];
  long local_38;
  
  local_38 = *_DAT_0a3e9fa8;
  lVar2 = *(long *)(param_1 + 8);
  uVar14 = *(ulong *)(lVar2 + 0x38);
  if (uVar14 == 0) {
    uVar14 = 0x9c57501;
  }
  if (*(char *)(lVar2 + 0x47) < '\0') {
    uVar14 = lVar2 + 0x38;
  }
  if (*(char *)(*in_FS_OFFSET + -0xcd8) == '\0') {
    puVar9 = (undefined1 *)func_0x0006b700(0xc10);
    if (puVar9 != (undefined1 *)0x0) {
      *(undefined8 *)(puVar9 + 0xc00) = 0x100000000;
      *(undefined4 *)(puVar9 + 0xc08) = 0;
      puVar9[0xc0c] = 0;
      *puVar9 = 0;
    }
    lVar2 = *in_FS_OFFSET;
    puVar1 = (undefined8 *)(lVar2 + -0xce0);
    *puVar1 = puVar9;
    func_0x08f66870(0x83f6c30,puVar1,0xa590000);
    *(undefined1 *)(lVar2 + -0xcd8) = 1;
  }
  iVar6 = func_0x08f66610(uVar14,0x9c65621,7);
  if (iVar6 == 0) {
    uVar13 = func_0x08f665b0(uVar14 + 7,0x3a);
    if (uVar13 != 0) {
      uVar13 = uVar13 + 1;
    }
  }
  else {
    iVar6 = func_0x08f66580(uVar14);
    uVar5 = (long)iVar6 + uVar14;
    do {
      uVar13 = uVar5;
      if ((uVar13 <= uVar14) || (*(char *)(uVar13 - 1) == '/')) break;
      uVar5 = uVar13 - 1;
    } while (*(char *)(uVar13 - 1) != '\\');
  }
  uVar12 = (int)uVar13 - (int)uVar14;
  local_138[0] = 0;
  uVar7 = func_0x08f66580(uVar14);
  uVar11 = uVar7;
  if ((int)uVar12 < (int)uVar7) {
    uVar11 = uVar12;
  }
  if (uVar12 == 0xffffffff) {
    uVar11 = uVar7;
  }
  uVar13 = 0xff;
  if (uVar11 < 0xff) {
    uVar13 = (ulong)uVar11;
  }
  func_0x08f67840(local_138,uVar14,uVar13);
  local_138[uVar13] = 0;
  puVar9 = (undefined1 *)0x9c57501;
  if (uVar11 != 0) {
    puVar9 = local_138;
  }
  uVar8 = func_0x08f66580(puVar9);
  *(undefined4 *)(param_1 + 0x78) = uVar8;
  uVar10 = FUN_008d8240(1,puVar9);
  plVar4 = _DAT_0a3e9fa8;
  *(undefined8 *)(param_1 + 0x70) = uVar10;
  if (*plVar4 != local_38) {
    func_0x08f68a00();
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  return;
}


