// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140191ef0  size: 542 bytes
// Name:    FUN_140191ef0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_142b7c550, FUN_145647140, FUN_1400746e0, FUN_141fc6f90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140191ef0(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  code *pcVar3;
  char cVar4;
  ushort uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  bool bVar12;
  short sVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong *puVar18;
  bool bVar19;
  ulonglong uStackX_8;
  uint uStackX_14;
  ulonglong auStackX_18 [2];
  undefined8 uStack_40;
  
  uStack_40 = 0x140191f04;
  lVar7 = FUN_145647140();
  lVar7 = -lVar7;
  iVar15 = *(int *)(param_1 + 4);
  if (iVar15 != 0) {
    uVar8 = *(undefined8 *)(param_2 + 0x170);
    uVar2 = *(undefined8 *)(param_2 + 0x1a0);
    *(undefined8 *)((longlong)&uStack_40 + lVar7) = 0x140191f2b;
    uVar8 = func_0x000144e25940(uVar8,uVar2);
    *(undefined8 *)((longlong)&uStack_40 + lVar7) = 0x140191f3a;
    cVar4 = FUN_1400746e0(uVar8,iVar15,&stack0xffffffffffffffec + lVar7);
    if (cVar4 != '\0') {
      *(undefined8 *)((longlong)&uStack_40 + lVar7) = 0x140191f58;
      func_0x000140d37000(&stack0xfffffffffffffff0 + lVar7,param_2,param_1,0);
      *(undefined8 *)((longlong)&uStack_40 + lVar7) = 0x140191f65;
      cVar4 = FUN_141fc6f90(*(undefined8 *)(&stack0xfffffffffffffff8 + lVar7),
                            *(undefined8 *)((longlong)&uStackX_8 + lVar7));
      if (cVar4 == '\0') {
        return 1;
      }
      *(undefined8 *)(&stack0x00000010 + lVar7) = 0x400;
      *(undefined8 *)((longlong)&uStack_40 + lVar7) = 0x140191f86;
      FUN_142b7c550(&stack0xfffffffffffffff0 + lVar7,&stack0x00000010 + lVar7);
      uVar1 = *(uint *)((longlong)&uStackX_14 + lVar7);
      if ((ulonglong)uVar1 != 0) {
        bVar12 = false;
        puVar18 = (ulonglong *)((longlong)auStackX_18 + lVar7);
        do {
          while( true ) {
            uVar17 = *puVar18;
            uVar16 = (uint)uVar17 & 0xffff;
            uVar14 = (ulonglong)(uVar16 << 4);
            if (((*(short *)(*(longlong *)(_DAT_14abbf348 + 0x28) + 8 + uVar14) !=
                  (short)(uVar17 >> 0x10)) ||
                (lVar9 = *(longlong *)(*(longlong *)(_DAT_14abbf348 + 0x28) + uVar14), lVar9 == 0))
               || (lVar10 = *(longlong *)(*(longlong *)(lVar9 + 8) + 0x20), lVar10 == 0)) break;
            uVar14 = uVar17 >> 0x20;
            sVar13 = (short)(uVar17 >> 0x20);
            if ((sVar13 != -2) && (*(char *)(lVar10 + 0x10) == '\x06')) {
              *(undefined8 *)((longlong)&uStack_40 + lVar7) = 0x140191ffd;
              uVar5 = func_0x0001403dc2f0(lVar9,uVar14);
              if ((uVar5 == 0xffff) ||
                 ((*(ushort *)(lVar10 + 0x9a) <= uVar5 ||
                  (*(longlong *)(*(longlong *)(lVar10 + 0x70) + (ulonglong)uVar5 * 8) == 0))))
              break;
            }
            iVar15 = 0;
            uVar17 = (ulonglong)(uVar16 << 4);
            do {
              lVar9 = *(longlong *)(*(longlong *)(_DAT_14abbf348 + 0x28) + uVar17);
              plVar11 = *(longlong **)(*(longlong *)(lVar9 + 8) + 0x20);
              if ((sVar13 != -2) && ((char)plVar11[2] == '\x06')) {
                *(undefined8 *)((longlong)&uStack_40 + lVar7) = 0x140192056;
                uVar5 = func_0x0001403dc2f0(lVar9,uVar14);
                plVar11 = *(longlong **)(plVar11[0xe] + (ulonglong)uVar5 * 8);
              }
              pcVar3 = *(code **)(*plVar11 + 0x58);
              *(undefined8 *)((longlong)&uStack_40 + lVar7) = 0x14019206a;
              iVar6 = (*pcVar3)(plVar11);
              if (iVar6 <= iVar15) goto LAB_1401920e0;
              lVar9 = *(longlong *)(*(longlong *)(_DAT_14abbf348 + 0x28) + uVar17);
              plVar11 = *(longlong **)(*(longlong *)(lVar9 + 8) + 0x20);
              if ((sVar13 != -2) && ((char)plVar11[2] == '\x06')) {
                *(undefined8 *)((longlong)&uStack_40 + lVar7) = 0x140192098;
                uVar5 = func_0x0001403dc2f0(lVar9,uVar14);
                plVar11 = *(longlong **)(plVar11[0xe] + (ulonglong)uVar5 * 8);
              }
              pcVar3 = *(code **)(*plVar11 + 0x50);
              *(undefined8 *)((longlong)&uStack_40 + lVar7) = 0x1401920ae;
              lVar9 = (*pcVar3)(plVar11,iVar15);
              *(undefined8 *)((longlong)&uStack_40 + lVar7) = 0x1401920c0;
              lVar10 = func_0x0001404c0e60(*(undefined8 *)(&stack0xfffffffffffffff8 + lVar7),
                                           *(undefined8 *)((longlong)&uStackX_8 + lVar7));
              iVar15 = iVar15 + 1;
            } while (lVar9 != lVar10);
            bVar12 = true;
            bVar19 = puVar18 == (ulonglong *)(&stack0x00000010 + (ulonglong)uVar1 * 8 + lVar7);
            puVar18 = puVar18 + 1;
            if (bVar19) {
              return 1;
            }
          }
LAB_1401920e0:
          bVar19 = puVar18 != (ulonglong *)(&stack0x00000010 + (ulonglong)uVar1 * 8 + lVar7);
          puVar18 = puVar18 + 1;
        } while (bVar19);
        if (bVar12) {
          return 1;
        }
      }
    }
  }
  return 0;
}

