// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14003e200  size: 476 bytes
// Name:    FUN_14003e200
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140312470, FUN_140b1ed80, FUN_140b082c0, FUN_1402e5b80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14003e200(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  int iStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  longlong lStack_70;
  longlong lStack_68;
  longlong lStack_60;
  int iStack_58;
  longlong *plStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined4 *)(param_1 + 0x9c);
  lVar3 = func_0x000144ef6280(uVar1);
  if (((*(byte *)(lVar3 + 0x3b) & 0x40) != 0) || ((*(byte *)(lVar3 + 199) & 0x40) != 0)) {
    cVar2 = func_0x000144da28f0(uVar1);
    if (cVar2 != '\0') {
      lVar3 = func_0x0001450da490(*(undefined4 *)(param_2 + 0x9c));
      if (lVar3 != 0) {
        uVar5 = 0;
        FUN_140312470(&iStack_bc,param_2,0,0);
        if (iStack_bc == 0) goto LAB_14003e3c9;
        lVar4 = FUN_140b1ed80(*(undefined8 *)(_DAT_149df78e0 + 0xc80),iStack_bc);
        if ((lVar4 != 0) && (*(int *)(lVar4 + 0x10) == 0x125b4637)) {
          uVar5 = 0;
          lVar4 = FUN_140b082c0(lVar3 + 0x1050,param_2,iStack_bc,0,0,0,10);
          if (lVar4 == 0) goto LAB_14003e3c9;
          cVar2 = func_0x0001415bea90(lVar4,*(undefined4 *)(param_1 + 0x9c));
          if (cVar2 != '\0') {
            uStack_a8 = *(undefined8 *)(param_1 + 0x70);
            uStack_a0 = *(undefined8 *)(param_1 + 0x78);
            func_0x000144dc3790(&uStack_a8,auStack_88);
            uStack_b8 = *(undefined8 *)(param_2 + 0x70);
            uStack_b0 = *(undefined8 *)(param_2 + 0x78);
            func_0x000144dc3790(&uStack_b8,auStack_98);
            auVar10._4_4_ = _DAT_14615d380;
            auVar10._0_4_ = _DAT_14615d380;
            auVar10._8_4_ = _DAT_14615d380;
            auVar10._12_4_ = _DAT_14615d380;
            auVar9 = vsubps_avx(auStack_88,auStack_98);
            auVar6._0_4_ = auVar9._0_4_ * auVar9._0_4_;
            auVar6._4_4_ = auVar9._4_4_ * auVar9._4_4_;
            auVar6._8_4_ = auVar9._8_4_ * auVar9._8_4_;
            auVar6._12_4_ = auVar9._12_4_ * auVar9._12_4_;
            auVar6 = vhaddps_avx(auVar6,auVar6);
            auVar7._0_4_ = auVar6._0_4_;
            auVar7._4_4_ = auVar7._0_4_;
            auVar7._8_4_ = auVar7._0_4_;
            auVar7._12_4_ = auVar7._0_4_;
            auVar6 = vcmpps_avx(auVar10,auVar7,5);
            if ((((SUB161(auVar6 >> 0x1f,0) & 1) != 0 || (SUB161(auVar6 >> 0x3f,0) & 1) != 0) ||
                (SUB161(auVar6 >> 0x5f,0) & 1) != 0) || auVar6[0xf] < '\0') {
              auVar8._0_8_ = CONCAT44(_DAT_145fc6f10,_DAT_145fc6f10);
              auVar8._8_4_ = _DAT_145fc6f10;
              auVar8._12_4_ = _DAT_145fc6f10;
              auVar6 = vshufpd_avx(auVar9,auVar9,1);
              auVar9._0_8_ = auVar6._0_8_ ^ auVar8._0_8_;
              auVar9._8_8_ = auVar6._8_8_ ^ auVar8._8_8_;
              auVar6 = vmaxss_avx(auVar9,auVar6);
              if (auVar6._0_4_ <= _DAT_145fc6ed8) {
                plStack_50 = &lStack_70;
                pcStack_48 = FUN_1430456a0;
                puStack_40 = &UNK_1403a85f0;
                iStack_58 = iStack_bc;
                puStack_38 = &SUB_140004380;
                lStack_70 = param_1;
                lStack_68 = lVar3;
                lStack_60 = param_2;
                FUN_1402e5b80(4);
              }
            }
            uVar5 = CONCAT71((int7)((ulonglong)auStack_88 >> 8),1);
            goto LAB_14003e3c9;
          }
        }
      }
    }
  }
  uVar5 = 0;
LAB_14003e3c9:
  return uVar5 & 0xffffffff;
}

