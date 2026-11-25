// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1456c4400  size: 1727 bytes
// Name:    netHttpRequest::ParseDateString
// Subsystem: core
// Class:   netHttpRequest
//
// Evidence:
//   GTAVSRC: netHttpRequest::ParseDateString  (rage/base/src/net/http.cpp)
//   literal: %s %d %s %d %d:%d:%d GMT
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1412da520, FUN_1456c4ac0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/netHttpRequest.h"


undefined8 netHttpRequest__ParseDateString(undefined8 param_1)

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [16];
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  char cVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [32];
  undefined1 auVar14 [16];
  undefined4 *puVar15;
  undefined4 *puVar16;
  int *piVar17;
  int *piVar18;
  int iStack_1d0;
  int iStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  int iStack_1c0;
  undefined4 uStack_1bc;
  undefined4 auStack_1b8 [8];
  byte abStack_198 [264];
  undefined8 uStack_90;
  undefined1 auStack_88 [36];
  undefined4 uStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  int iStack_50;
  undefined8 uStack_4c;
  undefined4 uStack_44;
  
  iStack_1cc = 0;
  uStack_90 = param_1;
  func_0x000144dac8f0(abStack_198,&uStack_90,0x100);
  lVar7 = func_0x000145f40590(abStack_198,0x2d);
  if (lVar7 == 0) {
    bVar4 = false;
  }
  else {
    auVar12[1] = DAT_14615962f;
    auVar12[0] = DAT_14615962f;
    auVar12[2] = DAT_14615962f;
    auVar12[3] = DAT_14615962f;
    auVar12[4] = DAT_14615962f;
    auVar12[5] = DAT_14615962f;
    auVar12[6] = DAT_14615962f;
    auVar12[7] = DAT_14615962f;
    auVar12[8] = DAT_14615962f;
    auVar12[9] = DAT_14615962f;
    auVar12[10] = DAT_14615962f;
    auVar12[0xb] = DAT_14615962f;
    auVar12[0xc] = DAT_14615962f;
    auVar12[0xd] = DAT_14615962f;
    auVar12[0xe] = DAT_14615962f;
    auVar12[0xf] = DAT_14615962f;
    auVar13[1] = DAT_14615962f;
    auVar13[0] = DAT_14615962f;
    auVar13[2] = DAT_14615962f;
    auVar13[3] = DAT_14615962f;
    auVar13[4] = DAT_14615962f;
    auVar13[5] = DAT_14615962f;
    auVar13[6] = DAT_14615962f;
    auVar13[7] = DAT_14615962f;
    auVar13[8] = DAT_14615962f;
    auVar13[9] = DAT_14615962f;
    auVar13[10] = DAT_14615962f;
    auVar13[0xb] = DAT_14615962f;
    auVar13[0xc] = DAT_14615962f;
    auVar13[0xd] = DAT_14615962f;
    auVar13[0xe] = DAT_14615962f;
    auVar13[0xf] = DAT_14615962f;
    auVar13[0x10] = DAT_14615962f;
    auVar13[0x11] = DAT_14615962f;
    auVar13[0x12] = DAT_14615962f;
    auVar13[0x13] = DAT_14615962f;
    auVar13[0x14] = DAT_14615962f;
    auVar13[0x15] = DAT_14615962f;
    auVar13[0x16] = DAT_14615962f;
    auVar13[0x17] = DAT_14615962f;
    auVar13[0x18] = DAT_14615962f;
    auVar13[0x19] = DAT_14615962f;
    auVar13[0x1a] = DAT_14615962f;
    auVar13[0x1b] = DAT_14615962f;
    auVar13[0x1c] = DAT_14615962f;
    auVar13[0x1d] = DAT_14615962f;
    auVar13[0x1e] = DAT_14615962f;
    auVar13[0x1f] = DAT_14615962f;
    lVar7 = 0;
    do {
      auVar1 = *(undefined1 (*) [32])(abStack_198 + lVar7);
      auVar14 = auVar1._0_16_;
      auVar2 = vpcmpeqb_avx(auVar14,auVar12);
      if ((auVar2._0_4_ & 1) != 0) {
        abStack_198[lVar7] = 0x20;
      }
      auVar2 = vpcmpeqb_avx(auVar14,auVar12);
      if ((auVar2[1] & 1) != 0) {
        abStack_198[lVar7 + 1] = 0x20;
      }
      auVar2 = vpcmpeqb_avx(auVar14,auVar12);
      if ((auVar2[2] & 1) != 0) {
        abStack_198[lVar7 + 2] = 0x20;
      }
      auVar2 = vpcmpeqb_avx(auVar14,auVar12);
      if ((auVar2[3] & 1) != 0) {
        abStack_198[lVar7 + 3] = 0x20;
      }
      auVar2 = vpcmpeqb_avx(auVar14,auVar12);
      if ((auVar2[4] & 1) != 0) {
        abStack_198[lVar7 + 4] = 0x20;
      }
      auVar2 = vpcmpeqb_avx(auVar14,auVar12);
      if ((auVar2[5] & 1) != 0) {
        abStack_198[lVar7 + 5] = 0x20;
      }
      auVar2 = vpcmpeqb_avx(auVar14,auVar12);
      if ((auVar2[6] & 1) != 0) {
        abStack_198[lVar7 + 6] = 0x20;
      }
      auVar2 = vpcmpeqb_avx(auVar14,auVar12);
      if ((auVar2[7] & 1) != 0) {
        abStack_198[lVar7 + 7] = 0x20;
      }
      auVar2 = vpcmpeqb_avx(auVar14,auVar12);
      if ((auVar2[8] & 1) != 0) {
        abStack_198[lVar7 + 8] = 0x20;
      }
      auVar2 = vpcmpeqb_avx(auVar14,auVar12);
      if ((auVar2[9] & 1) != 0) {
        abStack_198[lVar7 + 9] = 0x20;
      }
      auVar2 = vpcmpeqb_avx(auVar14,auVar12);
      if ((auVar2[10] & 1) != 0) {
        abStack_198[lVar7 + 10] = 0x20;
      }
      auVar2 = vpcmpeqb_avx(auVar14,auVar12);
      if ((auVar2[0xb] & 1) != 0) {
        abStack_198[lVar7 + 0xb] = 0x20;
      }
      auVar2 = vpcmpeqb_avx(auVar14,auVar12);
      if ((auVar2[0xc] & 1) != 0) {
        abStack_198[lVar7 + 0xc] = 0x20;
      }
      auVar2 = vpcmpeqb_avx(auVar14,auVar12);
      if ((auVar2[0xd] & 1) != 0) {
        abStack_198[lVar7 + 0xd] = 0x20;
      }
      auVar2 = vpcmpeqb_avx(auVar14,auVar12);
      if ((auVar2[0xe] & 1) != 0) {
        abStack_198[lVar7 + 0xe] = 0x20;
      }
      auVar2 = vpcmpeqb_avx(auVar14,auVar12);
      if ((auVar2[0xf] & 1) != 0) {
        abStack_198[lVar7 + 0xf] = 0x20;
      }
      auVar1 = vpcmpeqb_avx2(auVar1,auVar13);
      if ((auVar1._16_4_ & 1) != 0) {
        abStack_198[lVar7 + 0x10] = 0x20;
      }
      if ((auVar1[0x11] & 1) != 0) {
        abStack_198[lVar7 + 0x11] = 0x20;
      }
      if ((auVar1[0x12] & 1) != 0) {
        abStack_198[lVar7 + 0x12] = 0x20;
      }
      if ((auVar1[0x13] & 1) != 0) {
        abStack_198[lVar7 + 0x13] = 0x20;
      }
      if ((auVar1[0x14] & 1) != 0) {
        abStack_198[lVar7 + 0x14] = 0x20;
      }
      if ((auVar1[0x15] & 1) != 0) {
        abStack_198[lVar7 + 0x15] = 0x20;
      }
      if ((auVar1[0x16] & 1) != 0) {
        abStack_198[lVar7 + 0x16] = 0x20;
      }
      if ((auVar1[0x17] & 1) != 0) {
        abStack_198[lVar7 + 0x17] = 0x20;
      }
      if ((auVar1[0x18] & 1) != 0) {
        abStack_198[lVar7 + 0x18] = 0x20;
      }
      if ((auVar1[0x19] & 1) != 0) {
        abStack_198[lVar7 + 0x19] = 0x20;
      }
      if ((auVar1[0x1a] & 1) != 0) {
        abStack_198[lVar7 + 0x1a] = 0x20;
      }
      if ((auVar1[0x1b] & 1) != 0) {
        abStack_198[lVar7 + 0x1b] = 0x20;
      }
      if ((auVar1[0x1c] & 1) != 0) {
        abStack_198[lVar7 + 0x1c] = 0x20;
      }
      if ((auVar1[0x1d] & 1) != 0) {
        abStack_198[lVar7 + 0x1d] = 0x20;
      }
      if ((auVar1[0x1e] & 1) != 0) {
        abStack_198[lVar7 + 0x1e] = 0x20;
      }
      if ((auVar1[0x1f] & 1) != 0) {
        abStack_198[lVar7 + 0x1f] = 0x20;
      }
      lVar7 = lVar7 + 0x20;
    } while (lVar7 != 0x100);
    lVar7 = func_0x000145f407f0(abStack_198);
    bVar3 = true;
    if ((lVar7 != 0x14) || ((abStack_198[0x13] & 0xdf) != 0x5a)) {
      bVar4 = false;
      goto LAB_1456c4457;
    }
    bVar4 = true;
    abStack_198[0x13] = 0;
  }
  bVar3 = false;
