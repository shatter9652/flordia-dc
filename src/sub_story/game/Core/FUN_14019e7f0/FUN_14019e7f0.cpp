// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14019e7f0  size: 3246 bytes
// Name:    FUN_14019e7f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144978be0, FUN_14019e7f0, FUN_1449789a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14019e7f0(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  bool bVar16;
  longlong lStack_58;
  longlong *plStack_50;
  ulonglong uStack_48;
  
  uVar15 = (longlong)param_2 - (longlong)param_1;
  uVar13 = param_3;
  uVar11 = uStack_48;
  while (uStack_48 = uVar13, 0x100 < (longlong)uVar15) {
    if ((longlong)uStack_48 < 1) {
      uVar13 = uVar15 >> 4;
      uStack_48 = uVar11;
      do {
        uVar11 = uVar13 - 1;
        lStack_58 = param_1[uVar11];
        FUN_1449789a0(param_1,uVar11,uVar15 >> 3,&lStack_58);
        bVar16 = 1 < uVar13;
        uVar13 = uVar11;
      } while (bVar16);
      lVar10 = (longlong)param_2 - (longlong)param_1;
      if (lVar10 < 9) {
        return;
      }
      do {
        param_2 = param_2 + -1;
        lStack_58 = *param_2;
        lVar10 = lVar10 + -8;
        *param_2 = *param_1;
        FUN_1449789a0(param_1,0,lVar10 >> 3,&lStack_58);
      } while (8 < lVar10);
      return;
    }
    plVar14 = param_1 + (uVar15 >> 4);
    plVar9 = param_2 + -1;
    lVar10 = (longlong)plVar9 - (longlong)param_1 >> 3;
    plVar3 = param_1;
    plStack_50 = param_2;
    if (0x28 < lVar10) {
      uVar15 = lVar10 + 1;
      uVar11 = uVar15 & 0xfffffffffffffff8;
      uVar15 = uVar15 >> 3;
      FUN_144978be0(param_1,(longlong *)((longlong)param_1 + uVar11),param_1 + uVar15 * 2);
      FUN_144978be0((longlong)plVar14 - uVar11,plVar14,(longlong)plVar14 + uVar11);
      FUN_144978be0(plVar9 + uVar15 * -2,(longlong *)((longlong)plVar9 - uVar11),plVar9);
      plVar3 = (longlong *)((longlong)param_1 + uVar11);
      plVar9 = (longlong *)((longlong)plVar9 - uVar11);
    }
    FUN_144978be0(plVar3,plVar14,plVar9);
    plVar9 = plVar14;
    do {
      lVar10 = plVar9[-1];
      lVar12 = *plVar9;
      uVar2 = *(uint *)(lVar10 + 0x2c);
      uVar1 = *(uint *)(lVar12 + 0x2c);
      if (uVar2 == uVar1) {
        plVar3 = *(longlong **)(lVar10 + 8);
        plVar6 = *(longlong **)(lVar12 + 8);
        uVar1 = *(uint *)((longlong)plVar3 + 0x14);
        uVar2 = *(uint *)((longlong)plVar6 + 0x14);
        if ((uVar1 < 4) && (uVar1 != 2)) {
LAB_14019e8f2:
          if ((uVar2 < 4) && (uVar2 != 2)) {
            if ((uVar1 < 4) && (((uVar1 != 2 && (uVar2 < 4)) && (uVar2 != 2)))) {
              bVar16 = *(uint *)(lVar10 + 0x30) < *(uint *)(lVar12 + 0x30);
              if (*(uint *)(lVar10 + 0x30) == *(uint *)(lVar12 + 0x30)) {
                bVar16 = uVar1 < uVar2;
              }
              if (!bVar16) goto LAB_14019e9ef;
            }
            else {
LAB_14019e983:
              if (uVar1 == uVar2) {
                if (uVar1 == 4) {
                  if (*(byte *)((longlong)plVar6 + 0xb4) <= *(byte *)((longlong)plVar3 + 0xb4)) {
LAB_14019ea88:
                    bVar16 = *(byte *)((longlong)plVar6 + 0xb4) < *(byte *)((longlong)plVar3 + 0xb4)
                    ;
                    goto LAB_14019ea94;
                  }
                }
                else {
                  uVar2 = uVar1;
                  if (uVar1 != 2) goto LAB_14019e9ef;
                  uVar1 = (**(code **)(*plVar3 + 0xa8))(plVar3);
                  uVar2 = (**(code **)(**(longlong **)(lVar12 + 8) + 0xa8))();
                  if (uVar2 <= uVar1) {
                    lVar10 = plVar9[-1];
                    lVar12 = *plVar9;
                    uVar1 = *(uint *)(lVar12 + 0x2c);
                    uVar2 = *(uint *)(lVar10 + 0x2c);
                    goto LAB_14019e952;
                  }
                }
              }
              else if ((int)uVar2 <= (int)uVar1) goto LAB_14019e9ef;
            }
          }
          break;
        }
        if ((3 < uVar2) || (uVar2 == 2)) {
          if (uVar1 == 3) goto LAB_14019e8f2;
          goto LAB_14019e983;
        }
LAB_14019e9ef:
        if ((uVar2 < 4) && (uVar2 != 2)) {
LAB_14019e9fb:
          if ((3 < uVar1) || (uVar1 == 2)) break;
          if ((uVar2 < 4) && (((uVar2 != 2 && (uVar1 < 4)) && (uVar1 != 2)))) {
            bVar16 = *(uint *)(lVar12 + 0x30) < *(uint *)(lVar10 + 0x30);
            if (*(uint *)(lVar12 + 0x30) == *(uint *)(lVar10 + 0x30)) {
              bVar16 = uVar2 < uVar1;
            }
            if (bVar16) break;
          }
          else {
LAB_14019ea4f:
            if (uVar2 == uVar1) {
              if (uVar1 == 4) goto LAB_14019ea88;
              if (uVar1 == 2) {
                uVar1 = (**(code **)(*plVar6 + 0xa8))();
                uVar2 = (**(code **)(**(longlong **)(lVar10 + 8) + 0xa8))();
                bVar16 = uVar1 < uVar2;
                goto LAB_14019ea94;
              }
            }
            else if ((int)uVar2 < (int)uVar1) break;
          }
        }
        else if ((3 < uVar1) || (uVar1 == 2)) {
          if (uVar2 == 3) goto LAB_14019e9fb;
          goto LAB_14019ea4f;
        }
      }
      else {
        if (uVar2 < uVar1) break;
LAB_14019e952:
        bVar16 = uVar1 < uVar2;
        if (uVar1 == uVar2) {
          plVar6 = *(longlong **)(lVar12 + 8);
          plVar3 = *(longlong **)(lVar10 + 8);
          uVar1 = *(uint *)((longlong)plVar3 + 0x14);
          uVar2 = *(uint *)((longlong)plVar6 + 0x14);
          goto LAB_14019e9ef;
        }
LAB_14019ea94:
        if (bVar16) break;
      }
      plVar9 = plVar9 + -1;
    } while (param_1 < plVar9);
LAB_14019eaa3:
    do {
      plVar14 = plVar14 + 1;
      plVar3 = plVar9;
      plVar6 = plVar14;
      if (param_2 <= plVar14) break;
      lVar12 = *plVar9;
      lVar10 = *plVar14;
      uVar2 = *(uint *)(lVar10 + 0x2c);
      uVar1 = *(uint *)(lVar12 + 0x2c);
      if (uVar2 != uVar1) {
        if (uVar2 < uVar1) break;
LAB_14019eb3d:
        bVar16 = uVar1 < uVar2;
        if (uVar1 == uVar2) {
          plVar7 = *(longlong **)(lVar12 + 8);
          plVar4 = *(longlong **)(lVar10 + 8);
          uVar1 = *(uint *)((longlong)plVar4 + 0x14);
          uVar2 = *(uint *)((longlong)plVar7 + 0x14);
          goto LAB_14019ebd9;
        }
LAB_14019ec7b:
        if (bVar16) break;
        goto LAB_14019eaa3;
      }
      plVar4 = *(longlong **)(lVar10 + 8);
      plVar7 = *(longlong **)(lVar12 + 8);
      uVar1 = *(uint *)((longlong)plVar4 + 0x14);
      uVar2 = *(uint *)((longlong)plVar7 + 0x14);
      if ((uVar1 < 4) && (uVar1 != 2)) {
LAB_14019eadd:
        if ((3 < uVar2) || (uVar2 == 2)) break;
        if ((uVar1 < 4) && (((uVar1 != 2 && (uVar2 < 4)) && (uVar2 != 2)))) {
          bVar16 = *(uint *)(lVar10 + 0x30) < *(uint *)(lVar12 + 0x30);
          if (*(uint *)(lVar10 + 0x30) == *(uint *)(lVar12 + 0x30)) {
            bVar16 = uVar1 < uVar2;
          }
          if (!bVar16) goto LAB_14019ebd9;
          break;
        }
LAB_14019eb6e:
        if (uVar1 != uVar2) {
          if ((int)uVar2 <= (int)uVar1) goto LAB_14019ebd9;
          break;
        }
        if (uVar1 != 4) {
          uVar2 = uVar1;
          if (uVar1 != 2) goto LAB_14019ebd9;
          uVar1 = (**(code **)(*plVar4 + 0xa8))(plVar4);
          uVar2 = (**(code **)(**(longlong **)(lVar12 + 8) + 0xa8))();
          if (uVar2 <= uVar1) {
            lVar10 = *plVar14;
            lVar12 = *plVar9;
            uVar1 = *(uint *)(lVar12 + 0x2c);
            uVar2 = *(uint *)(lVar10 + 0x2c);
            goto LAB_14019eb3d;
          }
          break;
        }
        if (*(byte *)((longlong)plVar4 + 0xb4) < *(byte *)((longlong)plVar7 + 0xb4)) break;
      }
      else {
        if ((3 < uVar2) || (uVar2 == 2)) {
          if (uVar1 == 3) goto LAB_14019eadd;
          goto LAB_14019eb6e;
        }
LAB_14019ebd9:
        if ((uVar2 < 4) && (uVar2 != 2)) {
LAB_14019ebe5:
          if ((3 < uVar1) || (uVar1 == 2)) break;
          if ((uVar2 < 4) && (((uVar2 != 2 && (uVar1 < 4)) && (uVar1 != 2)))) {
            bVar16 = *(uint *)(lVar12 + 0x30) < *(uint *)(lVar10 + 0x30);
            if (*(uint *)(lVar12 + 0x30) == *(uint *)(lVar10 + 0x30)) {
              bVar16 = uVar2 < uVar1;
            }
            if (bVar16) break;
            goto LAB_14019eaa3;
          }
        }
        else {
          if ((uVar1 < 4) && (uVar1 != 2)) goto LAB_14019eaa3;
          if (uVar2 == 3) goto LAB_14019ebe5;
        }
        if (uVar2 != uVar1) {
          if ((int)uVar2 < (int)uVar1) break;
          goto LAB_14019eaa3;
        }
        if (uVar1 != 4) {
          if (uVar1 == 2) {
            uVar1 = (**(code **)(*plVar7 + 0xa8))();
            uVar2 = (**(code **)(**(longlong **)(lVar10 + 8) + 0xa8))();
            bVar16 = uVar1 < uVar2;
            goto LAB_14019ec7b;
          }
          goto LAB_14019eaa3;
        }
      }
    } while (*(byte *)((longlong)plVar4 + 0xb4) <= *(byte *)((longlong)plVar7 + 0xb4));
LAB_14019ecbe:
    if (plVar14 < param_2) {
      lVar12 = *plVar14;
      lVar10 = *plVar9;
      uVar2 = *(uint *)(lVar10 + 0x2c);
      uVar1 = *(uint *)(lVar12 + 0x2c);
      if (uVar2 == uVar1) {
        plVar4 = *(longlong **)(lVar10 + 8);
        plVar7 = *(longlong **)(lVar12 + 8);
        uVar1 = *(uint *)((longlong)plVar4 + 0x14);
        uVar2 = *(uint *)((longlong)plVar7 + 0x14);
        if ((uVar1 < 4) && (uVar1 != 2)) {
LAB_14019ecf2:
          if ((uVar2 < 4) && (uVar2 != 2)) {
            if ((3 < uVar1) || (((uVar1 == 2 || (3 < uVar2)) || (uVar2 == 2)))) goto LAB_14019ed80;
            bVar16 = *(uint *)(lVar10 + 0x30) < *(uint *)(lVar12 + 0x30);
            if (*(uint *)(lVar10 + 0x30) == *(uint *)(lVar12 + 0x30)) {
              bVar16 = uVar1 < uVar2;
            }
            if (!bVar16) goto LAB_14019ede2;
          }
          goto LAB_14019f0c0;
        }
        if ((uVar2 < 4) && (uVar2 != 2)) {
LAB_14019ede2:
          if ((uVar2 < 4) && (uVar2 != 2)) {
LAB_14019edee:
            if ((3 < uVar1) || (uVar1 == 2)) goto LAB_14019ee91;
            if ((uVar2 < 4) && (((uVar2 != 2 && (uVar1 < 4)) && (uVar1 != 2)))) {
              bVar16 = *(uint *)(lVar12 + 0x30) < *(uint *)(lVar10 + 0x30);
              if (*(uint *)(lVar12 + 0x30) == *(uint *)(lVar10 + 0x30)) {
                bVar16 = uVar2 < uVar1;
              }
              goto joined_r0x00014019ee2f;
            }
LAB_14019ee4b:
            if (uVar2 == uVar1) {
              if (uVar1 == 4) goto LAB_14019f097;
              if (uVar1 == 2) {
                uVar1 = (**(code **)(*plVar7 + 0xa8))();
                uVar2 = (**(code **)(**(longlong **)(lVar10 + 8) + 0xa8))();
                bVar16 = uVar1 < uVar2;
                goto joined_r0x00014019ee2f;
              }
            }
            else if ((int)uVar2 < (int)uVar1) goto LAB_14019ee91;
          }
          else if ((3 < uVar1) || (uVar1 == 2)) {
            if (uVar2 == 3) goto LAB_14019edee;
            goto LAB_14019ee4b;
          }
          goto LAB_14019f0a9;
        }
        if (uVar1 == 3) goto LAB_14019ecf2;
LAB_14019ed80:
        if (uVar1 == uVar2) {
          if (uVar1 == 4) {
            if (*(byte *)((longlong)plVar4 + 0xb4) < *(byte *)((longlong)plVar7 + 0xb4))
            goto LAB_14019f0c0;
LAB_14019f097:
            bVar16 = *(byte *)((longlong)plVar7 + 0xb4) < *(byte *)((longlong)plVar4 + 0xb4);
            goto joined_r0x00014019ee2f;
          }
          uVar2 = uVar1;
          if (uVar1 != 2) goto LAB_14019ede2;
          uVar1 = (**(code **)(*plVar4 + 0xa8))(plVar4);
          uVar2 = (**(code **)(**(longlong **)(lVar12 + 8) + 0xa8))();
          if (uVar2 <= uVar1) {
            lVar10 = *plVar9;
            lVar12 = *plVar14;
            uVar1 = *(uint *)(lVar12 + 0x2c);
            uVar2 = *(uint *)(lVar10 + 0x2c);
            goto LAB_14019ed52;
          }
        }
        else if ((int)uVar2 <= (int)uVar1) goto LAB_14019ede2;
      }
      else {
        if (uVar2 < uVar1) goto LAB_14019f0c0;
LAB_14019ed52:
        bVar16 = uVar1 < uVar2;
        if (uVar1 == uVar2) {
          plVar7 = *(longlong **)(lVar12 + 8);
          plVar4 = *(longlong **)(lVar10 + 8);
          uVar1 = *(uint *)((longlong)plVar4 + 0x14);
          uVar2 = *(uint *)((longlong)plVar7 + 0x14);
          goto LAB_14019ede2;
        }
joined_r0x00014019ee2f:
        if (bVar16) goto LAB_14019ee91;
LAB_14019f0a9:
        if (plVar14 != plVar6) {
          lVar10 = *plVar6;
          *plVar6 = *plVar14;
          *plVar14 = lVar10;
        }
        plVar6 = plVar6 + 1;
      }
LAB_14019f0c0:
      plVar14 = plVar14 + 1;
      goto LAB_14019ecbe;
    }
LAB_14019ee91:
    plVar4 = plVar9;
    if (param_1 < plVar3) {
LAB_14019ee9a:
      lVar12 = *plVar9;
      plVar7 = plVar3 + -1;
      lVar10 = plVar3[-1];
      uVar1 = *(uint *)(lVar12 + 0x2c);
      uVar2 = *(uint *)(lVar10 + 0x2c);
      plVar4 = plVar9;
      if (uVar2 == uVar1) {
        plVar5 = *(longlong **)(lVar10 + 8);
        plVar8 = *(longlong **)(lVar12 + 8);
        uVar2 = *(uint *)((longlong)plVar5 + 0x14);
        uVar1 = *(uint *)((longlong)plVar8 + 0x14);
        if ((uVar2 < 4) && (uVar2 != 2)) {
LAB_14019eecd:
          if ((uVar1 < 4) && (uVar1 != 2)) {
            if ((3 < uVar2) || (((uVar2 == 2 || (3 < uVar1)) || (uVar1 == 2)))) goto LAB_14019ef3e;
            bVar16 = *(uint *)(lVar10 + 0x30) < *(uint *)(lVar12 + 0x30);
            if (*(uint *)(lVar10 + 0x30) == *(uint *)(lVar12 + 0x30)) {
              bVar16 = uVar2 < uVar1;
            }
            if (!bVar16) goto LAB_14019efc2;
          }
          goto LAB_14019f084;
        }
        if ((3 < uVar1) || (uVar1 == 2)) {
          if (uVar2 == 3) goto LAB_14019eecd;
LAB_14019ef3e:
          if (uVar2 == uVar1) {
            if (uVar2 == 4) {
              if (*(byte *)((longlong)plVar8 + 0xb4) <= *(byte *)((longlong)plVar5 + 0xb4)) {
LAB_14019f061:
                bVar16 = *(byte *)((longlong)plVar8 + 0xb4) < *(byte *)((longlong)plVar5 + 0xb4);
                goto LAB_14019f06d;
              }
            }
            else {
              uVar1 = uVar2;
              if (uVar2 != 2) goto LAB_14019efc2;
              uVar1 = (**(code **)(*plVar5 + 0xa8))(plVar5);
              uVar2 = (**(code **)(**(longlong **)(lVar12 + 8) + 0xa8))();
              if (uVar2 <= uVar1) {
                lVar10 = *plVar7;
                lVar12 = *plVar9;
                uVar1 = *(uint *)(lVar12 + 0x2c);
                uVar2 = *(uint *)(lVar10 + 0x2c);
                goto LAB_14019efab;
              }
            }
          }
          else if ((int)uVar1 <= (int)uVar2) goto LAB_14019efc2;
          goto LAB_14019f084;
        }
LAB_14019efc2:
        if ((uVar1 < 4) && (uVar1 != 2)) {
LAB_14019efce:
          if ((3 < uVar2) || (uVar2 == 2)) goto LAB_14019f0cf;
          if ((uVar1 < 4) && (((uVar1 != 2 && (uVar2 < 4)) && (uVar2 != 2)))) {
            bVar16 = *(uint *)(lVar12 + 0x30) < *(uint *)(lVar10 + 0x30);
            if (*(uint *)(lVar12 + 0x30) == *(uint *)(lVar10 + 0x30)) {
              bVar16 = uVar1 < uVar2;
            }
            if (!bVar16) goto LAB_14019f06f;
            goto LAB_14019f0cf;
          }
LAB_14019f026:
          if (uVar1 == uVar2) {
            if (uVar2 == 4) goto LAB_14019f061;
            if (uVar2 == 2) {
              uVar1 = (**(code **)(*plVar8 + 0xa8))();
              uVar2 = (**(code **)(**(longlong **)(lVar10 + 8) + 0xa8))();
              if (uVar1 < uVar2) goto LAB_14019f0cf;
            }
          }
          else if ((int)uVar1 < (int)uVar2) goto LAB_14019f0cf;
        }
        else if ((3 < uVar2) || (uVar2 == 2)) {
          if (uVar1 == 3) goto LAB_14019efce;
          goto LAB_14019f026;
        }
      }
      else {
        if (uVar2 < uVar1) goto LAB_14019f084;
LAB_14019efab:
        bVar16 = uVar1 < uVar2;
        if (uVar1 == uVar2) {
          plVar8 = *(longlong **)(lVar12 + 8);
          plVar5 = *(longlong **)(lVar10 + 8);
          uVar2 = *(uint *)((longlong)plVar5 + 0x14);
          uVar1 = *(uint *)((longlong)plVar8 + 0x14);
          goto LAB_14019efc2;
        }
LAB_14019f06d:
        if (bVar16) goto LAB_14019f0cf;
      }
LAB_14019f06f:
      plVar4 = plVar9 + -1;
      bVar16 = plVar3 != plVar9;
      plVar9 = plVar4;
      if (bVar16) {
        lVar10 = *plVar4;
        *plVar4 = *plVar7;
        *plVar7 = lVar10;
      }
LAB_14019f084:
      plVar3 = plVar7;
      plVar4 = plVar9;
      if (plVar7 <= param_1) goto LAB_14019f0cf;
      goto LAB_14019ee9a;
    }
LAB_14019f0cf:
    if ((plVar14 != param_2) || (plVar3 != param_1)) {
      if (plVar3 == param_1) {
        lVar10 = *plVar4;
        if (plVar6 != plVar14) {
          *plVar4 = *plVar6;
          *plVar6 = lVar10;
          lVar10 = *plVar4;
        }
        *plVar4 = *plVar14;
        plVar9 = plVar4 + 1;
        *plVar14 = lVar10;
        plVar14 = plVar14 + 1;
        plVar6 = plVar6 + 1;
      }
      else {
        plVar7 = plVar3 + -1;
        if (plVar14 == param_2) {
          plVar9 = plVar4 + -1;
          lVar10 = plVar4[-1];
          if (plVar3 != plVar4) {
            lVar10 = *plVar7;
            *plVar7 = plVar4[-1];
            *plVar9 = lVar10;
          }
          *plVar9 = plVar6[-1];
          plVar6[-1] = lVar10;
          plVar3 = plVar7;
          plVar6 = plVar6 + -1;
        }
        else {
          lVar10 = *plVar14;
          *plVar14 = *plVar7;
          *plVar7 = lVar10;
          plVar14 = plVar14 + 1;
          plVar9 = plVar4;
          plVar3 = plVar7;
        }
      }
      goto LAB_14019ecbe;
    }
    uVar13 = (uStack_48 >> 2) + (uStack_48 >> 1);
    if ((longlong)plVar4 - (longlong)param_1 < (longlong)plStack_50 - (longlong)plVar6) {
      FUN_14019e7f0(param_1,plVar4,uVar13);
      plVar4 = param_2;
      param_1 = plVar6;
    }
    else {
      FUN_14019e7f0(plVar6,param_2,uVar13);
    }
    param_2 = plVar4;
    uVar11 = uStack_48;
    uVar15 = (longlong)plVar4 - (longlong)param_1;
  }
  plVar9 = param_1;
  uStack_48 = uVar11;
  if (param_1 != param_2) {
    while (plVar14 = plVar9 + 1, plVar14 != param_2) {
      lVar10 = *param_1;
      lVar12 = plVar9[1];
      bVar16 = *(uint *)(lVar12 + 0x2c) < *(uint *)(lVar10 + 0x2c);
      plVar3 = plVar14;
      if (*(uint *)(lVar12 + 0x2c) == *(uint *)(lVar10 + 0x2c)) {
        plVar6 = *(longlong **)(lVar12 + 8);
        uVar1 = *(uint *)((longlong)plVar6 + 0x14);
        uVar2 = *(uint *)(*(longlong *)(lVar10 + 8) + 0x14);
        if ((uVar1 < 4) && (uVar1 != 2)) {
LAB_14019f23d:
          if ((uVar2 < 4) && (uVar2 != 2)) {
            if ((uVar1 < 4) && (((uVar1 != 2 && (uVar2 < 4)) && (uVar2 != 2)))) {
              bVar16 = *(uint *)(lVar12 + 0x30) < *(uint *)(lVar10 + 0x30);
              if (*(uint *)(lVar12 + 0x30) == *(uint *)(lVar10 + 0x30)) {
                bVar16 = uVar1 < uVar2;
              }
              goto joined_r0x00014019f2c9;
            }
            goto LAB_14019f290;
          }
        }
        else {
          if ((uVar2 < 4) && (uVar2 != 2)) goto LAB_14019f2f7;
          if (uVar1 == 3) goto LAB_14019f23d;
LAB_14019f290:
          if (uVar1 == uVar2) {
            if (uVar1 != 4) {
              if (uVar1 != 2) goto LAB_14019f2f7;
              uVar1 = (**(code **)(*plVar6 + 0xa8))();
              uVar2 = (**(code **)(**(longlong **)(lVar10 + 8) + 0xa8))();
              bVar16 = uVar1 < uVar2;
              goto joined_r0x00014019f2c9;
            }
            if (*(byte *)(*(longlong *)(lVar10 + 8) + 0xb4) <= *(byte *)((longlong)plVar6 + 0xb4))
            goto LAB_14019f2f7;
          }
          else if ((int)uVar2 <= (int)uVar1) goto LAB_14019f2f7;
        }
      }
      else {
joined_r0x00014019f2c9:
        if (!bVar16) {
LAB_14019f2f7:
          do {
            lVar10 = plVar3[-1];
            bVar16 = *(uint *)(lVar12 + 0x2c) < *(uint *)(lVar10 + 0x2c);
            if (*(uint *)(lVar12 + 0x2c) == *(uint *)(lVar10 + 0x2c)) {
              plVar9 = *(longlong **)(lVar12 + 8);
              uVar1 = *(uint *)((longlong)plVar9 + 0x14);
              uVar2 = *(uint *)(*(longlong *)(lVar10 + 8) + 0x14);
              if ((uVar1 < 4) && (uVar1 != 2)) {
LAB_14019f32a:
                if ((uVar2 < 4) && (uVar2 != 2)) {
                  if ((uVar1 < 4) && (((uVar1 != 2 && (uVar2 < 4)) && (uVar2 != 2)))) {
                    bVar16 = *(uint *)(lVar12 + 0x30) < *(uint *)(lVar10 + 0x30);
                    if (*(uint *)(lVar12 + 0x30) == *(uint *)(lVar10 + 0x30)) {
                      bVar16 = uVar1 < uVar2;
                    }
                    goto joined_r0x00014019f3d8;
                  }
                  goto LAB_14019f38a;
                }
              }
              else {
                if ((uVar2 < 4) && (uVar2 != 2)) goto LAB_14019f2dd;
                if (uVar1 == 3) goto LAB_14019f32a;
LAB_14019f38a:
                if (uVar1 == uVar2) {
                  if (uVar1 == 4) {
                    bVar16 = *(byte *)((longlong)plVar9 + 0xb4) <
                             *(byte *)(*(longlong *)(lVar10 + 8) + 0xb4);
                    goto joined_r0x00014019f3d8;
                  }
                  if (uVar1 != 2) goto LAB_14019f2dd;
                  uVar1 = (**(code **)(*plVar9 + 0xa8))();
                  uVar2 = (**(code **)(**(longlong **)(lVar10 + 8) + 0xa8))();
                  if (uVar2 <= uVar1) goto LAB_14019f2dd;
                  lVar10 = plVar3[-1];
                }
                else if ((int)uVar2 <= (int)uVar1) goto LAB_14019f2dd;
              }
            }
            else {
joined_r0x00014019f3d8:
              if (!bVar16) goto LAB_14019f2dd;
            }
            *plVar3 = lVar10;
            plVar3 = plVar3 + -1;
          } while( true );
        }
      }
      func_0x00014503ae80(param_1,plVar14,plVar9 + 2);
      plVar3 = param_1;
LAB_14019f2dd:
      *plVar3 = lVar12;
      plVar9 = plVar14;
    }
  }
  return;
}

