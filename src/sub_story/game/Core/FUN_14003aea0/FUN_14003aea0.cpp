// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14003aea0  size: 251 bytes
// Name:    FUN_14003aea0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_143ebd8e0, FUN_1451c4240, FUN_143dad940, FUN_1402675a0, FUN_1457d1ec0, FUN_143daa820
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x000143daa85e: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000143daa864) */
/* WARNING: Removing unreachable block (ram,0x000143daa845) */
/* WARNING: Removing unreachable block (ram,0x000143daa878) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14003aea0(void)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined1 uVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  bool bVar16;
  bool bVar17;
  undefined8 uStack_88;
  longlong *plStack_80;
  undefined8 *puStack_78;
  longlong *plStack_70;
  undefined8 uStack_68;
  byte bStack_60;
  undefined *puStack_58;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined1 auStack_28 [8];
  
  if (_DAT_149891e7c == 1) {
    return;
  }
  if (DAT_149891d78 != '\0') {
    plStack_80 = (longlong *)0x14003aec7;
    FUN_1451c4240(&DAT_149891d50);
    plStack_80 = (longlong *)0x14003aed7;
    func_0x0001455373d0(auStack_28,&DAT_149891d50);
    uStack_50 = 1;
    puStack_58 = (undefined *)0x0;
    plStack_80 = (longlong *)0x14003af1c;
    uStack_48 = auStack_28;
    cVar3 = FUN_143ebd8e0(0x26010002,&DAT_149891d78,0,0xff);
    if (cVar3 != '\0') {
      plStack_80 = (longlong *)0x14003af2a;
      FUN_143daa820(3);
      return;
    }
    uStack_48 = &DAT_149891d78;
    uStack_50 = 8;
    uStack_4e = 0;
    puStack_58 = (undefined *)CONCAT44(puStack_58._4_4_,0x894b3772);
    plStack_80 = (longlong *)0x14003af71;
    FUN_1402675a0(0x146cb4b88,4);
    plStack_80 = (longlong *)0x14003af8a;
    FUN_1457d1ec0(0x146cb4b88,5,0xd25,0xf8e13e2a);
    plStack_80 = (longlong *)0x14003af94;
    func_0x000143dc0720(6);
    plStack_80 = (longlong *)0x14003af99;
    FUN_143dad940();
    return;
  }
  _DAT_149891e78 = 5;
  FUN_145915070();
  uRam0000000149891eb4 = 0;
  puStack_58 = &UNK_14654d7d0;
  if (cRam0000000149891c28 == '\x02') {
    uVar9 = 0x146dd5b58;
    uVar11 = 5;
    uVar14 = 0x16a;
    uVar15 = 0xc95574d4;
code_r0x000143daab08:
    FUN_1457d1ec0(uVar9,uVar11,uVar14,uVar15);
  }
  else {
    bVar4 = FUN_14512a480(0);
    bVar5 = FUN_14512a480(1);
    bVar16 = lRam0000000149891c40 == 0;
    bVar17 = lRam0000000149891c60 != 0;
    if ((!bVar16 & bVar4) == 1) {
      FUN_140004b40(0x149891c00);
      plStack_80 = plRam0000000149891c30;
      puStack_78 = (undefined8 *)0x149891c30;
      plStack_70 = (longlong *)0x0;
      uStack_68 = 0x149891c30;
      bStack_60 = 0xff;
      uStack_88 = puRam0000000149891c48;
      if (plRam0000000149891c30 != (longlong *)0x0) {
        plVar7 = plRam0000000149891c30;
        puRam0000000149891c48 = &uStack_88;
        do {
          if (*plVar7 == 0) {
            (*(code *)plVar7[1])(&puStack_58);
          }
          else {
            (*(code *)plVar7[1])(*plVar7,&puStack_58);
          }
          if ((bStack_60 & 1) == 0) {
            bStack_60 = bStack_60 | 1;
            plVar7 = plStack_80;
          }
          else if (plStack_80 == (longlong *)0x0) {
            if (((ulonglong)puStack_78 & 1) == 0 || puStack_78 < (undefined8 *)0x2) {
              plVar7 = (longlong *)0x0;
            }
            else {
              puStack_78 = (undefined8 *)((ulonglong)puStack_78 & 0xfffffffffffffffe);
              plVar7 = (longlong *)*puStack_78;
              plStack_80 = plVar7;
            }
          }
          else {
            plVar7 = (longlong *)plStack_80[2];
            plStack_80 = plVar7;
          }
        } while (plVar7 != plStack_70);
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
        plVar7 = plRam0000000149891c50;
        puRam0000000149891c68 = &uStack_88;
        do {
          if (*plVar7 == 0) {
            (*(code *)plVar7[1])(&puStack_58);
          }
          else {
            (*(code *)plVar7[1])(*plVar7,&puStack_58);
          }
          if ((bStack_60 & 1) == 0) {
            bStack_60 = bStack_60 | 1;
            plVar7 = plStack_80;
          }
          else if (plStack_80 == (longlong *)0x0) {
            if (((ulonglong)puStack_78 & 1) == 0 || puStack_78 < (undefined8 *)0x2) {
              plVar7 = (longlong *)0x0;
            }
            else {
              puStack_78 = (undefined8 *)((ulonglong)puStack_78 & 0xfffffffffffffffe);
              plVar7 = (longlong *)*puStack_78;
              plStack_80 = plVar7;
            }
          }
          else {
            plVar7 = (longlong *)plStack_80[2];
            plStack_80 = plVar7;
          }
        } while (plVar7 != plStack_70);
        puRam0000000149891c68 = (undefined8 *)*puRam0000000149891c68;
      }
      func_0x000144d9dab0(0x149891c00);
    }
    if (iRam0000000149891c2c == -1) {
      uVar9 = 0x146cb4828;
      uVar11 = 1;
      uVar14 = 400;
      uVar15 = 0xeb46f5a0;
      goto code_r0x000143daab08;
    }
    if (bVar4 != 0 || bVar16) {
code_r0x000143dab0cf:
      if (bVar5 == 0 && bVar17) {
        if ((lRam0000000149891c20 == 0) ||
           (puVar8 = (undefined8 *)func_0x000140104070(lRam0000000149891c20,8),
           puVar8 == (undefined8 *)0x0)) {
          puVar8 = (undefined8 *)func_0x000144f97130(8);
          if (puVar8 == (undefined8 *)0x0) goto code_r0x000143dab139;
          uVar12 = 0;
        }
        else {
          uVar12 = 1;
        }
        *puVar8 = &UNK_14654d7d0;
        FUN_140004b40(0x149a434f0);
        iVar6 = iRam0000000149891c2c;
        if (_DAT_149a4353c == _DAT_149a43538) {
          uVar13 = 1;
          if (1 < _DAT_149a4353c) {
            uVar13 = _DAT_149a4353c >> 1;
          }
          FUN_145895b30(&DAT_149a43538,uVar13 + _DAT_149a4353c);
        }
        lVar2 = _DAT_149a43548;
        lVar10 = (ulonglong)_DAT_149a43544 * 0x10;
        *(undefined8 **)(_DAT_149a43548 + lVar10) = puVar8;
        *(int *)(lVar2 + 8 + lVar10) = iVar6;
        *(undefined1 *)(lVar2 + 0xc + lVar10) = uVar12;
        uVar13 = 0;
        if (_DAT_149a43538 <= _DAT_149a43544 + 1) {
          uVar13 = _DAT_149a43538;
        }
        _DAT_149a43544 = (_DAT_149a43544 + 1) - uVar13;
        _DAT_149a4353c = _DAT_149a4353c + 1;
        func_0x000144d9dab0(0x149a434f0);
      }
    }
    else {
      if ((lRam0000000149891c20 != 0) &&
         (puVar8 = (undefined8 *)func_0x000140104070(lRam0000000149891c20,8),
         puVar8 != (undefined8 *)0x0)) {
        uVar12 = 1;
code_r0x000143dab050:
        *puVar8 = &UNK_14654d7d0;
        FUN_140004b40(0x149a434f0);
        iVar6 = iRam0000000149891c2c;
        if (_DAT_149a43524 == _DAT_149a43520) {
          uVar13 = 1;
          if (1 < _DAT_149a43524) {
            uVar13 = _DAT_149a43524 >> 1;
          }
          FUN_145895b30(&DAT_149a43520,uVar13 + _DAT_149a43524);
        }
        lVar2 = _DAT_149a43530;
        lVar10 = (ulonglong)_DAT_149a4352c * 0x10;
        *(undefined8 **)(_DAT_149a43530 + lVar10) = puVar8;
        *(int *)(lVar2 + 8 + lVar10) = iVar6;
        *(undefined1 *)(lVar2 + 0xc + lVar10) = uVar12;
        uVar13 = 0;
        if (_DAT_149a43520 <= _DAT_149a4352c + 1) {
          uVar13 = _DAT_149a43520;
        }
        _DAT_149a4352c = (_DAT_149a4352c + 1) - uVar13;
        _DAT_149a43524 = _DAT_149a43524 + 1;
        func_0x000144d9dab0(0x149a434f0);
        goto code_r0x000143dab0cf;
      }
      puVar8 = (undefined8 *)func_0x000144f97130(8);
      if (puVar8 != (undefined8 *)0x0) {
        uVar12 = 0;
        goto code_r0x000143dab050;
      }
code_r0x000143dab139:
      FUN_1402675a0(0x146dd5b58,4);
    }
  }
  func_0x000140555550();
  iVar6 = func_0x0001456acf80();
  if ((iRam0000000149891f04 == uStack_48._4_4_) && (iRam0000000149891f08 == iVar6)) {
    uRam0000000149891cc0 = 0;
    uRam0000000149891cc1 = 0;
    uRam0000000149891f0c = 1;
    return;
  }
  func_0x000143dab280(&puStack_58,uStack_48._4_4_);
  if (cRam0000000149891c28 == '\x02') {
    uVar9 = 0x146dd5b58;
    uVar11 = 5;
    uVar14 = 0x16a;
    uVar15 = 0xc95574d4;
code_r0x000143dab1a2:
    FUN_1457d1ec0(uVar9,uVar11,uVar14,uVar15);
    iRam0000000149891f08 = iVar6;
    iRam0000000149891f04 = uStack_48._4_4_;
    uRam0000000149891f0c = 1;
    uRam0000000149891cc0 = 0;
    uRam0000000149891cc1 = 0;
    return;
  }
  bVar4 = FUN_14512a480(0);
  bVar5 = FUN_14512a480(1);
  bVar16 = lRam0000000149891c40 != 0;
  bVar17 = lRam0000000149891c60 == 0;
  if ((bVar16 & bVar4) == 1) {
    FUN_140004b40(0x149891c00);
    plStack_80 = plRam0000000149891c30;
    puStack_78 = (undefined8 *)0x149891c30;
    plStack_70 = (longlong *)0x0;
    uStack_68 = 0x149891c30;
    bStack_60 = 0xff;
    uStack_88 = puRam0000000149891c48;
    if (plRam0000000149891c30 != (longlong *)0x0) {
      plVar7 = plRam0000000149891c30;
      puRam0000000149891c48 = &uStack_88;
      do {
        if (*plVar7 == 0) {
          (*(code *)plVar7[1])(&puStack_58);
        }
        else {
          (*(code *)plVar7[1])(*plVar7,&puStack_58);
        }
        if ((bStack_60 & 1) == 0) {
          bStack_60 = bStack_60 | 1;
          plVar7 = plStack_80;
        }
        else if (plStack_80 == (longlong *)0x0) {
          if (((ulonglong)puStack_78 & 1) == 0 || puStack_78 < (undefined8 *)0x2) {
            plVar7 = (longlong *)0x0;
          }
          else {
            puStack_78 = (undefined8 *)((ulonglong)puStack_78 & 0xfffffffffffffffe);
            plVar7 = (longlong *)*puStack_78;
            plStack_80 = plVar7;
          }
        }
        else {
          plVar7 = (longlong *)plStack_80[2];
          plStack_80 = plVar7;
        }
      } while (plVar7 != plStack_70);
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
      plVar7 = plRam0000000149891c50;
      puRam0000000149891c68 = &uStack_88;
      do {
        if (*plVar7 == 0) {
          (*(code *)plVar7[1])(&puStack_58);
        }
        else {
          (*(code *)plVar7[1])(*plVar7,&puStack_58);
        }
        if ((bStack_60 & 1) == 0) {
          bStack_60 = bStack_60 | 1;
          plVar7 = plStack_80;
        }
        else if (plStack_80 == (longlong *)0x0) {
          if (((ulonglong)puStack_78 & 1) == 0 || puStack_78 < (undefined8 *)0x2) {
            plVar7 = (longlong *)0x0;
          }
          else {
            puStack_78 = (undefined8 *)((ulonglong)puStack_78 & 0xfffffffffffffffe);
            plVar7 = (longlong *)*puStack_78;
            plStack_80 = plVar7;
          }
        }
        else {
          plVar7 = (longlong *)plStack_80[2];
          plStack_80 = plVar7;
        }
      } while (plVar7 != plStack_70);
      puRam0000000149891c68 = (undefined8 *)*puRam0000000149891c68;
    }
    func_0x000144d9dab0();
  }
  if (iRam0000000149891c2c == -1) {
    uVar9 = 0x146cb4828;
    uVar11 = 1;
    uVar14 = 400;
    uVar15 = 0xeb46f5a0;
    goto code_r0x000143dab1a2;
  }
  if (bVar4 == 0 && bVar16) {
    if ((lRam0000000149891c20 == 0) ||
       (puVar8 = (undefined8 *)func_0x000140104070(lRam0000000149891c20,0x10),
       puVar8 == (undefined8 *)0x0)) {
      puVar8 = (undefined8 *)func_0x000144f97130(0x10);
      if (puVar8 == (undefined8 *)0x0) goto code_r0x000143dab01a;
      uVar12 = 0;
    }
    else {
      uVar12 = 1;
    }
    *puVar8 = &UNK_14654cc10;
    puVar8[1] = CONCAT44(uStack_4c,CONCAT22(uStack_4e,uStack_50));
    FUN_140004b40(0x149a434f0);
    iVar1 = iRam0000000149891c2c;
    if (_DAT_149a43524 == _DAT_149a43520) {
      uVar13 = 1;
      if (1 < _DAT_149a43524) {
        uVar13 = _DAT_149a43524 >> 1;
      }
      FUN_145895b30(&DAT_149a43520,uVar13 + _DAT_149a43524);
    }
    lVar2 = _DAT_149a43530;
    lVar10 = (ulonglong)_DAT_149a4352c * 0x10;
    *(undefined8 **)(_DAT_149a43530 + lVar10) = puVar8;
    *(int *)(lVar2 + 8 + lVar10) = iVar1;
    *(undefined1 *)(lVar2 + 0xc + lVar10) = uVar12;
    uVar13 = 0;
    if (_DAT_149a43520 <= _DAT_149a4352c + 1) {
      uVar13 = _DAT_149a43520;
    }
    _DAT_149a4352c = (_DAT_149a4352c + 1) - uVar13;
    _DAT_149a43524 = _DAT_149a43524 + 1;
    func_0x000144d9dab0();
  }
  if (bVar5 != 0 || bVar17) {
    uRam0000000149891cc0 = 0;
    uRam0000000149891cc1 = 0;
    iRam0000000149891f04 = uStack_48._4_4_;
    iRam0000000149891f08 = iVar6;
    uRam0000000149891f0c = 1;
    return;
  }
  if ((lRam0000000149891c20 == 0) ||
     (puVar8 = (undefined8 *)func_0x000140104070(lRam0000000149891c20,0x10),
     puVar8 == (undefined8 *)0x0)) {
    puVar8 = (undefined8 *)func_0x000144f97130(0x10);
    if (puVar8 == (undefined8 *)0x0) {
code_r0x000143dab01a:
      FUN_1402675a0(0x146dd5b58,4);
      uRam0000000149891cc0 = 0;
      uRam0000000149891cc1 = 0;
      iRam0000000149891f04 = uStack_48._4_4_;
      iRam0000000149891f08 = iVar6;
      uRam0000000149891f0c = 1;
      return;
    }
    uVar12 = 0;
  }
  else {
    uVar12 = 1;
  }
  *puVar8 = &UNK_14654cc10;
  puVar8[1] = CONCAT44(uStack_4c,CONCAT22(uStack_4e,uStack_50));
  FUN_140004b40(0x149a434f0);
  iVar1 = iRam0000000149891c2c;
  if (_DAT_149a4353c == _DAT_149a43538) {
    uVar13 = 1;
    if (1 < _DAT_149a4353c) {
      uVar13 = _DAT_149a4353c >> 1;
    }
    FUN_145895b30(&DAT_149a43538,uVar13 + _DAT_149a4353c);
  }
  lVar2 = _DAT_149a43548;
  lVar10 = (ulonglong)_DAT_149a43544 * 0x10;
  *(undefined8 **)(_DAT_149a43548 + lVar10) = puVar8;
  *(int *)(lVar2 + 8 + lVar10) = iVar1;
  *(undefined1 *)(lVar2 + 0xc + lVar10) = uVar12;
  uVar13 = 0;
  if (_DAT_149a43538 <= _DAT_149a43544 + 1) {
    uVar13 = _DAT_149a43538;
  }
  _DAT_149a43544 = (_DAT_149a43544 + 1) - uVar13;
  _DAT_149a4353c = _DAT_149a4353c + 1;
  func_0x000144d9dab0();
  uRam0000000149891cc0 = 0;
  uRam0000000149891cc1 = 0;
  iRam0000000149891f04 = uStack_48._4_4_;
  iRam0000000149891f08 = iVar6;
  uRam0000000149891f0c = 1;
  return;
}

