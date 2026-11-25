// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14019b070  size: 707 bytes
// Name:    FUN_14019b070
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


char FUN_14019b070(double *param_1,undefined8 param_2,char param_3,longlong *param_4,
                  longlong param_5)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  double dVar6;
  undefined1 auVar7 [16];
  
  lVar2 = *param_4;
  if (param_3 == '\x05') {
    if (param_1 == (double *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (ulonglong)(uint)*(float *)param_1;
    }
    if ((*(int *)(param_5 + 0x10) == 1) && (0 < *(int *)(param_5 + 4))) {
      uVar5 = (longlong)(int)uVar5 % (longlong)*(int *)(param_5 + 4) & 0xffffffff;
    }
    func_0x00014142c790(uVar5,*(undefined4 *)(param_5 + 0x14));
    lVar3 = func_0x00014019b340();
    goto code_r0x00014019b0b1;
  }
  cVar4 = '\0';
  switch(param_3) {
  case '\0':
    lVar3 = func_0x00014142c7a0();
    break;
  case '\x01':
    lVar3 = func_0x0001422e31f0();
    break;
  case '\x02':
code_r0x00014019b251:
    lVar3 = func_0x00014142c7a0();
    break;
  case '\x03':
    if (param_1 == (double *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (ulonglong)*(ushort *)param_1;
    }
    if ((*(int *)(param_5 + 0x10) == 1) && (0 < *(int *)(param_5 + 4))) {
      uVar5 = (longlong)(int)(short)uVar5 % (longlong)*(int *)(param_5 + 4) & 0xffffffff;
    }
    func_0x0001422e3090(uVar5,*(undefined4 *)(param_5 + 0x14));
    lVar3 = func_0x0001422e3200();
    break;
  case '\x04':
code_r0x00014019b1cf:
    lVar3 = func_0x0001421a4720();
    break;
  case '\x05':
  case '\b':
  case '\t':
  case '\n':
  case '\v':
  case '\f':
  case '\r':
    goto LAB_14019b0c1;
  case '\x06':
code_r0x00014019b1fe:
    lVar3 = func_0x0001411c66f0();
    break;
  case '\a':
    if (param_1 == (double *)0x0) {
      uVar5 = 0;
    }
    else if (*(int *)(param_5 + 0x10) == 2) {
      fVar1 = *(float *)param_1;
      auVar7 = vroundss_avx(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1),0xb);
      uVar5 = (ulonglong)(uint)(fVar1 - auVar7._0_4_);
    }
    else {
      uVar5 = func_0x000140a2e200(*(float *)param_1,*(undefined4 *)(param_5 + 8));
    }
    func_0x000140a2e1d0(uVar5,*(undefined4 *)(param_5 + 0x14));
    lVar3 = func_0x0001422e3210();
    break;
  case '\x0e':
    lVar3 = lVar2;
    switch(param_2) {
    case 1:
      goto code_r0x00014019b251;
    case 2:
      goto code_r0x00014019b1cf;
    case 4:
      goto code_r0x00014019b1fe;
    case 8:
code_r0x00014019b11b:
      lVar3 = func_0x000141996220();
      goto code_r0x00014019b0b1;
    }
    goto code_r0x00014019b0b4;
  default:
    switch(param_3) {
    case '\x1d':
    case ' ':
      goto code_r0x00014019b11b;
    default:
      goto LAB_14019b0c1;
    case '\x1f':
      if (param_1 == (double *)0x0) {
        dVar6 = 0.0;
      }
      else {
        dVar6 = *param_1;
      }
      if ((*(int *)(param_5 + 0x10) == 1) && (0 < (longlong)*(int *)(param_5 + 4))) {
        dVar6 = (double)((longlong)dVar6 % (longlong)*(int *)(param_5 + 4));
      }
      func_0x000141996230(dVar6,*(undefined4 *)(param_5 + 0x14));
    case '\x1c':
      lVar3 = func_0x000141996220();
      break;
    case '!':
      if (param_1 == (double *)0x0) {
        dVar6 = 0.0;
      }
      else if (*(int *)(param_5 + 0x10) == 2) {
        auVar7._8_8_ = 0;
        auVar7._0_8_ = *param_1;
        auVar7 = vroundsd_avx(auVar7,auVar7,0xb);
        dVar6 = *param_1 - auVar7._0_8_;
      }
      else {
        dVar6 = (double)func_0x0001422e3160(*param_1,*(undefined4 *)(param_5 + 8));
      }
      func_0x0001422e31b0(dVar6,*(undefined4 *)(param_5 + 0x14));
      lVar3 = func_0x0001422e3220();
    }
  }
code_r0x00014019b0b1:
  *param_4 = lVar3;
code_r0x00014019b0b4:
  cVar4 = (lVar2 != lVar3) + '\x01';
LAB_14019b0c1:
  return cVar4;
}

