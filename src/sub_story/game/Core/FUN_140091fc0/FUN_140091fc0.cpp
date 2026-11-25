// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140091fc0  size: 233 bytes
// Name:    FUN_140091fc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ee72e0, FUN_14150d210, FUN_145238d70, FUN_1403fbfb0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140091fc0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auVar5 [64];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [32];
  
  cVar2 = FUN_144ee72e0(param_2);
  if ((cVar2 != '\0') && (2 < (byte)(*(char *)(param_2 + 0xfa) - 9U))) {
    uVar4 = 0;
    cVar2 = FUN_1403fbfb0(param_1,0);
    if (cVar2 != '\0') goto LAB_140091fe1;
    lVar3 = FUN_145238d70(*(undefined4 *)(param_1 + 0x9c));
    uVar1 = _DAT_14ab7f678;
    auVar5 = ZEXT464(_DAT_146159d50);
    if ((*(int *)(lVar3 + 0x58) != -1) && (*(int *)(lVar3 + 0x5c) != 0xffff)) {
      auVar5 = ZEXT464(*(uint *)(&UNK_1461671c8 +
                                (ulonglong)((*(byte *)(lVar3 + 0x74) & 2) == 0) * 4));
    }
    uStack_48 = *(undefined8 *)(param_2 + 0x70);
    uStack_40 = *(undefined8 *)(param_2 + 0x78);
    func_0x000144dc3790(&uStack_48,auStack_38);
    lVar3 = FUN_14150d210(uVar1,auStack_38,auVar5._0_8_,0x14a94ff30,0xbf800000,0);
    if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0xc) & 0x12) == 0)) {
      uVar4 = CONCAT71((int7)((ulonglong)uVar1 >> 8),*(char *)(lVar3 + 0x14) != '\0');
      goto LAB_140091fe1;
    }
  }
  uVar4 = 0;
LAB_140091fe1:
  return uVar4 & 0xffffffff;
}

