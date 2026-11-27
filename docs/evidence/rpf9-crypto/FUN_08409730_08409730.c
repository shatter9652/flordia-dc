// window.elf f73d8bde3636243e04df956e7df154afebded3ec85692b8da4b5fd9976ee3895
// FUN_08409730 @ 08409730 size=1348
// undefined FUN_08409730()


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_08409730(void)

{
  code *pcVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  long *plVar4;
  undefined1 auVar5 [32];
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 local_128 [32];
  undefined1 local_108 [32];
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined8 local_a8;
  undefined1 *puStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  undefined1 local_68 [16];
  undefined1 *puStack_58;
  undefined8 uStack_50;
  undefined1 local_48 [32];
  long local_28;
  
  lVar9 = _DAT_0e062c38;
  plVar4 = _DAT_0a3e9fa8;
  local_28 = *_DAT_0a3e9fa8;
  local_128 = ZEXT1232(ZEXT812(0));
  uVar6 = FUN_084050d0(_DAT_0e062c38,DAT_0e062c40 ^ 1);
  auVar5 = local_128;
  if (DAT_0e062c40 == 0) {
    puVar8 = local_128;
    if ((lVar9 != 0) && (DAT_0c045230 != '\0')) {
      local_128[0] = DAT_0c045230;
      if (DAT_0c045231 == '\0') {
        puVar8 = local_128 + 1;
      }
      else {
        local_128._2_30_ = auVar5._2_30_;
        local_128[1] = DAT_0c045231;
        if (DAT_0c045232 == '\0') {
          puVar8 = local_128 + 2;
        }
        else {
          local_128._3_29_ = auVar5._3_29_;
          local_128[2] = DAT_0c045232;
          if (DAT_0c045233 == '\0') {
            puVar8 = local_128 + 3;
          }
          else {
            local_128._4_28_ = auVar5._4_28_;
            local_128[3] = DAT_0c045233;
            if (DAT_0c045234 == '\0') {
              puVar8 = local_128 + 4;
            }
            else {
              local_128._5_27_ = auVar5._5_27_;
              local_128[4] = DAT_0c045234;
              if (DAT_0c045235 == '\0') {
                puVar8 = local_128 + 5;
              }
              else {
                local_128._6_26_ = auVar5._6_26_;
                local_128[5] = DAT_0c045235;
                if (DAT_0c045236 == '\0') {
                  puVar8 = local_128 + 6;
                }
                else {
                  local_128._7_25_ = auVar5._7_25_;
                  local_128[6] = DAT_0c045236;
                  if (DAT_0c045237 == '\0') {
                    puVar8 = local_128 + 7;
                  }
                  else {
                    local_128._8_24_ = auVar5._8_24_;
                    local_128[7] = DAT_0c045237;
                    if (DAT_0c045238 == '\0') {
                      puVar8 = local_128 + 8;
                    }
                    else {
                      local_128._9_23_ = auVar5._9_23_;
                      local_128[8] = DAT_0c045238;
                      if (DAT_0c045239 == '\0') {
                        puVar8 = local_128 + 9;
                      }
                      else {
                        local_128._10_22_ = auVar5._10_22_;
                        local_128[9] = DAT_0c045239;
                        if (DAT_0c04523a == '\0') {
                          puVar8 = local_128 + 10;
                        }
                        else {
                          local_128._11_21_ = auVar5._11_21_;
                          local_128[10] = DAT_0c04523a;
                          if (DAT_0c04523b == '\0') {
                            puVar8 = local_128 + 0xb;
                          }
                          else {
                            local_128._12_20_ = auVar5._12_20_;
                            local_128[0xb] = DAT_0c04523b;
                            if (DAT_0c04523c == '\0') {
                              puVar8 = local_128 + 0xc;
                            }
                            else {
                              local_128._13_19_ = auVar5._13_19_;
                              local_128[0xc] = DAT_0c04523c;
                              if (DAT_0c04523d == '\0') {
                                puVar8 = local_128 + 0xd;
                              }
                              else {
                                local_128._14_18_ = auVar5._14_18_;
                                local_128[0xd] = DAT_0c04523d;
                                if (DAT_0c04523e == '\0') {
                                  puVar8 = local_128 + 0xe;
                                }
                                else {
                                  local_128._15_17_ = auVar5._15_17_;
                                  local_128[0xe] = DAT_0c04523e;
                                  if (DAT_0c04523f == '\0') {
                                    puVar8 = local_128 + 0xf;
                                  }
                                  else {
                                    local_128._16_16_ = auVar5._16_16_;
                                    local_128[0xf] = DAT_0c04523f;
                                    if (DAT_0c045240 == '\0') {
                                      puVar8 = local_128 + 0x10;
                                    }
                                    else {
                                      local_128._17_15_ = auVar5._17_15_;
                                      local_128[0x10] = DAT_0c045240;
                                      if (DAT_0c045241 == '\0') {
                                        puVar8 = local_128 + 0x11;
                                      }
                                      else {
                                        local_128._18_14_ = auVar5._18_14_;
                                        local_128[0x11] = DAT_0c045241;
                                        if (DAT_0c045242 == '\0') {
                                          puVar8 = local_128 + 0x12;
                                        }
                                        else {
                                          local_128._19_13_ = auVar5._19_13_;
                                          local_128[0x12] = DAT_0c045242;
                                          if (DAT_0c045243 == '\0') {
                                            puVar8 = local_128 + 0x13;
                                          }
                                          else {
                                            local_128._20_12_ = auVar5._20_12_;
                                            local_128[0x13] = DAT_0c045243;
                                            if (DAT_0c045244 == '\0') {
                                              puVar8 = local_128 + 0x14;
                                            }
                                            else {
                                              local_128._21_11_ = auVar5._21_11_;
                                              local_128[0x14] = DAT_0c045244;
                                              if (DAT_0c045245 == '\0') {
                                                puVar8 = local_128 + 0x15;
                                              }
                                              else {
                                                local_128._22_10_ = auVar5._22_10_;
                                                local_128[0x15] = DAT_0c045245;
                                                if (DAT_0c045246 == '\0') {
                                                  puVar8 = local_128 + 0x16;
                                                }
                                                else {
                                                  local_128._23_9_ = auVar5._23_9_;
                                                  local_128[0x16] = DAT_0c045246;
                                                  if (DAT_0c045247 == '\0') {
                                                    puVar8 = local_128 + 0x17;
                                                  }
                                                  else {
                                                    local_128._24_8_ = auVar5._24_8_;
                                                    local_128[0x17] = DAT_0c045247;
                                                    if (DAT_0c045248 == '\0') {
                                                      puVar8 = local_128 + 0x18;
                                                    }
                                                    else {
                                                      local_128._25_7_ = auVar5._25_7_;
                                                      local_128[0x18] = DAT_0c045248;
                                                      if (DAT_0c045249 == '\0') {
                                                        puVar8 = local_128 + 0x19;
                                                      }
                                                      else {
                                                        local_128._26_6_ = auVar5._26_6_;
                                                        local_128[0x19] = DAT_0c045249;
                                                        if (DAT_0c04524a == '\0') {
                                                          puVar8 = local_128 + 0x1a;
                                                        }
                                                        else {
                                                          local_128._27_5_ = auVar5._27_5_;
                                                          local_128[0x1a] = DAT_0c04524a;
                                                          if (DAT_0c04524b == '\0') {
                                                            puVar8 = local_128 + 0x1b;
                                                          }
                                                          else {
                                                            local_128._28_4_ = auVar5._28_4_;
                                                            local_128[0x1b] = DAT_0c04524b;
                                                            if (DAT_0c04524c == '\0') {
                                                              puVar8 = local_128 + 0x1c;
                                                            }
                                                            else {
                                                              local_128._29_3_ = auVar5._29_3_;
                                                              local_128[0x1c] = DAT_0c04524c;
                                                              if (DAT_0c04524d == '\0') {
                                                                puVar8 = local_128 + 0x1d;
                                                              }
                                                              else {
                                                                local_128._30_2_ = auVar5._30_2_;
                                                                local_128[0x1d] = DAT_0c04524d;
                                                                if (DAT_0c04524e == '\0') {
                                                                  puVar8 = local_128 + 0x1e;
                                                                }
                                                                else {
                                                                  puVar8 = local_128 + 0x1f;
                                                                  local_128[0x1f] = auVar5[0x1f];
                                                                  local_128[0x1e] = DAT_0c04524e;
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    *puVar8 = 0;
  }
  else {
    FUN_084054a0(uVar6,lVar9,local_128);
  }
  if ((uVar6 & 0xe) == 2) {
    lVar9 = 0;
    if (uVar6 != 3) {
      lVar9 = (ulong)(uVar6 == 2) * 2 + -1;
    }
    lVar9 = lVar9 * 0x13;
    if (((&DAT_0e0618f1)[lVar9] == '\x01') && (*(char *)(lVar9 + 0xe0618f3) == '\x01')) {
      *(undefined2 *)(&DAT_0e0618f1 + lVar9) = 0;
      *(undefined1 *)(lVar9 + 0xe0618f3) = 0;
      func_0x08f66b30(0,(undefined1 (*) [16])(lVar9 + 0xe0618e1));
      auVar10._0_12_ = ZEXT812(0);
      auVar10._12_4_ = 0;
      *(undefined1 (*) [16])(lVar9 + 0xe0618e1) = auVar10;
    }
  }
  local_48 = ZEXT1232(ZEXT812(0));
  auStack_88 = ZEXT424(0);
  local_a8 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  auVar2._4_8_ = SUB128(ZEXT812(0),4);
  auVar2._0_4_ = _DAT_0e061954;
  puStack_a0 = local_c8;
  local_68._0_8_ = auVar2._0_8_;
  local_68._8_8_ = 0;
  puStack_58 = local_128;
  uStack_50 = 0x100000003;
  uStack_98 = 1;
  iVar7 = func_0x08f672c0();
  if (-1 < iVar7) {
    local_e8 = ZEXT1232(ZEXT812(0));
    auVar3._4_8_ = SUB128(ZEXT812(0),4);
    auVar3._0_4_ = _DAT_0e061954;
    local_108._0_8_ = auVar3._0_8_;
    local_108._8_8_ = 0;
    local_108._16_8_ = local_128;
    local_108._24_8_ = 0;
    iVar7 = func_0x08f66b60();
    if (-1 < iVar7) goto LAB_08409c4d;
  }
  DAT_0e061958 = 1;
LAB_08409c4d:
  DAT_0e06197c = 1;
  if (*plVar4 == local_28) {
    return CONCAT71((int7)((ulong)*plVar4 >> 8),1);
  }
  func_0x08f68a00();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


