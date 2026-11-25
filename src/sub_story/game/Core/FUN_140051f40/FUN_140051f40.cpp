// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140051f40  size: 1686 bytes
// Name:    FUN_140051f40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140051f40(longlong param_1,undefined1 param_2,ulonglong param_3,longlong *param_4)

{
  undefined *puVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 *puVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  bool bVar20;
  float fVar26;
  float fVar27;
  undefined1 auVar21 [16];
  float fVar28;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined4 uVar39;
  float fVar40;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar41 [64];
  float fVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [64];
  float fVar48;
  float fVar51;
  uint uVar52;
  float fVar53;
  uint uVar54;
  float fVar55;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [64];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 uStack_74c;
  undefined1 uStack_74b;
  undefined1 uStack_74a;
  undefined1 uStack_749;
  ulonglong uStack_748;
  longlong lStack_740;
  undefined8 uStack_738;
  longlong lStack_730;
  undefined1 auStack_728 [32];
  undefined *puStack_708;
  undefined4 uStack_700;
  uint uStack_6fc;
  undefined4 uStack_6f8;
  uint uStack_6f4;
  byte bStack_6f0;
  undefined8 uStack_6d0;
  undefined *apuStack_3b0 [7];
  undefined8 uStack_378;
  undefined *puStack_f0;
  undefined8 *puStack_c8;
  undefined1 auStack_b8 [8];
  float fStack_b0;
  float fStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_60;
  
  switch(param_2) {
  case 1:
    lVar12 = *param_4;
    if (lVar12 != 0) {
      FUN_1402e36e0(param_1,CONCAT71(0x146752b,*(undefined1 *)(lVar12 + 0x18)),
                    *(undefined1 *)(lVar12 + 0x19),
                    CONCAT71((uint7)(uint3)((uint)*(undefined4 *)(lVar12 + 0x10) >> 8),1),
                    *(undefined1 *)(lVar12 + 0x1a),*(undefined4 *)(lVar12 + 0x10),
                    *(undefined4 *)(lVar12 + 0x14));
    }
    break;
  case 2:
    plVar8 = *(longlong **)(param_1 + 8);
    bVar2 = *(byte *)(param_1 + 0xfc);
    lVar12 = *(longlong *)(*plVar8 + 0x20);
    if (lVar12 == 0) {
code_r0x000140052244:
      puVar10 = (undefined4 *)(&UNK_14633dfe4 + (ulonglong)(bVar2 % 5) * 4);
    }
    else {
      lVar11 = func_0x000144edeed0();
      if ((*(int *)(lVar11 + 0x78) == 0) || (uVar14 = *(ulonglong *)(lVar12 + 0x60), uVar14 == 0))
      goto code_r0x000140052244;
      lVar12 = *(longlong *)(lVar11 + 0x80);
      uVar17 = *(int *)(lVar11 + 0x78) - 1;
      uVar18 = (uVar14 >> 0x21 ^ uVar14) * -0xae502812aa7333;
      lVar11 = (uVar18 >> 0x21 ^ uVar18) * -0x3b314601e57a13ad;
      uVar15 = (ulonglong)(((uint)((ulonglong)lVar11 >> 0x21) ^ (uint)lVar11) & uVar17);
      uVar18 = *(ulonglong *)(lVar12 + uVar15 * 0x10);
      while ((uVar18 != 0 && (uVar18 != uVar14))) {
        uVar15 = (ulonglong)((uint)(uVar15 * 0x10 + 0x10 >> 4) & uVar17);
        uVar18 = *(ulonglong *)(lVar12 + uVar15 * 0x10);
      }
      if (uVar18 == 0) goto code_r0x000140052244;
      puVar10 = (undefined4 *)(lVar12 + 8 + uVar15 * 0x10);
    }
    *(undefined4 *)(param_1 + 0xf8) = *puVar10;
    if ((char)param_3 == '\x04') {
      lVar12 = func_0x000144db7870(plVar8);
      if (*(longlong *)(lVar12 + 0x80) != 0) {
        lVar11 = (ulonglong)((uint)bRam00000001499a9fe8 * 2) * 3;
        bVar2 = *(byte *)((longlong)plVar8 + lVar11 + 0x18);
        if (((((bVar2 == 0x1e) &&
              (bVar2 = *(byte *)((longlong)plVar8 + lVar11 + 0x19), bVar2 == 0x1e)) &&
             (bVar2 = *(byte *)((longlong)plVar8 + lVar11 + 0x1a), bVar2 == 0x1e)) &&
            ((bVar2 = *(byte *)((longlong)plVar8 + lVar11 + 0x1b), bVar2 == 0x1e &&
             (bVar2 = *(byte *)((longlong)plVar8 + lVar11 + 0x1c), bVar2 == 0x1e)))) &&
           (bVar2 = *(byte *)((longlong)plVar8 + lVar11 + 0x1d), bVar2 == 0x1e)) {
          lVar11 = 0;
        }
        else {
          lVar11 = plVar8[(ulonglong)bVar2 + 0x14];
        }
        lStack_740 = *(longlong *)(lVar11 + 0x80);
        if (lStack_740 == 0) {
          uStack_748 = 0;
          lStack_740 = 0;
          uStack_738 = 0;
          lStack_730 = 0;
        }
        else {
          lStack_730 = *(longlong *)(lVar11 + 0x90);
          if (lStack_730 == 0) {
            uStack_748 = 0;
            lStack_740 = *(longlong *)(lVar11 + 0x3fU & 0xfffffffffffffff0);
            uStack_738 = 0;
            lStack_730 = 0;
          }
          else {
            uStack_748 = lVar11 + 0x3fU & 0xfffffffffffffff0;
            uStack_738 = *(undefined8 *)(lVar11 + 0x88);
          }
        }
        FUN_1455c9650(*(longlong *)(lVar12 + 0x80),&uStack_748);
        if (*(code **)(lVar11 + 0x90) != (code *)0x0) {
          (**(code **)(lVar11 + 0x90))(lVar11 + 0x3fU & 0xfffffffffffffff0);
        }
        auVar21._0_12_ = ZEXT812(0);
        auVar21._12_4_ = 0;
        *(undefined8 *)(lVar11 + 0x90) = 0;
        *(undefined1 (*) [16])(lVar11 + 0x80) = auVar21;
      }
    }
    else if ((((uint)param_3 & 0xff) == 1) &&
            (lVar12 = func_0x000144db7870(plVar8), *(longlong *)(lVar12 + 0x80) != 0)) {
      auStack_728 = ZEXT1232(ZEXT812(0));
      FUN_1455c9650();
    }
    break;
  case 4:
    lVar12 = func_0x000144edeed0();
    uVar17 = 0;
    *(undefined2 *)(param_1 + 0x104) =
         *(undefined2 *)
          (*(longlong *)(lVar12 + 0x90) +
          ((ulonglong)*(byte *)(param_1 + 0xfc) % (ulonglong)*(uint *)(lVar12 + 0x8c)) * 2);
    plVar8 = (longlong *)func_0x000144d9fa60(*(undefined4 *)(**(longlong **)(param_1 + 8) + 0x9c));
    if ((((char)(param_3 & 0xffffffff) == '\0') || (uVar7 = (uint)param_3 & 0xff, uVar7 == 4)) ||
       ((uVar7 == 3 && (uVar17 = 5, *(char *)(param_1 + 0x1c4) == '\0')))) {
      bVar2 = (**(code **)(*plVar8 + 0xa0))(plVar8,*(undefined1 *)(param_1 + 0x10));
      uVar17 = (uint)bVar2;
    }
    uVar39 = (undefined4)*param_4;
    bVar2 = *(byte *)(param_4 + 2);
    uVar14 = CONCAT71((int7)((ulonglong)param_4 >> 8),bVar2);
    uVar19 = 5;
    if (bVar2 != 0) {
      uVar19 = 0x10;
    }
    if ((char)(param_3 & 0xffffffff) == '\x03') {
      uVar19 = 0x10;
    }
    bVar3 = (**(code **)(*plVar8 + 0xa8))(plVar8,param_3 & 0xffffffff,uVar14 & 0xffffffff);
    uVar9 = CONCAT71((int7)((param_3 & 0xffffffff) >> 8),*(undefined1 *)(param_1 + 0x12));
    puVar1 = (undefined *)param_4[4];
    cVar4 = func_0x0001455b5150(uVar9,*(undefined4 *)(param_1 + 0x1a8));
    cVar5 = func_0x0001455b5150(uVar9,*(undefined4 *)(param_1 + 0x1ac));
    bVar6 = FUN_14556ddf0(*(undefined8 *)(param_1 + 8),*(undefined1 *)(param_1 + 0x10b),
                          uVar14 & 0xffffffff);
    uStack_6f4 = (uint)bVar3;
    bStack_6f0 = bVar2 << 3 | cVar4 << 5 | cVar5 << 6 | bVar6 << 2 | (bVar6 & bVar2) << 4 | 3;
    puStack_708 = puVar1;
    uStack_700 = uVar39;
    uStack_6fc = uVar17;
    uStack_6f8 = uVar19;
    FUN_144ede870(param_1);
    break;
  case 6:
    FUN_14542c600(uRam0000000147c17a00,param_1 + 0x38,0);
    LOCK();
    cVar4 = *(char *)(param_1 + 0x1c6);
    bVar20 = cVar4 == '\x01';
    if (bVar20) {
      *(char *)(param_1 + 0x1c6) = '\x04';
      cVar4 = '\x01';
    }
    UNLOCK();
    if (cVar4 != '\0' && !bVar20) {
      LOCK();
      *(undefined1 *)(param_1 + 0x1c6) = 0;
      UNLOCK();
    }
    bVar2 = (char)*param_4 << 3 | *(byte *)(param_1 + 0x10d) & 0xf3 | 4;
    *(byte *)(param_1 + 0x10d) = bVar2;
    if (*(longlong *)(param_1 + 200) != 0) {
      FUN_144ea2fb0(*(longlong *)(param_1 + 200));
      *(undefined8 *)(param_1 + 200) = 0;
      bVar2 = *(byte *)(param_1 + 0x10d);
    }
    *(byte *)(param_1 + 0x10d) = bVar2 & 0xfb;
    return;
  case 7:
    lVar12 = *(longlong *)(param_1 + 0x110);
    while (lVar12 != 0) {
      lVar11 = *(longlong *)(lVar12 + 0x18);
      FUN_140993770(lVar12);
      lVar12 = lVar11;
    }
    lVar12 = *(longlong *)(param_1 + 0x118);
    while (lVar12 != 0) {
      lVar11 = *(longlong *)(lVar12 + 0x18);
      FUN_140993770(lVar12);
      lVar12 = lVar11;
    }
    lVar12 = *(longlong *)(param_1 + 0x120);
    while (lVar12 != 0) {
      lVar12 = *(longlong *)(lVar12 + 0x18);
      FUN_140993770();
    }
    return;
  case 9:
    if (*(char *)(param_1 + 0x1c4) != '\x01') {
      return;
    }
    uVar9 = *(undefined8 *)(param_1 + 8);
    func_0x000144f97b70(uVar9,&uStack_74c);
    uVar9 = func_0x000144db7870(uVar9);
    if (*(char *)(param_1 + 0x10) == '\x01') {
      apuStack_3b0[0] = (undefined *)CONCAT71(apuStack_3b0[0]._1_7_,uStack_74c);
      FUN_142ba8e40(&puStack_708,apuStack_3b0,uVar9);
      puStack_708 = &UNK_14633d1b0;
code_r0x0001400524f3:
      FUN_144db8e00(param_1 + 0x38,&puStack_708);
    }
    else {
      if (*(char *)(param_1 + 0x10) != '\0') {
        puVar16 = &uStack_74b;
code_r0x0001400524de:
        *puVar16 = uStack_74c;
        FUN_142ba8e40(&puStack_708,puVar16,uVar9);
        goto code_r0x0001400524f3;
      }
      if (*(char *)(param_1 + 0x1c5) == '\x01') {
        puVar16 = &uStack_74a;
        goto code_r0x0001400524de;
      }
      apuStack_3b0[0] = (undefined *)CONCAT71(apuStack_3b0[0]._1_7_,uStack_74c);
      FUN_142ba8e40(&puStack_708,apuStack_3b0,uVar9);
      puStack_708 = &UNK_14633d090;
      FUN_144db8e00(param_1 + 0x38,&puStack_708);
      lVar12 = FUN_142ba9000(*(undefined8 *)(param_1 + 8));
      if (lVar12 != 0) {
        uStack_749 = uStack_74c;
        FUN_142ba8e40(apuStack_3b0,&uStack_749,uVar9);
        apuStack_3b0[0] = &UNK_14633d120;
        FUN_144ffb7c0(lVar12,apuStack_3b0);
        apuStack_3b0[0] = &UNK_14633b870;
        uStack_378 = 0x30;
        FUN_14523f9e0(apuStack_3b0);
      }
    }
    uStack_6d0 = 0x30;
    puStack_708 = &UNK_14633b870;
    FUN_14523f9e0(&puStack_708);
    *(undefined1 *)(param_1 + 0x1c4) = 0;
    break;
  case 10:
    if ((char)param_3 != '\0') {
      return;
    }
    auVar41 = ZEXT464(*(uint *)(param_1 + 0x1c0));
    lVar12 = *(longlong *)(param_1 + 8);
    puStack_60 = &UNK_144eb0929;
    lVar11 = func_0x000144db7870(lVar12);
    auVar56 = auVar41._0_16_;
    uVar14 = (ulonglong)*(byte *)(lVar11 + 0xc0 + (ulonglong)DAT_14abc3ab0);
    if (uVar14 == 0xff) {
      lVar11 = 0;
    }
    else {
      lVar11 = *(longlong *)(lVar11 + 0x10 + uVar14 * 8);
    }
    if (lVar11 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = lVar11 + 0xa8;
    }
    if (*(char *)(lVar12 + 0x439) == '\x01') {
      auVar41 = ZEXT464(*(uint *)(lVar12 + 0x43c));
      auVar47 = ZEXT464(*(uint *)(lVar12 + 0x440));
      puStack_60 = &UNK_144eb0999;
      lVar11 = FUN_144eb09b0(lVar12);
      auVar56 = auVar41._0_16_;
      auVar22 = auVar47._0_16_;
    }
    else {
      auVar22 = ZEXT416((uint)_DAT_145fc6ed8);
    }
    plVar8 = *(longlong **)(param_1 + 8);
    auVar41 = ZEXT1664(auVar22);
    auVar47 = ZEXT1664(auVar56);
    puStack_f0 = &UNK_144eb0bc2;
    lVar12 = func_0x000144d9fa60(*(undefined4 *)(*plVar8 + 0x9c));
    if (lVar11 != 0) {
      fVar26 = auVar47._0_4_;
      fVar44 = (float)(_DAT_145fc6f10 ^ (uint)fVar26);
      if ((float)(_DAT_145fc6f10 ^ (uint)fVar26) <= fVar26) {
        fVar44 = fVar26;
      }
      if (_DAT_145fc6f00 <= fVar44) {
        puStack_f0 = &UNK_144eb0bff;
        uVar17 = _DAT_145fc6f10;
        uVar7 = _DAT_145fc6f10;
        uVar52 = _DAT_145fc6f10;
        uVar54 = _DAT_145fc6f10;
        lVar13 = func_0x000144db7870(plVar8);
        fVar45 = auVar47._0_4_;
        auVar56._4_4_ = fVar45;
        auVar56._0_4_ = fVar45;
        auVar56._8_4_ = fVar45;
        auVar56._12_4_ = fVar45;
        auVar47 = ZEXT1664(CONCAT412(_DAT_145fc6ed8,
                                     CONCAT48(_DAT_145fc6ed8,CONCAT44(_DAT_145fc6ed8,_DAT_145fc6ed8)
                                             )));
        puStack_c8 = (undefined8 *)auStack_b8;
        auVar56 = vrcpps_avx(auVar56);
        fVar44 = auVar56._0_4_;
        fVar26 = auVar56._4_4_;
        fVar27 = auVar56._8_4_;
        fVar28 = auVar56._12_4_;
        auVar59 = ZEXT1664(CONCAT412(-((fVar28 * fVar45 - _DAT_145fc6ed8) * fVar28) + fVar28,
                                     CONCAT48(-((fVar27 * fVar45 - _DAT_145fc6ed8) * fVar27) +
                                              fVar27,CONCAT44(-((fVar26 * fVar45 - _DAT_145fc6ed8) *
                                                               fVar26) + fVar26,
                                                              -((fVar44 * fVar45 - _DAT_145fc6ed8) *
                                                               fVar44) + fVar44))));
        _auStack_b8 = ZEXT816(0) << 0x20;
        puStack_f0 = &UNK_144eb0c48;
        FUN_140069930(param_1 + 0x18,lVar11,0x70977dd5,0);
        fVar44 = auVar41._0_4_;
        auVar56 = auVar59._0_16_;
        if (*(longlong *)(lVar13 + 0x80) == 0) {
          fVar26 = (float)auStack_b8._0_4_;
          fVar27 = (float)auStack_b8._4_4_;
          fVar28 = fStack_b0;
          fVar45 = fStack_ac;
        }
        else {
          puStack_f0 = &UNK_144eb0c5d;
          lVar13 = func_0x000144e32130();
          fVar44 = auVar41._0_4_;
          auVar56 = auVar59._0_16_;
          fVar45 = *(float *)(lVar13 + 0x1c) + _DAT_145fc6ed8;
          fVar26 = fVar45 * (float)auStack_b8._0_4_;
          fVar27 = fVar45 * (float)auStack_b8._4_4_;
          fVar28 = fVar45 * fStack_b0;
          fVar45 = fVar45 * fStack_ac;
        }
        uStack_a0 = _UNK_145fc6ee8;
        uStack_a8 = _DAT_145fc6ee0;
        puStack_c8 = &uStack_a8;
        fVar40 = auVar56._0_4_ * fVar44;
        fVar42 = auVar56._4_4_ * fVar44;
        fVar43 = auVar56._8_4_ * fVar44;
        fVar44 = auVar56._12_4_ * fVar44;
        auVar22._0_4_ = fVar40 * fVar26;
        auVar22._4_4_ = fVar42 * fVar27;
        auVar22._8_4_ = fVar43 * fVar28;
        auVar22._12_4_ = fVar44 * fVar45;
        *(undefined1 (*) [16])(lVar12 + 0x10) = auVar22;
        puStack_f0 = &UNK_144eb0cb7;
        FUN_140069930(param_1 + 0x28,lVar11,0x70d27729,0);
        auVar32._0_4_ = _DAT_14615be50 * (float)uStack_a8;
        auVar32._4_4_ = _DAT_14615be50 * uStack_a8._4_4_;
        auVar32._8_4_ = _DAT_14615be50 * (float)uStack_a0;
        auVar32._12_4_ = _DAT_14615be50 * uStack_a0._4_4_;
        auVar56 = vshufps_avx(auVar32,auVar32,0x5a);
        auVar22 = vshufps_avx(auVar32,auVar32,1);
        auVar23._0_4_ = auVar32._0_4_ * auVar32._0_4_;
        auVar23._4_4_ = auVar32._4_4_ * auVar32._4_4_;
        auVar23._8_4_ = auVar32._8_4_ * auVar32._8_4_;
        auVar23._12_4_ = auVar32._12_4_ * auVar32._12_4_;
        auVar60 = vshufps_avx(auVar32,auVar32,0xff);
        auVar25 = vshufps_avx(auVar23,auVar23,0x55);
        auVar24._0_4_ = auVar23._0_4_ + auVar25._0_4_;
        auVar24._4_4_ = auVar23._4_4_ + auVar25._4_4_;
        auVar24._8_4_ = auVar23._8_4_ + auVar25._8_4_;
        auVar24._12_4_ = auVar23._12_4_ + auVar25._12_4_;
        auVar23 = auVar47._0_16_;
        auVar25 = vsubps_avx(auVar23,auVar24);
        auVar35._0_4_ =
             auVar32._0_4_ * auVar60._0_4_ +
             (float)((uint)(auVar22._0_4_ * auVar56._0_4_) ^ _DAT_145fc11f0);
        auVar35._4_4_ =
             auVar32._4_4_ * auVar60._4_4_ +
             (float)((uint)(auVar22._4_4_ * auVar56._4_4_) ^ _UNK_145fc11f4);
        auVar35._8_4_ =
             auVar32._8_4_ * auVar60._8_4_ +
             (float)((uint)(auVar22._8_4_ * auVar56._8_4_) ^ _UNK_145fc11f8);
        auVar35._12_4_ =
             auVar32._12_4_ * auVar60._12_4_ +
             (float)((uint)(auVar22._12_4_ * auVar56._12_4_) ^ _UNK_145fc11fc);
        auVar33._4_4_ = auVar32._0_4_;
        auVar33._0_4_ = auVar32._0_4_;
        auVar33._8_4_ = auVar32._0_4_;
        auVar33._12_4_ = auVar32._0_4_;
        auVar29._0_4_ = auVar35._0_4_ * auVar35._0_4_;
        auVar29._4_4_ = auVar35._4_4_ * auVar35._4_4_;
        auVar29._8_4_ = auVar35._8_4_ * auVar35._8_4_;
        auVar29._12_4_ = auVar35._12_4_ * auVar35._12_4_;
        auVar56 = vminps_avx(auVar23,auVar29);
        auVar22 = vsubps_avx(auVar23,auVar56);
        auVar56 = vrsqrtps_avx(auVar22);
        fVar26 = auVar56._0_4_;
        fVar27 = auVar56._4_4_;
        fVar28 = auVar56._8_4_;
        fVar45 = auVar56._12_4_;
        auVar57._4_4_ = _DAT_146159bfc;
        auVar57._0_4_ = _DAT_146159bfc;
        auVar57._8_4_ = _DAT_146159bfc;
        auVar57._12_4_ = _DAT_146159bfc;
        auVar56 = vcmpps_avx(auVar57,auVar22,2);
        auVar30._0_4_ =
             auVar56._0_4_ &
             (uint)(((fVar26 * fVar26 * auVar22._0_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar26 +
                    fVar26) * auVar22._0_4_);
        auVar30._4_4_ =
             auVar56._4_4_ &
             (uint)(((fVar27 * fVar27 * auVar22._4_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar27 +
                    fVar27) * auVar22._4_4_);
        auVar30._8_4_ =
             auVar56._8_4_ &
             (uint)(((fVar28 * fVar28 * auVar22._8_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar28 +
                    fVar28) * auVar22._8_4_);
        auVar30._12_4_ =
             auVar56._12_4_ &
             (uint)(((fVar45 * fVar45 * auVar22._12_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar45 +
                    fVar45) * auVar22._12_4_);
        auVar56 = vblendps_avx(auVar25,auVar30,2);
        auVar31._4_4_ = _DAT_145fc6f0c;
        auVar31._0_4_ = _DAT_145fc6f0c;
        auVar31._8_4_ = _DAT_145fc6f0c;
        auVar31._12_4_ = _DAT_145fc6f0c;
        auVar22 = vshufps_avx(auVar35,auVar35,0x55);
        auVar25._0_4_ = _DAT_145fc6f4c & auVar22._0_4_;
        auVar25._4_4_ = _DAT_145fc6f4c & auVar22._4_4_;
        auVar25._8_4_ = _DAT_145fc6f4c & auVar22._8_4_;
        auVar25._12_4_ = _DAT_145fc6f4c & auVar22._12_4_;
        auVar25 = vcmpps_avx(auVar31,auVar25,1);
        auVar24 = ZEXT416(0) << 0x20;
        auVar22 = vblendps_avx(auVar24,auVar25,1);
        auVar25 = vblendvps_avx(auVar23,_UNK_14615be60,auVar25);
        auVar56 = vblendvps_avx(auVar56,auVar60,auVar22);
        auVar22 = vblendvps_avx(auVar35,auVar33,auVar22);
        auVar60 = vrcpps_avx(auVar56);
        auVar34._0_4_ = uVar17 ^ (uint)auVar56._0_4_;
        auVar34._4_4_ = uVar7 ^ (uint)auVar56._4_4_;
        auVar34._8_4_ = uVar52 ^ (uint)auVar56._8_4_;
        auVar34._12_4_ = uVar54 ^ (uint)auVar56._12_4_;
        fVar27 = auVar60._0_4_;
        fVar28 = auVar60._4_4_;
        fVar45 = auVar60._8_4_;
        fVar26 = auVar60._12_4_;
        auVar37._0_4_ =
             (-((auVar56._0_4_ * fVar27 - auVar47._0_4_) * fVar27) + fVar27) * auVar22._0_4_;
        auVar37._4_4_ =
             (-((auVar56._4_4_ * fVar28 - auVar47._4_4_) * fVar28) + fVar28) * auVar22._4_4_;
        auVar37._8_4_ =
             (-((auVar56._8_4_ * fVar45 - auVar47._8_4_) * fVar45) + fVar45) * auVar22._8_4_;
        auVar37._12_4_ =
             (-((auVar56._12_4_ * fVar26 - auVar47._12_4_) * fVar26) + fVar26) * auVar22._12_4_;
        auVar60 = vrcpps_avx(auVar37);
        auVar58._0_4_ = _DAT_145fc6f4c & (uint)auVar37._0_4_;
        auVar58._4_4_ = _DAT_145fc6f4c & (uint)auVar37._4_4_;
        auVar58._8_4_ = _DAT_145fc6f4c & (uint)auVar37._8_4_;
        auVar58._12_4_ = _DAT_145fc6f4c & (uint)auVar37._12_4_;
        fVar27 = auVar60._0_4_;
        fVar28 = auVar60._4_4_;
        fVar45 = auVar60._8_4_;
        fVar26 = auVar60._12_4_;
        auVar23 = vcmpps_avx(auVar23,auVar58,1);
        auVar60._0_4_ = (auVar37._0_4_ * fVar27 - auVar47._0_4_) * fVar27 - fVar27;
        auVar60._4_4_ = (auVar37._4_4_ * fVar28 - auVar47._4_4_) * fVar28 - fVar28;
        auVar60._8_4_ = (auVar37._8_4_ * fVar45 - auVar47._8_4_) * fVar45 - fVar45;
        auVar60._12_4_ = (auVar37._12_4_ * fVar26 - auVar47._12_4_) * fVar26 - fVar26;
        auVar60 = vblendvps_avx(auVar37,auVar60,auVar23);
        fVar26 = auVar60._0_4_;
        fVar27 = auVar60._4_4_;
        fVar28 = auVar60._8_4_;
        fVar45 = auVar60._12_4_;
        fVar48 = fVar26 * fVar26;
        fVar51 = fVar27 * fVar27;
        fVar53 = fVar28 * fVar28;
        fVar55 = fVar45 * fVar45;
        auVar49._4_4_ = _DAT_145fc6f80;
        auVar49._0_4_ = _DAT_145fc6f80;
        auVar49._8_4_ = _DAT_145fc6f80;
        auVar49._12_4_ = _DAT_145fc6f80;
        auVar46._4_4_ = _DAT_146159be0;
        auVar46._0_4_ = _DAT_146159be0;
        auVar46._8_4_ = _DAT_146159be0;
        auVar46._12_4_ = _DAT_146159be0;
        auVar61._0_4_ =
             fVar48 * fVar48 * fVar48 * fVar48 * fVar26 *
             (fVar48 * (fVar48 * (fVar48 * (fVar48 * _DAT_14615a184 + _DAT_14615a180) +
                                 _DAT_14615a188) + _DAT_14615a18c) + _DAT_14615a190) +
             fVar48 * fVar26 *
             (fVar48 * (fVar48 * _DAT_14615a198 + _DAT_14615a194) + _DAT_14615a19c) +
             (float)((uVar17 & (uint)auVar37._0_4_ | _DAT_146159bdc) & auVar23._0_4_) + fVar26;
        auVar61._4_4_ =
             fVar51 * fVar51 * fVar51 * fVar51 * fVar27 *
             (fVar51 * (fVar51 * (fVar51 * (fVar51 * _DAT_14615a184 + _DAT_14615a180) +
                                 _DAT_14615a188) + _DAT_14615a18c) + _DAT_14615a190) +
             fVar51 * fVar27 *
             (fVar51 * (fVar51 * _DAT_14615a198 + _DAT_14615a194) + _DAT_14615a19c) +
             (float)((uVar7 & (uint)auVar37._4_4_ | _DAT_146159bdc) & auVar23._4_4_) + fVar27;
        auVar61._8_4_ =
             fVar53 * fVar53 * fVar53 * fVar53 * fVar28 *
             (fVar53 * (fVar53 * (fVar53 * (fVar53 * _DAT_14615a184 + _DAT_14615a180) +
                                 _DAT_14615a188) + _DAT_14615a18c) + _DAT_14615a190) +
             fVar53 * fVar28 *
             (fVar53 * (fVar53 * _DAT_14615a198 + _DAT_14615a194) + _DAT_14615a19c) +
             (float)((uVar52 & (uint)auVar37._8_4_ | _DAT_146159bdc) & auVar23._8_4_) + fVar28;
        auVar61._12_4_ =
             fVar55 * fVar55 * fVar55 * fVar55 * fVar45 *
             (fVar55 * (fVar55 * (fVar55 * (fVar55 * _DAT_14615a184 + _DAT_14615a180) +
                                 _DAT_14615a188) + _DAT_14615a18c) + _DAT_14615a190) +
             fVar55 * fVar45 *
             (fVar55 * (fVar55 * _DAT_14615a198 + _DAT_14615a194) + _DAT_14615a19c) +
             (float)((uVar54 & (uint)auVar37._12_4_ | _DAT_146159bdc) & auVar23._12_4_) + fVar45;
        auVar60 = vcmpps_avx(auVar22,auVar24,1);
        auVar23 = vcmpps_avx(auVar24,auVar22,1);
        auVar36._4_4_ = _DAT_146159bdc;
        auVar36._0_4_ = _DAT_146159bdc;
        auVar36._8_4_ = _DAT_146159bdc;
        auVar36._12_4_ = _DAT_146159bdc;
        auVar22 = vblendvps_avx(auVar49,auVar46,auVar60);
        auVar50._4_4_ = _DAT_14615a1a0;
        auVar50._0_4_ = _DAT_14615a1a0;
        auVar50._8_4_ = _DAT_14615a1a0;
        auVar50._12_4_ = _DAT_14615a1a0;
        auVar60 = vcmpps_avx(auVar56,auVar34,1);
        auVar24 = vcmpps_avx(auVar56,auVar34,0);
        auVar38._0_4_ = auVar61._0_4_ + auVar22._0_4_;
        auVar38._4_4_ = auVar61._4_4_ + auVar22._4_4_;
        auVar38._8_4_ = auVar61._8_4_ + auVar22._8_4_;
        auVar38._12_4_ = auVar61._12_4_ + auVar22._12_4_;
        auVar56 = vblendvps_avx(auVar61,auVar38,auVar60);
        auVar22 = vblendvps_avx(auVar50,auVar36,auVar23);
        auVar56 = vblendvps_avx(auVar56,auVar22,auVar24);
        *(float *)(lVar12 + 0x20) = fVar40 * auVar25._0_4_ * auVar56._0_4_;
        *(float *)(lVar12 + 0x24) = fVar42 * auVar25._4_4_ * auVar56._4_4_;
        *(float *)(lVar12 + 0x28) = fVar43 * auVar25._8_4_ * auVar56._8_4_;
        *(float *)(lVar12 + 0x2c) = fVar44 * auVar25._12_4_ * auVar56._12_4_;
        return;
      }
    }
    *(undefined1 (*) [32])(lVar12 + 0x10) = ZEXT1232(ZEXT812(0));
    return;
  case 0xb:
  case 0xd:
    *(undefined1 *)(param_1 + 0x1c4) = 1;
  }
  return;
}

