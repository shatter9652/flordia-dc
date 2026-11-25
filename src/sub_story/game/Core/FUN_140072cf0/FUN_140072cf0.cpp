// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140072cf0  size: 468 bytes
// Name:    FUN_140072cf0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e4c850, FUN_1402e5b80, FUN_141fe1190
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140072cf0(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined1 auStack_98 [16];
  longlong alStack_88 [2];
  undefined8 uStack_78;
  undefined8 uStack_70;
  longlong *plStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  
  lVar2 = FUN_144e4c850(*(undefined4 *)(param_1 + 0x58),*(undefined1 *)(param_1 + 0x84));
  alStack_88[0] = param_1;
  if (lVar2 == 0) {
    if (*(longlong *)(param_1 + 8) != 0) {
      lVar2 = *(longlong *)(param_1 + 8);
      goto LAB_140072d3b;
    }
  }
  else {
    lVar2 = *(longlong *)(lVar2 + 0x10);
LAB_140072d3b:
    lVar2 = *(longlong *)(lVar2 + 0x20);
    if (lVar2 != 0) {
      auStack_98._8_8_ = _UNK_14667ee98;
      auStack_98._0_8_ = _DAT_14667ee90;
      lVar3 = func_0x000144e8f430(param_1 + 0x10,_DAT_14999ae44);
      auVar4._4_4_ = _DAT_145fc6f50;
      auVar4._0_4_ = _DAT_145fc6f50;
      auVar4._8_4_ = _DAT_145fc6f50;
      auVar4._12_4_ = _DAT_145fc6f50;
      auVar6 = auVar4;
      if (lVar3 != 0) {
        auVar6 = *(undefined1 (*) [16])(lVar3 + 0x10);
        auStack_98 = auVar6;
      }
      auVar4 = vcmpps_avx(auVar6,auVar4,4);
      if ((((SUB161(auVar4 >> 0x1f,0) & 1) != 0 || (SUB161(auVar4 >> 0x3f,0) & 1) != 0) ||
          (SUB161(auVar4 >> 0x5f,0) & 1) != 0) || auVar4[0xf] < '\0') {
LAB_140072e0d:
        auVar5._4_4_ = _DAT_145fc6f54;
        auVar5._0_4_ = _DAT_145fc6f54;
        auVar5._8_4_ = _DAT_145fc6f54;
        auVar5._12_4_ = _DAT_145fc6f54;
        auVar6 = vcmpps_avx(auVar6,auVar5,4);
        if ((((SUB161(auVar6 >> 0x1f,0) & 1) == 0 && (SUB161(auVar6 >> 0x3f,0) & 1) == 0) &&
            (SUB161(auVar6 >> 0x5f,0) & 1) == 0) && -1 < auVar6[0xf]) {
          return 0;
        }
        *param_2 = auStack_98._0_8_;
        param_2[1] = auStack_98._8_8_;
        return 1;
      }
      auStack_98._4_4_ = _DAT_145fc6f54;
      auStack_98._0_4_ = _DAT_145fc6f54;
      auStack_98._8_4_ = _DAT_145fc6f54;
      auStack_98._12_4_ = _DAT_145fc6f54;
      auVar8 = ZEXT1664(auStack_98);
      FUN_141fe1190(lVar2,auStack_98);
      auVar7 = ZEXT1664(auStack_98);
      auVar6 = vcmpps_avx(auStack_98,auVar8._0_16_,4);
      if ((((SUB161(auVar6 >> 0x1f,0) & 1) != 0 || (SUB161(auVar6 >> 0x3f,0) & 1) != 0) ||
          (SUB161(auVar6 >> 0x5f,0) & 1) != 0) || auVar6[0xf] < '\0') {
        plStack_68 = alStack_88;
        pcStack_60 = FUN_142e48c90;
        puStack_58 = &UNK_1403a85f0;
        puStack_50 = &SUB_140004380;
        uStack_78 = auStack_98._0_8_;
        uStack_70 = auStack_98._8_8_;
        FUN_1402e5b80(4);
        auVar6 = auVar7._0_16_;
        goto LAB_140072e0d;
      }
      bVar1 = *(byte *)(param_1 + 0x51);
      goto joined_r0x000140072e34;
    }
  }
  bVar1 = *(byte *)(param_1 + 0x51);
joined_r0x000140072e34:
  if ((bVar1 & 0x80) == 0) {
    plStack_68 = alStack_88;
    puStack_58 = &UNK_1401167b0;
    pcStack_60 = (code *)&UNK_142e48c80;
    puStack_50 = &SUB_140004380;
    FUN_1402e5b80(4);
  }
  return 0;
}

