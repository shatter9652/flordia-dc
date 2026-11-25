// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140128cb0  size: 488 bytes
// Name:    FUN_140128cb0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1455dcc0c, FUN_1455db8cc, FUN_143e49210, FUN_1455db934, FUN_141d561c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140128cb0(longlong param_1)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  longlong unaff_GS_OFFSET;
  char cVar5;
  
  if ((*(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               4) < _DAT_147f03218) && (FUN_1455db8cc(&DAT_147f03218), _DAT_147f03218 == -1)) {
    FUN_141d561c0(&DAT_147f031e0,0x83bc0e39);
    iVar1 = _DAT_147f031ec;
    _DAT_147f031e0 = &UNK_146719cd0;
    _DAT_147f03210 = 1;
    iVar3 = _DAT_147f031e8;
    if (_DAT_147f03200 != 0 || _DAT_147f031f0 != 0) {
      iVar3 = (*_DAT_147f03208)(&DAT_147f031f0);
    }
    uVar2 = func_0x0001409d3e70(iVar3 + iVar1,1);
    _DAT_147f03210 = CONCAT11(DAT_147f03210_1,uVar2);
    FUN_1455dcc0c(&UNK_143014400);
    FUN_1455db934(&DAT_147f03218);
  }
  if (DAT_147f03210 == '\x01') {
    *(undefined1 *)(param_1 + 0x31) = 0;
    *(undefined1 *)(param_1 + 0x33) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  iVar3 = *(int *)(param_1 + 8);
  cVar5 = iVar1 != 0;
  *(char *)(param_1 + 0x32) = cVar5;
  if (iVar3 == 0) goto LAB_140128d7e;
  if (*(char *)(param_1 + 0x33) == '\0') {
    uVar4 = *(undefined4 *)(param_1 + 0xc);
    uVar2 = FUN_143e49210(0,iVar3,uVar4,0x2f77d9,0xc9ea0b3b);
    *(undefined1 *)(param_1 + 0x33) = uVar2;
    if (iVar1 == 0) goto LAB_140128d3b;
  }
  else if (iVar1 == 0) {
    uVar4 = *(undefined4 *)(param_1 + 0xc);
LAB_140128d3b:
    cVar5 = FUN_143e49210(0,iVar3,uVar4,0x2f77d9,0x4740587a);
    *(char *)(param_1 + 0x32) = cVar5;
  }
  if (*(char *)(param_1 + 0x31) == '\0') {
    uVar2 = FUN_143e49210(0,iVar3,*(undefined4 *)(param_1 + 0xc),0x2f77d9,0x9c5d9c90);
    *(undefined1 *)(param_1 + 0x31) = uVar2;
  }
LAB_140128d7e:
  if ((iVar1 != 0) && (cVar5 == '\0')) {
    uVar2 = FUN_143e49210(0,iVar1,*(undefined4 *)(param_1 + 0x14),0x2f77d9,0x4740587a);
    *(undefined1 *)(param_1 + 0x32) = uVar2;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 0x33) == '\0') {
      uVar2 = FUN_143e49210(0,iVar1,*(undefined4 *)(param_1 + 0x1c),0x2f77d9,0xc9ea0b3b);
      *(undefined1 *)(param_1 + 0x33) = uVar2;
    }
    if (*(char *)(param_1 + 0x31) == '\0') {
      uVar2 = FUN_143e49210(0,iVar1,*(undefined4 *)(param_1 + 0x1c),0x2f77d9,0x9c5d9c90);
      *(undefined1 *)(param_1 + 0x31) = uVar2;
    }
  }
  return;
}

