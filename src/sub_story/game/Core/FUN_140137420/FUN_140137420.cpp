// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140137420  size: 65 bytes
// Name:    FUN_140137420
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ff02e0, FUN_143296180
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140137420(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  
  FUN_144ff02e0(param_1,0x42,&UNK_140cef7e0,0,0);
  cVar2 = func_0x0001452ed8f0();
  if (cVar2 != '\0') {
    FUN_143296180(param_1);
  }
  plVar1 = (longlong *)
           ((longlong)_DAT_14a210d10 * 0x548 + 0x1497e0068 +
           (ulonglong)*(uint *)(param_1 + 0xc) * 0x18);
  lVar3 = *plVar1;
  if ((((*(int *)(lVar3 + 0x24) != 0) || (*(int *)(lVar3 + 0x54) != 0)) ||
      (*(int *)(lVar3 + 0x84) != 0)) ||
     ((*(int *)(lVar3 + 0xb4) != 0 || (*(int *)(lVar3 + 0xe4) != 0)))) {
    FUN_144ff02e0(param_1,0x43,&UNK_140fd2d80,0,0);
    lVar3 = *plVar1;
  }
  if (*(int *)(lVar3 + 0x144) != 0) {
    FUN_144ff02e0(param_1,0x44,&UNK_140d85520,0,0);
    lVar3 = *plVar1;
  }
  if (((*(int *)(lVar3 + 0x504) != 0) || (*(int *)(lVar3 + 0x534) != 0)) ||
     (*(int *)(lVar3 + 0x564) != 0)) {
    FUN_144ff02e0(param_1,0x4c,&UNK_140f08d20,0,0);
  }
  FUN_144ff02e0(param_1,0x48,&UNK_14096a610,0,0);
  lVar3 = *plVar1;
  if (*(int *)(lVar3 + 0x594) != 0) {
    FUN_144ff02e0(param_1,0x4d,&UNK_140ec9f30,0,0);
    lVar3 = *plVar1;
  }
  if (*(int *)(lVar3 + 0x174) != 0) {
    FUN_144ff02e0(param_1,0x45,&UNK_140dc0120,0,0);
    lVar3 = *plVar1;
  }
  if (*(int *)(lVar3 + 0x1a4) != 0) {
    FUN_144ff02e0(param_1,0x46,&UNK_140dc05c0,0,0);
    lVar3 = *plVar1;
  }
  if (((((*(int *)(lVar3 + 0x234) != 0) || (*(int *)(lVar3 + 0x264) != 0)) ||
       (*(int *)(lVar3 + 0x294) != 0)) ||
      ((*(int *)(lVar3 + 0x2c4) != 0 || (*(int *)(lVar3 + 0x2f4) != 0)))) ||
     ((*(int *)(lVar3 + 0x324) != 0 || (*(int *)(lVar3 + 0x354) != 0)))) {
    FUN_144ff02e0(param_1,0x49,&UNK_140d606a0,0,0);
    lVar3 = *plVar1;
  }
  if (*(int *)(lVar3 + 0x1d4) != 0) {
    FUN_144ff02e0(param_1,0x47,&UNK_140d8b440,0,0);
    lVar3 = *plVar1;
  }
  if (*(int *)(lVar3 + 0x414) != 0) {
    FUN_144ff02e0(param_1,0x4b,&UNK_140e50c80,0,0);
  }
  FUN_144ff02e0(param_1,0x43,&UNK_140fc5720,0,0);
  FUN_144ff02e0(param_1,0x43,&UNK_140c4b6c0,0,0);
  FUN_144ff02e0(param_1,0x43,FUN_1407e8bf0,0,0);
  FUN_144ff02e0(param_1,0x4e,&UNK_14093cd10,1,0);
  FUN_144ff02e0(param_1,0x50,&UNK_1407e5be0,0,0);
  FUN_144ff02e0(param_1,0x4a,&UNK_1411ce190,0,0);
  FUN_144ff02e0(param_1,0x4f,&UNK_141191bf0,0,0);
  FUN_144ff02e0(param_1,0x51,&UNK_140d01b10,0,0);
  FUN_144ff02e0(param_1,0x52,&UNK_140c4ce50,0,0);
  return;
}

