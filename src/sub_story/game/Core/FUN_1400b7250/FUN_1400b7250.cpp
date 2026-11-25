// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b7250  size: 506 bytes
// Name:    FUN_1400b7250
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140a845f0, FUN_1427422a0, FUN_1400b7520, FUN_14004c030, FUN_140a84620, FUN_140338190, FUN_144e4c850, FUN_1400b7450, FUN_14063a3b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1400b7250(longlong param_1)

{
  uint *puVar1;
  undefined1 auVar2 [16];
  byte bVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined8 unaff_RBX;
  longlong lVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined1 auVar15 [16];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  ulonglong uVar8;
  
  lVar12 = *(longlong *)(param_1 + 0x20);
  if ((lVar12 != 0) && (*(longlong *)(param_1 + 0x38) == 0)) {
    bVar3 = *(byte *)(lVar12 + 0x84);
    lVar7 = FUN_144e4c850(*(undefined4 *)(lVar12 + 0x58),
                          CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar3) & 0xffffffff);
    if (lVar7 == 0) {
      if (((bVar3 & 0x27) == 0x22) &&
         (cVar5 = FUN_1400b7520(lVar12,1), plVar11 = _DAT_149e40a50, cVar5 != '\0')) {
        uVar8 = _DAT_149e40a50[4];
        do {
          iVar6 = (int)uVar8;
          if (iVar6 == 0x1fffe) goto LAB_1400b73bd;
          uVar13 = uVar8 & 0xffffffff;
          LOCK();
          uVar9 = plVar11[4];
          bVar14 = uVar8 == uVar9;
          if (bVar14) {
            plVar11[4] = (ulonglong)(*(uint *)(plVar11[5] + uVar13 * 4) & 0x1ffff) |
                         uVar8 & 0xffffffff00000000;
            uVar9 = uVar8;
          }
          UNLOCK();
          uVar8 = uVar9;
        } while (!bVar14);
        LOCK();
        *(int *)(plVar11 + 2) = (int)plVar11[2] + 1;
        UNLOCK();
        puVar1 = (uint *)(plVar11[5] + uVar13 * 4);
        *puVar1 = *puVar1 | *(uint *)(plVar11 + 6);
        if (*plVar11 == 0) {
LAB_1400b73bd:
          pcVar4 = (code *)swi(3);
          uVar10 = (*pcVar4)();
          return uVar10;
        }
        lVar12 = *plVar11 + (ulonglong)(uint)((int)plVar11[1] * iVar6);
        if (plVar11[3] != 0) {
          FUN_14004c030(plVar11,lVar12);
        }
        FUN_140a845f0(lVar12,7);
        uStack_98 = *(undefined8 *)(param_1 + 0x40);
        uStack_90 = *(undefined8 *)(param_1 + 0x48);
        uStack_88 = *(undefined8 *)(param_1 + 0x50);
        uStack_80 = *(undefined8 *)(param_1 + 0x58);
        uStack_78 = *(undefined8 *)(param_1 + 0x60);
        uStack_70 = *(undefined8 *)(param_1 + 0x68);
        auVar2 = *(undefined1 (*) [16])(param_1 + 0x70);
        auVar15 = vpunpckhwd_avx(auVar2,auVar2);
        auVar15 = vpsrad_avx(auVar15,0x10);
        auVar15 = vcvtdq2ps_avx(auVar15);
        auVar15 = vshufpd_avx(auVar15,auVar15,3);
        uStack_68 = CONCAT44(auVar15._4_4_ * _UNK_146159c94 + auVar2._4_4_,
                             auVar15._0_4_ * _DAT_146159c90 + auVar2._0_4_);
        uStack_60 = CONCAT44(auVar15._12_4_ * _UNK_146159c9c + auVar2._12_4_,
                             auVar15._8_4_ * _UNK_146159c98 + auVar2._8_4_);
        uVar10 = FUN_140338190(_DAT_149251cf8,param_1);
        FUN_140a84620(lVar12,uVar10,&uStack_98);
        func_0x0001451f3820(uVar10,1);
        FUN_1400b7450(param_1,lVar12,1);
      }
    }
    else {
      *(byte *)(param_1 + 0xb0) = *(byte *)(param_1 + 0xb0) | 0x10;
      uStack_98 = FUN_144e4c850(*(undefined4 *)(lVar12 + 0x58),*(undefined1 *)(lVar12 + 0x84));
      uStack_90 = 0;
      uStack_38 = 1;
      uStack_88 = CONCAT44(uStack_88._4_4_,0xf);
      uStack_78 = *(undefined8 *)(param_1 + 0x40);
      uStack_70 = *(undefined8 *)(param_1 + 0x48);
      uStack_68 = *(undefined8 *)(param_1 + 0x50);
      uStack_60 = *(undefined8 *)(param_1 + 0x58);
      uStack_58 = *(undefined8 *)(param_1 + 0x60);
      uStack_50 = *(undefined8 *)(param_1 + 0x68);
      uStack_48 = *(undefined8 *)(param_1 + 0x70);
      uStack_40 = *(undefined8 *)(param_1 + 0x78);
      plVar11 = (longlong *)FUN_1427422a0();
      FUN_14063a3b0(plVar11,&uStack_98);
      *(byte *)(plVar11 + 0x37) = *(byte *)(plVar11 + 0x37) | 2;
      FUN_1400b7450(param_1,plVar11,1);
      (**(code **)(*plVar11 + 0x440))(plVar11,0,0);
    }
  }
  return 1;
}

