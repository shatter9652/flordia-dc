// window.elf d53960482354c9699902d859c4c2bc8b45357d43882a00ef57046c2f70004d8f
// FUN_008e1100 @ 008e1100 size=976
// undefined FUN_008e1100()


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_008e1100(uint *param_1,char param_2)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  byte bVar6;
  long *plVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  char cVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  uint local_40;
  long local_38;
  
  plVar7 = _DAT_0a3e9fa8;
  puVar10 = &local_58;
  local_38 = *_DAT_0a3e9fa8;
  if (*(byte *)(*(long *)(param_1 + 2) + 0x2e) == 0) {
LAB_008e1282:
    puVar10 = &local_58;
    if (param_2 == '\0') {
LAB_008e1367:
      lVar3 = *(long *)(param_1 + 2);
      uVar2 = *(ushort *)(lVar3 + 0x1a);
      if (uVar2 != 0) {
        uVar13 = 0;
        do {
          if (*(short *)(*(long *)(param_1 + 4) + uVar13 * 8) == 1) {
            if ((uVar13 != 0xffff) && (lVar4 = *(long *)(param_1 + 6), lVar4 != 0)) {
              iVar8 = *(int *)(lVar3 + 0x30);
              uVar1 = ((uint)uVar2 * 8 + 0xf & 0xfffffff0) + 0x40 + *(int *)(lVar3 + 0x1c);
              lVar14 = (ulong)*(uint *)(*(long *)(param_1 + 4) + 4 + (uVar13 & 0xffffffff) * 8) +
                       lVar4;
              local_58 = (ulong)uVar1 + lVar3;
              if (iVar8 != 0) {
                local_58 = (ulong)(uint)(*(int *)(lVar3 + 0x1c) - iVar8) + lVar4;
              }
              local_50 = CONCAT44(local_50._4_4_,(*(int *)(lVar3 + 8) + iVar8) - uVar1);
              *(undefined8 *)((long)puVar10 + -8) = 0x8e13f8;
              cVar11 = func_0x08400600(&local_58,1,lVar14);
              if (cVar11 == '\0') goto LAB_008e143d;
              if (*param_1 < 2) {
                iVar8 = *(int *)(*(long *)(param_1 + 2) + 4) - *(int *)(*(long *)(param_1 + 2) + 8);
                if (iVar8 != 0 && *(long *)(param_1 + 0xe) != 0) {
                  local_50 = CONCAT44(local_50._4_4_,iVar8);
                  local_58 = *(long *)(param_1 + 0xe);
                  *(undefined8 *)((long)puVar10 + -8) = 0x8e1435;
                  cVar11 = func_0x08400600(&local_58,1,lVar14);
                  if (cVar11 == '\0') goto LAB_008e143d;
                }
              }
            }
            break;
          }
          uVar13 = uVar13 + 1;
        } while (uVar2 != uVar13);
      }
      uVar12 = 1;
      goto LAB_008e143f;
    }
    puVar10 = &local_58;
    if (1 < *param_1) {
      pcVar5 = (code *)swi(0x41);
      (*pcVar5)();
      puVar10 = &local_50;
    }
    uVar13 = (ulong)*(ushort *)(*(long *)(param_1 + 2) + 0x1a);
    if (uVar13 != 0) {
      lVar3 = *(long *)(param_1 + 4);
      uVar9 = 0;
      do {
        if (*(short *)(lVar3 + uVar9 * 8) == 6) {
          if ((uVar9 != 0xffff) && (*(long *)(param_1 + 6) != 0)) {
            local_50 = *(long *)(param_1 + 6) + 4 +
                       (ulong)*(uint *)(lVar3 + 4 + (uVar9 & 0xffffffff) * 8);
            local_58 = (ulong)CONCAT31(local_58._5_3_,*(undefined1 *)(local_50 - 4)) << 0x20;
            local_40 = (uint)*(ushort *)(local_50 - 2);
            goto LAB_008e1357;
          }
          break;
        }
        uVar9 = uVar9 + 1;
      } while (uVar13 != uVar9);
      uVar9 = 0;
LAB_008e12fe:
      if (*(short *)(lVar3 + uVar9 * 8) != 2) goto code_r0x008e1305;
      if ((uVar9 != 0xffff) && (*(long *)(param_1 + 6) != 0)) {
        local_50 = *(long *)(param_1 + 6) + 4 +
                   (ulong)*(uint *)(lVar3 + 4 + (uVar9 & 0xffffffff) * 8);
        local_40 = *(uint *)(local_50 - 4);
        local_58 = (ulong)local_58._5_3_ << 0x28;
LAB_008e1357:
        local_48 = 0x100;
        *(undefined8 *)((long)puVar10 + -8) = 0x8e135f;
        cVar11 = func_0x08400df0();
        if (cVar11 != '\0') goto LAB_008e1367;
      }
    }
  }
  else {
    bVar6 = *(byte *)(*(long *)(param_1 + 2) + 0x2e) >> 1;
    if ((DAT_0e060f30 == '\0') && (iVar8 = func_0x08f66530(), iVar8 != 0)) {
      DAT_0e060f18_12 = 0;
      _DAT_0e060f18 = ZEXT812(0);
      _DAT_0e060f26 = 0;
      uRam000000000e060f28 = 0;
      func_0x08f66540();
    }
    if (bVar6 == 3) {
      if ((DAT_0e060f70 == '\0') && (iVar8 = func_0x08f66530(), iVar8 != 0)) {
        _DAT_0e060f58 = 0x10000005;
        _DAT_0e060f5c = 0x10;
        _DAT_0e060f5e = _DAT_09ac0a80;
        uRam000000000e060f66 = uRam0000000009ac0a88;
        goto LAB_008e120b;
      }
    }
    else if (((bVar6 == 1) && (DAT_0e060f50 == '\0')) && (iVar8 = func_0x08f66530(), iVar8 != 0)) {
      _DAT_0e060f38 = 1;
      _DAT_0e060f3c = 3;
      _DAT_0e060f3e = _DAT_09ab0a20;
      uRam000000000e060f46 = uRam0000000009ab0a28;
LAB_008e120b:
      func_0x08f66540();
    }
    lVar3 = *(long *)(param_1 + 2);
    cVar11 = (*(byte *)(lVar3 + 0x2e) & 1) + 1;
    if (*(byte *)(lVar3 + 0x2e) == 0) {
      cVar11 = '\0';
    }
    if (cVar11 == '\x02') {
      local_58 = *(long *)(param_1 + 4);
      local_50 = CONCAT44(local_50._4_4_,(uint)*(ushort *)(lVar3 + 0x1a) * 8 + 0xf) &
                 0xfffffffffffffff0;
      uVar12 = 2;
      local_40 = *(int *)(lVar3 + 0x1c) - *(int *)(lVar3 + 0x30);
      local_48 = *(undefined8 *)(param_1 + 6);
    }
    else {
      if (cVar11 != '\x01') goto LAB_008e1282;
      local_58 = *(long *)(param_1 + 4);
      local_50 = CONCAT44(local_50._4_4_,
                          ((uint)*(ushort *)(lVar3 + 0x1a) * 8 + 0xf & 0xfffffff0) +
                          *(int *)(lVar3 + 0x1c));
      uVar12 = 1;
    }
    cVar11 = func_0x08400600(&local_58,uVar12);
    if (cVar11 != '\0') goto LAB_008e1282;
  }
LAB_008e143d:
  uVar12 = 0;
LAB_008e143f:
  if (*plVar7 != local_38) {
    *(undefined8 *)((long)puVar10 + -8) = 0x8e145d;
    func_0x08f68a00();
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  return uVar12;
code_r0x008e1305:
  uVar9 = uVar9 + 1;
  if (uVar13 == uVar9) goto LAB_008e143d;
  goto LAB_008e12fe;
}


