// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140059b80  size: 206 bytes
// Name:    FUN_140059b80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140059b80(longlong param_1)

{
  short *psVar1;
  undefined8 uVar2;
  
  psVar1 = (short *)(param_1 + 0x26);
  *psVar1 = *psVar1 + -1;
  if (*psVar1 == 0) {
    if (*(longlong *)(param_1 + 0x60) != 0) {
      func_0x000144ee8ec0();
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(byte *)(param_1 + 0x118) = *(byte *)(param_1 + 0x118) & 0xfb;
      if ((*(byte *)(param_1 + 0x117) & 8) != 0) {
        uVar2 = func_0x000144f131b0(*(undefined2 *)(param_1 + 0x68));
        func_0x00014007bc40(uVar2,(int)*(short *)(param_1 + 0xbe));
      }
    }
    if (*(short *)(param_1 + 8) != -1) {
      func_0x000144e59e70(_DAT_14a923120);
      *(undefined2 *)(param_1 + 8) = 0xffff;
    }
    if (*(short *)(param_1 + 10) != -1) {
      func_0x000144e59e70(_DAT_14a923120);
      *(undefined2 *)(param_1 + 10) = 0xffff;
    }
    if (*(short *)(param_1 + 0xc) != -1) {
      func_0x000144e59e70(_DAT_14a923120);
      *(undefined2 *)(param_1 + 0xc) = 0xffff;
    }
    if (*(short *)(param_1 + 0xe) != -1) {
      func_0x000144e59e70(_DAT_14a923120);
      *(undefined2 *)(param_1 + 0xe) = 0xffff;
    }
  }
  return;
}

