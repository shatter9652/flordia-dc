// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1455e6490  size: 1669 bytes
// Name:    HttpUpload::GenerateFieldHeader
// Subsystem: core
// Class:   HttpUpload
//
// Evidence:
//   GTAVSRC: HttpUpload::GenerateFieldHeader  (game/control/replay/HttpUpload/HttpUpload.cpp)
//   literal: Content-Disposition: form-data; name="
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1455e3440, FUN_1455e7960, FUN_1455e4ab0, FUN_1455e5ea0, FUN_1455ea040, FUN_143a4e270
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/HttpUpload.h"


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void HttpUpload__GenerateFieldHeader
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3,uint param_4)

{
  code *pcVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 *******pppppppuVar4;
  undefined8 *******pppppppuVar5;
  undefined8 *puVar6;
  undefined8 ******ppppppuVar7;
  wchar_t wVar8;
  undefined1 *puVar9;
  longlong lVar10;
  undefined8 *******pppppppuVar11;
  wchar_t wVar12;
  undefined8 ******ppppppuVar13;
  undefined1 auStackY_128 [32];
  undefined8 ******in_stack_fffffffffffffef8;
  undefined1 auStack_f8 [16];
  longlong lStack_e8;
  longlong alStack_e0 [2];
  undefined8 ******ppppppuStack_d0;
  undefined8 ******ppppppuStack_c8;
  undefined8 *******pppppppuStack_c0;
  undefined8 ******ppppppuStack_b8;
  undefined8 ******ppppppuStack_b0;
  undefined8 ******ppppppuStack_a8;
  undefined8 *******pppppppuStack_a0;
  undefined8 ******ppppppuStack_98;
  undefined8 ******ppppppuStack_90;
  undefined8 ******ppppppuStack_88;
  undefined8 *******pppppppuStack_80;
  longlong lStack_78;
  undefined8 ******ppppppuStack_70;
  undefined8 ******ppppppuStack_68;
  undefined8 *******apppppppuStack_60 [2];
  undefined8 ******ppppppuStack_50;
  ulonglong uStack_48;
  ulonglong uStack_40;
  
  uStack_40 = _DAT_1467e2038 ^ (ulonglong)auStackY_128;
  puVar6 = param_3;
  FUN_1455e5ea0(apppppppuStack_60,param_1);
  wVar12 = (wchar_t)puVar6;
  if (ppppppuStack_50 != (undefined8 ******)0x0) {
    pppppppuVar5 = &pppppppuStack_c0;
    FUN_1455e5ea0(pppppppuVar5,param_2);
    pppppppuVar11 = pppppppuStack_c0;
    ppppppuVar13 = ppppppuStack_a8;
    if (ppppppuStack_b0 != (undefined8 ******)0x0) {
      alStack_e0[0]._0_1_ = 0;
      ppppppuStack_d0 = _DAT_145f42bc0;
      ppppppuStack_c8 = _UNK_145f42bc8;
      FUN_1455e3440(alStack_e0,(longlong)ppppppuStack_50 + 0x26);
      if ((ulonglong)((longlong)ppppppuStack_c8 - (longlong)ppppppuStack_d0) < 0x26) {
        in_stack_fffffffffffffef8 = (undefined8 ******)0x26;
        FUN_1455e7960(alStack_e0,0x26,0,&UNK_14678e300);
      }
      else {
        puVar9 = (undefined1 *)alStack_e0;
        if ((undefined8 ******)0xf < ppppppuStack_c8) {
          puVar9 = (undefined1 *)CONCAT71(alStack_e0[0]._1_7_,(undefined1)alStack_e0[0]);
        }
        puVar9 = puVar9 + (longlong)ppppppuStack_d0;
        ppppppuStack_d0 = (undefined8 ******)((longlong)ppppppuStack_d0 + 0x26);
        func_0x000145f40570(puVar9,&UNK_14678e300,0x26);
        puVar9[0x26] = 0;
      }
      pppppppuVar5 = apppppppuStack_60;
      if (0xf < uStack_48) {
        pppppppuVar5 = apppppppuStack_60[0];
      }
      if ((undefined8 ******)((longlong)ppppppuStack_c8 - (longlong)ppppppuStack_d0) <
          ppppppuStack_50) {
        FUN_1455e7960(alStack_e0,ppppppuStack_50,0);
        in_stack_fffffffffffffef8 = ppppppuStack_50;
      }
      else {
        puVar9 = (undefined1 *)alStack_e0;
        if ((undefined8 ******)0xf < ppppppuStack_c8) {
          puVar9 = (undefined1 *)CONCAT71(alStack_e0[0]._1_7_,(undefined1)alStack_e0[0]);
        }
        puVar9 = puVar9 + (longlong)ppppppuStack_d0;
        ppppppuStack_d0 = (undefined8 ******)((longlong)ppppppuStack_d0 + (longlong)ppppppuStack_50)
        ;
        func_0x000145f40570(puVar9,pppppppuVar5,ppppppuStack_50);
        puVar9[(longlong)ppppppuStack_50] = 0;
      }
      if ((ulonglong)((longlong)ppppppuStack_c8 - (longlong)ppppppuStack_d0) < 0xd) {
        in_stack_fffffffffffffef8 = (undefined8 ******)0xd;
        plVar3 = (longlong *)FUN_1455e7960(alStack_e0,0xd,0,&UNK_14678e2f0);
      }
      else {
        puVar9 = (undefined1 *)alStack_e0;
        if ((undefined8 ******)0xf < ppppppuStack_c8) {
          puVar9 = (undefined1 *)CONCAT71(alStack_e0[0]._1_7_,(undefined1)alStack_e0[0]);
        }
        puVar9 = puVar9 + (longlong)ppppppuStack_d0;
        ppppppuStack_d0 = (undefined8 ******)((longlong)ppppppuStack_d0 + 0xd);
        func_0x000145f40570(puVar9,&UNK_14678e2f0,0xd);
        plVar3 = alStack_e0;
        puVar9[0xd] = 0;
      }
      ppppppuVar13 = ppppppuStack_a8;
      pppppppuVar11 = pppppppuStack_c0;
      pppppppuStack_80 = (undefined8 *******)*plVar3;
      lStack_78 = plVar3[1];
      ppppppuStack_70 = (undefined8 ******)plVar3[2];
      ppppppuStack_68 = (undefined8 ******)plVar3[3];
      plVar3[2] = 0;
      plVar3[3] = 0xf;
      *(undefined1 *)plVar3 = 0;
      pppppppuVar5 = &pppppppuStack_c0;
      if ((undefined8 ******)0xf < ppppppuVar13) {
        pppppppuVar5 = pppppppuVar11;
      }
      if ((undefined8 ******)((longlong)ppppppuStack_68 - (longlong)ppppppuStack_70) <
          ppppppuStack_b0) {
        pppppppuVar4 = (undefined8 *******)FUN_1455e7960(&pppppppuStack_80,ppppppuStack_b0,0);
        param_4 = (uint)pppppppuVar5;
        pppppppuVar11 = pppppppuStack_c0;
        ppppppuVar13 = ppppppuStack_a8;
        in_stack_fffffffffffffef8 = ppppppuStack_b0;
      }
      else {
        pppppppuVar4 = &pppppppuStack_80;
        if ((undefined8 ******)0xf < ppppppuStack_68) {
          pppppppuVar4 = pppppppuStack_80;
        }
        lVar10 = (longlong)pppppppuVar4 + (longlong)ppppppuStack_70;
        ppppppuStack_70 = (undefined8 ******)((longlong)ppppppuStack_70 + (longlong)ppppppuStack_b0)
        ;
        func_0x000145f40570(lVar10,pppppppuVar5,ppppppuStack_b0);
        param_4 = (uint)pppppppuVar5;
        pppppppuVar4 = &pppppppuStack_80;
        *(undefined1 *)(lVar10 + (longlong)ppppppuStack_b0) = 0;
      }
      pppppppuStack_a0 = (undefined8 *******)*pppppppuVar4;
      ppppppuStack_98 = pppppppuVar4[1];
      ppppppuStack_90 = pppppppuVar4[2];
      ppppppuStack_88 = pppppppuVar4[3];
      pppppppuVar4[2] = (undefined8 ******)0x0;
      pppppppuVar4[3] = (undefined8 ******)0xf;
      *(undefined1 *)pppppppuVar4 = 0;
      if ((ulonglong)((longlong)ppppppuStack_88 - (longlong)ppppppuStack_90) < 3) {
        in_stack_fffffffffffffef8 = (undefined8 ******)0x3;
        param_4 = 0x4678d438;
        pppppppuVar5 = (undefined8 *******)FUN_1455e7960(&pppppppuStack_a0,3);
      }
      else {
        pppppppuVar5 = &pppppppuStack_a0;
        if ((undefined8 ******)0xf < ppppppuStack_88) {
          pppppppuVar5 = pppppppuStack_a0;
        }
        lVar10 = (longlong)pppppppuVar5 + (longlong)ppppppuStack_90;
        ppppppuStack_90 = (undefined8 ******)((longlong)ppppppuStack_90 + 3);
        func_0x000145f40570(lVar10,&UNK_14678d438,3);
        pppppppuVar5 = &pppppppuStack_a0;
        *(undefined1 *)(lVar10 + 3) = 0;
      }
      pppppppuStack_c0 = (undefined8 *******)*pppppppuVar5;
      ppppppuStack_b8 = pppppppuVar5[1];
      ppppppuVar7 = pppppppuVar5[2];
      ppppppuStack_a8 = pppppppuVar5[3];
      pppppppuVar5[2] = (undefined8 ******)0x0;
      pppppppuVar5[3] = (undefined8 ******)0xf;
      *(undefined1 *)pppppppuVar5 = 0;
      pppppppuVar5 = &pppppppuStack_c0;
      if ((undefined8 ******)0xf < ppppppuStack_a8) {
        pppppppuVar5 = pppppppuStack_c0;
      }
      ppppppuStack_b0 = ppppppuVar7;
      FUN_143a4e270(param_3,pppppppuVar5);
      wVar12 = (wchar_t)ppppppuVar7;
      if ((undefined8 ******)0xf < ppppppuStack_a8) {
        if (0xfff < (longlong)ppppppuStack_a8 + 1U) {
          ppppppuVar7 = pppppppuStack_c0[-1];
          wVar8 = (short)ppppppuStack_a8 + L'(';
          if (0x1f < (ulonglong)((longlong)pppppppuStack_c0 + (-8 - (longlong)ppppppuVar7)))
          goto LAB_1455e68b8;
        }
        func_0x000144d9c130();
      }
      if ((undefined8 ******)0xf < ppppppuStack_88) {
        if (0xfff < (longlong)ppppppuStack_88 + 1U) {
          ppppppuVar7 = pppppppuStack_a0[-1];
          wVar8 = (short)ppppppuStack_88 + L'(';
          if (0x1f < (ulonglong)((longlong)pppppppuStack_a0 + (-8 - (longlong)ppppppuVar7)))
          goto LAB_1455e68b8;
        }
        func_0x000144d9c130();
      }
      pppppppuStack_a0 = (undefined8 *******)((ulonglong)pppppppuStack_a0 & 0xffffffffffffff00);
      ppppppuStack_90 = _DAT_145f42bc0;
      ppppppuStack_88 = _UNK_145f42bc8;
      if ((undefined8 ******)0xf < ppppppuStack_68) {
        if (0xfff < (longlong)ppppppuStack_68 + 1U) {
          ppppppuVar7 = pppppppuStack_80[-1];
          wVar8 = (short)ppppppuStack_68 + L'(';
          if (0x1f < (ulonglong)((longlong)pppppppuStack_80 + (-8 - (longlong)ppppppuVar7)))
          goto LAB_1455e68b8;
        }
        func_0x000144d9c130();
      }
      pppppppuStack_80 = (undefined8 *******)((ulonglong)pppppppuStack_80 & 0xffffffffffffff00);
      ppppppuStack_70 = _DAT_145f42bc0;
      ppppppuStack_68 = _UNK_145f42bc8;
      if ((undefined8 ******)0xf < ppppppuStack_c8) {
        if (0xfff < (longlong)ppppppuStack_c8 + 1U) {
          ppppppuVar7 = *(undefined8 *******)
                         (CONCAT71(alStack_e0[0]._1_7_,(undefined1)alStack_e0[0]) + -8);
          wVar8 = (short)ppppppuStack_c8 + L'(';
          if (0x1f < (CONCAT71(alStack_e0[0]._1_7_,(undefined1)alStack_e0[0]) -
                     (longlong)ppppppuVar7) - 8U) {
LAB_1455e68b8:
            _invalid_parameter_noinfo_noreturn
                      (ppppppuVar7,wVar8,wVar12,param_4,in_stack_fffffffffffffef8);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        func_0x000144d9c130();
      }
      lVar10 = param_3[2];
      if ((ulonglong)(param_3[3] - lVar10) < 0x28) {
        in_stack_fffffffffffffef8 = (undefined8 ******)0x28;
        param_4 = 0x4678e800;
        FUN_1455e7960(param_3,0x28);
      }
      else {
        param_3[2] = lVar10 + 0x28;
        puVar6 = param_3;
        if (0xf < (ulonglong)param_3[3]) {
          puVar6 = (undefined8 *)*param_3;
        }
        func_0x000145f40570((longlong)puVar6 + lVar10,&UNK_14678e800);
        *(undefined1 *)((longlong)puVar6 + lVar10 + 0x28) = 0;
      }
      lVar10 = param_3[2];
      if ((ulonglong)(param_3[3] - lVar10) < 2) {
        wVar12 = L'\0';
        in_stack_fffffffffffffef8 = (undefined8 ******)0x2;
        param_4 = 0x4678d444;
        FUN_1455e7960(param_3,2);
      }
      else {
        param_3[2] = lVar10 + 2;
        puVar6 = param_3;
        if (0xf < (ulonglong)param_3[3]) {
          puVar6 = (undefined8 *)*param_3;
        }
        wVar12 = L'\x02';
        func_0x000145f40570((longlong)puVar6 + lVar10,&UNK_14678d444);
        *(undefined1 *)((longlong)puVar6 + lVar10 + 2) = 0;
      }
      auStack_f8 = ZEXT816(0);
      lStack_e8 = 0;
      cVar2 = FUN_1455e4ab0(param_2,auStack_f8);
      if (cVar2 != '\0') {
        if (auStack_f8._0_8_ != auStack_f8._8_8_) {
          FUN_143a4e270(param_3);
        }
        lVar10 = param_3[2];
        if ((ulonglong)(param_3[3] - lVar10) < 2) {
          wVar12 = L'\0';
          in_stack_fffffffffffffef8 = (undefined8 ******)0x2;
          param_4 = 0x4678d444;
          FUN_1455e7960(param_3,2);
        }
        else {
          param_3[2] = lVar10 + 2;
          if (0xf < (ulonglong)param_3[3]) {
            param_3 = (undefined8 *)*param_3;
          }
          wVar12 = L'\x02';
          func_0x000145f40570((longlong)param_3 + lVar10,&UNK_14678d444);
          *(undefined1 *)((longlong)param_3 + lVar10 + 2) = 0;
        }
      }
      pppppppuVar5 = (undefined8 *******)auStack_f8._0_8_;
      if ((undefined8 *******)auStack_f8._0_8_ != (undefined8 *******)0x0) {
        if (0xfff < (ulonglong)(lStack_e8 - auStack_f8._0_8_)) {
          pppppppuVar5 = *(undefined8 ********)(auStack_f8._0_8_ + -8);
          wVar8 = (short)(lStack_e8 - auStack_f8._0_8_) + L'\'';
          if (0x1f < (ulonglong)(auStack_f8._0_8_ + (-8 - (longlong)pppppppuVar5)))
          goto LAB_1455e6adf;
        }
        func_0x000144d9c130();
        auStack_f8 = (undefined1  [16])0x0;
        lStack_e8 = 0;
      }
    }
    if ((undefined8 ******)0xf < ppppppuVar13) {
      pppppppuVar4 = pppppppuVar11;
      if (0xfff < (longlong)ppppppuVar13 + 1U) {
        pppppppuVar4 = (undefined8 *******)pppppppuVar11[-1];
        wVar8 = (short)ppppppuVar13 + L'(';
        if (0x1f < (ulonglong)((longlong)pppppppuVar11 + (-8 - (longlong)pppppppuVar4)))
        goto LAB_1455e6adf;
      }
      func_0x000144d9c130(pppppppuVar4);
    }
  }
  if (0xf < uStack_48) {
    if (0xfff < uStack_48 + 1) {
      pppppppuVar5 = (undefined8 *******)apppppppuStack_60[0][-1];
      wVar8 = (short)uStack_48 + L'(';
      if (0x1f < (ulonglong)((longlong)apppppppuStack_60[0] + (-8 - (longlong)pppppppuVar5))) {
LAB_1455e6adf:
        _invalid_parameter_noinfo_noreturn
                  (pppppppuVar5,wVar8,wVar12,param_4,in_stack_fffffffffffffef8);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    func_0x000144d9c130();
  }
  FUN_1455ea040(uStack_40 ^ (ulonglong)auStackY_128);
  return;
}

