// window.elf f73d8bde3636243e04df956e7df154afebded3ec85692b8da4b5fd9976ee3895
// FUN_08401440 @ 08401440 size=267
// undefined FUN_08401440()


undefined8 FUN_08401440(long *param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  
  uVar2 = func_0x01cc1090();
  if (uVar2 == 0xffff) {
    return 0xffffffffffffffff;
  }
  iVar3 = (**(code **)(*param_1 + 0x3c8))(param_1);
  uVar9 = (uint)uVar2 | iVar3 << 0x10;
  lVar4 = (**(code **)(*param_1 + 0x400))(param_1,0xba180afb232d1b4b,uVar9);
  if (lVar4 == 0) {
    puVar6 = (ulong *)(**(code **)(*param_1 + 0x400))(param_1,0x33f70dfaf2c50989,uVar9);
    if (puVar6 != (ulong *)0x0) {
      uVar5 = *puVar6 & 0xffffffffff;
      goto LAB_084014d6;
    }
    lVar4 = (**(code **)(*param_1 + 0x400))(param_1,0x4eaa16dd829995bc,uVar9);
    uVar1 = *(uint *)(lVar4 + 4);
  }
  else {
    uVar1 = *(uint *)(lVar4 + 0xc);
  }
  uVar5 = (ulong)uVar1;
LAB_084014d6:
  *param_3 = uVar5 << 4;
  puVar7 = (uint *)(**(code **)(*param_1 + 0x400))(param_1,0xcbb68ff7b7078db7,uVar9);
  if (puVar7 == (uint *)0x0) {
    uVar8 = *(undefined8 *)(param_1[1] + 0x18);
  }
  else if ((ulong)*puVar7 == 0xffffffff) {
    uVar8 = *(undefined8 *)(param_1[1] + 0x18);
  }
  else {
    uVar8 = *(undefined8 *)(*(long *)(param_1[1] + 0x50) + (ulong)*puVar7 * 8);
  }
  return uVar8;
}


