// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14002d460  size: 1614 bytes
// Name:    FUN_14002d460
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144771780, FUN_14210fa50, FUN_14210f9c0, FUN_1451771f0, FUN_144771840, FUN_1451185f0, FUN_1447719f0, FUN_144771810, FUN_140d99e30, FUN_144770ea0, FUN_144ff3790, FUN_145146ab0, FUN_14210fa00, FUN_14039d7d0, FUN_144770e50, FUN_1450e6760, FUN_14039d360, FUN_144ff2930, FUN_1404b88a0, FUN_144f5cc50, FUN_144ff2000, FUN_1404b87b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14002d460(longlong param_1,uint *param_2,undefined8 param_3)

{
  short *psVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  float fVar16;
  undefined1 auVar17 [64];
  undefined8 in_stack_fffffffffffffef8;
  undefined8 in_stack_ffffffffffffff00;
  undefined4 uVar18;
  float fStack_e4;
  undefined8 *apuStack_e0 [2];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  int iStack_bc;
  undefined8 **ppuStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 **ppuStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 **ppuStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  
  uVar18 = (undefined4)((ulonglong)in_stack_ffffffffffffff00 >> 0x20);
  uVar5 = (undefined4)((ulonglong)in_stack_fffffffffffffef8 >> 0x20);
  if ((*param_2 & 1) != 0) {
    func_0x000144ea49f0(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x10),param_2[0xb],1);
  }
  uVar10 = *(undefined8 *)(param_1 + 0x48);
  plVar15 = (longlong *)0x0;
  uVar7 = FUN_144ff3790(param_1,(byte *)((longlong)param_2 + (longlong)(int)param_2[0x12] + 0x48),0)
  ;
  uVar6 = *(uint *)(param_1 + 0x18);
  if ((uVar6 & 0x7fffffff) != 0) {
    uVar2 = (uint)*(byte *)(param_1 + 0x15);
    lVar14 = _DAT_149fe5f78;
    if ((int)uVar6 < 0) {
      lVar14 = _DAT_149fe64f0;
    }
    plVar15 = (longlong *)(lVar14 + ((ulonglong)uVar6 & 0x7fffffff));
    if (*(byte *)(param_1 + 0x15) != 0) {
      do {
        uVar6 = *(uint *)((longlong)plVar15 + 0x1c);
        if ((uVar6 & 0x7fffffff) == 0) {
          plVar15 = (longlong *)0x0;
          break;
        }
        lVar14 = _DAT_149fe5f78;
        if ((int)uVar6 < 0) {
          lVar14 = _DAT_149fe64f0;
        }
        plVar15 = (longlong *)(lVar14 + ((ulonglong)uVar6 & 0x7fffffff));
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
  }
  fStack_e4 = (float)param_2[6];
  if (param_2[7] != 0) {
    FUN_145146ab0(param_3,param_2[7],&fStack_e4);
  }
  FUN_144770e50(&iStack_bc,param_2[1],param_2[0x11]);
  iVar11 = -0x41633f6f;
  if (iStack_bc != 0x6ce70741) {
    iVar11 = iStack_bc;
  }
  if (iVar11 == 0) {
    auVar17 = ZEXT464((uint)fStack_e4);
    if (0.0 < fStack_e4) {
      uStack_c8 = uVar10;
      uStack_d0 = FUN_14210fa50(param_2,param_3,*(undefined8 *)(param_1 + 0x48));
      uVar8 = FUN_1404b88a0(*param_2 >> 3 & 7);
      lVar14 = *(longlong *)(param_1 + 0x38);
      puVar9 = (undefined8 *)func_0x00014039d340(*(undefined8 *)(lVar14 + 0xa0));
      if (puVar9 != (undefined8 *)0x0) {
        FUN_14039d360(puVar9,lVar14);
        *puVar9 = &UNK_146677730;
      }
      FUN_144ff2000(puVar9,*(undefined8 *)(param_1 + 0x48));
      fVar16 = _DAT_145fc6ed8;
      *(uint *)((longlong)puVar9 + 0x24) = param_2[2];
      FUN_1404b87b0(puVar9,fVar16 / auVar17._0_4_,1,uStack_d0,uVar8);
      *(byte *)(puVar9 + 0x1a) = (byte)*param_2 & 4 | *(byte *)(puVar9 + 0x1a) & 0xfb;
      uVar6 = *param_2;
      uVar5 = FUN_14210f9c0(uVar6,param_2[4],param_3);
      uVar3 = FUN_14210fa00(uVar6,param_2[5],param_3);
      FUN_14039d7d0(puVar9,uVar5,(uVar6 & 2) >> 1,uVar3,uVar8 & 0xffffffffffffff00,
                    CONCAT44(uVar18,uVar6 >> 2) & 0xffffffff00000001,(byte)param_2[1] & 1);
      FUN_1451185f0(param_2,param_3,plVar15,auVar17._0_8_);
      *(short *)((longlong)plVar15 + 10) = *(short *)((longlong)plVar15 + 10) + 1;
      FUN_1451771f0(param_1,plVar15,puVar9,0);
      FUN_144ff2930(puVar9,plVar15,1);
      psVar1 = (short *)((longlong)plVar15 + 10);
      *psVar1 = *psVar1 + -1;
      if (*psVar1 == 0) {
        (**(code **)*plVar15)(plVar15,1);
      }
      FUN_144ff2930(puVar9,uVar7,1);
      if (param_2[0x10] != 0) {
        uVar10 = FUN_144771810(param_2[2],*(undefined8 *)(param_1 + 0x48),
                               *(undefined8 *)(param_1 + 0x38));
        FUN_144771840(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x48),
                      *(undefined8 *)(param_1 + 0x38),uVar10,plVar15,uVar7);
        *(short *)((longlong)puVar9 + 10) = *(short *)((longlong)puVar9 + 10) + 1;
        FUN_1451771f0(param_1,puVar9,uVar10,0);
        FUN_144ff2930(uVar10,puVar9,1);
        psVar1 = (short *)((longlong)puVar9 + 10);
        *psVar1 = *psVar1 + -1;
        if (*psVar1 == 0) {
          (**(code **)*puVar9)(puVar9,1);
        }
      }
      if (param_2[10] != 0) {
        ppuStack_b8 = apuStack_e0;
        puStack_b0 = &UNK_144771770;
        puStack_a8 = &UNK_1401167b0;
        puStack_a0 = &SUB_140004380;
        apuStack_e0[0] = puVar9;
        FUN_140d99e30(puVar9);
      }
      *(byte *)(puVar9 + 0x1a) = *(byte *)(puVar9 + 0x1a) | (byte)(*param_2 >> 10) & 3;
      *(byte *)((longlong)puVar9 + 0xd1) =
           *(byte *)((longlong)puVar9 + 0xd1) | (byte)(*param_2 >> 0xc) & 3;
      FUN_1447719f0(param_1 + 0x98,*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x98),puVar9,
                    uStack_c8);
      return;
    }
LAB_14002d9dc:
    uVar6 = *(uint *)(param_1 + 0x5c);
    if ((ulonglong)uVar6 != 0) {
      lVar14 = *(longlong *)(param_1 + 0x60);
      lVar12 = 0;
      do {
        plVar13 = (longlong *)(lVar14 + lVar12);
        lVar12 = lVar12 + 8;
        psVar1 = (short *)(*plVar13 + 10);
        *psVar1 = *psVar1 + 1;
      } while ((ulonglong)uVar6 << 3 != lVar12);
      FUN_1451771f0(param_1,plVar15,uVar7,CONCAT71((int7)((ulonglong)lVar12 >> 8),1));
      uVar6 = *(uint *)(param_1 + 0x5c);
      if ((ulonglong)uVar6 != 0) {
        lVar14 = *(longlong *)(param_1 + 0x60);
        lVar12 = 0;
        do {
          puVar9 = *(undefined8 **)(lVar14 + lVar12);
          psVar1 = (short *)((longlong)puVar9 + 10);
          *psVar1 = *psVar1 + -1;
          if (*psVar1 == 0) {
            (**(code **)*puVar9)(puVar9,1);
          }
          lVar12 = lVar12 + 8;
        } while ((ulonglong)uVar6 << 3 != lVar12);
      }
      return;
    }
    uVar6 = *(uint *)(param_1 + 0x18);
    iVar11 = 0;
    if ((uVar6 & 0x7fffffff) != 0) {
      lVar14 = _DAT_149fe5f78;
      if ((int)uVar6 < 0) {
        lVar14 = _DAT_149fe64f0;
      }
      plVar13 = (longlong *)(lVar14 + ((ulonglong)uVar6 & 0x7fffffff));
      if (plVar13 != plVar15) {
        iVar11 = 0;
        do {
          uVar6 = *(uint *)((longlong)plVar13 + 0x1c);
          if ((uVar6 & 0x7fffffff) == 0) {
            iVar11 = 0;
            break;
          }
          iVar11 = iVar11 + 1;
          lVar14 = _DAT_149fe5f78;
          if ((int)uVar6 < 0) {
            lVar14 = _DAT_149fe64f0;
          }
          plVar13 = (longlong *)(lVar14 + ((ulonglong)uVar6 & 0x7fffffff));
        } while (plVar13 != plVar15);
      }
    }
    FUN_145177300(param_1,iVar11,uVar7);
    uVar6 = *(uint *)(plVar15 + 4);
    if ((uVar6 & 0x7fffffff) != 0) {
      plVar13 = (longlong *)&DAT_149fe64f0;
      if (-1 < (int)uVar6) {
        plVar13 = (longlong *)&DAT_149fe5f78;
      }
      if (((ulonglong)uVar6 & 0x7fffffff) + *plVar13 == param_1) {
        *(short *)((longlong)plVar15 + 10) = *(short *)((longlong)plVar15 + 10) + 1;
        FUN_144ff2a50(plVar15);
        (**(code **)(*plVar15 + 8))(plVar15);
        psVar1 = (short *)((longlong)plVar15 + 10);
        *psVar1 = *psVar1 + -1;
        if (*psVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001451772f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)*plVar15)(plVar15,1);
          return;
        }
      }
    }
    return;
  }
  if (param_2[0x10] == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = param_2[2];
  }
  uVar8 = CONCAT44(uVar5,uVar6);
  puVar9 = (undefined8 *)FUN_144770ea0(param_1,iVar11,plVar15,uVar7,uVar8);
  if (puVar9 == (undefined8 *)0x0) goto LAB_14002d9dc;
  fVar16 = fStack_e4;
  FUN_1451185f0(param_2,param_3,plVar15,fStack_e4);
  uVar6 = *param_2;
  iVar4 = FUN_14210f9c0(uVar6,param_2[4],param_3);
  if (*(char *)((longlong)puVar9 + 0x14) != '\n') {
    if (*(char *)((longlong)puVar9 + 0x14) != '\x05') {
      return;
    }
    if ((iVar11 == -0x7a220b80 && iVar4 != -0x522dc001) &&
       (FUN_144f5cc50(apuStack_e0,*(undefined2 *)((longlong)puVar9 + 0x16),puVar9[6]),
       apuStack_e0[0] == (undefined8 *)0x0)) {
      uVar6 = *param_2;
      uVar5 = FUN_14210fa00(uVar6,param_2[5],param_3);
      FUN_14039d7d0(puVar9,iVar4,(uVar6 & 2) >> 1,uVar5,uVar8 & 0xffffffffffffff00,
                    CONCAT44(uVar18,uVar6 >> 2) & 0xffffffff00000001,(byte)param_2[1] & 1);
    }
    uVar10 = FUN_14210fa50(param_2,param_3,*(undefined8 *)(param_1 + 0x48));
    uVar7 = FUN_1404b88a0(*param_2 >> 3 & 7);
    func_0x0001404b8850(puVar9,_DAT_145fc6ed8 / fVar16);
    func_0x000144f5bad0(puVar9,uVar10);
    FUN_1450e6760(puVar9,uVar7);
    uVar6 = param_2[10];
    if (uVar6 == 0) {
      return;
    }
    ppuStack_78 = apuStack_e0;
    puStack_70 = &UNK_144771770;
    puStack_68 = &UNK_1401167b0;
    puStack_60 = &SUB_140004380;
    apuStack_e0[0] = puVar9;
    goto LAB_14002da89;
  }
  if (iVar11 == -0x7949914a) {
    if (iVar4 != -0x522dc001) {
      FUN_144f5cc50(apuStack_e0,*(undefined2 *)((longlong)puVar9 + 0x16),puVar9[6]);
      uVar6 = *param_2;
      if (apuStack_e0[0] == (undefined8 *)0x0) {
        func_0x0001448b5670(puVar9,1,(uVar6 & 4) >> 2);
        uVar6 = *param_2;
        uVar5 = FUN_14210fa00(uVar6,param_2[5],param_3);
        FUN_144771780(puVar9,iVar4,(uVar6 & 2) >> 1,uVar5,uVar8 & 0xffffffffffffff00,
                      CONCAT44(uVar18,uVar6 >> 1) & 0xffffffff00000002,(byte)param_2[1] & 1);
        uVar6 = *param_2;
      }
    }
    uVar6 = uVar6 >> 10 & 3;
    if (uVar6 == 1) {
      uVar10 = 0;
LAB_14002da09:
      func_0x0001448b5690(puVar9,1,uVar10);
    }
    else if (uVar6 == 2) {
      uVar10 = 1;
      goto LAB_14002da09;
    }
    uVar6 = *param_2 >> 0xc & 3;
    if (uVar6 == 1) {
      uVar10 = 0;
    }
    else {
      if (uVar6 != 2) goto LAB_14002da3f;
      uVar10 = 1;
    }
    func_0x0001448b5690(puVar9,0,uVar10);
  }
LAB_14002da3f:
  if (param_2[10] == 0) {
    return;
  }
  apuStack_e0[0] = (undefined8 *)func_0x000145026d20(puVar9);
  if (apuStack_e0[0] == (undefined8 *)0x0) {
    return;
  }
  ppuStack_98 = apuStack_e0;
  puStack_90 = &UNK_144771800;
  puStack_88 = &UNK_1401167b0;
  puStack_80 = &SUB_140004380;
  uVar6 = param_2[10];
LAB_14002da89:
  FUN_140d99e30(puVar9,uVar6);
  return;
}