LAB_1456c4457:
  puVar16 = &uStack_1bc;
  piVar17 = &iStack_1c0;
  piVar18 = &iStack_1d0;
  puVar15 = auStack_1b8;
  puVar10 = puVar16;
  piVar11 = piVar18;
  iVar5 = FUN_1412da520(abStack_198,&UNK_1467868cb,auStack_88,puVar16,puVar15,piVar18,piVar17,
                        &uStack_1c4,&uStack_1c8);
  cVar9 = (char)puVar10;
  if (iVar5 != 7) {
    puVar10 = auStack_1b8;
    puVar15 = puVar16;
    piVar11 = piVar17;
    iVar5 = FUN_1412da520(abStack_198,&UNK_1467854d1,auStack_88,puVar10,puVar16,piVar17,&uStack_1c4,
                          &uStack_1c8,piVar18);
    cVar9 = (char)puVar10;
    if (iVar5 != 7) {
      piVar11 = &iStack_1cc;
      iVar5 = FUN_1412da520(abStack_198,&UNK_146785404,&iStack_1d0,piVar11,puVar16,piVar17,
                            &uStack_1c4,&uStack_1c8,piVar18);
      cVar9 = (char)piVar11;
      puVar15 = puVar16;
      piVar11 = piVar17;
      if (iVar5 != 6) {
        return 0;
      }
    }
  }
  if (bVar3) {
    if (iStack_1d0 < 0x46) {
      iStack_1d0 = iStack_1d0 + 2000;
    }
    else {
      iStack_1d0 = iStack_1d0 + 0x76c;
    }
  }
  iVar5 = iStack_1d0 + -0x76c;
  if (bVar4) {
    iStack_54 = iStack_1cc + -1;
  }
  else {
    iVar6 = _strnicmp(-0x43,(char)auStack_1b8,(void *)0x3,cVar9,puVar15,piVar11);
    if (iVar6 == 0) {
      iStack_54 = 0;
    }
    else {
      iVar6 = _strnicmp(-0x76,(char)auStack_1b8,(void *)0x3,cVar9,puVar15,piVar11);
      if (iVar6 == 0) {
        iStack_54 = 1;
      }
      else {
        iVar6 = _strnicmp('d',(char)auStack_1b8,(void *)0x3,cVar9,puVar15,piVar11);
        if (iVar6 == 0) {
          iStack_54 = 2;
        }
        else {
          iVar6 = _strnicmp('\x1e',(char)auStack_1b8,(void *)0x3,cVar9,puVar15,piVar11);
          if (iVar6 == 0) {
            iStack_54 = 3;
          }
          else {
            iVar6 = _strnicmp(-0x73,(char)auStack_1b8,(void *)0x3,cVar9,puVar15,piVar11);
            if (iVar6 == 0) {
              iStack_54 = 4;
            }
            else {
              iVar6 = _strnicmp('<',(char)auStack_1b8,(void *)0x3,cVar9,puVar15,piVar11);
              if (iVar6 == 0) {
                iStack_54 = 5;
              }
              else {
                iVar6 = _strnicmp(-0x1e,(char)auStack_1b8,(void *)0x3,cVar9,puVar15,piVar11);
                if (iVar6 == 0) {
                  iStack_54 = 6;
                }
                else {
                  iVar6 = _strnicmp('i',(char)auStack_1b8,(void *)0x3,cVar9,puVar15,piVar11);
                  if (iVar6 == 0) {
                    iStack_54 = 7;
                  }
                  else {
                    iVar6 = _strnicmp('J',(char)auStack_1b8,(void *)0x3,cVar9,puVar15,piVar11);
                    if (iVar6 == 0) {
                      iStack_54 = 8;
                    }
                    else {
                      iVar6 = _strnicmp(-7,(char)auStack_1b8,(void *)0x3,cVar9,puVar15,piVar11);
                      if (iVar6 == 0) {
                        iStack_54 = 9;
                      }
                      else {
                        iVar6 = _strnicmp(-0x62,(char)auStack_1b8,(void *)0x3,cVar9,puVar15,piVar11)
                        ;
                        if (iVar6 == 0) {
                          iStack_54 = 10;
                        }
                        else {
                          iVar6 = _strnicmp(-0x50,(char)auStack_1b8,(void *)0x3,cVar9,puVar15,
                                            piVar11);
                          iStack_54 = 0xb;
                          if (iVar6 != 0) {
                            iStack_54 = 0;
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
  uStack_64 = uStack_1c8;
  uStack_60 = uStack_1c4;
  iStack_5c = iStack_1c0;
  uStack_58 = uStack_1bc;
  uStack_4c = 0;
  uStack_44 = 0;
  iStack_50 = iVar5;
  uVar8 = FUN_1456c4ac0();
  return uVar8;
}

