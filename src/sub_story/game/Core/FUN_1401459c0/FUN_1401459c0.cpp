// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401459c0  size: 457 bytes
// Name:    FUN_1401459c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1406bfe90, FUN_145647140, FUN_140145400, FUN_1406bff20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401459c0(undefined8 param_1,undefined1 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ushort uVar12;
  longlong lVar13;
  undefined8 uStackX_8;
  undefined1 auStackX_10 [24];
  undefined8 uStack_48;
  
  uStack_48 = 0x1401459d6;
  lVar7 = FUN_145647140();
  lVar7 = -lVar7;
  *(undefined8 *)((longlong)&uStackX_8 + lVar7) = param_4;
  (&stack0xffffffffffffffff)[lVar7] = 1;
  (&stack0xfffffffffffffffd)[lVar7] = param_2;
  (&stack0xfffffffffffffffe)[lVar7] = param_3;
  *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x140145a02;
  uVar6 = FUN_1406bff20();
  if (0 < (int)uVar6) {
    uVar11 = (ulonglong)uVar6;
    uVar10 = 0;
    *(ulonglong *)(auStackX_10 + lVar7 + -0x10) = uVar11;
    do {
      lVar2 = *(longlong *)(&stack0x00008810 + uVar10 * 8 + lVar7);
      if ((*(byte *)(lVar2 + 0xda) & 0x40) == 0) {
        (&stack0xffffffffffffffef)[lVar7] = 1;
        (&stack0xffffffffffffffed)[lVar7] = (&stack0x00011080)[lVar7];
        (&stack0xffffffffffffffee)[lVar7] = (&stack0x00011088)[lVar7];
        *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x140145a5b;
        uVar6 = FUN_1406bfe90(*(undefined8 *)((longlong)&uStackX_8 + lVar7),auStackX_10 + lVar7,
                              lVar2,&stack0xffffffffffffffed + lVar7);
        if (0 < (int)uVar6) {
          uVar11 = (ulonglong)uVar6 + 1;
          do {
            lVar3 = *(longlong *)(auStackX_10 + uVar11 * 8 + lVar7 + -0x10);
            if ((*(byte *)(lVar3 + 0xda) & 0x80) == 0) {
              *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x140145a86;
              cVar5 = FUN_140145400(lVar2,lVar3);
              if (cVar5 == '\0') {
                *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x140145a99;
                cVar5 = FUN_140145400(lVar3,lVar2);
                if (cVar5 == '\0') {
                  uVar1 = *(undefined4 *)(lVar2 + 0x88);
                  uVar4 = *(undefined8 *)(*(longlong *)(lVar2 + 0x80) + 0x20);
                  *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x140145ab8;
                  lVar8 = func_0x000144f2e340(uVar4,uVar1);
                  uVar12 = *(ushort *)(lVar8 + 0xf08);
                  lVar13 = *(longlong *)(lVar8 + 0xf00);
                  if (uVar12 == *(ushort *)(lVar8 + 0xf0a)) {
                    *(ulonglong *)(&stack0xfffffffffffffff0 + lVar7) = (ulonglong)uVar12;
                    *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x140145aeb;
                    lVar9 = func_0x000144d9c140(8,(uint)uVar12 * 8 + 0x20);
                    if (uVar12 != 0) {
                      *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x140145b07;
                      func_0x000145f40560(lVar9,lVar13,
                                          (int)*(undefined8 *)(&stack0xfffffffffffffff0 + lVar7) <<
                                          3);
                    }
                    if (lVar13 != 0) {
                      *(undefined8 *)((longlong)&uStack_48 + lVar7) = 0x140145b14;
                      func_0x000144d9c130(lVar13);
                    }
                    *(short *)(lVar8 + 0xf0a) =
                         (short)*(undefined8 *)(&stack0xfffffffffffffff0 + lVar7) + 4;
                    *(longlong *)(lVar8 + 0xf00) = lVar9;
                    uVar12 = *(ushort *)(lVar8 + 0xf08);
                    lVar13 = lVar9;
                  }
                  *(ushort *)(lVar8 + 0xf08) = uVar12 + 1;
                  *(longlong *)(lVar13 + (ulonglong)uVar12 * 8) = lVar3;
                  *(undefined1 *)(lVar2 + 0xf6) = 1;
                }
              }
            }
            uVar11 = uVar11 - 1;
          } while (1 < uVar11);
        }
        uVar11 = *(ulonglong *)(auStackX_10 + lVar7 + -0x10);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar11);
  }
  return;
}

