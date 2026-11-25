// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14003ac90  size: 235 bytes
// Name:    FUN_14003ac90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145efd910, FUN_1451181c0, FUN_143dc3260, FUN_1402675a0, FUN_144fb0ea0, FUN_1457d1ec0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x000143daa85e: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14003ac90(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined1 uVar14;
  uint uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  bool bVar18;
  bool bVar19;
  undefined8 uStack_88;
  longlong *plStack_80;
  undefined8 *puStack_78;
  longlong *plStack_70;
  undefined8 uStack_68;
  byte bStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  int iStack_44;
  
  uStack_50 = 0x14003ac9a;
  uVar6 = func_0x000145268620();
  if (3 < uVar6) {
    return;
  }
  uStack_50 = 0x14003aca8;
  lVar8 = FUN_1451181c0(uVar6);
  uStack_50 = 0x14003acb3;
  cVar3 = func_0x0001450903f0(*(undefined4 *)(lVar8 + 0x280));
  if (cVar3 == '\0') {
    return;
  }
  uStack_50 = 0x14003acbe;
  cVar3 = FUN_144fb0ea0(uVar6);
  if (cVar3 == '\0') {
    return;
  }
  uStack_50 = 0x14003accd;
  FUN_145efd910();
  if ((_DAT_149891e78 < 7) && ((0x52U >> (_DAT_149891e78 & 0x1f) & 1) != 0)) {
    uStack_50 = 0x14003ace9;
    cVar3 = FUN_143dc3260(uVar6);
    if (cVar3 == '\0') {
      uStack_50 = 0x14003ad23;
      FUN_1402675a0(0x146cb4b88,4);
      goto LAB_14003ad23;
    }
    uVar6 = 2;
  }
  else {
    uStack_50 = 0x14003ad60;
    FUN_1402675a0(0x146cb4b88,4);
    uStack_50 = 0x14003ad79;
    FUN_1457d1ec0(0x146cb4b88,1,0xd9d,0x6fdd6dd);
LAB_14003ad23:
    uVar6 = 7;
  }
  if (uVar6 == 3) {
    uRam0000000149891cc0 = 1;
    uRam0000000149891cc1 = 1;
    _DAT_149891e78 = uVar6;
    return;
  }
  _DAT_149891e78 = uVar6;
  if (uVar6 == 5) {
    FUN_145915070();
    uRam0000000149891eb4 = 0;
    puStack_58 = &UNK_14654d7d0;
    if (cRam0000000149891c28 == '\x02') {
      uVar11 = 0x146dd5b58;
      uVar13 = 5;
      uVar16 = 0x16a;
      uVar17 = 0xc95574d4;
code_r0x000143daab08:
      FUN_1457d1ec0(uVar11,uVar13,uVar16,uVar17);
    }
    else {
      bVar4 = FUN_14512a480(0);
      bVar5 = FUN_14512a480(1);
      bVar18 = lRam0000000149891c40 == 0;
      bVar19 = lRam0000000149891c60 != 0;
      if ((!bVar18 & bVar4) == 1) {
        FUN_140004b40(0x149891c00);
        plStack_80 = plRam0000000149891c30;
        puStack_78 = (undefined8 *)0x149891c30;
        plStack_70 = (longlong *)0x0;
        uStack_68 = 0x149891c30;
        bStack_60 = 0xff;
        uStack_88 = puRam0000000149891c48;
        if (plRam0000000149891c30 != (longlong *)0x0) {
          plVar9 = plRam0000000149891c30;
          puRam0000000149891c48 = &uStack_88;
          do {
            if (*plVar9 == 0) {
              (*(code *)plVar9[1])(&puStack_58);
            }
            else {
              (*(code *)plVar9[1])(*plVar9,&puStack_58);
            }
            if ((bStack_60 & 1) == 0) {
              bStack_60 = bStack_60 | 1;
              plVar9 = plStack_80;
            }
            else if (plStack_80 == (longlong *)0x0) {
              if (((ulonglong)puStack_78 & 1) == 0 || puStack_78 < (undefined8 *)0x2) {
                plVar9 = (longlong *)0x0;
              }
              else {
                puStack_78 = (undefined8 *)((ulonglong)puStack_78 & 0xfffffffffffffffe);
                plVar9 = (longlong *)*puStack_78;
                plStack_80 = plVar9;
              }
            }
            else {
              plVar9 = (longlong *)plStack_80[2];
              plStack_80 = plVar9;
            }
          } while (plVar9 != plStack_70);
          puRam0000000149891c48 = (undefined8 *)*puRam0000000149891c48;
        }
        func_0x000144d9dab0(0x149891c00);
      }
      if ((lRam0000000149891c60 != 0 & bVar5) == 1) {
        FUN_140004b40(0x149891c00);
        plStack_80 = plRam0000000149891c50;
        puStack_78 = (undefined8 *)0x149891c50;
        plStack_70 = (longlong *)0x0;
        uStack_68 = 0x149891c50;
        bStack_60 = 0xff;
        uStack_88 = puRam0000000149891c68;
        if (plRam0000000149891c50 != (longlong *)0x0) {
          plVar9 = plRam0000000149891c50;
          puRam0000000149891c68 = &uStack_88;
          do {
            if (*plVar9 == 0) {
              (*(code *)plVar9[1])(&puStack_58);
            }
            else {
              (*(code *)plVar9[1])(*plVar9,&puStack_58);
            }
            if ((bStack_60 & 1) == 0) {
              bStack_60 = bStack_60 | 1;
              plVar9 = plStack_80;
            }
            else if (plStack_80 == (longlong *)0x0) {
              if (((ulonglong)puStack_78 & 1) == 0 || puStack_78 < (undefined8 *)0x2) {
                plVar9 = (longlong *)0x0;
              }
              else {
                puStack_78 = (undefined8 *)((ulonglong)puStack_78 & 0xfffffffffffffffe);
                plVar9 = (longlong *)*puStack_78;
                plStack_80 = plVar9;
              }
            }
            else {
              plVar9 = (longlong *)plStack_80[2];
              plStack_80 = plVar9;
            }
          } while (plVar9 != plStack_70);
          puRam0000000149891c68 = (undefined8 *)*puRam0000000149891c68;
        }
        func_0x000144d9dab0(0x149891c00);
      }
      if (iRam0000000149891c2c == -1) {
        uVar11 = 0x146cb4828;
        uVar13 = 1;
        uVar16 = 400;
        uVar17 = 0xeb46f5a0;
        goto code_r0x000143daab08;
      }
      if (bVar4 != 0 || bVar18) {
code_r0x000143dab0cf:
        if (bVar5 == 0 && bVar19) {
          if ((lRam0000000149891c20 == 0) ||
             (puVar10 = (undefined8 *)func_0x000140104070(lRam0000000149891c20,8),
             puVar10 == (undefined8 *)0x0)) {
            puVar10 = (undefined8 *)func_0x000144f97130(8);
            if (puVar10 == (undefined8 *)0x0) goto code_r0x000143dab139;
            uVar14 = 0;
          }
          else {
            uVar14 = 1;
          }
          *puVar10 = &UNK_14654d7d0;
          FUN_140004b40(0x149a434f0);
          iVar7 = iRam0000000149891c2c;
          if (_DAT_149a4353c == _DAT_149a43538) {
            uVar15 = 1;
            if (1 < _DAT_149a4353c) {
              uVar15 = _DAT_149a4353c >> 1;
            }
            FUN_145895b30(&DAT_149a43538,uVar15 + _DAT_149a4353c);
          }
          lVar8 = _DAT_149a43548;
          lVar12 = (ulonglong)_DAT_149a43544 * 0x10;
          *(undefined8 **)(_DAT_149a43548 + lVar12) = puVar10;
          *(int *)(lVar8 + 8 + lVar12) = iVar7;
          *(undefined1 *)(lVar8 + 0xc + lVar12) = uVar14;
          uVar15 = 0;
          if (_DAT_149a43538 <= _DAT_149a43544 + 1) {
            uVar15 = _DAT_149a43538;
          }
          _DAT_149a43544 = (_DAT_149a43544 + 1) - uVar15;
          _DAT_149a4353c = _DAT_149a4353c + 1;
          func_0x000144d9dab0(0x149a434f0);
        }
      }
      else {
        if ((lRam0000000149891c20 != 0) &&
           (puVar10 = (undefined8 *)func_0x000140104070(lRam0000000149891c20,8),
           puVar10 != (undefined8 *)0x0)) {
          uVar14 = 1;
code_r0x000143dab050:
          *puVar10 = &UNK_14654d7d0;
          FUN_140004b40(0x149a434f0);
          iVar7 = iRam0000000149891c2c;
          if (_DAT_149a43524 == _DAT_149a43520) {
            uVar15 = 1;
            if (1 < _DAT_149a43524) {
              uVar15 = _DAT_149a43524 >> 1;
            }
            FUN_145895b30(&DAT_149a43520,uVar15 + _DAT_149a43524);
          }
          lVar8 = _DAT_149a43530;
          lVar12 = (ulonglong)_DAT_149a4352c * 0x10;
          *(undefined8 **)(_DAT_149a43530 + lVar12) = puVar10;
          *(int *)(lVar8 + 8 + lVar12) = iVar7;
          *(undefined1 *)(lVar8 + 0xc + lVar12) = uVar14;
          uVar15 = 0;
          if (_DAT_149a43520 <= _DAT_149a4352c + 1) {
            uVar15 = _DAT_149a43520;
          }
          _DAT_149a4352c = (_DAT_149a4352c + 1) - uVar15;
          _DAT_149a43524 = _DAT_149a43524 + 1;
          func_0x000144d9dab0(0x149a434f0);
          goto code_r0x000143dab0cf;
        }
        puVar10 = (undefined8 *)func_0x000144f97130(8);
        if (puVar10 != (undefined8 *)0x0) {
          uVar14 = 0;
          goto code_r0x000143dab050;
        }
code_r0x000143dab139:
        FUN_1402675a0(0x146dd5b58,4);
      }
    }
    func_0x000140555550();
    iVar7 = func_0x0001456acf80();
    if ((iRam0000000149891f04 != iStack_44) ||
       (iVar1 = iRam0000000149891f04, iVar2 = iRam0000000149891f08, iRam0000000149891f08 != iVar7))
    {
      func_0x000143dab280(&puStack_58,iStack_44);
      iVar1 = iStack_44;
      iVar2 = iVar7;
      if (cRam0000000149891c28 == '\x02') {
        uVar11 = 0x146dd5b58;
        uVar13 = 5;
        uVar16 = 0x16a;
        uVar17 = 0xc95574d4;
      }
      else {
        bVar4 = FUN_14512a480(0);
        bVar5 = FUN_14512a480(1);
        bVar18 = lRam0000000149891c40 == 0;
        bVar19 = lRam0000000149891c60 == 0;
        if ((!bVar18 & bVar4) == 1) {
          FUN_140004b40(0x149891c00);
          plStack_80 = plRam0000000149891c30;
          puStack_78 = (undefined8 *)0x149891c30;
          plStack_70 = (longlong *)0x0;
          uStack_68 = 0x149891c30;
          bStack_60 = 0xff;
          uStack_88 = puRam0000000149891c48;
          if (plRam0000000149891c30 != (longlong *)0x0) {
            plVar9 = plRam0000000149891c30;
            puRam0000000149891c48 = &uStack_88;
            do {
              if (*plVar9 == 0) {
                (*(code *)plVar9[1])(&puStack_58);
              }
              else {
                (*(code *)plVar9[1])(*plVar9,&puStack_58);
              }
              if ((bStack_60 & 1) == 0) {
                bStack_60 = bStack_60 | 1;
                plVar9 = plStack_80;
              }
              else if (plStack_80 == (longlong *)0x0) {
                if (((ulonglong)puStack_78 & 1) == 0 || puStack_78 < (undefined8 *)0x2) {
                  plVar9 = (longlong *)0x0;
                }
                else {
                  puStack_78 = (undefined8 *)((ulonglong)puStack_78 & 0xfffffffffffffffe);
                  plVar9 = (longlong *)*puStack_78;
                  plStack_80 = plVar9;
                }
              }
              else {
                plVar9 = (longlong *)plStack_80[2];
                plStack_80 = plVar9;
              }
            } while (plVar9 != plStack_70);
            puRam0000000149891c48 = (undefined8 *)*puRam0000000149891c48;
          }
          func_0x000144d9dab0();
        }
        if ((lRam0000000149891c60 != 0 & bVar5) == 1) {
          FUN_140004b40(0x149891c00);
          plStack_80 = plRam0000000149891c50;
          puStack_78 = (undefined8 *)0x149891c50;
          plStack_70 = (longlong *)0x0;
          uStack_68 = 0x149891c50;
          bStack_60 = 0xff;
          uStack_88 = puRam0000000149891c68;
          if (plRam0000000149891c50 != (longlong *)0x0) {
            plVar9 = plRam0000000149891c50;
            puRam0000000149891c68 = &uStack_88;
            do {
              if (*plVar9 == 0) {
                (*(code *)plVar9[1])(&puStack_58);
              }
              else {
                (*(code *)plVar9[1])(*plVar9,&puStack_58);
              }
              if ((bStack_60 & 1) == 0) {
                bStack_60 = bStack_60 | 1;
                plVar9 = plStack_80;
              }
              else if (plStack_80 == (longlong *)0x0) {
                if (((ulonglong)puStack_78 & 1) == 0 || puStack_78 < (undefined8 *)0x2) {
                  plVar9 = (longlong *)0x0;
                }
                else {
                  puStack_78 = (undefined8 *)((ulonglong)puStack_78 & 0xfffffffffffffffe);
                  plVar9 = (longlong *)*puStack_78;
                  plStack_80 = plVar9;
                }
              }
              else {
                plVar9 = (longlong *)plStack_80[2];
                plStack_80 = plVar9;
              }
            } while (plVar9 != plStack_70);
            puRam0000000149891c68 = (undefined8 *)*puRam0000000149891c68;
          }
          func_0x000144d9dab0();
        }
        if (iRam0000000149891c2c != -1) {
          if (bVar4 != 0 || bVar18) {
code_r0x000143daaed4:
            if (bVar5 != 0 || bVar19) goto code_r0x000143daa84d;
            if ((lRam0000000149891c20 == 0) ||
               (puVar10 = (undefined8 *)func_0x000140104070(lRam0000000149891c20,0x10),
               puVar10 == (undefined8 *)0x0)) {
              puVar10 = (undefined8 *)func_0x000144f97130(0x10);
              if (puVar10 == (undefined8 *)0x0) goto code_r0x000143dab01a;
              uVar14 = 0;
            }
            else {
              uVar14 = 1;
            }
            *puVar10 = &UNK_14654cc10;
            puVar10[1] = uStack_50;
            FUN_140004b40(0x149a434f0);
            iVar7 = iRam0000000149891c2c;
            if (_DAT_149a4353c == _DAT_149a43538) {
              uVar15 = 1;
              if (1 < _DAT_149a4353c) {
                uVar15 = _DAT_149a4353c >> 1;
              }
              FUN_145895b30(&DAT_149a43538,uVar15 + _DAT_149a4353c);
            }
            lVar8 = _DAT_149a43548;
            lVar12 = (ulonglong)_DAT_149a43544 * 0x10;
            *(undefined8 **)(_DAT_149a43548 + lVar12) = puVar10;
            *(int *)(lVar8 + 8 + lVar12) = iVar7;
            *(undefined1 *)(lVar8 + 0xc + lVar12) = uVar14;
            uVar15 = 0;
            if (_DAT_149a43538 <= _DAT_149a43544 + 1) {
              uVar15 = _DAT_149a43538;
            }
            _DAT_149a43544 = (_DAT_149a43544 + 1) - uVar15;
            _DAT_149a4353c = _DAT_149a4353c + 1;
            func_0x000144d9dab0();
          }
          else {
            if ((lRam0000000149891c20 != 0) &&
               (puVar10 = (undefined8 *)func_0x000140104070(lRam0000000149891c20,0x10),
               puVar10 != (undefined8 *)0x0)) {
              uVar14 = 1;
code_r0x000143daae45:
              *puVar10 = &UNK_14654cc10;
              puVar10[1] = uStack_50;
              FUN_140004b40(0x149a434f0);
              iVar7 = iRam0000000149891c2c;
              if (_DAT_149a43524 == _DAT_149a43520) {
                uVar15 = 1;
                if (1 < _DAT_149a43524) {
                  uVar15 = _DAT_149a43524 >> 1;
                }
                FUN_145895b30(&DAT_149a43520,uVar15 + _DAT_149a43524);
              }
              lVar8 = _DAT_149a43530;
              lVar12 = (ulonglong)_DAT_149a4352c * 0x10;
              *(undefined8 **)(_DAT_149a43530 + lVar12) = puVar10;
              *(int *)(lVar8 + 8 + lVar12) = iVar7;
              *(undefined1 *)(lVar8 + 0xc + lVar12) = uVar14;
              uVar15 = 0;
              if (_DAT_149a43520 <= _DAT_149a4352c + 1) {
                uVar15 = _DAT_149a43520;
              }
              _DAT_149a4352c = (_DAT_149a4352c + 1) - uVar15;
              _DAT_149a43524 = _DAT_149a43524 + 1;
              func_0x000144d9dab0();
              goto code_r0x000143daaed4;
            }
            puVar10 = (undefined8 *)func_0x000144f97130(0x10);
            if (puVar10 != (undefined8 *)0x0) {
              uVar14 = 0;
              goto code_r0x000143daae45;
            }
code_r0x000143dab01a:
            FUN_1402675a0(0x146dd5b58,4);
          }
          goto code_r0x000143daa84d;
        }
        uVar11 = 0x146cb4828;
        uVar13 = 1;
        uVar16 = 400;
        uVar17 = 0xeb46f5a0;
      }
      FUN_1457d1ec0(uVar11,uVar13,uVar16,uVar17);
    }
  }
  else {
    iVar1 = iRam0000000149891f04;
    iVar2 = iRam0000000149891f08;
    if (0xfffffffc < uVar6 - 4) goto code_r0x000143daa854;
  }
code_r0x000143daa84d:
  iRam0000000149891f08 = iVar2;
  iRam0000000149891f04 = iVar1;
  uRam0000000149891f0c = 1;
code_r0x000143daa854:
  if ((uVar6 | 2) == 7) {
    uRam0000000149891cc0 = 0;
    uRam0000000149891cc1 = 0;
    return;
  }
  return;
}

