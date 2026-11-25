// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14012c050  size: 243 bytes
// Name:    FUN_14012c050
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14012c050(undefined8 param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  ushort uVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  uVar6 = (ulonglong)(((uint)param_1 & 0xffff) << 4);
  if ((*(short *)(*(longlong *)(_DAT_14abbf348 + 0x28) + 8 + uVar6) ==
       (short)((ulonglong)param_1 >> 0x10)) &&
     (lVar2 = *(longlong *)(*(longlong *)(_DAT_14abbf348 + 0x28) + uVar6), lVar2 != 0)) {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if ((lVar3 != 0 && (*(byte *)(lVar2 + 0x154) & 1) != 0) && (*(char *)(lVar3 + 0x30) == '\x02'))
    {
      uVar6 = *(ulonglong *)(lVar2 + 0xf8);
      if ((((short)((ulonglong)param_1 >> 0x20) != -2) &&
          (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 8) + 0x20), *(char *)(lVar2 + 0x10) == '\x06'
          )) && (*(longlong *)(lVar2 + 0x88) != 0)) {
        uVar4 = func_0x0001403dc2f0();
        if (uVar4 == 0xffff) {
          uVar6 = 0;
        }
        else {
          uVar6 = uVar6 & *(ulonglong *)(*(longlong *)(lVar2 + 0x88) + (ulonglong)uVar4 * 0x10);
        }
      }
      bVar1 = *(byte *)(lVar3 + 0xfa);
      if ((((byte)(bVar1 - 9) < 3) || ((bVar1 < 7 && ((0x62U >> (bVar1 & 0x1f) & 1) != 0)))) ||
         ((byte)(bVar1 - 0xc) < 3)) {
        bVar7 = (char)uVar6 < '\0';
        uVar6 = CONCAT71((int7)(uVar6 >> 8),(uVar6 & 0x40) == 0);
      }
      else {
        bVar7 = -1 < (char)uVar6;
        uVar6 = (ulonglong)(((uint)uVar6 & 0x40) >> 6);
      }
      uVar5 = CONCAT71((int7)(uVar6 >> 8),(byte)uVar6 | bVar7);
    }
  }
  return uVar5 & 0xffffffff;
}

