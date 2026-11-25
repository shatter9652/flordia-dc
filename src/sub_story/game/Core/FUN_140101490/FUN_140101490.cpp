// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140101490  size: 526 bytes
// Name:    FUN_140101490
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fc6490, FUN_145430cf0, FUN_145430dc0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140101490(undefined4 param_1,longlong *param_2)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  undefined8 unaff_RBP;
  float fVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [64];
  undefined1 auVar8 [16];
  undefined1 extraout_var [56];
  
  if ((char)param_2[6] != '\x02') {
    if ((char)param_2[6] != '\x03') {
      return 0;
    }
    if (DAT_14a9517f7 == '\x01') {
      lVar3 = func_0x000144d9f7c0(param_1);
      auVar6._0_12_ = ZEXT812(0);
      auVar6._12_4_ = 0;
      auVar8._0_12_ = ZEXT812(0);
      auVar8._12_4_ = 0;
      if (lVar3 != 0) {
        auVar8 = ZEXT416((uint)(*(float *)(lVar3 + 0x14a0) * _DAT_14615a240));
      }
      auVar6 = vcmpss_avx(auVar8,auVar6,1);
      auVar8 = vminss_avx(ZEXT416(_DAT_145fc6ed8),auVar8);
      return (ulonglong)
             (uint)((float)(~auVar6._0_4_ & auVar8._0_4_) * (_DAT_14abbe16c - _DAT_14abbe168) +
                   _DAT_14abbe168);
    }
    return (ulonglong)(uint)_DAT_14abbe168;
  }
  lVar3 = param_2[4];
  if (0.0 < *(float *)(lVar3 + 600)) {
    return (ulonglong)(uint)*(float *)(lVar3 + 600);
  }
  cVar2 = *(char *)((longlong)param_2 + 0xfa);
  cVar1 = func_0x00014073c470(lVar3,CONCAT71((int7)((ulonglong)unaff_RBP >> 8),cVar2) & 0xffffffff);
  if (cVar1 != '\0') {
    return (ulonglong)_DAT_14abbe194;
  }
  if (cVar2 == '\0') {
    cVar2 = FUN_144fc6490(*(undefined4 *)(lVar3 + 0x5c));
    if (((cVar2 != '\0') && (cVar2 = FUN_145430dc0(param_1,0,1,0), cVar2 != '\0')) &&
       (cVar2 = FUN_145430cf0(param_2,0x17), cVar2 != '\0')) {
      return (ulonglong)_DAT_14abbe198;
    }
    return (ulonglong)_DAT_14abbe190;
  }
  switch(cVar2) {
  case '\x01':
    cVar2 = FUN_145430cf0(param_2,0x23);
    if (cVar2 == '\0') goto code_r0x0001401015d8;
  default:
code_r0x0001401015aa:
    uVar5 = (ulonglong)_DAT_14abbe174;
    break;
  case '\x04':
    uVar5 = (ulonglong)uRam000000014abbe178;
    break;
  case '\x05':
code_r0x0001401015d8:
    cVar2 = FUN_145430570(param_2,0xffffffff);
    if (cVar2 != '\0') {
      auVar7._0_8_ = (**(code **)(*param_2 + 0x210))(param_2);
      auVar7._8_56_ = extraout_var;
      auVar6 = vmaxss_avx(auVar7._0_16_,ZEXT416(_DAT_14abbe174));
      return auVar6._0_8_;
    }
    goto code_r0x0001401015aa;
  case '\t':
    cVar2 = FUN_145430dc0(param_1,1,1,0);
    if ((cVar2 == '\0') || (cVar2 = FUN_145430cf0(param_2,0x17), cVar2 == '\0')) {
      if ((*(byte *)(lVar3 + 0x405) & 1) == 0) {
        fVar4 = (float)(**(code **)(*param_2 + 0x210))(param_2);
        auVar6 = vmaxss_avx(ZEXT416((uint)(fVar4 + fRam000000014abbe114)),
                            ZEXT416(uRam000000014abbe18c));
        uVar5 = auVar6._0_8_;
      }
      else {
        uVar5 = (ulonglong)uRam000000014abbe188;
      }
    }
    else {
      uVar5 = (ulonglong)uRam000000014abbe184;
    }
    break;
  case '\f':
    uVar5 = (ulonglong)uRam000000014abbe180;
    break;
  case '\r':
    uVar5 = (ulonglong)uRam000000014abbe17c;
  }
  return uVar5;
}

