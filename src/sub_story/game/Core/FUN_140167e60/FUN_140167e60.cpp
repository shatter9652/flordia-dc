// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140167e60  size: 1584 bytes
// Name:    FUN_140167e60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1438d8310, FUN_140343680, FUN_144ec6720, FUN_1403375f0, FUN_140694620, FUN_140879e70, FUN_143be31a0, FUN_141276fa0, FUN_141fcdbd0, FUN_144ec6670, FUN_140694900, FUN_14068de80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_140167e60(longlong *param_1,longlong param_2,char param_3,longlong *param_4)

{
  undefined1 auVar1 [16];
  ushort uVar2;
  undefined4 uVar3;
  longlong lVar4;
  uint *puVar5;
  longlong *plVar6;
  char cVar7;
  short sVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  byte bVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  bool bVar19;
  undefined1 auVar20 [16];
  undefined4 uStack_25c;
  undefined4 *puStack_258;
  code *pcStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  longlong alStack_230 [10];
  undefined1 auStack_1e0 [16];
  code *pcStack_1d0;
  undefined1 auStack_1c8 [32];
  undefined1 auStack_1a8 [32];
  undefined1 auStack_188 [16];
  undefined1 auStack_178 [64];
  undefined1 uStack_138;
  undefined1 uStack_ea;
  undefined1 uStack_e9;
  undefined1 uStack_e8;
  byte bStack_e7;
  byte bStack_e6;
  longlong lStack_d8;
  longlong *aplStack_d0 [9];
  undefined *puStack_88;
  code *pcStack_80;
  code *pcStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint uStack_68;
  longlong *plStack_60;
  code *pcStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  lVar4 = param_1[0x2e];
  FUN_144ec6720();
  if (*(char *)((longlong)param_1 + 0x155) == '\x03') {
    FUN_143be31a0(param_1,*(undefined2 *)(param_1[0x2e] + 0x514));
  }
  if (*(ushort *)(param_2 + 0x1be) < 0x800) {
    FUN_1403375f0();
    *(undefined2 *)(param_2 + 0x1be) = 0xffff;
  }
  if ((*(longlong *)(param_2 + 0x170) != 0) &&
     (*(ushort *)(*(longlong *)(param_2 + 0x170) + 0x448) < 0x800)) {
    FUN_1403375f0();
    *(undefined2 *)(*(longlong *)(param_2 + 0x170) + 0x448) = 0xffff;
  }
  lVar12 = func_0x000144f8c2c0(param_2);
  if (lVar12 == 0) {
    uVar18 = (ulonglong)((*(uint *)(lVar4 + 0x4ac) & 0xffff) << 4);
    if (((*(short *)(*(longlong *)(_DAT_14abbf348 + 0x28) + 8 + uVar18) ==
          (short)(*(uint *)(lVar4 + 0x4ac) >> 0x10)) &&
        (param_2 = *(longlong *)(*(longlong *)(_DAT_14abbf348 + 0x28) + uVar18), param_2 != 0)) &&
       (lVar12 = func_0x000144f8c2c0(param_2), lVar12 != 0)) goto LAB_140167f04;
  }
  else {
LAB_140167f04:
    if ((0x1cU >> (*(uint *)(lVar12 + 0x30) & 0x1f) & 1) != 0) {
      auVar1 = *(undefined1 (*) [16])(param_1 + 0x10);
      uVar3 = *(undefined4 *)(param_2 + 0x10);
      auVar20 = vpunpckhwd_avx(auVar1,auVar1);
      auVar20 = vpsrad_avx(auVar20,0x10);
      auVar20 = vcvtdq2ps_avx(auVar20);
      auVar20 = vshufpd_avx(auVar20,auVar20,3);
      auStack_188._0_4_ = auVar20._0_4_ * _DAT_146159c90 + auVar1._0_4_;
      auStack_188._4_4_ = auVar20._4_4_ * _UNK_146159c94 + auVar1._4_4_;
      auStack_188._8_4_ = auVar20._8_4_ * _UNK_146159c98 + auVar1._8_4_;
      auStack_188._12_4_ = auVar20._12_4_ * _UNK_146159c9c + auVar1._12_4_;
      cVar7 = FUN_141fcdbd0();
      if (cVar7 != '\0') {
        if ((*(char *)(lVar12 + 0x30) == '\x02') ||
           (cVar7 = func_0x000144f60190(*(undefined4 *)(lVar12 + 0x9c)), cVar7 != '\0')) {
          bVar15 = 8;
        }
        else {
          bVar15 = 0;
        }
        FUN_14068de80(auStack_178,*(undefined4 *)(*(longlong *)(lVar12 + 0x20) + 0x5c));
        uStack_138 = 2;
        bStack_e7 = bStack_e7 & 0xf7 | bVar15;
        uVar13 = func_0x000144e3bfa0(lVar12);
        lVar14 = func_0x000144e8f430(uVar13,_DAT_14999edd4);
        if (lVar14 != 0) {
          uStack_ea = *(undefined1 *)(lVar14 + 8);
          uStack_e8 = *(undefined1 *)(lVar14 + 10);
          uStack_e9 = *(undefined1 *)(lVar14 + 9);
        }
        if (*(longlong *)(lVar12 + 0x20) == 0) {
          uVar13 = 0;
        }
        else {
          uVar13 = *(undefined8 *)(*(longlong *)(lVar12 + 0x20) + 0x60);
        }
        func_0x0001406933e0(&uStack_238,uVar13);
        lVar14 = FUN_140694620(uStack_238,0);
        if (lVar14 != 0) {
          puVar5 = *(uint **)(lVar14 + 0x10);
          uVar17 = *puVar5;
          if ((uVar17 & 7) != 0) {
            lVar14 = 0;
            do {
              FUN_140694900(&lStack_d8,*(undefined8 *)((longlong)puVar5 + lVar14 + 4));
              if (lStack_d8 == 0) {
LAB_1401680d2:
                bVar15 = 0;
              }
              else {
                uVar9 = FUN_140879e70(param_1,**(undefined4 **)(lStack_d8 + 0x1b0));
                cVar7 = func_0x000144e3f970(param_1[0x2e],uVar9);
                if (cVar7 != '\0') goto LAB_1401680d2;
                bStack_e6 = bStack_e6 | 2;
                bVar15 = 1;
              }
              if (aplStack_d0[0] != (longlong *)0x0) {
                (**(code **)(*aplStack_d0[0] + 0x10))();
              }
              bVar19 = (ulonglong)(uVar17 & 7) * 8 + -8 == lVar14;
              lVar14 = lVar14 + 8;
            } while (!(bool)(bVar15 | bVar19));
          }
        }
        if ((*(longlong *)(lVar12 + 0x20) != 0) &&
           (*(char *)(*(longlong *)(lVar12 + 0x20) + 0x9a) < '\0')) {
          bStack_e6 = bStack_e6 | 4;
          uVar18 = 0;
          lVar14 = param_1[0x35];
          uVar2 = *(ushort *)(lVar14 + 0x36);
          if (uVar2 == 0) {
LAB_14016825c:
            if ((ushort)uVar18 < uVar2) {
              uVar18 = uVar18 & 0xffff;
              if (*(longlong *)
                   (*(longlong *)(lVar14 + 0x28) + 0x38 + (ulonglong)(uint)((int)uVar18 * 0x50)) ==
                  0x10000000000) {
LAB_14016828a:
                bStack_e6 = bStack_e6 & 0xfb;
              }
              else {
                lVar16 = (ulonglong)(uint)((int)uVar18 * 0x50) + 0x88;
                for (; (uVar2 - 1 & 0xffff) != uVar18; uVar18 = uVar18 + 1) {
                  sVar8 = (**(code **)(*param_1 + 0x408))(param_1,(int)uVar18 + 1);
                  if ((sVar8 != -1) &&
                     (*(longlong *)(*(longlong *)(lVar14 + 0x28) + lVar16) == 0x10000000000))
                  goto LAB_14016828a;
                  lVar16 = lVar16 + 0x50;
                }
              }
            }
          }
          else {
            do {
              sVar8 = (**(code **)(*param_1 + 0x408))(param_1,uVar18);
              if (sVar8 != -1) goto LAB_14016825c;
              uVar17 = (int)uVar18 + 1;
              uVar18 = (ulonglong)uVar17;
            } while (uVar2 != (ushort)uVar17);
          }
        }
        if (param_3 != '\0') {
          if (*param_4 == 0) {
            if (param_4[1] == 0) {
              auStack_1e0._0_12_ = ZEXT812(0);
              auStack_1e0._12_4_ = 0;
              puStack_88 = (undefined *)0x0;
              pcStack_80 = (code *)0x0;
              pcStack_1d0 = (code *)0x0;
            }
            else {
              pcStack_80 = (code *)&UNK_145220e00;
              puStack_88 = &UNK_1406b9e30;
              auStack_1e0._8_8_ = &UNK_145220e00;
              auStack_1e0._0_8_ = &UNK_1406b9e30;
              pcStack_1d0 = (code *)0x0;
              alStack_230[0] = param_4[1];
            }
          }
          else {
            (*(code *)param_4[2])(alStack_230);
            puStack_88 = *(undefined **)*(undefined1 (*) [16])(param_4 + 1);
            pcStack_80 = (code *)param_4[2];
            auStack_1e0 = *(undefined1 (*) [16])(param_4 + 1);
            pcStack_1d0 = (code *)param_4[3];
          }
          uVar9 = (undefined4)param_1[2];
          bVar15 = *(byte *)(lVar12 + 0x30);
          plVar6 = *(longlong **)((ulonglong)bVar15 * 8 + 0x14abbe7c0);
          uVar10 = (uint)((ulonglong)(lVar12 - *plVar6) / (ulonglong)*(uint *)(plVar6 + 1)) &
                   0x1ffff;
          uVar17 = *(uint *)(plVar6[5] + (ulonglong)uVar10 * 4);
          puStack_258 = &uStack_25c;
          auStack_1c8 = ZEXT1232(ZEXT812(0));
          pcStack_250 = FUN_1438d8100;
          puStack_248 = &UNK_1413b41f0;
          puStack_240 = &SUB_140004380;
          uStack_25c = uVar9;
          auStack_1a8 = auStack_1c8;
          if (pcStack_80 != (code *)0x0) {
            (*pcStack_80)(aplStack_d0,alStack_230);
            puStack_88 = (undefined *)auStack_1e0._0_8_;
          }
          plStack_60 = &lStack_d8;
          pcStack_58 = FUN_1438d8190;
          pcStack_50 = FUN_1438d82b0;
          puStack_48 = &UNK_143186e30;
          pcStack_78 = pcStack_1d0;
          uStack_70 = uVar9;
          uStack_6c = uVar3;
          uStack_68 = (bVar15 & 0x1f) << 0x11 | uVar10 | (uVar17 & 0x7fe0000) << 5;
          iVar11 = FUN_141276fa0(auStack_178,&plStack_60,&puStack_258,auStack_1c8,auStack_1a8);
          if (pcStack_78 != (code *)0x0) {
            (*pcStack_78)(aplStack_d0);
          }
          if (pcStack_1d0 != (code *)0x0) {
            (*pcStack_1d0)(alStack_230);
          }
          FUN_144ec6670();
          if (iVar11 != -1) {
            return iVar11;
          }
          goto LAB_1401681a9;
        }
        lVar14 = FUN_140343680(auStack_178);
        if (lVar14 != 0) {
          FUN_1438d8310(lVar14,param_1,lVar12);
          if (*param_4 == 0) {
            (*(code *)param_4[1])();
          }
          else {
            (*(code *)param_4[1])();
          }
          FUN_144ec6670();
          return -1;
        }
      }
    }
  }
  FUN_144ec6670();
LAB_1401681a9:
  if ((*(byte *)(lVar4 + 0x518) & 1) == 0) {
    *(byte *)(lVar4 + 0x518) = *(byte *)(lVar4 + 0x518) | 1;
    func_0x000145022920(lVar4,1);
    _DAT_149251cf4 = 1;
  }
  return -1;
}

