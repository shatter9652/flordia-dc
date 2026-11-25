// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400bcdf0  size: 1486 bytes
// Name:    FUN_1400bcdf0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ee55e0, FUN_144ea6770, FUN_1410a7830, FUN_14522f3a0, FUN_144fd9dd0, FUN_143b64650, FUN_143539890, FUN_145647140, FUN_144fd9d80, FUN_144ed5300, FUN_143b648e0, FUN_143b64ae0, FUN_1406dfaa0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400bcdf0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  code *pcVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  char cVar17;
  int iVar18;
  longlong lVar19;
  undefined8 uVar20;
  longlong *plVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  undefined8 *puVar25;
  uint uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined8 uVar31;
  undefined1 auVar30 [64];
  undefined8 unaff_XMM7_Qa;
  undefined8 unaff_XMM7_Qb;
  undefined1 auVar32 [64];
  longlong alStackX_8 [3];
  uint uStackX_24;
  undefined8 uStack_48;
  
  uStack_48 = 0x1400bce06;
  lVar19 = FUN_145647140();
  lVar19 = -lVar19;
  *(undefined8 *)(&stack0x00001260 + lVar19) = unaff_XMM7_Qa;
  *(undefined8 *)(&stack0x00001268 + lVar19) = unaff_XMM7_Qb;
  *(undefined8 *)(&stack0x00001250 + lVar19) = unaff_XMM6_Qa;
  *(undefined8 *)(&stack0x00001258 + lVar19) = unaff_XMM6_Qb;
  *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1400bce23;
  FUN_144ed5300();
  pcVar10 = *(code **)(*param_1 + 0x28);
  *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1400bce2c;
  cVar17 = (*pcVar10)(param_1);
  if (cVar17 != '\0') {
    if ((param_1[1] != 0) && (*(char *)(param_1[1] + 0x31) == '\x01')) {
      pcVar10 = *(code **)(*param_1 + 0x40);
      *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1400bce52;
      (*pcVar10)(param_1,_DAT_14abbef40);
      *(undefined8 *)(&stack0x000012b0 + lVar19) = *(undefined8 *)(&stack0x00001290 + lVar19);
      *(undefined8 *)(&stack0x000012a8 + lVar19) = *(undefined8 *)(&stack0x00001288 + lVar19);
      *(undefined8 *)(&stack0x000012a0 + lVar19) = *(undefined8 *)(&stack0x00001278 + lVar19);
      uVar22 = (ulonglong)*(uint *)((longlong)param_1 + 0x2c);
      if (uVar22 != 0) {
        lVar24 = param_1[6];
        lVar23 = lVar24 + uVar22 * 8;
        puVar25 = (undefined8 *)(lVar24 + -8 + uVar22 * 8);
        do {
          lVar11 = *(longlong *)(lVar23 + -8);
          if (lVar11 != 0) {
            uVar26 = *(int *)((longlong)param_1 + 0x2c) - 1;
            puVar1 = (undefined8 *)(lVar24 + (ulonglong)uVar26 * 8);
            if (puVar1 != puVar25) {
              *puVar25 = *puVar1;
              uVar26 = *(int *)((longlong)param_1 + 0x2c) - 1;
            }
            *(uint *)((longlong)param_1 + 0x2c) = uVar26;
            *(undefined **)(&stack0x00001278 + lVar19) = &UNK_144f4d163;
            func_0x0001400bd3c0(lVar11);
            lVar24 = param_1[6];
          }
          lVar23 = lVar23 + -8;
          puVar25 = puVar25 + -1;
        } while (lVar23 != lVar24);
      }
      *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
      return;
    }
    if ((ulonglong)*(uint *)((longlong)param_1 + 0x2c) != 0) {
      lVar24 = (ulonglong)*(uint *)((longlong)param_1 + 0x2c) * 8 + param_1[6];
      lVar23 = lVar24;
      do {
        uVar20 = *(undefined8 *)(lVar23 + -8);
        *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1400bcea2;
        iVar18 = FUN_144ee55e0(uVar20);
        if (iVar18 != 7) {
          *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1400bceb2;
          func_0x000140072350(param_1,lVar24);
          *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1400bceba;
          func_0x0001400bd3c0(uVar20);
        }
        lVar23 = lVar23 + -8;
        lVar24 = lVar24 + -8;
      } while (lVar23 != param_1[6]);
      if (*(int *)((longlong)param_1 + 0x2c) != 0) goto LAB_1400bd2b9;
    }
    if (_DAT_149275080 != 0) {
      *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1400bcee8;
      FUN_143b64650(param_1);
      if (*(int *)((longlong)param_1 + 0xa4) != 0) {
        auVar28._4_4_ = _DAT_14615dd3c;
        auVar28._0_4_ = _DAT_14615dd3c;
        auVar28._8_4_ = _DAT_14615dd3c;
        auVar28._12_4_ = _DAT_14615dd3c;
        auVar27._8_8_ = 0;
        auVar27._0_8_ = param_1[2];
        auVar27 = vpslld_avx(auVar27,5);
        auVar12._0_4_ = auVar27._0_4_ + _DAT_14615c460;
        auVar12._4_4_ = auVar27._4_4_ + _DAT_14615c460;
        auVar12._8_4_ = auVar27._8_4_ + _DAT_14615c460;
        auVar12._12_4_ = auVar27._12_4_ + _DAT_14615c460;
        auVar27 = vcvtdq2ps_avx(auVar27);
        auVar12 = vcvtdq2ps_avx(auVar12);
        auVar12 = vblendps_avx(auVar28,auVar12,3);
        auVar30 = ZEXT1664(auVar12);
        auVar29._4_4_ = _DAT_14615dd38;
        auVar29._0_4_ = _DAT_14615dd38;
        auVar29._8_4_ = _DAT_14615dd38;
        auVar29._12_4_ = _DAT_14615dd38;
        auVar27 = vblendps_avx(auVar29,auVar27,3);
        auVar32 = ZEXT1664(auVar27);
        *(undefined1 (*) [16])(&stack0x000000a0 + lVar19) = auVar27;
        *(undefined1 (*) [16])(&stack0x00000090 + lVar19) = auVar12;
        *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1400bcf57;
        cVar17 = FUN_14522f3a0(_DAT_14ab7f678);
        if (cVar17 == '\0') {
          *(undefined1 (*) [16])(&stack0x000000c0 + lVar19) = auVar30._0_16_;
          *(undefined1 (*) [16])(&stack0x000000b0 + lVar19) = auVar32._0_16_;
          *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1400bd316;
          FUN_143539890(_DAT_14ab7f678);
        }
        else {
          *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1400bcf7c;
          func_0x000145f40560(&stack0x000000d0 + lVar19,0x14926e8a0,0xcc);
          *(undefined8 *)(&stack0x000001a0 + lVar19) = _DAT_14926e970;
          *(undefined8 *)(&stack0x000001a8 + lVar19) = uRam000000014926e978;
          *(undefined8 *)(&stack0x000001b0 + lVar19) = _DAT_14926e980;
          *(undefined8 *)(&stack0x000001b8 + lVar19) = uRam000000014926e988;
          *(undefined4 *)(&stack0x000001e0 + lVar19) = _DAT_14926e9b0;
          *(undefined8 *)(&stack0x000001c0 + lVar19) = _DAT_14926e990;
          *(undefined8 *)(&stack0x000001c8 + lVar19) = uRam000000014926e998;
          *(undefined8 *)(&stack0x000001d0 + lVar19) = uRam000000014926e9a0;
          *(undefined8 *)(&stack0x000001d8 + lVar19) = uRam000000014926e9a8;
          *(undefined8 *)(&stack0x000001f0 + lVar19) = _DAT_14926e9c0;
          *(undefined4 *)(&stack0x000001f8 + lVar19) = _DAT_14926e9c8;
          *(undefined8 *)(&stack0x00000220 + lVar19) = _DAT_14926e9f0;
          *(undefined8 *)(&stack0x00000228 + lVar19) = uRam000000014926e9f8;
          *(undefined1 (*) [16])(&stack0x00000200 + lVar19) = auVar32._0_16_;
          *(undefined1 (*) [16])(&stack0x00000210 + lVar19) = auVar30._0_16_;
          (&stack0x00000220)[lVar19] = 1;
          *(longlong **)(&stack0x00000228 + lVar19) = param_1;
          *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1400bd00b;
          func_0x0001455b33c0(&stack0x000000d0 + lVar19);
          *(uint *)((longlong)&uStackX_24 + lVar19) = (uint)_DAT_149271d00;
          lVar23 = 0x20;
          do {
            *(undefined4 *)(&stack0x00000230 + lVar23 + lVar19) = 0xffffffff;
            lVar23 = lVar23 + 0x20;
          } while (lVar23 != 0x1020);
          *(undefined4 *)(&stack0x00001244 + lVar19) = 0;
          *(undefined8 *)(&stack0x00000230 + lVar19) = 0xffffffff00000000;
          *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1400bd054;
          uVar20 = func_0x00014023cb90();
          *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1400bd064;
          FUN_144fd9dd0(&stack0x00000028 + lVar19,uVar20);
          *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1400bd073;
          uVar20 = func_0x000144d9c140(4,0x80);
          *(undefined8 *)(&stack0x00001248 + lVar19) = uVar20;
          *(undefined4 *)(&stack0x00001240 + lVar19) = 0x20;
          *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1400bd08c;
          FUN_144fd9d80(*(undefined8 *)(&stack0x00000028 + lVar19));
          *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1400bd0aa;
          FUN_144ea6770(_DAT_14ab7f678,&stack0x000000d0 + lVar19,&stack0x00000230 + lVar19,
                        param_1 + 0x16);
          *(undefined4 *)((longlong)param_1 + 0x1c4) = 0;
          uVar26 = *(uint *)(&stack0x00001244 + lVar19);
          if ((ulonglong)uVar26 != 0) {
            uVar20 = *(undefined8 *)(&stack0x00001248 + lVar19);
            lVar23 = (ulonglong)uVar26 << 2;
            if (*(uint *)(param_1 + 0x38) < uVar26) {
              lVar24 = param_1[0x39];
              if (lVar24 != 0) {
                *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1400bd3b6;
                func_0x000144d9c130(lVar24,uVar20);
              }
              param_1[0x39] = 0;
              *(undefined4 *)(param_1 + 0x38) = 0;
              *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1400bd391;
              lVar24 = func_0x000144d9c140(4,lVar23);
              param_1[0x39] = lVar24;
              if (lVar24 == 0) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              *(uint *)(param_1 + 0x38) = uVar26;
            }
            lVar24 = param_1[0x39];
            *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1400bd0e2;
            func_0x000145f40560(lVar24,uVar20,lVar23);
            *(uint *)((longlong)param_1 + 0x1c4) = uVar26;
          }
          uVar26 = *(uint *)(&stack0x00000230 + lVar19);
          if (*(uint *)(param_1 + 5) < uVar26) {
            *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1400bd108;
            lVar23 = func_0x000144d9c140(8,(ulonglong)uVar26 * 8);
            uVar3 = *(uint *)((longlong)param_1 + 0x2c);
            if ((ulonglong)uVar3 != 0) {
              lVar24 = param_1[6];
              *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1400bd124;
              func_0x000145f40560(lVar23,lVar24,(ulonglong)uVar3 << 3);
            }
            if (param_1[6] != 0) {
              *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1400bd132;
              func_0x000144d9c130();
            }
            param_1[6] = lVar23;
            *(uint *)(param_1 + 5) = uVar26;
          }
          *(undefined4 *)(&stack0x00000070 + lVar19) = 0xffffffff;
          if (0 < (int)uVar26) {
            lVar23 = 0;
            auVar30 = ZEXT1264(ZEXT812(0));
            uVar20 = _DAT_14615b0b0;
            uVar31 = _UNK_14615b0b8;
            do {
              puVar25 = (undefined8 *)(&stack0x00000240 + lVar23 + lVar19);
              uVar13 = *puVar25;
              uVar14 = puVar25[1];
              uVar15 = puVar25[2];
              uVar16 = puVar25[3];
              *(undefined1 **)(&stack0x00000028 + lVar19) = &stack0x00000060 + lVar19;
              *(undefined8 *)(&stack0x00000060 + lVar19) = uVar13;
              *(undefined8 *)(&stack0x00000068 + lVar19) = uVar14;
              *(undefined8 *)(&stack0x00000070 + lVar19) = uVar15;
              *(undefined8 *)(&stack0x00000078 + lVar19) = uVar16;
              *(undefined4 *)(&stack0x00000030 + lVar19) =
                   *(undefined4 *)(&stack0x0000006c + lVar19);
              *(undefined8 *)(&stack0x00000034 + lVar19) = uVar20;
              *(undefined8 *)(&stack0x0000003c + lVar19) = uVar31;
              (&stack0x00000044)[lVar19] = 0;
              *(undefined1 (*) [16])(&stack0x00000048 + lVar19) = auVar30._0_16_;
              uVar4 = *(undefined4 *)((longlong)param_1 + 0xa4);
              lVar24 = param_1[0x15];
              auVar30 = ZEXT1664(auVar30._0_16_);
              *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1400bd1ca;
              cVar17 = FUN_143b648e0(uVar4,lVar24,&stack0x00000028 + lVar19);
              if (cVar17 != '\0') {
                uVar13 = *(undefined8 *)(&stack0x00000048 + lVar19);
                uVar14 = *(undefined8 *)(&stack0x00000050 + lVar19);
                uVar4 = *(undefined4 *)(&stack0x00000030 + lVar19);
                uVar5 = *(undefined4 *)(&stack0x0000003c + lVar19);
                uVar6 = *(undefined4 *)(&stack0x00000038 + lVar19);
                uVar2 = (&stack0x00000044)[lVar19];
                uVar7 = *(undefined4 *)(&stack0x00000034 + lVar19);
                uVar8 = *(undefined4 *)(&stack0x00000040 + lVar19);
                uVar9 = *(undefined4 *)(&stack0x00000074 + lVar19);
                *(undefined8 *)(&stack0x00000080 + lVar19) =
                     *(undefined8 *)(&stack0x00000060 + lVar19);
                *(undefined8 *)(&stack0x00000088 + lVar19) =
                     *(undefined8 *)(&stack0x00000068 + lVar19);
                *(undefined1 **)((longlong)alStackX_8 + lVar19 + 0x10) = &stack0x00000070 + lVar19;
                *(undefined8 *)((longlong)alStackX_8 + lVar19) = uVar13;
                *(undefined8 *)((longlong)alStackX_8 + lVar19 + 8) = uVar14;
                *(undefined4 *)(&stack0xfffffffffffffff8 + lVar19) = uVar5;
                *(undefined4 *)(&stack0xfffffffffffffff0 + lVar19) = uVar6;
                (&stack0x00000000)[lVar19] = uVar2;
                *(undefined4 *)(&stack0xffffffffffffffe8 + lVar19) = uVar7;
                *(undefined4 *)(&stack0xffffffffffffffe0 + lVar19) = uVar8;
                *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1400bd250;
                plVar21 = (longlong *)FUN_143b64ae0(param_1,&stack0x00000080 + lVar19,uVar4,uVar9);
                if (plVar21 != (longlong *)0x0) {
                  *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1400bd25d;
                  func_0x000140ba3750();
                  *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1400bd271;
                  cVar17 = FUN_1410a7830(*(undefined4 *)((longlong)&uStackX_24 + lVar19),
                                         &stack0x000000d0 + lVar19,&stack0x00000060 + lVar19);
                  if (cVar17 != '\0') {
                    pcVar10 = *(code **)(*plVar21 + 0x58);
                    *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1400bd283;
                    cVar17 = (*pcVar10)(plVar21);
                    if (cVar17 != '\0') {
                      *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1400bd290;
                      func_0x000140ba3760();
                      *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1400bd29b;
                      FUN_1406dfaa0(param_1,plVar21);
                      goto LAB_1400bd29b;
                    }
                  }
                  *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1400bd320;
                  func_0x0001400bd3c0(plVar21);
                  *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1400bd325;
                  func_0x000140ba3760();
                  goto LAB_1400bd325;
                }
                break;
              }
LAB_1400bd29b:
              lVar23 = lVar23 + 0x20;
            } while ((ulonglong)uVar26 << 5 != lVar23);
          }
          pcVar10 = *(code **)(*param_1 + 0x40);
          *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1400bd2b7;
          (*pcVar10)(param_1,_DAT_14abbef40);
LAB_1400bd325:
          if (*(longlong *)(&stack0x00001248 + lVar19) != 0) {
            *(undefined8 *)((longlong)&uStack_48 + lVar19) = 0x1400bd337;
            func_0x000144d9c130();
          }
        }
        return;
      }
    }
  }
LAB_1400bd2b9:
                    /* WARNING: Could not recover jumptable at 0x0001400bd2ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1,_DAT_14abbef40);
  return;
}

