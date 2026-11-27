// window.elf d53960482354c9699902d859c4c2bc8b45357d43882a00ef57046c2f70004d8f
// FUN_008ed630 @ 008ed630 size=855
// undefined FUN_008ed630()


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Possible PIC construction at 0x008ed8f9: Changing call to branch */
/* WARNING: Possible PIC construction at 0x008ed87a: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x008ed8fe) */
/* WARNING: Removing unreachable block (ram,0x008ed87f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ed630(long param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  lVar4 = _DAT_0dd42bd0;
  uVar1 = *(ushort *)(param_1 + 0x238);
  iVar2 = *(int *)(param_1 + 0x234);
  uVar5 = (ulong)uVar1 & 0x7ff;
  if ((iVar2 != 0 && (uVar5 != 0x7ff && (~uVar1 & 0x7800) != 0)) && (_DAT_0dd42bd0 != 0)) {
    uVar6 = (ulong)(uVar1 >> 0xb & 0xf);
    lVar7 = uVar6 * 0x8ad0 + _DAT_0dd42bd0;
    if ((short)uVar1 < 0) {
      iVar3 = *(int *)(lVar7 + 0x7608 + uVar5 * 4);
    }
    else {
      iVar3 = *(int *)(lVar7 + 0x6208 + uVar5 * 4);
    }
    if ((iVar3 == iVar2) && (*(long *)(_DAT_0dd42bd0 + 0x8ab8 + uVar6 * 0x8ad0) != 0)) {
      lVar7 = func_0x00e66ee0(iVar2);
      *(short *)(*(long *)(lVar4 + 0x8ac0 + (ulong)*(byte *)(lVar7 + 0x7e) * 0x8ad0) + 0x606 +
                (ulong)((uint)*(ushort *)(lVar7 + 0xd4) * _DAT_0dd42bbc)) =
           (short)(int)(*(float *)((ulong)DAT_0ae1250c * 4 + 0xae12500) * _DAT_09c7a08c);
      func_0x00e66ee0(*(undefined4 *)(param_1 + 0x234),*(undefined4 *)(param_1 + 0x238));
      halt_baddata();
    }
  }
  uVar1 = *(ushort *)(param_1 + 0x240);
  iVar2 = *(int *)(param_1 + 0x23c);
  uVar5 = (ulong)uVar1 & 0x7ff;
  if ((iVar2 != 0 && (uVar5 != 0x7ff && (~uVar1 & 0x7800) != 0)) && (_DAT_0dd42bd0 != 0)) {
    uVar6 = (ulong)(uVar1 >> 0xb & 0xf);
    lVar7 = uVar6 * 0x8ad0 + _DAT_0dd42bd0;
    if ((short)uVar1 < 0) {
      iVar3 = *(int *)(lVar7 + 0x7608 + uVar5 * 4);
    }
    else {
      iVar3 = *(int *)(lVar7 + 0x6208 + uVar5 * 4);
    }
    if ((iVar3 == iVar2) && (*(long *)(_DAT_0dd42bd0 + 0x8ab8 + uVar6 * 0x8ad0) != 0)) {
      lVar7 = func_0x00e66ee0(iVar2);
      *(short *)(*(long *)(lVar4 + 0x8ac0 + (ulong)*(byte *)(lVar7 + 0x7e) * 0x8ad0) + 0x606 +
                (ulong)((uint)*(ushort *)(lVar7 + 0xd4) * _DAT_0dd42bbc)) =
           (short)(int)(*(float *)((ulong)DAT_0ae1250c * 4 + 0xae12500) * _DAT_09c7a08c);
      func_0x00e66ee0(*(undefined4 *)(param_1 + 0x23c),*(undefined4 *)(param_1 + 0x240));
      halt_baddata();
    }
  }
  uVar1 = *(ushort *)(param_1 + 0x248);
  iVar2 = *(int *)(param_1 + 0x244);
  uVar5 = (ulong)uVar1 & 0x7ff;
  if ((iVar2 != 0 && (uVar5 != 0x7ff && (~uVar1 & 0x7800) != 0)) && (_DAT_0dd42bd0 != 0)) {
    uVar6 = (ulong)(uVar1 >> 0xb & 0xf);
    lVar7 = uVar6 * 0x8ad0 + _DAT_0dd42bd0;
    if ((short)uVar1 < 0) {
      iVar3 = *(int *)(lVar7 + 0x7608 + uVar5 * 4);
    }
    else {
      iVar3 = *(int *)(lVar7 + 0x6208 + uVar5 * 4);
    }
    if ((iVar3 == iVar2) && (*(long *)(_DAT_0dd42bd0 + 0x8ab8 + uVar6 * 0x8ad0) != 0)) {
      lVar7 = func_0x00e66ee0(iVar2);
      *(short *)(*(long *)(lVar4 + 0x8ac0 + (ulong)*(byte *)(lVar7 + 0x7e) * 0x8ad0) + 0x606 +
                (ulong)((uint)*(ushort *)(lVar7 + 0xd4) * _DAT_0dd42bbc)) =
           (short)(int)(*(float *)((ulong)DAT_0ae1250c * 4 + 0xae12500) * _DAT_09c7a08c);
      func_0x00e66ee0(*(undefined4 *)(param_1 + 0x244),*(undefined4 *)(param_1 + 0x248));
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return;
}


