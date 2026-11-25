// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14036b6e0  size: 2125 bytes
// Name:    grmShaderFactory::GetInstance
// Subsystem: renderer
// Class:   grmShaderFactory
//
// Evidence:
//   GTAVSRC: grmShaderFactory::GetInstance  (game/renderer/Deferred/DeferredLighting.cpp)
//   literal: deferred_lighting
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141d40f90, FUN_141adcc20, FUN_140793a90, FUN_141d53050, FUN_1406eb740, FUN_145bebfa0, FUN_144e683c0, FUN_1424e8480, FUN_1408e8930, FUN_144e682e0, FUN_145eb3f50, FUN_1406ebaa0, FUN_145eb3ec0, FUN_140b69420, FUN_1413b86f0, FUN_1424e8310
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/grmShaderFactory.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void grmShaderFactory__GetInstance(void)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined1 (*pauVar4) [32];
  byte bVar5;
  char cVar6;
  undefined1 (*pauVar7) [32];
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  undefined4 *puVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  int iVar19;
  uint *puVar20;
  uint *puVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [32];
  undefined1 auVar24 [64];
  undefined8 in_stack_fffffffffffffd20;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined8 uStack_2a4;
  undefined4 uStack_29c;
  undefined1 aauStack_298 [2] [16];
  undefined8 uStack_278;
  undefined1 (*pauStack_258) [16];
  undefined8 uStack_250;
  char cStack_248;
  undefined1 auStack_247 [12];
  undefined3 uStack_23b;
  undefined5 uStack_238;
  undefined3 uStack_233;
  
  uVar25 = (undefined4)((ulonglong)in_stack_fffffffffffffd20 >> 0x20);
  if (_DAT_14a922f40 != 0) {
    if ((*(char *)(_DAT_14a922f40 + 0x20) == '\x01') && (*(char *)(_DAT_14a922f40 + 0x21) != '\x01')
       ) {
      iVar11 = *(int *)(_DAT_14a922f40 + 0x14) + -1;
      if (-1 < iVar11) {
        iVar19 = 0;
        do {
          uVar16 = (uint)(iVar19 + iVar11) >> 1;
          uVar17 = (ulonglong)
                   *(uint *)(*(longlong *)(_DAT_14a922f40 + 0x18) + (ulonglong)uVar16 * 4);
          uVar9 = _DAT_14ab83ec0 + uVar17;
          if (uVar17 != 0) {
            uVar17 = uVar9;
          }
          if (*(uint *)(uVar17 + 0x20) == 0xb17395df) goto LAB_14036b7a9;
          if (*(uint *)(uVar17 + 0x20) < 0xb17395e0) {
            iVar19 = uVar16 + 1;
          }
          else {
            iVar11 = uVar16 - 1;
          }
        } while (iVar19 <= iVar11);
      }
    }
    else if ((ulonglong)*(uint *)(_DAT_14a922f40 + 0x14) != 0) {
      lVar15 = 0;
      do {
        uVar17 = (ulonglong)*(uint *)(*(longlong *)(_DAT_14a922f40 + 0x18) + lVar15);
        uVar9 = _DAT_14ab83ec0 + uVar17;
        if (uVar17 != 0) {
          uVar17 = uVar9;
        }
        if (*(int *)(uVar17 + 0x20) == -0x4e8c6a21) goto LAB_14036b7a9;
        lVar15 = lVar15 + 4;
      } while ((ulonglong)*(uint *)(_DAT_14a922f40 + 0x14) << 2 != lVar15);
    }
  }
