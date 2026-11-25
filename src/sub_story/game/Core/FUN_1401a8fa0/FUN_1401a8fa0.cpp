// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a8fa0  size: 4048 bytes
// Name:    FUN_1401a8fa0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1407a9960, FUN_144eb1320, FUN_1401abb30, FUN_1420b0340, FUN_144f4e390, FUN_140493a30, FUN_142068160, FUN_144f47530, FUN_14164f0d0, FUN_140d34590, FUN_1420b0470, FUN_145203960, FUN_144f8be40, FUN_1453cdb90, FUN_144f013e0, FUN_1401aa610, FUN_140263e20, FUN_1454387b0, FUN_1452a8db0, FUN_1413397d0, FUN_1420b0210, FUN_1451ac800, FUN_1400825f0, FUN_1440f8e90, FUN_144dd09f0, FUN_144ffa120, FUN_144db7b20, FUN_141fb80c0, FUN_1453db530, FUN_140e0f5a0, FUN_14156b690, FUN_145234a80, FUN_1401a7ff0, FUN_140769500, FUN_140ef1420, FUN_1452b2cb0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1401a8fa0(longlong param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char cVar8;
  byte bVar9;
  byte bVar10;
  char cVar11;
  byte bVar12;
  byte bVar13;
  uint uVar14;
  undefined4 uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  longlong lVar22;
  uint uVar23;
  byte bVar24;
  uint uVar25;
  undefined8 unaff_R13;
  undefined7 uVar26;
  byte bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  float fVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined8 uVar34;
  undefined8 uVar36;
  undefined1 auVar35 [64];
  byte bStack_134;
  byte bStack_11c;
  undefined4 uStack_fc;
  undefined1 auStack_f8 [8];
  float fStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  float fStack_a0;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [56];
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (param_2 & 0xffffffff) * 8);
  cVar8 = FUN_1401a7ff0();
  if ((cVar8 == '\0') && ((*(byte *)(lVar2 + 0x91) & 8) == 0)) {
    return 0;
  }
  uVar25 = *(uint *)(lVar2 + 0x20);
  if (uVar25 == 0x1ffff) {
    return 0;
  }
  uVar23 = *(uint *)(_DAT_14abb6918[5] + (ulonglong)(uVar25 & 0x1ffff) * 4);
  if ((~uVar23 & *(uint *)(_DAT_14abb6918 + 6)) != 0) {
    return 0;
  }
  uVar23 = uVar23 & 0x7fe0000;
  if (uVar23 != (uVar25 & 0xfffe0000)) {
    return 0;
  }
  lVar19 = *(longlong *)(param_1 + 8);
  bVar29 = *_DAT_14abb6918 == 0;
  if (lVar19 == 0 || bVar29) {
    return 0;
  }
  lVar22 = *_DAT_14abb6918 + (ulonglong)((uVar25 & 0x1ffff) * (int)_DAT_14abb6918[1]);
  bVar9 = FUN_1452b2cb0(*(undefined4 *)(lVar22 + 0x9c),
                        CONCAT31((int3)((uVar25 & 0xfffe0000) >> 8),bVar29),
                        CONCAT31((int3)(uVar23 >> 8),lVar19 == 0 || bVar29),0);
  lVar16 = func_0x000144ef6280(*(undefined4 *)(lVar19 + 0x9c));
  if (lVar16 != 0) {
    if ((*(byte *)(lVar16 + 0x7b) & 8) != 0) {
      return 0;
    }
    if ((*(byte *)(lVar16 + 0x107) & 8) != 0) {
      return 0;
    }
    if ((((*(byte *)(lVar16 + 0x8d) & 0x20) != 0) || ((*(byte *)(lVar16 + 0x119) & 0x20) != 0)) &&
       ((*(byte *)(lVar2 + 0x91) & 2) == 0)) {
      return 0;
    }
  }
  uVar15 = *(undefined4 *)(lVar22 + 0x9c);
  cVar8 = func_0x000144f80780(uVar15);
  if (cVar8 == '\0') {
    bVar24 = 0;
    uVar26 = 0;
  }
  else {
    lVar17 = func_0x000144eda820(uVar15);
    uVar26 = (undefined7)((ulonglong)unaff_R13 >> 8);
    bVar24 = *(byte *)(lVar17 + 0x13) & 1;
  }
  lVar17 = func_0x000144ef6280(uVar15);
  if (lVar17 == 0) {
    bVar12 = 0;
LAB_1401a915a:
    bVar10 = 0;
  }
  else {
    if ((*(byte *)(lVar17 + 0x7b) & 8) != 0) {
      return 0;
    }
    if ((*(byte *)(lVar17 + 0x107) & 8) != 0) {
      return 0;
    }
    if ((((*(byte *)(lVar17 + 0x8d) & 0x20) != 0) || ((*(byte *)(lVar17 + 0x119) & 0x20) != 0)) &&
       ((*(byte *)(lVar2 + 0x91) & 2) == 0)) {
      return 0;
    }
    bVar12 = 1;
    if ((*(byte *)(lVar17 + 0x86) & 1) == 0) {
      bVar12 = *(byte *)(lVar17 + 0x112) & 1;
    }
    if (((*(byte *)(lVar17 + 0x74) & 0x10) == 0) && ((*(byte *)(lVar17 + 0x100) & 0x10) == 0))
    goto LAB_1401a915a;
    bVar24 = 1;
    if ((*(byte *)(lVar17 + 0x7e) & 2) == 0) {
      bVar10 = (*(byte *)(lVar17 + 0x10a) & 2) >> 1;
    }
    else {
      bVar10 = 1;
    }
  }
  if ((*(byte *)(lVar2 + 0x93) & 0x40) != 0) {
    return 0;
  }
  cVar8 = FUN_144db7b20(uVar15);
  if (cVar8 != '\0') {
    return 0;
  }
  cVar8 = FUN_144eb1320(uVar15);
  if (cVar8 != '\0') {
    return 0;
  }
  lVar17 = FUN_145234a80(lVar19,0,0);
  if (((((lVar17 != 0) && (*(byte *)(lVar17 + 0xfa) < 7)) &&
       ((0x62U >> (*(byte *)(lVar17 + 0xfa) & 0x1f) & 1) != 0)) &&
      (((lVar18 = FUN_145234a80(lVar22,0,0), lVar18 == 0 || (6 < *(byte *)(lVar18 + 0xfa))) ||
       ((0x62U >> (*(byte *)(lVar18 + 0xfa) & 0x1f) & 1) == 0)))) &&
     (fVar31 = (float)FUN_140e0f5a0(lVar17), _DAT_14615bc14 < fVar31)) {
    return 0;
  }
  if ((((*(byte *)(lVar2 + 0x91) & 8) == 0) && (lVar17 != 0)) &&
     (((*(byte *)(lVar2 + 0x91) & 2) == 0 &&
      (((cVar8 = FUN_1400825f0(lVar22), cVar8 == '\0' &&
        (lVar18 = FUN_145234a80(lVar22,0,0), lVar18 == 0)) &&
       (fVar31 = (float)FUN_140e0f5a0(lVar17), _DAT_14615b980 < fVar31)))))) {
    return 0;
  }
  lVar17 = func_0x000144f20050(*(undefined4 *)(lVar22 + 0x9c));
  if (((lVar17 != 0) && (lVar17 = FUN_144ffa120(lVar17,lVar19), lVar17 != 0)) &&
     ((((*(byte *)(lVar2 + 0x91) & 2) != 0 &&
       (((*(byte *)(lVar17 + 0x215) & 2) == 0 || (2 < *(int *)(lVar17 + 0x208))))) &&
      ((*(byte *)(lVar2 + 0x93) & 0x20) == 0)))) {
    return 0;
  }
  uVar15 = *(undefined4 *)(lVar22 + 0x9c);
  cVar8 = FUN_140ef1420(uVar15,*(undefined4 *)(lVar19 + 0x9c),1);
  if (cVar8 != '\0') {
    return 0;
  }
  uStack_b8 = *(undefined8 *)(lVar22 + 0x70);
  uStack_b0 = *(undefined8 *)(lVar22 + 0x78);
  cVar8 = FUN_1453db530(*(undefined4 *)(param_1 + 0xa0),&uStack_b8,uVar15);
  iVar7 = _DAT_14abbef40;
  if ((cVar8 != '\0') && ((*(byte *)(lVar2 + 0x91) & 8) == 0)) {
    return 0;
  }
  uVar25 = (uint)(longlong)(_DAT_1499aab14 * _DAT_146159c28);
  bVar29 = (uint)(_DAT_14abbef40 - *(int *)(lVar2 + 0x7c)) < uVar25;
  bVar28 = (uint)(_DAT_14abbef40 - *(int *)(lVar2 + 0x84)) < uVar25;
  if (((*(byte *)(lVar2 + 0x92) & 2) == 0 || bVar29) || ((*(byte *)(lVar2 + 0x91) & 2) == 0)) {
    if (-1 < (char)*(byte *)(lVar2 + 0x92)) goto LAB_1401a935c;
    if (!bVar28 && !bVar29) goto LAB_1401a9372;
  }
  else {
    cVar8 = FUN_1401abb30(lVar22);
    if (cVar8 != '\0') {
      return 0;
    }
    if (*(char *)(lVar2 + 0x92) < '\0') {
      return 0;
    }
LAB_1401a935c:
    if (((*(byte *)(lVar2 + 0x93) & 2) >> 1 & (bVar28 || bVar29)) == 0) {
LAB_1401a9372:
      if (((*(byte *)(lVar2 + 0x91) & 2) != 0) &&
         ((uint)(longlong)(_DAT_1499aab10 * _DAT_146159c28) < (uint)(iVar7 - *(int *)(lVar2 + 0x70))
         )) {
        return 0;
      }
    }
  }
  if (*(char *)(param_1 + 0xeb) == '\x01') {
    cVar8 = FUN_1400825f0(lVar22);
    if (cVar8 == '\0') goto LAB_1401a9408;
    lVar17 = FUN_144f013e0(*(undefined4 *)(lVar22 + 0x9c));
    if (lVar17 == 0) {
      cVar8 = FUN_140263e20(lVar22,lVar19);
      if (cVar8 == '\0') {
        return 0;
      }
      goto LAB_1401a9408;
    }
    cVar8 = FUN_14164f0d0(lVar17);
    cVar11 = FUN_140263e20(lVar22,lVar19);
    if ((cVar8 == '\0') && (cVar11 == '\0')) {
      return 0;
    }
    bVar27 = 1;
    if (cVar8 == '\0') goto LAB_1401a9408;
  }
  else {
    cVar8 = func_0x000140d29d60(*(undefined4 *)(param_1 + 0xd4));
    if (cVar8 != '\0') {
      return 0;
    }
LAB_1401a9408:
    if (((*(byte *)(lVar2 + 0x91) & 2) != 0) ||
       ((((*(byte *)(lVar2 + 0x91) & 1) == 0 && (*(float *)(lVar2 + 0x3c) < _DAT_145fc6ed8)) ||
        (*(int *)(lVar2 + 0x78) == 0 || bVar12 != 0)))) {
      bVar27 = 0;
    }
    else {
      bVar27 = 0;
      if ((uint)(longlong)(_DAT_1499aab18 * _DAT_146159c28) < (uint)(iVar7 - *(int *)(lVar2 + 0x78))
         ) {
        return 0;
      }
    }
  }
  if (((*(char *)(param_1 + 0xe8) == '\0') && (cVar8 = FUN_1400825f0(lVar22), cVar8 != '\0')) &&
     ((uint)(iVar7 - *(int *)(param_1 + 0xd0)) < 2000)) {
    return 0;
  }
  lVar17 = func_0x000144fe0500(*(undefined4 *)(lVar22 + 0x9c));
  if ((lVar17 != 0) && (cVar8 = FUN_141fb80c0(lVar17), cVar8 != '\0')) {
    return 0;
  }
  bVar12 = FUN_1453cdb90(lVar22,lVar19);
  bVar13 = FUN_140263e20(lVar22,lVar19);
  if ((byte)(bVar27 | bVar13 | bVar12 ^ 1) != 1) {
    return 0;
  }
  uVar15 = *(undefined4 *)(lVar22 + 0x9c);
  lVar17 = func_0x0001450f21c0(uVar15);
  if ((lVar17 != 0) &&
     (cVar8 = func_0x000144ead4e0(*(undefined8 *)(lVar17 + 8),*(undefined8 *)(lVar17 + 0x28)),
     cVar8 != '\0')) {
    return 0;
  }
  cVar8 = FUN_144f8be40(uVar15,0,0);
  if (cVar8 != '\0') {
    return 0;
  }
  uVar15 = *(undefined4 *)(lVar19 + 0x9c);
  lVar17 = func_0x000144da10f0(uVar15);
  if (lVar17 != 0) {
    cVar8 = FUN_144f47530(uVar15);
    uVar34 = *(undefined8 *)(lVar17 + 0x650);
    if (((cVar8 != '\0') && (lVar17 = func_0x0001407f0910(uVar34), lVar17 != 0)) &&
       (((*(int *)(lVar17 + 0xd0) << 7) >> 0x19) - 1U < 6)) {
      uVar25 = *(uint *)(lVar17 + 0x838);
      if (uVar25 == 0x1ffff) {
LAB_1401a9613:
        lVar17 = 0;
      }
      else {
        uVar23 = *(uint *)(_DAT_14abb6918[5] + (ulonglong)(uVar25 & 0x1ffff) * 4);
        if (((~uVar23 & *(uint *)(_DAT_14abb6918 + 6)) != 0) ||
           ((uVar23 & 0x7fe0000) != (uVar25 & 0xfffe0000))) goto LAB_1401a9613;
        lVar17 = (ulonglong)((uVar25 & 0x1ffff) * (int)_DAT_14abb6918[1]) + *_DAT_14abb6918;
      }
      if (lVar17 == lVar22) {
        return 0;
      }
    }
    lVar17 = func_0x000144f3ea40(uVar34,0x89);
    if (((lVar17 != 0) &&
        (lVar17 = FUN_1413397d0(*(undefined4 *)(lVar17 + 0x1a0),*(undefined1 *)(lVar17 + 0x1f0)),
        lVar17 == lVar22)) &&
       ((lVar17 = func_0x0001452f0240(uVar34), lVar17 != 0 &&
        ((*(longlong *)(lVar17 + 0x128) != 0 &&
         ((*(byte *)(*(longlong *)(lVar17 + 0x128) + 0x80) & 0x90) != 0)))))) {
      return 0;
    }
  }
  cVar8 = FUN_1401aa610(lVar2);
  if (cVar8 == '\0') {
    bVar12 = *(byte *)(lVar2 + 0x91);
LAB_1401a9673:
    bVar29 = false;
  }
  else {
    bVar12 = *(byte *)(lVar2 + 0x91);
    if ((*(byte *)(lVar2 + 0x92) & 2) == 0) goto LAB_1401a9673;
    bVar29 = (bVar12 & 2) == 0;
  }
  if (((((bVar12 >> 1 | bVar12) & 1) == 0) && ((bVar12 & 8) == 0)) &&
     ((!bVar29 && bVar24 == 0) && *(float *)(lVar2 + 0x3c) == 0.0)) {
    return 0;
  }
  if (((*(float *)(lVar2 + 0x54) == 0.0) && (!NAN(*(float *)(lVar2 + 0x54)))) &&
     (bVar12 = FUN_1420b0470(*(undefined4 *)(lVar2 + 0x40)), (bVar10 | bVar12) != 1)) {
    return 0;
  }
  bVar12 = FUN_144f4e390(lVar22,2);
  if ((bVar12 | bVar24) != 1) {
    return 0;
  }
  bVar12 = FUN_144f4e390(lVar22,4);
  if (bVar12 != 1 || bVar24 != 0) {
    return CONCAT71(uVar26,bVar24 | bVar12) & 0xffffffff;
  }
  cVar8 = FUN_1400825f0(lVar22);
  if ((cVar8 != '\0') && (*(int *)(param_1 + 0x50) != 0)) {
    uVar25 = *(uint *)(lVar2 + 0x20);
    uVar23 = (uVar25 >> 0x10 ^ uVar25) * -0x7a143595;
    uVar23 = (uVar23 >> 0xd ^ uVar23) * -0x3d4d51cb;
    uVar23 = uVar23 >> 0x10 ^ uVar23;
    lVar17 = *(longlong *)(param_1 + 0x58);
    uVar14 = uVar23 >> 7;
    bVar12 = (byte)uVar23;
    bVar24 = bVar12 & 0x7f;
    auVar32._0_8_ =
         CONCAT17(bVar12,CONCAT16(bVar12,CONCAT15(bVar12,CONCAT14(bVar12,CONCAT13(bVar12,CONCAT12(
                                                  bVar12,CONCAT11(bVar12,bVar12))))))) &
         0x7f7f7f7f7f7f7f7f;
    auVar32[8] = bVar24;
    auVar32[9] = bVar24;
    auVar32[10] = bVar24;
    auVar32[0xb] = bVar24;
    auVar32[0xc] = bVar24;
    auVar32[0xd] = bVar24;
    auVar32[0xe] = bVar24;
    auVar32[0xf] = bVar24;
    while( true ) {
      uVar14 = uVar14 & *(int *)(param_1 + 0x50) - 1U;
      auVar33 = *(undefined1 (*) [16])(lVar17 + (ulonglong)uVar14 * 0x90);
      auVar3 = vpcmpeqb_avx(auVar33,auVar32);
      uVar4 = (ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar3[0xf] >> 7) << 0xf;
      if (uVar4 != 0) {
        uVar23 = (uint)uVar4;
        do {
          uVar5 = 0;
          for (uVar6 = uVar23; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
            uVar5 = uVar5 + 1;
          }
          if (*(uint *)((ulonglong)uVar14 * 0x90 + lVar17 + 0x10 + (ulonglong)uVar5 * 8) == uVar25)
          {
            uVar25 = uVar14 << 4 | uVar5;
            if (((uVar25 != 0xffffffff) && (*(char *)(param_1 + 0xeb) == '\0')) &&
               (2000 < (uint)(iVar7 - *(int *)(lVar17 + (ulonglong)(uVar25 >> 4) * 0x90 + 0x14 +
                                              (ulonglong)(uVar5 & 0xf) * 8)))) {
              return 0;
            }
            goto LAB_1401a9820;
          }
          uVar23 = uVar23 - 1 & uVar23;
        } while (uVar23 != 0);
      }
      auVar33 = vpsignb_avx(auVar33,auVar33);
      if ((((((((((((((((SUB161(auVar33 >> 7,0) & 1) != 0 || (SUB161(auVar33 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar33 >> 0x17,0) & 1) != 0) || (SUB161(auVar33 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar33 >> 0x27,0) & 1) != 0) || (SUB161(auVar33 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar33 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar33 >> 0x3f,0) & 1) != 0) || (SUB161(auVar33 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar33 >> 0x4f,0) & 1) != 0) || (SUB161(auVar33 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar33 >> 0x5f,0) & 1) != 0) || (SUB161(auVar33 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar33 >> 0x6f,0) & 1) != 0) || (SUB161(auVar33 >> 0x77,0) & 1) != 0) ||
          auVar33[0xf] < '\0') break;
      uVar14 = uVar14 + 1;
    }
  }
LAB_1401a9820:
  lVar17 = func_0x000144da10f0(*(undefined4 *)(lVar22 + 0x9c));
  if ((*(byte *)(lVar2 + 0x91) & 2) == 0) {
    cVar8 = FUN_1400825f0(lVar22);
    if (cVar8 == '\0') {
      cVar8 = func_0x0001401a7fc0(*(undefined1 *)(param_1 + 0xe7),*(undefined1 *)(param_1 + 0xe8));
    }
    else if (lVar16 == 0) {
      cVar8 = *(char *)(param_1 + 0xe8);
    }
    else {
      if ((*(byte *)(lVar16 + 0x9a) & 0x80) == 0) {
        if (*(char *)(param_1 + 0xe8) != '\0') {
          return 0;
        }
        if ((*(byte *)(lVar16 + 0x126) & 0x80) == 0) goto LAB_1401a98e1;
      }
      else if (*(char *)(param_1 + 0xe8) != '\0') {
        return 0;
      }
      cVar8 = *(char *)(param_1 + 0xe7);
    }
    if (cVar8 != '\0') {
      return 0;
    }
  }
  else if ((lVar17 != 0) &&
          (lVar16 = func_0x000144f3ea40(*(undefined8 *)(lVar17 + 0x650),0x89), lVar16 != 0)) {
    return 0;
  }
LAB_1401a98e1:
  lVar16 = func_0x000144f68b80(*(undefined4 *)(lVar19 + 0x9c));
  if (lVar16 == 0) {
LAB_1401a9930:
    bVar29 = false;
    lVar16 = 0;
    bVar28 = false;
  }
  else {
    func_0x000140019da0(*(undefined4 *)(lVar16 + 0xcc00),&uStack_fc);
    bVar29 = true;
    lVar16 = FUN_140493a30(lVar19,uStack_fc,1);
    if (lVar16 == 0) goto LAB_1401a9930;
    bVar28 = *(int *)(lVar16 + 0xb22c) != 0;
  }
  uStack_c8 = *(undefined8 *)(lVar19 + 0x70);
  uStack_c0 = *(undefined8 *)(lVar19 + 0x78);
  func_0x000144dc3790(&uStack_c8,auStack_78);
  bVar30 = false;
  bVar24 = FUN_1451ac800(0,*(undefined4 *)(lVar19 + 0x9c),0x1ffff,auStack_78);
  if ((bVar29) && (bVar24 == 0)) {
    bVar30 = (*(byte *)(lVar16 + 0xb270) & 0x10) == 0;
  }
  if (((lVar17 != 0) && ((*(byte *)(lVar17 + 0x195) & 2) != 0)) &&
     (0 < (longlong)*(int *)(lVar17 + 0x188))) {
    lVar16 = 0;
    do {
      if (*(short *)(lVar17 + 0x122 + lVar16 * 4) == 0x169) {
        bStack_134 = 0;
        lVar16 = FUN_145203960(*(undefined8 *)(lVar17 + 0x650),*(undefined8 *)(lVar17 + 0x660),0x169
                               ,0);
        if (lVar16 != 0) {
          bStack_134 = FUN_14156b690(lVar16,lVar19);
        }
        goto LAB_1401a99f4;
      }
      lVar16 = lVar16 + 1;
    } while (*(int *)(lVar17 + 0x188) != lVar16);
  }
  bStack_134 = 0;
LAB_1401a99f4:
  lVar16 = func_0x000144da6540(*(undefined4 *)(lVar19 + 0x9c));
  if ((lVar16 == 0) || (*(longlong *)(lVar16 + 0x10d8) == 0)) {
    bStack_11c = 0;
  }
  else {
    bStack_11c = FUN_140769500();
  }
  if ((((!bVar29 && bVar24 == 0) && (bVar9 ^ 1) == 0) && ((*(byte *)(lVar2 + 0x92) & 2) != 0)) &&
     ((~bStack_11c & (*(byte *)(lVar2 + 0x91) & 8) == 0) != 0)) {
    return 0;
  }
  if (((bVar13 == 0) && ((bVar28 | bVar24) == 1)) && (*(char *)(param_1 + 0xeb) == '\0')) {
    return 0;
  }
  bVar10 = 0;
  lVar16 = FUN_145234a80(lVar22,0,0);
  bVar12 = FUN_1400825f0(lVar22);
  if ((bVar12 & bVar30) == 1) {
    bVar10 = bVar27 ^ 1 | lVar16 != 0;
  }
  bVar12 = *(byte *)(lVar2 + 0x92);
  bVar13 = 0;
  if ((bVar10 == 0) && (bVar13 = 0, (bVar12 & 0x40) != 0)) {
    bVar13 = bVar28 | bVar24 | bStack_134 | lVar16 != 0;
  }
  if ((bVar30 == true && bVar13 == 0) && ((*(byte *)(lVar2 + 0x91) & 8) == 0)) {
    return 0;
  }
  if ((byte)(bVar12 >> 1 & (bVar13 ^ 1)) == 0) {
    bVar24 = *(byte *)(lVar2 + 0x91);
  }
  else {
    bVar24 = *(byte *)(lVar2 + 0x91);
    if ((bVar24 & 10) == 0 && ((bStack_11c | *(byte *)(lVar2 + 0x93)) & 1) == 0) {
      return 0;
    }
  }
  uVar15 = *(undefined4 *)(lVar22 + 0x9c);
  if ((bVar24 & 8) == 0) {
    cVar8 = '\0';
  }
  else {
    cVar8 = FUN_1440f8e90(uVar15);
    if ((bVar12 & 2) != 0) goto LAB_1401a9b7e;
  }
  cVar11 = FUN_1420b0340(uVar15);
  if ((cVar8 == '\0') && (cVar11 != '\0')) {
    return 0;
  }
LAB_1401a9b7e:
  cVar8 = FUN_1454387b0(*(undefined4 *)(lVar19 + 0x9c));
  if ((cVar8 != '\x01' || bVar9 != 0) || ((*(byte *)(lVar2 + 0x91) & 8) != 0)) {
    if ((lVar17 == 0) ||
       (lVar17 = func_0x000141fdae10(*(undefined8 *)(lVar17 + 0x650),*(undefined8 *)(lVar17 + 0x660)
                                    ), lVar17 == 0)) {
      bVar24 = 0;
      lVar17 = 0;
    }
    else {
      cVar8 = func_0x0001408b2890(*(undefined4 *)(lVar17 + 0xd0));
      bVar24 = 1;
      if ((cVar8 != '\0') && ((*(byte *)(lVar2 + 0x91) & 8) == 0)) {
        return 0;
      }
    }
    if (((((bVar9 ^ 1) != 0 || (uint)(iVar7 - *(int *)(param_1 + 0xcc)) < 1000) ||
         (bVar27 != 0 || (*(byte *)(lVar2 + 0x91) & 2) != 0)) ||
        (lVar18 = FUN_1452a8db0(lVar22,lVar19,0), lVar18 == 0)) || (*(int *)(lVar18 + 0xb22c) != 1))
    {
      iVar1 = *(int *)(param_1 + 200);
      cVar8 = func_0x0001401a7fc0(*(undefined1 *)(param_1 + 0xe7),*(undefined1 *)(param_1 + 0xe8));
      if ((((cVar8 != '\0') || (4999 < (uint)(iVar7 - iVar1))) ||
          ((*(byte *)(lVar2 + 0x93) & 0x10) != 0)) &&
         ((((bVar24 & bVar9) != 1 ||
           (lVar17 = func_0x000144f200a0(*(undefined4 *)(lVar17 + 0x188)), lVar17 == lVar19)) ||
          ((lVar19 = func_0x000144ef6310(*(undefined4 *)(lVar22 + 0x9c)), lVar19 == 0 ||
           (((lVar19 = FUN_140d34590(lVar19), lVar19 == 0 || (*(int *)(lVar19 + 0x2b58) != 1)) ||
            ((*(byte *)(lVar19 + 0xb26e) & 1) == 0)))))))) {
        uVar25 = *(uint *)(lVar22 + 0xe8) & 0x380000;
        if ((uVar25 != 0x180000) &&
           ((lVar16 == 0 ||
            (((bVar24 = *(byte *)(lVar16 + 0xfa), 2 < (byte)(bVar24 - 9) &&
              (cVar8 = FUN_144dd09f0(*(undefined4 *)(lVar16 + 0x9c)), cVar8 == '\0')) &&
             ((6 < bVar24 || ((0x62U >> (bVar24 & 0x1f) & 1) == 0)))))))) {
          func_0x0001453db630(auStack_88);
          uVar34 = *(undefined8 *)(lVar22 + 0x70);
          uVar36 = *(undefined8 *)(lVar22 + 0x78);
          uStack_d8 = uVar34;
          uStack_d0 = uVar36;
          func_0x000144dc3790(&uStack_d8,auStack_98);
          auVar32 = vsubps_avx(auStack_98,auStack_88);
          puVar21 = auStack_a8;
          auVar33._0_4_ = auVar32._0_4_ * auVar32._0_4_;
          auVar33._4_4_ = auVar32._4_4_ * auVar32._4_4_;
          auVar33._8_4_ = auVar32._8_4_ * auVar32._8_4_;
          auVar33._12_4_ = auVar32._12_4_ * auVar32._12_4_;
          auVar33 = vhaddps_avx(auVar33,auVar33);
          auVar32 = vrsqrtss_avx(auVar33,auVar33);
          fVar31 = auVar32._0_4_;
          auVar32 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar33,2);
          fVar31 = (float)(auVar32._0_4_ &
                          (uint)(((fVar31 * fVar31 * auVar33._0_4_ * _DAT_145fc6f08 + _DAT_145fc6edc
                                  ) * fVar31 + fVar31) * auVar33._0_4_));
          uStack_e8 = uVar34;
          uStack_e0 = uVar36;
          func_0x000144dc3790();
          puVar20 = auStack_f8;
          func_0x0001453db630();
          if (fVar31 < _DAT_145fc6f00) {
            return 0;
          }
          auVar35 = ZEXT464((uint)(fStack_a0 - fStack_f0));
          fVar31 = (float)((uint)(fStack_a0 - fStack_f0) & _DAT_145fc6f4c);
          atan2f(puVar20,puVar21);
          auVar32 = vcmpss_avx(auVar35._0_16_,auVar35._0_16_,7);
          if (_DAT_1499aaae0 < (fVar31 + (float)(~auVar32._0_4_ & _DAT_145fc6f84)) * _DAT_146159c20)
          {
            return 0;
          }
        }
        if (((*(byte *)(lVar2 + 0x92) & 2) != 0) &&
           (bVar24 = *(byte *)(lVar2 + 0x91), (bVar24 & 2) == 0)) {
          lVar19 = func_0x000144ef6110(*(undefined4 *)(lVar22 + 0x9c));
          if (lVar19 == 0) {
            bVar29 = false;
          }
          else {
            bVar29 = *(int *)(lVar19 + 0x158) != 0xd;
          }
          if ((bVar9 == 0 && uVar25 != 0x180000) && ((bool)(~bVar29 & (bVar24 & 4) == 0))) {
            return 0;
          }
        }
        cVar8 = FUN_1420b0210(lVar22);
        if (cVar8 == '\0') {
          cVar8 = FUN_142068160(lVar22);
          if (cVar8 != '\0') {
            uVar15 = *(undefined4 *)(lVar22 + 0x9c);
            lVar19 = func_0x000144e23bb0(uVar15);
            lVar16 = func_0x000144f3aef0(uVar15);
            if (lVar16 != 0 && lVar19 != 0) {
              uVar15 = func_0x0001450e52e0(lVar16 + 0x10,0xb7);
              uVar23 = *(uint *)(lVar19 + 0x10);
              if (((uVar23 & 3) != 0) &&
                 (uVar14 = func_0x000144dc06c0(uVar15), uVar14 < 120000 && (uVar23 & 8) == 0)) {
                return 0;
              }
            }
          }
          if ((((*(byte *)(lVar2 + 0x93) & 0x20) != 0) ||
              (cVar8 = FUN_1407a9960(param_1,lVar22), cVar8 != '\0')) ||
             ((*(byte *)(lVar2 + 0x91) & 8) != 0)) {
            return CONCAT71((uint7)(uint3)(uVar25 >> 8),1);
          }
        }
      }
    }
  }
  return 0;
}

