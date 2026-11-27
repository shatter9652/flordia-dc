// window.elf d53960482354c9699902d859c4c2bc8b45357d43882a00ef57046c2f70004d8f
// FUN_008e22f0 @ 008e22f0 size=89
// undefined FUN_008e22f0()


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e22f0(undefined8 param_1,long param_2,undefined4 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  char cVar4;
  undefined4 local_24;
  long local_20;
  
  plVar3 = _DAT_0a3e9fa8;
  local_20 = *_DAT_0a3e9fa8;
  lVar1 = *(long *)(param_2 + 0x40);
  if (lVar1 != 0) {
    cVar4 = FUN_008e3930(param_1,param_3,param_5,&local_24);
    if (cVar4 != '\0') {
      *(undefined4 *)(lVar1 + 0x194) = local_24;
    }
  }
  if (*plVar3 == local_20) {
    return;
  }
  func_0x08f68a00();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