LAB_14036b7bc:
  _DAT_14763b948 = FUN_1408e8930(0xf03f33ba,3);
  FUN_145bebfa0(&pauStack_258);
  func_0x000145f40560(0x14763b5b0,&pauStack_258,0x200);
  auVar24 = ZEXT1264(ZEXT812(0));
  cStack_248 = 0;
  auStack_247[0xb] = 0;
  auStack_247._0_11_ = SUB1211(ZEXT812(0),1);
  uStack_23b = 0;
  uStack_238 = 0;
  pauStack_258 = (undefined1 (*) [16])0x14763b5b0;
  uStack_250 = 0x200;
  FUN_140b69420(0x14763b570,0x20,0x10,0,&pauStack_258,CONCAT44(uVar25,0x104),0);
  lVar15 = FUN_141adcc20(&UNK_146780edb,0);
  _DAT_14763b938 = lVar15;
  bVar5 = func_0x000144f28cd0(*(undefined8 *)(lVar15 + 0xc80),*(undefined2 *)(lVar15 + 0xcf8),
                              0xf7dde412);
  if (bVar5 == 0xff) {
    _DAT_14763b800 = 0;
  }
  else {
    _DAT_14763b800 =
         *(undefined8 *)
          (*(longlong *)(lVar15 + 0xc60) +
          (ulonglong)
          *(byte *)(*(longlong *)(lVar15 + 0xc70) + 5 +
                   (ulonglong)
                   (*(uint *)(*(longlong *)(lVar15 + 0xc68) + (ulonglong)bVar5 * 4) >> 0xf & 0x1ff)
                   * 0x18) * 8);
  }
  _DAT_14763b908 = FUN_1408e8930(0x943726a5,1);
  _DAT_14763b90a = FUN_1408e8930(0x87796932,3);
  lVar15 = func_0x000144f97130(0x78);
  func_0x000141c86e30(lVar15);
  uVar26 = 0;
  _DAT_14763b900 = lVar15;
  *(undefined1 (*) [32])(lVar15 + 0x58) = ZEXT1232(ZEXT812(0));
  auVar24 = ZEXT1664(auVar24._0_16_);
  FUN_141d40f90(lVar15,0,1,4,2,0,2,0xff,0x29,0);
  uVar25 = 0;
  uVar9 = CONCAT44(uVar26,0x104);
  FUN_140b69420(0x14763b7b0,1,0x10,0,0,uVar9,0);
  DAT_1468a94aa =
       func_0x000144f28cd0(*(undefined8 *)(_DAT_14763b938 + 0xc80),
                           *(undefined2 *)(_DAT_14763b938 + 0xcf8),0x7019a3e2);
  _DAT_14763b924 = FUN_1408e8930(0xce100247,3);
  _DAT_14763b930 = FUN_1408e8930(0xc7ad6092,1);
  pauStack_258 = aauStack_298;
  uStack_250 = 0x10;
  aauStack_298[0] = auVar24._0_16_;
  cStack_248 = auVar24[0];
  auStack_247 = auVar24._1_12_;
  uStack_23b = 0;
  uStack_238 = 0;
  _DAT_14763b940 =
       FUN_1406ebaa0(1,0x10,1,&pauStack_258,CONCAT44(uVar25,0x188),uVar9 & 0xffffffffffffff00,0x2d,0
                     ,0);
  uStack_2a4 = 0xffffffff00000000;
  uStack_29c = 0;
  _DAT_14763b928 = FUN_1406eb740(_DAT_14763b940,&uStack_2a4,_DAT_14763b928);
  uVar9 = (ulonglong)_DAT_14763b524;
  pauVar7 = _DAT_14763b528;
  if (_DAT_14763b524 < 0x40) {
    if (_DAT_14763b520 < 0x40) {
      pauVar7 = (undefined1 (*) [32])func_0x000144d9c140(4,0x100);
      pauVar4 = _DAT_14763b528;
      uVar9 = (ulonglong)_DAT_14763b524;
      if (uVar9 != 0) {
        func_0x000145f40560(pauVar7,_DAT_14763b528,uVar9 * 4);
      }
      if (pauVar4 != (undefined1 (*) [32])0x0) {
        func_0x000144d9c130(pauVar4);
        uVar9 = (ulonglong)_DAT_14763b524;
      }
      _DAT_14763b520 = 0x40;
      _DAT_14763b528 = pauVar7;
      if ((int)uVar9 == 0x40) goto LAB_14036bab9;
    }
    pauVar7 = _DAT_14763b528;
    func_0x000145f40580(*_DAT_14763b528 + uVar9 * 4,0,uVar9 * -4 + 0x100);
  }
