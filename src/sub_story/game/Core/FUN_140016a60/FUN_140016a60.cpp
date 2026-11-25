// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140016a60  size: 1342 bytes
// Name:    FUN_140016a60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400163b0, FUN_140016490, FUN_14221ff50, FUN_144dd81c0, FUN_144dd7f40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


char FUN_140016a60(longlong *param_1,int param_2)

{
  int iVar1;
  short *psVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  
  uVar14 = 0;
  do {
    if (*(uint *)((longlong)param_1 + 0x9c) < 0x106) {
      FUN_144dd81c0(param_1);
      uVar11 = *(uint *)((longlong)param_1 + 0x9c);
      if (param_2 == 0 && uVar11 < 0x106) {
        return '\0';
      }
      if (uVar11 == 0) {
        if ((int)param_1[0x12] != 0) {
          uVar14 = *(uint *)((longlong)param_1 + 0x16f4);
          bVar10 = *(byte *)(param_1[10] + (ulonglong)(*(int *)((longlong)param_1 + 0x94) - 1));
          *(undefined2 *)(param_1[0x2df] + (ulonglong)uVar14 * 2) = 0;
          *(uint *)((longlong)param_1 + 0x16f4) = uVar14 + 1;
          *(byte *)(param_1[0x2dd] + (ulonglong)uVar14) = bVar10;
          psVar2 = (short *)((longlong)param_1 + (ulonglong)bVar10 * 4 + 0xbc);
          *psVar2 = *psVar2 + 1;
          *(undefined4 *)(param_1 + 0x12) = 0;
        }
        iVar15 = *(int *)((longlong)param_1 + 0x84);
        if ((longlong)iVar15 < 0) {
          lVar13 = 0;
        }
        else {
          lVar13 = (longlong)iVar15 + param_1[10];
        }
        FUN_140016490(param_1,lVar13,*(int *)((longlong)param_1 + 0x94) - iVar15,param_2 == 4);
        *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_1 + 0x94);
        FUN_1400163b0(*param_1);
        if (*(int *)(*param_1 + 0x18) == 0) {
          return (param_2 == 4) * '\x02';
        }
        return (param_2 == 4) * '\x02' + '\x01';
      }
      if (2 < uVar11) goto LAB_140016a8e;
    }
    else {
LAB_140016a8e:
      uVar11 = *(uint *)((longlong)param_1 + 0x94);
      uVar12 = ((uint)*(byte *)(param_1[10] + (ulonglong)(uVar11 + 2)) ^
               (int)param_1[0xe] << (*(byte *)(param_1 + 0x10) & 0x1f)) &
               *(uint *)((longlong)param_1 + 0x7c);
      *(uint *)(param_1 + 0xe) = uVar12;
      lVar13 = param_1[0xd];
      uVar3 = *(ushort *)(lVar13 + (ulonglong)uVar12 * 2);
      uVar14 = (uint)uVar3;
      *(ushort *)(param_1[0xc] + (ulonglong)(*(uint *)((longlong)param_1 + 0x4c) & uVar11) * 2) =
           uVar3;
      *(short *)(lVar13 + (ulonglong)uVar12 * 2) = (short)uVar11;
    }
    uVar11 = *(uint *)(param_1 + 0x11);
    *(uint *)(param_1 + 0x14) = uVar11;
    *(int *)((longlong)param_1 + 0x8c) = (int)param_1[0x13];
    uVar9 = 2;
    uVar12 = 2;
    *(undefined4 *)(param_1 + 0x11) = 2;
    if (uVar14 != 0) {
      uVar12 = uVar9;
      if ((uVar11 < *(uint *)(param_1 + 0x15)) &&
         (uVar11 = *(int *)((longlong)param_1 + 0x94) - uVar14,
         uVar11 <= *(int *)((longlong)param_1 + 0x44) - 0x106U)) {
        if ((*(uint *)(param_1 + 0x16) & 0xfffffffe) == 2) {
          if (uVar11 != 1 || *(uint *)(param_1 + 0x16) != 3) goto LAB_140016b58;
          uVar12 = FUN_14221ff50(param_1,uVar14);
        }
        else {
          uVar12 = FUN_144dd7f40(param_1,uVar14);
        }
        *(uint *)(param_1 + 0x11) = uVar12;
        if ((uVar12 < 6) &&
           (((int)param_1[0x16] == 1 ||
            ((uVar12 == 3 &&
             (uVar12 = 3, 0x1000 < (uint)(*(int *)((longlong)param_1 + 0x94) - (int)param_1[0x13])))
            )))) {
          *(undefined4 *)(param_1 + 0x11) = 2;
          uVar12 = 2;
        }
      }
LAB_140016b58:
      uVar11 = *(uint *)(param_1 + 0x14);
    }
    if ((uVar11 < 3) || (uVar11 < uVar12)) {
      if ((int)param_1[0x12] == 0) {
        *(undefined4 *)(param_1 + 0x12) = 1;
        *(int *)((longlong)param_1 + 0x94) = *(int *)((longlong)param_1 + 0x94) + 1;
        *(int *)((longlong)param_1 + 0x9c) = *(int *)((longlong)param_1 + 0x9c) + -1;
      }
      else {
        uVar11 = *(uint *)((longlong)param_1 + 0x16f4);
        bVar10 = *(byte *)(param_1[10] + (ulonglong)(*(int *)((longlong)param_1 + 0x94) - 1));
        *(undefined2 *)(param_1[0x2df] + (ulonglong)uVar11 * 2) = 0;
        *(uint *)((longlong)param_1 + 0x16f4) = uVar11 + 1;
        *(byte *)(param_1[0x2dd] + (ulonglong)uVar11) = bVar10;
        psVar2 = (short *)((longlong)param_1 + (ulonglong)bVar10 * 4 + 0xbc);
        *psVar2 = *psVar2 + 1;
        if (*(int *)((longlong)param_1 + 0x16f4) == (int)param_1[0x2de] + -1) {
          iVar15 = *(int *)((longlong)param_1 + 0x84);
          if ((longlong)iVar15 < 0) {
            lVar13 = 0;
          }
          else {
            lVar13 = param_1[10] + (longlong)iVar15;
          }
          FUN_140016490(param_1,lVar13,*(int *)((longlong)param_1 + 0x94) - iVar15,0);
          *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_1 + 0x94);
          FUN_1400163b0(*param_1);
        }
        *(int *)((longlong)param_1 + 0x94) = *(int *)((longlong)param_1 + 0x94) + 1;
        *(int *)((longlong)param_1 + 0x9c) = *(int *)((longlong)param_1 + 0x9c) + -1;
        if (*(int *)(*param_1 + 0x18) == 0) {
          return '\0';
        }
      }
    }
    else {
      iVar15 = *(int *)((longlong)param_1 + 0x94);
      iVar4 = *(int *)((longlong)param_1 + 0x9c);
      uVar12 = *(uint *)((longlong)param_1 + 0x16f4);
      bVar10 = (char)uVar11 - 3;
      iVar16 = -3;
      uVar11 = iVar15 + -1 + ~*(uint *)((longlong)param_1 + 0x8c);
      *(short *)(param_1[0x2df] + (ulonglong)uVar12 * 2) =
           (short)iVar15 + (short)~*(uint *)((longlong)param_1 + 0x8c);
      *(uint *)((longlong)param_1 + 0x16f4) = uVar12 + 1;
      *(byte *)(param_1[0x2dd] + (ulonglong)uVar12) = bVar10;
      psVar2 = (short *)((longlong)param_1 + (ulonglong)(byte)(&UNK_14618b170)[bVar10] * 4 + 0x4c0);
      *psVar2 = *psVar2 + 1;
      uVar12 = ((uVar11 & 0xffff) >> 7) + 0x100;
      if ((ushort)uVar11 < 0x100) {
        uVar12 = uVar11;
      }
      psVar2 = (short *)((longlong)param_1 +
                        (ulonglong)(byte)(&UNK_14618af70)[uVar12 & 0xffff] * 4 + 0x9b0);
      *psVar2 = *psVar2 + 1;
      iVar5 = (int)param_1[0x14];
      iVar6 = *(int *)((longlong)param_1 + 0x94);
      iVar7 = *(int *)((longlong)param_1 + 0x16f4);
      lVar13 = param_1[0x2de];
      *(int *)((longlong)param_1 + 0x9c) = (*(int *)((longlong)param_1 + 0x9c) - iVar5) + 1;
      *(int *)(param_1 + 0x14) = iVar5 + -2;
      iVar1 = 0;
      do {
        iVar17 = iVar1;
        uVar11 = iVar6 + 1 + iVar17;
        *(uint *)((longlong)param_1 + 0x94) = uVar11;
        if (uVar11 <= (uint)(iVar15 + -3 + iVar4)) {
          uVar12 = ((uint)*(byte *)(param_1[10] + (ulonglong)(uint)(iVar6 + 3 + iVar17)) ^
                   (int)param_1[0xe] << (*(byte *)(param_1 + 0x10) & 0x1f)) &
                   *(uint *)((longlong)param_1 + 0x7c);
          *(uint *)(param_1 + 0xe) = uVar12;
          lVar8 = param_1[0xd];
          uVar3 = *(ushort *)(lVar8 + (ulonglong)uVar12 * 2);
          uVar14 = (uint)uVar3;
          *(ushort *)(param_1[0xc] + (ulonglong)(uVar11 & *(uint *)((longlong)param_1 + 0x4c)) * 2)
               = uVar3;
          *(short *)(lVar8 + (ulonglong)uVar12 * 2) = (short)iVar6 + 1 + (short)iVar17;
        }
        iVar1 = iVar5 + iVar16;
        iVar16 = iVar16 + -1;
        *(int *)(param_1 + 0x14) = iVar1;
        iVar1 = iVar17 + 1;
      } while (iVar5 + -2 != iVar17 + 1);
      *(undefined4 *)(param_1 + 0x12) = 0;
      *(undefined4 *)(param_1 + 0x11) = 2;
      iVar15 = iVar6 + iVar17 + 2;
      *(int *)((longlong)param_1 + 0x94) = iVar15;
      if (iVar7 == (int)lVar13 + -1) {
        iVar4 = *(int *)((longlong)param_1 + 0x84);
        if ((longlong)iVar4 < 0) {
          lVar13 = 0;
        }
        else {
          lVar13 = param_1[10] + (longlong)iVar4;
        }
        FUN_140016490(param_1,lVar13,iVar15 - iVar4,0);
        *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_1 + 0x94);
        FUN_1400163b0(*param_1);
        if (*(int *)(*param_1 + 0x18) == 0) {
          return '\0';
        }
      }
    }
  } while( true );
}

