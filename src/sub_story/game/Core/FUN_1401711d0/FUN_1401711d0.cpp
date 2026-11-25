// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401711d0  size: 110 bytes
// Name:    FUN_1401711d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401711d0(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  uint uVar20;
  longlong *plVar21;
  undefined8 *puVar23;
  uint uVar24;
  ulonglong uVar25;
  longlong *plVar26;
  undefined4 *puVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  undefined4 uVar33;
  undefined1 extraout_var [56];
  undefined8 unaff_XMM6_Qa;
  undefined1 auVar34 [16];
  undefined8 unaff_XMM6_Qb;
  undefined1 auVar35 [64];
  undefined8 uStack_20;
  ulonglong uVar22;
  
  iVar1 = *(int *)(param_2 + 8);
  if (iVar1 == 0x10005) {
    if ((code *)param_1[0xf] != (code *)0x0) {
      plVar3 = *(longlong **)(*(longlong *)(param_1[1] + 0x28) + 0x10);
      auVar35._0_8_ = (*(code *)param_1[0xf])((longlong)param_1 + 0x37U & 0xfffffffffffffff0);
      uVar33 = (undefined4)auVar35._0_8_;
      auVar35._8_56_ = extraout_var;
      uVar24 = *(uint *)(param_1 + 0x12);
      uVar2 = *(uint *)((longlong)plVar3 + 0x14);
      uVar32 = (ulonglong)uVar24 | 0x400000000;
      if ((uVar2 & 0x3fff8000) == 0) {
        auVar35 = ZEXT1664(auVar35._0_16_);
        *(uint *)((longlong)plVar3 + 0x14) = uVar2 | 0x20000;
        puVar27 = (undefined4 *)FUN_144dd5cf0(0x80,0x10);
        FUN_144dd5ae0(*plVar3);
        *plVar3 = (longlong)puVar27;
        *(uint *)((longlong)plVar3 + 0x14) = (*(uint *)((longlong)plVar3 + 0x14) & 0xffff8000) + 1;
        if (puVar27 != (undefined4 *)0x0) {
          *(undefined8 *)(puVar27 + 4) = 0;
        }
        *(ulonglong *)(puVar27 + 6) = uVar32;
        *(byte *)(plVar3 + 1) = *(byte *)(plVar3 + 1) | 0x10;
        uVar33 = auVar35._0_4_;
        *(uint *)(plVar3 + 2) = *(uint *)(plVar3 + 2) | 1 << (uVar24 & 0x1f);
      }
      else {
        uVar20 = uVar2 & 0x7fff;
        uVar22 = (ulonglong)uVar20;
        if ((plVar3[1] & 0x10U) == 0 || uVar20 == 0) {
          uVar30 = *(uint *)(plVar3 + 2);
          uVar29 = 1 << (uVar24 & 0x1f);
        }
        else {
          uVar30 = *(uint *)(plVar3 + 2);
          uVar29 = 1 << (uVar24 & 0x1f);
          if ((uVar30 >> (uVar24 & 0x1f) & 1) != 0) {
            puVar27 = (undefined4 *)*plVar3;
            do {
              uVar25 = uVar22 >> 1;
              uVar31 = ~uVar25 + uVar22;
              uVar22 = uVar25;
              if (*(ulonglong *)(puVar27 + uVar25 * 8 + 8 + -2) < uVar32) {
                puVar27 = puVar27 + uVar25 * 8 + 8;
                uVar22 = uVar31;
              }
            } while (0 < (longlong)uVar22);
            if ((puVar27 != (undefined4 *)(*plVar3 + (ulonglong)(uVar20 << 5))) &&
               (*(ulonglong *)(puVar27 + 6) == uVar32)) goto code_r0x000144f9e7b7;
          }
        }
        plVar3[1] = plVar3[1] | 0x10;
        *(uint *)(plVar3 + 2) = uVar29 | uVar30;
        uVar24 = uVar2 & 0x3fffffff | 0x40000000;
        uVar28 = uVar2 >> 0xf & 0x7fff;
        if (uVar20 < uVar28) {
          puVar23 = (undefined8 *)*plVar3;
        }
        else {
          auVar35 = ZEXT1664(auVar35._0_16_);
          *(uint *)((longlong)plVar3 + 0x14) =
               uVar2 & 0x7fff | 0x40000000 | uVar2 + 0x20000 & 0x3fff8000;
          puVar23 = (undefined8 *)
                    FUN_144dd5cf0(uVar2 + 0x20000 >> 10 & 0xfffe0,0x10,uVar28,uVar29 | uVar30,
                                  unaff_XMM6_Qa,unaff_XMM6_Qb);
          auVar34 = auVar35._0_16_;
          puVar4 = (undefined8 *)*plVar3;
          if ((*(uint *)((longlong)plVar3 + 0x14) & 0x7fff) == 4) {
            uVar5 = *puVar4;
            uVar6 = puVar4[1];
            uVar7 = puVar4[2];
            uVar8 = puVar4[3];
            uVar9 = puVar4[4];
            uVar10 = puVar4[5];
            uVar11 = puVar4[6];
            uVar12 = puVar4[7];
            uVar13 = puVar4[8];
            uVar14 = puVar4[9];
            uVar15 = puVar4[10];
            uVar16 = puVar4[0xb];
            uVar17 = puVar4[0xd];
            uVar18 = puVar4[0xe];
            uVar19 = puVar4[0xf];
            puVar23[0xc] = puVar4[0xc];
            puVar23[0xd] = uVar17;
            puVar23[0xe] = uVar18;
            puVar23[0xf] = uVar19;
            puVar23[8] = uVar13;
            puVar23[9] = uVar14;
            puVar23[10] = uVar15;
            puVar23[0xb] = uVar16;
            puVar23[4] = uVar9;
            puVar23[5] = uVar10;
            puVar23[6] = uVar11;
            puVar23[7] = uVar12;
            *puVar23 = uVar5;
            puVar23[1] = uVar6;
            puVar23[2] = uVar7;
            puVar23[3] = uVar8;
          }
          else {
            func_0x000145f40560(puVar23);
            auVar34 = auVar35._0_16_;
          }
          auVar35 = ZEXT1664(auVar34);
          FUN_144dd5ae0(*plVar3);
          *plVar3 = (longlong)puVar23;
          uVar33 = auVar35._0_4_;
          uVar24 = *(uint *)((longlong)plVar3 + 0x14);
        }
        puVar27 = (undefined4 *)((ulonglong)((uVar24 & 0x7fff) << 5) + (longlong)puVar23);
        *(uint *)((longlong)plVar3 + 0x14) = uVar24 & 0xffff8000 | uVar24 + 1 & 0x7fff;
        if (puVar23 != (undefined8 *)0x0) {
          *(undefined8 *)(puVar27 + 4) = 0;
        }
        *(ulonglong *)(puVar27 + 6) = uVar32;
      }
code_r0x000144f9e7b7:
      *puVar27 = uVar33;
      uVar24 = *(uint *)((longlong)plVar3 + 0x14);
      if (0x3fffffff < uVar24) {
        if ((uVar24 & 0x7ffe) != 0) {
          FUN_144e4a420(*plVar3,(ulonglong)((uVar24 & 0x7fff) << 5) + *plVar3);
          uVar24 = *(uint *)((longlong)plVar3 + 0x14);
        }
        *(uint *)((longlong)plVar3 + 0x14) = uVar24 & 0x3fffffff;
      }
      return;
    }
  }
  else if ((iVar1 == 0x1000000) || (iVar1 == 0x1000002)) {
    plVar3 = (longlong *)param_1[1];
    if (plVar3 == (longlong *)0x0) {
      return;
    }
    if (((longlong *)param_1[1] == plVar3) &&
       (plVar26 = (longlong *)plVar3[6], plVar26 != (longlong *)0x0)) {
      if (plVar26 == param_1) {
        plVar21 = plVar3 + 6;
      }
      else {
        do {
          plVar21 = plVar26;
          plVar26 = (longlong *)plVar21[2];
          if (plVar26 == (longlong *)0x0) {
            return;
          }
        } while (plVar26 != param_1);
        plVar21 = plVar21 + 2;
      }
      *plVar21 = plVar26[2];
      plVar26[2] = 0;
      if ((*(byte *)((longlong)plVar3 + 0x16) & 4) != 0) {
        uStack_20 = 0;
        if (*(code **)(*param_1 + 0x10) == (code *)&UNK_144ea3280) {
          func_0x000144ea3280(param_1,&uStack_20);
        }
        else {
          (**(code **)(*param_1 + 0x10))(param_1,&uStack_20);
        }
      }
      plVar26[1] = 0;
      LOCK();
      plVar21 = plVar26 + 3;
      *(int *)plVar21 = (int)*plVar21 + -1;
      UNLOCK();
      if ((int)*plVar21 == 0) {
        (**(code **)*plVar26)(plVar26,1);
      }
      if (*(code **)(*plVar3 + 0x58) == FUN_144ea32a0) {
        FUN_144ea32a0(plVar3);
      }
      else {
        (**(code **)(*plVar3 + 0x58))(plVar3);
      }
    }
    return;
  }
  return;
}

