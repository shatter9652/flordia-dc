// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b3140  size: 236 bytes
// Name:    FUN_1400b3140
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400b34d0, FUN_143515a60, FUN_1407c8cc0, FUN_143516630
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_1400b3140(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                       undefined1 *param_5)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined7 uVar7;
  ulonglong uVar6;
  
  *param_5 = 0;
  if ((param_2 & 0xfffffffe) == 2) {
    lVar5 = *(longlong *)(param_1 + 8);
    lVar4 = func_0x000144da6540(*(undefined4 *)(lVar5 + 0x9c));
    if ((*(byte *)(*(longlong *)(lVar4 + 0x10a8) + 0xcb2) & 0x10) != 0) {
      iVar3 = FUN_143515a60(param_1,param_3,param_4,1,0);
      if ((iVar3 == 0) && ((*(byte *)(param_1 + 0x10) & 1) != 0)) {
        FUN_143516630(param_1,param_1 + 0x1080);
      }
    }
    uVar7 = (undefined7)((ulonglong)param_4 >> 8);
    if (param_2 == 3) {
      cVar2 = FUN_1400b34d0(*(undefined8 *)(param_1 + 8));
      if (cVar2 != '\0') {
        uVar6 = CONCAT71(uVar7,1);
        FUN_1407c8cc0(param_1,1);
        lVar5 = func_0x000144da6540(*(undefined4 *)(lVar5 + 0x9c));
        pbVar1 = (byte *)(*(longlong *)(lVar5 + 0x10b0) + 0x15fa);
        *pbVar1 = *pbVar1 & 0xfe;
        *param_5 = 1;
        goto LAB_1400b3164;
      }
    }
    cVar2 = func_0x000145311e80(param_1 + 0x1390);
    if (cVar2 != '\0') {
      uVar6 = CONCAT71(uVar7,1);
      goto LAB_1400b3164;
    }
  }
  uVar6 = 0;
LAB_1400b3164:
  return uVar6 & 0xffffffff;
}

