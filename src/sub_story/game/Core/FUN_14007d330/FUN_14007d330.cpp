// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14007d330  size: 143 bytes
// Name:    FUN_14007d330
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Removing unreachable block (ram,0x00014007d375) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14007d330(void)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  
  uVar5 = CONCAT62((int6)((ulonglong)unaff_RSI >> 0x10),0xffff);
  do {
    if (_DAT_149af3f14 == _DAT_149af3f18) {
LAB_14007d3a4:
      return uVar5 & 0xffffffff;
    }
    do {
      uVar1 = _DAT_149af3f14 + 1;
      uVar2 = *(uint *)(_DAT_149af3f20 + (ulonglong)(_DAT_149af3f14 & _DAT_149af3f10 - 1U) * 4);
      if (uVar2 == uVar1) {
        LOCK();
        UNLOCK();
        uVar3 = (ulonglong)(_DAT_149af3f14 & _DAT_149af3f10 - 1U);
        iVar4 = _DAT_149af3f14 + _DAT_149af3f10;
        uVar5 = (ulonglong)*(ushort *)(_DAT_149af3f28 + uVar3 * 2);
        LOCK();
        _DAT_149af3f14 = uVar1;
        *(int *)(_DAT_149af3f20 + uVar3 * 4) = iVar4;
        UNLOCK();
        func_0x00014007d3c0(uVar5);
        goto LAB_14007d3a4;
      }
    } while (uVar1 <= uVar2);
  } while( true );
}

