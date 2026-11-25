// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140070620  size: 359 bytes
// Name:    FUN_140070620
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144dc2480, FUN_14006e840, FUN_144edcc50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140070620(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  void *pvVar5;
  longlong *plVar6;
  float fVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined1 auStack_68 [16];
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  plVar6 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0);
  puVar3 = (undefined8 *)func_0x000144ecfea0();
  uStack_38 = *puVar3;
  uStack_30 = puVar3[1];
  uVar8 = FUN_144edcc50(&uStack_38,*(undefined4 *)(puVar3 + 2),1);
  cVar1 = (**(code **)(*plVar6 + 0x288))(plVar6);
  if (cVar1 != '\0') {
    uVar4 = (**(code **)(*plVar6 + 0xa8))(plVar6);
    FUN_14006e840(uVar4,&uStack_78,0x2546b0e4);
    if (((char)uStack_78 != '\0') &&
       (pvVar5 = (void *)(ulonglong)uStack_74, uStack_74 != 0xffffffff)) {
      FUN_144dc2480(plVar6,pvVar5,&uStack_78);
      auVar11._4_4_ = _DAT_145fc6f70;
      auVar11._0_4_ = _DAT_145fc6f70;
      auVar11._8_4_ = _DAT_145fc6f70;
      auVar11._12_4_ = _DAT_145fc6f70;
      auVar9._0_4_ = _DAT_145fc6f4c & uStack_78;
      auVar9._4_4_ = _DAT_145fc6f4c & uStack_74;
      auVar9._8_4_ = _DAT_145fc6f4c & uStack_70;
      auVar9._12_4_ = _DAT_145fc6f4c & uStack_6c;
      auVar9 = vcmpps_avx(auVar9,auVar11,0x11);
      uVar2 = vmovmskps_avx(auVar9);
      if ((~(byte)uVar2 & 7) == 0) {
        auVar12._0_4_ = auStack_68._0_4_ & _DAT_145fc6f4c;
        auVar12._4_4_ = auStack_68._4_4_ & _DAT_145fc6f4c;
        auVar12._8_4_ = auStack_68._8_4_ & _DAT_145fc6f4c;
        auVar12._12_4_ = auStack_68._12_4_ & _DAT_145fc6f4c;
        auVar9 = vcmpps_avx(auVar12,auVar11,0x11);
        uVar2 = vmovmskps_avx(auVar9);
        if ((~(byte)uVar2 & 7) == 0) {
          auVar13._0_4_ = _DAT_145fc6f4c & uStack_58;
          auVar13._4_4_ = _DAT_145fc6f4c & uStack_54;
          auVar13._8_4_ = _DAT_145fc6f4c & uStack_50;
          auVar13._12_4_ = _DAT_145fc6f4c & uStack_4c;
          auVar9 = vcmpps_avx(auVar13,auVar11,0x11);
          uVar2 = vmovmskps_avx(auVar9);
          if ((~(byte)uVar2 & 7) == 0) {
            auVar10._0_4_ = _DAT_145fc6f4c & uStack_48;
            auVar10._4_4_ = _DAT_145fc6f4c & uStack_44;
            auVar10._8_4_ = _DAT_145fc6f4c & uStack_40;
            auVar10._12_4_ = _DAT_145fc6f4c & uStack_3c;
            auVar9 = vcmpps_avx(auVar10,auVar11,0x11);
            uVar2 = vmovmskps_avx(auVar9);
            if ((~(byte)uVar2 & 7) == 0) {
              vmovshdup_avx(auStack_68);
              fVar7 = (float)(auStack_68._0_4_ ^ _DAT_145fc6f10);
              atan2f(plVar6,pvVar5);
              fVar7 = fVar7 + (float)uVar8;
              auVar14._0_12_ = ZEXT812(0);
              auVar14._12_4_ = 0;
              auVar9 = vcmpss_avx(auVar14,ZEXT416((uint)(fVar7 + _DAT_145fc6f80)),2);
              auVar9 = vblendvps_avx(ZEXT416((uint)(fVar7 + _DAT_145fc6f84)),ZEXT416((uint)fVar7),
                                     auVar9);
              auVar11 = vcmpss_avx(ZEXT416((uint)fVar7),ZEXT416((uint)_DAT_145fc6f80),2);
              auVar9 = vblendvps_avx(ZEXT416((uint)(fVar7 + _DAT_14615a920)),auVar9,auVar11);
              uVar8 = auVar9._0_8_;
            }
          }
        }
      }
    }
  }
  return uVar8;
}

