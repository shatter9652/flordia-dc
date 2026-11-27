// window.elf f73d8bde3636243e04df956e7df154afebded3ec85692b8da4b5fd9976ee3895
// FUN_084074b0 @ 084074b0 size=1702
// undefined FUN_084074b0()


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_084074b0(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  char cVar4;
  long *plVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined2 local_150;
  char local_14e;
  char local_14d;
  char local_14c;
  char local_14b;
  char local_14a;
  char local_149;
  char local_148;
  char local_147;
  char local_146;
  char local_145;
  char local_144;
  char local_143;
  char local_142;
  char local_141;
  char local_140;
  char local_13f;
  char local_13e;
  char local_13d;
  char local_13c;
  char local_13b;
  char local_13a;
  char local_139;
  char local_138;
  char local_137;
  char local_136;
  char local_135;
  char local_134;
  char local_133;
  char local_132;
  char local_131;
  char local_130;
  char local_12f;
  char local_12e;
  char local_12d;
  char local_12c;
  char local_12b;
  char local_12a;
  char local_129;
  char local_128;
  byte local_40;
  long local_38;
  
  local_38 = *_DAT_0a3e9fa8;
  plVar5 = (long *)func_0x01c9d9e0(0x9c6c835,1);
  lVar6 = (**(code **)(*plVar5 + 0x120))(plVar5,0x9c6c835,&local_150);
  if (lVar6 == -1) {
    DAT_0e061958 = 1;
  }
  else {
    do {
      lVar3 = _DAT_0e061968;
      if ((((char)local_150 != '.') && ((local_40 & 0x10) == 0)) && (local_150 == 0x4147)) {
        lVar8 = (long)_DAT_0e061970 * 0x138;
        _DAT_0e061970 = _DAT_0e061970 + 1;
        lVar1 = _DAT_0e061968 + lVar8;
        *(undefined4 *)(_DAT_0e061968 + 0x134 + lVar8) = 0;
        func_0x08f67830(lVar1,0,0x132);
        if ((char)local_150 == '\0') {
          puVar7 = (undefined1 *)(lVar3 + 0x108 + lVar8);
        }
        else {
          *(char *)(lVar1 + 0x108) = (char)local_150;
          if (local_150._1_1_ == '\0') {
            puVar7 = (undefined1 *)(lVar1 + 0x109);
          }
          else {
            *(char *)(lVar1 + 0x109) = local_150._1_1_;
            if (local_14e == '\0') {
              puVar7 = (undefined1 *)(lVar1 + 0x10a);
            }
            else {
              *(char *)(lVar1 + 0x10a) = local_14e;
              if (local_14d == '\0') {
                puVar7 = (undefined1 *)(lVar1 + 0x10b);
              }
              else {
                *(char *)(lVar1 + 0x10b) = local_14d;
                if (local_14c == '\0') {
                  puVar7 = (undefined1 *)(lVar1 + 0x10c);
                }
                else {
                  *(char *)(lVar1 + 0x10c) = local_14c;
                  if (local_14b == '\0') {
                    puVar7 = (undefined1 *)(lVar1 + 0x10d);
                  }
                  else {
                    *(char *)(lVar1 + 0x10d) = local_14b;
                    if (local_14a == '\0') {
                      puVar7 = (undefined1 *)(lVar1 + 0x10e);
                    }
                    else {
                      *(char *)(lVar1 + 0x10e) = local_14a;
                      if (local_149 == '\0') {
                        puVar7 = (undefined1 *)(lVar1 + 0x10f);
                      }
                      else {
                        *(char *)(lVar1 + 0x10f) = local_149;
                        if (local_148 == '\0') {
                          puVar7 = (undefined1 *)(lVar1 + 0x110);
                        }
                        else {
                          *(char *)(lVar1 + 0x110) = local_148;
                          if (local_147 == '\0') {
                            puVar7 = (undefined1 *)(lVar1 + 0x111);
                          }
                          else {
                            *(char *)(lVar1 + 0x111) = local_147;
                            if (local_146 == '\0') {
                              puVar7 = (undefined1 *)(lVar1 + 0x112);
                            }
                            else {
                              *(char *)(lVar1 + 0x112) = local_146;
                              if (local_145 == '\0') {
                                puVar7 = (undefined1 *)(lVar1 + 0x113);
                              }
                              else {
                                *(char *)(lVar1 + 0x113) = local_145;
                                if (local_144 == '\0') {
                                  puVar7 = (undefined1 *)(lVar1 + 0x114);
                                }
                                else {
                                  *(char *)(lVar1 + 0x114) = local_144;
                                  if (local_143 == '\0') {
                                    puVar7 = (undefined1 *)(lVar1 + 0x115);
                                  }
                                  else {
                                    *(char *)(lVar1 + 0x115) = local_143;
                                    if (local_142 == '\0') {
                                      puVar7 = (undefined1 *)(lVar1 + 0x116);
                                    }
                                    else {
                                      *(char *)(lVar1 + 0x116) = local_142;
                                      if (local_141 == '\0') {
                                        puVar7 = (undefined1 *)(lVar1 + 0x117);
                                      }
                                      else {
                                        *(char *)(lVar1 + 0x117) = local_141;
                                        if (local_140 == '\0') {
                                          puVar7 = (undefined1 *)(lVar1 + 0x118);
                                        }
                                        else {
                                          *(char *)(lVar1 + 0x118) = local_140;
                                          if (local_13f == '\0') {
                                            puVar7 = (undefined1 *)(lVar1 + 0x119);
                                          }
                                          else {
                                            *(char *)(lVar1 + 0x119) = local_13f;
                                            if (local_13e == '\0') {
                                              puVar7 = (undefined1 *)(lVar1 + 0x11a);
                                            }
                                            else {
                                              *(char *)(lVar1 + 0x11a) = local_13e;
                                              if (local_13d == '\0') {
                                                puVar7 = (undefined1 *)(lVar1 + 0x11b);
                                              }
                                              else {
                                                *(char *)(lVar1 + 0x11b) = local_13d;
                                                if (local_13c == '\0') {
                                                  puVar7 = (undefined1 *)(lVar1 + 0x11c);
                                                }
                                                else {
                                                  *(char *)(lVar1 + 0x11c) = local_13c;
                                                  if (local_13b == '\0') {
                                                    puVar7 = (undefined1 *)(lVar1 + 0x11d);
                                                  }
                                                  else {
                                                    *(char *)(lVar1 + 0x11d) = local_13b;
                                                    if (local_13a == '\0') {
                                                      puVar7 = (undefined1 *)(lVar1 + 0x11e);
                                                    }
                                                    else {
                                                      *(char *)(lVar1 + 0x11e) = local_13a;
                                                      if (local_139 == '\0') {
                                                        puVar7 = (undefined1 *)(lVar1 + 0x11f);
                                                      }
                                                      else {
                                                        *(char *)(lVar1 + 0x11f) = local_139;
                                                        if (local_138 == '\0') {
                                                          puVar7 = (undefined1 *)(lVar1 + 0x120);
                                                        }
                                                        else {
                                                          *(char *)(lVar1 + 0x120) = local_138;
                                                          if (local_137 == '\0') {
                                                            puVar7 = (undefined1 *)(lVar1 + 0x121);
                                                          }
                                                          else {
                                                            *(char *)(lVar1 + 0x121) = local_137;
                                                            if (local_136 == '\0') {
                                                              puVar7 = (undefined1 *)(lVar1 + 0x122)
                                                              ;
                                                            }
                                                            else {
                                                              *(char *)(lVar1 + 0x122) = local_136;
                                                              if (local_135 == '\0') {
                                                                puVar7 = (undefined1 *)
                                                                         (lVar1 + 0x123);
                                                              }
                                                              else {
                                                                *(char *)(lVar1 + 0x123) = local_135
                                                                ;
                                                                if (local_134 == '\0') {
                                                                  puVar7 = (undefined1 *)
                                                                           (lVar1 + 0x124);
                                                                }
                                                                else {
                                                                  *(char *)(lVar1 + 0x124) =
                                                                       local_134;
                                                                  if (local_133 == '\0') {
                                                                    puVar7 = (undefined1 *)
                                                                             (lVar1 + 0x125);
                                                                  }
                                                                  else {
                                                                    *(char *)(lVar1 + 0x125) =
                                                                         local_133;
                                                                    if (local_132 == '\0') {
                                                                      puVar7 = (undefined1 *)
                                                                               (lVar1 + 0x126);
                                                                    }
                                                                    else {
                                                                      *(char *)(lVar1 + 0x126) =
                                                                           local_132;
                                                                      if (local_131 == '\0') {
                                                                        puVar7 = (undefined1 *)
                                                                                 (lVar1 + 0x127);
                                                                      }
                                                                      else {
                                                                        *(char *)(lVar1 + 0x127) =
                                                                             local_131;
                                                                        if (local_130 == '\0') {
                                                                          puVar7 = (undefined1 *)
                                                                                   (lVar1 + 0x128);
                                                                        }
                                                                        else {
                                                                          *(char *)(lVar1 + 0x128) =
                                                                               local_130;
                                                                          if (local_12f == '\0') {
                                                                            puVar7 = (undefined1 *)
                                                                                     (lVar1 + 0x129)
                                                                            ;
                                                                          }
                                                                          else {
                                                                            *(char *)(lVar1 + 0x129)
                                                                                 = local_12f;
                                                                            if (local_12e == '\0') {
                                                                              puVar7 = (undefined1 *
                                                                                       )(lVar1 + 
                                                  0x12a);
                                                  }
                                                  else {
                                                    *(char *)(lVar1 + 0x12a) = local_12e;
                                                    if (local_12d == '\0') {
                                                      puVar7 = (undefined1 *)(lVar1 + 299);
                                                    }
                                                    else {
                                                      *(char *)(lVar1 + 299) = local_12d;
                                                      if (local_12c == '\0') {
                                                        puVar7 = (undefined1 *)(lVar1 + 300);
                                                      }
                                                      else {
                                                        *(char *)(lVar1 + 300) = local_12c;
                                                        if (local_12b == '\0') {
                                                          puVar7 = (undefined1 *)(lVar1 + 0x12d);
                                                        }
                                                        else {
                                                          *(char *)(lVar1 + 0x12d) = local_12b;
                                                          if (local_12a == '\0') {
                                                            puVar7 = (undefined1 *)(lVar1 + 0x12e);
                                                          }
                                                          else {
                                                            *(char *)(lVar1 + 0x12e) = local_12a;
                                                            if (local_129 == '\0') {
                                                              puVar7 = (undefined1 *)(lVar1 + 0x12f)
                                                              ;
                                                            }
                                                            else {
                                                              *(char *)(lVar1 + 0x12f) = local_129;
                                                              if (local_128 == '\0') {
                                                                puVar7 = (undefined1 *)
                                                                         (lVar1 + 0x130);
                                                              }
                                                              else {
                                                                puVar7 = (undefined1 *)
                                                                         (lVar1 + 0x131);
                                                                *(char *)(lVar1 + 0x130) = local_128
                                                                ;
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
        *puVar7 = 0;
        cVar4 = FUN_08405580(lVar1,0x9c6c835,&local_150);
        if (cVar4 == '\0') {
          _DAT_0e061970 = _DAT_0e061970 + -1;
        }
      }
    } while ((_DAT_0e061970 < _DAT_0e061974) &&
            (cVar4 = (**(code **)(*plVar5 + 0x130))(plVar5,lVar6,&local_150), cVar4 != '\0'));
    (**(code **)(*plVar5 + 0x138))(plVar5,lVar6);
  }
  func_0x08f665d0(_DAT_0e061968,(long)_DAT_0e061970,0x138,&LAB_08405570);
  DAT_0e06197c = 1;
  if (*_DAT_0a3e9fa8 != local_38) {
    func_0x08f68a00();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  return CONCAT71((int7)((ulong)*_DAT_0a3e9fa8 >> 8),1);
}


