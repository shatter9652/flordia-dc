// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401938d0  size: 630 bytes
// Name:    FUN_1401938d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400c8100, FUN_145647140, FUN_145464ab0, FUN_140193c00, FUN_144f62ba0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401938d0(longlong param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  undefined2 uVar3;
  uint *puVar4;
  code *pcVar5;
  ushort uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  byte bVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 uStack_48;
  
  uStack_48 = 0x1401938e6;
  lVar8 = FUN_145647140();
  lVar8 = -lVar8;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    puVar4 = *(uint **)(param_2 + 0x10);
    uVar9 = *(undefined8 *)(*(longlong *)(param_2 + 8) + 0x10);
    *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x14019390b;
    uVar9 = func_0x000144e62f40(uVar9);
    *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x140193913;
    uVar10 = FUN_1400c8100(uVar9);
    uVar9 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x140193924;
    FUN_144f62ba0((longlong)&stack0x00000000 + lVar8,uVar9,uVar10);
    *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x14019392c;
    FUN_145464ab0(puVar4);
    lVar14 = *(longlong *)(puVar4 + 0xc);
    if (lVar14 != 0) {
      uVar9 = 0;
      bVar13 = 0;
      do {
        if ((*(longlong *)(*(longlong *)(puVar4 + 8) + 0x20) == 0) ||
           (*(longlong *)(*(longlong *)(puVar4 + 8) + 0x20) !=
            *(longlong *)(*(longlong *)(puVar4 + 10) + 0x20))) {
          lVar11 = (longlong)(int)*puVar4;
          if ((*(uint *)(lVar14 + 0x8c) >> (lVar11 != 0) & 1) == 0) {
            uVar15 = (ulonglong)*(ushort *)(*(longlong *)(puVar4 + 0xe) + 0xf0 + lVar11 * 2) << 0x30
            ;
          }
          else {
            uVar15 = 0xffff000000000000;
          }
          uVar10 = *(undefined8 *)(puVar4 + lVar11 * 2 + 8);
          uVar3 = *(undefined2 *)(lVar14 + 0x28 + (ulonglong)*puVar4 * 2);
          *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x1401939a1;
          uVar6 = func_0x0001401c0010(uVar10,uVar3);
          if (*(longlong *)(puVar4 + (longlong)(int)*puVar4 * 2 + 8) == 0) {
            uVar12 = 0;
          }
          else {
            iVar7 = *(int *)(*(longlong *)(puVar4 + (longlong)(int)*puVar4 * 2 + 8) + 0x10);
            uVar12 = (ulonglong)(iVar7 + (uint)(iVar7 == 0));
          }
          *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x1401939d4;
          FUN_140193c00(&stack0xffffffffffffffe8 + lVar8,(longlong)&stack0x00000000 + lVar8,
                        (ulonglong)uVar6 << 0x20 | uVar12 | uVar15);
          pcVar5 = *(code **)(**(longlong **)(&stack0xffffffffffffffe8 + lVar8) + 0x1a0);
          *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x1401939e6;
          iVar7 = (*pcVar5)(*(longlong **)(&stack0xffffffffffffffe8 + lVar8),
                            *(undefined4 *)(&stack0xfffffffffffffff0 + lVar8));
          if (iVar7 == 3) {
            uVar9 = 1;
          }
          else {
            pcVar5 = *(code **)(**(longlong **)(&stack0xffffffffffffffe8 + lVar8) + 0x1a0);
            *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x1401939fd;
            iVar7 = (*pcVar5)(*(longlong **)(&stack0xffffffffffffffe8 + lVar8),
                              *(undefined4 *)(&stack0xfffffffffffffff0 + lVar8));
            bVar13 = bVar13 | iVar7 == 6;
          }
          lVar14 = *(longlong *)(puVar4 + 0xc);
          if (lVar14 == 0) goto LAB_140193a8d;
        }
        lVar14 = *(longlong *)(lVar14 + 0x20);
        *(longlong *)(puVar4 + 0xc) = lVar14;
        if (lVar14 == 0) goto LAB_140193a8d;
        puVar4[2] = 0;
        bVar1 = *(byte *)(lVar14 + 0x8b);
        puVar4[3] = (uint)bVar1;
        if (bVar1 == 0) {
          uVar10 = 1;
          while( true ) {
            bVar2 = *(byte *)(lVar14 + 0x8b);
            if ((uint)uVar10 < (uint)bVar2) break;
            lVar14 = *(longlong *)(lVar14 + 0x20);
            if ((lVar14 != 0) && ((char)puVar4[4] != '\0')) {
              while ((*(char *)(lVar14 + 0x8b) == '\0' || (*(char *)(lVar14 + 0x4c) == '\x01'))) {
                lVar14 = *(longlong *)(lVar14 + 0x20);
                if (lVar14 == 0) goto LAB_140193a82;
              }
            }
            uVar10 = 0;
            if (lVar14 == 0) {
LAB_140193a82:
              puVar4[2] = (uint)bVar1;
              puVar4[0xc] = 0;
              puVar4[0xd] = 0;
              goto LAB_140193a8d;
            }
          }
          puVar4[2] = (uint)uVar10;
          *(undefined8 *)(&stack0xfffffffffffffff8 + lVar8) = uVar10;
          *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x140193ae0;
          lVar11 = func_0x000145165400();
          *(ulonglong *)(puVar4 + 0xe) =
               (ulonglong)
               ((uint)*(ushort *)
                       (lVar14 + 0x70 + *(longlong *)(&stack0xfffffffffffffff8 + lVar8) * 2) *
               *(int *)(lVar11 + 0x14)) + *(longlong *)(lVar11 + 8);
          puVar4[3] = (uint)bVar2;
          *(longlong *)(puVar4 + 0xc) = lVar14;
        }
        else {
          *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x140193a39;
          lVar11 = func_0x000145165400();
          *(ulonglong *)(puVar4 + 0xe) =
               (ulonglong)((uint)*(ushort *)(lVar14 + 0x70) * *(int *)(lVar11 + 0x14)) +
               *(longlong *)(lVar11 + 8);
        }
      } while( true );
    }
    bVar13 = 0;
    uVar9 = 0;
LAB_140193a8d:
    lVar14 = *(longlong *)(param_1 + 0x30);
    *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x140193aa7;
    func_0x000140193be0(lVar14 + 0x2c8,uVar9,bVar13);
    *(undefined **)(&stack0x00000000 + lVar8) = &UNK_146696f80;
    *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x140193abc;
    func_0x000144e2aa90();
  }
  return;
}

