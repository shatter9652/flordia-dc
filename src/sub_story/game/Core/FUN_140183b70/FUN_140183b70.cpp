// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140183b70  size: 999 bytes
// Name:    FUN_140183b70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140187110
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_140183b70(longlong param_1,uint *param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  ulonglong uVar9;
  uint uVar10;
  char cVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong *puVar20;
  undefined1 auVar21 [16];
  
  lVar16 = *(longlong *)(param_1 + 0x18);
  if (lVar16 != 0) {
    cVar3 = *(char *)((longlong)param_2 + 9);
    uVar10 = param_2[2];
    cVar4 = *(char *)((longlong)param_2 + 10);
    uVar6 = *param_2;
    uVar7 = param_2[1];
    puVar8 = *(uint **)(param_2 + 8);
    uVar9 = *(ulonglong *)(param_2 + 6);
    cVar5 = *(char *)((longlong)param_2 + 0xb);
    uVar17 = *(ulonglong *)(param_2 + 4);
    uVar18 = (uVar17 >> 2 ^ uVar9 ^ (ulonglong)*puVar8 ^
             (ulonglong)
             (uVar6 ^ uVar7 ^
             (uint)(byte)(cVar5 * '\x03' + cVar4) << 4 ^
             (uint)(byte)(cVar3 * '\x03' + (char)uVar10) << 2)) & *(ulonglong *)(lVar16 + 8);
    if ((*(longlong *)(lVar16 + 0x10 + uVar18 * 0x18) != -2) &&
       (puVar20 = (ulonglong *)(lVar16 + 0x10 + uVar18 * 0x18), puVar20[1] == uVar18)) {
      uVar12 = uVar18;
      uVar19 = uVar18;
      while ((((((uVar12 != uVar18 || (uVar12 = puVar20[2], *(uint *)(uVar12 + 0x10) != uVar6)) ||
                (*(uint *)(uVar12 + 0x14) != uVar7)) ||
               (((*(char *)(uVar12 + 0x18) != (char)uVar10 || (*(char *)(uVar12 + 0x19) != cVar3))
                || ((*(char *)(uVar12 + 0x1a) != cVar4 ||
                    ((*(char *)(uVar12 + 0x1b) != cVar5 || (*(ulonglong *)(uVar12 + 0x20) != uVar17)
                     ))))))) || (*(ulonglong *)(uVar12 + 0x28) != uVar9)) ||
             (((*(uint **)(uVar12 + 0x30) != puVar8 &&
               (cVar11 = func_0x000144559470(*(undefined8 *)(*(uint **)(uVar12 + 0x30) + 2),
                                             *(undefined8 *)(puVar8 + 2)), cVar11 == '\0')) ||
              (*(char *)(uVar12 + 0x38) != (char)param_2[10]))))) {
        uVar19 = *puVar20;
        if (uVar19 == 0xffffffffffffffff) goto LAB_140183cd0;
        puVar20 = (ulonglong *)(lVar16 + 0x10 + uVar19 * 0x18);
        uVar12 = puVar20[1];
      }
      if (-1 < (longlong)uVar19) {
        puVar13 = *(undefined8 **)(lVar16 + 0x20 + uVar19 * 0x18);
        func_0x00014503e5b0(puVar13);
        return puVar13;
      }
    }
  }
LAB_140183cd0:
  puVar13 = (undefined8 *)
            (**(code **)(**(longlong **)(param_1 + 0x10) + 0x50))
                      (*(longlong **)(param_1 + 0x10),0x48,0);
  if (puVar13 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *(undefined4 *)(puVar13 + 1) = 1;
  auVar21._0_12_ = ZEXT812(0);
  auVar21._12_4_ = 0;
  *puVar13 = &UNK_146631ef0;
  *(uint *)(puVar13 + 2) = *param_2;
  *(uint *)((longlong)puVar13 + 0x14) = param_2[1];
  *(undefined4 *)(puVar13 + 3) = 0;
  *(undefined1 (*) [16])(puVar13 + 4) = auVar21;
  puVar13[6] = *(undefined8 *)(param_2 + 8);
  *(char *)(puVar13 + 7) = (char)param_2[10];
  *(short *)(puVar13 + 3) = (short)param_2[2];
  *(undefined2 *)((longlong)puVar13 + 0x1a) = *(undefined2 *)((longlong)param_2 + 10);
  if ((*(longlong *)(param_2 + 4) != 0) && (func_0x00014503e5b0(), puVar13[4] != 0)) {
    func_0x00014503e5c0();
  }
  puVar13[4] = *(undefined8 *)(param_2 + 4);
  if (*(longlong *)(param_2 + 6) != 0) {
    func_0x00014503e5b0();
  }
  plVar1 = (longlong *)(param_1 + 0x18);
  if (puVar13[5] != 0) {
    func_0x00014503e5c0();
  }
  uVar9 = *(ulonglong *)(param_2 + 6);
  puVar13[5] = uVar9;
  puVar13[8] = 0;
  cVar3 = *(char *)((longlong)puVar13 + 0x19);
  uVar6 = *(uint *)((longlong)puVar13 + 0x14);
  uVar7 = *(uint *)(puVar13 + 2);
  uVar17 = puVar13[4];
  cVar4 = *(char *)(puVar13 + 3);
  plVar14 = (longlong *)*plVar1;
  cVar5 = *(char *)((longlong)puVar13 + 0x1b);
  cVar11 = *(char *)((longlong)puVar13 + 0x1a);
  uVar10 = *(uint *)puVar13[6];
  if (plVar14 == (longlong *)0x0) {
    lVar16 = 8;
  }
  else {
    lVar16 = *plVar14;
    uVar18 = plVar14[1];
    if ((ulonglong)(lVar16 * 5) <= uVar18 * 4 + 4) goto LAB_140183e0e;
    lVar16 = (uVar18 + 1) * 2;
  }
  FUN_140187110(plVar1,plVar1,lVar16);
  plVar14 = (longlong *)*plVar1;
  lVar16 = *plVar14;
  uVar18 = plVar14[1];
LAB_140183e0e:
  uVar19 = (uVar17 >> 2 ^ uVar9 ^ (ulonglong)uVar10 ^
           (ulonglong)
           ((uint)(byte)(cVar5 * '\x03' + cVar11) << 4 ^
           (uint)(byte)(cVar3 * '\x03' + cVar4) << 2 ^ uVar6 ^ uVar7)) & uVar18;
  *plVar14 = lVar16 + 1;
  puVar20 = (ulonglong *)(plVar14 + uVar19 * 3 + 2);
  uVar9 = *puVar20;
  uVar17 = uVar19;
  if (uVar9 == 0xfffffffffffffffe) {
    *puVar20 = 0xffffffffffffffff;
    puVar20[2] = (ulonglong)puVar13;
  }
  else {
    do {
      uVar17 = uVar17 + 1 & uVar18;
    } while (plVar14[uVar17 * 3 + 2] != -2);
    puVar2 = (ulonglong *)(plVar14 + uVar17 * 3 + 2);
    uVar18 = puVar20[1];
    uVar12 = uVar18;
    if (uVar18 == uVar19) {
      *puVar2 = uVar9;
      puVar2[1] = uVar19;
      puVar2[2] = puVar20[2];
    }
    else {
      do {
        uVar15 = uVar12;
        uVar12 = plVar14[uVar15 * 3 + 2];
      } while (plVar14[uVar15 * 3 + 2] != uVar19);
      *puVar2 = uVar9;
      puVar2[1] = uVar18;
      puVar2[2] = puVar20[2];
      plVar14[uVar15 * 3 + 2] = uVar17;
      uVar17 = 0xffffffffffffffff;
    }
    puVar20[2] = (ulonglong)puVar13;
    *puVar20 = uVar17;
  }
  puVar20[1] = uVar19;
  puVar13[8] = param_1;
  return puVar13;
}

