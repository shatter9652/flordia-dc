// window.elf d53960482354c9699902d859c4c2bc8b45357d43882a00ef57046c2f70004d8f
// FUN_008d0840 @ 008d0840 size=4469
// undefined FUN_008d0840()


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_008d0840(long param_1,undefined4 param_2)

{
  code *pcVar1;
  ushort uVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  ushort uVar8;
  ushort uVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  uint *puVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  long *plVar24;
  uint uVar25;
  long *in_FS_OFFSET;
  bool bVar26;
  bool bVar27;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  long local_60;
  long *local_58;
  ulong local_50;
  uint local_44;
  ulong local_40;
  long local_38;
  
  puVar18 = auStack_68;
  local_58 = (long *)CONCAT44(local_58._4_4_,param_2);
  local_38 = *_DAT_0a3e9fa8;
  if (_DAT_0a3e9c40 == 0) {
    if (*(char *)(*in_FS_OFFSET + -0x430) == '\0') {
      lVar16 = *(long *)(*in_FS_OFFSET + -0x40);
      *(undefined1 *)(*in_FS_OFFSET + -0x430) = 1;
      goto LAB_008d0904;
    }
  }
  else {
    func_0x00000000();
    if (*(char *)(*in_FS_OFFSET + -0x430) == '\0') {
      lVar16 = *in_FS_OFFSET;
      *(undefined1 *)(lVar16 + -0x430) = 1;
      func_0x00000000();
      lVar16 = *(long *)(lVar16 + -0x40);
LAB_008d0904:
      if (lVar16 == 0) {
        *(undefined4 *)(*in_FS_OFFSET + -0x434) = 0;
      }
    }
  }
  local_44 = *(uint *)(*in_FS_OFFSET + -0x434);
  puVar19 = auStack_68;
  uVar20 = _DAT_0e5565b0;
  lVar16 = param_1;
  if ((local_44 & 1) == 0) {
LAB_008d0a15:
    local_60 = lVar16;
    uVar25 = uVar20;
    param_1 = local_60;
    lVar16 = local_60;
    if ((uVar25 & 0x1ff0000) != 0) {
      LOCK();
      bVar26 = uVar25 == _DAT_0e5565b0;
      uVar20 = uVar25;
      uVar17 = uVar25 + 0x100;
      if (!bVar26) {
        uVar20 = _DAT_0e5565b0;
        uVar17 = _DAT_0e5565b0;
      }
      _DAT_0e5565b0 = uVar17;
      UNLOCK();
      if (bVar26) {
        uVar17 = (uint)(_DAT_0e5565b8 >> 7) & 0xffffff;
        uVar12 = _DAT_0e5565b8;
        uVar13 = _DAT_0e5565b8;
        if ((_DAT_0e5565b8 >> 7 & 0xffffff) != 0) {
          do {
            uVar13 = _DAT_0e5565b8;
            if (0xffffffff < (long)uVar12) {
              LOCK();
              uVar13 = uVar12;
              uVar23 = uVar12 - 0x100000000;
              if (uVar12 != _DAT_0e5565b8) {
                uVar13 = _DAT_0e5565b8;
                uVar23 = _DAT_0e5565b8;
              }
              _DAT_0e5565b8 = uVar23;
              UNLOCK();
              uVar20 = uVar25;
              if (uVar12 == uVar13) goto LAB_008d0a15;
            }
            uVar17 = uVar17 - 1;
            uVar12 = uVar13;
            uVar13 = _DAT_0e5565b8;
          } while (uVar17 != 0);
        }
LAB_008d0a80:
        do {
          uVar12 = uVar13;
          uVar13 = uVar12;
          if (0xffffffff < (long)uVar12) {
            LOCK();
            uVar23 = uVar12 - 0x100000000;
            if (uVar12 != _DAT_0e5565b8) {
              uVar13 = _DAT_0e5565b8;
              uVar23 = _DAT_0e5565b8;
            }
            _DAT_0e5565b8 = uVar23;
            UNLOCK();
            uVar20 = uVar25;
            lVar16 = local_60;
            if (uVar12 == uVar13) break;
            goto LAB_008d0a80;
          }
          if (DAT_0e0ef978 == '\0') {
            *(undefined8 *)(puVar18 + -8) = 0x8d1538;
            iVar10 = func_0x08f66530(&DAT_0e0ef978);
            if (iVar10 != 0) {
              plVar24 = (long *)&DAT_0e0ef4f0;
              lVar16 = 0;
              do {
                *(undefined8 *)(puVar18 + -8) = 0x8d1576;
                iVar10 = func_0x08f675d0(&local_40,0x9c60dca,1,0,0x7fff,0);
                if (iVar10 == 0) {
                  lVar15 = local_40 + 1;
                }
                else {
                  pcVar1 = (code *)swi(0x41);
                  (*pcVar1)();
                  puVar18 = puVar18 + 8;
                  lVar15 = 0;
                }
                *plVar24 = lVar15;
                lVar15 = lVar16 + 1;
                plVar24 = plVar24 + 1;
                *(byte *)(lVar16 + 0xe0ef8e8) = (byte)lVar15 | 0x80;
                lVar16 = lVar15;
              } while (lVar15 != 0x7e);
              *(undefined8 *)(puVar18 + -8) = 0x8d15d0;
              iVar10 = func_0x08f675d0(&local_40,0x9c60dca,1,0,0x7fff,0);
              if (iVar10 == 0) {
                _DAT_0e0ef8e0 = local_40 + 1;
              }
              else {
                pcVar1 = (code *)swi(0x41);
                (*pcVar1)();
                puVar18 = puVar18 + 8;
                _DAT_0e0ef8e0 = 0;
              }
              DAT_0e0ef966 = 0xff;
              _DAT_0e0ef968 = 0;
              _DAT_0e0ef970 = &DAT_0e0ef4f0;
              *(undefined8 *)(puVar18 + -8) = 0x8d1609;
              func_0x08f66540(&DAT_0e0ef978);
            }
          }
          puVar19 = _DAT_0e0ef970;
          bVar3 = (byte)uVar12 & 0x7f;
          uVar23 = (ulong)((uint)uVar12 & 0x7f);
          _DAT_0e0edbd8 = _DAT_0e0ef970;
          if (uVar23 != 0x7f) {
            cVar7 = _DAT_0e0ef970[uVar23 + 0x3f8];
            do {
              uVar13 = _DAT_0e5565b8;
              if (cVar7 < '\0') goto LAB_008d0a80;
              LOCK();
              cVar4 = puVar19[uVar23 + 0x3f8];
              if (cVar7 == cVar4) {
                puVar19[uVar23 + 0x3f8] = cVar7 + '\x01';
                cVar4 = cVar7;
              }
              UNLOCK();
              bVar26 = cVar7 != cVar4;
              cVar7 = cVar4;
            } while (bVar26);
            LOCK();
            uVar13 = uVar12;
            uVar22 = uVar12 - 0x100000000;
            if (uVar12 != _DAT_0e5565b8) {
              uVar13 = _DAT_0e5565b8;
              uVar22 = _DAT_0e5565b8;
            }
            _DAT_0e5565b8 = uVar22;
            UNLOCK();
            if (uVar12 == uVar13) {
              lVar16 = *(long *)(puVar19 + uVar23 * 8);
              *(undefined8 *)(puVar18 + -8) = 0x8d0ce5;
              func_0x08f675f0(lVar16 + -1,1,0);
              bVar6 = puVar19[uVar23 + 0x3f8];
              goto LAB_008d0cee;
            }
            bVar6 = puVar19[uVar23 + 0x3f8];
LAB_008d1451:
            if ((bVar6 & 0x7f) != 1) {
              LOCK();
              bVar5 = puVar19[uVar23 + 0x3f8];
              if (bVar6 == bVar5) {
                puVar19[uVar23 + 0x3f8] = (bVar6 & 0x7f) - 1;
                bVar5 = bVar6;
              }
              UNLOCK();
              bVar26 = bVar6 == bVar5;
              bVar6 = bVar5;
              if (bVar26) goto LAB_008d0a80;
              goto LAB_008d1451;
            }
            LOCK();
            bVar5 = puVar19[uVar23 + 0x3f8];
            if (bVar6 == bVar5) {
              puVar19[uVar23 + 0x3f8] = 0xff;
              bVar5 = bVar6;
            }
            UNLOCK();
            bVar26 = bVar6 != bVar5;
            bVar6 = bVar5;
            if (bVar26) goto LAB_008d1451;
            uVar8 = *(ushort *)(puVar19 + 0x478);
            do {
              puVar19[uVar23 + 0x3f8] = -((~uVar8 & 0x7f) == 0) | (byte)uVar8 | 0x80;
              LOCK();
              uVar9 = *(ushort *)(puVar19 + 0x478);
              if (uVar8 == uVar9) {
                *(ushort *)(puVar19 + 0x478) = uVar8 + 0x80 & 0x7f80 | (ushort)bVar3;
                uVar9 = uVar8;
              }
              UNLOCK();
              bVar26 = uVar8 != uVar9;
              uVar8 = uVar9;
            } while (bVar26);
            goto LAB_008d0a80;
          }
          uVar20 = (uint)*(ushort *)(_DAT_0e0ef970 + 0x478);
          do {
            uVar17 = uVar20 & 0x7f;
            if ((short)(uVar20 & 0x7f) == 0x7f) {
              uVar17 = 0xff;
            }
            uVar23 = (ulong)uVar17;
            uVar8 = (ushort)(puVar19[uVar23 + 0x3f8] & 0x7f);
            if ((puVar19[uVar23 + 0x3f8] & 0x7f) == 0x7f) {
              uVar8 = 0xff;
            }
            uVar2 = (ushort)uVar20;
            LOCK();
            uVar9 = *(ushort *)(puVar19 + 0x478);
            if (uVar2 == uVar9) {
              *(ushort *)(puVar19 + 0x478) = uVar8 | uVar2 + 0x80 & 0x7f80;
            }
            else {
              uVar20 = (uint)uVar9;
            }
            UNLOCK();
          } while (uVar2 != (ushort)uVar20);
          puVar19[uVar23 + 0x3f8] = 1;
          LOCK();
          uVar22 = (ulong)(uVar17 & 0x7f) |
                   (uVar12 & 0xffffffff00000000) - 0x100000000 | (ulong)((uint)uVar12 & 0x7fffff80);
          if (uVar12 != _DAT_0e5565b8) {
            uVar13 = _DAT_0e5565b8;
            uVar22 = _DAT_0e5565b8;
          }
          _DAT_0e5565b8 = uVar22;
          UNLOCK();
          if (uVar12 != uVar13) {
            bVar3 = puVar19[uVar23 + 0x3f8];
LAB_008d140d:
            do {
              uVar22 = uVar13;
              if ((bVar3 & 0x7f) != 1) goto LAB_008d142d;
              LOCK();
              bVar6 = puVar19[uVar23 + 0x3f8];
              if (bVar3 == bVar6) {
                puVar19[uVar23 + 0x3f8] = 0xff;
                bVar6 = bVar3;
              }
              UNLOCK();
              bVar26 = bVar3 != bVar6;
              bVar3 = bVar6;
            } while (bVar26);
            uVar8 = *(ushort *)(puVar19 + 0x478);
            do {
              puVar19[uVar23 + 0x3f8] = -((~uVar8 & 0x7f) == 0) | (byte)uVar8 | 0x80;
              LOCK();
              uVar9 = *(ushort *)(puVar19 + 0x478);
              if (uVar8 == uVar9) {
                *(ushort *)(puVar19 + 0x478) = uVar8 + 0x80 & 0x7f80 | (ushort)uVar17;
                uVar9 = uVar8;
              }
              UNLOCK();
              bVar26 = uVar8 != uVar9;
              uVar8 = uVar9;
            } while (bVar26);
            goto LAB_008d0cad;
          }
          lVar16 = *(long *)(puVar19 + uVar23 * 8);
          local_50 = uVar13;
          *(undefined8 *)(puVar18 + -8) = 0x8d0b84;
          func_0x08f675f0(lVar16 + -1,1 - (int)(uVar12 >> 0x20),0);
          bVar3 = puVar19[uVar23 + 0x3f8];
LAB_008d0b8d:
          uVar22 = local_50;
          if ((bVar3 & 0x7f) != 1) {
            LOCK();
            bVar6 = puVar19[uVar23 + 0x3f8];
            if (bVar3 == bVar6) {
              puVar19[uVar23 + 0x3f8] = (bVar3 & 0x7f) - 1;
              bVar6 = bVar3;
            }
            UNLOCK();
            bVar26 = bVar3 == bVar6;
            uVar13 = uVar12;
            bVar3 = bVar6;
            if (bVar26) goto LAB_008d0cad;
            goto LAB_008d0b8d;
          }
          LOCK();
          bVar6 = puVar19[uVar23 + 0x3f8];
          if (bVar3 == bVar6) {
            puVar19[uVar23 + 0x3f8] = 0xff;
            bVar6 = bVar3;
          }
          UNLOCK();
          bVar26 = bVar3 != bVar6;
          bVar3 = bVar6;
          if (bVar26) goto LAB_008d0b8d;
          uVar8 = *(ushort *)(puVar19 + 0x478);
          do {
            if ((~uVar8 & 0x7f) == 0) {
              bVar3 = 0xff;
            }
            else {
              bVar3 = (byte)uVar8 | 0x80;
            }
            puVar19[uVar23 + 0x3f8] = bVar3;
            LOCK();
            uVar9 = *(ushort *)(puVar19 + 0x478);
            if (uVar8 == uVar9) {
              *(ushort *)(puVar19 + 0x478) = uVar8 + 0x80 & 0x7f80 | (ushort)uVar17;
              uVar9 = uVar8;
            }
            UNLOCK();
            bVar26 = uVar8 != uVar9;
            uVar13 = uVar12;
            uVar8 = uVar9;
          } while (bVar26);
LAB_008d0cad:
          uVar20 = uVar25;
          lVar16 = local_60;
        } while (uVar12 != uVar22);
      }
      goto LAB_008d0a15;
    }
    LOCK();
    bVar26 = uVar25 != _DAT_0e5565b0;
    uVar20 = uVar25 + 1;
    if (bVar26) {
      uVar25 = _DAT_0e5565b0;
      uVar20 = _DAT_0e5565b0;
    }
    _DAT_0e5565b0 = uVar20;
    UNLOCK();
    uVar20 = uVar25;
    if (bVar26) goto LAB_008d0a15;
    if (*(int *)(_DAT_0e5565a8 + 0x10) != 0) {
      LOCK();
      uVar20 = _DAT_0e5565b0 - 1;
      UNLOCK();
      uVar25 = _DAT_0e5565b0 - 1;
      _DAT_0e5565b0 = uVar20;
      if ((char)uVar25 == '\0') {
        if ((uVar25 & 0xff0000) == 0) {
          if ((uVar25 & 0xff00) != 0) {
            do {
              LOCK();
              bVar26 = uVar20 != _DAT_0e5565b0;
              uVar25 = uVar20 & 0xffff00ff;
              if (bVar26) {
                uVar20 = _DAT_0e5565b0;
                uVar25 = _DAT_0e5565b0;
              }
              _DAT_0e5565b0 = uVar25;
              UNLOCK();
            } while (bVar26);
            uVar25 = uVar20 >> 8 & 0xff;
            uVar20 = _DAT_0e5565b0;
            if (uVar25 != 0) {
              uVar13 = _DAT_0e5565b8;
              do {
                while( true ) {
                  while (-1 < (long)uVar13) {
                    LOCK();
                    uVar12 = uVar13;
                    uVar23 = uVar13 + ((ulong)uVar25 << 0x20);
                    if (uVar13 != _DAT_0e5565b8) {
                      uVar12 = _DAT_0e5565b8;
                      uVar23 = _DAT_0e5565b8;
                    }
                    _DAT_0e5565b8 = uVar23;
                    UNLOCK();
                    bVar26 = uVar13 == uVar12;
                    uVar13 = uVar12;
                    uVar20 = _DAT_0e5565b0;
                    lVar16 = local_60;
                    if (bVar26) goto LAB_008d0a15;
                  }
                  if (DAT_0e0ef978 == '\0') {
                    *(undefined8 *)(puVar18 + -8) = 0x8d17cc;
                    iVar10 = func_0x08f66530(&DAT_0e0ef978);
                    if (iVar10 != 0) {
                      plVar24 = (long *)&DAT_0e0ef4f0;
                      local_50 = 0;
                      do {
                        *(undefined8 *)(puVar18 + -8) = 0x8d180d;
                        iVar10 = func_0x08f675d0(&local_40,0x9c60dca,1,0,0x7fff,0);
                        if (iVar10 == 0) {
                          lVar16 = local_40 + 1;
                        }
                        else {
                          pcVar1 = (code *)swi(0x41);
                          (*pcVar1)();
                          puVar18 = puVar18 + 8;
                          lVar16 = 0;
                        }
                        *plVar24 = lVar16;
                        plVar24 = plVar24 + 1;
                        uVar12 = local_50 + 1;
                        *(byte *)(local_50 + 0xe0ef8e8) = (byte)uVar12 | 0x80;
                        local_50 = uVar12;
                      } while (uVar12 != 0x7e);
                      *(undefined8 *)(puVar18 + -8) = 0x8d18ce;
                      iVar10 = func_0x08f675d0(&local_40,0x9c60dca,1,0,0x7fff,0);
                      if (iVar10 == 0) {
                        _DAT_0e0ef8e0 = local_40 + 1;
                      }
                      else {
                        pcVar1 = (code *)swi(0x41);
                        (*pcVar1)();
                        puVar18 = puVar18 + 8;
                        _DAT_0e0ef8e0 = 0;
                      }
                      DAT_0e0ef966 = 0xff;
                      _DAT_0e0ef968 = 0;
                      _DAT_0e0ef970 = &DAT_0e0ef4f0;
                      *(undefined8 *)(puVar18 + -8) = 0x8d1907;
                      func_0x08f66540(&DAT_0e0ef978);
                    }
                  }
                  _DAT_0e0edbd8 = _DAT_0e0ef970;
                  iVar10 = (int)(uVar13 >> 0x20);
                  uVar20 = -iVar10;
                  uVar17 = (uint)uVar13;
                  if (uVar20 <= uVar25) break;
                  LOCK();
                  uVar12 = uVar13;
                  uVar23 = uVar13 + ((ulong)uVar25 << 0x20);
                  if (uVar13 != _DAT_0e5565b8) {
                    uVar12 = _DAT_0e5565b8;
                    uVar23 = _DAT_0e5565b8;
                  }
                  _DAT_0e5565b8 = uVar23;
                  UNLOCK();
                  bVar26 = uVar13 == uVar12;
                  uVar13 = uVar12;
                  uVar20 = uVar25;
                  if (bVar26) goto LAB_008d09b9;
                }
                LOCK();
                uVar12 = uVar13;
                uVar23 = ((ulong)(iVar10 + uVar25) << 0x20) + 0x7f + (ulong)(uVar17 & 0x7fffff80);
                if (uVar13 != _DAT_0e5565b8) {
                  uVar12 = _DAT_0e5565b8;
                  uVar23 = _DAT_0e5565b8;
                }
                _DAT_0e5565b8 = uVar23;
                UNLOCK();
                bVar26 = uVar13 != uVar12;
                uVar13 = uVar12;
              } while (bVar26);
LAB_008d09b9:
              uVar13 = (ulong)(uVar17 & 0x7f);
              if (uVar13 == 0x7f) {
                uVar13 = 0xff;
              }
              lVar16 = *(long *)(_DAT_0e0ef970 + uVar13 * 8);
              *(undefined8 *)(puVar18 + -8) = 0x8d09d6;
              func_0x08f67600(lVar16 + -1,uVar20);
              uVar20 = _DAT_0e5565b0;
              lVar16 = local_60;
            }
          }
        }
        else {
          while (uVar20 = _DAT_0e5565b0, lVar16 = local_60, (uVar25 & 0xff0000) != 0) {
            LOCK();
            bVar26 = uVar25 == _DAT_0e5565b0;
            uVar20 = uVar25;
            uVar17 = uVar25 - 0x10000;
            if (!bVar26) {
              uVar20 = _DAT_0e5565b0;
              uVar17 = _DAT_0e5565b0;
            }
            _DAT_0e5565b0 = uVar17;
            UNLOCK();
            uVar13 = _DAT_0e5565c0;
            if (bVar26) {
              do {
                while ((long)uVar13 < 0) {
                  if (DAT_0e0ef978 == '\0') {
                    *(undefined8 *)(puVar18 + -8) = 0x8d162d;
                    iVar10 = func_0x08f66530(&DAT_0e0ef978);
                    if (iVar10 != 0) {
                      plVar24 = (long *)&DAT_0e0ef4f0;
                      lVar16 = 0;
                      do {
                        *(undefined8 *)(puVar18 + -8) = 0x8d1669;
                        iVar10 = func_0x08f675d0(&local_40,0x9c60dca,1,0,0x7fff,0);
                        if (iVar10 == 0) {
                          lVar15 = local_40 + 1;
                        }
                        else {
                          pcVar1 = (code *)swi(0x41);
                          (*pcVar1)();
                          puVar18 = puVar18 + 8;
                          lVar15 = 0;
                        }
                        *plVar24 = lVar15;
                        lVar15 = lVar16 + 1;
                        plVar24 = plVar24 + 1;
                        *(byte *)(lVar16 + 0xe0ef8e8) = (byte)lVar15 | 0x80;
                        lVar16 = lVar15;
                      } while (lVar15 != 0x7e);
                      *(undefined8 *)(puVar18 + -8) = 0x8d16cd;
                      iVar10 = func_0x08f675d0(&local_40,0x9c60dca,1,0,0x7fff,0);
                      if (iVar10 == 0) {
                        _DAT_0e0ef8e0 = local_40 + 1;
                      }
                      else {
                        pcVar1 = (code *)swi(0x41);
                        (*pcVar1)();
                        puVar18 = puVar18 + 8;
                        _DAT_0e0ef8e0 = 0;
                      }
                      DAT_0e0ef966 = 0xff;
                      _DAT_0e0ef968 = 0;
                      _DAT_0e0ef970 = &DAT_0e0ef4f0;
                      *(undefined8 *)(puVar18 + -8) = 0x8d1706;
                      func_0x08f66540(&DAT_0e0ef978);
                    }
                  }
                  _DAT_0e0edbd8 = _DAT_0e0ef970;
                  uVar20 = -(int)(uVar13 >> 0x20);
                  uVar17 = (uint)uVar13;
                  if (uVar20 < 2) {
                    uVar12 = (ulong)(uVar17 & 0x7fffff80) +
                             (uVar13 & 0xffffffff00000000) + 0x10000007f;
                  }
                  else {
                    uVar12 = uVar13 + 0x100000000;
                    uVar20 = 1;
                  }
                  LOCK();
                  uVar23 = uVar13;
                  if (uVar13 != _DAT_0e5565c0) {
                    uVar23 = _DAT_0e5565c0;
                    uVar12 = _DAT_0e5565c0;
                  }
                  _DAT_0e5565c0 = uVar12;
                  UNLOCK();
                  bVar27 = uVar13 == uVar23;
                  uVar13 = uVar23;
                  if (bVar27) {
                    uVar13 = (ulong)(uVar17 & 0x7f);
                    if (uVar13 == 0x7f) {
                      uVar13 = 0xff;
                    }
                    lVar16 = *(long *)(_DAT_0e0ef970 + uVar13 * 8);
                    *(undefined8 *)(puVar18 + -8) = 0x8d0f1d;
                    func_0x08f67600(lVar16 + -1,uVar20);
                    uVar20 = _DAT_0e5565b0;
                    lVar16 = local_60;
                    goto LAB_008d0a15;
                  }
                }
                LOCK();
                uVar12 = uVar13;
                uVar23 = uVar13 + 0x100000000;
                if (uVar13 != _DAT_0e5565c0) {
                  uVar12 = _DAT_0e5565c0;
                  uVar23 = _DAT_0e5565c0;
                }
                _DAT_0e5565c0 = uVar23;
                UNLOCK();
                bVar27 = uVar13 != uVar12;
                uVar13 = uVar12;
                uVar20 = uVar25;
              } while (bVar27);
            }
            uVar25 = uVar20;
            uVar20 = _DAT_0e5565b0;
            lVar16 = local_60;
            if (bVar26) break;
          }
        }
      }
      goto LAB_008d0a15;
    }
    cVar7 = *(char *)(*in_FS_OFFSET + -0x430);
    if (_DAT_0a3e9c40 == 0) {
      if (*(long *)(*in_FS_OFFSET + -0x40) == 0) {
        if (cVar7 == '\0') {
          lVar16 = *in_FS_OFFSET;
          *(undefined1 *)(lVar16 + -0x430) = 1;
          goto LAB_008d1990;
        }
        goto LAB_008d0f82;
      }
      uVar20 = *(uint *)(*in_FS_OFFSET + -0x434);
      if (cVar7 == '\0') {
        *(undefined1 *)(*in_FS_OFFSET + -0x430) = 1;
      }
    }
    else {
      if (cVar7 == '\0') {
        lVar16 = *in_FS_OFFSET;
        *(undefined1 *)(lVar16 + -0x430) = 1;
        *(undefined8 *)(puVar18 + -8) = 0x8d1979;
        func_0x00000000();
        if (*(long *)(lVar16 + -0x40) == 0) {
          lVar16 = *in_FS_OFFSET;
LAB_008d1990:
          *(undefined4 *)(lVar16 + -0x434) = 0;
        }
      }
LAB_008d0f82:
      uVar20 = *(uint *)(*in_FS_OFFSET + -0x434);
    }
    *(uint *)(*in_FS_OFFSET + -0x434) = uVar20 | 1;
    puVar19 = puVar18;
  }
  uVar20 = (uint)local_58 & 0xfffffff;
  uVar13 = 0xbd;
  if (uVar20 != 0xfffffff) {
    uVar13 = (ulong)(uVar20 % 0x1f7);
  }
  lVar15 = (ulong)*(uint *)(param_1 + 0x14) * 0x10;
  iVar10 = 0;
  lVar16 = param_1 + 0x20 + uVar13 * 0xa0;
  uVar13 = (ulong)*(uint *)(lVar15 + 4 + lVar16);
  if (uVar13 != 0) {
    puVar14 = *(uint **)(lVar15 + 8 + lVar16);
    lVar16 = uVar13 * 0x1c;
    do {
      if (((*puVar14 ^ (uint)local_58) & 0xfffffff) == 0) {
        uVar8 = *(ushort *)((long)puVar14 + 0xe);
        uVar17 = puVar14[3];
        uVar25 = puVar14[2];
        if (uVar20 == 0xfffffff) {
          if (((int)uVar25 < 0) || (uVar21 = 1, 2 < ((int)((uVar25 - _DAT_0e555d6c) * 2) >> 1) - 1U)
             ) {
            uVar21 = *(uint *)(*(long *)(param_1 + 0x7678) + 0x104948) >> 0xe & 1;
          }
        }
        else if (((int)uVar25 < 0) ||
                (uVar21 = 1, 2 < ((int)((uVar25 - _DAT_0e555d6c) * 2) >> 1) - 1U)) {
          uVar21 = *(uint *)(*(long *)(param_1 + 0x58 + (ulong)(uVar20 % 0x1f7) * 0xa0) +
                            (ulong)(uVar20 / 0x1f7 >> 5) * 4) >> (uVar20 / 0x1f7 & 0x1f) & 1;
        }
        plVar24 = *(long **)(_DAT_0e7c4278 + (ulong)*(byte *)((long)puVar14 + 0x16) * 8);
        uVar20 = 0xfffffff;
        if ((~*puVar14 & 0xfffffff) != 0) {
          uVar20 = *puVar14;
        }
        pcVar1 = *(code **)(*plVar24 + 0xa0);
        uVar20 = uVar20 - (int)plVar24[1] & 0x3fffff;
        if (pcVar1 == (code *)0x8d43b60) {
          uVar25 = 0xffffffff;
          if (uVar20 != 0x3fffff) {
            uVar25 = uVar20;
          }
          lVar16 = *(long *)(plVar24[7] + (ulong)(uVar25 * (int)plVar24[8]));
          if (lVar16 == 0) {
LAB_008d1525:
            iVar10 = 0;
          }
          else {
            iVar10 = *(int *)(lVar16 + 0x18);
          }
        }
        else if ((pcVar1 == (code *)0x8bdbfe0) || (pcVar1 == (code *)0x8bdbfe0)) {
          uVar25 = 0xffffffff;
          if (uVar20 != 0x3fffff) {
            uVar25 = uVar20;
          }
          lVar16 = *(long *)(plVar24[7] + (ulong)(uVar25 * (int)plVar24[8]));
          if (lVar16 == 0) goto LAB_008d1525;
          iVar10 = *(int *)(lVar16 + 0x10) + -1;
        }
        else {
          uVar25 = *(uint *)((long)plVar24 + 0xc);
          *(undefined8 *)(puVar19 + -8) = 0x8d116e;
          iVar10 = (*pcVar1)(plVar24,uVar20 | (uVar25 & 0x3f) << 0x16);
        }
        iVar10 = (uint)(ushort)uVar17 + (uint)uVar8 + uVar21 + iVar10;
        break;
      }
      puVar14 = puVar14 + 7;
      lVar16 = lVar16 + -0x1c;
    } while (lVar16 != 0);
  }
  if ((local_44 & 1) != 0) goto LAB_008d1236;
  if (_DAT_0a3e9c40 == 0) {
    if (*(char *)(*in_FS_OFFSET + -0x430) == '\0') {
      lVar16 = *(long *)(*in_FS_OFFSET + -0x40);
      *(undefined1 *)(*in_FS_OFFSET + -0x430) = 1;
      goto joined_r0x008d19d8;
    }
  }
  else if (*(char *)(*in_FS_OFFSET + -0x430) == '\0') {
    lVar16 = *in_FS_OFFSET;
    *(undefined1 *)(lVar16 + -0x430) = 1;
    *(undefined8 *)(puVar19 + -8) = 0x8d1136;
    func_0x00000000();
    lVar16 = *(long *)(lVar16 + -0x40);
joined_r0x008d19d8:
    if (lVar16 == 0) {
      *(undefined4 *)(*in_FS_OFFSET + -0x434) = 0;
    }
  }
  *(byte *)(*in_FS_OFFSET + -0x434) = *(byte *)(*in_FS_OFFSET + -0x434) & 0xfe;
  LOCK();
  uVar20 = _DAT_0e5565b0 - 1;
  UNLOCK();
  uVar25 = _DAT_0e5565b0 - 1;
  _DAT_0e5565b0 = uVar20;
  if ((char)uVar25 == '\0') {
    if ((uVar25 & 0xff0000) == 0) {
      if ((uVar25 & 0xff00) != 0) {
        do {
          LOCK();
          bVar26 = uVar20 != _DAT_0e5565b0;
          uVar25 = uVar20 & 0xffff00ff;
          if (bVar26) {
            uVar20 = _DAT_0e5565b0;
            uVar25 = _DAT_0e5565b0;
          }
          _DAT_0e5565b0 = uVar25;
          UNLOCK();
        } while (bVar26);
        uVar20 = uVar20 >> 8 & 0xff;
        if (uVar20 != 0) {
          local_40 = _DAT_0e5565b8;
          uVar13 = local_40;
          do {
            while (local_40 = uVar13, (long)local_40 < 0) {
              *(undefined8 *)(puVar19 + -8) = 0x8d13f7;
              cVar7 = func_0x00c0c220(&DAT_0e5565b8,uVar20,&local_40);
              uVar13 = local_40;
              if (cVar7 != '\0') goto LAB_008d1236;
            }
            LOCK();
            uVar13 = local_40;
            uVar12 = local_40 + ((ulong)uVar20 << 0x20);
            if (local_40 != _DAT_0e5565b8) {
              uVar13 = _DAT_0e5565b8;
              uVar12 = _DAT_0e5565b8;
            }
            _DAT_0e5565b8 = uVar12;
            UNLOCK();
          } while (local_40 != uVar13);
        }
      }
    }
    else {
      do {
        if ((uVar25 & 0xff0000) == 0) break;
        LOCK();
        bVar26 = uVar25 != _DAT_0e5565b0;
        uVar20 = uVar25;
        uVar17 = uVar25 - 0x10000;
        if (bVar26) {
          uVar20 = _DAT_0e5565b0;
          uVar17 = _DAT_0e5565b0;
        }
        _DAT_0e5565b0 = uVar17;
        UNLOCK();
        uVar13 = _DAT_0e5565c0;
        if (!bVar26) {
          do {
            while (-1 < (long)uVar13) {
              LOCK();
              uVar12 = uVar13;
              uVar23 = uVar13 + 0x100000000;
              if (uVar13 != _DAT_0e5565c0) {
                uVar12 = _DAT_0e5565c0;
                uVar23 = _DAT_0e5565c0;
              }
              _DAT_0e5565c0 = uVar23;
              UNLOCK();
              bVar27 = uVar13 == uVar12;
              uVar13 = uVar12;
              uVar20 = uVar25;
              if (bVar27) goto LAB_008d134b;
            }
            if (DAT_0e0ef978 == '\0') {
              *(undefined8 *)(puVar19 + -8) = 0x8d173b;
              iVar11 = func_0x08f66530(&DAT_0e0ef978);
              if (iVar11 != 0) {
                local_50 = 0;
                local_58 = (long *)&DAT_0e0ef4f0;
                do {
                  *(undefined8 *)(puVar19 + -8) = 0x8d1776;
                  iVar11 = func_0x08f675d0(&local_40,0x9c60dca,1,0,0x7fff,0);
                  if (iVar11 == 0) {
                    lVar16 = local_40 + 1;
                  }
                  else {
                    pcVar1 = (code *)swi(0x41);
                    (*pcVar1)();
                    puVar19 = puVar19 + 8;
                    lVar16 = 0;
                  }
                  *local_58 = lVar16;
                  uVar12 = local_50 + 1;
                  local_58 = local_58 + 1;
                  *(byte *)(local_50 + 0xe0ef8e8) = (byte)uVar12 | 0x80;
                  local_50 = uVar12;
                } while (uVar12 != 0x7e);
                *(undefined8 *)(puVar19 + -8) = 0x8d186c;
                iVar11 = func_0x08f675d0(&local_40,0x9c60dca,1,0,0x7fff,0);
                if (iVar11 == 0) {
                  _DAT_0e0ef8e0 = local_40 + 1;
                }
                else {
                  pcVar1 = (code *)swi(0x41);
                  (*pcVar1)();
                  puVar19 = puVar19 + 8;
                  _DAT_0e0ef8e0 = 0;
                }
                DAT_0e0ef966 = 0xff;
                _DAT_0e0ef968 = 0;
                _DAT_0e0ef970 = &DAT_0e0ef4f0;
                *(undefined8 *)(puVar19 + -8) = 0x8d18a9;
                func_0x08f66540(&DAT_0e0ef978);
              }
            }
            _DAT_0e0edbd8 = _DAT_0e0ef970;
            uVar20 = -(int)(uVar13 >> 0x20);
            uVar17 = (uint)uVar13;
            if (uVar20 < 2) {
              uVar12 = (ulong)(uVar17 & 0x7fffff80) + (uVar13 & 0xffffffff00000000) + 0x10000007f;
            }
            else {
              uVar12 = uVar13 + 0x100000000;
              uVar20 = 1;
            }
            LOCK();
            uVar23 = uVar13;
            if (uVar13 != _DAT_0e5565c0) {
              uVar23 = _DAT_0e5565c0;
              uVar12 = _DAT_0e5565c0;
            }
            _DAT_0e5565c0 = uVar12;
            UNLOCK();
            bVar27 = uVar13 != uVar23;
            uVar13 = uVar23;
          } while (bVar27);
          uVar13 = (ulong)(uVar17 & 0x7f);
          if (uVar13 == 0x7f) {
            uVar13 = 0xff;
          }
          lVar16 = *(long *)(_DAT_0e0ef970 + uVar13 * 8);
          *(undefined8 *)(puVar19 + -8) = 0x8d1347;
          func_0x08f67600(lVar16 + -1,uVar20);
          uVar20 = uVar25;
        }
LAB_008d134b:
        uVar25 = uVar20;
      } while (bVar26);
    }
  }
LAB_008d1236:
  if (*_DAT_0a3e9fa8 == local_38) {
    return iVar10;
  }
  *(undefined8 *)(puVar19 + -8) = 0x8d172d;
  func_0x08f68a00();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
LAB_008d142d:
  LOCK();
  bVar6 = puVar19[uVar23 + 0x3f8];
  if (bVar3 == bVar6) {
    puVar19[uVar23 + 0x3f8] = (bVar3 & 0x7f) - 1;
    bVar6 = bVar3;
  }
  UNLOCK();
  bVar26 = bVar3 == bVar6;
  bVar3 = bVar6;
  if (bVar26) goto LAB_008d0cad;
  goto LAB_008d140d;
LAB_008d0cee:
  lVar16 = local_60;
  if ((bVar6 & 0x7f) != 1) {
    LOCK();
    bVar5 = puVar19[uVar23 + 0x3f8];
    if (bVar6 == bVar5) {
      puVar19[uVar23 + 0x3f8] = (bVar6 & 0x7f) - 1;
      bVar5 = bVar6;
    }
    UNLOCK();
    bVar26 = bVar6 == bVar5;
    uVar20 = uVar25;
    bVar6 = bVar5;
    if (bVar26) goto LAB_008d0a15;
    goto LAB_008d0cee;
  }
  LOCK();
  bVar5 = puVar19[uVar23 + 0x3f8];
  if (bVar6 == bVar5) {
    puVar19[uVar23 + 0x3f8] = 0xff;
    bVar5 = bVar6;
  }
  UNLOCK();
  bVar26 = bVar6 != bVar5;
  bVar6 = bVar5;
  if (bVar26) goto LAB_008d0cee;
  uVar8 = *(ushort *)(puVar19 + 0x478);
  do {
    if ((~uVar8 & 0x7f) == 0) {
      bVar6 = 0xff;
    }
    else {
      bVar6 = (byte)uVar8 | 0x80;
    }
    puVar19[uVar23 + 0x3f8] = bVar6;
    LOCK();
    uVar9 = *(ushort *)(puVar19 + 0x478);
    if (uVar8 == uVar9) {
      *(ushort *)(puVar19 + 0x478) = uVar8 + 0x80 & 0x7f80 | (ushort)bVar3;
      uVar9 = uVar8;
    }
    UNLOCK();
    bVar26 = uVar8 != uVar9;
    uVar20 = uVar25;
    uVar8 = uVar9;
  } while (bVar26);
  goto LAB_008d0a15;
}


