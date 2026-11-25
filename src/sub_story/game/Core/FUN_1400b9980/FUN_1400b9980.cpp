// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b9980  size: 2258 bytes
// Name:    FUN_1400b9980
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141fabf40, FUN_141fae880, FUN_14551cd10, FUN_140ae4b00, FUN_140ae6410, FUN_14004c030, FUN_141d0d350, FUN_144dc48c0, FUN_140ae53d0, FUN_145568780, FUN_140ae4970, FUN_140004b40, FUN_142801270
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1400b9980(undefined8 *param_1)

{
  byte bVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  code *pcVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint *puVar12;
  uint *puVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  uint uVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined8 *puVar20;
  bool bVar21;
  uint uStack_fc;
  undefined1 auStack_f8 [16];
  uint uStack_dc;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined1 uStack_98;
  undefined8 uStack_97;
  undefined8 uStack_8f;
  char cStack_78;
  undefined4 uStack_74;
  undefined8 uStack_68;
  undefined8 uStack_60;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  
  puVar17 = param_1 + 0x10;
  cVar7 = func_0x000145311e80(puVar17);
  if (cVar7 == '\0') {
    return 0;
  }
  if (*(int *)(param_1 + 1) == -1) {
    return 0;
  }
  FUN_140004b40(0x1478b1e78);
  plVar4 = _DAT_149e24f60;
  plVar5 = _DAT_149e24f58;
  uVar8 = *(uint *)(param_1 + 0x15);
  uVar10 = (ulonglong)uVar8 & 0x1ffff;
  if ((((uVar10 == 0x1ffff) ||
       (plVar3 = *(longlong **)((ulonglong)(uVar8 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
       plVar3 == (longlong *)0x0)) ||
      (uVar16 = *(uint *)(plVar3[5] + uVar10 * 4), (uVar16 >> 0x11 & 0x3ff) != uVar8 >> 0x16)) ||
     (((uVar16 & *(uint *)(plVar3 + 6)) != *(uint *)(plVar3 + 6) || (*plVar3 == 0)))) {
    uStack_d0 = *(undefined4 *)(param_1 + 1);
    lVar19 = 0;
    uStack_d8 = *param_1;
    uStack_b8 = param_1[4];
    uStack_b0 = param_1[5];
    uStack_97 = *(undefined8 *)((longlong)param_1 + 0x41);
    uStack_8f = *(undefined8 *)((longlong)param_1 + 0x49);
    uStack_a8 = (undefined1)param_1[6];
    uStack_a7 = (undefined7)*(undefined8 *)((longlong)param_1 + 0x31);
    uStack_a0 = (undefined1)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x31) >> 0x38);
    uStack_9f = (undefined7)*(undefined8 *)((longlong)param_1 + 0x39);
    uStack_98 = (undefined1)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x39) >> 0x38);
    puStack_c8 = &UNK_1462f9ce8;
    cVar7 = *(char *)(param_1 + 0xc);
    uStack_74 = *(undefined4 *)((longlong)param_1 + 100);
    uStack_68 = param_1[0xe];
    uStack_60 = param_1[0xf];
    cStack_78 = cVar7;
