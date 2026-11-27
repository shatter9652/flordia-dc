// window.elf f73d8bde3636243e04df956e7df154afebded3ec85692b8da4b5fd9976ee3895
// FUN_083f8fd0 @ 083f8fd0 size=275
// undefined FUN_083f8fd0()


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_083f8fd0(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined1 local_48 [16];
  long local_38;
  
  plVar2 = _DAT_0a3e9fa8;
  local_38 = *_DAT_0a3e9fa8;
  if ((*(byte *)(param_3 + 0x110) & 0x10) == 0) {
    local_48._0_12_ = ZEXT812(0);
    local_48._12_4_ = 0;
    lVar7 = 0;
    iVar3 = func_0x08f671f0(local_48,0);
    if (iVar3 == 0) {
      uVar9 = (ulong)(ushort)local_48._4_2_;
      lVar8 = (ulong)(ushort)local_48._2_2_ - 1;
      lVar7 = (ulong)(ushort)local_48._0_2_ * 0xc;
    }
    else {
      lVar8 = -1;
      uVar9 = 0;
    }
    local_48._0_12_ = ZEXT812(0);
    local_48._12_4_ = 0;
    iVar3 = func_0x08f671c0(local_48,*(undefined8 *)(param_3 + 0x108));
    if (iVar3 == 0) {
      uVar4 = (ulong)(ushort)local_48._4_2_;
      lVar6 = 1 - ((ulong)(ushort)local_48._0_2_ * 0xc + (ulong)(ushort)local_48._2_2_);
    }
    else {
      lVar6 = 1;
      uVar4 = 0;
    }
    if (0x1e < (lVar8 + lVar7 + lVar6) * 0x1f + (uVar9 - uVar4)) {
      plVar5 = (long *)func_0x01c9d9e0(param_1,1);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0xc0))(plVar5,param_1);
      }
    }
  }
  if (*plVar2 == local_38) {
    return;
  }
  func_0x08f68a00();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


