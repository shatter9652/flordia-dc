// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011e390  size: 4423 bytes
// Name:    FUN_14011e390
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140539af0, FUN_144ecbc80, FUN_1455bf220, FUN_144ea64c0, FUN_1454696d0, FUN_144e55390, FUN_144e57340, FUN_144e581c0, FUN_1450b4030, FUN_140178430, FUN_1400400b0, FUN_1432ad870, FUN_145096530, FUN_144e58060, FUN_144f36b00, FUN_140180b30, FUN_14175db80, FUN_145094fa0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14011e390(longlong param_1,longlong *param_2,undefined **param_3,byte param_4,
                  undefined8 *******param_5,ulonglong param_6,undefined1 param_7)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  ulonglong uVar8;
  char cVar9;
  byte bVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  longlong lVar19;
  undefined8 uVar20;
  longlong *plVar21;
  undefined8 *******pppppppuVar22;
  undefined8 unaff_RBP;
  ulonglong uVar23;
  undefined7 uVar24;
  ushort uVar25;
  int iVar26;
  uint uVar27;
  int iVar29;
  undefined **ppuVar30;
  ulonglong uVar31;
  byte bVar32;
  longlong unaff_GS_OFFSET;
  bool bVar33;
  bool bVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined8 in_stack_fffffffffffffee8;
  undefined4 uVar38;
  uint *puVar37;
  ulonglong in_stack_fffffffffffffef0;
  ulonglong in_stack_fffffffffffffef8;
  undefined4 uStack_cc;
  char cStack_c2;
  byte bStack_c1;
  int iStack_c0;
  uint uStack_bc;
  ulonglong uStack_b8;
  ushort uStack_aa;
  undefined **ppuStack_a8;
  undefined4 uStack_9c;
  uint uStack_98;
  uint uStack_94;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined8 *******pppppppuStack_88;
  ulonglong uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  longlong lStack_60;
  uint uStack_58;
  undefined8 uStack_50;
  uint uStack_44;
  ulonglong uVar18;
  undefined **ppuVar28;
  
  uVar38 = (undefined4)((ulonglong)in_stack_fffffffffffffee8 >> 0x20);
  uVar4 = *(uint *)param_3;
  uVar27 = *(uint *)(param_3 + 2);
  uVar15 = (ulonglong)uVar4;
  uVar12 = func_0x0001435a2600(uVar15,*(undefined1 *)(param_1 + 0x121));
  ppuVar30 = (undefined **)(ulonglong)uVar12;
  bVar33 = true;
  uVar14 = (ulonglong)(uVar4 - 0x15);
  uStack_cc = (undefined4)CONCAT71((int7)(uVar15 >> 8),1);
  if (7 < uVar4 - 0x15) {
    uVar5 = uVar4 - 0x30;
    uVar14 = (ulonglong)uVar5;
    if (uVar5 < 0x26) {
      uVar15 = uVar14 & 0x3f;
      uVar14 = CONCAT71((uint7)(uint3)(uVar5 >> 8),1);
      uStack_cc = (undefined4)uVar14;
      if ((0x3000000001U >> uVar15 & 1) != 0) goto LAB_14011e402;
    }
    uStack_cc = 0;
  }