LAB_1400b9bb2:
    if (uStack_d8._4_4_ == 0) {
      uStack_d8 = CONCAT44(_DAT_1478b1fb8,(int)uStack_d8);
    }
    if ((uStack_8f._7_1_ != '\0') && (cVar7 != '\0')) {
      uVar8 = *(uint *)(param_1 + 0x15);
      if (((((ulonglong)uVar8 & 0x1ffff) == 0x1ffff) ||
          (((plVar4 = *(longlong **)((ulonglong)(uVar8 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
            plVar4 == (longlong *)0x0 ||
            (uVar16 = *(uint *)(plVar4[5] + ((ulonglong)uVar8 & 0x1ffff) * 4),
            (uVar16 >> 0x11 & 0x3ff) != uVar8 >> 0x16)) ||
           ((uVar16 & *(uint *)(plVar4 + 6)) != *(uint *)(plVar4 + 6))))) ||
         ((*plVar4 == 0 || ((*(uint *)(param_1 + 0x12) & 0x7f) == 2)))) {
        func_0x000144fa06a0(puVar17,&fStack_58);
        uStack_b8 = CONCAT44(uStack_b8._4_4_ + fStack_54,(float)uStack_b8 + fStack_58);
        uStack_b0 = CONCAT44(uStack_b0._4_4_ + fStack_4c,(float)uStack_b0 + fStack_50);
        cStack_78 = '\0';
      }
    }
    uStack_fc = 0;
    FUN_140ae4b00(&uStack_d8,&uStack_fc);
    uVar8 = uStack_fc;
    uVar16 = FUN_145568780(lVar19,uStack_fc);
    uVar10 = 0;
    if (2 < uVar16) goto LAB_1400ba230;
    if (plVar5 == (longlong *)0x0) {
LAB_1400b9dab:
      FUN_140ae53d0(uVar8);
      uVar10 = 0;
      goto LAB_1400ba230;
    }
    cVar7 = func_0x00014282d510(*(undefined4 *)(param_1 + 1),
                                *(undefined1 *)((longlong)param_1 + 0x7f));
    if (cVar7 == '\0') {
      if ((uint)(*(int *)((longlong)plVar5 + 0xc) - (int)plVar5[2]) < 10) goto LAB_1400b9cd8;
    }
    else if (*(int *)((longlong)plVar5 + 0xc) == (int)plVar5[2]) {
LAB_1400b9cd8:
      cVar7 = FUN_141fabf40(0);
      if (cVar7 == '\0') goto LAB_1400b9dab;
    }
    plVar4 = _DAT_149e24f58;
    uVar10 = _DAT_149e24f58[4];
    do {
      iVar9 = (int)uVar10;
      if (iVar9 == 0x1fffe) goto LAB_1400b9db7;
      uVar18 = uVar10 & 0xffffffff;
      LOCK();
      uVar14 = plVar4[4];
      bVar21 = uVar10 == uVar14;
      if (bVar21) {
        plVar4[4] = (ulonglong)(*(uint *)(plVar4[5] + uVar18 * 4) & 0x1ffff) |
                    uVar10 & 0xffffffff00000000;
        uVar14 = uVar10;
      }
      UNLOCK();
      uVar10 = uVar14;
    } while (!bVar21);
    LOCK();
    *(int *)(plVar4 + 2) = (int)plVar4[2] + 1;
    UNLOCK();
    puVar12 = (uint *)(plVar4[5] + uVar18 * 4);
    *puVar12 = *puVar12 | *(uint *)(plVar4 + 6);
    if (*plVar4 == 0) {
LAB_1400b9db7:
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return uVar10;
    }
    puVar20 = (undefined8 *)(*plVar4 + (ulonglong)(uint)((int)plVar4[1] * iVar9));
    if (plVar4[3] != 0) {
      FUN_14004c030(plVar4,puVar20);
    }
    func_0x00014282d520();
    if (*(uint *)((longlong)plVar5 + 0xc) != 0) {
      uVar8 = 0;
      do {
        puVar15 = (undefined8 *)((ulonglong)((uVar8 & 0x1ffff) * (int)plVar5[1]) + *plVar5);
        if ((~*(uint *)(plVar5[5] + (ulonglong)(uVar8 & 0x1ffff) * 4) & *(uint *)(plVar5 + 6)) != 0)
        {
          puVar15 = (undefined8 *)0x0;
        }
        if (puVar20 == puVar15) {
          uVar8 = func_0x000141493560(uVar8,0);
          uVar10 = (ulonglong)uVar8;
          goto LAB_1400b9dcd;
        }
        uVar8 = uVar8 + 1;
      } while (*(uint *)((longlong)plVar5 + 0xc) != uVar8);
    }
    uVar10 = 0;
LAB_1400b9dcd:
    uVar8 = *(uint *)(param_1 + 0x15);
    uVar16 = 0x1ffff;
    uVar14 = (ulonglong)uVar8 & 0x1ffff;
    if (((uVar14 != 0x1ffff) &&
        (plVar5 = *(longlong **)((ulonglong)(uVar8 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
        plVar5 != (longlong *)0x0)) &&
       ((uVar2 = *(uint *)(plVar5[5] + uVar14 * 4), (uVar2 >> 0x11 & 0x3ff) == uVar8 >> 0x16 &&
        (((uVar2 & *(uint *)(plVar5 + 6)) == *(uint *)(plVar5 + 6) &&
         (lVar19 = *plVar5, lVar19 != 0)))))) {
      uVar14 = (ulonglong)(uint)((int)uVar14 * (int)plVar5[1]);
      bVar1 = *(byte *)(lVar19 + 0x30 + uVar14);
      plVar5 = *(longlong **)((ulonglong)bVar1 * 8 + 0x14abbe7c0);
      uVar8 = (uint)(((lVar19 + uVar14) - *plVar5) / (ulonglong)*(uint *)(plVar5 + 1)) & 0x1ffff;
      uVar16 = (bVar1 & 0x1f) << 0x11 | uVar8 |
               (*(uint *)(plVar5[5] + (ulonglong)uVar8 * 4) & 0x7fe0000) << 5;
    }
    *(uint *)(puVar20 + 2) = uVar16;
    if ((*(uint *)(param_1 + 0x12) & 0x7f) == 4) {
      func_0x000144fa06a0(puVar17,auStack_f8);
    }
    else {
      auStack_f8._0_12_ = ZEXT812(0);
      auStack_f8._12_4_ = 0;
    }
    *puVar20 = auStack_f8._0_8_;
    puVar20[1] = auStack_f8._8_8_;
    *(undefined4 *)(puVar20 + 3) = _DAT_14a943768;
    *(uint *)((longlong)puVar20 + 0x1c) = uStack_fc;
    lVar19 = _DAT_14ab56e38;
    if (((*(char *)((longlong)param_1 + 0x7d) < '\0') && (_DAT_14ab56e38 != 0)) &&
       (lVar11 = FUN_141d0d350(_DAT_14ab56e38), lVar11 != 0)) {
      FUN_142801270(lVar11,lVar19,puVar20,uVar10,0,0x3f800000);
    }
    lVar19 = func_0x0001450fb340(*(undefined4 *)(puVar20 + 2));
    if (lVar19 == 0) goto LAB_1400ba230;
    FUN_14551cd10(lVar19,0);
    uVar8 = *(uint *)(lVar19 + 0x9c);
    if (((ulonglong)_DAT_1478b2238 != 0) && ((uVar8 & 0x1ffff) != 0x1ffff)) {
      uVar16 = (uVar8 >> 0x10 ^ uVar8) * -0x7a143595;
      uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
      uVar16 = _DAT_1478b2238 - 1 & (uVar16 >> 0x10 ^ uVar16);
      bVar21 = (~_DAT_1478b2230[uVar16] & 0x1ffff) == 0;
      if ((!bVar21) && (_DAT_1478b2230[uVar16] != uVar8)) {
        puVar12 = _DAT_1478b2230 + uVar16;
        do {
          puVar12 = puVar12 + 1;
          if (puVar12 == _DAT_1478b2230 + _DAT_1478b2238) {
            puVar12 = _DAT_1478b2230;
          }
          bVar21 = (~*puVar12 & 0x1ffff) == 0;
        } while ((!bVar21) && (*puVar12 != uVar8));
      }
      if (!bVar21) goto LAB_1400ba230;
    }
    puVar12 = &uStack_dc;
    puVar17 = (undefined8 *)auStack_f8;
  }
  else {
    lVar19 = *plVar3 + (ulonglong)(uint)((int)uVar10 * (int)plVar3[1]);
    if ((*(char *)(lVar19 + 0x30) == '\x01') && ((*(uint *)(lVar19 + 0x34) >> 8 & 1) == 0)) {
      *(uint *)(lVar19 + 0x34) = *(uint *)(lVar19 + 0x34) | 0x100;
    }
    cVar7 = FUN_140ae4970(param_1);
    if (cVar7 == '\0') {
LAB_1400b9b40:
      uStack_d0 = *(undefined4 *)(param_1 + 1);
      uStack_d8 = *param_1;
      uStack_b8 = param_1[4];
      uStack_b0 = param_1[5];
      uStack_97 = *(undefined8 *)((longlong)param_1 + 0x41);
      uStack_8f = *(undefined8 *)((longlong)param_1 + 0x49);
      uStack_a8 = (undefined1)param_1[6];
      uStack_a7 = (undefined7)*(undefined8 *)((longlong)param_1 + 0x31);
      uStack_a0 = (undefined1)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x31) >> 0x38);
      uStack_9f = (undefined7)*(undefined8 *)((longlong)param_1 + 0x39);
      uStack_98 = (undefined1)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x39) >> 0x38);
      puStack_c8 = &UNK_1462f9ce8;
      cVar7 = *(char *)(param_1 + 0xc);
      uStack_74 = *(undefined4 *)((longlong)param_1 + 100);
      uStack_68 = param_1[0xe];
      uStack_60 = param_1[0xf];
      cStack_78 = cVar7;
      if ((int)uStack_d8 == 0) {
        FUN_140ae6410(&uStack_d8,lVar19,1);
      }
      goto LAB_1400b9bb2;
    }
    FUN_140ae6410(&uStack_d8,lVar19,1);
    if ((int)uStack_d8 != _DAT_1478b1ec8) goto LAB_1400b9b40;
    uVar8 = FUN_145568780(lVar19,0);
    uVar10 = 0;
    if (2 < uVar8 || plVar4 == (longlong *)0x0) goto LAB_1400ba230;
    cVar7 = func_0x00014282d510(*(undefined4 *)(param_1 + 1),
                                *(undefined1 *)((longlong)param_1 + 0x7f));
    uVar8 = *(uint *)((longlong)plVar4 + 0xc);
    if (cVar7 == '\0') {
      uVar8 = uVar8 - *(uint *)(plVar4 + 2);
      if (uVar8 < 0x32) goto LAB_1400ba010;
    }
    else if (uVar8 == *(uint *)(plVar4 + 2)) {
LAB_1400ba010:
      cVar7 = FUN_141fabf40(CONCAT71((uint7)(uint3)(uVar8 >> 8),1));
      if (cVar7 == '\0') goto LAB_1400ba230;
    }
    plVar5 = _DAT_149e24f60;
    uVar10 = _DAT_149e24f60[4];
    do {
      iVar9 = (int)uVar10;
      if (iVar9 == 0x1fffe) goto LAB_1400ba09c;
      uVar18 = uVar10 & 0xffffffff;
      LOCK();
      uVar14 = plVar5[4];
      bVar21 = uVar10 == uVar14;
      if (bVar21) {
        plVar5[4] = (ulonglong)(*(uint *)(plVar5[5] + uVar18 * 4) & 0x1ffff) |
                    uVar10 & 0xffffffff00000000;
        uVar14 = uVar10;
      }
      UNLOCK();
      uVar10 = uVar14;
    } while (!bVar21);
    LOCK();
    *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
    UNLOCK();
    puVar12 = (uint *)(plVar5[5] + uVar18 * 4);
    *puVar12 = *puVar12 | *(uint *)(plVar5 + 6);
    if (*plVar5 == 0) {
LAB_1400ba09c:
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return uVar10;
    }
    puVar12 = (uint *)(*plVar5 + (ulonglong)(uint)((int)plVar5[1] * iVar9));
    if (plVar5[3] != 0) {
      FUN_14004c030(plVar5,puVar12);
    }
    FUN_141fae880(puVar12,param_1);
    if (*(uint *)((longlong)plVar4 + 0xc) != 0) {
      uVar8 = 0;
      do {
        puVar13 = (uint *)((ulonglong)((uVar8 & 0x1ffff) * (int)plVar4[1]) + *plVar4);
        if ((~*(uint *)(plVar4[5] + (ulonglong)(uVar8 & 0x1ffff) * 4) & *(uint *)(plVar4 + 6)) != 0)
        {
          puVar13 = (uint *)0x0;
        }
        if (puVar12 == puVar13) {
          uVar8 = func_0x000141493560(uVar8,CONCAT71((int7)((ulonglong)plVar4[5] >> 8),1));
          uVar10 = (ulonglong)uVar8;
          goto LAB_1400ba0f1;
        }
        uVar8 = uVar8 + 1;
      } while (*(uint *)((longlong)plVar4 + 0xc) != uVar8);
    }
    uVar10 = 0;
