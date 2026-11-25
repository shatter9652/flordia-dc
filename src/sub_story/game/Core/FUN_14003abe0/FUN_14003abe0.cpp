// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14003abe0  size: 114 bytes
// Name:    FUN_14003abe0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e4ba50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x000143daa85e: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00014003ad9b: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00014003ae22: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00014003af8f: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00014003ae27) */
/* WARNING: Removing unreachable block (ram,0x00014003ada0) */
/* WARNING: Removing unreachable block (ram,0x00014003af94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14003abe0(void)

{
  int iVar1;
  code *pcVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined8 uVar16;
  undefined8 unaff_RBX;
  undefined1 uVar17;
  undefined8 unaff_RBP;
  ulonglong unaff_RSI;
  undefined4 *unaff_RDI;
  uint uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  bool bVar21;
  bool bVar22;
  byte abStack_e0 [96];
  undefined8 auStack_80 [5];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 *puStack_48;
  undefined1 auStack_40 [16];
  undefined *puStack_30;
  undefined4 auStack_28 [2];
  undefined4 uStack_20;
  uint uStack_18;
  
  puStack_30 = (undefined *)0x14003abf0;
  FUN_144e4ba50(0x149891e8c);
  uVar9 = _DAT_149891d6c;
  switch(_DAT_149891e78) {
  case 1:
  case 4:
    goto code_r0x00014003ac49;
  case 2:
    if (_DAT_149891e7c == 1) {
      return;
    }
    if (DAT_149891d78 == '\0') {
      uVar9 = 5;
    }
    else {
      auStack_80[0] = 0x14003aec7;
      FUN_1451c4240(&DAT_149891d50);
      unaff_RDI = auStack_28;
      auStack_80[0] = 0x14003aed7;
      func_0x0001455373d0(unaff_RDI,&DAT_149891d50);
      auStack_40._0_12_ = ZEXT812(0);
      auStack_40._12_4_ = 0;
      puStack_30 = &DAT_149891e84;
      uStack_50 = CONCAT62(uStack_50._2_6_,1);
      uStack_58 = 0;
      auStack_80[0] = 0x14003af1c;
      puStack_48 = unaff_RDI;
      cVar6 = FUN_143ebd8e0(0x26010002,&DAT_149891d78,0,0xff);
      if (cVar6 != '\0') {
        auStack_80[0] = 0x14003af2a;
        FUN_143daa820(3);
        return;
      }
      puStack_48 = (undefined4 *)&DAT_149891d78;
      unaff_RSI = 0x146cb4b88;
      uStack_50 = CONCAT44(uStack_50._4_4_,8);
      uStack_58 = CONCAT44(uStack_58._4_4_,0x894b3772);
      auStack_80[0] = 0x14003af71;
      FUN_1402675a0(0x146cb4b88,4);
      auStack_80[0] = 0x14003af8a;
      FUN_1457d1ec0(0x146cb4b88,5,0xd25,0xf8e13e2a);
      uVar9 = 6;
      register0x00000020 = (BADSPACEBASE *)auStack_80;
      auStack_80[0] = 0x14003af94;
    }
    break;
  case 3:
    if (_DAT_149891e84 == 1) {
      return;
    }
    if (_DAT_149891e84 == 3) {
      unaff_RSI = (ulonglong)_DAT_149891d6c;
      uStack_50 = 0x14003add3;
      unaff_RDI = (undefined4 *)func_0x000140c01760(_DAT_149891d50,unaff_RSI);
      if (DAT_149891f0d == '\x01') {
        if (uVar9 < 0x11) {
          uStack_50 = 0x14003ae91;
          FUN_1457d1ec0(0x146cb4b88,1,0xd6a,0x9fb6f6ef);
        }
        else {
          uStack_50 = 0x14003adf2;
          cVar6 = FUN_1456cdd20(unaff_RDI,unaff_RSI);
          if (cVar6 != '\0') {
            unaff_RDI = unaff_RDI + 4;
            unaff_RSI = (ulonglong)(uVar9 - 0x10);
            goto LAB_14003ae33;
          }
        }
        auStack_28[0] = 0x2219c6a2;
      }
      else {
LAB_14003ae33:
        uStack_50 = 0x14003ae3d;
        cVar6 = FUN_145a8b140(unaff_RDI,unaff_RSI);
        if (cVar6 != '\0') {
          uStack_50 = 0x14003ae4b;
          FUN_143daa820(5);
          if ((bRam0000000149891d75 & 2) == 0) {
            if (_DAT_149891d50 != 0) {
              puStack_30 = &UNK_1451c428a;
              func_0x0001403014a0(uRam0000000149891d60,uRam0000000149891d74);
            }
            _DAT_149891d50 = 0;
            uRam0000000149891d68 = 0;
          }
          _DAT_149891d6c = 0;
          if (lRam0000000149891d58 != -1) {
            puStack_30 = &UNK_1451c42aa;
            (**(code **)(lRam00000001478f6888 + 0x88))(0x1478f6888);
            lRam0000000149891d58 = -1;
          }
          return;
        }
        auStack_28[0] = 0x19cc7982;
      }
      uStack_20 = 0;
      uStack_50 = 0x14003ae1d;
      FUN_1402675a0(0x146cb4b88,1);
      uVar9 = 7;
      register0x00000020 = (BADSPACEBASE *)&uStack_50;
      uStack_50 = 0x14003ae27;
    }
    else {
      uVar9 = 6;
      register0x00000020 = (BADSPACEBASE *)&uStack_50;
      uStack_50 = 0x14003ada0;
    }
    break;
  default:
    return;
  case 6:
    puStack_30 = (undefined *)0x14003ac30;
    cVar6 = func_0x000140005970(CONCAT71(0x14675b0,uRam0000000149891eb0));
    if (cVar6 != '\0') {
      return;
    }
    puStack_30 = (undefined *)0x14003ac3f;
    cVar6 = func_0x0001455caa00(uRam0000000149891ea8);
    if (cVar6 == '\0') {
      return;
    }
    iRam0000000149891eb4 = iRam0000000149891eb4 + 1;
code_r0x00014003ac49:
    uStack_50 = 0x14003ac9a;
    uVar9 = func_0x000145268620();
    if (3 < uVar9) {
      return;
    }
    uStack_50 = 0x14003aca8;
    lVar11 = FUN_1451181c0(uVar9);
    uStack_50 = 0x14003acb3;
    cVar6 = func_0x0001450903f0(*(undefined4 *)(lVar11 + 0x280));
    if (cVar6 == '\0') {
      return;
    }
    uStack_50 = 0x14003acbe;
    cVar6 = FUN_144fb0ea0(uVar9);
    if (cVar6 == '\0') {
      return;
    }
    uStack_50 = 0x14003accd;
    FUN_145efd910();
    if ((_DAT_149891e78 < 7) && ((0x52U >> (_DAT_149891e78 & 0x1f) & 1) != 0)) {
      uStack_50 = 0x14003ace9;
      cVar6 = FUN_143dc3260(uVar9);
      if (cVar6 != '\0') {
        uVar9 = 2;
        break;
      }
      uStack_20 = 0;
      auStack_28[0] = 0x85090f04;
      uStack_50 = 0x14003ad23;
      FUN_1402675a0(0x146cb4b88,4);
    }
    else {
      uStack_18 = _DAT_149891e78;
      uStack_20 = 2;
      auStack_28[0] = 0x8cf636a1;
      uStack_50 = 0x14003ad60;
      FUN_1402675a0(0x146cb4b88,4);
      uStack_50 = 0x14003ad79;
      FUN_1457d1ec0(0x146cb4b88,1,0xd9d,0x6fdd6dd);
    }
    uVar9 = 7;
  }
  *(undefined8 *)((longlong)register0x00000020 + -8) = unaff_R15;
  *(undefined8 *)((longlong)register0x00000020 + -0x10) = unaff_R14;
  *(undefined8 *)((longlong)register0x00000020 + -0x18) = unaff_R13;
  *(undefined8 *)((longlong)register0x00000020 + -0x20) = unaff_R12;
  *(ulonglong *)((longlong)register0x00000020 + -0x28) = unaff_RSI;
  *(undefined4 **)((longlong)register0x00000020 + -0x30) = unaff_RDI;
  *(undefined8 *)((longlong)register0x00000020 + -0x38) = unaff_RBP;
  *(undefined8 *)((longlong)register0x00000020 + -0x40) = unaff_RBX;
  if (uVar9 == 3) {
    uRam0000000149891cc0 = 1;
    uRam0000000149891cc1 = 1;
    _DAT_149891e78 = uVar9;
    return;
  }
  _DAT_149891e78 = uVar9;
  if (uVar9 == 5) {
    *(undefined **)((longlong)register0x00000020 + -0xd0) = &UNK_143daa897;
    FUN_145915070();
    iRam0000000149891eb4 = 0;
    *(undefined **)((longlong)register0x00000020 + -0x58) = &UNK_14654d7d0;
    if (cRam0000000149891c28 == '\x02') {
      uVar14 = 0x146dd5b58;
      uVar16 = 5;
      uVar19 = 0x16a;
      uVar20 = 0xc95574d4;
code_r0x000143daab08:
      *(undefined **)((longlong)register0x00000020 + -0xd0) = &UNK_143daab0d;
      FUN_1457d1ec0(uVar14,uVar16,uVar19,uVar20);
    }
    else {
      *(undefined **)((longlong)register0x00000020 + -0xd0) = &UNK_143daa8da;
      bVar7 = FUN_14512a480(0);
      *(undefined **)((longlong)register0x00000020 + -0xd0) = &UNK_143daa8e3;
      bVar8 = FUN_14512a480(1);
      bVar21 = lRam0000000149891c40 == 0;
      bVar22 = lRam0000000149891c60 != 0;
      if ((!bVar21 & bVar7) == 1) {
        *(undefined **)((longlong)register0x00000020 + -0xd0) = &UNK_143daa91a;
        FUN_140004b40(0x149891c00);
        *(longlong **)((longlong)register0x00000020 + -0x80) = plRam0000000149891c30;
        *(undefined8 *)((longlong)register0x00000020 + -0x78) = 0x149891c30;
        *(undefined8 *)((longlong)register0x00000020 + -0x70) = 0;
        *(undefined8 *)((longlong)register0x00000020 + -0x68) = 0x149891c30;
        *(undefined1 *)((longlong)register0x00000020 + -0x60) = 0xff;
        *(undefined8 *)((longlong)register0x00000020 + -0x88) = puRam0000000149891c48;
        if (plRam0000000149891c30 != (longlong *)0x0) {
          plVar12 = plRam0000000149891c30;
          puRam0000000149891c48 = (undefined8 *)((longlong)register0x00000020 + -0x88);
          do {
            lVar11 = *plVar12;
            pcVar2 = (code *)plVar12[1];
            if (lVar11 == 0) {
              *(undefined **)((longlong)register0x00000020 + -0xd0) = &UNK_143daa99a;
              (*pcVar2)((undefined1 *)((longlong)register0x00000020 + -0x58));
            }
            else {
              *(undefined **)((longlong)register0x00000020 + -0xd0) = &UNK_143daa971;
              (*pcVar2)(lVar11,(undefined1 *)((longlong)register0x00000020 + -0x58));
            }
            if ((*(byte *)((longlong)register0x00000020 + -0x60) & 1) == 0) {
              *(byte *)((longlong)register0x00000020 + -0x60) =
                   *(byte *)((longlong)register0x00000020 + -0x60) | 1;
              plVar12 = *(longlong **)((longlong)register0x00000020 + -0x80);
            }
            else {
              if (*(longlong *)((longlong)register0x00000020 + -0x80) == 0) {
                uVar3 = *(ulonglong *)((longlong)register0x00000020 + -0x78);
                if ((uVar3 & 1) == 0 || uVar3 < 2) {
                  plVar12 = (longlong *)0x0;
                  goto code_r0x000143daa98c;
                }
                *(undefined8 **)((longlong)register0x00000020 + -0x78) =
                     (undefined8 *)(uVar3 & 0xfffffffffffffffe);
                plVar12 = *(longlong **)(uVar3 & 0xfffffffffffffffe);
              }
              else {
                plVar12 = *(longlong **)(*(longlong *)((longlong)register0x00000020 + -0x80) + 0x10)
                ;
              }
              *(longlong **)((longlong)register0x00000020 + -0x80) = plVar12;
            }
code_r0x000143daa98c:
          } while (plVar12 != *(longlong **)((longlong)register0x00000020 + -0x70));
          puRam0000000149891c48 = (undefined8 *)*puRam0000000149891c48;
        }
        *(undefined **)((longlong)register0x00000020 + -0xd0) = &UNK_143daa9ed;
        func_0x000144d9dab0(0x149891c00);
      }
      if ((lRam0000000149891c60 != 0 & bVar8) == 1) {
        *(undefined **)((longlong)register0x00000020 + -0xd0) = &UNK_143daaa10;
        FUN_140004b40(0x149891c00);
        *(longlong **)((longlong)register0x00000020 + -0x80) = plRam0000000149891c50;
        *(undefined8 *)((longlong)register0x00000020 + -0x78) = 0x149891c50;
        *(undefined8 *)((longlong)register0x00000020 + -0x70) = 0;
        *(undefined8 *)((longlong)register0x00000020 + -0x68) = 0x149891c50;
        *(undefined1 *)((longlong)register0x00000020 + -0x60) = 0xff;
        *(undefined8 *)((longlong)register0x00000020 + -0x88) = puRam0000000149891c68;
        if (plRam0000000149891c50 != (longlong *)0x0) {
          plVar12 = plRam0000000149891c50;
          puRam0000000149891c68 = (undefined8 *)((longlong)register0x00000020 + -0x88);
          do {
            lVar11 = *plVar12;
            pcVar2 = (code *)plVar12[1];
            if (lVar11 == 0) {
              *(undefined **)((longlong)register0x00000020 + -0xd0) = &UNK_143daaa90;
              (*pcVar2)((undefined1 *)((longlong)register0x00000020 + -0x58));
            }
            else {
              *(undefined **)((longlong)register0x00000020 + -0xd0) = &UNK_143daaa67;
              (*pcVar2)(lVar11,(undefined1 *)((longlong)register0x00000020 + -0x58));
            }
            if ((*(byte *)((longlong)register0x00000020 + -0x60) & 1) == 0) {
              *(byte *)((longlong)register0x00000020 + -0x60) =
                   *(byte *)((longlong)register0x00000020 + -0x60) | 1;
              plVar12 = *(longlong **)((longlong)register0x00000020 + -0x80);
            }
            else {
              if (*(longlong *)((longlong)register0x00000020 + -0x80) == 0) {
                uVar3 = *(ulonglong *)((longlong)register0x00000020 + -0x78);
                if ((uVar3 & 1) == 0 || uVar3 < 2) {
                  plVar12 = (longlong *)0x0;
                  goto code_r0x000143daaa82;
                }
                *(undefined8 **)((longlong)register0x00000020 + -0x78) =
                     (undefined8 *)(uVar3 & 0xfffffffffffffffe);
                plVar12 = *(longlong **)(uVar3 & 0xfffffffffffffffe);
              }
              else {
                plVar12 = *(longlong **)(*(longlong *)((longlong)register0x00000020 + -0x80) + 0x10)
                ;
              }
              *(longlong **)((longlong)register0x00000020 + -0x80) = plVar12;
            }
code_r0x000143daaa82:
          } while (plVar12 != *(longlong **)((longlong)register0x00000020 + -0x70));
          puRam0000000149891c68 = (undefined8 *)*puRam0000000149891c68;
        }
        *(undefined **)((longlong)register0x00000020 + -0xd0) = &UNK_143daaae3;
        func_0x000144d9dab0(0x149891c00);
      }
      if (iRam0000000149891c2c == -1) {
        uVar14 = 0x146cb4828;
        uVar16 = 1;
        uVar19 = 400;
        uVar20 = 0xeb46f5a0;
        goto code_r0x000143daab08;
      }
      if (bVar7 != 0 || bVar21) {
code_r0x000143dab0cf:
        if (bVar8 == 0 && bVar22) {
          if (lRam0000000149891c20 == 0) {
code_r0x000143dab0f9:
            *(undefined **)((longlong)register0x00000020 + -0xd0) = &UNK_143dab103;
            puVar13 = (undefined8 *)func_0x000144f97130(8);
            if (puVar13 == (undefined8 *)0x0) {
              *(undefined8 *)((longlong)register0x00000020 + -0x90) = 8;
              *(undefined4 *)((longlong)register0x00000020 + -0xa0) = 0x53;
              *(undefined4 *)((longlong)register0x00000020 + -0xa8) = 0xeb968b3f;
              goto code_r0x000143dab139;
            }
            uVar17 = 0;
          }
          else {
            *(undefined **)((longlong)register0x00000020 + -0xd0) = &UNK_143dab0f0;
            puVar13 = (undefined8 *)func_0x000140104070(lRam0000000149891c20,8);
            if (puVar13 == (undefined8 *)0x0) goto code_r0x000143dab0f9;
            uVar17 = 1;
          }
          *puVar13 = &UNK_14654d7d0;
          *(undefined **)((longlong)register0x00000020 + -0xd0) = &UNK_143dab1cc;
          FUN_140004b40(0x149a434f0);
          iVar1 = iRam0000000149891c2c;
          if (_DAT_149a4353c == _DAT_149a43538) {
            uVar18 = 1;
            if (1 < _DAT_149a4353c) {
              uVar18 = _DAT_149a4353c >> 1;
            }
            *(undefined **)((longlong)register0x00000020 + -0xd0) = &UNK_143dab279;
            FUN_145895b30(&DAT_149a43538,uVar18 + _DAT_149a4353c);
          }
          lVar11 = _DAT_149a43548;
          lVar15 = (ulonglong)_DAT_149a43544 * 0x10;
          *(undefined8 **)(_DAT_149a43548 + lVar15) = puVar13;
          *(int *)(lVar11 + 8 + lVar15) = iVar1;
          *(undefined1 *)(lVar11 + 0xc + lVar15) = uVar17;
          uVar18 = 0;
          if (_DAT_149a43538 <= _DAT_149a43544 + 1) {
            uVar18 = _DAT_149a43538;
          }
          _DAT_149a43544 = (_DAT_149a43544 + 1) - uVar18;
          _DAT_149a4353c = _DAT_149a4353c + 1;
          *(undefined **)((longlong)register0x00000020 + -0xd0) = &UNK_143dab235;
          func_0x000144d9dab0(0x149a434f0);
        }
      }
      else {
        if (lRam0000000149891c20 != 0) {
          *(undefined **)((longlong)register0x00000020 + -0xd0) = &UNK_143daac84;
          puVar13 = (undefined8 *)func_0x000140104070(lRam0000000149891c20,8);
          if (puVar13 == (undefined8 *)0x0) goto code_r0x000143daac8d;
          uVar17 = 1;
code_r0x000143dab050:
          *puVar13 = &UNK_14654d7d0;
          *(undefined **)((longlong)register0x00000020 + -0xd0) = &UNK_143dab05f;
          FUN_140004b40(0x149a434f0);
          iVar1 = iRam0000000149891c2c;
          if (_DAT_149a43524 == _DAT_149a43520) {
            uVar18 = 1;
            if (1 < _DAT_149a43524) {
              uVar18 = _DAT_149a43524 >> 1;
            }
            *(undefined **)((longlong)register0x00000020 + -0xd0) = &UNK_143dab257;
            FUN_145895b30(&DAT_149a43520,uVar18 + _DAT_149a43524);
          }
          lVar11 = _DAT_149a43530;
          lVar15 = (ulonglong)_DAT_149a4352c * 0x10;
          *(undefined8 **)(_DAT_149a43530 + lVar15) = puVar13;
          *(int *)(lVar11 + 8 + lVar15) = iVar1;
          *(undefined1 *)(lVar11 + 0xc + lVar15) = uVar17;
          uVar18 = 0;
          if (_DAT_149a43520 <= _DAT_149a4352c + 1) {
            uVar18 = _DAT_149a43520;
          }
          _DAT_149a4352c = (_DAT_149a4352c + 1) - uVar18;
          _DAT_149a43524 = _DAT_149a43524 + 1;
          *(undefined **)((longlong)register0x00000020 + -0xd0) = &UNK_143dab0cf;
          func_0x000144d9dab0(0x149a434f0);
          goto code_r0x000143dab0cf;
        }
code_r0x000143daac8d:
        *(undefined **)((longlong)register0x00000020 + -0xd0) = &UNK_143daac97;
        puVar13 = (undefined8 *)func_0x000144f97130(8);
        if (puVar13 != (undefined8 *)0x0) {
          uVar17 = 0;
          goto code_r0x000143dab050;
        }
        *(undefined8 *)((longlong)register0x00000020 + -0x90) = 8;
        *(undefined4 *)((longlong)register0x00000020 + -0xa0) = 0x53;
        *(undefined4 *)((longlong)register0x00000020 + -0xa8) = 0xc52ca8ea;
code_r0x000143dab139:
        *(undefined4 *)((longlong)register0x00000020 + -0x98) = uRam00000001498915ac;
        *(undefined **)((longlong)register0x00000020 + -0xd0) = &UNK_143dab142;
        FUN_1402675a0(0x146dd5b58,4);
      }
    }
    *(undefined **)((longlong)register0x00000020 + -0xd0) = &UNK_143daab1d;
    func_0x000140555550();
    *(undefined **)((longlong)register0x00000020 + -0xd0) = &UNK_143daab22;
    iVar10 = func_0x0001456acf80();
    iVar1 = *(int *)((longlong)register0x00000020 + -0x44);
    if ((iRam0000000149891f04 != iVar1) ||
       (iVar4 = iRam0000000149891f04, iVar5 = iRam0000000149891f08, iRam0000000149891f08 != iVar10))
    {
      *(undefined **)((longlong)register0x00000020 + -0xd0) = &UNK_143daab49;
      func_0x000143dab280((undefined1 *)((longlong)register0x00000020 + -0x58),iVar1);
      iVar4 = iVar1;
      iVar5 = iVar10;
      if (cRam0000000149891c28 == '\x02') {
        uVar14 = 0x146dd5b58;
        uVar16 = 5;
        uVar19 = 0x16a;
        uVar20 = 0xc95574d4;
      }
      else {
        *(undefined **)((longlong)register0x00000020 + -0xd0) = &UNK_143daab5d;
        bVar7 = FUN_14512a480(0);
        *(undefined **)((longlong)register0x00000020 + -0xd0) = &UNK_143daab67;
        bVar8 = FUN_14512a480(1);
        bVar21 = lRam0000000149891c40 == 0;
        bVar22 = lRam0000000149891c60 == 0;
        if ((!bVar21 & bVar7) == 1) {
          *(undefined **)((longlong)register0x00000020 + -0xd0) = &UNK_143daab9e;
          FUN_140004b40(0x149891c00);
          *(longlong **)((longlong)register0x00000020 + -0x80) = plRam0000000149891c30;
          *(undefined8 *)((longlong)register0x00000020 + -0x78) = 0x149891c30;
          *(undefined8 *)((longlong)register0x00000020 + -0x70) = 0;
          *(undefined8 *)((longlong)register0x00000020 + -0x68) = 0x149891c30;
          *(undefined1 *)((longlong)register0x00000020 + -0x60) = 0xff;
          *(undefined8 *)((longlong)register0x00000020 + -0x88) = puRam0000000149891c48;
          if (plRam0000000149891c30 != (longlong *)0x0) {
            plVar12 = plRam0000000149891c30;
            puRam0000000149891c48 = (undefined8 *)((longlong)register0x00000020 + -0x88);
            do {
              lVar11 = *plVar12;
              pcVar2 = (code *)plVar12[1];
              if (lVar11 == 0) {
                *(undefined **)((longlong)register0x00000020 + -0xd0) = &UNK_143daac26;
                (*pcVar2)((undefined1 *)((longlong)register0x00000020 + -0x58));
              }
              else {
                *(undefined **)((longlong)register0x00000020 + -0xd0) = &UNK_143daabf9;
                (*pcVar2)(lVar11,(undefined1 *)((longlong)register0x00000020 + -0x58));
              }
              if ((*(byte *)((longlong)register0x00000020 + -0x60) & 1) == 0) {
                *(byte *)((longlong)register0x00000020 + -0x60) =
                     *(byte *)((longlong)register0x00000020 + -0x60) | 1;
                plVar12 = *(longlong **)((longlong)register0x00000020 + -0x80);
              }
              else {
                if (*(longlong *)((longlong)register0x00000020 + -0x80) == 0) {
                  uVar3 = *(ulonglong *)((longlong)register0x00000020 + -0x78);
                  if ((uVar3 & 1) == 0 || uVar3 < 2) {
                    plVar12 = (longlong *)0x0;
                    goto code_r0x000143daac14;
                  }
                  *(undefined8 **)((longlong)register0x00000020 + -0x78) =
                       (undefined8 *)(uVar3 & 0xfffffffffffffffe);
                  plVar12 = *(longlong **)(uVar3 & 0xfffffffffffffffe);
                }
                else {
                  plVar12 = *(longlong **)
                             (*(longlong *)((longlong)register0x00000020 + -0x80) + 0x10);
                }
                *(longlong **)((longlong)register0x00000020 + -0x80) = plVar12;
              }
code_r0x000143daac14:
            } while (plVar12 != *(longlong **)((longlong)register0x00000020 + -0x70));
            puRam0000000149891c48 = (undefined8 *)*puRam0000000149891c48;
          }
          *(undefined **)((longlong)register0x00000020 + -0xd0) = &UNK_143daacf3;
          func_0x000144d9dab0();
        }
        if ((lRam0000000149891c60 != 0 & bVar8) == 1) {
          *(undefined **)((longlong)register0x00000020 + -0xd0) = &UNK_143daad17;
          FUN_140004b40(0x149891c00);
          *(longlong **)((longlong)register0x00000020 + -0x80) = plRam0000000149891c50;
          *(undefined8 *)((longlong)register0x00000020 + -0x78) = 0x149891c50;
          *(undefined8 *)((longlong)register0x00000020 + -0x70) = 0;
          *(undefined8 *)((longlong)register0x00000020 + -0x68) = 0x149891c50;
          *(undefined1 *)((longlong)register0x00000020 + -0x60) = 0xff;
          *(undefined8 *)((longlong)register0x00000020 + -0x88) = puRam0000000149891c68;
          if (plRam0000000149891c50 != (longlong *)0x0) {
            plVar12 = plRam0000000149891c50;
            puRam0000000149891c68 = (undefined8 *)((longlong)register0x00000020 + -0x88);
            do {
              lVar11 = *plVar12;
              pcVar2 = (code *)plVar12[1];
              if (lVar11 == 0) {
                *(undefined **)((longlong)register0x00000020 + -0xd0) = &UNK_143daad97;
                (*pcVar2)((undefined1 *)((longlong)register0x00000020 + -0x58));
              }
              else {
                *(undefined **)((longlong)register0x00000020 + -0xd0) = &UNK_143daad6e;
                (*pcVar2)(lVar11,(undefined1 *)((longlong)register0x00000020 + -0x58));
              }
              if ((*(byte *)((longlong)register0x00000020 + -0x60) & 1) == 0) {
                *(byte *)((longlong)register0x00000020 + -0x60) =
                     *(byte *)((longlong)register0x00000020 + -0x60) | 1;
                plVar12 = *(longlong **)((longlong)register0x00000020 + -0x80);
              }
              else {
                if (*(longlong *)((longlong)register0x00000020 + -0x80) == 0) {
                  uVar3 = *(ulonglong *)((longlong)register0x00000020 + -0x78);
                  if ((uVar3 & 1) == 0 || uVar3 < 2) {
                    plVar12 = (longlong *)0x0;
                    goto code_r0x000143daad89;
                  }
                  *(undefined8 **)((longlong)register0x00000020 + -0x78) =
                       (undefined8 *)(uVar3 & 0xfffffffffffffffe);
                  plVar12 = *(longlong **)(uVar3 & 0xfffffffffffffffe);
                }
                else {
                  plVar12 = *(longlong **)
                             (*(longlong *)((longlong)register0x00000020 + -0x80) + 0x10);
                }
                *(longlong **)((longlong)register0x00000020 + -0x80) = plVar12;
              }
code_r0x000143daad89:
            } while (plVar12 != *(longlong **)((longlong)register0x00000020 + -0x70));
            puRam0000000149891c68 = (undefined8 *)*puRam0000000149891c68;
          }
          *(undefined **)((longlong)register0x00000020 + -0xd0) = &UNK_143daadea;
          func_0x000144d9dab0();
        }
        if (iRam0000000149891c2c != -1) {
          if (bVar7 != 0 || bVar21) {
code_r0x000143daaed4:
            if (bVar8 != 0 || bVar22) goto code_r0x000143daa84d;
            if (lRam0000000149891c20 == 0) {
code_r0x000143daaf03:
              *(undefined **)((longlong)register0x00000020 + -0xd0) = &UNK_143daaf0d;
              puVar13 = (undefined8 *)func_0x000144f97130(0x10);
              if (puVar13 == (undefined8 *)0x0) {
                *(undefined8 *)((longlong)register0x00000020 + -0x90) = 0x10;
                *(undefined4 *)((longlong)register0x00000020 + -0xa0) = 0x53;
                *(undefined4 *)((longlong)register0x00000020 + -0xa8) = 0xeb968b3f;
                goto code_r0x000143dab01a;
              }
              uVar17 = 0;
            }
            else {
              *(undefined **)((longlong)register0x00000020 + -0xd0) = &UNK_143daaef6;
              puVar13 = (undefined8 *)func_0x000140104070(lRam0000000149891c20,0x10);
              if (puVar13 == (undefined8 *)0x0) goto code_r0x000143daaf03;
              uVar17 = 1;
            }
            *puVar13 = &UNK_14654cc10;
            puVar13[1] = *(undefined8 *)((longlong)register0x00000020 + -0x50);
            *(undefined **)((longlong)register0x00000020 + -0xd0) = &UNK_143daaf3a;
            FUN_140004b40(0x149a434f0);
            iVar1 = iRam0000000149891c2c;
            if (_DAT_149a4353c == _DAT_149a43538) {
              uVar18 = 1;
              if (1 < _DAT_149a4353c) {
                uVar18 = _DAT_149a4353c >> 1;
              }
              *(undefined **)((longlong)register0x00000020 + -0xd0) = &UNK_143dab16b;
              FUN_145895b30(&DAT_149a43538,uVar18 + _DAT_149a4353c);
            }
            lVar11 = _DAT_149a43548;
            lVar15 = (ulonglong)_DAT_149a43544 * 0x10;
            *(undefined8 **)(_DAT_149a43548 + lVar15) = puVar13;
            *(int *)(lVar11 + 8 + lVar15) = iVar1;
            *(undefined1 *)(lVar11 + 0xc + lVar15) = uVar17;
            uVar18 = 0;
            if (_DAT_149a43538 <= _DAT_149a43544 + 1) {
              uVar18 = _DAT_149a43538;
            }
            _DAT_149a43544 = (_DAT_149a43544 + 1) - uVar18;
            _DAT_149a4353c = _DAT_149a4353c + 1;
            *(undefined **)((longlong)register0x00000020 + -0xd0) = &UNK_143daafaa;
            func_0x000144d9dab0();
          }
          else {
            if (lRam0000000149891c20 != 0) {
              *(undefined **)((longlong)register0x00000020 + -0xd0) = &UNK_143daae1f;
              puVar13 = (undefined8 *)func_0x000140104070(lRam0000000149891c20,0x10);
              if (puVar13 == (undefined8 *)0x0) goto code_r0x000143daae2c;
              uVar17 = 1;
code_r0x000143daae45:
              *puVar13 = &UNK_14654cc10;
              puVar13[1] = *(undefined8 *)((longlong)register0x00000020 + -0x50);
              *(undefined **)((longlong)register0x00000020 + -0xd0) = &UNK_143daae64;
              FUN_140004b40(0x149a434f0);
              iVar1 = iRam0000000149891c2c;
              if (_DAT_149a43524 == _DAT_149a43520) {
                uVar18 = 1;
                if (1 < _DAT_149a43524) {
                  uVar18 = _DAT_149a43524 >> 1;
                }
                *(undefined **)((longlong)register0x00000020 + -0xd0) = &UNK_143dab045;
                FUN_145895b30(&DAT_149a43520,uVar18 + _DAT_149a43524);
              }
              lVar11 = _DAT_149a43530;
              lVar15 = (ulonglong)_DAT_149a4352c * 0x10;
              *(undefined8 **)(_DAT_149a43530 + lVar15) = puVar13;
              *(int *)(lVar11 + 8 + lVar15) = iVar1;
              *(undefined1 *)(lVar11 + 0xc + lVar15) = uVar17;
              uVar18 = 0;
              if (_DAT_149a43520 <= _DAT_149a4352c + 1) {
                uVar18 = _DAT_149a43520;
              }
              _DAT_149a4352c = (_DAT_149a4352c + 1) - uVar18;
              _DAT_149a43524 = _DAT_149a43524 + 1;
              *(undefined **)((longlong)register0x00000020 + -0xd0) = &UNK_143daaed4;
              func_0x000144d9dab0();
              goto code_r0x000143daaed4;
            }
code_r0x000143daae2c:
            *(undefined **)((longlong)register0x00000020 + -0xd0) = &UNK_143daae36;
            puVar13 = (undefined8 *)func_0x000144f97130(0x10);
            if (puVar13 != (undefined8 *)0x0) {
              uVar17 = 0;
              goto code_r0x000143daae45;
            }
            *(undefined8 *)((longlong)register0x00000020 + -0x90) = 0x10;
            *(undefined4 *)((longlong)register0x00000020 + -0xa0) = 0x53;
            *(undefined4 *)((longlong)register0x00000020 + -0xa8) = 0xc52ca8ea;
code_r0x000143dab01a:
            *(undefined4 *)((longlong)register0x00000020 + -0x98) = uRam0000000149891574;
            *(undefined **)((longlong)register0x00000020 + -0xd0) = &UNK_143dab023;
            FUN_1402675a0(0x146dd5b58,4);
          }
          goto code_r0x000143daa84d;
        }
        uVar14 = 0x146cb4828;
        uVar16 = 1;
        uVar19 = 400;
        uVar20 = 0xeb46f5a0;
      }
      *(undefined **)((longlong)register0x00000020 + -0xd0) = &UNK_143dab1a7;
      FUN_1457d1ec0(uVar14,uVar16,uVar19,uVar20);
    }
  }
  else {
    iVar4 = iRam0000000149891f04;
    iVar5 = iRam0000000149891f08;
    if (0xfffffffc < uVar9 - 4) goto code_r0x000143daa854;
  }
code_r0x000143daa84d:
  iRam0000000149891f08 = iVar5;
  iRam0000000149891f04 = iVar4;
  uRam0000000149891f0c = 1;
code_r0x000143daa854:
  if ((uVar9 | 2) == 7) {
    *(undefined **)((longlong)register0x00000020 + -0xd0) = &UNK_143daa863;
    uRam0000000149891cc0 = 0;
    uRam0000000149891cc1 = 0;
    return;
  }
  return;
}

