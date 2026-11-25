// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140139bb0  size: 998 bytes
// Name:    FUN_140139bb0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140139bb0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 *param_7,undefined4 param_8)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  code *pcVar7;
  longlong *plVar8;
  int iVar9;
  byte bVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  bool bVar15;
  byte bVar16;
  byte bVar17;
  ushort uVar18;
  ushort uVar19;
  uint uVar20;
  longlong lVar21;
  longlong unaff_GS_OFFSET;
  uint in_stack_ffffffffffffff60;
  
  iVar12 = func_0x0001400c4de0(0);
  *(undefined4 *)(param_7 + 4) = param_2;
  *(undefined4 *)((longlong)param_7 + 0x1c) = param_5;
  *(undefined4 *)((longlong)param_7 + 0x24) = param_3;
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  iVar5 = *(int *)(*(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x10e8) + 0x1c);
  *(int *)(param_7 + 2) = iVar5;
  *(undefined4 *)((longlong)param_7 + 0x14) = param_6;
  *(undefined1 *)(param_7 + 3) = 0xff;
  *(undefined4 *)((longlong)param_7 + 0x2c) = param_4;
  uVar20 = *(uint *)(param_7 + 8);
  switch(param_2) {
  case 0:
    uVar20 = uVar20 | 4;
    break;
  case 1:
    if ((iVar5 - 0x15U < 8) ||
       ((iVar5 - 0x30U < 0x26 && ((0x3000000001U >> ((ulonglong)(iVar5 - 0x30U) & 0x3f) & 1) != 0)))
       ) {
      uVar20 = uVar20 | 0x80000000;
    }
    else {
      uVar20 = uVar20 | 8;
    }
    break;
  case 2:
    uVar20 = uVar20 | 0x10;
    break;
  case 3:
    uVar20 = uVar20 | 0x20;
    break;
  case 6:
    uVar20 = uVar20 | 0x40;
    break;
  case 7:
    uVar20 = uVar20 | 0x80;
  }
  iVar5 = *(int *)(param_1 + 0x24);
  if (0 < (longlong)iVar5) {
    uVar2 = *(ushort *)(param_7 + 9);
    uVar3 = *(ushort *)((longlong)param_7 + 0x4a);
    uVar6 = *(uint *)((longlong)param_7 + 0x44);
    cVar1 = *(char *)((longlong)param_7 + 0x4c);
    pcVar7 = (code *)*param_7;
    lVar21 = 0;
    bVar15 = false;
    uVar4 = 0;
    do {
      lVar14 = *(longlong *)(param_1 + 0x28);
      uVar13 = *(uint *)(lVar14 + 0x14 + lVar21);
      uVar18 = uVar4;
      if ((((uVar13 & uVar6) == 0 && (~uVar13 & uVar20) == 0) &&
          (uVar19 = *(ushort *)(lVar14 + 0x12 + lVar21),
          (uVar19 & uVar3) == 0 && (~uVar19 & uVar2) == 0)) &&
         (plVar8 = *(longlong **)(lVar14 + 8 + lVar21), plVar8 != (longlong *)0x0)) {
        if (!bVar15) {
          *(uint *)(param_7 + 5) =
               1 << (*(byte *)(param_7 + 4) & 0x1f) & 0xffU |
               (*(uint *)((longlong)param_7 + 0x24) & 0xff) << 8;
        }
        if (cVar1 == '\0') {
LAB_140139da0:
          if (pcVar7 != (code *)0x0) {
            in_stack_ffffffffffffff60 = *(uint *)(lVar14 + 0x18 + lVar21);
            iVar9 = 0;
            for (uVar13 = *(ushort *)(lVar14 + 0x1e + lVar21) & 0x1f; (uVar13 & 1) == 0;
                uVar13 = uVar13 >> 1 | 0x80000000) {
              iVar9 = iVar9 + 1;
            }
            cVar11 = (*pcVar7)(param_2,param_5,param_6,param_8,iVar9,in_stack_ffffffffffffff60,
                               plVar8,uVar19);
            if (cVar11 == '\0') goto LAB_140139ee2;
            lVar14 = *(longlong *)(param_1 + 0x28);
          }
          uVar19 = *(ushort *)(lVar14 + 0x1c + lVar21);
          uVar18 = uVar19 & 0xfffe;
          if (((code *)param_7[1] != (code *)0x0) && (uVar4 != uVar18)) {
            in_stack_ffffffffffffff60 =
                 CONCAT22((short)(in_stack_ffffffffffffff60 >> 0x10),uVar19) & 0xfffffffe;
            (*(code *)param_7[1])(param_2,param_5,param_6,param_8,uVar4,in_stack_ffffffffffffff60);
            lVar14 = *(longlong *)(param_1 + 0x28);
          }
          bVar10 = *(byte *)((longlong)param_7 + 0x19);
          bVar16 = (byte)*(undefined2 *)(lVar14 + 0x1e + lVar21);
          bVar17 = bVar10 & 0xe0;
          *(byte *)((longlong)param_7 + 0x19) = -bVar16 & bVar16 & 0x1f | bVar17;
          bVar16 = *(byte *)(lVar14 + 0x1e + lVar21) & 0x1f;
          *(byte *)((longlong)param_7 + 0x19) = bVar16 | bVar17;
          uVar4 = *(ushort *)(lVar14 + 0x1e + lVar21);
          uVar19 = uVar4 >> 5 & 0xff;
          if ((uVar4 >> 0xd & 1) == 0) {
            uVar19 = 0xffff;
          }
          *(ushort *)((longlong)param_7 + 0x1a) = uVar19;
          uVar4 = *(ushort *)(lVar14 + 0x1c + lVar21);
          bVar17 = (byte)(uVar4 >> 8);
          *(byte *)((longlong)param_7 + 0x3c) = bVar17 >> 2 & 1;
          *(byte *)((longlong)param_7 + 0x3d) = bVar17 >> 3 & 1;
          *(bool *)((longlong)param_7 + 0x3e) = (uVar4 & 0xc) != 0;
          *(byte *)((longlong)param_7 + 0x19) =
               bVar16 | bVar10 & 0xc0 |
               (byte)((ushort)*(undefined2 *)(lVar14 + 0x1e + lVar21) >> 9) & 0x20;
          uVar13 = *(ushort *)(lVar14 + 0x10 + lVar21) & 0x1f;
          if (uVar13 == 0x1f) {
            uVar13 = 0xffffffff;
          }
          *(uint *)(param_7 + 6) = uVar13;
          uVar13 = (uint)(*(ushort *)(lVar14 + 0x10 + lVar21) >> 5);
          if (uVar13 == 0x7ff) {
            uVar13 = 0xffffffff;
          }
          *(uint *)((longlong)param_7 + 0x34) = uVar13;
          (**(code **)(*plVar8 + 0x30))(plVar8,param_7 + 2);
        }
        else {
          bVar10 = (**(code **)(*plVar8 + 0x50))(plVar8);
          *(byte *)(param_7 + 3) = bVar10;
          if (3 < bVar10) {
            lVar14 = *(longlong *)(param_1 + 0x28);
            goto LAB_140139da0;
          }
        }
LAB_140139ee2:
        bVar15 = true;
      }
      lVar21 = lVar21 + 0x20;
      uVar4 = uVar18;
    } while ((longlong)iVar5 * 0x20 != lVar21);
    if (((code *)param_7[1] != (code *)0x0) && (uVar18 != 0)) {
      (*(code *)param_7[1])
                (param_2,param_5,param_6,param_8,uVar18,in_stack_ffffffffffffff60 & 0xffff0000);
    }
  }
  if (iVar12 == 1) {
    return;
  }
  *(int *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x76c) = iVar12;
  return;
}

