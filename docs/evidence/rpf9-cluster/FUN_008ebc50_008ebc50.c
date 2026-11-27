// window.elf d53960482354c9699902d859c4c2bc8b45357d43882a00ef57046c2f70004d8f
// FUN_008ebc50 @ 008ebc50 size=6620
// undefined FUN_008ebc50()


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ebc50(long param_1)

{
  long lVar1;
  byte *pbVar2;
  ushort uVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  char cVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  ulong uVar18;
  long lVar19;
  int *piVar20;
  undefined8 uVar21;
  long *plVar22;
  long *plVar23;
  uint uVar24;
  undefined4 uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  float fVar29;
  long lVar30;
  undefined8 *puVar31;
  undefined4 uVar32;
  undefined2 uVar33;
  long lVar34;
  float fVar35;
  uint uVar36;
  undefined1 auVar37 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar40 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar41 [16];
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  uint local_458;
  uint uStack_454;
  uint uStack_450;
  uint uStack_44c;
  uint local_448;
  uint uStack_444;
  uint uStack_440;
  uint uStack_43c;
  undefined8 local_438;
  long local_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined1 local_418 [16];
  long local_408;
  float local_3fc;
  ulong local_3f8;
  ulong local_3f0;
  undefined4 local_3e4;
  uint local_3e0;
  undefined1 local_3d9;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  uint local_398;
  uint local_394;
  int local_390 [65];
  undefined4 local_28c;
  undefined8 local_f0;
  short local_5e;
  undefined1 local_48;
  byte local_42;
  long local_38;
  
  local_38 = *_DAT_0a3e9fa8;
  func_0x008f0390();
  lVar34 = 0;
  do {
    lVar19 = *(long *)(param_1 + 0xa0 + lVar34 * 8);
    if (lVar19 != 0) {
      uVar36 = *(uint *)(lVar19 + 0x18);
      uVar18 = (ulong)uVar36 & 0xfffff;
      if ((uVar18 != 0xfffff) && (uVar24 = uVar36 >> 0x14 & 0xf, uVar24 < 10)) {
        lVar19 = *(long *)((ulong)uVar24 * 8 + 0xdcf41c0);
        if (uVar36 >> 0x18 < (uint)*(ushort *)(lVar19 + 0x60)) {
          lVar19 = *(long *)(lVar19 + 0x58);
          lVar30 = (ulong)(uVar36 >> 0x18) * 0xf8;
          if (((*(char *)(lVar19 + 0xf1 + lVar30) == '\x01') &&
              (lVar19 = lVar19 + lVar30, (uint)uVar18 < *(uint *)(lVar19 + 0x74))) &&
             (*(long *)(lVar19 + 0x80) != 0)) {
            local_428 = (ulong)*(uint *)(*(long *)(lVar19 + 0x78) + 4 + uVar18 * 8);
            if (local_428 != 0) {
              local_3f0 = 0;
              local_3f8 = *(long *)(lVar19 + 0x80) +
                          (ulong)*(uint *)(*(long *)(lVar19 + 0x78) + uVar18 * 8) * 4;
              do {
                if (*(int *)(local_3f8 + local_3f0 * 4) != -0x5a6b703b) {
                  func_0x08d50400(_DAT_09c7a2dc,*(undefined8 *)(param_1 + 0x40));
                }
                local_3f0 = local_3f0 + 1;
              } while (local_3f0 < local_428);
            }
          }
        }
      }
    }
    lVar34 = lVar34 + 1;
  } while (lVar34 != 0xb);
  if (*(char *)(param_1 + 0x230) == '\x01') {
    pcVar4 = *(code **)(**(long **)(param_1 + 0x40) + 0x138);
    if (pcVar4 == (code *)0x1741bc0) {
      lVar34 = (*(long **)(param_1 + 0x40))[0x16];
    }
    else {
      lVar34 = (*pcVar4)();
    }
    lVar34 = func_0x000113b0(*(undefined4 *)(lVar34 + 0x9c));
    if (lVar34 != 0) {
      pcVar4 = *(code **)(**(long **)(param_1 + 0x40) + 0x138);
      if (pcVar4 == (code *)0x1741bc0) {
        lVar34 = (*(long **)(param_1 + 0x40))[0x16];
      }
      else {
        lVar34 = (*pcVar4)();
      }
      lVar34 = func_0x000113b0(*(undefined4 *)(lVar34 + 0x9c));
      if ((*(byte *)(lVar34 + 0x228) & 0x40) == 0) {
        plVar22 = *(long **)(param_1 + 0x40);
        if (*(code **)(*plVar22 + 0x170) == (code *)0x901ba0) {
          plVar22 = plVar22 + 0x26;
        }
        else {
          plVar22 = (long *)(**(code **)(*plVar22 + 0x170))(plVar22);
          if (plVar22 == (long *)0x0) goto LAB_008ec032;
        }
        if ((int)plVar22[0x20] < 3) {
          local_3d9 = 0;
          fVar35 = _DAT_0d65e5b4;
          if ((_DAT_0d661730 != 0) && (_DAT_0d661738 != 0)) {
            fVar35 = ((*(float *)(_DAT_0d661738 + 0x20) - *(float *)(_DAT_0d661730 + 0x20)) *
                      _DAT_0d65e5b8 + *(float *)(_DAT_0d661730 + 0x20)) * _DAT_0d65e5b4;
          }
          local_3e0 = 0;
          local_3e4 = 0;
          local_3f0 = CONCAT44(local_3f0._4_4_,fVar35);
          pcVar4 = *(code **)(**(long **)(param_1 + 0x40) + 0x138);
          if (pcVar4 == (code *)0x1741bc0) {
            lVar34 = (*(long **)(param_1 + 0x40))[0x16];
          }
          else {
            lVar34 = (*pcVar4)();
          }
          auVar39 = *(undefined1 (*) [16])(lVar34 + 0x70);
          auVar37 = vpshufb_avx(auVar39,_DAT_09aaaed0);
          auVar37 = vpsrad_avx(auVar37,0x10);
          auVar37 = vcvtdq2ps_avx(auVar37);
          func_0x008f3d60(CONCAT44(auVar37._4_4_ * fRam0000000009aabb84 + auVar39._4_4_,
                                   auVar37._0_4_ * _DAT_09aabb80 + auVar39._0_4_),&local_3d9,
                          &local_3e0,&local_3e4);
          auVar39 = vmaxss_avx(ZEXT416((uint)(float)local_3f0),ZEXT416(local_3e0));
          fVar35 = auVar39._0_4_;
          if (0.0 < fVar35) {
            pcVar4 = *(code **)(**(long **)(param_1 + 0x40) + 0x138);
            if (pcVar4 == (code *)0x1741bc0) {
              lVar34 = (*(long **)(param_1 + 0x40))[0x16];
              uVar32 = local_3e4;
              uVar36 = local_3e0;
            }
            else {
              local_3f8 = CONCAT44(local_3f8._4_4_,local_3e4);
              local_428 = CONCAT44(local_428._4_4_,local_3e0);
              local_418._0_4_ = fVar35;
              lVar34 = (*pcVar4)();
              uVar32 = (uint)local_3f8;
              uVar36 = (uint)(float)local_428;
              fVar35 = (float)local_418._0_4_;
            }
            uVar18 = (ulong)*(uint *)(lVar34 + 0x9c) & 0x1ffff;
            if (((uVar18 != 0x1ffff) && ((*(byte *)(_DAT_0b0f6388 + uVar18) & 3) == 2)) &&
               (*(long **)(param_1 + 0x40) != (long *)0x0)) {
              local_3f8 = CONCAT44(local_3f8._4_4_,uVar32);
              local_428 = CONCAT44(local_428._4_4_,uVar36);
              local_418._0_4_ = fVar35;
              uVar21 = (**(code **)(**(long **)(param_1 + 0x40) + 0x170))();
              local_430 = func_0x0112b270(uVar21,0xf48be66a);
              if (local_430 != 0) {
                local_3fc = _DAT_0c30a1b4;
                pcVar4 = *(code **)(**(long **)(param_1 + 0x40) + 0x138);
                if (pcVar4 == (code *)0x1741bc0) {
                  lVar34 = (*(long **)(param_1 + 0x40))[0x16];
                }
                else {
                  lVar34 = (*pcVar4)();
                }
                lVar34 = func_0x00779980(lVar34,0,0);
                if (lVar34 == 0) {
                  auVar39._0_12_ = ZEXT812(0);
                  auVar39._12_4_ = 0;
                }
                else {
                  fVar35 = (float)func_0x00536e50(lVar34);
                  auVar39 = ZEXT416((uint)(_DAT_09c7a2dc - fVar35));
                }
                if ((float)local_428 < (float)local_3f0) {
                  auVar39 = vmaxss_avx(ZEXT416((uint)local_3fc),auVar39);
                  if ((auVar39._0_4_ == _DAT_09c7a2dc) &&
                     (!NAN(auVar39._0_4_) && !NAN(_DAT_09c7a2dc))) {
                    FUN_008ed630(param_1);
                    goto LAB_008ebf01;
                  }
                }
                pcVar4 = *(code **)(**(long **)(param_1 + 0x40) + 0x138);
                if (pcVar4 == (code *)0x1741bc0) {
                  lVar34 = (*(long **)(param_1 + 0x40))[0x16];
                }
                else {
                  lVar34 = (*pcVar4)();
                }
                lVar19 = func_0x003ca9d0(*(undefined4 *)(lVar34 + 0x9c));
                lVar34 = lVar19 + 0x10;
                if (lVar19 == 0) {
                  lVar34 = 0;
                }
                uVar21 = func_0x03786bf0(lVar34,0);
                local_448 = (uint)uVar21;
                uStack_444 = (uint)((ulong)uVar21 >> 0x20);
                uStack_440 = (uint)extraout_XMM0_Qb_00;
                uStack_43c = (uint)((ulong)extraout_XMM0_Qb_00 >> 0x20);
                fVar35 = (float)func_0x00d1ebe0(local_418._0_4_,0xae125c8);
                local_418._0_4_ = fVar35;
                uVar36 = func_0x08f68890(fVar35 * _DAT_09c7bc14);
                auVar37._0_12_ = ZEXT812(0);
                auVar37._12_4_ = 0;
                auVar39 = vcmpss_avx(ZEXT416((uint)(float)local_428),ZEXT416((uint)(float)local_3f0)
                                     ,1);
                auVar55._4_4_ = _DAT_09c7a2dc;
                auVar55._0_4_ = _DAT_09c7a2dc;
                auVar55._8_4_ = _DAT_09c7a2dc;
                auVar55._12_4_ = _DAT_09c7a2dc;
                auVar37 = vcmpss_avx(auVar37,ZEXT416((uint)((float)local_418._0_4_ + _DAT_09c7e284))
                                     ,2);
                auVar39 = vblendvps_avx(auVar55,ZEXT416((uint)(_DAT_09c7a2dc - local_3fc)),auVar39);
                fVar35 = _DAT_09c7a2dc;
                if ((float)local_428 < (float)local_3f0) {
                  fVar35 = _DAT_09c7a2dc - _DAT_0c30e0c0;
                }
                _DAT_0ae12510 = _DAT_09c7e280 / *(float *)((ulong)DAT_0ae1250c * 4 + 0xae12500);
                uVar18 = func_0x08360b00((float)(auVar37._0_4_ & uVar36) * auVar39._0_4_ * fVar35,
                                         _DAT_0e79961c,&DAT_0ae12510);
                uVar33 = *(undefined2 *)(param_1 + 0x238);
                uVar32 = *(undefined4 *)(param_1 + 0x234);
                fVar35 = (float)((uint)(float)uVar18 & 0x7fffff | 0x3f800000);
                local_3fc = (float)uVar18 + _DAT_09c7cbbc;
                fVar35 = (fVar35 * (fVar35 * _DAT_09c7ae68 + _DAT_09c7d764) +
                         (float)(int)(((uint)(uVar18 >> 0x17) & 0x1ff) - 0x7f) + _DAT_09c7d2d4) *
                         _DAT_09c7d538;
                auVar54._4_4_ = _DAT_09c7c984;
                auVar54._0_4_ = _DAT_09c7c984;
                auVar54._8_4_ = _DAT_09c7c984;
                auVar54._12_4_ = _DAT_09c7c984;
                auVar44._0_12_ = ZEXT812(0);
                auVar44._12_4_ = 0;
                auVar39 = vcmpss_avx(auVar44,ZEXT416((uint)local_3fc),2);
                local_418 = vblendvps_avx(auVar54,ZEXT416((uint)fVar35),auVar39);
                lVar19 = func_0x00e66ee0(uVar32,uVar33);
                iVar17 = _DAT_0dd42bbc;
                if (lVar19 == 0) {
                  lVar19 = *(long *)(local_430 + 0x598);
                  if (lVar19 != 0) {
                    local_408 = param_1 + 0x234;
                    func_0x0280b450(&local_3d8);
                    local_48 = 0;
                    local_3d8 = uVar21;
                    uStack_3d0 = extraout_XMM0_Qb_00;
                    local_28c = local_418._0_4_;
                    if ((float)local_3f0 <= (float)local_428) {
                      uVar18 = (ulong)local_394;
                      if (uVar18 != 0) {
                        lVar30 = uVar18 * 8;
                        piVar20 = local_390;
                        do {
                          if (*piVar20 == -0x32d70b77) goto LAB_008ed472;
                          piVar20 = piVar20 + 2;
                          lVar30 = lVar30 + -8;
                        } while (lVar30 != 0);
                      }
                      if ((((uint)local_3f8 & 0x7fffffff) < 0x7f800000) && (local_394 != local_398))
                      {
                        local_394 = local_394 + 1;
                        piVar20 = local_390 + uVar18 * 2;
                        *piVar20 = -0x32d70b77;
LAB_008ed472:
                        piVar20[1] = (uint)local_3f8;
                      }
                      local_438 = *(undefined8 *)(lVar19 + 0x90);
                      iVar17 = func_0x006fc510();
                      if ((iVar17 == 0) || (iVar17 == -0x1c7030ea)) goto LAB_008ed1f8;
                      puVar31 = &local_438;
                    }
                    else {
LAB_008ed1f8:
                      puVar31 = (undefined8 *)(lVar19 + 0x30);
                    }
                    func_0x015bd100(param_1,*puVar31,local_408,&local_3d8,1);
                    if ((long)local_5e != -1) {
                      LOCK();
                      piVar20 = (int *)((long)local_5e * 4 + 0xdd2db58);
                      *piVar20 = *piVar20 + -1;
                      UNLOCK();
                    }
                  }
                }
                else {
                  auVar40._0_4_ = _DAT_09c7ddc0 & local_448;
                  auVar40._4_4_ = _DAT_09c7ddc0 & uStack_444;
                  auVar40._8_4_ = _DAT_09c7ddc0 & uStack_440;
                  auVar40._12_4_ = _DAT_09c7ddc0 & uStack_43c;
                  auVar45._4_4_ = _DAT_09c7c288;
                  auVar45._0_4_ = _DAT_09c7c288;
                  auVar45._8_4_ = _DAT_09c7c288;
                  auVar45._12_4_ = _DAT_09c7c288;
                  auVar39 = vcmpps_avx(auVar40,auVar45,0x11);
                  uVar25 = vmovmskps_avx(auVar39);
                  local_408 = _DAT_0dd42bd0;
                  if ((~(byte)uVar25 & 7) == 0) {
                    uVar26 = (ulong)_DAT_0dcf46a4;
                    auVar12._8_4_ = uStack_440;
                    auVar12._0_8_ = uVar21;
                    auVar12._12_4_ = uStack_43c;
                    uVar18 = (ulong)((uint)*(ushort *)(lVar19 + 0xd4) * _DAT_0dd42bbc);
                    lVar30 = *(long *)(_DAT_0dd42bd0 + 0x8ac0 +
                                      (ulong)*(byte *)(lVar19 + 0x7e) * 0x8ad0);
                    lVar19 = lVar30 + uVar18;
                    uVar21 = vmovlps_avx(auVar12);
                    *(undefined8 *)(uVar26 * 0x98 + 0x398 + lVar19) = uVar21;
                    uVar32 = vextractps_avx(auVar12,2);
                    *(undefined4 *)(uVar26 * 0x98 + 0x3a0 + lVar19) = uVar32;
                    pbVar2 = (byte *)(lVar30 + 0x61b + uVar18);
                    *pbVar2 = *pbVar2 | 0x10;
                    uVar32 = *(undefined4 *)(param_1 + 0x234);
                    uVar33 = *(undefined2 *)(param_1 + 0x238);
                  }
                  lVar19 = func_0x00e66ee0(uVar32,uVar33);
                  if ((((local_3fc < 0.0) || ((uint)ABS(fVar35) < 0x7f800000)) &&
                      (_DAT_09c7a2e0 <= (float)local_418._0_4_)) &&
                     ((float)local_418._0_4_ <= _DAT_09c7b2d4)) {
                    auVar39 = vcvtps2ph_f16c(local_418,3);
                    *(short *)((ulong)(iVar17 * (uint)*(ushort *)(lVar19 + 0xd4)) +
                               *(long *)(local_408 + 0x8ac0 +
                                        (ulong)*(byte *)(lVar19 + 0x7e) * 0x8ad0) + 0x3aa +
                              (ulong)_DAT_0dcf46a4 * 0x98) = auVar39._0_2_;
                  }
                  if ((float)local_3f0 <= (float)local_428) {
                    uVar21 = func_0x00e66ee0(*(undefined4 *)(param_1 + 0x234),
                                             *(undefined4 *)(param_1 + 0x238));
                    func_0x00e60c00(local_3f8 & 0xffffffff,uVar21,0xcd28f489);
                  }
                }
                uVar21 = func_0x03786bf0(lVar34,0x13);
                uVar32 = *(undefined4 *)(param_1 + 0x23c);
                uVar33 = *(undefined2 *)(param_1 + 0x240);
                local_448 = (uint)uVar21;
                uStack_444 = (uint)((ulong)uVar21 >> 0x20);
                uStack_440 = (uint)extraout_XMM0_Qb_01;
                uStack_43c = (uint)((ulong)extraout_XMM0_Qb_01 >> 0x20);
                lVar19 = func_0x00e66ee0(uVar32,uVar33);
                iVar17 = _DAT_0dd42bbc;
                if (lVar19 == 0) {
                  pcVar4 = *(code **)(**(long **)(param_1 + 0x40) + 0x138);
                  if (pcVar4 == (code *)0x1741bc0) {
                    lVar19 = (*(long **)(param_1 + 0x40))[0x16];
                  }
                  else {
                    lVar19 = (*pcVar4)();
                  }
                  iVar17 = func_0x00585400(*(undefined4 *)(lVar19 + 0x9c),5);
                  lVar19 = local_430 + 0x1c0;
                  if (iVar17 != -0x1d7c3f54) {
                    lVar19 = local_430 + 0x230;
                  }
                  lVar19 = *(long *)(lVar19 + 0x138);
                  if (lVar19 != 0) {
                    local_408 = param_1 + 0x23c;
                    func_0x0280b450(&local_3d8);
                    local_48 = 0;
                    local_3d8 = uVar21;
                    uStack_3d0 = extraout_XMM0_Qb_01;
                    local_28c = local_418._0_4_;
                    if ((float)local_3f0 <= (float)local_428) {
                      uVar18 = (ulong)local_394;
                      if (uVar18 != 0) {
                        lVar30 = uVar18 * 8;
                        piVar20 = local_390;
                        do {
                          if (*piVar20 == -0x32d70b77) goto LAB_008ed517;
                          piVar20 = piVar20 + 2;
                          lVar30 = lVar30 + -8;
                        } while (lVar30 != 0);
                      }
                      if ((((uint)local_3f8 & 0x7fffffff) < 0x7f800000) && (local_394 != local_398))
                      {
                        local_394 = local_394 + 1;
                        piVar20 = local_390 + uVar18 * 2;
                        *piVar20 = -0x32d70b77;
LAB_008ed517:
                        piVar20[1] = (uint)local_3f8;
                      }
                      local_438 = *(undefined8 *)(lVar19 + 0x90);
                      iVar17 = func_0x006fc510();
                      if ((iVar17 == 0) || (iVar17 == -0x1c7030ea)) goto LAB_008ed304;
                      puVar31 = &local_438;
                    }
                    else {
LAB_008ed304:
                      puVar31 = (undefined8 *)(lVar19 + 0x30);
                    }
                    func_0x015bd100(param_1,*puVar31,local_408,&local_3d8,1);
                    if ((long)local_5e != -1) {
                      LOCK();
                      piVar20 = (int *)((long)local_5e * 4 + 0xdd2db58);
                      *piVar20 = *piVar20 + -1;
                      UNLOCK();
                    }
                  }
                }
                else {
                  auVar41._0_4_ = _DAT_09c7ddc0 & local_448;
                  auVar41._4_4_ = _DAT_09c7ddc0 & uStack_444;
                  auVar41._8_4_ = _DAT_09c7ddc0 & uStack_440;
                  auVar41._12_4_ = _DAT_09c7ddc0 & uStack_43c;
                  auVar46._4_4_ = _DAT_09c7c288;
                  auVar46._0_4_ = _DAT_09c7c288;
                  auVar46._8_4_ = _DAT_09c7c288;
                  auVar46._12_4_ = _DAT_09c7c288;
                  auVar39 = vcmpps_avx(auVar41,auVar46,0x11);
                  uVar25 = vmovmskps_avx(auVar39);
                  local_408 = _DAT_0dd42bd0;
                  if ((~(byte)uVar25 & 7) == 0) {
                    uVar26 = (ulong)_DAT_0dcf46a4;
                    auVar13._8_4_ = uStack_440;
                    auVar13._0_8_ = uVar21;
                    auVar13._12_4_ = uStack_43c;
                    uVar18 = (ulong)((uint)*(ushort *)(lVar19 + 0xd4) * _DAT_0dd42bbc);
                    lVar30 = *(long *)(_DAT_0dd42bd0 + 0x8ac0 +
                                      (ulong)*(byte *)(lVar19 + 0x7e) * 0x8ad0);
                    lVar19 = lVar30 + uVar18;
                    uVar21 = vmovlps_avx(auVar13);
                    *(undefined8 *)(uVar26 * 0x98 + 0x398 + lVar19) = uVar21;
                    uVar32 = vextractps_avx(auVar13,2);
                    *(undefined4 *)(uVar26 * 0x98 + 0x3a0 + lVar19) = uVar32;
                    pbVar2 = (byte *)(lVar30 + 0x61b + uVar18);
                    *pbVar2 = *pbVar2 | 0x10;
                    uVar32 = *(undefined4 *)(param_1 + 0x23c);
                    uVar33 = *(undefined2 *)(param_1 + 0x240);
                  }
                  lVar19 = func_0x00e66ee0(uVar32,uVar33);
                  if ((((local_3fc < 0.0) || ((uint)ABS(fVar35) < 0x7f800000)) &&
                      (_DAT_09c7a2e0 <= (float)local_418._0_4_)) &&
                     ((float)local_418._0_4_ <= _DAT_09c7b2d4)) {
                    auVar39 = vcvtps2ph_f16c(local_418,3);
                    *(short *)((ulong)(iVar17 * (uint)*(ushort *)(lVar19 + 0xd4)) +
                               *(long *)(local_408 + 0x8ac0 +
                                        (ulong)*(byte *)(lVar19 + 0x7e) * 0x8ad0) + 0x3aa +
                              (ulong)_DAT_0dcf46a4 * 0x98) = auVar39._0_2_;
                  }
                  if ((float)local_3f0 <= (float)local_428) {
                    uVar21 = func_0x00e66ee0(*(undefined4 *)(param_1 + 0x23c),
                                             *(undefined4 *)(param_1 + 0x240));
                    func_0x00e60c00(local_3f8 & 0xffffffff,uVar21,0xcd28f489);
                  }
                }
                uVar21 = func_0x03786bf0(lVar34,0x14);
                uVar33 = *(undefined2 *)(param_1 + 0x248);
                uVar32 = *(undefined4 *)(param_1 + 0x244);
                local_458 = (uint)uVar21;
                uStack_454 = (uint)((ulong)uVar21 >> 0x20);
                uStack_450 = (uint)extraout_XMM0_Qb_02;
                uStack_44c = (uint)((ulong)extraout_XMM0_Qb_02 >> 0x20);
                lVar34 = func_0x00e66ee0(uVar32,uVar33);
                iVar17 = _DAT_0dd42bbc;
                if (lVar34 == 0) {
                  lVar34 = *(long *)(local_430 + 0x218);
                  if (lVar34 != 0) {
                    func_0x0280b450(&local_3d8);
                    local_48 = 0;
                    local_3d8 = uVar21;
                    uStack_3d0 = extraout_XMM0_Qb_02;
                    local_28c = local_418._0_4_;
                    if ((float)local_3f0 <= (float)local_428) {
                      uVar18 = (ulong)local_394;
                      if (uVar18 != 0) {
                        lVar19 = uVar18 * 8;
                        piVar20 = local_390;
                        do {
                          if (*piVar20 == -0x32d70b77) goto LAB_008ed5bc;
                          piVar20 = piVar20 + 2;
                          lVar19 = lVar19 + -8;
                        } while (lVar19 != 0);
                      }
                      if ((((uint)local_3f8 & 0x7fffffff) < 0x7f800000) && (local_394 != local_398))
                      {
                        local_394 = local_394 + 1;
                        piVar20 = local_390 + uVar18 * 2;
                        *piVar20 = -0x32d70b77;
LAB_008ed5bc:
                        piVar20[1] = (uint)local_3f8;
                      }
                      local_438 = *(undefined8 *)(lVar34 + 0x90);
                      iVar17 = func_0x006fc510();
                      if ((iVar17 == 0) || (iVar17 == -0x1c7030ea)) goto LAB_008ed3c4;
                      puVar31 = &local_438;
                    }
                    else {
LAB_008ed3c4:
                      puVar31 = (undefined8 *)(lVar34 + 0x30);
                    }
                    func_0x015bd100(param_1,*puVar31,param_1 + 0x244,&local_3d8,1);
                    if ((long)local_5e != -1) {
                      LOCK();
                      piVar20 = (int *)((long)local_5e * 4 + 0xdd2db58);
                      *piVar20 = *piVar20 + -1;
                      UNLOCK();
                    }
                  }
                }
                else {
                  auVar42._0_4_ = _DAT_09c7ddc0 & local_458;
                  auVar42._4_4_ = _DAT_09c7ddc0 & uStack_454;
                  auVar42._8_4_ = _DAT_09c7ddc0 & uStack_450;
                  auVar42._12_4_ = _DAT_09c7ddc0 & uStack_44c;
                  auVar47._4_4_ = _DAT_09c7c288;
                  auVar47._0_4_ = _DAT_09c7c288;
                  auVar47._8_4_ = _DAT_09c7c288;
                  auVar47._12_4_ = _DAT_09c7c288;
                  auVar39 = vcmpps_avx(auVar42,auVar47,0x11);
                  uVar25 = vmovmskps_avx(auVar39);
                  local_430 = _DAT_0dd42bd0;
                  if ((~(byte)uVar25 & 7) == 0) {
                    uVar26 = (ulong)_DAT_0dcf46a4;
                    auVar11._8_4_ = uStack_450;
                    auVar11._0_8_ = uVar21;
                    auVar11._12_4_ = uStack_44c;
                    uVar18 = (ulong)((uint)*(ushort *)(lVar34 + 0xd4) * _DAT_0dd42bbc);
                    lVar19 = *(long *)(_DAT_0dd42bd0 + 0x8ac0 +
                                      (ulong)*(byte *)(lVar34 + 0x7e) * 0x8ad0);
                    lVar34 = lVar19 + uVar18;
                    uVar21 = vmovlps_avx(auVar11);
                    *(undefined8 *)(uVar26 * 0x98 + 0x398 + lVar34) = uVar21;
                    uVar32 = vextractps_avx(auVar11,2);
                    *(undefined4 *)(uVar26 * 0x98 + 0x3a0 + lVar34) = uVar32;
                    pbVar2 = (byte *)(lVar19 + 0x61b + uVar18);
                    *pbVar2 = *pbVar2 | 0x10;
                    uVar32 = *(undefined4 *)(param_1 + 0x244);
                    uVar33 = *(undefined2 *)(param_1 + 0x248);
                  }
                  lVar34 = func_0x00e66ee0(uVar32,uVar33);
                  if ((((local_3fc < 0.0) || ((uint)ABS(fVar35) < 0x7f800000)) &&
                      (_DAT_09c7a2e0 <= (float)local_418._0_4_)) &&
                     ((float)local_418._0_4_ <= _DAT_09c7b2d4)) {
                    auVar39 = vcvtps2ph_f16c(local_418,3);
                    *(short *)((ulong)(iVar17 * (uint)*(ushort *)(lVar34 + 0xd4)) +
                               *(long *)(local_430 + 0x8ac0 +
                                        (ulong)*(byte *)(lVar34 + 0x7e) * 0x8ad0) + 0x3aa +
                              (ulong)_DAT_0dcf46a4 * 0x98) = auVar39._0_2_;
                  }
                  if ((float)local_3f0 <= (float)local_428) {
                    uVar21 = func_0x00e66ee0(*(undefined4 *)(param_1 + 0x244),
                                             *(undefined4 *)(param_1 + 0x248));
                    func_0x00e60c00(local_3f8 & 0xffffffff,uVar21,0xcd28f489);
                  }
                }
              }
            }
          }
          else {
            FUN_008ed630(param_1);
            DAT_0ae1251c = DAT_0ae1251c | 2;
          }
LAB_008ebf01:
          pcVar4 = *(code **)(**(long **)(param_1 + 0x40) + 0x138);
          if (pcVar4 == (code *)0x1741bc0) {
            lVar34 = (*(long **)(param_1 + 0x40))[0x16];
          }
          else {
            lVar34 = (*pcVar4)();
          }
          uVar18 = (ulong)*(uint *)(lVar34 + 0x9c) & 0x1ffff;
          if ((uVar18 != 0x1ffff) && ((*(byte *)(_DAT_0b0f6388 + uVar18) & 3) == 2)) {
            if (*(long *)(param_1 + 200) != 0) {
              uVar36 = *(uint *)(*(long *)(param_1 + 200) + 0x58);
              iVar17 = *(int *)(param_1 + 0x80);
              iVar15 = 0;
              iVar16 = 0;
              if ((uVar36 >> 1 < 0x7fffffff) &&
                 (uVar24 = uVar36 >> 0x14 & 0xf, iVar16 = 0, uVar24 < 10)) {
                lVar34 = *(long *)((ulong)uVar24 * 8 + 0xdcf41c0);
                iVar16 = iVar15;
                if (uVar36 >> 0x18 < (uint)*(ushort *)(lVar34 + 0x60)) {
                  lVar19 = *(long *)(lVar34 + 0x58);
                  lVar30 = (ulong)(uVar36 >> 0x18) * 0xf8;
                  if (*(char *)(lVar19 + 0xf1 + lVar30) == '\x01') {
                    lVar1 = lVar19 + lVar30;
                    uVar24 = uVar36 & 0x7ffff;
                    if ((uVar36 >> 0x13 & 1) == 0) {
                      if (uVar24 < *(uint *)(lVar1 + 0x94)) {
                        uVar18 = (ulong)uVar24;
                        if ((*(int *)(*(long *)(lVar1 + 0x98) + uVar18 * 10) != 0) &&
                           (*(int *)(*(long *)(lVar1 + 0x98) + uVar18 * 10 + 4) + 2U < 3)) {
                          func_0x006d6ac0();
                          lVar19 = *(long *)(lVar34 + 0x58);
                        }
                        iVar16 = *(int *)(*(long *)(lVar19 + 0x98 + lVar30) + uVar18 * 10);
                      }
                    }
                    else if (uVar24 < *(uint *)(lVar1 + 0x1c)) {
                      iVar16 = *(int *)(*(long *)(lVar1 + 0x28) + (ulong)uVar24 * 8);
                    }
                  }
                }
              }
              if ((((iVar17 != -0x14945c01) && (iVar16 != 0)) && (iVar16 != -0x1c7030ea)) &&
                 ((_DAT_0c30a1b4 != _DAT_09c7a2dc || (NAN(_DAT_0c30a1b4) || NAN(_DAT_09c7a2dc))))) {
                plVar22 = *(long **)(param_1 + 0x40);
                local_3f0 = CONCAT44(local_3f0._4_4_,_DAT_0c30a1b4);
                if (*(code **)(*plVar22 + 0x138) == (code *)0x1741bc0) {
                  lVar34 = plVar22[0x16];
                }
                else {
                  lVar34 = (**(code **)(*plVar22 + 0x138))(plVar22);
                  plVar22 = *(long **)(param_1 + 0x40);
                }
                auVar39 = *(undefined1 (*) [16])(lVar34 + 0x70);
                auVar37 = vpshufb_avx(auVar39,_DAT_09aaaed0);
                auVar37 = vpsrad_avx(auVar37,0x10);
                auVar37 = vcvtdq2ps_avx(auVar37);
                local_428 = func_0x03c21dc0(CONCAT44(auVar37._4_4_ * fRam0000000009aabb84 +
                                                     auVar39._4_4_,
                                                     auVar37._0_4_ * _DAT_09aabb80 + auVar39._0_4_),
                                            3);
                uStack_420 = extraout_XMM0_Qb;
                if (*(code **)(*plVar22 + 0x138) == (code *)0x1741bc0) {
                  lVar34 = plVar22[0x16];
                }
                else {
                  lVar34 = (**(code **)(*plVar22 + 0x138))(plVar22);
                }
                fVar7 = *(float *)(lVar34 + 0x50);
                fVar8 = *(float *)(lVar34 + 0x54);
                fVar9 = *(float *)(lVar34 + 0x58);
                fVar10 = *(float *)(lVar34 + 0x5c);
                auVar48._0_12_ = ZEXT812(0);
                auVar48._12_4_ = 0;
                auVar43._0_4_ = fVar7 * fVar7;
                auVar43._4_4_ = fVar8 * fVar8;
                auVar43._8_4_ = fVar9 * fVar9;
                auVar43._12_4_ = fVar10 * fVar10;
                auVar39 = vblendps_avx(auVar43,auVar48,8);
                auVar39 = vhaddps_avx(auVar39,auVar39);
                auVar39 = vhaddps_avx(auVar39,auVar39);
                auVar37 = vrsqrtps_avx(auVar39);
                fVar35 = auVar37._0_4_;
                fVar29 = auVar37._4_4_;
                fVar5 = auVar37._8_4_;
                fVar6 = auVar37._12_4_;
                auVar38._0_4_ =
                     fVar7 * (float)local_428 *
                     ((fVar35 * fVar35 * auVar39._0_4_ * _DAT_09c7bc04 - _DAT_09c7bc04) * fVar35 +
                     fVar35);
                auVar38._4_4_ =
                     fVar8 * local_428._4_4_ *
                     ((fVar29 * fVar29 * auVar39._4_4_ * _DAT_09c7bc04 - _DAT_09c7bc04) * fVar29 +
                     fVar29);
                auVar38._8_4_ =
                     fVar9 * (float)uStack_420 *
                     ((fVar5 * fVar5 * auVar39._8_4_ * _DAT_09c7bc04 - _DAT_09c7bc04) * fVar5 +
                     fVar5);
                auVar38._12_4_ =
                     fVar10 * uStack_420._4_4_ *
                     ((fVar6 * fVar6 * auVar39._12_4_ * _DAT_09c7bc04 - _DAT_09c7bc04) * fVar6 +
                     fVar6);
                auVar39 = vblendps_avx(auVar38,auVar48,8);
                auVar39 = vhaddps_avx(auVar39,auVar39);
                auVar39 = vhaddps_avx(auVar39,auVar39);
                fVar35 = (float)func_0x00d1ebe0(auVar39._0_8_,0xae12600);
                local_428 = CONCAT44(local_428._4_4_,fVar35);
                uVar36 = func_0x08f68890(fVar35 * _DAT_09c7bc14);
                auVar49._0_12_ = ZEXT812(0);
                auVar49._12_4_ = 0;
                auVar39 = vcmpss_avx(auVar49,ZEXT416((uint)((float)local_428 + _DAT_09c7e284)),2);
                local_3f0 = CONCAT44(local_3f0._4_4_,
                                     (float)(auVar39._0_4_ & uVar36) *
                                     (_DAT_09c7a2dc - (float)local_3f0));
                lVar34 = func_0x00e66ee0(*(undefined4 *)(param_1 + 0x24c),
                                         *(undefined4 *)(param_1 + 0x250));
                fVar35 = (float)local_3f0;
                if (lVar34 == 0) {
                  func_0x0280b450(&local_3d8);
                  local_f0 = (**(code **)(**(long **)(param_1 + 0x40) + 0xa8))
                                       (*(long **)(param_1 + 0x40),0);
                  auVar53._4_4_ = _DAT_09c7c984;
                  auVar53._0_4_ = _DAT_09c7c984;
                  auVar53._8_4_ = _DAT_09c7c984;
                  auVar53._12_4_ = _DAT_09c7c984;
                  local_42 = local_42 | 0x80;
                  fVar29 = (float)((uint)fVar35 & 0x7fffff | 0x3f800000);
                  auVar51._0_12_ = ZEXT812(0);
                  auVar51._12_4_ = 0;
                  auVar39 = vcmpss_avx(auVar51,ZEXT416((uint)((float)local_3f0 + _DAT_09c7cbbc)),2);
                  auVar39 = vblendvps_avx(auVar53,ZEXT416((uint)((fVar29 * (fVar29 * _DAT_09c7ae68 +
                                                                           _DAT_09c7d764) +
                                                                 (float)(int)(((uint)fVar35 >> 0x17)
                                                                             - 0x7f) + _DAT_09c7d2d4
                                                                 ) * _DAT_09c7d538)),auVar39);
                  local_28c = auVar39._0_4_;
                  func_0x015bd100(param_1,*(undefined8 *)(*(long *)(param_1 + 200) + 0x58),
                                  param_1 + 0x24c,&local_3d8,1);
                  if ((long)local_5e != -1) {
                    LOCK();
                    piVar20 = (int *)((long)local_5e * 4 + 0xdd2db58);
                    *piVar20 = *piVar20 + -1;
                    UNLOCK();
                  }
                }
                else {
                  fVar35 = (float)((uint)(float)local_3f0 & 0x7fffff | 0x3f800000);
                  fVar35 = (fVar35 * (fVar35 * _DAT_09c7ae68 + _DAT_09c7d764) +
                           (float)(int)(((uint)(float)local_3f0 >> 0x17) - 0x7f) + _DAT_09c7d2d4) *
                           _DAT_09c7d538;
                  if (((float)local_3f0 + _DAT_09c7cbbc < _DAT_09c7a2e8) ||
                     ((uint)ABS(fVar35) < 0x7f800000)) {
                    auVar52._4_4_ = _DAT_09c7c984;
                    auVar52._0_4_ = _DAT_09c7c984;
                    auVar52._8_4_ = _DAT_09c7c984;
                    auVar52._12_4_ = _DAT_09c7c984;
                    auVar50._0_12_ = ZEXT812(0);
                    auVar50._12_4_ = 0;
                    auVar39 = vcmpss_avx(auVar50,ZEXT416((uint)((float)local_3f0 + _DAT_09c7cbbc)),2
                                        );
                    auVar39 = vblendvps_avx(auVar52,ZEXT416((uint)fVar35),auVar39);
                    if ((_DAT_09c7a2e0 <= auVar39._0_4_) && (auVar39._0_4_ <= _DAT_09c7b2d4)) {
                      auVar39 = vcvtps2ph_f16c(auVar39,3);
                      *(short *)((ulong)((uint)*(ushort *)(lVar34 + 0xd4) * _DAT_0dd42bbc) +
                                 *(long *)(_DAT_0dd42bd0 + 0x8ac0 +
                                          (ulong)*(byte *)(lVar34 + 0x7e) * 0x8ad0) + 0x3aa +
                                (ulong)_DAT_0dcf46a4 * 0x98) = auVar39._0_2_;
                    }
                  }
                }
                goto LAB_008ebf47;
              }
            }
            uVar3 = *(ushort *)(param_1 + 0x250);
            uVar18 = (ulong)uVar3 & 0x7ff;
            if ((*(int *)(param_1 + 0x24c) != 0 && (uVar18 != 0x7ff && (~uVar3 & 0x7800) != 0)) &&
               (_DAT_0dd42bd0 != 0)) {
              uVar26 = (ulong)(uVar3 >> 0xb & 0xf);
              lVar34 = uVar26 * 0x8ad0 + _DAT_0dd42bd0;
              if ((short)uVar3 < 0) {
                iVar17 = *(int *)(lVar34 + 0x7608 + uVar18 * 4);
              }
              else {
                iVar17 = *(int *)(lVar34 + 0x6208 + uVar18 * 4);
              }
              if ((iVar17 == *(int *)(param_1 + 0x24c)) &&
                 (*(long *)(_DAT_0dd42bd0 + 0x8ab8 + uVar26 * 0x8ad0) != 0)) {
                uVar21 = func_0x00e66ee0();
                func_0x0201fb30(uVar21,1,0x7585d45d);
              }
            }
          }
LAB_008ebf47:
          pcVar4 = *(code **)(**(long **)(param_1 + 0x40) + 0x138);
          if (pcVar4 == (code *)0x1741bc0) {
            lVar34 = (*(long **)(param_1 + 0x40))[0x16];
          }
          else {
            lVar34 = (*pcVar4)();
          }
          cVar14 = func_0x00585750(*(undefined4 *)(lVar34 + 0x9c));
          if (cVar14 == '\0') {
            pcVar4 = *(code **)(**(long **)(param_1 + 0x40) + 0x138);
            if (pcVar4 == (code *)0x1741bc0) {
              lVar34 = (*(long **)(param_1 + 0x40))[0x16];
            }
            else {
              lVar34 = (*pcVar4)();
            }
            lVar34 = func_0x005e2e70(*(undefined4 *)(lVar34 + 0x9c));
            if ((lVar34 == 0) || ((*(byte *)(lVar34 + 0x11) & 1) == 0)) {
              uVar3 = *(ushort *)(param_1 + 600);
              uVar18 = (ulong)uVar3 & 0x7ff;
              if ((*(int *)(param_1 + 0x254) != 0 && (uVar18 != 0x7ff && (~uVar3 & 0x7800) != 0)) &&
                 (_DAT_0dd42bd0 != 0)) {
                uVar26 = (ulong)(uVar3 >> 0xb & 0xf);
                lVar34 = uVar26 * 0x8ad0 + _DAT_0dd42bd0;
                if ((short)uVar3 < 0) {
                  iVar17 = *(int *)(lVar34 + 0x7608 + uVar18 * 4);
                }
                else {
                  iVar17 = *(int *)(lVar34 + 0x6208 + uVar18 * 4);
                }
                if ((iVar17 == *(int *)(param_1 + 0x254)) &&
                   (*(long *)(_DAT_0dd42bd0 + 0x8ab8 + uVar26 * 0x8ad0) != 0)) {
                  *(undefined1 *)(param_1 + 0x289) = 0;
                  uVar21 = func_0x00e66ee0();
                  func_0x0201fb30(uVar21,1,0x7585d45d);
                }
              }
            }
            else {
              *(undefined1 *)(param_1 + 0x289) = 1;
              func_0x049cb8b0(param_1);
            }
          }
        }
      }
    }
  }
LAB_008ec032:
  *(undefined4 *)(param_1 + 0x284) = 0;
  pcVar4 = *(code **)(**(long **)(param_1 + 0x40) + 0x138);
  if (pcVar4 == (code *)0x1741bc0) {
    lVar34 = (*(long **)(param_1 + 0x40))[0x16];
  }
  else {
    lVar34 = (*pcVar4)();
  }
  lVar34 = func_0x00398130(*(undefined4 *)(lVar34 + 0x9c));
  if ((lVar34 != 0) && (*(short *)(lVar34 + 0x1490) != 0)) {
    uVar18 = 0;
    do {
      plVar22 = *(long **)(*(long *)(lVar34 + 0x1488) + uVar18 * 8);
      if ((*plVar22 != 0) && (lVar19 = func_0x0039c6d0(plVar22 + 0x10), lVar19 != 0)) {
        uVar32 = *(undefined4 *)(lVar19 + 0x9c);
        lVar19 = func_0x003975a0(uVar32);
        if ((lVar19 != 0) && (*(long *)(lVar19 + 0x1f08) != 0)) {
          lVar19 = func_0x003975a0(uVar32);
          lVar19 = *(long *)(*(long *)(lVar19 + 0x1f08) + 0x28);
          if (((lVar19 != 0) && (lVar19 = *(long *)(lVar19 + 0x28), lVar19 != 0)) &&
             ((*(byte *)(*(long *)(lVar19 + 0x10) + 0x348) & 0x10) != 0)) {
            *(int *)(param_1 + 0x284) = *(int *)(param_1 + 0x284) + 1;
          }
        }
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 < *(ushort *)(lVar34 + 0x1490));
  }
  pcVar4 = *(code **)(**(long **)(param_1 + 0x40) + 0x138);
  if (pcVar4 == (code *)0x1741bc0) {
    lVar34 = (*(long **)(param_1 + 0x40))[0x16];
  }
  else {
    lVar34 = (*pcVar4)();
  }
  plVar22 = _DAT_0a3e9fa8;
  lVar34 = func_0x00011560(*(undefined4 *)(lVar34 + 0x9c));
  if ((lVar34 != 0) && (*(long *)(lVar34 + 0x8a8) != 0 && (*(byte *)(lVar34 + 0x10) & 0x20) != 0)) {
    lVar34 = func_0x0028bd60(*(undefined4 *)(*(long *)(lVar34 + 0x8a8) + 0x9c));
    if ((lVar34 != 0) && (plVar23 = *(long **)(lVar34 + 0x28), plVar23 != (long *)0x0)) {
      if (*(code **)(*plVar23 + 0x170) == (code *)0x15b1f90) {
        plVar23 = plVar23 + 0x36;
      }
      else {
        plVar23 = (long *)(**(code **)(*plVar23 + 0x170))(plVar23);
      }
      if (((*(byte *)((long)plVar23 + 0x3e) & 8) != 0) &&
         (uVar18 = (ulong)*(ushort *)(plVar23 + 3), uVar18 != 0)) {
        piVar20 = (int *)plVar23[2];
        uVar26 = uVar18;
        do {
          uVar27 = uVar26 >> 1;
          uVar28 = ~uVar27 + uVar26;
          uVar26 = uVar27;
          if ((uint)(piVar20 + uVar27 * 2 + 2)[-2] < 0x2d898a9) {
            piVar20 = piVar20 + uVar27 * 2 + 2;
            uVar26 = uVar28;
          }
        } while (0 < (long)uVar26);
        if (((((piVar20 != (int *)plVar23[2] + uVar18 * 2) && (*piVar20 == 0x2d898a9)) &&
             ((~*(uint *)(_DAT_0ad94e20[4] + (ulong)*(ushort *)(piVar20 + 1) * 4) &
              *(uint *)(_DAT_0ad94e20 + 5)) == 0)) &&
            ((*_DAT_0ad94e20 != 0 &&
             (lVar34 = *(long *)(*_DAT_0ad94e20 + 0x10 +
                                (ulong)((uint)*(ushort *)(piVar20 + 1) * (int)_DAT_0ad94e20[1])),
             lVar34 != 0)))) && (_DAT_09c7a2f8 < *(float *)(lVar34 + 0x10))) goto LAB_008ec15a;
      }
    }
    uVar3 = *(ushort *)(param_1 + 0x250);
    uVar18 = (ulong)uVar3 & 0x7ff;
    if ((*(int *)(param_1 + 0x24c) != 0 && (uVar18 != 0x7ff && (~uVar3 & 0x7800) != 0)) &&
       (_DAT_0dd42bd0 != 0)) {
      uVar26 = (ulong)(uVar3 >> 0xb & 0xf);
      lVar34 = uVar26 * 0x8ad0 + _DAT_0dd42bd0;
      if ((short)uVar3 < 0) {
        iVar17 = *(int *)(lVar34 + 0x7608 + uVar18 * 4);
      }
      else {
        iVar17 = *(int *)(lVar34 + 0x6208 + uVar18 * 4);
      }
      if ((iVar17 == *(int *)(param_1 + 0x24c)) &&
         (*(long *)(_DAT_0dd42bd0 + 0x8ab8 + uVar26 * 0x8ad0) != 0)) {
        uVar21 = func_0x00e66ee0();
        func_0x0201fb30(uVar21,1,0x7585d45d);
      }
    }
  }
LAB_008ec15a:
  pcVar4 = *(code **)(**(long **)(param_1 + 0x40) + 0x138);
  if (pcVar4 == (code *)0x1741bc0) {
    lVar34 = (*(long **)(param_1 + 0x40))[0x16];
  }
  else {
    lVar34 = (*pcVar4)();
  }
  lVar34 = func_0x005e2e70(*(undefined4 *)(lVar34 + 0x9c));
  if (((lVar34 == 0) || ((*(byte *)(lVar34 + 0x11) & 1) == 0)) &&
     (*(char *)(param_1 + 0x289) == '\x01')) {
    func_0x049cb4f0(param_1);
    *(undefined1 *)(param_1 + 0x289) = 0;
  }
  if (*plVar22 != local_38) {
    func_0x08f68a00();
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  return;
}


