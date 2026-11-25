// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401209b0  size: 814 bytes
// Name:    FUN_1401209b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140122630, FUN_144dbce00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401209b0(longlong param_1,uint param_2,undefined8 param_3,byte param_4,undefined4 param_5,
                  byte param_6,int param_7)

{
  char cVar1;
  undefined2 uVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  sbyte sVar8;
  byte bVar9;
  short sVar10;
  ushort uVar11;
  short *psVar12;
  uint uVar13;
  byte bVar14;
  short *psVar15;
  ulonglong uVar16;
  undefined4 uStack_48;
  undefined2 uStack_44;
  
  if (param_2 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(uint *)(param_1 + 0x1268c);
    if ((ulonglong)uVar13 != 0) {
      uVar16 = 0;
      do {
        if ((param_2 >> ((uint)uVar16 & 0x1f) & 1) != 0) {
          lVar6 = *(longlong *)(param_1 + 0x12640 + uVar16 * 8);
          if (lVar6 == 0) {
            param_2 = ~(1 << ((uint)uVar16 & 0x1f)) & param_2;
          }
          else {
            uVar2 = *(undefined2 *)(lVar6 + 0x1c);
            lVar7 = *(longlong *)(lVar6 + 8);
            uVar4 = *(undefined4 *)(lVar6 + 0x18);
            if ((lVar7 != 0) && ((ushort)(*(short *)(lVar7 + 0x12) - 1U) < _DAT_14a943ab8)) {
              *(undefined1 *)(param_1 + 0x121a4) = 1;
              uStack_48 = uVar4;
              uStack_44 = uVar2;
              FUN_144dbce00(param_1,0,lVar7,&uStack_48,0x10e);
            }
          }
        }
        uVar16 = uVar16 + 1;
      } while (uVar13 != uVar16);
    }
    sVar8 = ((byte)uVar13 < 0x21) * (' ' - (byte)uVar13);
    uVar13 = (param_2 << sVar8) >> sVar8;
  }
  if (((param_4 | param_6) == 1) && (lVar6 = *(longlong *)(param_1 + 0x12680), lVar6 != 0)) {
    lVar7 = *(longlong *)(lVar6 + 8);
    cVar1 = *(char *)(lVar7 + 0x3f);
    bVar14 = param_6 & (cVar1 == 'v' || cVar1 == '\x14');
    if ((bVar14 | param_4) == 1) {
      uVar2 = *(undefined2 *)(lVar6 + 0x1c);
      uVar4 = *(undefined4 *)(lVar6 + 0x18);
      if ((ushort)(*(short *)(lVar7 + 0x12) - 1U) < _DAT_14a943ab8) {
        *(undefined1 *)(param_1 + 0x121a4) = 1;
        bVar9 = param_4;
        if (cVar1 == 'v' || cVar1 == '\x14') {
          bVar9 = param_6;
        }
        uVar11 = bVar9 | 0x10;
        if (param_4 != 0) {
          uVar11 = (ushort)(bVar9 == 0) * 3 + 0xf;
        }
        uStack_48 = uVar4;
        uStack_44 = uVar2;
        FUN_144dbce00(param_1,0,lVar7,&uStack_48,uVar11 | 0x100);
      }
      goto LAB_140120a7a;
    }
  }
  param_4 = 0;
  bVar14 = 0;
LAB_140120a7a:
  if (((uVar13 != 0) || (param_4 != 0)) || (bVar14 != 0)) {
    sVar3 = *(short *)(param_1 + 0x1236e);
    iVar5 = *(int *)(param_1 + 0x12368);
    sVar10 = _DAT_149dd6f40;
    if ((param_4 | bVar14) == 1) {
      if ((iVar5 != param_7 & bVar14) == 1) {
        *(int *)(param_1 + 0x12368) = param_7;
        if (*(int *)(param_1 + 0x123e8) == param_7) {
          uVar16 = *(ulonglong *)(param_1 + 0x12520) & 0xfffffffffdffffff;
        }
        else {
          uVar16 = *(ulonglong *)(param_1 + 0x12520) | 0x2000000;
        }
        *(ulonglong *)(param_1 + 0x12520) = uVar16;
      }
      psVar12 = (short *)0x1475b3124;
      psVar15 = (short *)&DAT_149dd6f40;
      if (param_4 != 0) {
        psVar12 = (short *)0x147bc6598;
        psVar15 = (short *)0x149ab3998;
      }
      if (bVar14 != 0) {
        psVar15 = psVar12;
      }
      sVar10 = *psVar15;
    }
    if (sVar3 != sVar10) {
      *(short *)(param_1 + 0x1236e) = sVar10;
      if (*(short *)(param_1 + 0x123ee) == sVar10) {
        uVar16 = *(ulonglong *)(param_1 + 0x12520) & 0xffffffffffefffff;
      }
      else {
        uVar16 = *(ulonglong *)(param_1 + 0x12520) | 0x100000;
      }
      *(ulonglong *)(param_1 + 0x12520) = uVar16;
    }
    FUN_140122630(param_1,uVar13,param_3,param_5);
    if (*(int *)(param_1 + 0x12368) != iVar5) {
      *(int *)(param_1 + 0x12368) = iVar5;
      if (*(int *)(param_1 + 0x123e8) == iVar5) {
        uVar16 = *(ulonglong *)(param_1 + 0x12520) & 0xfffffffffdffffff;
      }
      else {
        uVar16 = *(ulonglong *)(param_1 + 0x12520) | 0x2000000;
      }
      *(ulonglong *)(param_1 + 0x12520) = uVar16;
    }
    if (*(short *)(param_1 + 0x1236e) != sVar3) {
      *(short *)(param_1 + 0x1236e) = sVar3;
      if (*(short *)(param_1 + 0x123ee) == sVar3) {
        uVar16 = *(ulonglong *)(param_1 + 0x12520) & 0xffffffffffefffff;
      }
      else {
        uVar16 = *(ulonglong *)(param_1 + 0x12520) | 0x100000;
      }
      *(ulonglong *)(param_1 + 0x12520) = uVar16;
    }
  }
  return;
}

