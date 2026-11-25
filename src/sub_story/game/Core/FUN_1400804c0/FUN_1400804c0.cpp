// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400804c0  size: 388 bytes
// Name:    FUN_1400804c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_142787510, FUN_1452080b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400804c0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  
  uVar1 = func_0x000144fd53c0();
  uVar2 = func_0x000144dc06d0(*(undefined4 *)(param_1 + 0x1c0),uVar1);
  if (0x240c83ff < uVar2) {
    uVar1 = func_0x000144fd53c0();
    *(undefined4 *)(param_1 + 0x1c0) = uVar1;
  }
  if (0.0 < (float)param_2) {
    *(float *)(param_1 + 0x1fc) = (float)param_2;
  }
  if (0.0 < (float)param_3) {
    *(float *)(param_1 + 0x200) = (float)param_3;
  }
  fVar3 = *(float *)(param_1 + 0x1e8);
  if (fVar3 < _DAT_145fc6ed8) {
    func_0x000142787450(param_1,param_2);
    fVar3 = *(float *)(param_1 + 0x1e8);
  }
  fVar4 = *(float *)(param_1 + 500);
  if ((_DAT_145fc6ed8 <= fVar3) && (fVar4 < _DAT_145fc6ed8)) {
    FUN_142787510(param_1,param_3);
    fVar4 = *(float *)(param_1 + 500);
  }
  if (_DAT_145fc6ed8 <= fVar4) {
    FUN_1452080b0(param_1,1);
  }
  if ((*(byte *)(param_1 + 0x215) & 2) == 0) {
    auVar5._0_12_ = ZEXT812(0);
    auVar5._12_4_ = 0;
    fVar3 = *(float *)(param_1 + 0x200) + *(float *)(param_1 + 0x1fc);
    if (0.0 < fVar3) {
      fVar4 = *(float *)(param_1 + 0x200) * *(float *)(param_1 + 500) +
              *(float *)(param_1 + 0x1fc) * *(float *)(param_1 + 0x1e8);
      auVar5 = vmaxss_avx(ZEXT416((uint)(fVar3 - fVar4)),auVar5);
      *(float *)(param_1 + 0x1f8) = fVar4 / fVar3;
      if (auVar5._0_4_ <= _DAT_14a943dbc) {
        *(byte *)(param_1 + 0x214) = *(byte *)(param_1 + 0x214) | 0x80;
      }
      if (auVar5._0_4_ <= _DAT_14615a2c4) {
        *(byte *)(param_1 + 0x216) = *(byte *)(param_1 + 0x216) | 2;
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x1f8) = 0x3f800000;
    *(byte *)(param_1 + 0x214) = *(byte *)(param_1 + 0x214) | 0x80;
    *(byte *)(param_1 + 0x216) = *(byte *)(param_1 + 0x216) & 0xfd;
  }
  return;
}

