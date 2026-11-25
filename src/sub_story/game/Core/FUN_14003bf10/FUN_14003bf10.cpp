// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14003bf10  size: 1399 bytes
// Name:    FUN_14003bf10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_142bd23a0, FUN_1415c3020, FUN_1400497c0, FUN_14376cda0, FUN_1426774c0, FUN_145593480, FUN_1420562f0, FUN_145647140, FUN_140694620, FUN_140311360, FUN_145369610
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14003bf10(longlong param_1,uint param_2,uint *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  undefined8 auStack_100 [4];
  undefined8 uStack_e0;
  longlong alStack_d8 [3];
  longlong *plStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  byte bStack_a4;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  longlong *plStack_80;
  longlong *plStack_78;
  longlong lStack_70;
  undefined4 uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint *puStack_48;
  
  auStack_100[0] = 0x14003bf3c;
  FUN_1426774c0();
  uVar5 = 0xffffffff;
  if ((param_2 & 0x3fffff) != 0x3fffff) {
    uVar5 = param_2 & 0x3fffff;
  }
  auStack_100[0] = 0x14003bf5d;
  lVar8 = func_0x0001451c92e0(uVar5);
  if (lVar8 != 0) {
    auStack_100[0] = 0x14003bf81;
    func_0x000144d9edb0(*(undefined4 *)(param_1 + 8),&uStack_68,param_2);
    auStack_100[0] = 0x14003bf90;
    FUN_1400497c0(lVar8,&uStack_64);
    if (uStack_64 != 0) {
      auStack_100[0] = 0x14003bfae;
      FUN_140311360(&uStack_b8);
      uStack_64 = uStack_b8;
      uVar5 = *(uint *)(_DAT_14ab3ce88 + ((ulonglong)uStack_b8 % (ulonglong)_DAT_14ab3ce90) * 4);
      while (uVar5 != 0xffffffff) {
        puVar15 = (uint *)(_DAT_14ab3ce78 + (ulonglong)uVar5 * 0xc);
        if (*puVar15 == uStack_b8) {
          if ((puVar15[1] != 0xffffffff) && (uVar5 = puVar15[1] & 0x3fffff, uVar5 != 0x3fffff)) {
            auStack_100[0] = 0x14003c029;
            func_0x000144d9edb0(_DAT_14ab3ce00,&uStack_60,(_DAT_14ab3ce04 & 0x3f) << 0x16 | uVar5);
            uVar5 = param_3[1];
            if (uVar5 != *param_3) {
              param_3[1] = uVar5 + 1;
              param_3[(ulonglong)uVar5 + 2] = uStack_60;
            }
          }
          break;
        }
        uVar5 = puVar15[2];
      }
    }
    auStack_100[0] = 0x14003c057;
    lVar9 = func_0x000144e8f430(lVar8 + 0x10,_DAT_14999b414);
    if (lVar9 != 0) {
      if ((~*(uint *)(lVar9 + 0xc) & 0x3fffff) != 0) {
        auStack_100[0] = 0x14003c086;
        func_0x000144d9edb0(_DAT_14abcc4c0,&uStack_5c);
        uVar5 = param_3[1];
        if (uVar5 != *param_3) {
          param_3[1] = uVar5 + 1;
          param_3[(ulonglong)uVar5 + 2] = uStack_5c;
        }
      }
      if ((~*(uint *)(lVar9 + 0x10) & 0x3fffff) != 0) {
        auStack_100[0] = 0x14003c0c0;
        func_0x000144d9edb0(_DAT_14abcc4c0,&uStack_58);
        uVar5 = param_3[1];
        if (uVar5 != *param_3) {
          param_3[1] = uVar5 + 1;
          param_3[(ulonglong)uVar5 + 2] = uStack_58;
        }
      }
    }
    auStack_100[0] = 0x14003c0f4;
    lStack_70 = lVar8;
    puStack_48 = param_3;
    func_0x0001406933e0(alStack_d8 + 1,*(undefined8 *)(lVar8 + 0x60));
    auStack_100[0] = 0x14003c106;
    lVar8 = FUN_140694620(alStack_d8[1],0);
    if (lVar8 != 0) {
      puVar15 = *(uint **)(lVar8 + 0x10);
      uVar5 = *puVar15;
      if ((uVar5 & 7) == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = 0;
        uVar14 = *puStack_48;
        uVar16 = puStack_48[1];
        do {
          uStack_b8 = 0xfffffff;
          auStack_100[0] = 0x14003c154;
          cVar4 = FUN_142bd23a0(*(undefined8 *)((longlong)puVar15 + uVar12 + 4),&uStack_b8);
          uVar3 = uVar16;
          if ((cVar4 != '\0') && (uVar3 = uVar14, uVar16 != uVar14)) {
            puStack_48[1] = uVar16 + 1;
            puStack_48[(ulonglong)uVar16 + 2] = uStack_b8;
            uVar3 = uVar16 + 1;
          }
          uVar16 = uVar3;
          uVar12 = uVar12 + 8;
        } while ((uVar5 & 7) << 3 != uVar12);
        puVar15 = *(uint **)(lVar8 + 0x10);
        uVar5 = *puVar15;
        uVar12 = (ulonglong)(uVar5 & 7);
      }
      if (7 < uVar5) {
        uVar13 = 0;
        uVar14 = *puStack_48;
        uVar16 = puStack_48[1];
        do {
          uStack_b8 = 0xfffffff;
          auStack_100[0] = 0x14003c1d8;
          cVar4 = FUN_142bd23a0(*(undefined8 *)((longlong)puVar15 + uVar13 + uVar12 * 8 + 4),
                                &uStack_b8);
          uVar3 = uVar16;
          if ((cVar4 != '\0') && (uVar3 = uVar14, uVar16 != uVar14)) {
            puStack_48[1] = uVar16 + 1;
            puStack_48[(ulonglong)uVar16 + 2] = uStack_b8;
            uVar3 = uVar16 + 1;
          }
          uVar16 = uVar3;
          uVar13 = uVar13 + 8;
        } while ((uVar5 & 0xfffffff8) != uVar13);
      }
    }
    lVar8 = lStack_70;
    uVar5 = uStack_b8 >> 0x18;
    uStack_b8._0_2_ = (ushort)uStack_b8 & 0xff00;
    uStack_b8._0_3_ = (uint3)(ushort)uStack_b8;
    uStack_b8 = CONCAT13((char)uVar5,(uint3)uStack_b8);
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    auStack_100[0] = 0x14003c240;
    func_0x0001406933f0(&uStack_b0,lStack_70);
    if ((*(byte *)(lVar8 + 0x99) & 7) == 6) {
      bStack_a4 = *(byte *)(lVar8 + 0x294) >> 2 & 1;
      uStack_a8 = *(undefined4 *)(lVar8 + 0x264);
    }
    uStack_b8._0_2_ = CONCAT11(1,(undefined1)uStack_b8);
    uStack_e0 = 0x14003c279;
    lVar8 = FUN_145647140();
    lVar8 = -lVar8;
    plStack_c0 = (longlong *)((longlong)alStack_d8 + lVar8);
    alStack_d8[2] = 0x14;
    *(undefined8 *)((longlong)auStack_100 + lVar8) = 0x14003c29a;
    FUN_145369610();
    if ((ulonglong)alStack_d8[2] >> 0x20 != 0) {
      uVar5 = *puStack_48;
      uVar14 = puStack_48[1];
      plStack_78 = plStack_c0 + ((ulonglong)alStack_d8[2] >> 0x20);
      plVar10 = plStack_c0;
      do {
        puVar15 = *(uint **)(*plVar10 + 0x10);
        uVar16 = *puVar15;
        plStack_80 = plVar10;
        if (7 < uVar16) {
          uVar12 = 0;
          uVar3 = uVar14;
          do {
            uVar2 = *(undefined8 *)((longlong)puVar15 + uVar12 + (ulonglong)(uVar16 & 7) * 8 + 4);
            uStack_4c = 0xfffffff;
            *(undefined8 *)((longlong)auStack_100 + lVar8) = 0x14003c303;
            cVar4 = FUN_142bd23a0(uVar2,&uStack_4c);
            uVar6 = uVar3;
            if ((cVar4 != '\0') && (uVar6 = uVar5, uVar3 != uVar5)) {
              uVar14 = uVar3 + 1;
              puStack_48[1] = uVar14;
              puStack_48[(ulonglong)uVar3 + 2] = uStack_4c;
              uVar6 = uVar14;
            }
            uVar12 = uVar12 + 8;
            uVar3 = uVar6;
          } while ((uVar16 & 0xfffffff8) != uVar12);
        }
        plVar10 = plStack_80 + 1;
      } while (plVar10 != plStack_78);
    }
    puVar15 = puStack_48;
    lVar9 = lStack_70;
    iVar11 = 0;
    while( true ) {
      *(undefined8 *)((longlong)auStack_100 + lVar8) = 0x14003c36d;
      iVar7 = FUN_145593480(lVar9);
      if (iVar7 <= iVar11) break;
      *(undefined8 *)((longlong)auStack_100 + lVar8) = 0x14003c387;
      FUN_1415c3020(&uStack_b8,lVar9,iVar11);
      uVar5 = uStack_b8;
      if ((~uStack_b8 & 0x3fffff) != 0) {
        *(undefined8 *)((longlong)auStack_100 + lVar8) = 0x14003c3a7;
        cVar4 = func_0x000145523dd0(uVar5);
        if (cVar4 == '\0') {
          *(undefined8 *)((longlong)auStack_100 + lVar8) = 0x14003c3c4;
          func_0x000144d9edb0(_DAT_147bba9a0,&uStack_54,uVar5);
          uVar5 = puVar15[1];
          if (uVar5 != *puVar15) {
            puVar15[1] = uVar5 + 1;
            puVar15[(ulonglong)uVar5 + 2] = uStack_54;
          }
        }
      }
      iVar11 = iVar11 + 1;
    }
    if ((*(byte *)(lVar9 + 0x99) & 7) == 6) {
      *(undefined8 *)((longlong)auStack_100 + lVar8) = 0x14003c403;
      FUN_1420562f0(lVar9,&uStack_b8);
      if ((~uStack_b8 & 0x3fffff) != 0) {
        *(undefined8 *)((longlong)auStack_100 + lVar8) = 0x14003c429;
        func_0x000144d9edb0(_DAT_14abcc4c0,&uStack_50);
        uVar5 = puVar15[1];
        if (uVar5 != *puVar15) {
          puVar15[1] = uVar5 + 1;
          puVar15[(ulonglong)uVar5 + 2] = uStack_50;
        }
      }
      uVar1 = *(undefined4 *)(lVar9 + 0xe4);
      *(undefined8 *)((longlong)auStack_100 + lVar8) = 0x14003c459;
      FUN_14376cda0(uVar1,puVar15,uStack_68);
      uVar1 = *(undefined4 *)(lVar9 + 0xe8);
      *(undefined8 *)((longlong)auStack_100 + lVar8) = 0x14003c472;
      FUN_14376cda0(uVar1,puVar15,uStack_68);
    }
  }
  return;
}

