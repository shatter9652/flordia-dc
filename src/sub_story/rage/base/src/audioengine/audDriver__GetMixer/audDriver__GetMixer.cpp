// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1425a57b0  size: 440 bytes
// Name:    audDriver::GetMixer
// Subsystem: audio
// Class:   audDriver
//
// Evidence:
//   GTAVSRC: audDriver::GetMixer  (rage/base/src/audioengine/engine.cpp)
//   literal: audioFrameTimer
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144db7a80, FUN_144dac8b0, FUN_14043b7d0, FUN_14000eda0, FUN_1455aef50, FUN_1455aa3e0, FUN_1455aa410, FUN_140536f40, FUN_1402250e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/audDriver.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void audDriver__GetMixer(void)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_30 [16];
  undefined8 uStack_20;
  
  if (DAT_14aa414f4 == '\x01') {
    func_0x0001402a1be0(_DAT_14aa414f8,1);
    DAT_14aa414f5 = '\x01';
  }
  FUN_144dac8b0(auStack_30,&UNK_14677de9e);
  FUN_1455aa3e0(auStack_30);
  if (((*(char *)((longlong)_DAT_14a924088 + 0x3cdfa) == '\x01') &&
      ((*(byte *)((longlong)_DAT_14a924088 + 0x3cdfd) & 1) != 0)) && (DAT_14aa414f5 == '\x01')) {
    (**(code **)(*_DAT_14a924088 + 0x58))();
    (**(code **)(*_DAT_14a924088 + 0x60))();
  }
  FUN_1402250e0();
  _DAT_14764b6b8 = _DAT_14764b6b8 + 1;
  _DAT_149ab3c70 = _DAT_149ab3c70 + 1;
  _DAT_14aa31c30 = _DAT_14aa31c34;
  _DAT_14aa31c3c = *(uint *)(_DAT_14a924088 + 0x2a9);
  iVar2 = (int)((ulonglong)_DAT_14aa31c3c * 0x55555555 >> 0x1c);
  _DAT_14aa31c38 = (float)(uint)(iVar2 - _DAT_14aa31c34) * _DAT_146159ec4;
  _DAT_14aa31c34 = iVar2;
  if (DAT_14aa31c50 == '\x01') {
    if (DAT_14aa31c51 != '\0') goto LAB_1425a58c5;
    cVar4 = '\x01';
    _DAT_14aa31c4c = _DAT_149ce1118;
    uVar3 = 0;
  }
  else {
    if (DAT_14aa31c51 == '\0') goto LAB_1425a58c5;
    cVar4 = '\0';
    uVar3 = _DAT_14aa31c4c;
  }
  func_0x0001443b1170(uVar3);
  DAT_14aa31c51 = cVar4;
LAB_1425a58c5:
  FUN_144db7a80();
  FUN_14043b7d0(_DAT_14aa31c34);
  FUN_14000eda0();
  (*_DAT_14aa412e0)();
  FUN_140536f40();
  FUN_1455aef50();
  func_0x0001403e14e0(_DAT_14aa31c3c);
  FUN_1455aa410(auStack_30);
  if (DAT_14aa414f5 == '\x01') {
    if (DAT_14aa414f4 == '\0') {
      DAT_14aa414f5 = '\0';
    }
    func_0x000144daa220(_DAT_14aa41500,1);
  }
  else {
    fVar5 = (float)func_0x0001455aa440(uStack_20);
    auVar6._0_12_ = ZEXT812(0);
    auVar6._12_4_ = 0;
    auVar1 = vminss_avx(ZEXT416((uint)_DAT_14615b980),ZEXT416((uint)(_DAT_14615b980 - fVar5)));
    auVar6 = vcmpss_avx(ZEXT416((uint)(_DAT_14615b980 - fVar5)),auVar6,1);
    func_0x00014092eca0((longlong)(float)(~auVar6._0_4_ & auVar1._0_4_));
  }
  _DAT_14aa31c40 = _DAT_14aa31c40 + 1;
  return;
}

