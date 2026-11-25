// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1443ad8b0  size: 436 bytes
// Name:    audMixerDeviceXAudio2::InitHardware
// Subsystem: audio
// Class:   audMixerDeviceXAudio2
//
// Evidence:
//   GTAVSRC: audMixerDeviceXAudio2::InitHardware  (rage/base/src/audiohardware/device_xaudio_pc.cpp)
//   literal: Fake Audio Mixer
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141662430, FUN_141ad0ef0, FUN_145a3d140, FUN_1443aee50, FUN_141b0bc20, FUN_145b52510, FUN_144dac8b0, FUN_1425a8750, FUN_1443aec40, FUN_1443aea20, FUN_1455aa3e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/audMixerDeviceXAudio2.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 audMixerDeviceXAudio2__InitHardware(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar4 = func_0x000144f97130(0x28);
  FUN_144dac8b0(uVar4,&UNK_14677d76c);
  _DAT_149aea280 = uVar4;
  FUN_1455aa3e0(uVar4);
  _DAT_149aea320 = FUN_141662430(0);
  _DAT_149aea328 = FUN_141662430(0);
  CoInitializeEx((void *)0x0,(void *)0x0);
  DAT_149aea330 = 1;
  cVar2 = FUN_1443aea20(param_1);
  if (cVar2 != '\0') {
    DAT_149aea330 = 0;
  }
  iVar3 = FUN_1425a8750();
  iVar3 = func_0x000145f401a0(iVar3 << 0x14,0x226e00);
  if (((-1 < iVar3) && (cVar2 = FUN_1443aec40(), cVar2 != '\0')) &&
     (cVar2 = FUN_1443aee50(), cVar2 != '\0')) {
    if (*(longlong *)(param_1 + 0x3ce58) == 0) {
      *(undefined8 *)(param_1 + 0x3ce50) = 0;
      *(undefined **)(param_1 + 0x3ce58) = &UNK_1443aee80;
      FUN_141b0bc20(param_1 + 0x3ce50);
    }
    if (*(char *)(param_1 + 0x3dd78) == '\0') {
      lVar5 = *(longlong *)(param_1 + 0x3dd70);
    }
    else {
      lVar5 = func_0x000144f97130(0x4d0);
      if (lVar5 != 0) {
        func_0x000145f0b960(lVar5);
        *(undefined1 *)(lVar5 + 0x4c8) = 0;
      }
      *(longlong *)(param_1 + 0x3dd70) = lVar5;
    }
    if ((lVar5 == 0) || (cVar2 = FUN_145b52510(lVar5), cVar2 != '\0')) {
      if ((*(byte *)(param_1 + 0x3ceb8) & 1) == 0) {
        *(undefined1 *)(param_1 + 0x3ceb9) = 1;
        uVar4 = FUN_141662430(0);
        *(undefined8 *)(param_1 + 0x3cec8) = uVar4;
        uVar4 = FUN_141ad0ef0(&UNK_145b94c00,param_1,0x8000,0xf,0xffffffff,0xf235b049,0);
        *(undefined8 *)(param_1 + 0x3cec0) = uVar4;
      }
      _DAT_149aea2f8 = 0;
      _DAT_149aea300 = FUN_1443aeed0;
      FUN_145a3d140(&DAT_149aea2f8);
      return 1;
    }
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return uVar4;
}

