// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011c6a0  size: 240 bytes
// Name:    FUN_14011c6a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ef3ee0, FUN_14011c6a0, FUN_14512a8c0, FUN_1407c3470, FUN_145224e10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_14011c6a0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  
  if (*(char *)(param_2 + 0x23e) != '\0') {
    func_0x000141fa92f0(param_2);
  }
  if (*(char *)(param_2 + 0x23f) != '\0') {
    func_0x000140128ea0(param_2);
  }
  if (*(char *)(param_2 + 0x23d) != '\0') {
    FUN_1407c3470(param_2);
  }
  if (*(char *)(param_2 + 0x240) != '\0') {
    cVar1 = FUN_144ef3ee0(param_2);
    if (cVar1 != '\0') {
      if ((*(byte *)(param_2 + 0x214) & 1) != 0) {
        FUN_145224e10(param_1,param_2,*(undefined8 *)(param_2 + 0x180),1);
      }
      uVar3 = func_0x000144fd53c0();
      cVar1 = func_0x000144e3f250(*(undefined4 *)(param_2 + 0x1a4),uVar3);
      uVar5 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
      if (cVar1 != '\0') {
        uVar3 = func_0x000144fd53c0();
        *(undefined4 *)(param_2 + 0x1a4) = uVar3;
        FUN_14512a8c0(param_2,param_1);
        if (*(longlong *)(param_2 + 0x178) != 0) {
          lVar4 = func_0x000140080ae0(*(undefined4 *)(*(longlong *)(param_2 + 0x178) + 0xc));
          if (lVar4 != 0) {
            bVar2 = FUN_14011c6a0(param_1,lVar4);
            *(byte *)(param_2 + 0x216) = *(byte *)(param_2 + 0x216) & 0xfe | bVar2;
          }
        }
      }
      goto LAB_14011c786;
    }
  }
  uVar5 = 0;
LAB_14011c786:
  return uVar5 & 0xffffffff;
}

