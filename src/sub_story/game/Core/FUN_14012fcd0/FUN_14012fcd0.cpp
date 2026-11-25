// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14012fcd0  size: 778 bytes
// Name:    FUN_14012fcd0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f93d60, FUN_140130aa0, FUN_1401300c0, FUN_140130080, FUN_14012ffe0, FUN_142d9e5e0, FUN_140130470, FUN_140004b40, FUN_145024b40, FUN_144fde9e0, FUN_14057d240, FUN_1450caf90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14012fcd0(longlong param_1,undefined2 *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined2 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong unaff_GS_OFFSET;
  undefined *puStack_2a0;
  longlong lStack_298;
  undefined4 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 auStack_268 [32];
  undefined8 uStack_248;
  undefined8 uStack_240;
  float fStack_238;
  uint uStack_234;
  undefined1 uStack_230;
  undefined1 auStack_22c [12];
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 uStack_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 uStack_208;
  
  FUN_140004b40(0x1476d5b70);
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 == 0) {
    lVar7 = FUN_14012ffe0();
    if (lVar7 != 0) {
      FUN_14057d240(param_2,lVar7);
      goto LAB_14012fd1b;
    }
  }
  else if (param_3 != (undefined8 *)0x0) {
    lVar7 = func_0x000144fdec40(*param_3,*(undefined4 *)(param_3 + 1));
    if (lVar7 != 0) {
      lVar7 = func_0x0001409ecbc0(*(undefined4 *)(lVar7 + 0x9c));
      if (lVar7 != 0) {
        lVar7 = FUN_142d9e5e0(lVar7,param_3,iVar1);
        if (lVar7 != 0) {
          lVar9 = FUN_144f93d60(*(undefined4 *)(lVar7 + 0x24),*(undefined8 *)(lVar7 + 0x28),0x8a);
          if (lVar9 != 0) {
            FUN_140130470(lVar9,param_3,lVar7);
            FUN_140130080(param_2,lVar7);
            goto LAB_14012fd1b;
          }
        }
      }
    }
    FUN_144fde9e0(*param_3,*(undefined4 *)(param_3 + 1),&uStack_288);
    lStack_298 = 0;
    uStack_290 = 0;
    puStack_2a0 = &UNK_1466630b0;
    fStack_238 = *(float *)(param_1 + 0x40);
    auStack_268 = ZEXT1232(ZEXT812(0));
    uStack_248 = uStack_288;
    uStack_240 = uStack_280;
    uStack_234 = (uint)(0.0 < fStack_238);
    uStack_230 = 0;
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    auStack_22c = ZEXT812(0);
    uStack_210 = 0x6d;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_21c = 0x400;
    uStack_20c = 2;
    uStack_208 = _DAT_14ab773b8;
    FUN_145024b40(auStack_268,&puStack_2a0);
    if ((ulonglong)(ushort)uStack_290 != 0) {
      uStack_278 = uStack_288;
      uStack_270 = uStack_280;
      FUN_140130aa0(lStack_298,lStack_298 + (ulonglong)(ushort)uStack_290 * 8);
      lVar7 = lStack_298;
      if ((ushort)uStack_290 != 0) {
        uVar3 = (ulonglong)(ushort)uStack_290;
        lVar9 = 0;
        do {
          lVar2 = *(longlong *)(lVar7 + lVar9);
          if (lVar2 != 0) {
            lVar8 = FUN_144f93d60(*(undefined4 *)(lVar2 + 0x24),*(undefined8 *)(lVar2 + 0x28),0x8a);
            if (lVar8 != 0) {
              cVar5 = func_0x0001402f4220(*(undefined4 *)(lVar8 + 0xc),*(undefined8 *)(lVar8 + 0x10)
                                          ,*(undefined4 *)(param_1 + 0x3c));
              if (cVar5 != '\0') {
                cVar5 = FUN_1401300c0(lVar8,param_3);
                if (cVar5 != '\0') {
                  FUN_140130470(lVar8,param_3,lVar2);
                  FUN_140130080(param_2,lVar2);
                  if ((uStack_290._2_2_ != 0) && (lStack_298 != 0)) {
                    func_0x000144d9c130();
                  }
                  goto LAB_14012fd1b;
                }
              }
            }
          }
          lVar9 = lVar9 + 8;
        } while (uVar3 * 8 != lVar9);
      }
    }
    if ((uStack_290._2_2_ != 0) && (lStack_298 != 0)) {
      func_0x000144d9c130();
    }
  }
  lVar7 = _DAT_14a0206e0;
  *(longlong *)(param_2 + 4) = _DAT_14a0206e0;
  if (lVar7 != 0) {
    uVar6 = FUN_1450caf90(lVar7,param_2 + 4);
    *param_2 = uVar6;
  }
  lVar7 = _DAT_14a0206f8;
  *(undefined8 *)(param_2 + 8) = _DAT_14a0206e8;
  *(longlong *)(param_2 + 0x10) = lVar7;
  if (lVar7 != 0) {
    uVar6 = FUN_1450caf90(lVar7,param_2 + 0x10);
    param_2[0xc] = uVar6;
  }
  uVar4 = uRam000000014a020708;
  *(undefined8 *)(param_2 + 0x14) = _DAT_14a020700;
  *(undefined8 *)(param_2 + 0x18) = uVar4;
LAB_14012fd1b:
  func_0x000144d9dab0(0x1476d5b70);
  return;
}

