// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140116df0  size: 1019 bytes
// Name:    FUN_140116df0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140056cb0, FUN_14248ce00, FUN_140037a50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140116df0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  uint *puVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  longlong unaff_GS_OFFSET;
  undefined1 auVar13 [16];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 auVar14 [64];
  undefined1 auVar16 [16];
  undefined1 auVar17 [32];
  undefined1 auVar19 [64];
  undefined1 auVar21 [64];
  undefined1 auStack_78 [8];
  uint uStack_70;
  undefined1 auVar15 [12];
  undefined1 extraout_var_01 [56];
  undefined1 auVar18 [16];
  float fVar20;
  
  auVar19._0_8_ = func_0x000144de5390(param_1,auStack_78);
  auVar19._8_56_ = extraout_var;
  auVar15 = auVar19._4_12_;
  if (uStack_70 != 0) {
    lVar6 = param_2[2];
    lVar2 = *param_2;
    iVar12 = (int)param_2[1] * (int)lVar6;
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      auVar21._0_8_ = func_0x0001455db994();
      auVar21._8_56_ = extraout_var_00;
      auVar15 = auVar21._4_12_;
    }
    cVar7 = *(char *)((longlong)param_2 + 0x14);
    lVar3 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    lVar11 = *(longlong *)(lVar3 + 0x12a8);
    if (*(char *)(lVar11 + 0x1237d) != cVar7) {
      *(char *)(lVar11 + 0x1237d) = cVar7;
      *(ulonglong *)(lVar11 + 0x12520) =
           (ulonglong)(*(char *)(lVar11 + 0x123fd) != cVar7) << 0x12 |
           *(ulonglong *)(lVar11 + 0x12520) & 0xfffffffffffbffff;
    }
    plVar1 = (longlong *)(lVar3 + 0x12a8);
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      auVar14._0_8_ = func_0x0001455db994();
      auVar14._8_56_ = extraout_var_01;
      auVar15 = auVar14._4_12_;
      lVar11 = *plVar1;
    }
    if (*(longlong *)(lVar11 + 0x12320) != 0) {
      *(undefined8 *)(lVar11 + 0x12320) = 0;
      *(byte *)(lVar11 + 0x12522) = *(byte *)(lVar11 + 0x12522) | 0x80;
    }
    auVar18._0_4_ = (float)uStack_70;
    auVar18._4_12_ = auVar15;
    auVar19 = ZEXT1664(auVar18);
    fVar20 = (float)(int)lVar6;
    auVar21 = ZEXT1664(CONCAT124(auVar15,fVar20));
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
      fVar20 = auVar21._0_4_;
      auVar18 = auVar19._0_16_;
      lVar11 = *plVar1;
    }
    auVar13._0_4_ = auVar18._0_4_ / fVar20;
    auVar13._4_12_ = auVar18._4_12_;
    if (*(int *)(lVar11 + 0x12530) != 0) {
      auVar16._0_12_ = ZEXT812(0);
      auVar16._12_4_ = 0;
      *(undefined1 (*) [32])(lVar11 + 0x12500) = ZEXT1632(auVar16);
      *(undefined1 (*) [32])(lVar11 + 0x124e0) = ZEXT1632(auVar16);
      auVar17 = ZEXT1632(auVar16);
      *(undefined1 (*) [32])(lVar11 + 0x124c0) = auVar17;
      *(undefined1 (*) [32])(lVar11 + 0x124a0) = auVar17;
      *(undefined1 (*) [32])(lVar11 + 0x12480) = auVar17;
      *(undefined1 (*) [32])(lVar11 + 0x12460) = auVar17;
      auVar17 = ZEXT1632(auVar16);
      *(undefined1 (*) [32])(lVar11 + 0x12440) = auVar17;
      *(undefined1 (*) [32])(lVar11 + 0x12420) = auVar17;
      *(undefined1 (*) [32])(lVar11 + 0x12538) = auVar17;
      *(undefined1 (*) [32])(lVar11 + 0x12558) = auVar17;
      *(undefined1 (*) [32])(lVar11 + 0x12578) = auVar17;
      *(undefined1 (*) [32])(lVar11 + 0x12598) = auVar17;
      *(undefined1 (*) [32])(lVar11 + 0x125b8) = auVar17;
      *(undefined1 (*) [32])(lVar11 + 0x125d8) = auVar17;
      *(undefined1 (*) [32])(lVar11 + 0x125f8) = ZEXT1632(auVar16);
      *(undefined1 (*) [32])(lVar11 + 0x12618) = ZEXT1632(auVar16);
      *(byte *)(lVar11 + 0x12523) = *(byte *)(lVar11 + 0x12523) | 0x20;
    }
    *(undefined4 *)(lVar11 + 0x12530) = 0;
    auVar18 = vroundss_avx(auVar13,auVar13,10);
    fVar20 = auVar18._0_4_;
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      auVar19 = ZEXT1664(auVar18);
      func_0x0001455db994();
      fVar20 = auVar19._0_4_;
      lVar11 = *plVar1;
    }
    if (*(longlong *)(lVar11 + 0x12638) != lVar2) {
      *(longlong *)(lVar11 + 0x12638) = lVar2;
      *(byte *)(lVar11 + 0x12523) = *(byte *)(lVar11 + 0x12523) | 1;
    }
    plVar4 = *(longlong **)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1288);
    if (plVar4 == (longlong *)0x0) {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
        lVar11 = *plVar1;
      }
      FUN_14248ce00(lVar11,iVar12,(longlong)fVar20 & 0xffffffff,0,0);
      if (((**(uint **)(lVar11 + 0x12198) & 0xc000000) == 0) &&
         (cVar7 = func_0x000144e88f60(lVar11), cVar7 != '\0')) {
        puVar5 = *(uint **)(lVar11 + 0x12198);
        while ((*puVar5 & 0xe000000) != 0x2000000) {
          FUN_140037a50(puVar5,0,1);
        }
        FUN_140056f60(lVar11,&stack0xfffffffffffffff8,1);
        return;
      }
    }
    else {
      iVar8 = (**(code **)(*plVar4 + 8))(plVar4);
      if (iVar8 != 0) {
        uVar10 = 0;
        do {
          cVar7 = (**(code **)(*plVar4 + 0x40))(plVar4,param_1,uVar10);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0x10))(plVar4,uVar10);
            if (*(char *)(*(longlong *)
                           (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
                == '\0') {
              func_0x0001455db994();
            }
            lVar2 = *plVar1;
            FUN_14248ce00(lVar2,iVar12,(longlong)fVar20 & 0xffffffff,0,0);
            if (((**(uint **)(lVar2 + 0x12198) & 0xc000000) == 0) &&
               (cVar7 = func_0x000144e88f60(lVar2), cVar7 != '\0')) {
              puVar5 = *(uint **)(lVar2 + 0x12198);
              uVar9 = *puVar5;
              while ((uVar9 & 0xe000000) != 0x2000000) {
                FUN_140037a50(puVar5,0,1);
                uVar9 = *puVar5;
              }
              FUN_140056cb0(lVar2);
            }
            (**(code **)(*plVar4 + 0x18))(plVar4,uVar10);
          }
          uVar10 = uVar10 + 1;
          uVar9 = (**(code **)(*plVar4 + 8))(plVar4);
        } while (uVar10 < uVar9);
      }
    }
  }
  return;
}

