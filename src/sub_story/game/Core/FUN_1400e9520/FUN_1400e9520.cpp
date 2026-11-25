// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400e9520  size: 1663 bytes
// Name:    FUN_1400e9520
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1414b2b40, FUN_1409db960, FUN_1400e8c30, FUN_1400063f0, FUN_1409daae0, FUN_1400e8f70, FUN_1409dad30, FUN_144e51f40, FUN_1454bd9c0, FUN_144e4f4b0, FUN_14444bd20, FUN_14501e9e0, FUN_1409d9750, FUN_14444bd50, FUN_142576ce0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1400e9520(longlong param_1,uint param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined4 uVar8;
  char cVar9;
  ushort uVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint *puVar17;
  longlong lVar18;
  short sVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined8 unaff_RBP;
  undefined7 uVar23;
  uint uVar24;
  undefined2 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  uint *puVar28;
  ulonglong uVar29;
  longlong lVar30;
  longlong unaff_GS_OFFSET;
  bool bVar31;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  ulonglong uStack_450;
  undefined8 auStack_448 [4];
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined1 uStack_48;
  
  uVar24 = param_2 & 0xfffffff;
  if (uVar24 == 0xfffffff) {
    uVar14 = 0;
  }
  else {
    cVar9 = FUN_144e51f40(param_2);
    uVar23 = (undefined7)((ulonglong)unaff_RBP >> 8);
    uVar14 = CONCAT71(uVar23,1);
    if (cVar9 != '\0') {
      FUN_1400e8f70(&uStack_4b8,3);
      uVar14 = CONCAT71(uVar23,1);
      lVar30 = (ulonglong)(uVar24 % 0x1f7) * 0xa0;
      lVar18 = param_1 + 0x20 + lVar30;
      lVar11 = (ulonglong)*(uint *)(param_1 + 0x14) * 0x10;
      uVar15 = (ulonglong)*(uint *)(lVar11 + 4 + lVar18);
      if (uVar15 != 0) {
        puVar28 = *(uint **)(lVar11 + 8 + lVar18);
        lVar11 = uVar15 * 0x1c;
        while ((*puVar28 & 0xfffffff) == 0xfffffff || uVar24 != (*puVar28 & 0xfffffff)) {
          puVar28 = puVar28 + 7;
          lVar11 = lVar11 + -0x1c;
          if (lVar11 == 0) goto LAB_1400e9611;
        }
        uVar10 = *(ushort *)((longlong)puVar28 + 0x1a) >> 5 & 0xf;
        if ((((uVar10 < 5) && ((ushort)(((byte)puVar28[6] & 1) + 3) <= uVar10)) ||
            ((short)puVar28[5] != 0)) || ((short)puVar28[3] != 0)) {
LAB_1400e960f:
          uVar14 = 0;
          goto LAB_1400e9611;
        }
        uVar14 = CONCAT71(uVar23,*(undefined1 *)((longlong)puVar28 + 0x16));
        plVar12 = (longlong *)func_0x000144e4f4e0(uVar14 & 0xffffffff);
        FUN_144e4f4b0(*puVar28,uVar14 & 0xffffffff);
        uVar8 = (undefined4)uStack_450;
        uVar10 = *(ushort *)((longlong)puVar28 + 0x1a);
        uVar20 = (uint)uVar10;
        if ((*(byte *)((longlong)puVar28 + 0x19) & 0xf1) != 0) {
          func_0x0001400e8c20(puVar28,0xf1);
          uVar10 = *(ushort *)((longlong)puVar28 + 0x1a);
        }
        uVar21 = uVar20 & 0x1f;
        if (((uVar10 & 0x1e0) == 0xa0) &&
           ((*(uint *)(*(longlong *)(param_1 + 0x16850) + (ulonglong)(uVar24 >> 5) * 4) >>
             (param_2 & 0x1f) & 1) == 0)) {
          if ((puVar28[6] & 0x20) == 0) goto LAB_1400e960f;
          func_0x0001425768c0(param_1,puVar28);
          if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) == '\x01') {
            uVar13 = *(undefined8 *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1438);
          }
          else {
            lVar11 = **(longlong **)(unaff_GS_OFFSET + 0x58);
            *(undefined1 *)(lVar11 + 0x1440) = 1;
            uVar13 = FUN_1400063f0();
            *(undefined8 *)(lVar11 + 0x1438) = uVar13;
          }
          *(undefined8 *)(param_1 + 8) = uVar13;
          FUN_1409d9750(param_1,uVar21);
          *(undefined8 *)(param_1 + 8) = 0;
        }
        uStack_450 = 0x80;
        uStack_48 = 0;
        FUN_1414b2b40(&uStack_450,puVar28);
        uVar22 = *(ushort *)((longlong)puVar28 + 0x1a) & 0x1e0;
        uVar14 = (ulonglong)uVar22;
        sVar19 = (short)uVar22;
        if (sVar19 != 0xa0) {
          FUN_142576ce0(puVar28);
        }
        uVar29 = (ulonglong)(uVar24 / 0x3ee0);
        bVar4 = (byte)(uVar24 / 0x1f7) & 0x1f;
        LOCK();
        puVar17 = (uint *)(*(longlong *)(param_1 + 0x68 + lVar30) + uVar29 * 4);
        *puVar17 = *puVar17 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
        UNLOCK();
        uVar15 = uStack_450 >> 0x20;
        if (uVar15 != 0) {
          uVar29 = 0;
          do {
            func_0x0001454bde90(*(undefined8 *)((longlong)auStack_448 + uVar29),1);
            uVar29 = uVar29 + 8;
          } while (uVar15 << 3 != uVar29);
        }
        uVar22 = puVar28[6];
        uVar15 = CONCAT71((int7)(uVar29 >> 8),(byte)uVar22);
        lVar11 = func_0x000144d9e070((short)puVar28[4],uVar15 & 0xffffffff);
        bVar31 = true;
        if (lVar11 == 0) {
          lVar11 = func_0x000144d9e090(*(undefined2 *)((longlong)puVar28 + 0x12),uVar15 & 0xffffffff
                                      );
          bVar31 = lVar11 != 0;
        }
        if (((byte)uVar22 & 0x40) != 0) {
          lVar11 = *(longlong *)(lVar18 + 0x90);
          uVar15 = (ulonglong)*(uint *)(lVar18 + 0x8c);
          lVar30 = lVar11;
          if (uVar15 != 0) {
            lVar2 = lVar11 + uVar15 * 0x28;
            lVar16 = uVar15 * 0x28;
            do {
              uVar22 = *(uint *)(lVar11 + 0x18) & 0xfffffff;
              lVar30 = lVar11;
              if (uVar22 != 0xfffffff && uVar24 == uVar22) break;
              lVar11 = lVar11 + 0x28;
              lVar16 = lVar16 + -0x28;
              lVar30 = lVar2;
            } while (lVar16 != 0);
          }
          FUN_14501e9e0(lVar30 + 8);
        }
        lVar11 = (ulonglong)*(uint *)(param_1 + 0x14) * 0x10;
        uVar24 = *(int *)(lVar18 + 4 + lVar11) - 1;
        puVar17 = (uint *)((ulonglong)uVar24 * 0x1c + *(longlong *)(lVar18 + 8 + lVar11));
        if (puVar17 != puVar28) {
          uVar13 = *(undefined8 *)puVar17;
          uVar5 = *(undefined8 *)(puVar17 + 2);
          uVar6 = *(undefined8 *)(puVar17 + 5);
          *(undefined8 *)(puVar28 + 3) = *(undefined8 *)(puVar17 + 3);
          *(undefined8 *)(puVar28 + 5) = uVar6;
          *(undefined8 *)puVar28 = uVar13;
          *(undefined8 *)(puVar28 + 2) = uVar5;
          uVar24 = *(int *)(lVar18 + lVar11 + 4) - 1;
        }
        *(uint *)(lVar18 + lVar11 + 4) = uVar24;
        FUN_1400e8c30(&uStack_4b8);
        if (sVar19 == 0xa0) {
          if (bVar31) {
            (**(code **)(*plVar12 + 0x70))(plVar12,&uStack_450,uVar8);
            uVar25 = (undefined2)(uStack_450 >> 0x10);
            uVar27 = (undefined1)uStack_450;
            uVar26 = (undefined1)(uStack_450 >> 8);
            uVar15 = uStack_450 >> 0x20;
            uStack_458 = uStack_3e8;
            uStack_4b8 = auStack_448[0];
            uStack_4b0 = auStack_448[1];
            uStack_4a8 = auStack_448[2];
            uStack_4a0 = auStack_448[3];
            uStack_498 = uStack_428;
            uStack_490 = uStack_420;
            uStack_488 = uStack_418;
            uStack_480 = uStack_410;
            uStack_478 = uStack_408;
            uStack_470 = uStack_400;
            uStack_468 = uStack_3f8;
            uStack_460 = uStack_3f0;
          }
          else {
            uVar15 = 0;
            uVar25 = 0;
            uVar26 = 0;
            uVar27 = 0;
          }
          uVar24 = uVar21 - 7;
          uVar14 = (ulonglong)uVar24;
          if ((short)uVar21 == 0xd) {
            uVar29 = (ulonglong)*(uint *)(param_1 + 0x168f0);
            if (uVar29 != 0) {
              lVar18 = 0;
              do {
                if (*(char *)(param_1 + 0x168f8 + lVar18) != '\0') goto LAB_1400e99c2;
                lVar18 = lVar18 + 8;
              } while (uVar29 * 8 - lVar18 != 0);
            }
            bVar7 = true;
            *(uint *)(param_1 + 0x168f0) = *(uint *)(param_1 + 0x168f0) + 1;
            FUN_1409dad30(param_1 + 0x168f4 + uVar29 * 8,0x20,CONCAT71((int7)(uVar15 >> 8),1));
            *(undefined1 *)(param_1 + 0x16914) = 0;
          }
          else {
            if (uVar24 < 2) {
              if (_DAT_14764b3f8 != 0) {
                (*(code *)*_DAT_146c5b050)();
              }
            }
            else if ((uVar20 & 0x1e) == 0xe) {
              FUN_14444bd20();
            }
LAB_1400e99c2:
            bVar7 = false;
          }
          uVar13 = (**(code **)(*plVar12 + 0x68))(plVar12,uVar8);
          (**(code **)(*plVar12 + 0x40))(plVar12,uVar8);
          (**(code **)(*plVar12 + 0x48))(plVar12,uVar13);
          if (uVar24 < 2) {
            if (_DAT_14764b3f8 != 0) {
              (*(code *)*_DAT_146c5b050)();
            }
          }
          else if ((uVar20 & 0x1e) == 0xe) {
            FUN_14444bd50();
          }
          if (param_3 == 0) {
            (**(code **)(*plVar12 + 0x50))(plVar12,uVar13);
            FUN_1454bd9c0(param_1,param_2,0);
          }
          if (bVar7) {
            uVar24 = *(int *)(param_1 + 0x168f0) - 1;
            *(uint *)(param_1 + 0x168f0) = uVar24;
            FUN_1409daae0(param_1 + 0x168f4 + (ulonglong)uVar24 * 8);
          }
          if (!(bool)(bVar31 ^ 1U | param_3 != 0)) {
            if (_DAT_147bc5d90 == 0) {
              pcVar3 = (code *)swi(3);
              uVar14 = (*pcVar3)();
              return uVar14;
            }
            lVar18 = FUN_1409db960(_DAT_147bc5d90,param_2,1);
            *(undefined1 *)(lVar18 + 8) = uVar27;
            *(undefined1 *)(lVar18 + 9) = uVar26;
            *(undefined2 *)(lVar18 + 10) = uVar25;
            *(int *)(lVar18 + 0xc) = (int)uVar15;
            *(undefined8 *)(lVar18 + 0x10) = uStack_4b8;
            *(undefined8 *)(lVar18 + 0x18) = uStack_4b0;
            *(undefined8 *)(lVar18 + 0x20) = uStack_4a8;
            *(undefined8 *)(lVar18 + 0x28) = uStack_4a0;
            *(undefined8 *)(lVar18 + 0x30) = uStack_498;
            *(undefined8 *)(lVar18 + 0x38) = uStack_490;
            *(undefined8 *)(lVar18 + 0x40) = uStack_488;
            *(undefined8 *)(lVar18 + 0x48) = uStack_480;
            *(undefined8 *)(lVar18 + 0x50) = uStack_478;
            *(undefined8 *)(lVar18 + 0x58) = uStack_470;
            *(undefined8 *)(lVar18 + 0x60) = uStack_468;
            *(undefined8 *)(lVar18 + 0x68) = uStack_460;
            *(undefined8 *)(lVar18 + 0x70) = uStack_458;
            *(undefined1 *)(lVar18 + 0xa0) = 3;
            if (_DAT_147bc5d90 == 0) {
              pcVar3 = (code *)swi(3);
              uVar14 = (*pcVar3)();
              return uVar14;
            }
            plVar12 = (longlong *)(_DAT_147bc5d90 + 0xb0);
            if (*(char *)(lVar18 + 0x89) == '\0') {
              plVar12 = (longlong *)(_DAT_147bc5d90 + 0x18);
            }
            lVar30 = *plVar12;
            uVar24 = *(uint *)(plVar12 + 1);
            LOCK();
            plVar1 = plVar12 + 0x12;
            lVar11 = *plVar1;
            *plVar1 = *plVar1 + 1;
            UNLOCK();
            *(longlong *)(lVar18 + 0x98) = lVar11;
            uVar24 = (uint)((ulonglong)(lVar18 - lVar30) / (ulonglong)uVar24);
            LOCK();
            puVar28 = (uint *)(plVar12[7] + (ulonglong)(uVar24 >> 5) * 4);
            *puVar28 = *puVar28 | 1 << (uVar24 & 0x1f);
            UNLOCK();
          }
        }
        else {
          (**(code **)(*plVar12 + 0x60))(plVar12,uVar8);
        }
        uVar14 = CONCAT71((int7)(uVar14 >> 8),1);
        goto LAB_1400e961b;
      }
LAB_1400e9611:
      FUN_1400e8c30(&uStack_4b8);
    }
  }
LAB_1400e961b:
  return uVar14 & 0xffffffff;
}

