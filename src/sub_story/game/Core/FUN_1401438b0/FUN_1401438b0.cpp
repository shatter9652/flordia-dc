// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401438b0  size: 755 bytes
// Name:    FUN_1401438b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140145400, FUN_14500a600
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401438b0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  ushort uVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  
  iVar6 = *(int *)(param_1 + 0x7c);
  if (0 < iVar6) {
    lVar1 = *(longlong *)(param_1 + 0xb8);
    lVar19 = 0;
    uVar14 = 0xffffffff;
    uVar12 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x10);
      uVar16 = **(ushort **)(*(longlong *)(param_1 + 0x80) + lVar19 * 8);
      iVar17 = uVar14 - 1;
      do {
        uVar11 = uVar12;
        iVar10 = iVar17;
        uVar9 = *(uint *)(param_1 + 0x3c);
        if ((int)uVar11 < *(int *)(param_1 + 0xc)) {
          uVar9 = (uint)*(ushort *)(*(longlong *)(lVar2 + (ulonglong)uVar11 * 8) + 0xa0);
        }
        iVar17 = iVar10 + 1;
        uVar12 = uVar11 + 1;
      } while ((int)uVar9 <= (int)(uint)uVar16);
      uVar14 = ((int)uVar9 <= (int)(uint)uVar16) + 1 + iVar10;
      uVar13 = 0;
      if (-1 < (int)uVar14) {
        uVar13 = (uint)*(ushort *)(*(longlong *)(lVar2 + (ulonglong)uVar14 * 8) + 0xa0);
      }
      iVar17 = *(uint *)(param_1 + 0x3c) - 1;
      if ((lVar19 < iVar6 + -1) &&
         (iVar10 = **(ushort **)(*(longlong *)(param_1 + 0x80) + 8 + lVar19 * 8) - 1,
         iVar10 <= iVar17)) {
        iVar17 = iVar10;
      }
      uVar12 = ((int)uVar9 <= (int)(uint)uVar16) + uVar11;
      if (((int)uVar12 < *(int *)(param_1 + 0xc)) &&
         (iVar10 = *(ushort *)(*(longlong *)(lVar2 + (ulonglong)uVar12 * 8) + 0xa0) - 1,
         iVar10 <= iVar17)) {
        iVar17 = iVar10;
      }
      if (((int)(uint)uVar16 <= iVar17) && (uVar9 = (uint)uVar16, uVar13 < uVar9)) {
        uVar18 = (ulonglong)uVar9;
        do {
          lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x40) + uVar18 * 8);
          uVar15 = (ulonglong)uVar9;
          if (*(char *)(lVar2 + 0xe0) == '\0') {
            do {
              uVar15 = uVar15 - 1;
              lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x40) + (uVar15 & 0xffffffff) * 8);
              if (((((*(byte *)(lVar4 + 0xd9) & 2) == 0) && (*(char *)(lVar4 + 0xe0) != '\x03')) &&
                  (cVar5 = FUN_14500a600(lVar1 + 0x1ad0,lVar4,lVar2,0,1), cVar5 == '\0')) &&
                 (cVar5 = FUN_140145400(lVar2,lVar4), cVar5 == '\0')) {
                lVar7 = func_0x000144f2e340(*(undefined8 *)(*(longlong *)(lVar2 + 0x80) + 0x20),
                                            *(undefined4 *)(lVar2 + 0x88));
                uVar16 = *(ushort *)(lVar7 + 0xf08);
                lVar3 = *(longlong *)(lVar7 + 0xf00);
                lVar8 = lVar3;
                if (uVar16 == *(ushort *)(lVar7 + 0xf0a)) {
                  lVar8 = func_0x000144d9c140(8,(uint)uVar16 * 8 + 0x20);
                  if (uVar16 != 0) {
                    func_0x000145f40560(lVar8,lVar3,(ulonglong)uVar16 << 3);
                  }
                  if (lVar3 != 0) {
                    func_0x000144d9c130();
                  }
                  *(ushort *)(lVar7 + 0xf0a) = uVar16 + 4;
                  *(longlong *)(lVar7 + 0xf00) = lVar8;
                  uVar16 = *(ushort *)(lVar7 + 0xf08);
                }
                *(ushort *)(lVar7 + 0xf08) = uVar16 + 1;
                *(longlong *)(lVar8 + (ulonglong)uVar16 * 8) = lVar4;
                *(undefined1 *)(lVar2 + 0xf6) = 1;
              }
            } while ((longlong)(ulonglong)uVar13 < (longlong)uVar15);
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 != iVar17 + 1);
        iVar6 = *(int *)(param_1 + 0x7c);
      }
      lVar19 = lVar19 + 1;
    } while (lVar19 < iVar6);
  }
  return;
}

