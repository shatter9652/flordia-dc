// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140120530  size: 597 bytes
// Name:    FUN_140120530
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1455db8cc, FUN_1455db934, FUN_144daa2b0, FUN_140126880
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140120530(void)

{
  undefined1 auVar1 [16];
  char cVar2;
  longlong lVar3;
  longlong unaff_GS_OFFSET;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 in_ZMM3 [64];
  float fVar6;
  longlong alStack_30 [3];
  
  if ((*(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               4) < _DAT_147453f30) && (FUN_1455db8cc(&DAT_147453f30), _DAT_147453f30 == -1)) {
    FUN_144daa2b0(&DAT_147453f20);
    _DAT_147453f28 = 0.0;
    FUN_1455db934(&DAT_147453f30);
  }
  cVar2 = DAT_147453ec9;
  if (DAT_147453ec8 != DAT_147453ec9) {
    if ((DAT_147453ec8 == '\0') && (DAT_14a943950 != '\0')) {
      FUN_140126880();
      auVar1 = vroundss_avx(ZEXT416((uint)(_DAT_146159e14 / (float)_DAT_1498f84ac)),
                            ZEXT416((uint)(_DAT_146159e14 / (float)_DAT_1498f84ac)),0xb);
      fVar6 = ((float)(_DAT_14a94390c - 1) * _DAT_146159c28 + _DAT_14615a0f0) / auVar1._0_4_;
      QueryPerformanceCounter(alStack_30);
      _DAT_147453f20 = alStack_30[0];
      _DAT_147453f28 = fVar6;
    }
    DAT_147453ec8 = cVar2;
  }
  if (cVar2 != '\0') {
    QueryPerformanceCounter(alStack_30);
    if ((float)(alStack_30[0] - _DAT_147453f20) * _DAT_14abc3ca4 <= _DAT_147453f28) {
      fVar6 = _DAT_147453f28;
      QueryPerformanceCounter(alStack_30);
      auVar5._0_12_ = ZEXT812(0);
      auVar5._12_4_ = 0;
      auVar1._4_12_ = in_ZMM3._4_12_;
      auVar1._0_4_ = -((float)(alStack_30[0] - _DAT_147453f20) * _DAT_14abc3ca4) + fVar6;
      auVar1 = vmaxss_avx(auVar5,auVar1);
      if (_DAT_146159bd4 < auVar1._0_4_) {
        func_0x00014092eca0(2);
        return 1;
      }
      while (QueryPerformanceCounter(alStack_30),
            (float)(alStack_30[0] - _DAT_147453f20) * _DAT_14abc3ca4 <= _DAT_147453f28) {
        func_0x000144f4b620();
      }
    }
    QueryPerformanceCounter(alStack_30);
    lVar3 = _DAT_147453f20;
    _DAT_147453f20 = alStack_30[0];
    auVar1 = vroundss_avx(ZEXT416((uint)(_DAT_146159e14 / (float)_DAT_1498f84ac)),
                          ZEXT416((uint)(_DAT_146159e14 / (float)_DAT_1498f84ac)),0xb);
    auVar4._0_12_ = ZEXT812(0);
    auVar4._12_4_ = 0;
    auVar1 = vmaxss_avx(auVar4,ZEXT416((uint)(_DAT_146159c28 / auVar1._0_4_ +
                                             -((float)(alStack_30[0] - lVar3) * _DAT_14abc3ca4) +
                                             _DAT_147453f28)));
    _DAT_147453f28 = auVar1._0_4_;
  }
  return 0;
}

