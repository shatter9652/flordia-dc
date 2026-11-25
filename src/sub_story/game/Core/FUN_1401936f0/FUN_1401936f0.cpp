// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401936f0  size: 478 bytes
// Name:    FUN_1401936f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145464ab0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401936f0(longlong param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  short sVar6;
  ushort uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  if ((*(byte *)(param_1 + 0xe8) & 1) == 0) {
    lVar4 = *(longlong *)(param_2 + 0x10);
    FUN_145464ab0(lVar4);
    lVar12 = *(longlong *)(lVar4 + 0x30);
    if (lVar12 != 0) {
      do {
        while( true ) {
          lVar8 = *(longlong *)(*(longlong *)(lVar4 + 0x20) + 0x20);
          if ((lVar8 == 0) || (lVar8 != *(longlong *)(*(longlong *)(lVar4 + 0x28) + 0x20))) {
            sVar6 = func_0x0001401c0010(*(undefined8 *)
                                         (lVar4 + 0x20 + (longlong)(int)*(uint *)(lVar4 + 4) * 8),
                                        *(undefined2 *)
                                         (lVar12 + 0x28 + (ulonglong)*(uint *)(lVar4 + 4) * 2));
            lVar12 = *(longlong *)(lVar4 + 0x20 + (longlong)*(int *)(lVar4 + 4) * 8);
            if (lVar12 == 0) {
              uVar10 = 0;
            }
            else {
              iVar3 = *(int *)(lVar12 + 0x10);
              uVar10 = iVar3 + (uint)(iVar3 == 0);
            }
            uVar11 = (ulonglong)((uVar10 & 0xffff) << 4);
            if ((*(short *)(*(longlong *)(_DAT_14abbf348 + 0x28) + 8 + uVar11) ==
                 (short)(uVar10 >> 0x10)) &&
               (lVar12 = *(longlong *)(*(longlong *)(_DAT_14abbf348 + 0x28) + uVar11), lVar12 != 0))
            {
              uVar5 = *(undefined8 *)(lVar12 + 0x100);
              uVar10 = 0xffffffff;
              if ((sVar6 != -2) &&
                 ((lVar12 = *(longlong *)(*(longlong *)(lVar12 + 8) + 0x20),
                  *(char *)(lVar12 + 0x10) == '\x06' && (*(longlong *)(lVar12 + 0x88) != 0)))) {
                uVar7 = func_0x0001403dc2f0();
                if (uVar7 == 0xffff) {
                  uVar10 = 0;
                }
                else {
                  uVar10 = (uint)*(undefined8 *)
                                  (*(longlong *)(lVar12 + 0x88) + 8 + (ulonglong)uVar7 * 0x10);
                }
              }
              if (((uint)uVar5 & uVar10 & 0xe112ac4) != 0) {
                *(byte *)(param_1 + 0xe8) = *(byte *)(param_1 + 0xe8) | 1;
                return;
              }
            }
          }
          if (*(longlong *)(lVar4 + 0x30) == 0) {
            return;
          }
          lVar12 = *(longlong *)(*(longlong *)(lVar4 + 0x30) + 0x20);
          *(longlong *)(lVar4 + 0x30) = lVar12;
          if (lVar12 == 0) {
            return;
          }
          *(undefined4 *)(lVar4 + 8) = 0;
          bVar1 = *(byte *)(lVar12 + 0x8b);
          *(uint *)(lVar4 + 0xc) = (uint)bVar1;
          if (bVar1 == 0) break;
          lVar8 = func_0x000145165400();
          *(ulonglong *)(lVar4 + 0x38) =
               (ulonglong)((uint)*(ushort *)(lVar12 + 0x70) * *(int *)(lVar8 + 0x14)) +
               *(longlong *)(lVar8 + 8);
        }
        lVar8 = 1;
        while( true ) {
          bVar2 = *(byte *)(lVar12 + 0x8b);
          if ((uint)lVar8 < (uint)bVar2) break;
          lVar12 = *(longlong *)(lVar12 + 0x20);
          if ((lVar12 != 0) && (*(char *)(lVar4 + 0x10) != '\0')) {
            while ((*(char *)(lVar12 + 0x8b) == '\0' || (*(char *)(lVar12 + 0x4c) == '\x01'))) {
              lVar12 = *(longlong *)(lVar12 + 0x20);
              if (lVar12 == 0) goto LAB_1401938af;
            }
          }
          lVar8 = 0;
          if (lVar12 == 0) {
LAB_1401938af:
            *(uint *)(lVar4 + 8) = (uint)bVar1;
            *(undefined8 *)(lVar4 + 0x30) = 0;
            return;
          }
        }
        *(uint *)(lVar4 + 8) = (uint)lVar8;
        lVar9 = func_0x000145165400();
        *(ulonglong *)(lVar4 + 0x38) =
             (ulonglong)((uint)*(ushort *)(lVar12 + 0x70 + lVar8 * 2) * *(int *)(lVar9 + 0x14)) +
             *(longlong *)(lVar9 + 8);
        *(uint *)(lVar4 + 0xc) = (uint)bVar2;
        *(longlong *)(lVar4 + 0x30) = lVar12;
      } while( true );
    }
  }
  return;
}

