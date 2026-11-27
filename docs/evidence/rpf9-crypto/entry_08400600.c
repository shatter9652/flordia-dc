// window.elf f73d8bde3636243e04df956e7df154afebded3ec85692b8da4b5fd9976ee3895
// entry @ 08400600 size=1053
// undefined entry()


undefined8 processEntry entry(undefined4 *param_1)

{
  short sVar1;
  short sVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  code *UNRECOVERED_JUMPTABLE;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  uint in_ESI;
  long *in_RDI;
  ulong uVar11;
  long *plVar12;
  long *in_FS_OFFSET;
  
  sVar1 = *(short *)(param_1 + 1);
  uVar11 = (ulong)in_ESI;
  sVar2 = sVar1;
  if (*(char *)(*in_FS_OFFSET + -0xc88) == '\0') {
    lVar4 = *in_FS_OFFSET;
    *(undefined8 *)(lVar4 + -0xca8) = 0;
    func_0x08f66870(0x5267540,lVar4 + -0xcb0,0xa590000);
    *(undefined1 *)(lVar4 + -0xc88) = 1;
    sVar2 = *(short *)(param_1 + 1);
  }
  uVar10 = 0;
  if ((ushort)(sVar2 - 1U) < 0x12) {
    uVar10 = *(undefined4 *)((ulong)(ushort)(sVar2 - 1U) * 4 + 0x9e607e0);
  }
  cVar7 = func_0x00b08740(*in_FS_OFFSET + -0xcb0,1,uVar10,*param_1,(long)param_1 + 6,0x10);
  if (cVar7 != '\0') {
    plVar12 = in_RDI + (ulong)in_ESI * 2;
    if ((ushort)(sVar1 - 3U) < 3) {
      do {
        plVar3 = *(long **)(*in_FS_OFFSET + -0xca8);
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        lVar4 = *in_RDI;
        uVar10 = (undefined4)in_RDI[1];
        if (*(code **)(*plVar3 + 0x20) == (code *)0x2ae0650) {
          if (lVar4 == 0) {
            return 0;
          }
          plVar5 = (long *)plVar3[0xb];
          if (plVar5 == (long *)0x0) {
            return 0;
          }
          lVar6 = plVar3[8];
          UNRECOVERED_JUMPTABLE = *(code **)(*plVar5 + 0x18);
          if (UNRECOVERED_JUMPTABLE == (code *)0x2ae0690) {
            iVar8 = func_0x02ae06b0(lVar6,lVar4,uVar10,lVar4);
            if (iVar8 != 0x3f1ba1a4) {
              return 0;
            }
          }
          else {
            if (UNRECOVERED_JUMPTABLE != (code *)0x2ae0870) {
              cVar7 = (*UNRECOVERED_JUMPTABLE)(plVar5,lVar6,lVar4,uVar10);
              goto LAB_084007f0;
            }
            iVar8 = func_0x02ae0890(lVar6,lVar4,uVar10,lVar4);
            if (iVar8 != 0x24a187b9) {
              return 0;
            }
          }
        }
        else {
          cVar7 = (**(code **)(*plVar3 + 0x20))(plVar3,lVar4,uVar10,lVar4,uVar10);
LAB_084007f0:
          if (cVar7 == '\0') {
            return 0;
          }
        }
        plVar3 = *(long **)(*in_FS_OFFSET + -0xca8);
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 0x28);
        if (UNRECOVERED_JUMPTABLE == (code *)0x8478170) {
          plVar5 = (long *)plVar3[0xb];
          if (*(long *)(*plVar3 + 0x30) == 0x1b35930) {
            if (plVar5 == (long *)0x0) {
              return 0;
            }
            UNRECOVERED_JUMPTABLE = *(code **)(*plVar5 + 0x20);
            if (UNRECOVERED_JUMPTABLE == (code *)0x1b35960) {
              func_0x01b35970(plVar3[8],plVar3 + 4);
            }
            else if (UNRECOVERED_JUMPTABLE == (code *)0x1b359d0) {
              func_0x01b359e0(plVar3[8],plVar3 + 4);
            }
            else {
              (*UNRECOVERED_JUMPTABLE)(plVar5);
            }
          }
          else {
            if (plVar5 == (long *)0x0) {
              return 0;
            }
            (**(code **)(*plVar5 + 0x20))(plVar5,plVar3[8]);
          }
        }
        else {
          uVar11 = 0;
          cVar7 = (*UNRECOVERED_JUMPTABLE)(plVar3,0,0);
          if (cVar7 == '\0') {
            return 0;
          }
        }
        in_RDI = in_RDI + 2;
      } while (in_RDI != plVar12);
    }
    else {
      uVar11 = 0x2ae0650;
      do {
        plVar3 = *(long **)(*in_FS_OFFSET + -0xca8);
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        lVar4 = *in_RDI;
        uVar10 = (undefined4)in_RDI[1];
        if (*(code **)(*plVar3 + 0x20) == (code *)0x2ae0650) {
          if (lVar4 == 0) {
            return 0;
          }
          plVar5 = (long *)plVar3[0xb];
          if (plVar5 == (long *)0x0) {
            return 0;
          }
          lVar6 = plVar3[8];
          UNRECOVERED_JUMPTABLE = *(code **)(*plVar5 + 0x18);
          if (UNRECOVERED_JUMPTABLE == (code *)0x2ae0690) {
            iVar8 = func_0x02ae06b0(lVar6,lVar4,uVar10,lVar4);
            if (iVar8 != 0x3f1ba1a4) {
              return 0;
            }
          }
          else {
            if (UNRECOVERED_JUMPTABLE != (code *)0x2ae0870) {
              cVar7 = (*UNRECOVERED_JUMPTABLE)(plVar5,lVar6,lVar4,uVar10);
              goto LAB_084008f3;
            }
            iVar8 = func_0x02ae0890(lVar6,lVar4,uVar10,lVar4);
            if (iVar8 != 0x24a187b9) {
              return 0;
            }
          }
        }
        else {
          cVar7 = (**(code **)(*plVar3 + 0x20))(plVar3,lVar4,uVar10,lVar4,uVar10);
LAB_084008f3:
          if (cVar7 == '\0') {
            return 0;
          }
        }
        in_RDI = in_RDI + 2;
      } while (in_RDI != plVar12);
    }
    plVar12 = *(long **)(*in_FS_OFFSET + -0xca8);
    if (plVar12 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar12 + 0x28);
      if (UNRECOVERED_JUMPTABLE != (code *)0x8478170) {
                    /* WARNING: Could not recover jumptable at 0x084009f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar9 = (*UNRECOVERED_JUMPTABLE)(plVar12,0,0);
        return uVar9;
      }
      plVar3 = (long *)plVar12[0xb];
      if (*(long *)(*plVar12 + 0x30) == 0x1b35930) {
        if (plVar3 != (long *)0x0) {
          UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 0x20);
          if (UNRECOVERED_JUMPTABLE == (code *)0x1b35960) {
            func_0x01b35970(plVar12[8],plVar12 + 4);
          }
          else if (UNRECOVERED_JUMPTABLE == (code *)0x1b359d0) {
            func_0x01b359e0(plVar12[8],plVar12 + 4);
          }
          else {
            (*UNRECOVERED_JUMPTABLE)(plVar3);
          }
LAB_08400997:
          return CONCAT71((int7)(uVar11 >> 8),1);
        }
      }
      else if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x20))(plVar3,plVar12[8]);
        goto LAB_08400997;
      }
    }
  }
  return 0;
}


