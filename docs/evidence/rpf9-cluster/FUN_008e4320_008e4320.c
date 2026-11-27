// window.elf d53960482354c9699902d859c4c2bc8b45357d43882a00ef57046c2f70004d8f
// FUN_008e4320 @ 008e4320 size=110
// undefined FUN_008e4320()


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008e4320(undefined8 param_1,long param_2,undefined4 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  char cVar4;
  byte local_21;
  long local_20;
  
  plVar3 = _DAT_0a3e9fa8;
  local_20 = *_DAT_0a3e9fa8;
  lVar1 = *(long *)(param_2 + 0x40);
  if (lVar1 != 0) {
    cVar4 = FUN_008e45b0(param_1,param_3,param_5,&local_21);
    if (cVar4 != '\0') {
      *(ushort *)(lVar1 + 0xa9d) = *(ushort *)(lVar1 + 0xa9d) & 0xdfff | (ushort)local_21 << 0xd;
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