LAB_1400ba0f1:
    uVar8 = *puVar12;
    uVar14 = (ulonglong)uVar8 & 0x1ffff;
    if ((((uVar14 == 0x1ffff) ||
         (plVar5 = *(longlong **)((ulonglong)(uVar8 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
         plVar5 == (longlong *)0x0)) ||
        (uVar16 = *(uint *)(plVar5[5] + uVar14 * 4), (uVar16 >> 0x11 & 0x3ff) != uVar8 >> 0x16)) ||
       (((uVar16 & *(uint *)(plVar5 + 6)) != *(uint *)(plVar5 + 6) ||
        (lVar19 = *plVar5, lVar19 == 0)))) goto LAB_1400ba230;
    uVar14 = (ulonglong)(uint)((int)uVar14 * (int)plVar5[1]);
    FUN_14551cd10(lVar19 + uVar14,0);
    uVar8 = *(uint *)(lVar19 + 0x9c + uVar14);
    if (((ulonglong)_DAT_1478b2238 != 0) && ((uVar8 & 0x1ffff) != 0x1ffff)) {
      uVar16 = (uVar8 >> 0x10 ^ uVar8) * -0x7a143595;
      uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
      uVar16 = _DAT_1478b2238 - 1 & (uVar16 >> 0x10 ^ uVar16);
      bVar21 = (~_DAT_1478b2230[uVar16] & 0x1ffff) == 0;
      if ((!bVar21) && (_DAT_1478b2230[uVar16] != uVar8)) {
        puVar12 = _DAT_1478b2230 + uVar16;
        do {
          puVar12 = puVar12 + 1;
          if (puVar12 == _DAT_1478b2230 + _DAT_1478b2238) {
            puVar12 = _DAT_1478b2230;
          }
          bVar21 = (~*puVar12 & 0x1ffff) == 0;
        } while ((!bVar21) && (*puVar12 != uVar8));
      }
      if (!bVar21) goto LAB_1400ba230;
    }
    puVar12 = (uint *)auStack_f8;
    puVar17 = &uStack_d8;
  }
  *puVar12 = uVar8;
  FUN_144dc48c0(&DAT_1478b2230,puVar12,puVar17);
LAB_1400ba230:
  func_0x000144d9dab0(0x1478b1e78);
  return uVar10;
}

