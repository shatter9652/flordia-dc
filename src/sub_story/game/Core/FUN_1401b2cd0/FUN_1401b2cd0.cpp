// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b2cd0  size: 312 bytes
// Name:    FUN_1401b2cd0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_143e44840, FUN_143e446e0, FUN_143e439f0, FUN_143e44630, FUN_143e43fe0, FUN_143e43ee0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401b2cd0(void)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined2 uVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong unaff_GS_OFFSET;
  undefined1 uStack_53;
  undefined2 uStack_52;
  undefined8 auStack_50 [3];
  
  if ((DAT_146c392e8 != '\x04') || (DAT_1498cc2a6 == '\x01')) {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    if (*(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1448) == 0) {
      uStack_52 = 0;
    }
    FUN_143e439f0(&uStack_52);
    uVar3 = uStack_52;
    lVar2 = _DAT_1498cc230;
    uVar6 = (ulonglong)_DAT_1498cc22c;
    if (uVar6 != 0) {
      lVar5 = 0;
      do {
        uVar1 = *(undefined8 *)(lVar2 + lVar5);
        auStack_50[0] = uVar1;
        cVar4 = func_0x000143e43ea0(uVar1,uVar3);
        if (cVar4 != '\0') {
          uStack_53 = func_0x000143e43210(uVar1);
          FUN_143e43ee0(auStack_50,&uStack_53);
        }
        lVar5 = lVar5 + 8;
      } while (uVar6 << 3 != lVar5);
    }
    if ((ulonglong)_DAT_1498cc2bc != 0) {
      FUN_143e43fe0(_DAT_1498cc2c0,_DAT_1498cc2c0 + (ulonglong)_DAT_1498cc2bc * 4);
      auStack_50[0] = 4;
      FUN_143e44630(auStack_50);
      FUN_143e446e0();
      FUN_143e44840(auStack_50);
      _DAT_1498cc2bc = 0;
      return;
    }
  }
  _DAT_1498cc2bc = 0;
  uRam00000001498cc298 = 0;
  DAT_146c392e8 = 4;
  if (_DAT_1498cc2c0 != 0) {
    func_0x000144d9c130();
  }
  _DAT_1498cc2c0 = 0;
  uRam00000001498cc2b8 = 0;
  return;
}