LAB_14036bab9:
  auVar22._0_12_ = ZEXT812(0);
  auVar22._12_4_ = 0;
  _DAT_14763b524 = 0x40;
  pauVar7[7] = ZEXT1632(auVar22);
  pauVar7[6] = ZEXT1632(auVar22);
  auVar23 = ZEXT1632(auVar22);
  pauVar7[5] = auVar23;
  pauVar7[4] = auVar23;
  pauVar7[3] = auVar23;
  pauVar7[2] = auVar23;
  pauVar7[1] = ZEXT1632(auVar22);
  *pauVar7 = ZEXT1632(auVar22);
  if ((uint)(_DAT_14763b510 * 0x570) < 0x1900) {
    FUN_1424e8310(&DAT_14763b510,0x40);
  }
  lVar15 = FUN_145eb3ec0();
  if ((ulonglong)*(uint *)(lVar15 + 4) != 0) {
    puVar21 = *(uint **)(lVar15 + 8);
    puVar1 = puVar21 + *(uint *)(lVar15 + 4);
    do {
      lVar15 = _DAT_14ab83ec0 + (ulonglong)*puVar21;
      if ((ulonglong)*puVar21 == 0) {
        lVar15 = 0;
      }
      func_0x00014500f370(&pauStack_258);
      cVar6 = FUN_144e682e0(lVar15,&pauStack_258);
      if (cVar6 != '\0') {
        lVar15 = func_0x00014014b530(CONCAT35(uStack_233,uStack_238));
        if (_DAT_1493f35a0 != 0 && (ulonglong)*(uint *)(lVar15 + 0x34) != 0) {
          puVar20 = *(uint **)(lVar15 + 0x38);
          puVar2 = puVar20 + *(uint *)(lVar15 + 0x34);
LAB_14036bdd8:
          if ((_DAT_1493f35a0 != 0) && (uVar16 = *puVar20, uVar16 != 0)) {
            if ((*(char *)(_DAT_1493f35a0 + 0x20) == '\x01') &&
               (*(char *)(_DAT_1493f35a0 + 0x21) != '\x01')) {
              iVar11 = *(int *)(_DAT_1493f35a0 + 0x14) + -1;
              if (-1 < iVar11) {
                iVar19 = 0;
                do {
                  uVar18 = (uint)(iVar19 + iVar11) >> 1;
                  uVar17 = (ulonglong)
                           *(uint *)(*(longlong *)(_DAT_1493f35a0 + 0x18) + (ulonglong)uVar18 * 4);
                  uVar9 = _DAT_14ab83ec0 + uVar17;
                  if (uVar17 != 0) {
                    uVar17 = uVar9;
                  }
                  if (*(uint *)(uVar17 + 0x20) == uVar16) goto LAB_14036be85;
                  if (*(uint *)(uVar17 + 0x20) < uVar16) {
                    iVar19 = uVar18 + 1;
                  }
                  else {
                    iVar11 = uVar18 - 1;
                  }
                } while (iVar19 <= iVar11);
              }
            }
            else if ((ulonglong)*(uint *)(_DAT_1493f35a0 + 0x14) != 0) {
              lVar15 = 0;
              do {
                uVar17 = (ulonglong)*(uint *)(*(longlong *)(_DAT_1493f35a0 + 0x18) + lVar15);
                uVar9 = _DAT_14ab83ec0 + uVar17;
                if (uVar17 != 0) {
                  uVar17 = uVar9;
                }
                if (*(uint *)(uVar17 + 0x20) == uVar16) goto LAB_14036be85;
                lVar15 = lVar15 + 4;
              } while ((ulonglong)*(uint *)(_DAT_1493f35a0 + 0x14) << 2 != lVar15);
            }
          }
          goto LAB_14036bebc;
        }
      }
LAB_14036bdc2:
      puVar21 = puVar21 + 1;
    } while (puVar21 != puVar1);
  }
  if (_DAT_14763b540 < 0x800) {
    lVar8 = func_0x000144d9c140(4,0x2000);
    lVar15 = _DAT_14763b548;
    if ((ulonglong)_DAT_14763b544 != 0) {
      func_0x000145f40560(lVar8,_DAT_14763b548,(ulonglong)_DAT_14763b544 << 2);
    }
    if (lVar15 != 0) {
      func_0x000144d9c130(lVar15);
    }
    _DAT_14763b540 = 0x800;
    _DAT_14763b548 = lVar8;
  }
  if ((uint)(_DAT_14763b530 * 0x570) < 0x32000) {
    FUN_140793a90(&DAT_14763b530,0x800);
  }
  lVar15 = FUN_145eb3f50();
  uVar16 = *(uint *)(lVar15 + 4);
  if ((ulonglong)uVar16 != 0) {
    lVar15 = *(longlong *)(lVar15 + 8);
    lVar8 = 0;
    do {
      uVar9 = (ulonglong)*(uint *)(lVar15 + lVar8);
      lVar12 = _DAT_14ab83ec0 + uVar9;
      if (uVar9 == 0) {
        lVar12 = 0;
      }
      if (*(longlong *)(lVar12 + 0x28) != 0) {
        uVar3 = *(undefined8 *)(*(longlong *)(lVar12 + 0x28) + 0x10);
        lVar10 = func_0x000140310f00(uVar3);
        if ((*(int *)(lVar10 + 4) != 0) &&
           (lVar10 = func_0x0001450e7610(uVar3), *(int *)(lVar10 + 4) != 0)) {
          uVar18 = _DAT_14763b534;
          if (0x7fe < _DAT_14763b534) {
            uVar18 = 0x7ff;
          }
          puVar13 = (undefined4 *)(lVar12 + 0x20);
          FUN_1413b86f0(&DAT_14763b530,&pauStack_258,puVar13);
          if (cStack_248 == '\x01') {
            *(undefined4 *)
             (pauStack_258[(ulonglong)(uStack_250._4_4_ >> 4) * 9 + 1] +
             (ulonglong)(uStack_250._4_4_ & 0xf) * 8) = *puVar13;
          }
          *(short *)(pauStack_258[(ulonglong)(uStack_250._4_4_ >> 4) * 9 + 1] +
                    (ulonglong)(uStack_250._4_4_ & 0xf) * 8 + 4) = (short)uVar18;
          uVar18 = _DAT_14763b544;
          uVar14 = _DAT_14763b540;
          lVar12 = _DAT_14763b548;
          if (_DAT_14763b544 == _DAT_14763b540) {
            uVar14 = _DAT_14763b544 >> 1;
            if (_DAT_14763b544 < 2) {
              uVar14 = 1;
            }
            uVar14 = uVar14 + _DAT_14763b544;
            lVar12 = func_0x000144d9c140(4,(ulonglong)uVar14 * 4);
            lVar10 = _DAT_14763b548;
            uVar18 = _DAT_14763b544;
            if ((ulonglong)_DAT_14763b544 != 0) {
              func_0x000145f40560(lVar12,_DAT_14763b548,(ulonglong)_DAT_14763b544 * 4);
            }
            if (lVar10 != 0) {
              func_0x000144d9c130(lVar10);
              uVar18 = _DAT_14763b544;
            }
          }
          _DAT_14763b548 = lVar12;
          _DAT_14763b540 = uVar14;
          _DAT_14763b544 = uVar18 + 1;
          *(undefined4 *)(_DAT_14763b548 + (ulonglong)uVar18 * 4) = *puVar13;
        }
      }
      lVar8 = lVar8 + 4;
    } while ((ulonglong)uVar16 << 2 != lVar8);
  }
  FUN_141d53050();
  return;
LAB_14036b7a9:
  if ((uVar9 != 0) && (*(char *)(uVar9 + 0x19) == '\x01')) {
    DAT_14763b94a = 1;
  }
  goto LAB_14036b7bc;
LAB_14036be85:
  if ((uVar9 != 0) && (*(char *)(uVar9 + 0x19) == '\x01')) {
    func_0x000145362d90(aauStack_298);
    cVar6 = FUN_144e683c0(aauStack_298,uVar9);
    if (cVar6 != '\0') {
      lVar15 = func_0x0001453633d0(uStack_278);
      FUN_1424e8480(*(undefined4 *)(lVar15 + 0x10));
    }
  }
LAB_14036bebc:
  puVar20 = puVar20 + 1;
  if (puVar20 == puVar2) goto LAB_14036bdc2;
  goto LAB_14036bdd8;
}

