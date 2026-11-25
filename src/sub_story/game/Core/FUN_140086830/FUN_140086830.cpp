// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140086830  size: 1071 bytes
// Name:    FUN_140086830
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400c8100, FUN_1451e8ce0, FUN_140441670, FUN_145647140, FUN_140193c00, FUN_144e62f00, FUN_145464ab0, FUN_144f629b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140086830(longlong param_1,longlong param_2,longlong *param_3)

{
  uint *puVar1;
  ulonglong *puVar2;
  byte bVar3;
  byte bVar4;
  undefined2 uVar5;
  code *pcVar6;
  longlong *plVar7;
  char cVar8;
  ushort uVar9;
  short sVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong unaff_GS_OFFSET;
  float fVar21;
  float fVar22;
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined2 auStackX_8 [4];
  undefined1 auStackX_10 [16];
  undefined8 uStackX_20;
  undefined8 uStack_48;
  
  uStack_48 = 0x140086846;
  lVar12 = FUN_145647140();
  lVar12 = -lVar12;
  *(undefined8 *)(&stack0x00003b70 + lVar12) = unaff_XMM6_Qa;
  *(undefined8 *)(&stack0x00003b78 + lVar12) = unaff_XMM6_Qb;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    pcVar6 = *(code **)(*param_3 + 8);
    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x14008686b;
    iVar11 = (*pcVar6)(param_3);
    if (iVar11 == 6) {
      lVar13 = *(longlong *)(param_1 + 0x30);
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140086be0;
        func_0x0001455db994();
        if (*(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
            '\0') {
          *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140086c05;
          func_0x0001455db994();
        }
      }
      puVar1 = (uint *)(lVar13 + 0x1e0);
      *puVar1 = *puVar1 & 0x10;
      if ((int)param_3[1] != 3) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x2b0) = 0;
      }
    }
    else {
      pcVar6 = *(code **)(*param_3 + 8);
      *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x14008687d;
      iVar11 = (*pcVar6)(param_3);
      if (iVar11 == 0) {
        uVar14 = *(undefined8 *)(param_2 + 8);
        *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x14008688a;
        lVar13 = func_0x000140086c60(uVar14);
        if (*(int *)(*(longlong *)(lVar13 + 0x90) + 0x900) != 3) {
          uVar14 = *(undefined8 *)(param_2 + 0x10);
          *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1400868c0;
          uVar14 = func_0x000144e62f40(uVar14);
          *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1400868c8;
          uVar14 = FUN_1400c8100(uVar14);
          *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1400868d8;
          FUN_144f629b0((longlong)&uStackX_20 + lVar12,param_2,uVar14);
          *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1400868e4;
          FUN_145464ab0(param_3 + 1);
          lVar13 = param_3[7];
          if (lVar13 != 0) {
            fVar22 = _DAT_14615a2c4;
            do {
              uVar18 = *(uint *)(param_3 + 1);
              lVar15 = (longlong)(int)uVar18;
              if ((*(uint *)(lVar13 + 0x8c) >> (lVar15 != 0) & 1) == 0) {
                uVar20 = (ulonglong)*(ushort *)(param_3[8] + 0xf0 + lVar15 * 2) << 0x30;
              }
              else {
                uVar20 = 0xffff000000000000;
              }
              lVar15 = param_3[lVar15 + 5];
              uVar5 = *(undefined2 *)(lVar13 + 0x28 + (ulonglong)uVar18 * 2);
              *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140086942;
              uVar9 = func_0x0001401c0010(lVar15,uVar5);
              if (param_3[(longlong)(int)param_3[1] + 5] == 0) {
                uVar17 = 0;
              }
              else {
                iVar11 = *(int *)(param_3[(longlong)(int)param_3[1] + 5] + 0x10);
                uVar17 = (ulonglong)(iVar11 + (uint)(iVar11 == 0));
              }
              *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140086978;
              FUN_140193c00(auStackX_10 + lVar12,(longlong)&uStackX_20 + lVar12,
                            (ulonglong)uVar9 << 0x20 | uVar17 | uVar20);
              uVar5 = *(undefined2 *)
                       (param_3[7] + 0x28 + (ulonglong)*(uint *)((longlong)param_3 + 0xc) * 2);
              lVar13 = param_3[(longlong)(int)*(uint *)((longlong)param_3 + 0xc) + 5];
              *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140086991;
              func_0x0001401c0010(lVar13,uVar5);
              if (param_3[(longlong)*(int *)((longlong)param_3 + 0xc) + 5] == 0) {
                uVar18 = 0;
              }
              else {
                iVar11 = *(int *)(param_3[(longlong)*(int *)((longlong)param_3 + 0xc) + 5] + 0x10);
                uVar18 = iVar11 + (uint)(iVar11 == 0);
              }
              pcVar6 = *(code **)(*_DAT_14a9b1b48 + 0x100);
              *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1400869bf;
              iVar11 = (*pcVar6)();
              if ((iVar11 != 4) &&
                 ((*(longlong *)(param_3[5] + 0x20) == 0 ||
                  (*(longlong *)(param_3[5] + 0x20) != *(longlong *)(param_3[6] + 0x20))))) {
                uVar19 = uVar18 & 0xffff;
                if ((*(short *)(*(longlong *)(_DAT_14abbf348 + 0x28) + 8 + (ulonglong)(uVar19 << 4))
                     == (short)(uVar18 >> 0x10)) &&
                   (*(longlong *)(*(longlong *)(_DAT_14abbf348 + 0x28) + (ulonglong)(uVar19 << 4))
                    != 0)) {
                  uVar14 = *(undefined8 *)(param_2 + 0x10);
                  *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140086a1f;
                  uVar16 = FUN_144e62f00(uVar14);
                  uVar14 = *(undefined8 *)
                            (*(longlong *)(_DAT_14abbf348 + 0x28) + (ulonglong)(uVar19 << 4));
                  *(undefined8 *)(&stack0xfffffffffffffff8 + lVar12) = uVar16;
                  *(undefined8 *)(&stack0x00000000 + lVar12) = 0xffffffff00000000;
                  *(undefined2 *)((longlong)auStackX_8 + lVar12) = 1;
                  *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140086a5c;
                  func_0x000144e43930(uVar14,&stack0xfffffffffffffff0 + lVar12);
                  *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140086a6c;
                  cVar8 = FUN_140441670(uVar14,*(undefined8 *)(&stack0xfffffffffffffff0 + lVar12),
                                        &stack0xfffffffffffffff8 + lVar12);
                  if (cVar8 != '\0') {
                    plVar7 = *(longlong **)
                              (*(longlong *)(_DAT_14abbf348 + 0x28) + (ulonglong)(uVar19 << 4));
                    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140086a8e;
                    func_0x000144e43930(plVar7,&stack0xfffffffffffffff8 + lVar12);
                    lVar13 = *plVar7;
                    (&stack0xffffffffffffffe0)[lVar12] = 0;
                    pcVar6 = *(code **)(lVar13 + 0x38);
                    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140086aa8;
                    fVar21 = (float)(*pcVar6)(plVar7,*(undefined8 *)
                                                      (&stack0xfffffffffffffff8 + lVar12),1,0);
                    if (fVar21 <= fVar22) goto LAB_140086ad0;
                  }
                }
                lVar13 = *(longlong *)(param_1 + 0x30);
                *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140086aba;
                sVar10 = FUN_1451e8ce0(auStackX_10 + lVar12);
                puVar2 = (ulonglong *)(lVar13 + 0x2b0 + (ulonglong)((uint)(int)sVar10 >> 6) * 8);
                *puVar2 = *puVar2 | 1L << ((ulonglong)(uint)(int)sVar10 & 0x3f);
              }
LAB_140086ad0:
              if (param_3[7] == 0) break;
              lVar13 = *(longlong *)(param_3[7] + 0x20);
              param_3[7] = lVar13;
              if (lVar13 == 0) break;
              *(undefined4 *)(param_3 + 2) = 0;
              bVar3 = *(byte *)(lVar13 + 0x8b);
              *(uint *)((longlong)param_3 + 0x14) = (uint)bVar3;
              if (bVar3 == 0) {
                uVar14 = 1;
                while( true ) {
                  bVar4 = *(byte *)(lVar13 + 0x8b);
                  if ((uint)uVar14 < (uint)bVar4) break;
                  lVar13 = *(longlong *)(lVar13 + 0x20);
                  if ((lVar13 != 0) && ((char)param_3[3] != '\0')) {
                    while ((*(char *)(lVar13 + 0x8b) == '\0' || (*(char *)(lVar13 + 0x4c) == '\x01')
                           )) {
                      lVar13 = *(longlong *)(lVar13 + 0x20);
                      if (lVar13 == 0) goto LAB_140086ba7;
                    }
                  }
                  uVar14 = 0;
                  if (lVar13 == 0) {
LAB_140086ba7:
                    *(uint *)(param_3 + 2) = (uint)bVar3;
                    param_3[7] = 0;
                    goto LAB_140086bb2;
                  }
                }
                *(uint *)(param_3 + 2) = (uint)uVar14;
                *(undefined8 *)(&stack0xffffffffffffffe8 + lVar12) = uVar14;
                *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140086c3b;
                lVar15 = func_0x000145165400();
                param_3[8] = (ulonglong)
                             ((uint)*(ushort *)
                                     (lVar13 + 0x70 +
                                     *(longlong *)(&stack0xffffffffffffffe8 + lVar12) * 2) *
                             *(int *)(lVar15 + 0x14)) + *(longlong *)(lVar15 + 8);
                *(uint *)((longlong)param_3 + 0x14) = (uint)bVar4;
                param_3[7] = lVar13;
              }
              else {
                *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140086b0a;
                lVar15 = func_0x000145165400();
                param_3[8] = (ulonglong)((uint)*(ushort *)(lVar13 + 0x70) * *(int *)(lVar15 + 0x14))
                             + *(longlong *)(lVar15 + 8);
              }
            } while( true );
          }
LAB_140086bb2:
          *(undefined **)((longlong)&uStackX_20 + lVar12) = &UNK_146696f80;
          *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140086bc7;
          func_0x000144e2aa90();
        }
      }
    }
  }
  return;
}

