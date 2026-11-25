// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140118050  size: 106 bytes
// Name:    FUN_140118050
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401180c0, FUN_140004b40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140118050(undefined1 (*param_1) [32],short *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong lStack_20;
  
  FUN_140004b40(0x147f56698);
  *param_1 = ZEXT1232(ZEXT812(0));
  param_1[1] = ZEXT1232(ZEXT812(0));
  *(undefined4 *)*param_1 = 0x3f800000;
  *(undefined4 *)(*param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)(param_1[1] + 8) = 0x3f800000;
  if (((param_2 != (short *)0x0) && (*param_2 != -1)) && (param_2[1] != -1)) {
    FUN_1401180c0(*param_2,param_2[1],param_1);
  }
  iRam0000000147f566a8 = iRam0000000147f566a8 + -1;
  uVar6 = uRam0000000147f56698;
  if (iRam0000000147f566a8 == 0) {
    do {
      uVar5 = uVar6;
      LOCK();
      uVar6 = uVar5;
      uVar1 = (ulonglong)((int)uVar5 - 1) | 0xffffffff00000000;
      if (uVar5 != uRam0000000147f56698) {
        uVar6 = uRam0000000147f56698;
        uVar1 = uRam0000000147f56698;
      }
      uRam0000000147f56698 = uVar1;
      UNLOCK();
    } while (uVar5 != uVar6);
    if ((uVar5 & 0xfffffffe) != 0) {
      lStack_20 = lRam0000000147f566a0;
      iRam0000000147f566a8 = 0;
      do {
        while (lStack_20 < 0) {
          cVar3 = FUN_1400062d0(0x147f566a0,1,&lStack_20);
          if (cVar3 != '\0') {
            return;
          }
        }
        LOCK();
        lVar4 = lStack_20;
        lVar2 = lStack_20 + 0x100000000;
        if (lStack_20 != lRam0000000147f566a0) {
          lVar4 = lRam0000000147f566a0;
          lVar2 = lRam0000000147f566a0;
        }
        lRam0000000147f566a0 = lVar2;
        UNLOCK();
        bVar7 = lStack_20 != lVar4;
        lStack_20 = lVar4;
      } while (bVar7);
      return;
    }
  }
  return;
}

