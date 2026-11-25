// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140122630  size: 1697 bytes
// Name:    FUN_140122630
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140037a50, FUN_14555e5c0, FUN_140056cb0, FUN_14555e570
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140122630(longlong param_1,uint param_2,undefined4 *param_3,undefined4 param_4)

{
  char cVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  longlong lVar5;
  uint *puVar6;
  sbyte sVar7;
  undefined8 uVar8;
  char cVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  byte bVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [32];
  
  cVar2 = DAT_1485f9bf0;
  lVar10 = _DAT_1475d59c0;
  if (POPCOUNT(param_2) != 1) goto LAB_1401226eb;
  bVar15 = *(byte *)(*(longlong *)
                      (param_1 + 0x12640 + (ulonglong)(0x1f - LZCOUNT(-param_2 & param_2)) * 8) +
                    0x13);
  if (bVar15 < 0x38) {
    switch(bVar15) {
    case 0x23:
LAB_1401226db:
      lVar10 = _DAT_1475d5a48;
      break;
    case 0x24:
    case 0x26:
    case 0x27:
    case 0x28:
      break;
    case 0x25:
LAB_1401226e4:
      lVar10 = _DAT_1475d5a58;
      break;
    case 0x29:
      lVar10 = lRam00000001475d59e8;
      break;
    case 0x2a:
      goto code_r0x000140122696;
    case 0x2b:
      lVar10 = lRam00000001475d5a18;
      break;
    default:
      switch(bVar15) {
      case 0xb:
        goto LAB_1401226db;
      case 0xd:
        goto LAB_1401226e4;
      case 0x10:
        lVar10 = lRam00000001475d59f8;
        break;
      case 0x11:
        lVar10 = lRam00000001475d5a38;
      }
    }
  }
  else {
    if (bVar15 == 0x38) goto LAB_1401226db;
    if (bVar15 == 0x3a) goto LAB_1401226e4;
    if (bVar15 != 0x3e) goto LAB_1401226eb;
code_r0x000140122696:
    lVar10 = _DAT_1475d5a28;
  }
LAB_1401226eb:
  cVar1 = *(char *)(param_1 + 0x1236c);
  lVar12 = _DAT_1475d59c8;
  if (((*(int *)(param_1 + 0x1268c) == 2 && param_2 != 0) && (*(longlong *)(param_1 + 0x12648) != 0)
      ) && ((cVar9 = *(char *)(*(longlong *)(param_1 + 0x12648) + 0x13), cVar9 == '>' ||
            (cVar9 == '9')))) {
    lVar12 = _DAT_1475d59d8;
  }
  sVar3 = *(short *)(param_1 + 0x12378);
  if (cVar1 != DAT_1485f9bf0) {
    *(char *)(param_1 + 0x1236c) = DAT_1485f9bf0;
    *(ulonglong *)(param_1 + 0x12520) =
         (ulonglong)(*(char *)(param_1 + 0x123ec) != cVar2) << 0x13 |
         *(ulonglong *)(param_1 + 0x12520) & 0xfffffffffff7ffff;
  }
  lVar5 = *(longlong *)(param_1 + 0x12328);
  sVar4 = *(short *)((ulonglong)param_2 * 2 + 0x147bc65a0);
  if (sVar3 != sVar4) {
    *(short *)(param_1 + 0x12378) = sVar4;
    *(byte *)(param_1 + 0x12522) = *(byte *)(param_1 + 0x12522) | 0x20;
  }
  lVar14 = *(longlong *)(param_1 + 0x12320);
  cVar2 = *(char *)(param_1 + 0x1237d);
  bVar15 = (byte)*(int *)(param_1 + 0x1268c);
  sVar7 = (bVar15 < 0x21) * (' ' - bVar15);
  if (1 < (param_2 << sVar7) >> sVar7) {
    lVar10 = lVar12;
  }
  if (lVar5 != lVar10) {
    if (lVar5 == 0) {
      uVar13 = 0x700001f0ff;
    }
    else {
      if ((((*(longlong **)(lVar5 + 0x30) == (longlong *)0x0) ||
           (*(longlong **)(lVar10 + 0x30) == (longlong *)0x0)) ||
          (**(longlong **)(lVar5 + 0x30) != **(longlong **)(lVar10 + 0x30))) ||
         (*(char *)(lVar10 + 0x50) != *(char *)(lVar5 + 0x50))) {
        uVar13 = 0x1011;
      }
      else {
        uVar13 = 0;
      }
      if (((*(longlong **)(lVar5 + 0x38) == (longlong *)0x0) ||
          (*(longlong **)(lVar10 + 0x38) == (longlong *)0x0)) ||
         ((**(longlong **)(lVar5 + 0x38) != **(longlong **)(lVar10 + 0x38) ||
          (*(char *)(lVar10 + 0x51) != *(char *)(lVar5 + 0x51))))) {
        uVar13 = uVar13 | 0x2022;
      }
      if (((*(longlong **)(lVar5 + 0x40) == (longlong *)0x0) ||
          (*(longlong **)(lVar10 + 0x40) == (longlong *)0x0)) ||
         ((**(longlong **)(lVar5 + 0x40) != **(longlong **)(lVar10 + 0x40) ||
          (*(char *)(lVar10 + 0x52) != *(char *)(lVar5 + 0x52))))) {
        uVar13 = uVar13 | 0x4044;
      }
      if ((((*(longlong **)(lVar5 + 0x48) == (longlong *)0x0) ||
           (*(longlong **)(lVar10 + 0x48) == (longlong *)0x0)) ||
          (**(longlong **)(lVar5 + 0x48) != **(longlong **)(lVar10 + 0x48))) ||
         (*(char *)(lVar10 + 0x53) != *(char *)(lVar5 + 0x53))) {
        uVar13 = uVar13 | 0x8088;
      }
      uVar13 = uVar13 | 0x10000;
    }
    *(longlong *)(param_1 + 0x12328) = lVar10;
    *(ulonglong *)(param_1 + 0x12520) = *(ulonglong *)(param_1 + 0x12520) | uVar13;
  }
  if (cVar2 != '\x04') {
    *(undefined1 *)(param_1 + 0x1237d) = 4;
    *(ulonglong *)(param_1 + 0x12520) =
         (ulonglong)(*(char *)(param_1 + 0x123fd) != '\x04') << 0x12 |
         *(ulonglong *)(param_1 + 0x12520) & 0xfffffffffffbffff;
  }
  if (lVar14 != 0) {
    *(undefined8 *)(param_1 + 0x12320) = 0;
    *(byte *)(param_1 + 0x12522) = *(byte *)(param_1 + 0x12522) | 0x80;
  }
  puVar11 = (undefined8 *)FUN_14555e570(param_1);
  uVar8 = _UNK_14615c378;
  *puVar11 = _DAT_14615c370;
  puVar11[1] = uVar8;
  puVar11[2] = _DAT_14615a100;
  *(undefined4 *)(puVar11 + 3) = param_4;
  *(undefined4 *)((longlong)puVar11 + 0x1c) = *param_3;
  *(undefined4 *)(puVar11 + 4) = param_3[1];
  *(undefined4 *)((longlong)puVar11 + 0x24) = param_3[2];
  *(undefined4 *)(puVar11 + 5) = param_3[3];
  *(undefined8 *)((longlong)puVar11 + 0x2c) = _DAT_14615c380;
  *(undefined4 *)((longlong)puVar11 + 0x34) = param_4;
  *(undefined4 *)(puVar11 + 7) = *param_3;
  *(undefined4 *)((longlong)puVar11 + 0x3c) = param_3[1];
  *(undefined4 *)(puVar11 + 8) = param_3[2];
  *(undefined4 *)((longlong)puVar11 + 0x44) = param_3[3];
  puVar11[9] = _DAT_14615c390;
  *(undefined4 *)(puVar11 + 10) = param_4;
  *(undefined4 *)((longlong)puVar11 + 0x54) = *param_3;
  *(undefined4 *)(puVar11 + 0xb) = param_3[1];
  *(undefined4 *)((longlong)puVar11 + 0x5c) = param_3[2];
  *(undefined4 *)(puVar11 + 0xc) = param_3[3];
  if (*(longlong *)(param_1 + 0x12320) != 0) {
    *(undefined8 *)(param_1 + 0x12320) = 0;
    *(byte *)(param_1 + 0x12522) = *(byte *)(param_1 + 0x12522) | 0x80;
  }
  if (*(int *)(param_1 + 0x12530) != 0) {
    auVar16 = ZEXT816(0);
    *(undefined1 (*) [32])(param_1 + 0x12500) = ZEXT1632(auVar16);
    *(undefined1 (*) [32])(param_1 + 0x124e0) = ZEXT1632(auVar16);
    auVar17 = ZEXT1632(auVar16);
    *(undefined1 (*) [32])(param_1 + 0x124c0) = auVar17;
    *(undefined1 (*) [32])(param_1 + 0x124a0) = auVar17;
    *(undefined1 (*) [32])(param_1 + 0x12480) = auVar17;
    *(undefined1 (*) [32])(param_1 + 0x12460) = auVar17;
    auVar17 = ZEXT1632(auVar16);
    *(undefined1 (*) [32])(param_1 + 0x12440) = auVar17;
    *(undefined1 (*) [32])(param_1 + 0x12420) = auVar17;
    *(undefined1 (*) [32])(param_1 + 0x12538) = auVar17;
    *(undefined1 (*) [32])(param_1 + 0x12558) = auVar17;
    *(undefined1 (*) [32])(param_1 + 0x12578) = auVar17;
    *(undefined1 (*) [32])(param_1 + 0x12598) = auVar17;
    *(undefined1 (*) [32])(param_1 + 0x125b8) = auVar17;
    *(undefined1 (*) [32])(param_1 + 0x125d8) = auVar17;
    *(undefined1 (*) [32])(param_1 + 0x125f8) = ZEXT1632(auVar16);
    *(undefined1 (*) [32])(param_1 + 0x12618) = ZEXT1632(auVar16);
    *(byte *)(param_1 + 0x12523) = *(byte *)(param_1 + 0x12523) | 0x20;
  }
  *(undefined4 *)(param_1 + 0x12530) = 0;
  func_0x00014517acc0(param_1,3,0);
  if (((**(uint **)(param_1 + 0x12198) & 0xc000000) == 0) &&
     (cVar9 = func_0x000144e88f60(param_1), cVar9 != '\0')) {
    puVar6 = *(uint **)(param_1 + 0x12198);
    while ((*puVar6 & 0xe000000) != 0x2000000) {
      FUN_140037a50(puVar6,0,1);
    }
    FUN_140056cb0(param_1);
  }
  FUN_14555e5c0(param_1);
  if (*(char *)(param_1 + 0x1236c) != cVar1) {
    *(char *)(param_1 + 0x1236c) = cVar1;
    *(ulonglong *)(param_1 + 0x12520) =
         (ulonglong)(*(char *)(param_1 + 0x123ec) != cVar1) << 0x13 |
         *(ulonglong *)(param_1 + 0x12520) & 0xfffffffffff7ffff;
  }
  if (*(short *)(param_1 + 0x12378) != sVar3) {
    *(short *)(param_1 + 0x12378) = sVar3;
    *(byte *)(param_1 + 0x12522) = *(byte *)(param_1 + 0x12522) | 0x20;
  }
  lVar10 = *(longlong *)(param_1 + 0x12328);
  if (lVar10 != lVar5) {
    if (lVar10 == 0) {
      uVar13 = 0x700001f0ff;
    }
    else {
      if (((*(longlong **)(lVar5 + 0x30) == (longlong *)0x0 ||
            *(longlong **)(lVar10 + 0x30) == (longlong *)0x0) ||
          (**(longlong **)(lVar10 + 0x30) != **(longlong **)(lVar5 + 0x30))) ||
         (*(char *)(lVar5 + 0x50) != *(char *)(lVar10 + 0x50))) {
        uVar13 = 0x1011;
      }
      else {
        uVar13 = 0;
      }
      if (((*(longlong **)(lVar5 + 0x38) == (longlong *)0x0 ||
            *(longlong **)(lVar10 + 0x38) == (longlong *)0x0) ||
          (**(longlong **)(lVar10 + 0x38) != **(longlong **)(lVar5 + 0x38))) ||
         (*(char *)(lVar5 + 0x51) != *(char *)(lVar10 + 0x51))) {
        uVar13 = uVar13 | 0x2022;
      }
      if (((*(longlong **)(lVar5 + 0x40) == (longlong *)0x0 ||
            *(longlong **)(lVar10 + 0x40) == (longlong *)0x0) ||
          (**(longlong **)(lVar10 + 0x40) != **(longlong **)(lVar5 + 0x40))) ||
         (*(char *)(lVar5 + 0x52) != *(char *)(lVar10 + 0x52))) {
        uVar13 = uVar13 | 0x4044;
      }
      if (((*(longlong **)(lVar5 + 0x48) == (longlong *)0x0 ||
            *(longlong **)(lVar10 + 0x48) == (longlong *)0x0) ||
          (**(longlong **)(lVar10 + 0x48) != **(longlong **)(lVar5 + 0x48))) ||
         (*(char *)(lVar5 + 0x53) != *(char *)(lVar10 + 0x53))) {
        uVar13 = uVar13 | 0x8088;
      }
      uVar13 = uVar13 | 0x10000;
    }
    *(longlong *)(param_1 + 0x12328) = lVar5;
    *(ulonglong *)(param_1 + 0x12520) = *(ulonglong *)(param_1 + 0x12520) | uVar13;
  }
  if (*(char *)(param_1 + 0x1237d) != cVar2) {
    *(char *)(param_1 + 0x1237d) = cVar2;
    *(ulonglong *)(param_1 + 0x12520) =
         (ulonglong)(*(char *)(param_1 + 0x123fd) != cVar2) << 0x12 |
         *(ulonglong *)(param_1 + 0x12520) & 0xfffffffffffbffff;
  }
  if (lVar14 == 0) {
    if (*(longlong *)(param_1 + 0x12320) == 0) {
      return;
    }
    lVar14 = 0;
  }
  else if (*(longlong *)(param_1 + 0x12320) == lVar14) {
    return;
  }
  *(longlong *)(param_1 + 0x12320) = lVar14;
  *(byte *)(param_1 + 0x12522) = *(byte *)(param_1 + 0x12522) | 0x80;
  return;
}

