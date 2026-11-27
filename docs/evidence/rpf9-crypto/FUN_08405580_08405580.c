// window.elf f73d8bde3636243e04df956e7df154afebded3ec85692b8da4b5fd9976ee3895
// FUN_08405580 @ 08405580 size=603
// undefined FUN_08405580()


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_08405580(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined1 (*pauVar8) [32];
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [32];
  undefined1 local_3d0 [40];
  undefined8 local_3a8;
  undefined1 local_358 [368];
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [24];
  short asStack_1c0 [150];
  undefined4 local_94;
  undefined1 local_78 [64];
  long local_38;
  
  plVar2 = _DAT_0a3e9fa8;
  auVar10._0_12_ = ZEXT812(0);
  auVar10._12_4_ = 0;
  uVar9 = 0;
  local_38 = *_DAT_0a3e9fa8;
  *(undefined1 (*) [32])(param_1 + 0x1d) = ZEXT1632(auVar10);
  *(undefined1 (*) [32])(param_1 + 0x19) = ZEXT1632(auVar10);
  auVar12 = ZEXT1632(auVar10);
  *(undefined1 (*) [32])(param_1 + 0x15) = auVar12;
  *(undefined1 (*) [32])(param_1 + 0x11) = auVar12;
  *(undefined1 (*) [32])(param_1 + 0xd) = auVar12;
  *(undefined1 (*) [32])(param_1 + 9) = auVar12;
  *(undefined1 (*) [32])(param_1 + 5) = ZEXT1632(auVar10);
  *(undefined1 (*) [32])(param_1 + 1) = ZEXT1632(auVar10);
  func_0x003b1c50(local_78,0x9c53e42,param_2,param_3);
  plVar5 = (long *)func_0x01c9d9e0(local_78,1);
  if (plVar5 != (long *)0x0) {
    lVar6 = (**(code **)(*plVar5 + 0x10))(plVar5,local_78,1);
    if (lVar6 != -1) {
      puVar7 = (undefined8 *)func_0x01c9d480(lVar6,plVar5);
      if (puVar7 != (undefined8 *)0x0) {
        func_0x08f67830(local_1d8,0,0x160);
        local_1e8 = _DAT_09aab970;
        uStack_1e0 = uRam0000000009aab978;
        func_0x08f67830(local_358,0,0x170);
        iVar4 = func_0x01c9f9d0(puVar7,local_358,0x170);
        plVar5 = (long *)*puVar7;
        if (*(int *)(puVar7 + 4) != 0 && *(int *)((long)puVar7 + 0x24) == 0) {
          (**(code **)(*plVar5 + 0x1a0))(plVar5,puVar7[1],puVar7[2]);
          puVar7[3] = puVar7[3] + (long)*(int *)(puVar7 + 4);
          *(undefined4 *)((long)puVar7 + 0x24) = 0;
          *(undefined4 *)(puVar7 + 4) = 0;
          plVar5 = (long *)*puVar7;
        }
        (**(code **)(*plVar5 + 0x90))(plVar5,puVar7[1]);
        puVar7[1] = 0xffffffffffffffff;
        *puVar7 = 0;
        if (iVar4 == 0x170) {
          cVar3 = FUN_084047f0(&local_1e8,local_358);
          if (cVar3 != '\0') {
            pauVar8 = (undefined1 (*) [32])(param_1 + 1);
            auVar11._0_12_ = ZEXT812(0);
            auVar11._12_4_ = 0;
            lVar6 = 0;
            *(undefined1 (*) [32])(param_1 + 0x1d) = ZEXT1632(auVar11);
            *(undefined1 (*) [32])(param_1 + 0x19) = ZEXT1632(auVar11);
            auVar12 = ZEXT1632(auVar11);
            *(undefined1 (*) [32])(param_1 + 0x15) = auVar12;
            *(undefined1 (*) [32])(param_1 + 0x11) = auVar12;
            *(undefined1 (*) [32])(param_1 + 0xd) = auVar12;
            *(undefined1 (*) [32])(param_1 + 9) = auVar12;
            *(undefined1 (*) [32])(param_1 + 5) = ZEXT1632(auVar11);
            *pauVar8 = ZEXT1632(auVar11);
            do {
              if (asStack_1c0[lVar6] == 0) break;
              *(short *)*pauVar8 = asStack_1c0[lVar6];
              pauVar8 = (undefined1 (*) [32])(*pauVar8 + 2);
              lVar6 = lVar6 + 1;
            } while (lVar6 != 0x7f);
            *(undefined2 *)*pauVar8 = 0;
            iVar4 = func_0x08f66b50(local_78,local_3d0);
            uVar9 = CONCAT71((int7)((ulong)puVar7 >> 8),-1 < iVar4);
            if (-1 < iVar4) {
              *param_1 = local_3a8;
              *(undefined4 *)((long)param_1 + 0x134) = local_94;
            }
            goto LAB_0840578a;
          }
        }
      }
    }
    uVar9 = 0;
  }
LAB_0840578a:
  if (*plVar2 == local_38) {
    return uVar9 & 0xffffffff;
  }
  func_0x08f68a00();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


