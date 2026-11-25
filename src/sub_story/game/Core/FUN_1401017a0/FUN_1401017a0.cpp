// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401017a0  size: 1245 bytes
// Name:    FUN_1401017a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1436a0220, FUN_14203ab70, FUN_144fe0120, FUN_14501bb00, FUN_144f02e30, FUN_1405e34b0, FUN_1404f60e0, FUN_144edd090, FUN_144edcc30, FUN_1404f63b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1401017a0(longlong param_1)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  byte bVar15;
  uint uVar16;
  uint uVar17;
  undefined4 uVar18;
  byte bVar19;
  char *unaff_R15;
  undefined7 uVar21;
  ulonglong uVar20;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  longlong lStack_70;
  undefined8 uStack_60;
  
  uStack_60 = 0x1401017b9;
  lVar9 = func_0x000144ef6280(*(undefined4 *)(param_1 + 0x9c));
  if ((lVar9 == 0) ||
     (((*(byte *)(lVar9 + 0x98) & 8) == 0 && ((*(byte *)(lVar9 + 0x124) & 8) == 0)))) {
    uStack_60 = 0x1401017e5;
    cVar4 = FUN_144edd090(param_1,1,1);
    if (cVar4 == '\0') {
      uStack_60 = 0x1401017f8;
      lVar9 = func_0x000144da6540(*(undefined4 *)(param_1 + 0x9c));
      if ((lVar9 != 0) && (lVar9 = *(longlong *)(lVar9 + 0x10e8), lVar9 != 0)) {
        uStack_60 = 0x140101820;
        lVar10 = FUN_14501bb00(lVar9,0,0);
        if (lVar10 == 0) {
          return 0;
        }
        uStack_60 = 0x140101841;
        lVar11 = func_0x000144ef6280(*(undefined4 *)(lVar10 + 0x9c));
        if (lVar11 != 0) {
          if ((*(uint *)(lVar11 + 0x98) & 0x10) != 0) {
            return 0;
          }
          if ((*(uint *)(lVar11 + 0x124) & 0x10) != 0) {
            return 0;
          }
          if (((*(uint *)(lVar11 + 0x124) | *(uint *)(lVar11 + 0x98)) & 0x20) != 0) {
            return 1;
          }
        }
        uStack_60 = 0x14010187a;
        cVar4 = FUN_1436a0220(param_1,lVar10);
        if (cVar4 != '\0') {
          return 1;
        }
        uStack_60 = 0x14010188c;
        lVar11 = func_0x000144f02de0(*(undefined4 *)(lVar10 + 0x9c));
        if (lVar11 != 0) {
          uStack_60 = 0x14010189f;
          lVar11 = FUN_144f02e30(lVar11,0);
          if (lVar11 != 0) {
            uStack_60 = 0x1401018b3;
            lVar12 = func_0x000144f3a220(*(undefined4 *)(lVar11 + 0x40));
            if ((lVar12 != 0) && (lVar12 != lVar10)) {
              uStack_60 = 0x1401018c8;
              cVar4 = FUN_1436a0220(param_1,lVar12);
              if (cVar4 != '\0') {
                return 1;
              }
            }
            uStack_60 = 0x1401018dc;
            lVar12 = func_0x000144f3a220(*(undefined4 *)(lVar11 + 0x100));
            if ((lVar12 != 0) && (lVar12 != lVar10)) {
              uStack_60 = 0x1401018f1;
              cVar4 = FUN_1436a0220(param_1,lVar12);
              if (cVar4 != '\0') {
                return 1;
              }
            }
            uStack_60 = 0x140101905;
            lVar12 = func_0x000144f3a220(*(undefined4 *)(lVar11 + 0x1c0));
            if ((lVar12 != 0) && (lVar12 != lVar10)) {
              uStack_60 = 0x14010191a;
              cVar4 = FUN_1436a0220(param_1,lVar12);
              if (cVar4 != '\0') {
                return 1;
              }
            }
            uStack_60 = 0x14010192e;
            lVar12 = func_0x000144f3a220(*(undefined4 *)(lVar11 + 0x280));
            if ((lVar12 != 0) && (lVar12 != lVar10)) {
              uStack_60 = 0x140101943;
              cVar4 = FUN_1436a0220(param_1,lVar12);
              if (cVar4 != '\0') {
                return 1;
              }
            }
            uStack_60 = 0x140101957;
            lVar12 = func_0x000144f3a220(*(undefined4 *)(lVar11 + 0x340));
            if ((lVar12 != 0) && (lVar12 != lVar10)) {
              uStack_60 = 0x14010196c;
              cVar4 = FUN_1436a0220(param_1,lVar12);
              if (cVar4 != '\0') {
                return 1;
              }
            }
            uStack_60 = 0x140101980;
            lVar12 = func_0x000144f3a220(*(undefined4 *)(lVar11 + 0x400));
            if ((lVar12 != 0) && (lVar12 != lVar10)) {
              uStack_60 = 0x140101995;
              cVar4 = FUN_1436a0220(param_1,lVar12);
              if (cVar4 != '\0') {
                return 1;
              }
            }
            uStack_60 = 0x1401019a9;
            lVar12 = func_0x000144f3a220(*(undefined4 *)(lVar11 + 0x4c0));
            if ((lVar12 != 0) && (lVar12 != lVar10)) {
              uStack_60 = 0x1401019be;
              cVar4 = FUN_1436a0220(param_1,lVar12);
              if (cVar4 != '\0') {
                return 1;
              }
            }
            uStack_60 = 0x1401019d2;
            lVar12 = func_0x000144f3a220(*(undefined4 *)(lVar11 + 0x580));
            if ((lVar12 != 0) && (lVar12 != lVar10)) {
              uStack_60 = 0x1401019e7;
              cVar4 = FUN_1436a0220(param_1,lVar12);
              if (cVar4 != '\0') {
                return 1;
              }
            }
            uStack_60 = 0x1401019fb;
            lVar12 = func_0x000144f3a220(*(undefined4 *)(lVar11 + 0x640));
            if ((lVar12 != 0) && (lVar12 != lVar10)) {
              uStack_60 = 0x140101a10;
              cVar4 = FUN_1436a0220(param_1,lVar12);
              if (cVar4 != '\0') {
                return 1;
              }
            }
            uStack_60 = 0x140101a24;
            lVar12 = func_0x000144f3a220(*(undefined4 *)(lVar11 + 0x700));
            if ((lVar12 != 0) && (lVar12 != lVar10)) {
              uStack_60 = 0x140101a39;
              cVar4 = FUN_1436a0220(param_1,lVar12);
              if (cVar4 != '\0') {
                return 1;
              }
            }
            uStack_60 = 0x140101a4d;
            lVar12 = func_0x000144f3a220(*(undefined4 *)(lVar11 + 0x7c0));
            if ((lVar12 != 0) && (lVar12 != lVar10)) {
              uStack_60 = 0x140101a62;
              cVar4 = FUN_1436a0220(param_1,lVar12);
              if (cVar4 != '\0') {
                return 1;
              }
            }
            uStack_60 = 0x140101a76;
            lVar12 = func_0x000144f3a220(*(undefined4 *)(lVar11 + 0x880));
            if ((lVar12 != 0) && (lVar12 != lVar10)) {
              uStack_60 = 0x140101a8b;
              cVar4 = FUN_1436a0220(param_1,lVar12);
              if (cVar4 != '\0') {
                return 1;
              }
            }
            uStack_60 = 0x140101a9f;
            lVar12 = func_0x000144f3a220(*(undefined4 *)(lVar11 + 0x940));
            if ((lVar12 != 0) && (lVar12 != lVar10)) {
              uStack_60 = 0x140101ab4;
              cVar4 = FUN_1436a0220(param_1,lVar12);
              if (cVar4 != '\0') {
                return 1;
              }
            }
            uStack_60 = 0x140101ac8;
            lVar12 = func_0x000144f3a220(*(undefined4 *)(lVar11 + 0xa00));
            if ((lVar12 != 0) && (lVar12 != lVar10)) {
              uStack_60 = 0x140101add;
              cVar4 = FUN_1436a0220(param_1,lVar12);
              if (cVar4 != '\0') {
                return 1;
              }
            }
            uStack_60 = 0x140101af1;
            lVar12 = func_0x000144f3a220(*(undefined4 *)(lVar11 + 0xac0));
            if ((lVar12 != 0) && (lVar12 != lVar10)) {
              uStack_60 = 0x140101b06;
              cVar4 = FUN_1436a0220(param_1,lVar12);
              if (cVar4 != '\0') {
                return 1;
              }
            }
            uStack_60 = 0x140101b1a;
            lVar12 = func_0x000144f3a220(*(undefined4 *)(lVar11 + 0xb80));
            if ((lVar12 != 0) && (lVar12 != lVar10)) {
              uStack_60 = 0x140101b2f;
              cVar4 = FUN_1436a0220(param_1,lVar12);
              if (cVar4 != '\0') {
                return 1;
              }
            }
            uStack_60 = 0x140101b43;
            lVar12 = func_0x000144f3a220(*(undefined4 *)(lVar11 + 0xc40));
            if ((lVar12 != 0) && (lVar12 != lVar10)) {
              uStack_60 = 0x140101b58;
              cVar4 = FUN_1436a0220(param_1,lVar12);
              if (cVar4 != '\0') {
                return 1;
              }
            }
            uStack_60 = 0x140101b6c;
            lVar12 = func_0x000144f3a220(*(undefined4 *)(lVar11 + 0xd00));
            if ((lVar12 != 0) && (lVar12 != lVar10)) {
              uStack_60 = 0x140101b81;
              cVar4 = FUN_1436a0220(param_1,lVar12);
              if (cVar4 != '\0') {
                return 1;
              }
            }
            uStack_60 = 0x140101b95;
            lVar12 = func_0x000144f3a220(*(undefined4 *)(lVar11 + 0xdc0));
            if ((lVar12 != 0) && (lVar12 != lVar10)) {
              uStack_60 = 0x140101baa;
              cVar4 = FUN_1436a0220(param_1,lVar12);
              if (cVar4 != '\0') {
                return 1;
              }
            }
            uStack_60 = 0x140101bbe;
            lVar11 = func_0x000144f3a220(*(undefined4 *)(lVar11 + 0xe80));
            if ((lVar11 != 0) && (lVar11 != lVar10)) {
              uStack_60 = 0x140101bd3;
              cVar4 = FUN_1436a0220(param_1,lVar11);
              if (cVar4 != '\0') {
                return 1;
              }
            }
          }
        }
        uStack_60 = 0x140101be6;
        cVar4 = FUN_1405e34b0(param_1,lVar10);
        if (cVar4 != '\0') {
          return 1;
        }
        uStack_60 = 0x140101bfa;
        lVar11 = FUN_144edcc30(param_1,0);
        if (lVar11 == 0) {
          return 0;
        }
        if ((*(byte *)(*(longlong *)(lVar11 + 0x10) + 0x351) & 0x80) == 0) {
          uStack_60 = 0x140101c1d;
          cVar4 = FUN_1404f63b0(lVar9,0);
          if (cVar4 == '\0') {
            uStack_60 = 0x140101c2b;
            cVar4 = FUN_1404f60e0(lVar9,0);
            if (cVar4 == '\0') {
              uStack_60 = 0x140101c3a;
              cVar4 = FUN_14203ab70(param_1,lVar10);
              if (cVar4 == '\0') {
                return 0;
              }
            }
          }
          uStack_60 = 0x140101c59;
          cVar4 = FUN_144fe0120(lVar10,param_1,1,1);
          if (cVar4 == '\0') {
code_r0x000140d1c26e:
            do {
              lVar9 = lVar10;
              uVar2 = *(undefined4 *)(param_1 + 0x9c);
              bVar5 = func_0x000144e238f0(uVar2);
              if (lVar11 == 0) {
                if (*(char *)(lVar9 + 0x30) == '\x03') {
                  uVar18 = *(undefined4 *)(lVar9 + 0x9c);
                  lStack_70 = func_0x000144fa1860(uVar18);
code_r0x000140d1c349:
                  uVar21 = 0;
                  bVar22 = false;
                  goto code_r0x000140d1c34c;
                }
code_r0x000140d1c2dd:
                cVar4 = FUN_140fb9530(param_1,lVar9);
                if (cVar4 != '\0') {
                  return 0;
                }
              }
              else {
                sVar1 = *(short *)(lVar11 + 0x118);
                if ((sVar1 == 0) || (**(longlong **)(lVar11 + 0x110) == 0)) {
                  uVar21 = 0;
                  bVar22 = false;
                }
                else {
                  bVar22 = (*(uint *)(*(longlong *)(**(longlong **)(lVar11 + 0x110) + 0x10) + 0x1c)
                           & 0xfffffffe) == 2;
                  uVar21 = (undefined7)((ulonglong)unaff_R15 >> 8);
                }
                if (*(char *)(lVar9 + 0x30) != '\x03') goto code_r0x000140d1c2c7;
                uVar18 = *(undefined4 *)(lVar9 + 0x9c);
                lStack_70 = func_0x000144fa1860(uVar18);
                if ((*(byte *)(*(longlong *)(lVar11 + 0x10) + 0x34c) & 0x18) != 0) {
                  if (bVar5 == 0) {
                    if (lStack_70 == 0) goto code_r0x000140d1c997;
                    bVar6 = *(byte *)(lStack_70 + 0x162c) & 4;
                  }
                  else {
                    if (lStack_70 == 0) {
code_r0x000140d1c997:
                      lStack_70 = 0;
                      goto code_r0x000140d1c336;
                    }
                    bVar6 = *(byte *)(lStack_70 + 0x162c) & 8;
                  }
                  if (bVar6 != 0) {
                    return 1;
                  }
                }
code_r0x000140d1c336:
                if (!bVar22) goto code_r0x000140d1c349;
                bVar22 = true;
                if ((((sVar1 != 0) && (**(longlong **)(lVar11 + 0x110) != 0)) &&
                    (*(int *)(*(longlong *)(**(longlong **)(lVar11 + 0x110) + 0x10) + 0x1c) == 2))
                   && (cVar4 = func_0x000144ed25d0(uVar2), cVar4 != '\0')) {
                  lVar10 = func_0x000144fe4680(lVar9);
                  if (lVar10 == 0) {
                    bVar22 = true;
                  }
                  else {
                    cVar4 = func_0x000144e238f0(*(undefined4 *)(lVar10 + 0x9c));
                    bVar22 = true;
                    if (cVar4 != '\0') {
                      return 0;
                    }
                  }
                }
code_r0x000140d1c34c:
                lVar12 = func_0x000144ef6280(uVar18);
                lVar13 = func_0x000144f03110(uVar18);
                lVar10 = func_0x000144da10f0(uVar18);
                if (lVar13 == 0) {
                  bVar23 = false;
                }
                else {
                  if ((*(byte *)(lVar10 + 0x195) & 0x10) == 0) {
                    bVar23 = false;
                  }
                  else {
                    if (0 < (longlong)*(int *)(lVar10 + 0x188)) {
                      lVar14 = 0;
                      do {
                        uVar16 = *(uint *)(lVar10 + 0x120 + lVar14 * 4);
                        if ((uVar16 & 0xffff0000) == 0x1ac0000) goto code_r0x000140d1c8c7;
                        lVar14 = lVar14 + 1;
                      } while (*(int *)(lVar10 + 0x188) != lVar14);
                    }
                    uVar16 = 0xffffffff;
code_r0x000140d1c8c7:
                    bVar23 = uVar16 != 0xffffffff;
                  }
                  if (((*(byte *)(lVar12 + 0x3e) & 0x40) == 0) &&
                     ((*(byte *)(lVar12 + 0xca) & 0x40) == 0)) {
                    lVar10 = FUN_140c63b30(lVar9);
                    if (lVar10 == 0 || bVar23) {
                      uVar16 = *(uint *)(lVar13 + 0x50);
                      if (uVar16 != 0x1ffff) {
                        uVar3 = *(uint *)(_DAT_14abb6918[5] + (ulonglong)(uVar16 & 0x1ffff) * 4);
                        if ((((~uVar3 & *(uint *)(_DAT_14abb6918 + 6)) == 0) &&
                            ((uVar3 & 0x7fe0000) == (uVar16 & 0xfffe0000))) &&
                           (*_DAT_14abb6918 != 0)) {
                          unaff_R15 = (char *)CONCAT71(uVar21,bVar5);
                          lVar10 = *_DAT_14abb6918 +
                                   (ulonglong)((uVar16 & 0x1ffff) * (int)_DAT_14abb6918[1]);
                          if (lVar10 != param_1) goto code_r0x000140d1c26e;
                        }
                      }
                    }
                    else {
                      unaff_R15 = (char *)CONCAT71(uVar21,bVar5);
                      if (lVar10 != param_1) goto code_r0x000140d1c26e;
                      bVar23 = false;
                    }
                  }
                }
                uVar20 = CONCAT71(uVar21,bVar5);
                if (lVar12 != 0 && (bVar5 ^ 1) == 0) {
                  if ((((*(byte *)(lVar12 + 0x91) & 1) != 0) ||
                      ((*(byte *)(lVar12 + 0x11d) & 1) != 0)) &&
                     (cVar4 = FUN_144e71070(*(undefined4 *)(lVar9 + 0x9c)), cVar4 != '\0')) {
                    return 1;
                  }
                  bVar19 = 1;
                  bVar6 = 1;
                  if ((*(byte *)(lVar12 + 0x82) & 0x10) == 0) {
                    bVar6 = (*(byte *)(lVar12 + 0x10e) & 0x10) >> 4;
                  }
                  if ((*(byte *)(lVar12 + 0x8a) & 0x40) == 0) {
                    bVar19 = (*(byte *)(lVar12 + 0x116) & 0x40) >> 6;
                  }
                  if (bVar6 == 0) {
                    if ((lVar11 != 0 & bVar19) != 0) {
code_r0x000140d1ca1c:
                      uVar20 = *(ulonglong *)(lVar11 + 0x10);
                      uVar16 = *(uint *)(uVar20 + 0x34c);
                      if ((~uVar16 & 0x3000) != 0) {
                        lVar10 = func_0x0001450e1520();
                        if (((lVar10 == 0) || (*(longlong *)(lVar10 + 0x88) == 0)) ||
                           (uVar3 = *(uint *)(*(longlong *)(lVar10 + 0x88) + 0x18), uVar3 == 0x1ffff
                           )) {
code_r0x000140d1cabc:
                          bVar25 = false;
                        }
                        else {
                          uVar17 = *(uint *)(_DAT_14abbe2e8[5] + (ulonglong)(uVar3 & 0x1ffff) * 4);
                          if ((((~uVar17 & *(uint *)(_DAT_14abbe2e8 + 6)) != 0) ||
                              (uVar17 = uVar17 & 0x7fe0000, uVar17 != (uVar3 & 0xfffe0000))) ||
                             ((lVar10 = *_DAT_14abbe2e8, lVar10 == 0 ||
                              (lVar10 = FUN_144eaa5a0(*(undefined4 *)
                                                       (lVar10 + 0x9c +
                                                       (ulonglong)
                                                       ((uVar3 & 0x1ffff) * (int)_DAT_14abbe2e8[1]))
                                                      ,lVar10,uVar17,0), lVar10 == 0 || bVar22))))
                          goto code_r0x000140d1cabc;
                          lVar13 = *(longlong *)(lVar10 + 0x18);
                          if (lVar13 == 0) {
                            if (*(longlong *)(lVar10 + 0x28) == 0) {
                              lVar10 = 0;
                            }
                            else {
                              lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x28) + 0x28);
                            }
                            iVar8 = 0;
                            if ((*(short *)(lVar10 + 0x118) != 0) &&
                               (lVar13 = **(longlong **)(lVar10 + 0x110), iVar8 = 0, lVar13 != 0))
                            goto code_r0x000140d1cb3d;
                          }
                          else {
code_r0x000140d1cb3d:
                            iVar8 = *(int *)(*(longlong *)(lVar13 + 0x10) + 0x1c);
                          }
                          bVar25 = iVar8 != 5;
                        }
                        if (bVar22) {
                          bVar15 = 1;
                          bVar24 = (uVar16 & 0x2000) == 0 &&
                                   (*(uint *)(uVar20 + 0x350) & 0x8000) == 0;
                          if ((*(uint *)(uVar20 + 0x348) >> 0x10 & 1) == 0) {
                            bVar15 = (byte)(*(uint *)(uVar20 + 0x348) >> 0x11) & 1;
                          }
                        }
                        else {
                          bVar24 = false;
                          bVar15 = 0;
                        }
                        if ((bVar6 & (bVar24 | bVar25)) != 0) {
                          return 0;
                        }
                        if ((bVar19 & (bVar25 | bVar15)) != 0) {
                          return 0;
                        }
                      }
                    }
                  }
                  else if (lVar11 != 0) goto code_r0x000140d1ca1c;
                  if ((*(byte *)(lVar12 + 0x98) & 0x80) == 0) {
                    bVar6 = *(byte *)(lVar12 + 0x124) >> 7;
                  }
                  else {
                    bVar6 = 1;
                  }
                  uVar20 = CONCAT71((int7)(uVar20 >> 8),bVar5);
                  if ((((lVar11 != 0) && (bVar6 != 0)) &&
                      ((*(byte *)(*(longlong *)(lVar11 + 0x10) + 0x366) & 8) != 0)) &&
                     ((*(byte *)(*(longlong *)(lVar11 + 0x10) + 0x363) & 0x10) == 0)) {
                    return 0;
                  }
                }
                uVar2 = *(undefined4 *)(lVar9 + 0x9c);
                bVar6 = func_0x000144e238f0(uVar2);
                if ((lVar9 != param_1 & (byte)uVar20 & bVar6) == 1) {
                  lVar10 = func_0x000144da6540(*(undefined4 *)(param_1 + 0x9c));
                  if (((lVar10 != 0) && (*(longlong *)(lVar10 + 0x1080) != 0)) &&
                     ((*(byte *)(*(longlong *)(lVar10 + 0x1080) + 0x19) & 0x10) != 0)) {
                    return 0;
                  }
                  lVar10 = func_0x000144da6540(uVar2);
                  if (((lVar10 != 0) && (*(longlong *)(lVar10 + 0x1080) != 0)) &&
                     ((*(byte *)(*(longlong *)(lVar10 + 0x1080) + 0x19) & 0x10) != 0)) {
                    return 0;
                  }
                }
                lVar10 = func_0x0001452f71a0(uVar2);
                if ((lVar10 != 0) && (*(int *)(lVar10 + 0x18) == 1)) {
                  FUN_140f31190((longlong)&uStack_60 + 4,param_1);
                  if (uStack_60._4_4_ == *(int *)(lVar10 + 0x1c)) {
                    return 0;
                  }
                }
                if (((bVar5 ^ 1) == 0 && lStack_70 != 0) &&
                   ((*(byte *)(lStack_70 + 0xe4d) & 4) != 0)) {
                  return 0;
                }
                cVar4 = FUN_140329f40(lVar9,0xe4401c70);
                if (cVar4 != '\0') {
                  return 0;
                }
                cVar4 = FUN_140329f40(lVar9,0x10b07abf);
                if (cVar4 != '\0') {
                  return 0;
                }
                lVar10 = func_0x000144ef6280(*(undefined4 *)(param_1 + 0x9c));
                cVar4 = FUN_144fe0120(param_1,lVar9,uVar20 & 0xffffffff,1,0,1);
                if (cVar4 == '\0') {
code_r0x000140d1c456:
                  if (lVar11 == 0) goto code_r0x000140d1c2d8;
code_r0x000140d1c2c7:
                  if ((*(byte *)(*(longlong *)(lVar11 + 0x10) + 0x362) & 0x20) == 0)
                  goto code_r0x000140d1c2d8;
                  if (!bVar22 && -1 < *(char *)(*(longlong *)(lVar11 + 0x10) + 0x34a))
                  goto code_r0x000140d1c2dd;
                }
                else {
                  if ((lVar10 == 0) ||
                     (((*(byte *)(lVar10 + 0x14) & 2) == 0 && ((*(byte *)(lVar10 + 0xa0) & 2) == 0))
                     )) {
code_r0x000140d1c48a:
                    if ((byte)uVar20 != 0) {
                      if (bVar23) {
                        return 1;
                      }
                      if (((lVar11 == 0) || (*(short *)(lVar11 + 0x118) == 0)) ||
                         (**(longlong **)(lVar11 + 0x110) == 0)) {
                        bVar22 = false;
                      }
                      else {
                        bVar22 = *(int *)(*(longlong *)(**(longlong **)(lVar11 + 0x110) + 0x10) +
                                         0x1c) - 7U < 2;
                      }
                      lVar9 = func_0x000144ef6280(*(undefined4 *)(lVar9 + 0x9c));
                      if (lVar9 != 0) {
                        if ((*(uint *)(lVar9 + 0x48) >> 0x10 & 1) != 0) {
                          return 1;
                        }
                        if ((*(uint *)(lVar9 + 0xd4) >> 0x10 & 1) != 0) {
                          return 1;
                        }
                        if ((bVar22) &&
                           (((*(uint *)(lVar9 + 0xd4) | *(uint *)(lVar9 + 0x48)) >> 0x13 & 1) != 0))
                        {
                          return 1;
                        }
                      }
                      return 0;
                    }
                    if (bVar6 != 0) goto code_r0x000140d1c456;
                    if (lVar11 == 0) {
                      return 0;
                    }
                    iVar8 = *(int *)(lVar11 + 0x20);
                    if (((iVar8 != -0x748ccc05) && (iVar8 != 0x7fc7d7a)) &&
                       ((iVar8 != 0x2335d2e1 && (cVar4 = func_0x000140c75890(iVar8), cVar4 == '\0'))
                       )) {
                      if (iVar8 < -0x20717615) {
                        if (iVar8 != -0x323e8b50) {
code_r0x000140d1c5ff:
                          if (*(int *)(*(longlong *)(lVar11 + 0x10) + 0x2c) != 0x5c4c5883) {
                            return 0;
                          }
                        }
                      }
                      else if (((iVar8 != -0x20717615) && (iVar8 != -0xa73b05)) &&
                              (iVar8 != 0x736f5990)) goto code_r0x000140d1c5ff;
                    }
                    goto code_r0x000140d1c2c7;
                  }
                  if (lVar11 != 0) {
                    if ((*(byte *)(*(longlong *)(lVar11 + 0x10) + 0x34c) & 1) == 0)
                    goto code_r0x000140d1c2c7;
                    goto code_r0x000140d1c48a;
                  }
code_r0x000140d1c2d8:
                  if (!bVar22) goto code_r0x000140d1c2dd;
                }
              }
              unaff_R15 = (char *)(lVar9 + 0x30);
              lVar10 = FUN_144de6230(*(undefined4 *)(lVar9 + 0x9c));
              if (lVar10 == 0) goto code_r0x000140d1c67d;
              cVar4 = *(char *)(lVar10 + 0x30);
              if ((lVar10 == param_1 || cVar4 != '\x03') ||
                 (cVar7 = func_0x000144ed25d0(*(undefined4 *)(lVar10 + 0x9c)), cVar7 != '\0')) {
                cVar7 = *unaff_R15;
                if (cVar7 == '\x04') {
                  if (cVar4 != '\x02') {
                    return 1;
                  }
                  cVar4 = FUN_140d1cc80(param_1,lVar10,lVar11);
                  if (cVar4 == '\0') {
                    return 0;
                  }
code_r0x000140d1c67d:
                  cVar7 = *unaff_R15;
                }
                if ((cVar7 == '\x02') &&
                   (cVar4 = FUN_140d1cc80(param_1,lVar9,lVar11), cVar4 == '\0')) {
                  return 0;
                }
                return 1;
              }
            } while( true );
          }
        }
      }
    }
  }
  return 0;
}