LAB_14011e402:
  if ((uVar4 != 0x23) && (uVar4 != 0x53)) {
    uVar14 = (ulonglong)(uVar4 - 0x41);
    bVar33 = uVar4 - 0x41 < 0x12;
  }
  bVar2 = *(byte *)(param_1 + 0x124);
  bVar7 = (byte)uStack_cc;
  if ((bVar2 & 4) == 0) {
    uStack_9c = 0;
  }
  else {
    uStack_9c = CONCAT31((int3)((uint)uStack_cc >> 8),(bVar7 ^ 1) & uVar27 == 1);
  }
  uVar5 = *(uint *)((longlong)param_3 + 0xc);
  if (uVar27 == 1) {
    uStack_94 = (uint)CONCAT71((int7)(uVar14 >> 8),*(undefined1 *)((longlong)param_3 + 0x2c));
  }
  else {
    uStack_94 = 0;
  }
  bVar32 = (uVar5 & 0x1c) == 0;
  if (bVar33 != false) {
    bVar32 = param_4;
  }
  uStack_98 = (uint)bVar32;
  uVar14 = (ulonglong)CONCAT31((int3)(uVar27 >> 8),*(undefined1 *)(param_1 + 0x127)) &
           0xffffffffffffff40;
  bVar32 = (byte)uVar14 >> 6;
  if (uVar27 == 1 && bVar32 == 0) {
    bVar32 = *(byte *)((longlong)param_3 + 0x2d);
  }
  uVar20 = CONCAT71((int7)(uVar14 >> 8),bVar32);
  bVar11 = *(byte *)(param_1 + 0x125);
  uVar6 = *(uint *)(param_3 + 3);
  iStack_c0 = (int)*(short *)((longlong)param_3 + 10);
  uStack_b8 = CONCAT44(uStack_b8._4_4_,uVar12);
  ppuVar28 = (undefined **)(ulonglong)(uVar12 ^ 0xff);
  if (bVar32 == 0) {
    ppuVar28 = ppuVar30;
  }
  plVar21 = (longlong *)0x0;
  uStack_8c = uVar27;
  FUN_144e55390(*(undefined1 *)(param_1 + 0x120),0);
  uVar12 = 0;
  for (uVar13 = *(byte *)((longlong)param_3 + 9) & 0x1f; (uVar13 & 1) == 0;
      uVar13 = uVar13 >> 1 | 0x80000000) {
    uVar12 = uVar12 + 1;
  }
  ppuStack_a8 = param_3;
  if (bVar7 != 0) {
    ppuVar30 = (undefined **)(ulonglong)uVar12;
    plVar21 = param_2;
    cVar9 = FUN_1455bf220(param_1,param_2,uVar5,ppuVar30);
    if (cVar9 != '\0') {
      return;
    }
  }
  uVar35 = func_0x000144d9f8d0(*(undefined2 *)(param_1 + 0x118));
  uVar16 = CONCAT44(uVar38,uVar35);
  uVar14 = CONCAT71((int7)((ulonglong)ppuVar30 >> 8),*(undefined1 *)(param_1 + 0x124)) &
           0xffffffffffffff01;
  pppppppuVar22 =
       (undefined8 *******)
       (CONCAT71((int7)((ulonglong)plVar21 >> 8),*(undefined1 *)(param_1 + 299)) &
       0xffffffffffffff0f);
  cVar9 = FUN_1400400b0(param_1,pppppppuVar22,uVar12,uVar14,uVar16);
  uVar38 = (undefined4)((ulonglong)uVar16 >> 0x20);
  if (cVar9 != '\0') {
    return;
  }
  if ((uVar4 - 0x16 < 0x40 & (byte)(0x800000000400007f >> ((ulonglong)(uVar4 - 0x16) & 0x3f))) == 0)
  {
    uVar15 = 0;
  }
  else {
    pppppppuVar22 =
         (undefined8 *******)CONCAT71((int7)((ulonglong)pppppppuVar22 >> 8),uVar4 == 0x1a);
    uVar15 = FUN_1450b4030(param_5,pppppppuVar22);
  }
  bVar32 = bVar33 ^ 1;
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  uVar23 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),(uVar5 & 0xc) == 0 & bVar32);
  lStack_60 = **(longlong **)(unaff_GS_OFFSET + 0x58);
  uStack_90 = 3;
  uStack_aa = *(ushort *)(*(longlong *)(lStack_60 + 0x12a8) + 0x1236e);
  uVar17 = (ulonglong)uStack_aa;
  bStack_c1 = 0;
  bVar3 = *(byte *)(param_1 + 0x125);
  if ((bVar3 & 8) != 0) {
    uVar16 = func_0x000144e929d0(*(undefined4 *)(param_1 + 0x100));
    pppppppuVar22 = param_5;
    uVar17 = FUN_140539af0(uVar16,param_5,&bStack_c1);
    uVar23 = uVar23 & 0xffffffff;
    uStack_90 = (undefined4)uVar17;
    if ((bStack_c1 & 1) != 0) goto LAB_14011e881;
  }
  bVar10 = (param_4 ^ 1) & bVar33 | uVar27 == 6;
  uVar18 = CONCAT71((int7)(uVar17 >> 8),bVar10);
  uVar17 = uVar23;
  if ((uVar5 & 0x60) == 0) {
    uVar31 = uVar18 & 0xffffffff;
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    uVar8 = uStack_b8;
    iVar26 = iStack_c0;
    if (*(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1298) != 0) {
      if (((byte)uVar31 & 4 < (uint)uStack_b8) != 0) goto LAB_14011e71c;
      if ((uint)uStack_b8 < 5) goto LAB_14011e881;
      goto LAB_14011e735;
    }
    bVar11 = bVar11 >> 2 & uVar27 == 3;
    bVar1 = uVar4 == 0x29 || uVar4 == 0x59;
    uVar25 = (ushort)iStack_c0;
    if (uVar5 == 1 || bVar33 != false) {
      if (-1 < (short)uVar25 && (uStack_94 & 1) == 0) goto LAB_14011e831;
LAB_14011e993:
      if ((char)uStack_94 != '\0') {
        puVar37 = &uStack_44;
        func_0x000145095130(iStack_c0,uStack_b8 & 0xffffffff,uVar20,&uStack_bc,puVar37);
        uVar38 = (undefined4)((ulonglong)puVar37 >> 0x20);
        ppuVar28 = (undefined **)(ulonglong)uStack_44;
        if (bVar32 == 0 && 4 < uStack_bc) {
          lVar19 = FUN_144e58060(ppuVar28,uVar20);
          if (lVar19 == 0) goto LAB_14011e881;
        }
        else if (uStack_bc < 5) goto LAB_14011e881;
        ppuVar30 = ppuStack_a8;
        uVar16 = CONCAT44(uVar38,uStack_44);
        in_stack_fffffffffffffef0 = in_stack_fffffffffffffef0 & 0xffffffffffffff00;
        FUN_144e57340(uStack_98,uStack_bc,uVar31,uVar20,uVar16,in_stack_fffffffffffffef0,
                      in_stack_fffffffffffffef8 & 0xffffffffffffff00,1);
        uVar38 = (undefined4)((ulonglong)uVar16 >> 0x20);
        uStack_50 = 0;
        uStack_58 = 0;
        FUN_1454696d0(&cStack_c2,param_1,ppuVar30);
        if (bVar11 == 0) {
          if (*(char *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
              == '\0') {
            func_0x0001455db994();
          }
          if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0xa34) == '\0') {
            if (*(char *)(*(longlong *)
                           (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
                == '\0') {
              func_0x0001455db994();
            }
            if (*(int *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0xac0) != 5) {
              if (((bVar2 & 2) == 0) ||
                 (cVar9 = func_0x0001401d8380(uVar6,*(uint *)ppuVar30,uVar12), cVar9 == '\0')) {
                uVar20 = FUN_145094fa0(param_1);
                (**(code **)(*param_2 + 0x10))
                          (param_2,param_5,param_6,uVar6,CONCAT44(uVar38,uVar12),
                           in_stack_fffffffffffffef0 & 0xffffffffffff0000,uVar20);
              }
              else {
                uStack_70 = 0;
                puStack_78 = (undefined *)((ulonglong)puStack_78 & 0xffffffff00000000);
                FUN_1454696d0(&pppppppuStack_88,param_1,ppuVar30);
                FUN_14175db80(param_2,param_2[2],param_5,param_6,CONCAT44(uVar38,uVar6),uVar12);
                if ((char)pppppppuStack_88 == '\x01') {
                  FUN_144e581c0();
                }
              }
              goto LAB_14011f07c;
            }
          }
          ppuVar28 = &puStack_78;
          puStack_78 = &UNK_1465164e0;
          uStack_68 = 0;
          uStack_70 = CONCAT44(uStack_70._4_4_,1);
          pppppppuStack_88 = param_5;
          uStack_80 = param_6;
          uVar20 = FUN_145094fa0(param_1);
          FUN_140178430(param_2,&pppppppuStack_88,ppuVar28,uVar6,CONCAT44(uVar38,uVar12),uVar20);
        }
        else {
          FUN_144ecbc80(bVar1 | bVar7,1,ppuVar30);
          (**(code **)(*param_2 + 0x10))
                    (param_2,param_5,param_5,uVar6,CONCAT44(uVar38,uVar12),
                     in_stack_fffffffffffffef0 & 0xffffffffffff0000,0);
          FUN_144ea64c0();
        }
LAB_14011f07c:
        if (cStack_c2 == '\x01') {
          FUN_144e581c0();
        }
        goto LAB_14011e881;
      }
      if ((byte)uVar31 == 1 && 4 < (uint)uStack_b8) {
        lVar19 = FUN_144e58060(ppuVar28,uVar20);
        if (lVar19 == 0) goto LAB_14011e881;
      }
      else if ((uint)uStack_b8 < 5) goto LAB_14011e881;
      uVar16 = CONCAT44(uVar38,(int)ppuVar28);
      uVar14 = CONCAT71((int7)(in_stack_fffffffffffffef0 >> 8),(char)uStack_9c);
      FUN_144e57340(uStack_98,uVar8 & 0xffffffff,uVar31,uVar20,uVar16,uVar14,param_7,0);
      uVar38 = (undefined4)((ulonglong)uVar16 >> 0x20);
      if (uVar4 == 0x3c) {
        FUN_1432ad870(*(undefined1 *)(param_1 + 0x11b));
      }
      ppuVar28 = ppuStack_a8;
      uStack_50 = 0;
      uStack_58 = (uint)(*(byte *)(param_1 + 0x125) >> 7);
      FUN_1454696d0(&uStack_bc,param_1,ppuStack_a8);
      if (bVar11 == 0) {
        if (*(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
            '\0') {
          func_0x0001455db994();
        }
        if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0xa34) == '\0') {
          if (*(char *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
              == '\0') {
            func_0x0001455db994();
          }
          if (*(int *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0xac0) != 5) {
            if (((bVar2 & 2) == 0) ||
               (cVar9 = func_0x0001401d8380(uVar6,*(uint *)ppuVar28,uVar12), cVar9 == '\0')) {
              uVar20 = FUN_145094fa0(param_1);
              (**(code **)(*param_2 + 0x10))
                        (param_2,param_5,param_6,uVar6,CONCAT44(uVar38,uVar12),
                         uVar14 & 0xffffffffffff0000,uVar20);
            }
            else {
              uStack_70 = 0;
              puStack_78 = (undefined *)((ulonglong)puStack_78 & 0xffffffff00000000);
              FUN_1454696d0(&pppppppuStack_88,param_1,ppuVar28);
              FUN_14175db80(param_2,param_2[2],param_5,param_6,CONCAT44(uVar38,uVar6),uVar12);
              if ((char)pppppppuStack_88 == '\x01') goto LAB_14011f449;
            }
            goto joined_r0x00014011ef98;
          }
        }
        ppuVar28 = &puStack_78;
        puStack_78 = &UNK_1465164e0;
        uStack_68 = 0;
        uStack_70 = CONCAT44(uStack_70._4_4_,1);
        pppppppuStack_88 = param_5;
        uStack_80 = param_6;
        uVar20 = FUN_145094fa0(param_1);
        FUN_140178430(param_2,&pppppppuStack_88,ppuVar28,uVar6,CONCAT44(uVar38,uVar12),uVar20);
      }
      else {
        FUN_144ecbc80(bVar1 | bVar7,1,ppuVar28);
        (**(code **)(*param_2 + 0x10))
                  (param_2,param_5,param_5,uVar6,CONCAT44(uVar38,uVar12),uVar14 & 0xffffffffffff0000
                   ,0);
        FUN_144ea64c0();
      }
    }
    else {
      pppppppuVar22 = (undefined8 *******)(ulonglong)uStack_94;
      if (((short)uVar25 < 0 || (uStack_94 & 1) != 0) || uVar4 - 0x10 < 0xfffffffa)
      goto LAB_14011e993;
LAB_14011e831:
      uVar17 = uVar23 & 0xffffffff;
      uVar27 = 0xff - iStack_c0;
      ppuVar28 = (undefined **)(ulonglong)uVar27;
      uVar24 = (undefined7)(uVar23 >> 8);
      uStack_b8 = uVar15;
      if (uVar25 < 5 || bVar32 != 0) {
        uVar35 = (undefined4)CONCAT71(uVar24,bVar33);
        if (4 < uVar25) goto LAB_14011ea04;
      }
      else {
        pppppppuVar22 = (undefined8 *******)0x0;
        lVar19 = FUN_144e58060(iStack_c0,0);
        uVar35 = (undefined4)CONCAT71(uVar24,bVar33);
        if (lVar19 != 0) {
LAB_14011ea04:
          uVar35 = (undefined4)CONCAT71(uVar24,bVar33);
          uVar20 = CONCAT44(uVar38,iVar26);
          in_stack_fffffffffffffef8 = in_stack_fffffffffffffef8 & 0xffffffffffffff00;
          in_stack_fffffffffffffef0 = in_stack_fffffffffffffef0 & 0xffffffffffffff00;
          FUN_144e57340(uVar17,iVar26,CONCAT71(uVar24,bVar33) & 0xffffffff,0,uVar20,
                        in_stack_fffffffffffffef0,in_stack_fffffffffffffef8,1);
          uVar38 = (undefined4)((ulonglong)uVar20 >> 0x20);
          if (uVar4 == 0x3c) {
            FUN_1432ad870(*(undefined1 *)(param_1 + 0x11b));
          }
          ppuVar30 = ppuStack_a8;
          uStack_50 = 0;
          uStack_58 = (uint)(*(byte *)(param_1 + 0x125) >> 7);
          FUN_1454696d0(&uStack_bc,param_1,ppuStack_a8);
          if (bVar11 == 0) {
            if (*(char *)(*(longlong *)
                           (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
                == '\0') {
              func_0x0001455db994();
            }
            if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0xa34) == '\0') {
              if (*(char *)(*(longlong *)
                             (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
                           8) == '\0') {
                func_0x0001455db994();
              }
              if (*(int *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0xac0) != 5) {
                if (((bVar2 & 2) == 0) ||
                   (cVar9 = func_0x0001401d8380(uVar6,*(uint *)ppuStack_a8,uVar12), cVar9 == '\0'))
                {
                  in_stack_fffffffffffffef8 = FUN_145094fa0(param_1);
                  uVar14 = (ulonglong)uVar6;
                  uVar20 = CONCAT44(uVar38,uVar12);
                  in_stack_fffffffffffffef0 = in_stack_fffffffffffffef0 & 0xffffffffffff0000;
                  pppppppuVar22 = param_5;
                  (**(code **)(*param_2 + 0x10))
                            (param_2,param_5,param_6,uVar14,uVar20,in_stack_fffffffffffffef0,
                             in_stack_fffffffffffffef8);
                  uVar38 = (undefined4)((ulonglong)uVar20 >> 0x20);
                }
                else {
                  uStack_70 = 0;
                  puStack_78 = (undefined *)((ulonglong)puStack_78 & 0xffffffff00000000);
                  FUN_1454696d0(&pppppppuStack_88,param_1,ppuStack_a8);
                  pppppppuVar22 = (undefined8 *******)param_2[2];
                  uVar20 = CONCAT44(uVar38,uVar6);
                  in_stack_fffffffffffffef0 =
                       CONCAT44((int)(in_stack_fffffffffffffef0 >> 0x20),uVar12);
                  uVar14 = param_6;
                  FUN_14175db80(param_2,pppppppuVar22,param_5,param_6,uVar20,
                                in_stack_fffffffffffffef0);
                  uVar38 = (undefined4)((ulonglong)uVar20 >> 0x20);
                  if ((char)pppppppuStack_88 == '\x01') {
                    FUN_144e581c0();
                  }
                }
                goto LAB_14011ebdd;
              }
            }
            pppppppuVar22 = &pppppppuStack_88;
            puStack_78 = &UNK_1465164e0;
            uStack_68 = 0;
            uStack_70 = CONCAT44(uStack_70._4_4_,1);
            pppppppuStack_88 = param_5;
            uStack_80 = param_6;
            in_stack_fffffffffffffef0 = FUN_145094fa0(param_1);
            uVar14 = (ulonglong)uVar6;
            uVar20 = CONCAT44(uVar38,uVar12);
            FUN_140178430(param_2,pppppppuVar22,&puStack_78,uVar14,uVar20,in_stack_fffffffffffffef0)
            ;
            uVar38 = (undefined4)((ulonglong)uVar20 >> 0x20);
          }
          else {
            FUN_144ecbc80(bVar1 | bVar7,1,ppuVar30);
            uVar14 = (ulonglong)uVar6;
            uVar20 = CONCAT44(uVar38,uVar12);
            in_stack_fffffffffffffef8 = 0;
            in_stack_fffffffffffffef0 = in_stack_fffffffffffffef0 & 0xffffffffffff0000;
            pppppppuVar22 = param_5;
            (**(code **)(*param_2 + 0x10))
                      (param_2,param_5,param_5,uVar14,uVar20,in_stack_fffffffffffffef0,0);
            uVar38 = (undefined4)((ulonglong)uVar20 >> 0x20);
            FUN_144ea64c0();
          }
LAB_14011ebdd:
          iVar26 = iStack_c0;
          if ((char)uStack_bc == '\x01') {
            FUN_144e581c0();
          }
        }
      }
      uVar36 = func_0x000144d9f8d0(*(undefined2 *)(param_1 + 0x118));
      uVar20 = CONCAT44(uVar38,uVar36);
      iVar29 = uVar12 + 1;
      cVar9 = FUN_1400400b0(param_1,CONCAT71((int7)((ulonglong)pppppppuVar22 >> 8),
                                             *(undefined1 *)(param_1 + 299)) & 0xffffffffffffff0f,
                            iVar29,CONCAT71((int7)(uVar14 >> 8),*(undefined1 *)(param_1 + 0x124)) &
                                   0xffffffffffffff01,uVar20);
      uVar38 = (undefined4)((ulonglong)uVar20 >> 0x20);
      bVar34 = uVar27 < 5;
      if (bVar32 == 0 && !bVar34) {
        lVar19 = FUN_144e58060(iVar26,1);
        bVar34 = lVar19 == 0;
      }
      uVar23 = uVar17;
      uVar15 = uStack_b8;
      if (cVar9 != '\0' || bVar34) goto LAB_14011e881;
      uVar20 = CONCAT44(uVar38,iVar26);
      in_stack_fffffffffffffef0 = in_stack_fffffffffffffef0 & 0xffffffffffffff00;
      FUN_144e57340(uVar17,uVar27,uVar35,1,uVar20,in_stack_fffffffffffffef0,
                    in_stack_fffffffffffffef8 & 0xffffffffffffff00,1);
      uVar38 = (undefined4)((ulonglong)uVar20 >> 0x20);
      if (uVar4 == 0x3c) {
        FUN_1432ad870(*(undefined1 *)(param_1 + 0x11b));
      }
      ppuVar30 = ppuStack_a8;
      uStack_50 = 0;
      uStack_58 = (uint)(*(byte *)(param_1 + 0x125) >> 7);
      FUN_1454696d0(&uStack_bc,param_1,ppuStack_a8);
      if (bVar11 != 0) {
        FUN_144ecbc80(bVar1 | bVar7,1,ppuVar30);
        (**(code **)(*param_2 + 0x10))
                  (param_2,param_5,param_5,uVar6,CONCAT44(uVar38,iVar29),
                   in_stack_fffffffffffffef0 & 0xffffffffffff0000,0);
        FUN_144ea64c0();
        uVar15 = uStack_b8;
        goto joined_r0x00014011ef98;
      }
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0xa34) == '\0') {
        if (*(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
            '\0') {
          func_0x0001455db994();
        }
        if (*(int *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0xac0) == 5) goto LAB_14011ef25;
        if (((bVar2 & 2) == 0) ||
           (cVar9 = func_0x0001401d8380(uVar6,*(uint *)ppuStack_a8,iVar29), cVar9 == '\0')) {
          uVar20 = FUN_145094fa0(param_1);
          (**(code **)(*param_2 + 0x10))
                    (param_2,param_5,param_6,uVar6,CONCAT44(uVar38,iVar29),
                     in_stack_fffffffffffffef0 & 0xffffffffffff0000,uVar20);
          uVar15 = uStack_b8;
          goto joined_r0x00014011ef98;
        }
        uStack_70 = 0;
        puStack_78 = (undefined *)((ulonglong)puStack_78 & 0xffffffff00000000);
        FUN_1454696d0(&pppppppuStack_88,param_1,ppuStack_a8);
        FUN_14175db80(param_2,param_2[2],param_5,param_6,CONCAT44(uVar38,uVar6),iVar29);
        uVar15 = uStack_b8;
        if ((char)pppppppuStack_88 != '\x01') goto joined_r0x00014011ef98;
LAB_14011f449:
        FUN_144e581c0();
      }
      else {
LAB_14011ef25:
        ppuVar28 = &puStack_78;
        puStack_78 = &UNK_1465164e0;
        uStack_68 = 0;
        uStack_70 = CONCAT44(uStack_70._4_4_,1);
        pppppppuStack_88 = param_5;
        uStack_80 = param_6;
        uVar20 = FUN_145094fa0(param_1);
        FUN_140178430(param_2,&pppppppuStack_88,ppuVar28,uVar6,CONCAT44(uVar38,iVar29),uVar20);
        uVar15 = uStack_b8;
      }
    }
  }
  else {
    if (bVar10 != 0) {
LAB_14011e71c:
      lVar19 = FUN_144e58060(ppuVar28,uVar20);
      if (lVar19 == 0) goto LAB_14011e881;
    }
LAB_14011e735:
    uVar16 = CONCAT44(uVar38,(int)ppuVar28);
    FUN_144e57340(uStack_98,uStack_b8 & 0xffffffff,uVar18 & 0xffffffff,uVar20,uVar16,(char)uStack_9c
                  ,param_7,0);
    uVar38 = (undefined4)((ulonglong)uVar16 >> 0x20);
    if (uVar4 == 0x3c) {
      FUN_1432ad870(*(undefined1 *)(param_1 + 0x11b));
    }
    uStack_70 = 0;
    puStack_78 = (undefined *)CONCAT44(puStack_78._4_4_,(uint)(*(byte *)(param_1 + 0x125) >> 7));
    FUN_1454696d0(&pppppppuStack_88,param_1,ppuStack_a8);
    FUN_144f36b00(param_2,param_5,param_6,uVar6,CONCAT44(uVar38,uVar12));
    uStack_bc._0_1_ = (char)pppppppuStack_88;
  }
joined_r0x00014011ef98:
  uVar23 = uVar17;
  if ((char)uStack_bc == '\x01') {
    FUN_144e581c0();
  }
LAB_14011e881:
  if (uVar15 != 0) {
    func_0x000144e72100(uVar15);
  }
  uVar4 = uStack_8c;
  if ((bVar3 & 8) != 0) {
    FUN_140180b30(uStack_90);
  }
  if ((char)uStack_9c != '\0') {
    plVar21 = (longlong *)(lStack_60 + 0x12a8);
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    lVar19 = *plVar21;
    if (*(ushort *)(lVar19 + 0x1236e) != uStack_aa) {
      *(ushort *)(lVar19 + 0x1236e) = uStack_aa;
      *(ulonglong *)(lVar19 + 0x12520) =
           (ulonglong)(*(ushort *)(lVar19 + 0x123ee) != uStack_aa) << 0x14 |
           *(ulonglong *)(lVar19 + 0x12520) & 0xffffffffffefffff;
    }
  }
  FUN_144e55390(0,0);
  FUN_145096530((byte)uStack_98 | (byte)uVar23,
                CONCAT71((int7)((ulonglong)ppuVar28 >> 8),bVar33 | uVar4 == 6) & 0xffffffff);
  return;
}

