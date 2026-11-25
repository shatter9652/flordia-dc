// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140144ce0  size: 596 bytes
// Name:    FUN_140144ce0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140145360
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140144ce0(longlong *param_1)

{
  short sVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  ushort uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  
  lVar2 = *param_1;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  iVar12 = (int)*(short *)((longlong)param_1 + 0x1c);
  if (*(short *)((longlong)param_1 + 0x1c) < 0) {
    iVar12 = *(int *)(lVar2 + 0x3c);
  }
  if (0 < *(int *)(lVar2 + 0x2ac)) {
    sVar1 = *(short *)((longlong)param_1 + 0x1a);
    lVar10 = 0;
    uVar3 = *(undefined8 *)
             (*(longlong *)(lVar2 + 0x40) + (ulonglong)(uint)(int)(short)param_1[3] * 8);
    do {
      lVar8 = *(longlong *)(*(longlong *)(lVar2 + 0x2b0) + lVar10 * 8);
      lVar4 = *(longlong *)(lVar8 + 0xf0);
      if (((lVar4 != 0) && (*(char *)(lVar4 + 0xe0) == '\0')) &&
         (*(char *)(lVar8 + 0x119) == '\x01')) {
        iVar14 = -1;
        if (*(longlong *)(lVar4 + 0x80) == lVar2) {
          iVar14 = *(int *)(lVar4 + 0x88);
        }
        if ((sVar1 <= iVar14) && (iVar14 < iVar12)) {
          uVar9 = *(uint *)((longlong)param_1 + 0xc);
          if (uVar9 == *(uint *)(param_1 + 1)) {
            uVar13 = uVar9 >> 1;
            if (uVar9 < 2) {
              uVar13 = 1;
            }
            lVar8 = func_0x000144d9c140(2,(ulonglong)(uVar13 + uVar9) * 2);
            if ((ulonglong)*(uint *)((longlong)param_1 + 0xc) != 0) {
              func_0x000145f40560(lVar8,param_1[2],(ulonglong)*(uint *)((longlong)param_1 + 0xc) * 2
                                 );
            }
            if (param_1[2] != 0) {
              func_0x000144d9c130();
            }
            param_1[2] = lVar8;
            *(uint *)(param_1 + 1) = uVar13 + uVar9;
            uVar9 = *(uint *)((longlong)param_1 + 0xc);
          }
          else {
            lVar8 = param_1[2];
          }
          *(uint *)((longlong)param_1 + 0xc) = uVar9 + 1;
          *(short *)(lVar8 + (ulonglong)uVar9 * 2) = (short)lVar10;
          if (((short)param_1[3] <= iVar14) &&
             (cVar5 = FUN_140145360(lVar4,uVar3,lVar2), cVar5 == '\0')) {
            lVar6 = func_0x000144f2e340(*(undefined8 *)(*(longlong *)(lVar4 + 0x80) + 0x20),
                                        *(undefined4 *)(lVar4 + 0x88));
            uVar11 = *(ushort *)(lVar6 + 0xf08);
            lVar8 = *(longlong *)(lVar6 + 0xf00);
            if (uVar11 == *(ushort *)(lVar6 + 0xf0a)) {
              lVar7 = func_0x000144d9c140(8,(uint)uVar11 * 8 + 0x20);
              if (uVar11 != 0) {
                func_0x000145f40560(lVar7,lVar8,(ulonglong)uVar11 << 3);
              }
              if (lVar8 != 0) {
                func_0x000144d9c130(lVar8);
              }
              *(ushort *)(lVar6 + 0xf0a) = uVar11 + 4;
              *(longlong *)(lVar6 + 0xf00) = lVar7;
              uVar11 = *(ushort *)(lVar6 + 0xf08);
              lVar8 = lVar7;
            }
            *(ushort *)(lVar6 + 0xf08) = uVar11 + 1;
            *(undefined8 *)(lVar8 + (ulonglong)uVar11 * 8) = uVar3;
            *(undefined1 *)(lVar4 + 0xf6) = 1;
          }
        }
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)(lVar2 + 0x2ac));
  }
  return;
}

