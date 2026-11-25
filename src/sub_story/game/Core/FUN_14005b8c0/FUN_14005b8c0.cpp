// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14005b8c0  size: 1050 bytes
// Name:    FUN_14005b8c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14005bce0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_14005b8c0(longlong param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  ushort uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined8 uVar13;
  undefined1 auVar14 [64];
  undefined4 uStack_8c;
  undefined4 uStack_88;
  int iStack_84;
  undefined4 *puStack_80;
  undefined4 *puStack_78;
  undefined1 auStack_70 [48];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 extraout_var_01 [56];
  undefined1 extraout_var_02 [56];
  
  lVar1 = *(longlong *)(param_1 + 0xb0);
  if (lVar1 == 0) {
    uVar13 = 0;
  }
  else {
    plVar2 = *(longlong **)(param_1 + 0x50);
    auVar14 = ZEXT1664(ZEXT816(0));
    puStack_80 = param_3;
    puStack_78 = param_4;
    if (param_2 < 1 && plVar2 != (longlong *)0x0) {
      uVar6 = *(ushort *)(plVar2 + 1);
      if (uVar6 == 0) {
        return 0;
      }
      uVar8 = 0;
      iStack_84 = param_2;
      do {
        lVar3 = *(longlong *)(*plVar2 + uVar8 * 8);
        if (*(short *)(lVar3 + 0x36) != 0) {
          uVar7 = 0;
          do {
            uStack_88 = 0;
            uStack_8c = 0;
            cVar5 = FUN_14005bce0(param_1,lVar1,0,uVar8 & 0xffffffff,uVar7,0,auStack_70,&uStack_88,
                                  &uStack_8c,0);
            uVar4 = uStack_88;
            if (cVar5 != '\0') {
              auVar10._0_8_ = func_0x000144e9a3f0(uStack_8c,uStack_88);
              auVar10._8_56_ = extraout_var_00;
              if (auVar14._0_4_ < (float)auVar10._0_8_) {
                auVar14 = ZEXT1664(auVar10._0_16_);
                *puStack_78 = uStack_8c;
                *puStack_80 = uVar4;
              }
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < *(ushort *)(lVar3 + 0x36));
          uVar6 = *(ushort *)(plVar2 + 1);
        }
        uVar8 = uVar8 + 1;
        param_2 = iStack_84;
      } while (uVar8 < uVar6);
    }
    plVar2 = *(longlong **)(param_1 + 0x58);
    if (param_2 == 1 && plVar2 != (longlong *)0x0) {
      uVar6 = *(ushort *)(plVar2 + 1);
      if (uVar6 == 0) {
        return auVar14._0_8_;
      }
      uVar8 = 0;
      iStack_84 = param_2;
      do {
        lVar3 = *(longlong *)(*plVar2 + uVar8 * 8);
        if (*(short *)(lVar3 + 0x36) != 0) {
          uVar7 = 0;
          do {
            uStack_88 = 0;
            uStack_8c = 0;
            cVar5 = FUN_14005bce0(param_1,lVar1,1,uVar8 & 0xffffffff,uVar7,0,auStack_70,&uStack_88,
                                  &uStack_8c,0);
            uVar4 = uStack_88;
            if (cVar5 != '\0') {
              auVar11._0_8_ = func_0x000144e9a3f0(uStack_8c,uStack_88);
              auVar11._8_56_ = extraout_var_01;
              if (auVar14._0_4_ < (float)auVar11._0_8_) {
                auVar14 = ZEXT1664(auVar11._0_16_);
                *puStack_78 = uStack_8c;
                *puStack_80 = uVar4;
              }
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < *(ushort *)(lVar3 + 0x36));
          uVar6 = *(ushort *)(plVar2 + 1);
        }
        uVar8 = uVar8 + 1;
        param_2 = iStack_84;
      } while (uVar8 < uVar6);
    }
    plVar2 = *(longlong **)(param_1 + 0x60);
    if (param_2 == 2 && plVar2 != (longlong *)0x0) {
      uVar6 = *(ushort *)(plVar2 + 1);
      if (uVar6 == 0) {
        return auVar14._0_8_;
      }
      uVar8 = 0;
      iStack_84 = param_2;
      do {
        lVar3 = *(longlong *)(*plVar2 + uVar8 * 8);
        if (*(short *)(lVar3 + 0x36) != 0) {
          uVar7 = 0;
          do {
            uStack_88 = 0;
            uStack_8c = 0;
            cVar5 = FUN_14005bce0(param_1,lVar1,2,uVar8 & 0xffffffff,uVar7,0,auStack_70,&uStack_88,
                                  &uStack_8c,0);
            uVar4 = uStack_88;
            if (cVar5 != '\0') {
              auVar9._0_8_ = func_0x000144e9a3f0(uStack_8c,uStack_88);
              auVar9._8_56_ = extraout_var;
              if (auVar14._0_4_ < (float)auVar9._0_8_) {
                auVar14 = ZEXT1664(auVar9._0_16_);
                *puStack_78 = uStack_8c;
                *puStack_80 = uVar4;
              }
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < *(ushort *)(lVar3 + 0x36));
          uVar6 = *(ushort *)(plVar2 + 1);
        }
        uVar8 = uVar8 + 1;
        param_2 = iStack_84;
      } while (uVar8 < uVar6);
    }
    uVar13 = auVar14._0_8_;
    plVar2 = *(longlong **)(param_1 + 0x68);
    if ((param_2 == 3 && plVar2 != (longlong *)0x0) && (uVar6 = *(ushort *)(plVar2 + 1), uVar6 != 0)
       ) {
      uVar8 = 0;
      do {
        lVar3 = *(longlong *)(*plVar2 + uVar8 * 8);
        if (*(short *)(lVar3 + 0x36) != 0) {
          uVar7 = 0;
          do {
            uStack_88 = 0;
            uStack_8c = 0;
            cVar5 = FUN_14005bce0(param_1,lVar1,3,uVar8 & 0xffffffff,uVar7,0,auStack_70,&uStack_88,
                                  &uStack_8c,0);
            uVar4 = uStack_88;
            if (cVar5 != '\0') {
              auVar12._0_8_ = func_0x000144e9a3f0(uStack_8c,uStack_88);
              auVar12._8_56_ = extraout_var_02;
              if (auVar14._0_4_ < (float)auVar12._0_8_) {
                auVar14 = ZEXT1664(auVar12._0_16_);
                *puStack_78 = uStack_8c;
                *puStack_80 = uVar4;
              }
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < *(ushort *)(lVar3 + 0x36));
          uVar6 = *(ushort *)(plVar2 + 1);
        }
        uVar13 = auVar14._0_8_;
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar6);
    }
  }
  return uVar13;
}

