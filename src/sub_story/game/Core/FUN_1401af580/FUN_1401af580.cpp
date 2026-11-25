// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401af580  size: 77 bytes
// Name:    FUN_1401af580
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fa45a0, FUN_140d23cc0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401af580(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 uVar6;
  char cVar7;
  byte bVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 *puVar15;
  undefined *puVar16;
  undefined4 uVar17;
  float fVar18;
  int iStack_68;
  undefined1 auStack_64 [4];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  
  if ((param_1[0x145] != 0) && (*(longlong *)(param_1[0x145] + 0x40) != 0)) {
    uStack_40 = 0x1401af5b4;
    uVar11 = FUN_144fa45a0();
    uStack_40 = 0x1401af5c2;
    FUN_140d23cc0(param_1,*param_3,uVar11);
  }
  FUN_145072460();
  *(byte *)((longlong)param_2 + 0x1b2) = *(byte *)((longlong)param_2 + 0x1b2) | 0x40;
  lVar12 = param_1[0x145];
  if ((lVar12 == 0) || ((*(byte *)(lVar12 + 0x95) & 8) == 0)) {
    lVar10 = 0x30;
  }
  else {
    lVar10 = 0x990;
  }
  lVar10 = func_0x000144fa4640(*(undefined4 *)((longlong)param_1 + lVar10 + 0x28));
  if (lVar10 == 0) {
    lVar10 = FUN_144fa45a0(param_1);
  }
  if (lVar12 == 0) goto code_r0x0001401afcee;
  (**(code **)(*param_1 + 0x578))(param_1,auStack_64);
  (**(code **)(*param_1 + 0x580))(param_1,&iStack_68);
  uVar6 = (**(code **)(*param_1 + 0x518))(param_1);
  uVar9 = *(uint *)((longlong)param_1 + 0xa34);
  uVar13 = (ulonglong)uVar9 & 0x1ffff;
  if ((uVar13 == 0x1ffff) ||
     (plVar4 = *(longlong **)((ulonglong)(uVar9 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
     plVar4 == (longlong *)0x0)) {
    lVar14 = 0;
  }
  else {
    uVar2 = *(uint *)(plVar4[5] + uVar13 * 4);
    lVar14 = 0;
    if (uVar9 >> 0x16 == (uVar2 >> 0x11 & 0x3ff) &&
        (uVar2 & *(uint *)(plVar4 + 6)) == *(uint *)(plVar4 + 6)) {
      lVar14 = (ulonglong)(uint)((int)plVar4[1] * (int)uVar13) + *plVar4;
    }
  }
  lVar5 = param_1[0x131];
  uVar11 = FUN_144fa45a0(param_1);
  FUN_1401b02c0(param_2,lVar12,lVar10,param_1 + 6,auStack_64,&iStack_68,uVar11,(int)lVar5,lVar14,
                uVar6);
  if (iStack_68 != 0) {
    *(int *)((longlong)param_1 + 0xbc4) = iStack_68;
  }
  lVar10 = _UNK_14615fae0;
  iVar1 = (int)param_1[5];
  if (iVar1 == 1) {
code_r0x0001401afce3:
    *(undefined4 *)(param_2 + 0x38) = 0;
    goto code_r0x0001401afcee;
  }
  if (iVar1 == 3) {
    if ((*(byte *)(lVar12 + 0x88) & 1) != 0) {
      *(undefined4 *)(param_2 + 0x38) = 4;
      goto code_r0x0001401afcee;
    }
  }
  else if (iVar1 == 4) goto code_r0x0001401afce3;
  if (param_1[0x166] != 0 || param_1[0x164] != 0) {
    *(undefined4 *)(param_2 + 0x38) = 5;
    param_2[0x2c] = lVar10;
    goto code_r0x0001401afcee;
  }
  cVar7 = FUN_1415497f0(iVar1,param_1[0x145]);
  lVar10 = _UNK_146172e80;
  if (cVar7 == '\0') {
    if (*(char *)((longlong)param_1 + 0xbd9) != '\x01') goto code_r0x0001401afcee;
    *(undefined1 *)((longlong)param_1 + 0xbd9) = 0;
    if ((*(float *)(lVar12 + 0x50) <= 0.0) || (lVar10 = param_1[0x3e], lVar10 == 0))
    goto code_r0x0001401afcee;
    fVar18 = _DAT_145fc6ed8 / *(float *)(lVar12 + 0x50);
code_r0x0001401afe33:
    FUN_1422dc2b0(*(undefined8 *)(lVar10 + 0xc40),fVar18);
    lVar10 = param_1[0x3e];
    fVar18 = _DAT_146159bd4 / *(float *)(lVar12 + 0x50);
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0xbd9) = 1;
    *(undefined4 *)(param_2 + 0x38) = 5;
    param_2[0x2c] = lVar10;
    if ((param_1[0x12] != 0) &&
       (uVar9 = *(uint *)(param_1[0x12] + 0xd0),
       (uVar9 & 0x7ff) == 0xd && 0x5ffffff < (int)(uVar9 * 0x80))) {
      if ((char)param_1[0x17b] != '\0') goto code_r0x0001401afcee;
      *(undefined1 *)(param_1 + 0x17b) = 1;
      lVar10 = param_1[0x3e];
      if (lVar10 == 0) goto code_r0x0001401afcee;
      fVar18 = _DAT_145fc6ed8 / *(float *)(lVar12 + 0x50);
      goto code_r0x0001401afe33;
    }
    if ((char)param_1[0x17b] != '\x01') goto code_r0x0001401afcee;
    *(undefined1 *)(param_1 + 0x17b) = 0;
    if (param_1[0x3e] == 0) goto code_r0x0001401afcee;
    FUN_1422dc2b0(*(undefined8 *)(param_1[0x3e] + 0xc40),_DAT_145fc6f78);
    lVar10 = param_1[0x3e];
    fVar18 = _UNK_145fc6f9c;
  }
  FUN_1422dc2f0(*(undefined8 *)(lVar10 + 0xc40),fVar18);
code_r0x0001401afcee:
  lVar12 = func_0x0001450735b0(param_1[0x1e],param_1[0x3c]);
  if (((lVar12 != 0) && (!SBORROW1('\0',*(char *)(lVar12 + 0x17)))) &&
     (*(longlong *)(lVar12 + 8) != 0)) {
    *(undefined4 *)(param_2 + 0xf) = 0;
    puVar16 = &UNK_14678d1bb;
    if (*(undefined **)(lVar12 + 8) != (undefined *)0x0) {
      puVar16 = *(undefined **)(lVar12 + 8);
    }
    if (*(char *)(lVar12 + 0x17) < '\0') {
      puVar16 = (undefined *)(lVar12 + 8);
    }
    param_2[0x17] = (longlong)puVar16;
  }
  cVar7 = func_0x000145311e80(param_1 + 0x13c);
  if (cVar7 != '\0') {
    *(undefined8 *)((longlong)param_2 + 0xd) = *(undefined8 *)((longlong)param_1 + 0x9ed);
    lVar12 = param_1[0x13d];
    *param_2 = param_1[0x13c];
    param_2[1] = lVar12;
    FUN_1453c60b0(param_2 + 3,param_1 + 0x13f);
    param_2[6] = param_1[0x142];
  }
  *(undefined1 *)(param_2 + 0x1e) = 0;
  param_2[0x1f] = 0;
  bVar8 = (**(code **)(*param_1 + 0x158))(param_1);
  uVar17 = FUN_144fa4520(param_1,*param_3,(byte)(*(uint *)(param_1 + 0x1b) >> 0xd) & 1 & bVar8);
  *(undefined4 *)((longlong)param_2 + 0xb4) = uVar17;
  lVar12 = FUN_144fa45a0(param_1);
  if (lVar12 == 0) {
    return;
  }
  lVar12 = func_0x0001401b01d0(*(undefined4 *)(lVar12 + 0x9c));
  if (lVar12 == 0) {
    return;
  }
  puVar3 = *(undefined8 **)(lVar12 + 0x10);
  if (puVar3 != (undefined8 *)0x0) {
    cVar7 = (**(code **)*puVar3)(puVar3,3);
    if (cVar7 == '\0') {
      cVar7 = (**(code **)*puVar3)(puVar3,7);
      if (cVar7 == '\0') {
        return;
      }
      plVar4 = (longlong *)puVar3[3];
      cVar7 = (**(code **)(*plVar4 + 8))(plVar4,8);
      if (cVar7 == '\0') {
        return;
      }
      lVar12 = plVar4[0x11];
      uVar9 = FUN_1436e0a50((int)plVar4[0x10],lVar12,*(undefined4 *)(puVar3 + 0x1a));
      if (uVar9 == 0xffffffff) {
        return;
      }
      lVar12 = lVar12 + (ulonglong)(uVar9 >> 4) * 0x90 + 0x10 + (ulonglong)(uVar9 & 0xf) * 8;
    }
    else {
      plVar4 = (longlong *)puVar3[3];
      cVar7 = (**(code **)(*plVar4 + 8))(plVar4,4);
      if (cVar7 == '\0') {
        return;
      }
      if (_DAT_14ab56e38 == 0) {
        uVar17 = 0;
      }
      else {
        uVar17 = FUN_142dd7510(puVar3 + 0x18);
      }
      lVar12 = plVar4[0x11];
      uVar9 = FUN_1436e09a0((int)plVar4[0x10],lVar12,uVar17);
      if (uVar9 == 0xffffffff) {
        return;
      }
      lVar12 = lVar12 + (ulonglong)(uVar9 >> 4) * 0x90 + 0x10 + (ulonglong)(uVar9 & 0xf) * 8;
    }
    if (param_2[0x17] == 0) {
      if ((int)param_2[0xf] == 0) {
        return;
      }
      puVar15 = auStack_60;
      func_0x00014059ed00(puVar15);
    }
    else {
      uVar11 = func_0x0001413e5fa0();
      puVar15 = auStack_50;
      func_0x0001407e09f0(puVar15,uVar11);
    }
    lVar12 = FUN_14059ee90(*(undefined4 *)(lVar12 + 4),1,puVar15);
    param_2[0x17] = lVar12;
    return;
  }
  return;
}

