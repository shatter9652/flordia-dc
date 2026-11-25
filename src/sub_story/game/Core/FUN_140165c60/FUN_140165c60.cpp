// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140165c60  size: 692 bytes
// Name:    FUN_140165c60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1412b1130, FUN_1412b13e0, FUN_144dd3550, FUN_144dd3330, FUN_140165c60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x000140165ef2: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000140165ef7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140165c60(undefined1 (*param_1) [16],longlong *param_2,undefined4 param_3,char param_4)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined2 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 (*pauVar9) [16];
  undefined1 (*unaff_RSI) [16];
  int iVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  undefined1 auVar13 [16];
  undefined8 auStack_100 [6];
  int iStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  longlong lStack_c0;
  undefined4 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [16];
  undefined4 *puStack_88;
  uint uStack_80;
  longlong lStack_68;
  longlong lStack_60;
  undefined1 auStack_58 [24];
  
  if (param_4 == '\0') {
    uVar1 = *(undefined4 *)((longlong)param_2 + 0x9c);
    auStack_100[0] = 0x140165c92;
    lVar5 = func_0x000144f1bf10(uVar1);
    if (lVar5 != 0) {
      auStack_100[0] = 0x140165ca6;
      lVar5 = func_0x0001451f88f0(*(undefined4 *)(lVar5 + 0x24),*(undefined8 *)(lVar5 + 0x30),
                                  param_3);
      if (lVar5 != 0) {
        iVar10 = *(int *)(*(longlong *)(lVar5 + 8) + 0x30);
        pauVar9 = param_1;
        param_1 = unaff_RSI;
code_r0x000140165f20:
        *(undefined1 (**) [16])((longlong)register0x00000020 + -8) = param_1;
        auVar13._0_12_ = ZEXT812(0);
        auVar13._12_4_ = 0;
        *pauVar9 = auVar13;
        if ((param_2 != (longlong *)0x0) && (iVar10 != -1)) {
          *(undefined1 (*) [32])((longlong)register0x00000020 + -0x48) = ZEXT432(0) << 0x20;
          *(undefined1 (*) [32])((longlong)register0x00000020 + -0x28) = ZEXT432(0) << 0x20;
          *(undefined4 *)((longlong)register0x00000020 + -0x48) = 0x3f800000;
          *(undefined4 *)((longlong)register0x00000020 + -0x34) = 0x3f800000;
          *(undefined4 *)((longlong)register0x00000020 + -0x20) = 0x3f800000;
          pcVar2 = *(code **)(*param_2 + 0xe8);
          if (pcVar2 == FUN_144ec0640) {
            *(undefined **)((longlong)register0x00000020 + -0x70) = &UNK_144ec0618;
            FUN_144ec0640(param_2,iVar10,(undefined1 *)((longlong)register0x00000020 + -0x48));
          }
          else {
            *(undefined **)((longlong)register0x00000020 + -0x70) = &UNK_144ec063c;
            (*pcVar2)(param_2,iVar10,(undefined1 *)((longlong)register0x00000020 + -0x48));
          }
          uVar7 = *(undefined8 *)((longlong)register0x00000020 + -0x10);
          *(undefined8 *)*pauVar9 = *(undefined8 *)((longlong)register0x00000020 + -0x18);
          *(undefined8 *)(*pauVar9 + 8) = uVar7;
        }
        return;
      }
    }
    auStack_100[0] = 0x140165cd8;
    plVar6 = (longlong *)func_0x00014506c3d0(uVar1);
    if (plVar6 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140165d04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 200))(plVar6,param_1,*(code **)(*plVar6 + 200));
      return;
    }
    lStack_68 = param_2[0xe];
    lStack_60 = param_2[0xf];
    auStack_100[0] = 0x140165eda;
    func_0x000144dc3790(&lStack_68,param_1);
  }
  else {
    auStack_100[0] = 0x140165d1a;
    FUN_140165c60(&uStack_a8,param_2,param_3,0);
    uVar1 = *(undefined4 *)((longlong)param_2 + 0x9c);
    auStack_100[0] = 0x140165d29;
    lStack_c0 = func_0x000144f1bf10(uVar1);
    if (lStack_c0 != 0) {
      auStack_100[0] = 0x140165d4d;
      iStack_cc = func_0x00014020a740(_DAT_146d9e648,_DAT_146d9e664,param_3);
      puStack_88 = (undefined4 *)0x0;
      uStack_80 = 0;
      auStack_100[0] = 0x140165d6a;
      uVar7 = func_0x00014506c3d0(uVar1);
      auStack_100[0] = 0x140165d72;
      lVar5 = FUN_1412b1130(uVar7);
      if (lVar5 != 0) {
        auStack_100[0] = 0x140165d8b;
        FUN_1412b13e0(lVar5,auStack_98);
        if ((ulonglong)uStack_80 != 0) {
          puStack_b8 = puStack_88 + (ulonglong)uStack_80 * 4;
          puVar11 = puStack_88;
          do {
            uVar1 = *puVar11;
            auStack_100[0] = 0x140165db6;
            uVar7 = func_0x000144ddb100(0);
            auStack_100[0] = 0x140165dc9;
            FUN_144dd3330(uVar1,&uStack_c4);
            auStack_100[0] = 0x140165ddb;
            lVar5 = FUN_144dd3550(uVar7,uStack_c4,0xe9);
            uVar1 = puVar11[1];
            auStack_100[0] = 0x140165de9;
            uVar7 = func_0x000144ddb100(0);
            auStack_100[0] = 0x140165df7;
            FUN_144dd3330(uVar1,&uStack_c4);
            auStack_100[0] = 0x140165e09;
            lVar8 = FUN_144dd3550(uVar7,uStack_c4,0xe9);
            uVar3 = _DAT_146d9e664;
            if (lVar8 != 0 && lVar5 != 0) {
              iStack_c8 = *(int *)(lVar5 + 4);
              iVar10 = *(int *)(lVar8 + 4);
              if (((iStack_cc == iStack_c8) ||
                  (iVar10 = iStack_c8, iStack_cc == *(int *)(lVar8 + 4))) &&
                 (iStack_c8 = iVar10, iVar10 = *(int *)(lStack_c0 + 0x24), 0 < (longlong)iVar10)) {
                uVar12 = 0;
                lVar5 = *(longlong *)(lStack_c0 + 0x30);
                uStack_b0 = _DAT_146d9e648;
                lVar8 = lVar5;
                do {
                  if (lVar5 != 0) {
                    auStack_100[0] = 0x140165e75;
                    iVar4 = func_0x00014020a740(uStack_b0,uVar3,(longlong)*(int *)(lVar8 + 0x60));
                    if (iVar4 == iStack_c8) {
                      pauVar9 = (undefined1 (*) [16])auStack_58;
                      iVar10 = *(int *)(*(longlong *)(lVar8 + 8) + 0x30);
                      register0x00000020 = (BADSPACEBASE *)auStack_100;
                      auStack_100[0] = 0x140165ef7;
                      goto code_r0x000140165f20;
                    }
                  }
                  uVar12 = uVar12 + 1;
                  lVar8 = lVar8 + 0xc0;
                } while (uVar12 < (ulonglong)(longlong)iVar10);
              }
            }
            puVar11 = puVar11 + 4;
          } while (puVar11 != puStack_b8);
        }
      }
    }
    *(undefined8 *)*param_1 = uStack_a8;
    *(undefined8 *)(*param_1 + 8) = uStack_a0;
  }
  return;
}

